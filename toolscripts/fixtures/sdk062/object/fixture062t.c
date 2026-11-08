#include "object062t.h"
#define AT(type, field) __builtin_offsetof(type, field)
const SdkWord062s fixture_object_layout062t[] = {
    sizeof(SdkReference062t), AT(SdkReference062t, references),
    AT(SdkReference062t, disposed), sizeof(SdkConnection062t),
    AT(SdkConnection062t, state), AT(SdkConnection062t, callback_methods),
    AT(SdkConnection062t, callback_flags), AT(SdkConnection062t, callback_owner),
    AT(SdkConnection062t, callback), AT(SdkConnection062t, capture),
    AT(SdkConnection062t, pending), sizeof(SdkChild062t),
    AT(SdkChild062t, underlying), sizeof(SdkWrapper062t),
    AT(SdkWrapper062t, kind), AT(SdkWrapper062t, current),
    AT(SdkWrapper062t, disabled), sizeof(SdkAddressReference062t),
    AT(SdkAddressReference062t, owner), sizeof(SdkDerivedWrapper062t),
    AT(SdkDerivedWrapper062t, address), sizeof(SdkFactoryBinding062t),
    AT(SdkFactoryBinding062t, wrapper), sizeof(SdkServiceBinding062t),
    AT(SdkServiceBinding062t, factory), sizeof(SdkPeer062t),
    AT(SdkPeer062t, context), AT(SdkPeer062t, first),
    AT(SdkPeer062t, second), AT(SdkPeer062t, service),
    AT(SdkPeer062t, child), sizeof(SdkOperationState062t),
    AT(SdkOperationState062t, peer), AT(SdkOperationState062t, second),
    AT(SdkOperationState062t, first), sizeof(SdkStatusHolder062t),
    AT(SdkStatusHolder062t, state), sizeof(SdkResult062t),
    AT(SdkResult062t, origin), AT(SdkResult062t, line)
};

typedef struct CallbackCapture062t {
    SdkWord062s calls;
    SdkWord062s code;
    const void *origin;
    SdkWord062s line;
    SdkWord062s seen_state;
    SdkWord062s seen_pending;
    SdkWord062s seen_flags;
    SdkReference062t *seen_owner;
    SdkConnectionCallback062t seen_callback;
    SdkWord062s requested_state;
    SdkWord062s change_state;
} CallbackCapture062t;

void fixture_connection_callback062t(SdkConnection062t *connection,
    const SdkResult062t *result, SdkByte062s *storage)
{
    CallbackCapture062t capture;
    __builtin_memcpy(&capture, storage, sizeof(capture));
    capture.calls++;
    capture.code = result->code;
    capture.origin = result->origin;
    capture.line = result->line;
    capture.seen_state = connection->state;
    capture.seen_pending = connection->pending;
    capture.seen_flags = connection->callback_flags;
    capture.seen_owner = connection->callback_owner;
    capture.seen_callback = connection->callback;
    if (capture.change_state)
        connection->state = (SdkByte062s)capture.requested_state;
    __builtin_memcpy(storage, &capture, sizeof(capture));
}
const SdkWord062s fixture_capture_layout062t[] = {
    sizeof(CallbackCapture062t), AT(CallbackCapture062t, calls),
    AT(CallbackCapture062t, code), AT(CallbackCapture062t, origin),
    AT(CallbackCapture062t, line), AT(CallbackCapture062t, seen_state),
    AT(CallbackCapture062t, seen_pending), AT(CallbackCapture062t, seen_flags),
    AT(CallbackCapture062t, seen_owner), AT(CallbackCapture062t, seen_callback),
    AT(CallbackCapture062t, requested_state), AT(CallbackCapture062t, change_state)
};
