#include "archive.h"

ArchiveWord fn_006edeb4(const ArchiveView *view)
{
    const unsigned char *image = view->image->bytes;
    return image == (void *)0 ? 0 : archive_word(image + 4);
}

int fn_006eddec(const ArchiveView *view, ArchiveWord index)
{
    return index < fn_006edeb4(view);
}

int fn_006eddc0(const ArchiveView *view, const char *name)
{
    ArchiveWord index = fn_00183688(view, name);
    return index < fn_006edeb4(view);
}

const unsigned char *fn_006edd88(const ArchiveView *view, ArchiveWord index)
{
    const unsigned char *image = view->image->bytes;
    if (image == (void *)0 || index >= archive_word(image + 4))
        return (void *)0;
    return image + archive_word(image + 32 + index * 16);
}

const unsigned char *fn_00176d74(const ArchiveView *view, const char *name)
{
    return fn_006edd88(view, fn_00183688(view, name));
}

const char *fn_006ede0c(const ArchiveView *view, ArchiveWord index)
{
    const unsigned char *image = view->image->bytes;
    if (image == (void *)0 || index >= archive_word(image + 4))
        return (void *)0;
    ArchiveWord offset = archive_word(image + 32 + index * 16 + 8);
    return offset == 0 ? (void *)0 : (const char *)(image + offset);
}

ArchiveWord fn_006ede84(const ArchiveView *view, ArchiveWord index)
{
    const unsigned char *image = view->image->bytes;
    if (image == (void *)0 || index >= archive_word(image + 4))
        return 0;
    return archive_word(image + 32 + index * 16 + 4);
}

ArchiveWord fn_006ede48(const ArchiveView *view, const char *name)
{
    return fn_006ede84(view, fn_00183688(view, name));
}
