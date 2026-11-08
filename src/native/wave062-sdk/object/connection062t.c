#include "object062t.h"

SdkWord062s sdk_connection_ready062t(SdkConnection062t *connection)
{
    return connection->state == 2;
}

SdkWord062s sdk_connection_closed062t(SdkConnection062t *connection)
{
    return connection->state == 4;
}

SdkWord062s sdk_child_ready062t(SdkChild062t *child)
{
    SdkConnection062t *underlying = child->underlying;
    return underlying ? underlying->methods->ready(underlying) : 0;
}

SdkWord062s sdk_child_closed062t(SdkChild062t *child)
{
    SdkConnection062t *underlying = child->underlying;
    return underlying ? underlying->methods->closed(underlying) : 0;
}

SdkWord062s sdk_connection_set_state062t(SdkConnection062t *connection,
    SdkWord062s state)
{
    SdkWord062s old = connection->state;
    if (state == 2)
        connection->pending = 0;
    SdkConnectionCallback062t callback = connection->callback;
    connection->state = (SdkByte062s)state;
    if (callback) {
        SdkResult062t result;
        SdkWord062s code = 0x80050007u;
        if ((old == 1 && state == 2) || (old == 3 && state == 0))
            code &= code >> 2;
        sdk_result_make062t(&result, &code);
        if (connection->callback_owner)
            sdk_reference_release062t(connection->callback_owner);
        connection->callback_owner = 0;
        connection->callback_flags = 0;
        connection->callback = 0;
        callback(connection, &result, connection->capture);
    }
    return 1;
}
