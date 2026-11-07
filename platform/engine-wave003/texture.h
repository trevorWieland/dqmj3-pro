#ifndef DQM_TEXTURE_COMPONENT_H
#define DQM_TEXTURE_COMPONENT_H
int texture_info(const unsigned char *data, int size, int field);
int texture_decode(const unsigned char *data, int size, unsigned int *argb, int capacity);
int textured_scene_load(const unsigned char *archive, int size);
const unsigned int *textured_scene_pixels(void);
int textured_scene_stat(int field);
#endif
