#include "sdk_md5062ag.h"

const Md5Word062ag fixture_md5_layout062ag[8] = {
    sizeof(Md5Context062ag), sizeof(void *),
    __builtin_offsetof(Md5Context062ag, state),
    __builtin_offsetof(Md5Context062ag, count),
    __builtin_offsetof(Md5Context062ag, block),
    __builtin_offsetof(Md5Context062ag, digest),
    sizeof(Md5Methods062ag), _Alignof(Md5Context062ag)
};
