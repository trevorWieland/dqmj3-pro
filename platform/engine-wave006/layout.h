#ifndef DQM_MEASURED_LAYOUT_H
#define DQM_MEASURED_LAYOUT_H
#include "../../src/native/wave014/projection.h"
void engine_layout_reset(void);
int engine_layout_load(const unsigned char *data, int size);
int engine_layout_count(void);
int engine_layout_size(int dimension);
int engine_layout_value(int pane, int field);
int engine_layout_world(int pane, ProjectionPane *output);
#endif
