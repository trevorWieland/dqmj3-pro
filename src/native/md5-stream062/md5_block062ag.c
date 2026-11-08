#include "sdk_md5062ag.h"
#include "digest.h"

void sdk_md5_block062ag(Md5Context062ag *context)
{
    fn_001b2554(context->state, context->block);
}

const Md5Methods062ag sdk_md5_methods062ag = {
    sdk_md5_initialize062ag, 0, sdk_md5_update062ag, 0,
    sdk_md5_finish062ag, 0, 0, sdk_md5_block062ag
};
