#ifndef DQMJ3_PLATFORM_GRAPHICS_H
#define DQMJ3_PLATFORM_GRAPHICS_H

/*
 * Graphics: the PICA200 boundary.
 *
 * This is the hardest header in the directory and the one a porter should read
 * last. The original renders through the CTR-SDK's GPU layer: a command buffer
 * is filled on the CPU, submitted to the GSP service, and consumed by the
 * PICA200. Textures are tiled, shaders are two separate binaries (a vertex
 * program and a fragment program, each with a DVLE/DVLP pair), and the
 * fixed-function pipeline is a set of TEV stages rather than a programmable
 * fragment shader. None of those details belong to game code, but the
 * observable results do.
 *
 * The interface is a small retained-mode scene API, not a command encoder.
 * A backend may implement it over OpenGL, Vulkan, D3D, SDL's GPU API or a
 * software rasteriser. The contract fixes:
 *
 *   - coordinate origin: top-left, x right, y down, in pixels;
 *   - depth range 0 (near) to 1 (far), cleared to 1;
 *   - one draw call consumes vertices in the order given;
 *   - alpha blending is premultiplied by default; a texture with straight
 *     alpha must be converted by the backend or by the material layer;
 *   - a texture is immutable after upload (create, upload, destroy).
 *
 * The original has two screens: a 400x240 top screen (800x240 in 3D mode, with
 * the left and right eye interleaved) and a 320x240 bottom touch screen. A
 * port may present them as two windows, one window with two viewports, or one
 * screen with a control to switch. dqm3_graphics_display_count and
 * dqm3_graphics_display_size describe what the backend offers; the game must
 * not assume two.
 *
 * Threading: the command stream is single-producer. Only the thread that owns
 * the graphics device may call frame, draw, texture-upload and present
 * functions. Texture creation and shader loading may be done on a worker only
 * if the header's function says so. No graphics call may block on a mutex that
 * an audio callback holds.
 *
 * Timing: present may block until the display's vertical blank. A backend that
 * uses a swap chain should present at most once per frame. wait_vblank is the
 * only function that deliberately sleeps for a display event.
 */

#include "platform.h"

typedef struct Dqm3Graphics Dqm3Graphics;
typedef struct Dqm3Texture Dqm3Texture;
typedef struct Dqm3Shader Dqm3Shader;
typedef struct Dqm3VertexBuffer Dqm3VertexBuffer;

enum Dqm3DisplayId {
    DQM3_DISPLAY_TOP = 0,
    DQM3_DISPLAY_BOTTOM = 1
};

typedef enum Dqm3DisplayId Dqm3DisplayId;

enum Dqm3PixelFormat {
    DQM3_FORMAT_RGBA8 = 0,
    DQM3_FORMAT_RGB8 = 1,
    DQM3_FORMAT_RGBA5551 = 2,
    DQM3_FORMAT_RGB565 = 3,
    DQM3_FORMAT_RGBA4444 = 4,
    DQM3_FORMAT_LA8 = 5,
    DQM3_FORMAT_L8 = 6,
    DQM3_FORMAT_A8 = 7,
    DQM3_FORMAT_ETC1 = 8,
    DQM3_FORMAT_DXT1 = 9
};

typedef enum Dqm3PixelFormat Dqm3PixelFormat;

enum Dqm3TextureFlags {
    DQM3_TEXTURE_MIPMAP = 1u << 0,
    DQM3_TEXTURE_REPEAT_U = 1u << 1,
    DQM3_TEXTURE_REPEAT_V = 1u << 2,
    DQM3_TEXTURE_LINEAR = 1u << 3,
    DQM3_TEXTURE_GPU_WRITE = 1u << 4
};

enum Dqm3Primitive {
    DQM3_PRIMITIVE_TRIANGLES = 0,
    DQM3_PRIMITIVE_TRIANGLE_STRIP = 1,
    DQM3_PRIMITIVE_TRIANGLE_FAN = 2,
    DQM3_PRIMITIVE_LINES = 3,
    DQM3_PRIMITIVE_POINTS = 4
};

typedef enum Dqm3Primitive Dqm3Primitive;

typedef struct Dqm3Color {
    float red, green, blue, alpha;
} Dqm3Color;

typedef struct Dqm3Viewport {
    Dqm3U32 x, y, width, height;
    float min_depth, max_depth;
} Dqm3Viewport;

typedef struct Dqm3TextureInfo {
    Dqm3U32 width;
    Dqm3U32 height;
    Dqm3U32 levels;
    Dqm3PixelFormat format;
    Dqm3U32 flags;
} Dqm3TextureInfo;

typedef struct Dqm3ShaderInfo {
    const void *vertex_program;   /* DVLP-equivalent binary or NULL            */
    Dqm3Size vertex_bytes;
    const void *fragment_program; /* DVLP-equivalent binary or NULL            */
    Dqm3Size fragment_bytes;
    Dqm3U32 attribute_mask;       /* bit n = vertex attribute n is present     */
} Dqm3ShaderInfo;

/* The device. Valid after dqm3_system_initialize. */
Dqm3Graphics *dqm3_graphics_device(void);

/* Number of displays the backend can present to, at least 1. */
Dqm3U32 dqm3_graphics_display_count(void);

/* Logical size of a display in pixels. Returns DQM3_ERR_INVALID for an id the
 * backend does not have. */
