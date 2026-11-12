"""Reviewed public headers for the vendored zlib trees.

A unit that includes upstream zlib source must compile against upstream's own
headers, and those headers include the C library. The public-compile census
refuses a system include in unit text unless the file is reviewed here, so this
table is the review: each entry pins one upstream file's size and SHA-256, names
the profile that may trust it, and states the quoted headers it may include.
The census follows exactly that graph, so a changed header, an added include or
a unit that names the wrong zlib generation fails instead of compiling.

Two generations are reviewed, and they are not interchangeable:

* ``zlib-solo`` -- the 1.2.7 and 1.4 releases. Their headers implement
  ``Z_SOLO``, which removes the C library includes; the profile passes
  ``-DZ_SOLO``.
* ``zlib-1.2.5`` -- the release the measured image actually links. It predates
  ``Z_SOLO``, so its headers include ``<stddef.h>``, ``<string.h>``,
  ``<stdlib.h>`` and ``<sys/types.h>`` even in a freestanding build. armcc 4.1
  supplies the first three and the reviewed ``shim/`` directory supplies
  ``sys/types.h``; the pinned Clang distribution supplies none of them, so the
  shim also carries minimal declarations for the census compile.

The system includes themselves are the reviewed file's business: a file listed
here may include what the C library offers, and that is why its identity is
pinned. A file that is not listed is ordinary source: its quoted includes are
followed recursively and a system include in it is still refused.
"""

import hashlib


ZLIB_SOLO = "zlib-solo"
ZLIB_125 = "zlib-1.2.5"

HEADERS = {
    # (bytes, sha256, quoted includes, profile)
    "src/native/wave032/third_party/zlib-1.2.7/zlib.h":
        (86717, "31b7ed2b5bceea407626bdbcf16a1efa9770e91b646012906ac8303aa3f1f242", ["zconf.h"], ZLIB_SOLO),
    "src/native/wave032/third_party/zlib-1.2.7/zconf.h":
        (15291, "ed886c15c846d31d2f6e6f5a33d3f6547812d85ec2aff4c3d70e8781e45d0959", [], ZLIB_SOLO),
    "src/native/wave036/third_party/zlib-1.4/zlib.h":
        (104881, "2c404dcaa08709c2a129aea18f3dad4fb5acc5cb52ef12b6223bf8e78c195801", ["zconf.h"], ZLIB_SOLO),
    "src/native/wave036/third_party/zlib-1.4/zconf.h":
        (17304, "1e91041e94e3f13a12b770be849c4c674e37caddf94e37acddf853bb54a09adf", [], ZLIB_SOLO),
    "src/native/third_party/zlib-1.2.5/zlib.h":
        (79564, "8d9049f1317cbb45e7da3a19752dd01e8c03561637b70afc0b2da9aabc5f12d5", ["zconf.h"], ZLIB_125),
    "src/native/third_party/zlib-1.2.5/zconf.h":
        (13375, "78eede3c265117bc8a1b0cb042e2ba8333fdbba6b78eb25094eb52b1fdc04bed", ["sys/types.h"], ZLIB_125),
    "src/native/third_party/zlib-1.2.5/zutil.h":
        (7153, "65c868c99d5fcf336b9bf2110bbfc21d51ea972fbec613befc91e0b62d62e8f1",
         ["zlib.h", "stddef.h", "string.h", "stdlib.h"], ZLIB_125),
    "src/native/third_party/zlib-1.2.5/trees.c":
        (45242, "e225bcf76be1df0fe603f2f68eb6c3a64d8da3698e862d5bec76c9be21c404d6",
         ["deflate.h", "trees.h"], ZLIB_125),
    "src/native/third_party/zlib-1.2.5/inflate.c":
        (52623, "0564169c9fefb4825493cb60b065b3b978c356ec2672a8150b7b73057f5d5215",
         ["zutil.h", "inftrees.h", "inflate.h", "inffast.h", "inffixed.h"], ZLIB_125),
    # The reviewed build shims are pinned like the upstream files whose
    # includes they satisfy, so a change to one is a review event too.
    "src/native/third_party/zlib-1.2.5/shim/stddef.h":
        (562, "43fc258618385df59c674ba8841ab57d5650c9515ccdb9b57dd0a0bc384eccd4", [], ZLIB_125),
    "src/native/third_party/zlib-1.2.5/shim/string.h":
        (636, "9738c2352b8f2dd2fdf848975218872884d1cbd2c31e3c96ef5fd0042047731b", ["stddef.h"], ZLIB_125),
    "src/native/third_party/zlib-1.2.5/shim/stdlib.h":
        (623, "0624d2af0a077b32b6a405e17b5c6da0d776f9f5997f357136cef6c852f689c3", ["stddef.h"], ZLIB_125),
    "src/native/third_party/zlib-1.2.5/shim/sys/types.h":
        (322, "2aa88990e8b662d8503a6d61b3ec94ad7e571bdf7de0cfed9377485e87dd4368", [], ZLIB_125),
}


def solo_includes(root, path, profile):
    """The reviewed quoted includes of a pinned zlib file, or None.

    None means "ordinary source": the census parses the file itself. A pinned
    file is trusted only under its own profile, so a unit cannot borrow the
    1.2.5 review for a 1.2.7 header or the other way round.
    """
    relative = path.relative_to(root.resolve()).as_posix()
    known = HEADERS.get(relative)
    if known is None:
        return None
    size, expected, includes, required = known
    if profile != required:
        raise RuntimeError("Public zlib headers require the explicit %s profile" % required)
    data = path.read_bytes()
    if len(data) != size or hashlib.sha256(data).hexdigest() != expected:
        raise RuntimeError("Unmodified public zlib header identity differs: " + relative)
    return includes
