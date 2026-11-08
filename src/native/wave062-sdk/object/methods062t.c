#include "object062t.h"

const SdkConnectionMethods062t sdk_connection_methods062t = {
    {0}, sdk_connection_closed062t, sdk_connection_ready062t
};
const SdkChildMethods062t sdk_child_methods062t = {
    {0}, sdk_child_closed062t, sdk_child_ready062t
};
const SdkWrapperMethods062t sdk_wrapper_methods062t = {
    {0}, sdk_wrapper_replace062t, 0, sdk_wrapper_ready062t,
    sdk_wrapper_closed062t, 0, sdk_wrapper_prepare062t
};
