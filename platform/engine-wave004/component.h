#ifndef DQM_MATERIAL_COMPONENT_H
#define DQM_MATERIAL_COMPONENT_H
void component_reset(void);
void component_resume(int active);
void component_surface(int role, int token, int ready);
int component_request(const char *path);
int component_claim(void);
int component_complete(int handle, const unsigned char *data, int size);
int component_job_status(int handle);
void component_button(int button, int down);
void component_axis(int x, int y);
int component_touch(int role, int width, int height, int x, int y, int down);
int component_step(int owner, int elapsed);
int component_state(int field);
int component_rect(int role, int view, int width, int height, int field);
int component_scene_stat(int view, int field);
int component_geometry(int view, int pane, int field);
const unsigned int *component_pixels(int view);
#endif
