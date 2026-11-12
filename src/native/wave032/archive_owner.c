#include "archive.h"


static const ArchiveServices *active_archive_services;
const ArchiveOperations archive_operations = {archive_view_destroy, fn_005f5d14};

int archive_bind_services(const ArchiveServices *services)
{
    if (services == (void *)0 || services->allocate == (void *)0 || services->release == (void *)0)
        return 0;
    active_archive_services = services;
    return 1;
}

const ArchiveServices *archive_services(void)
{
    return active_archive_services;
}

ArchiveView *fn_005f5cd8(ArchiveView *view)
{
    view->operations = &archive_operations;
    ArchiveImage *image = active_archive_services->allocate(active_archive_services->context,
        sizeof(ArchiveImage), _Alignof(ArchiveImage));
    if (image != (void *)0)
        image->bytes = (void *)0;
    view->image = image;
    return view;
}

int fn_005f5cac(ArchiveView *view, const unsigned char *bytes)
{
    const unsigned char *checked = bytes == (void *)0 ? view->image->bytes : bytes;
    int valid = archive_word(checked) == 0x01424258u;
    if (valid)
        view->image->bytes = bytes;
    return valid;
}

ArchiveView *fn_00118624(ArchiveView *view, const unsigned char *bytes)
{
    fn_005f5cd8(view);
    fn_005f5cac(view, bytes);
    return view;
}

/* archive_view_destroy -- 0x005f5d3c, 32 bytes, ARM, 19 call sites, draft.
 *
 * Releases the archive image and resets the view's operation table. It is the
 * destroy entry installed in archive_operations, and the paired create path
 * fn_005f5cd8 above allocates the image it releases.
 *
 * Evidence: archive_operations in this unit names it, and all 19 call sites are
 * teardown paths.
 */
ArchiveView *archive_view_destroy(ArchiveView *view)
{
    view->operations = &archive_operations;
    active_archive_services->release(active_archive_services->context, view->image);
    return view;
}

void fn_005f5d14(ArchiveView *view)
{
    archive_view_destroy(view);
    active_archive_services->release(active_archive_services->context, view);
}
