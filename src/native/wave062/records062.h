#ifndef RECORDS062_H
#define RECORDS062_H

#include "packets062.h"

typedef struct ResourceRecord062 {
    Byte062 record[240];
    Byte062 valid;
    Byte062 padding[3];
} ResourceRecord062;

typedef struct ResourceRecordVector062 {
    ResourceRecord062 *begin;
    ResourceRecord062 *end;
    ResourceRecord062 *limit;
} ResourceRecordVector062;

typedef struct ResourceHeapServices062 {
    void *(*allocate)(void *, Word062, Word062);
    void (*dispose)(void *, void *);
    void *context;
} ResourceHeapServices062;

void resource_record_append062(ResourceRecordVector062 *,
    const ResourceRecord062 *, const ResourceHeapServices062 *);

#endif