Dqm3Result dqm3_graphics_display_size(Dqm3DisplayId display, Dqm3U32 *width,
    Dqm3U32 *height);

/*
 * Begin a frame targeting display. A second begin before end is
 * DQM3_ERR_BUSY. The target is the display's back buffer; a port that renders
 * to an offscreen texture may use dqm3_graphics_frame_begin_texture instead.
 */
Dqm3Result dqm3_graphics_frame_begin(Dqm3DisplayId display);
Dqm3Result dqm3_graphics_frame_begin_texture(Dqm3Texture *target);

/*
 * End the frame and submit its command stream. present then waits for the
 * display and flips. frame_end without present is valid for offscreen work.
 */
Dqm3Result dqm3_graphics_frame_end(void);
Dqm3Result dqm3_graphics_present(Dqm3DisplayId display);

/* Clear the current target. depth is ignored when the target has no depth. */
Dqm3Result dqm3_graphics_clear(const Dqm3Color *color, float depth);

/* Viewport and scissor are in target pixels. */
Dqm3Result dqm3_graphics_set_viewport(const Dqm3Viewport *viewport);
Dqm3Result dqm3_graphics_set_scissor(Dqm3U32 x, Dqm3U32 y, Dqm3U32 width, Dqm3U32 height);
Dqm3Result dqm3_graphics_set_scissor_disabled(void);

/*
 * Create an immutable texture. data may be NULL to create uninitialised
 * storage (GPU render target); otherwise it points to levels * width * height
 * of the format's packed rows, top level first. The backend converts to its
 * own tiling; the caller's layout is always linear row-major, tightly packed.
 */
Dqm3Result dqm3_graphics_texture_create(const Dqm3TextureInfo *info, const void *data,
    Dqm3Texture **texture);
Dqm3Result dqm3_graphics_texture_upload(Dqm3Texture *texture, Dqm3U32 level,
    Dqm3U32 x, Dqm3U32 y, Dqm3U32 width, Dqm3U32 height, const void *data);
Dqm3Result dqm3_graphics_texture_destroy(Dqm3Texture *texture);

/*
 * Create a shader from backend-native program binaries. The original's DVLP
 * binaries are not portable; a port supplies its own compiled programs. The
 * backend may accept SPIR-V, GLSL source wrapped in a blob, or a fixed
 * built-in program selected by attribute_mask. Passing both programs NULL
 * selects the backend's default untextured program.
 */
Dqm3Result dqm3_graphics_shader_create(const Dqm3ShaderInfo *info, Dqm3Shader **shader);
Dqm3Result dqm3_graphics_shader_destroy(Dqm3Shader *shader);
Dqm3Result dqm3_graphics_shader_set_float(Dqm3Shader *shader, Dqm3U32 index, float value);
Dqm3Result dqm3_graphics_shader_set_vector4(Dqm3Shader *shader, Dqm3U32 index,
    const float *values);

/* Bind state for subsequent draws. A NULL texture unbinds. */
Dqm3Result dqm3_graphics_bind_shader(Dqm3Shader *shader);
Dqm3Result dqm3_graphics_bind_texture(Dqm3U32 unit, Dqm3Texture *texture);

/*
 * Vertex buffers hold interleaved float attributes described by
 * attribute_mask; attribute n is a 4-float vector in the order the original's
 * vertex format declares it. create copies the data; update rewrites a range.
 * The buffer must outlive any draw that uses it.
 */
Dqm3Result dqm3_graphics_vertex_buffer_create(Dqm3U32 vertex_count,
    Dqm3U32 attribute_mask, const float *vertices, Dqm3VertexBuffer **buffer);
Dqm3Result dqm3_graphics_vertex_buffer_update(Dqm3VertexBuffer *buffer,
    Dqm3U32 first_vertex, Dqm3U32 vertex_count, const float *vertices);
Dqm3Result dqm3_graphics_vertex_buffer_destroy(Dqm3VertexBuffer *buffer);

/* Draw from a vertex buffer, optionally with 16-bit indices. */
Dqm3Result dqm3_graphics_draw(Dqm3Primitive primitive, Dqm3VertexBuffer *vertices,
    Dqm3U32 first_vertex, Dqm3U32 vertex_count);
Dqm3Result dqm3_graphics_draw_indexed(Dqm3Primitive primitive,
    Dqm3VertexBuffer *vertices, const unsigned short *indices, Dqm3U32 index_count);

/*
 * Map a linear-heap allocation for GPU access and unmap it. The address is a
 * host pointer; the backend converts it to whatever the device needs. A
 * mapping is exclusive to one device operation; mapping an already-mapped
 * range is DQM3_ERR_BUSY.
 */
Dqm3Result dqm3_graphics_map_linear(void *address, Dqm3Size bytes, Dqm3U32 flags);
Dqm3Result dqm3_graphics_unmap_linear(void *address, Dqm3Size bytes);

/* Wait for the display's vertical blank. Returns DQM3_ERR_TIMEOUT if the
 * backend has no display event. */
Dqm3Result dqm3_graphics_wait_vblank(Dqm3DisplayId display, Dqm3Time timeout);

/* Flush queued work without waiting; finish waits for the device to go idle. */
Dqm3Result dqm3_graphics_flush(void);
Dqm3Result dqm3_graphics_finish(void);

#endif
