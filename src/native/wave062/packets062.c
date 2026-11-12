#include "packets062.h"

void *memory_copy_unaligned(void *, const void *, unsigned int);
void *memory_zero_unaligned(void *, unsigned int);
void *memory_zero_aligned(void *, unsigned int);

void resource_metadata_slice062(ResourceBlock062 *block,
    const ResourceMetadata062 *metadata, const Signed062 *position)
{
    Signed062 cursor = *position;
    Word062 offset;
    Word062 bytes;
    if (cursor >= 2)
        return;
    offset = cursor > 0 ? 128 : 0;
    bytes = 248 - offset;
    if (bytes > 128)
        bytes = 128;
    memory_zero_unaligned(block->bytes, 128);
    memory_copy_unaligned(block->bytes, (const Byte062 *)metadata + offset, bytes);
}

void resource_metadata_receive062(const ResourceBlock062 *block,
    ResourceMetadata062 *metadata, Signed062 *cursor)
{
    Word062 offset;
    Word062 bytes;
    if (*cursor >= 2)
        return;
    offset = *cursor > 0 ? 128 : 0;
    bytes = 248 - offset;
    if (bytes > 128)
        bytes = 128;
    memory_copy_unaligned((Byte062 *)metadata + offset, block->bytes, bytes);
    ++*cursor;
}

static Word062 packet_bytes062(Signed062 compressed_bytes)
{
    return compressed_bytes > 0 ? (Word062)compressed_bytes + 4 : 7660;
}

Word062 resource_packet_slice062(ResourceBlock062 *block,
    const ResourcePacket062 *packet, const Signed062 *position)
{
    Signed062 cursor = *position;
    Word062 total = packet_bytes062(packet->compressed_bytes);
    Word062 offset = (Word062)cursor * 128;
    Word062 bytes;
    if ((Word062)cursor >= (total + 127) / 128)
        return 1;
    bytes = total - offset;
    if (bytes >= 128) {
        memory_copy_unaligned(block->bytes, (const Byte062 *)packet + offset, 128);
        return 0;
    }
    memory_zero_unaligned(block->bytes, 128);
    memory_copy_unaligned(block->bytes, (const Byte062 *)packet + offset, bytes);
    return 1;
}

Word062 resource_packet_receive062(const ResourceBlock062 *block,
    ResourcePacket062 *packet, Signed062 *cursor)
{
    Word062 total;
    Word062 offset = (Word062)*cursor * 128;
    Word062 finished = 0;
    Word062 bytes;
    if (*cursor == 0) {
        Signed062 compressed_bytes;
        memory_copy_unaligned(&compressed_bytes, block->bytes, 4);
        total = packet_bytes062(compressed_bytes);
        memory_zero_aligned(packet->bytes, 7656);
    } else {
        total = packet_bytes062(packet->compressed_bytes);
    }
    if ((Word062)*cursor >= (total + 127) / 128) {
        finished = 1;
    } else {
        bytes = total - offset;
        if (bytes > 128)
            bytes = 128;
        else if (bytes < 128)
            finished = 1;
        memory_copy_unaligned((Byte062 *)packet + offset, block->bytes, bytes);
    }
    ++*cursor;
    return finished;
}
