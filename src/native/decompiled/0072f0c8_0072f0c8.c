#include "0072f0c8_0072f0c8.h"



void fn_0072f0c8(int param_1,int param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  
  if (param_1 == 0xde1) {
    if (*(int *)(DAT_008bfab0 + *(int *)(DAT_008bfab0 + 0x58) * 4 + 0x5c) == 0) {
      puVar1 = (uint *)*DAT_008bfad8;
    }
    else {
      puVar1 = *(uint **)DAT_008bfad8[*(int *)(DAT_008bfab0 + 0x58) + 0x204];
    }
    if (param_2 == 0x6790) {
      uVar2 = puVar1[0xd];
      goto LAB_0072f2c4;
    }
    if (param_2 == 0x2803) goto LAB_0072f2d0;
    if (0x2802 < param_2) goto joined_r0x0072f1d0;
    if (param_2 == 0x1004) goto LAB_0072f1fc;
    if (param_2 == 0x2800) goto LAB_0072f1ec;
    if (param_2 == 0x2801) {
      uVar2 = puVar1[1];
      goto LAB_0072f2c4;
    }
    if (param_2 != 0x2802) {
      return;
    }
  }
  else {
    if (param_1 != 0x8513) {
      return;
    }
    if (*(int *)(DAT_008bfab0 + *(int *)(DAT_008bfab0 + 0x58) * 4 + 0x68) == 0) {
      puVar1 = (uint *)DAT_008bfad8[1];
    }
    else {
      puVar1 = *(uint **)DAT_008bfad8[*(int *)(DAT_008bfab0 + 0x58) + 0x207];
    }
    if (param_2 == 0x6790) {
      *param_3 = puVar1[0xd];
      param_3[1] = puVar1[0x1e];
      param_3[2] = puVar1[0x2f];
      param_3[3] = puVar1[0x40];
      param_3[4] = puVar1[0x51];
      param_3[5] = puVar1[0x62];
      return;
    }
    if (param_2 == 0x2803) {
LAB_0072f2d0:
      uVar2 = puVar1[3];
      goto LAB_0072f2c4;
    }
    if (0x2802 < param_2) {
joined_r0x0072f1d0:
      if (param_2 == 0x813a) {
        uVar2 = puVar1[5];
      }
      else if (param_2 == 0x8191) {
        uVar2 = (uint)(byte)puVar1[0xc];
      }
      else {
        if (param_2 != 0x8501) {
          return;
        }
        uVar2 = (uint)(float)puVar1[10];
      }
      goto LAB_0072f2c4;
    }
    if (param_2 == 0x1004) {
LAB_0072f1fc:
      *param_3 = (int)(float)puVar1[6];
      param_3[1] = (int)(float)puVar1[7];
      param_3[2] = (int)(float)puVar1[8];
      param_3[3] = (int)(float)puVar1[9];
      return;
    }
    if (param_2 == 0x2800) {
LAB_0072f1ec:
      uVar2 = *puVar1;
      goto LAB_0072f2c4;
    }
    if (param_2 == 0x2801) {
      *param_3 = puVar1[1];
      return;
    }
    if (param_2 != 0x2802) {
      return;
    }
  }
  uVar2 = puVar1[2];
LAB_0072f2c4:
  *param_3 = uVar2;
  return;
}


