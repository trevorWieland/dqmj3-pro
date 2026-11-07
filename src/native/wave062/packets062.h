#ifndef PACKETS062_H
#define PACKETS062_H

typedef unsigned char Byte062;
typedef unsigned int Word062;
typedef int Signed062;

typedef struct ResourceBlock062 {
    Byte062 bytes[128];
} ResourceBlock062;

typedef struct ResourceMetadata062 {
    Byte062 record[240];
    Signed062 ordinal;
    Byte062 valid;
    Byte062 padding[3];
} ResourceMetadata062;

typedef struct ResourcePacket062 {
    Signed062 compressed_bytes;
    Byte062 bytes[7656];
} ResourcePacket062;

void resource_metadata_slice062(ResourceBlock062 *, const ResourceMetadata062 *, const Signed062 *);
void resource_metadata_receive062(const ResourceBlock062 *, ResourceMetadata062 *, Signed062 *);
Word062 resource_packet_slice062(ResourceBlock062 *, const ResourcePacket062 *, const Signed062 *);
Word062 resource_packet_receive062(const ResourceBlock062 *, ResourcePacket062 *, Signed062 *);

#endif
