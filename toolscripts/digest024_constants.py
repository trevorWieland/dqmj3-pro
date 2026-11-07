import argparse
import hashlib
import math
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
TARGET = ROOT / "src/native/wave024/digest_constants.h"


def content():
    values = [int(abs(math.sin(i + 1)) * (1 << 32)) for i in range(64)]
    assert values[0] == 0xd76aa478 and values[10] == 0xffff5bb1 and values[-1] == 0xeb86d391
    rows = ["    " + ", ".join("0x%08xu" % value for value in values[i:i + 4]) + "," for i in range(0, 64, 4)]
    return "#ifndef DQM_DIGEST_CONSTANTS024_H\n#define DQM_DIGEST_CONSTANTS024_H\n\nstatic const unsigned int digest_constants024[64] = {\n" + "\n".join(rows) + "\n};\n\n#endif\n"


if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument("--check", action="store_true")
    args = parser.parse_args()
    expected = content().encode("utf-8")
    if args.check:
        assert TARGET.read_bytes() == expected
    else:
        TARGET.parent.mkdir(parents=True, exist_ok=True)
        TARGET.write_bytes(expected)
    print("RFC1321-derived constants SHA256=" + hashlib.sha256(expected).hexdigest())
