import argparse
import hashlib
import json
from pathlib import Path
import random
import struct

from md5_stream029_build import ROOT, build, pin
from md5_stream029_oracle import Arm, Android, Windows, ORIGINAL


def initial(seed):
    return bytes((index * 17 + seed * 13) & 255 for index in range(4096))


def chunks(length, mode):
    if mode == 0:
        return [length]
    sizes, left = [], length
    cycle = [1, 55, 7, 64, 3, 128] if mode == 1 else [63, 1, 65, 2, 17]
    index = 0
    while left:
        count = min(left, cycle[index % len(cycle)])
        sizes.append(count)
        left -= count
        index += 1
    return sizes or [0]


def execute(output):
    output = output.resolve()
    output.mkdir(parents=True, exist_ok=True)
    products = {target: build(output / target, target) for target in ["arm", "windows", "android"]}
    engines = [Arm(), Arm(products["arm"][0]), Windows(products["windows"][0]), Android(products["android"][0])]
    rows = []
    calls = 0
    def step(states, operation, seed, **arguments):
        nonlocal calls
        results = [engine.execute(operation, memory, seed=seed, **arguments) for engine, memory in zip(engines, states)]
        if not all(memory == results[0] for memory in results):
            mismatch = [{"backend": name, "differentOffsets": [i for i, (x, y) in enumerate(zip(results[0], other)) if x != y],
                "sha256": hashlib.sha256(other).hexdigest()} for name, other in zip(["original", "source-arm", "windows", "aarch64"], results)]
            (output / "development-failure.json").write_text(json.dumps({"operation": operation, "seed": seed, "arguments": arguments, "differences": mismatch}, indent=2))
            raise ValueError("MD5 whole caller arenas differ: " + str(output / "development-failure.json"))
        calls += 1
        return results
    lengths = [0, 1, 2, 3, 4, 7, 14, 15, 26, 31, 32, 55, 56, 57, 62, 63, 64, 65, 80, 127, 128, 129, 255, 256, 257, 511, 512, 513, 1024]
    for length in lengths:
        message = bytes((index * 37 + length * 11) & 255 for index in range(length))
        for mode in range(3):
            seed = len(rows)
            memory = initial(seed)
            states = step([memory] * 4, "init", seed)
            states = step(states, "update", seed, input_offset=None, count=0)
            consumed = 0
            observations = []
            for count in chunks(length, mode):
                part = message[consumed:consumed + count]
                offset = 512 + seed % 4
                states = [memory[:offset] + part + memory[offset + count:] for memory in states]
                states = step(states, "update", seed, input_offset=offset, count=count)
                consumed += count
                assert struct.unpack_from("<II", states[0], 128) == (consumed, 0)
                observations.append(hashlib.sha256(states[0]).hexdigest())
            states = step(states, "final", seed, output=3072 + seed % 4)
            digest = states[0][3072 + seed % 4:3088 + seed % 4].hex()
            assert digest == hashlib.md5(message).hexdigest()
            rows.append({"kind": "hashlib-stream", "messageBytes": length, "chunkMode": mode, "chunks": chunks(length, mode),
                "messageSha256": hashlib.sha256(message).hexdigest(), "digest": digest, "intermediateArenaHashes": observations,
                "finalArenaSha256": hashlib.sha256(states[0]).hexdigest()})
    print("hashlib streaming profiles " + str(len(rows)), flush=True)
    for remainder in range(64):
        for wrap in [False, True]:
            for count in sorted({0, 1, max(1, 63 - remainder), 64 - remainder, 65 - remainder, 128}):
                seed = len(rows)
                memory = bytearray(initial(seed))
                low, high = ((0xffffffc0 + remainder, 0xffffffff) if wrap else (remainder, seed))
                state = [random.Random(seed * 11 + index).getrandbits(32) for index in range(4)]
                struct.pack_into("<6I", memory, 128, low, high, *state)
                states = step([bytes(memory)] * 4, "update", seed, input_offset=512 + seed % 4, count=count)
                assert struct.unpack_from("<II", states[0], 128) == ((low + count) & 0xffffffff, (high + ((low + count) >> 32)) & 0xffffffff)
                update_hash = hashlib.sha256(states[0]).hexdigest()
                states = step(states, "final", seed, output=3072 + seed % 4)
                rows.append({"kind": "arbitrary-prefix-and-count-carry", "remainder": remainder, "wrapHighCounter": wrap,
                    "inputBytes": count, "initialArenaSha256": hashlib.sha256(memory).hexdigest(), "afterUpdateSha256": update_hash,
                    "finalArenaSha256": hashlib.sha256(states[0]).hexdigest()})
        if remainder % 8 == 7:
            print("counter remainder profiles " + str(remainder + 1), flush=True)
    for relative in range(-16, 89):
        seed = len(rows)
        states = step([initial(seed)] * 4, "init", seed)
        states = step(states, "update", seed, count=65, input_offset=512 + seed % 4)
        states = step(states, "final", seed, output=128 + relative)
        rows.append({"kind": "output-context-overlap", "outputRelativeToContext": relative,
            "finalArenaSha256": hashlib.sha256(states[0]).hexdigest()})
    coverage = [{"entry": entry, "instructionBytes": size, "visitedInstructions": len(engines[0].coverage & set(range(entry, entry + size, 4))),
        "unvisitedInstructionAddresses": sorted(set(range(entry, entry + size, 4)) - engines[0].coverage)} for entry, size in [(0x1b24a0, 44), (0x3019f0, 172), (0x1b2214, 644)]]
    result = {"schemaVersion": 1, "status": "development-positive-only-no-qualification", "cases": rows,
        "scenarioCount": len(rows), "apiCallsEachBackend": calls, "wholeCallerArenasEqual": True, "arenaBytes": 4096,
        "hashlibStreamingProfiles": 87, "outputContextOverlapProfiles": 105, "coverage": coverage,
        "builds": {key: value[1] for key, value in products.items()}, "sourceOriginalModuleMapped": False,
        "negativeControlsRun": False, "abiCallerClosureQualified": False, "sourceCreditGranted": 0,
        "androidOsOrPhysicalDeviceClaimed": False, "wholeGameClaimed": False}
    (output / "report.json").write_text(json.dumps(result, indent=2) + "\n", encoding="utf-8")
    print(json.dumps({"scenarios": len(rows), "apiCallsEachBackend": calls, "qualificationGranted": False}), flush=True)
    return result


if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument("--output", type=Path, default=ROOT / "work/md5-stream029/positive-development")
    execute(parser.parse_args().output)
