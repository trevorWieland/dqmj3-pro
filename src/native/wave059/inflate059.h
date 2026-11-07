#ifndef INFLATE059_H
#define INFLATE059_H

#include "stream058.h"

typedef struct Header059 {
    Signed058 text;
    Word058 time;
    Signed058 extra_flags;
    Signed058 operating_system;
    Byte058 *extra;
    Word058 extra_length;
    Word058 extra_maximum;
    Byte058 *name;
    Word058 name_maximum;
    Byte058 *comment;
    Word058 comment_maximum;
    Signed058 header_crc;
    Signed058 done;
} Header059;

typedef struct Inflate059 {
    Stream058 *stream;
    State058 *state;
    const Byte058 *next;
    Byte058 *output;
    Word058 available;
    Word058 space;
    Word058 input_start;
    Word058 output_start;
    Word058 hold;
    Word058 bits;
    Signed058 flush;
    StreamCode056 *fixed;
    StreamState056 *scratch;
} Inflate059;

enum Mode059 {
    HEADER059, FLAGS059, TIME059, OS059, EXTRA_LENGTH059, EXTRA059,
    NAME059, COMMENT059, HEADER_CRC059, DICTIONARY_ID059, DICTIONARY059,
    BLOCK059, BLOCK_BODY059, STORED059, COPY_FIRST059, COPY059, TABLE059,
    CODE_LENGTHS059, SYMBOL_LENGTHS059, LENGTH_FIRST059, LENGTH059,
    LENGTH_EXTRA059, DISTANCE059, DISTANCE_EXTRA059, MATCH059, LITERAL059,
    CHECK059, TRAILER_LENGTH059, DONE059, BAD059, MEMORY059
};

Word058 stream_adler059(Word058, const Byte058 *, Word058);
Signed058 stream_window059(Stream058 *, Word058);
Signed058 stream_table059(Word058, const Byte058 *, Word058, StreamCode056 **, Word058 *, Byte058 *);
Signed058 stream_inflate059(Stream058 *, Signed058, StreamCode056 *, StreamState056 *);
Word058 stream_half059(const Byte058 *, Word058);
void stream_put_half059(Byte058 *, Word058, Word058);
Word058 stream_mask059(Word058);
Word058 stream_reverse059(Word058);
void stream_copy059(Byte058 *, const Byte058 *, Word058);
int stream_need059(Inflate059 *, Word058);
void stream_drop059(Inflate059 *, Word058);
void stream_restore059(Inflate059 *);
void stream_load059(Inflate059 *);
void stream_error059(Inflate059 *, const char *);
Word058 stream_update059(State058 *, const Byte058 *, Word058);
Signed058 stream_header059(Inflate059 *);
Signed058 stream_body059(Inflate059 *);
Signed058 stream_dynamic059(Inflate059 *);
Signed058 stream_decode059(Inflate059 *);
void stream_fixed059(StreamCode056 *);

#endif
