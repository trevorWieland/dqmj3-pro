#include "timer062aa.h"

void sdk_endpoint_copy062aa(SdkEndpoint062aa *output, const SdkEndpoint062aa *input)
{
    output->identity = &sdk_endpoint_identity062aa;
    for (SdkWord062s i = 0; i < 7; ++i)
        output->data[i] = input->data[i];
}

SdkSigned062s sdk_endpoint_compare062aa(const SdkEndpoint062aa *a,
    const SdkEndpoint062aa *b)
{
    SdkSigned062s first;
    SdkSigned062s second;
    __builtin_memcpy(&first, &a->data[1], sizeof(first));
    __builtin_memcpy(&second, &b->data[1], sizeof(second));
    if (first != second)
        return first < second ? -1 : 1;
    SdkWord062s first_port = a->data[0] >> 16;
    SdkWord062s second_port = b->data[0] >> 16;
    return first_port < second_port ? -1 : first_port != second_port;
}
