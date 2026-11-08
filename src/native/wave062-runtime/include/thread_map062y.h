#ifndef THREAD_MAP062Y_H
#define THREAD_MAP062Y_H
#include "sdk062s.h"

typedef struct SdkMapInsertion062y {
    SdkNode062s *node;
    SdkByte062s inserted;
} SdkMapInsertion062y;

SdkNode062s *sdk_map_select062y(SdkMapInsertion062y *, SdkMap062s *,
    const SdkPair062s *);
SdkWord062s *sdk_thread_index062y(SdkContextManager062s *);
SdkSigned062s sdk_thread_query062y(SdkWord062s *);
void sdk_thread_result_failure062y(SdkSigned062s, SdkWord062s);
#endif
