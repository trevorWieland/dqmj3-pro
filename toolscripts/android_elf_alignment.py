import hashlib
from pathlib import Path

from elftools.elf.elffile import ELFFile


ROOT = Path(__file__).resolve().parents[1]
PAGE = 16384


def validate_segments(rows):
    loads = [row for row in rows if row["type"] == "PT_LOAD"]
    if not loads or any(row["alignment"] < PAGE or row["alignment"] & (row["alignment"] - 1)
        or (row["address"] - row["offset"]) % PAGE for row in loads):
        raise ValueError("Android load segments lack valid 16 KiB alignment/congruence")
    for row in rows:
        if row["type"] == "PT_GNU_RELRO":
            end = row["address"] + row["bytes"]
            page_end = (end + PAGE - 1) & -PAGE
            if end % PAGE and any(load["flags"] & 2 and load["address"] < page_end
                and load["address"] + load["bytes"] > end for load in loads):
                raise ValueError("Writable storage shares the RELRO trailing 16 KiB page")
    return True


def inspect(path):
    path = Path(path).resolve()
    if not path.is_relative_to(ROOT):
        raise ValueError("Android ELF inspection requires a repository-owned artifact")
    with path.open("rb") as stream:
        elf = ELFFile(stream)
        if elf["e_machine"] != "EM_AARCH64":
            raise ValueError("Android ELF is not AArch64")
        rows = [{"type": row["p_type"], "address": row["p_vaddr"], "offset": row["p_offset"],
            "bytes": row["p_memsz"], "alignment": row["p_align"], "flags": row["p_flags"]} for row in elf.iter_segments()]
    validate_segments(rows)
    relro = []
    for row in rows:
        if row["type"] == "PT_GNU_RELRO":
            end = row["address"] + row["bytes"]
            page_end = (end + PAGE - 1) & -PAGE
            relro.append({"start": row["address"], "endExclusive": end, "trailingPageEndExclusive": page_end,
                "containingWritableLoads": [[load["address"], load["address"] + load["bytes"]] for load in rows
                    if load["type"] == "PT_LOAD" and load["flags"] & 2 and load["address"] <= row["address"] < load["address"] + load["bytes"]],
                "writableLoadBytesSharingTrailingPage": [[max(end, load["address"]), min(page_end, load["address"] + load["bytes"])]
                    for load in rows if load["type"] == "PT_LOAD" and load["flags"] & 2
                    and load["address"] < page_end and load["address"] + load["bytes"] > end]})
    data = path.read_bytes()
    return {"artifact": {"path": path.relative_to(ROOT).as_posix(), "bytes": len(data), "sha256": hashlib.sha256(data).hexdigest()},
        "segments": rows, "relroExtentChecks": relro, "sixteenKiBLoadAndRelroContractPassed": True,
        "officialGuidance": "https://developer.android.com/guide/practices/page-sizes",
        "operatingSystemOrPhysicalPageSizeExecutionClaimed": False}


if __name__ == "__main__":
    import argparse
    import json
    parser = argparse.ArgumentParser()
    parser.add_argument("artifacts", type=Path, nargs="+")
    print(json.dumps([inspect(path) for path in parser.parse_args().artifacts], indent=2))
