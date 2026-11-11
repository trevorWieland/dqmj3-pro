/* Per-slot model colour tinting.
 *
 * A monster model carries eight colour slots.  Each slot has a 0x2c-byte
 * palette record inside the model's colour block; the block begins four bytes
 * after the model record selected by (u16)model->index * 0x278.  A slot is
 * active when the byte at colour_block + 0x164 + slot is non-zero.
 *
 * For every active slot the function copies the slot's stored source colours
 * into its twelve output channels, multiplying each one by the tint byte the
 * caller supplies when the model manager's "raw palette" flag (bit 4 of the
 * manager's byte 6) is clear; when the flag is set the last three channels are
 * copied unchanged.  Two more bytes record the manager's bits 5 and 6, which
 * the renderer reads as the slot's two shading selectors.  Finally the model's
 * three base colour bytes are re-derived from the caller's base colour plus one
 * scaled source sample each and clamped to 0xff.
 *
 * Offsets are original image offsets; the records are not reconstructed field
 * by field yet, so the code names what each byte feeds rather than inventing a
 * type for the whole block.
 *
 * STATUS: draft, not byte-identical.  The compiled function is 776 bytes against
 * the original's 912; only 19 of the 194 instruction slots align.  The
 * differences are address formation (the original computes both the slot entry
 * and the source pointer with explicit adds and keeps the tint base in a
 * register; this source lets armcc use a post-indexed load and reload the tint
 * per channel) and the register allocation that follows from it.  The control
 * flow, every offset and the two unswitched loops are accounted for.
 */
#include "../wave080-script-api/script_api.h"

typedef unsigned short u16;
typedef struct {
    u8 *colours;      /* +0x004: first colour slot of the selected model */
    u8 *model;        /* +0x000: model record base, indexed by *model_index */
} ModelTintArgs;

/* One colour slot's source bytes: rgb pairs plus a raw rgb tail. */
typedef struct {
    u8 rx, gx, bx;    /* source bytes 0x1b4..0x1b6 */
    u8 pad_1b7;
    u8 ry, gy, by;    /* source bytes 0x1b8..0x1ba */
    u8 pad_1bb;
    u8 rz, gz, bz;    /* source bytes 0x1bc..0x1be */
    u8 pad_1bf;
    u8 raw_r, raw_g, raw_b;  /* source bytes 0x1c0..0x1c2 */
} SlotSource;

/* Caller configuration: the selected model index and the tint ramp. */
typedef struct {
    u8 pad_00[0x20];
    u16 model_index;  /* +0x20: index of the model within the colour array */
    u8 pad_22[0x1a];
    u8 base_r, base_g, base_b;  /* +0x3c..0x3e: base colour bytes */
    u8 pad_3f;
    u8 tint[16];      /* +0x40: per-channel tint, used as a multiplier */
    u8 pad_50[0x164];
} TintConfig;

#define SLOT_STRIDE 0x2c
#define SLOT_ACTIVE_OFFSET 0x164
#define MODEL_STRIDE 0x278

/* One scaled channel: unsigned byte product scaled down by 8 bits. */
static u8 scaled(u8 value, u8 tint)
{
    return (u8)((value * tint) >> 8);
}

/* Derived base byte: caller base plus scaled sample, saturated at 0xff. */
static u8 base_channel(u8 base, u8 sample, u8 tint)
{
    u32 mixed = base + ((u32)(sample * tint) >> 8);
    return (u8)(mixed > 0xff ? 0xff : mixed);
}

void fn_006dd568(TintConfig **config_holder, u8 **model_holder, TintConfig *config)
{
    u8 *model = *model_holder;
    u8 *block = model + (u32)config->model_index * MODEL_STRIDE;
    u8 *slots = block + 4;
    u8 *manager = *(u8 **)config_holder;  /* the manager record holding the flags */
    int slot;

    if ((manager[6] & 0x10) == 0) {
        for (slot = 0; slot < 8; slot++) {
            if (slots[SLOT_ACTIVE_OFFSET + slot] != 0) {
                u8 *entry = slots + slot * SLOT_STRIDE;
                SlotSource *source =
                    (SlotSource *)(model + (u32)config->model_index * MODEL_STRIDE
                                   + slot * 0x10);
                entry[0xb] = scaled(source->rx, config->tint[0]);
                entry[0xc] = scaled(source->gx, config->tint[1]);
                entry[0xd] = scaled(source->bx, config->tint[2]);
                entry[8] = scaled(source->ry, config->tint[4]);
                entry[9] = scaled(source->gy, config->tint[5]);
                entry[0xa] = scaled(source->by, config->tint[6]);
                entry[0xe] = scaled(source->rz, config->tint[8]);
                entry[0xf] = scaled(source->gz, config->tint[9]);
                entry[0x10] = scaled(source->bz, config->tint[0xa]);
                entry[0x11] = scaled(source->raw_r, config->tint[0xc]);
                entry[0x12] = scaled(source->raw_g, config->tint[0xd]);
                entry[0x13] = scaled(source->raw_b, config->tint[0xe]);
                entry[6] = (u8)((manager[6] & 0x20) >> 5);
                entry[7] = (u8)((manager[6] & 0x40) >> 6);
            }
        }
    } else {
        for (slot = 0; slot < 8; slot++) {
            if (slots[SLOT_ACTIVE_OFFSET + slot] != 0) {
                u8 *entry = slots + slot * SLOT_STRIDE;
                SlotSource *source =
                    (SlotSource *)(model + (u32)config->model_index * MODEL_STRIDE
                                   + slot * 0x10);
                entry[0xb] = scaled(source->rx, config->tint[0]);
                entry[0xc] = scaled(source->gx, config->tint[1]);
                entry[0xd] = scaled(source->bx, config->tint[2]);
                entry[8] = scaled(source->ry, config->tint[4]);
                entry[9] = scaled(source->gy, config->tint[5]);
                entry[0xa] = scaled(source->by, config->tint[6]);
                entry[0xe] = scaled(source->rz, config->tint[8]);
                entry[0xf] = scaled(source->gz, config->tint[9]);
                entry[0x10] = scaled(source->bz, config->tint[0xa]);
                entry[0x11] = source->raw_r;
                entry[0x12] = source->raw_g;
                entry[0x13] = source->raw_b;
                entry[6] = (u8)((manager[6] & 0x20) >> 5);
                entry[7] = (u8)((manager[6] & 0x40) >> 6);
            }
        }
    }
    block[0] = base_channel(config->base_r, block[0x234], config->tint[0]);
    block[1] = base_channel(config->base_g, block[0x235], config->tint[1]);
    block[2] = base_channel(config->base_b, block[0x236], config->tint[2]);
}


