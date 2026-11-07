#ifndef DQMJ3_WAVE032_ARCHIVE_H
#define DQMJ3_WAVE032_ARCHIVE_H

typedef unsigned int ArchiveWord;
typedef struct ArchiveImage { const unsigned char *bytes; } ArchiveImage;
typedef struct ArchiveView ArchiveView;
typedef struct ArchiveOperations {
    ArchiveView *(*release)(ArchiveView *view);
    void (*destroy)(ArchiveView *view);
} ArchiveOperations;
struct ArchiveView {
    const ArchiveOperations *operations;
    ArchiveImage *image;
};
typedef struct ArchiveServices {
    void *(*allocate)(void *context, unsigned int bytes, unsigned int alignment);
    void (*release)(void *context, void *memory);
    void *context;
} ArchiveServices;

extern const ArchiveOperations archive_operations;
int archive_bind_services(const ArchiveServices *services);
const ArchiveServices *archive_services(void);
ArchiveWord archive_word(const unsigned char *bytes);
ArchiveView *fn_00118624(ArchiveView *view, const unsigned char *bytes);
ArchiveView *fn_005f5cd8(ArchiveView *view);
int fn_005f5cac(ArchiveView *view, const unsigned char *bytes);
ArchiveView *fn_005f5d3c(ArchiveView *view);
void fn_005f5d14(ArchiveView *view);
ArchiveWord fn_00183688(const ArchiveView *view, const char *name);
const unsigned char *fn_00176d74(const ArchiveView *view, const char *name);
const unsigned char *fn_006edd88(const ArchiveView *view, ArchiveWord index);
int fn_006eddc0(const ArchiveView *view, const char *name);
int fn_006eddec(const ArchiveView *view, ArchiveWord index);
const char *fn_006ede0c(const ArchiveView *view, ArchiveWord index);
ArchiveWord fn_006ede48(const ArchiveView *view, const char *name);
ArchiveWord fn_006ede84(const ArchiveView *view, ArchiveWord index);
ArchiveWord fn_006edeb4(const ArchiveView *view);

_Static_assert(sizeof(ArchiveWord) == 4 && sizeof(int) == 4, "archive scalar widths");
_Static_assert(sizeof(ArchiveImage) == sizeof(void *), "archive image pointer ownership");
_Static_assert(__builtin_offsetof(ArchiveView, image) == sizeof(void *), "archive view image owner");
#endif
