#ifndef DQM_DIGEST024_H
#define DQM_DIGEST024_H

_Static_assert(sizeof(unsigned int) == 4, "Digest words require 32 bits");
void fn_001b2554(unsigned int state[4], const unsigned char block[64]);

#endif
