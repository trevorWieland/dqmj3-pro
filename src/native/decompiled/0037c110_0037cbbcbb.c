#include "0037c110_0037cbbcbb.h"



void fn_0037cbbc(char *param_1,int param_2)

{
  if (*param_1 == '\x06') {
    param_1[9] = (char)param_2;
  }
  if (*param_1 == '\x06' && param_2 == 0) {
    param_1[10] = '\0';
    param_1[0xb] = '\0';
  }
  return;
}



void fn_0037cb88(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  return;
}



void fn_0037cb80(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x36) = *param_2;
  *(undefined4 *)(param_1 + 0x3a) = param_2[1];
  *(undefined4 *)(param_1 + 0x3e) = param_2[2];
  *(undefined4 *)(param_1 + 0x42) = param_2[3];
  *(undefined4 *)(param_1 + 0x46) = param_2[4];
  *(undefined1 *)(param_1 + 0x4a) = *(undefined1 *)(param_2 + 5);
  return;
}



void fn_0037cb1c(char *param_1,int param_2)

{
  if (*param_1 == '\x06') {
    param_1[0x10] = (char)param_2;
  }
  if (*param_1 == '\x06' && param_2 == 0) {
    param_1[0x11] = '\0';
    param_1[0x12] = '\0';
  }
  return;
}


