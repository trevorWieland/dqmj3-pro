import hashlib


HEADERS = {
    "src/native/wave032/third_party/zlib-1.2.7/zlib.h":
        (86717, "31b7ed2b5bceea407626bdbcf16a1efa9770e91b646012906ac8303aa3f1f242", ["zconf.h"]),
    "src/native/wave032/third_party/zlib-1.2.7/zconf.h":
        (15291, "ed886c15c846d31d2f6e6f5a33d3f6547812d85ec2aff4c3d70e8781e45d0959", []),
    "src/native/wave036/third_party/zlib-1.4/zlib.h":
        (104881, "2c404dcaa08709c2a129aea18f3dad4fb5acc5cb52ef12b6223bf8e78c195801", ["zconf.h"]),
    "src/native/wave036/third_party/zlib-1.4/zconf.h":
        (17304, "1e91041e94e3f13a12b770be849c4c674e37caddf94e37acddf853bb54a09adf", []),
}


def solo_includes(root, path, profile):
    relative = path.relative_to(root.resolve()).as_posix()
    known = HEADERS.get(relative)
    if known is None:
        return None
    if profile != "zlib-solo":
        raise RuntimeError("Public zlib headers require the explicit Z_SOLO profile")
    size, expected, includes = known
    data = path.read_bytes()
    if len(data) != size or hashlib.sha256(data).hexdigest() != expected:
        raise RuntimeError("Unmodified public zlib header identity differs: " + relative)
    return includes
