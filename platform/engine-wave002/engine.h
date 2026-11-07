#ifndef DQM_PORTABLE_ENGINE_H
#define DQM_PORTABLE_ENGINE_H
typedef unsigned int EngineU32;
typedef unsigned char EngineByte;
typedef struct { int left; int top; int width; int height; } EngineRect;
void engine_reset(void);
void engine_resume(int active);
void engine_surface(int role, int generation, int ready);
int engine_step(int owner, int elapsed_us);
void engine_button(int button, int down);
void engine_axis(int x, int y);
int engine_touch(int role, int width, int height, int x, int y, int down);
void engine_rect(int role, int view, int width, int height, EngineRect *rect);
int engine_snapshot(int field);
int engine_request(const char *path);
int engine_claim(void);
const char *engine_path(int handle);
int engine_complete(int handle, const EngineByte *data, int size);
int engine_checkpoint(EngineByte *output, int capacity);
int engine_restore(const EngineByte *data, int size);
EngineU32 engine_checksum(const EngineByte *data, int size);
int engine_scene_load(const EngineByte *data, int size);
void engine_resources_reset(void);
void engine_resources_pause(void);
int engine_resources_pending(void);
int engine_resource_status(int handle);
#endif
