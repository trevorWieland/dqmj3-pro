import argparse
import json
import os
import re
import sys
import urllib.error
import urllib.request


PATTERN = re.compile(r"<!--\s*dqm-claim\s*(\{.*?\})\s*-->", re.DOTALL)
REQUIRED = ("lane", "scope", "functions", "bytes")
LIMIT = 5


def parse(body):
    if not isinstance(body, str):
        raise ValueError("Missing pull request body")
    match = PATTERN.search(body)
    if not match:
        raise ValueError("Missing claim block: <!-- dqm-claim {\"lane\":...,\"scope\":...,\"functions\":N,\"bytes\":N} -->")
    try:
        claim = json.loads(match.group(1))
    except ValueError as error:
        raise ValueError("Claim block is not valid JSON: " + str(error))
    for key in REQUIRED:
        if key not in claim:
            raise ValueError("Claim block is missing required key: " + key)
    if claim["lane"] not in ("vm", "filesystem", "streams", "graphics", "platform", "inventory", "docs"):
        raise ValueError("Claim lane is not one of vm, filesystem, streams, graphics, platform, inventory, docs")
    for key in ("functions", "bytes"):
        if not isinstance(claim[key], int) or claim[key] < 0:
            raise ValueError("Claim " + key + " must be a non-negative integer")
    if not isinstance(claim["scope"], str) or not claim["scope"].strip():
        raise ValueError("Claim scope must be a non-empty string")
    shared = claim.get("shared", [])
    if not isinstance(shared, list) or any(not isinstance(item, str) for item in shared):
        raise ValueError("Claim shared must be a list of repository paths")
    claim["shared"] = shared
    return claim


def open_prs(repository, token, current):
    request = urllib.request.Request(
        "https://api.github.com/repos/%s/pulls?state=open&per_page=100" % repository,
        headers={"Authorization": "Bearer " + token, "Accept": "application/vnd.github+json",
                 "User-Agent": "dqm-pr-scope"})
    with urllib.request.urlopen(request, timeout=30) as response:
        payload = json.load(response)
    others = [row for row in payload if row.get("number") != current]
    shared = set()
    for row in others:
        body = row.get("body") or ""
        match = PATTERN.search(body)
        if match:
            try:
                shared.update(json.loads(match.group(1)).get("shared", []))
            except ValueError:
                continue
    return others, shared


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--body", default=None)
    parser.add_argument("--repository", default=os.environ.get("GITHUB_REPOSITORY"))
    parser.add_argument("--number", type=int, default=0)
    parser.add_argument("--json", action="store_true")
    args = parser.parse_args()

    body = args.body
    if body is None:
        body = os.environ.get("PR_BODY", "")
    number = args.number or int(os.environ.get("PR_NUMBER", "0") or 0)

    try:
        claim = parse(body)
    except ValueError as error:
        print("pr-scope failed: " + str(error), file=sys.stderr)
        return 1

    result = {"claim": claim, "openPullRequests": None, "contended": [], "passed": True}
    token = os.environ.get("GH_TOKEN") or os.environ.get("GITHUB_TOKEN")
    if token and args.repository and number:
        try:
            others, shared = open_prs(args.repository, token, number)
        except (urllib.error.URLError, OSError, ValueError) as error:
            print("pr-scope warning: could not list open pull requests: " + str(error), file=sys.stderr)
            others, shared = [], set()
        result["openPullRequests"] = len(others) + 1
        result["contended"] = sorted(set(claim["shared"]) & shared)
        if len(others) + 1 > LIMIT:
            result["passed"] = False
            result["reason"] = "more than %d pull requests are open (%d)" % (LIMIT, len(others) + 1)
        if result["contended"]:
            result["passed"] = False
            result["reason"] = "shared file claimed by another open pull request"

    print(json.dumps(result, indent=1) if args.json else
          "lane=%s scope=%s functions=%d bytes=%d open=%s contended=%d"
          % (claim["lane"], claim["scope"], claim["functions"], claim["bytes"],
             result["openPullRequests"], len(result["contended"])))
    if not result["passed"]:
        print("pr-scope failed: " + result["reason"], file=sys.stderr)
        return 1
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
