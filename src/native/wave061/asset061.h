#ifndef ASSET061_H
#define ASSET061_H

#include "inflate059.h"

typedef struct AssetSpace061 {
    Byte058 *cursor;
    Byte058 *end;
} AssetSpace061;

typedef struct AssetWorkspace061 {
    State058 state;
    StreamCode056 fixed[544];
    StreamState056 fast;
} AssetWorkspace061;

Signed058 asset_status061(Signed058);
void *asset_allocate061(void *, Word058, Word058);
void asset_dispose061(void *, void *);
Signed058 asset_decode061(Byte058 *, Word058, const Byte058 *, Word058, AssetWorkspace061 *);

#endif
