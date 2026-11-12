#include "00506c38_005075f4bb.h"



undefined8 fn_005075f4(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    uVar1 = 0;
    if (DAT_008c0630 != 0) {
      uVar1 = 8;
    }
  }
  else {
    uVar1 = param_2 - 0x100000;
    if (uVar1 < 0x3ff00000) {
      uVar1 = param_3 - 0x100000;
    }
    if ((0x3fefffff < uVar1) || (param_4 == 0)) {
      if (DAT_008c0630 != 0) {
        uVar1 = 8;
      }
      return CONCAT44(uVar1,0xe0e14826);
    }
    if (*(char *)(param_1 + 0x90) == '\x01') {
      if (DAT_008c0630 != 0) {
        uVar1 = 8;
      }
    }
    else if (*(char *)(param_1 + 0x70) == '\x01') {
      if (*(char *)(param_1 + 0x71) == '\0') {
        if (*(char *)(param_1 + 0xa4) != '\0') {
          fn_004ed13c(param_1 + 0x90);
          *(undefined1 *)(param_1 + 0xa4) = 0;
        }
        uVar3 = fn_004f97fc(*(undefined4 *)(param_1 + 0x14),param_1 + 0x90,param_2,param_3,param_4)
        ;
        uVar2 = (undefined4)((ulonglong)uVar3 >> 0x20);
        if (-1 < (int)uVar3) {
          *(undefined1 *)(param_1 + 0xa4) = 1;
          fn_004efcf4(*(undefined4 *)(param_1 + 0x14),0);
          uVar2 = extraout_r1;
        }
        return CONCAT44(uVar2,(int)uVar3);
      }
      if (DAT_008c0630 != 0) {
        uVar1 = 8;
      }
    }
    else if (DAT_008c0630 != 0) {
      uVar1 = 8;
    }
  }
  return CONCAT44(uVar1,&DAT_e0a14827);
}



undefined8 fn_00507290(int param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  undefined4 extraout_r1;
  undefined4 uVar4;
  bool bVar5;
  undefined8 uVar6;
  
  uVar3 = param_2 - 0x100000;
  if (0x3fefffff < uVar3) {
    if (DAT_008c0630 != 0) {
      uVar3 = 8;
    }
    return CONCAT44(uVar3,0xe0e14826);
  }
  if (*(char *)(param_1 + 0x90) != '\x01') {
    if (*(char *)(param_1 + 0x70) != '\x01') {
      if (DAT_008c0630 != 0) {
        uVar3 = 8;
      }
      goto LAB_005074e0;
    }
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + (uint)*(byte *)(param_1 + 0xb5) * 4 + 0xb8) +
                                0x1c))();
    uVar6 = (**(code **)(*piVar2 + 0x1c))();
    uVar3 = (uint)((ulonglong)uVar6 >> 0x20);
    if ((int)uVar6 != 0) {
      bVar5 = *(char *)(param_1 + 0xa4) != '\0';
      cVar1 = '\0';
      if (bVar5) {
        cVar1 = *(char *)(param_1 + 0x90);
      }
      if (bVar5 && cVar1 != '\x01') {
        fn_004ed13c(param_1 + 0x90);
        *(undefined1 *)(param_1 + 0xa4) = 0;
      }
      uVar6 = fn_004fb1d0(*(undefined4 *)(param_1 + 0x18),param_1 + 0x90,
                           *(undefined4 *)(param_1 + (uint)*(byte *)(param_1 + 0xb5) * 4 + 0xb8),
                           param_2);
      uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
      if (-1 < (int)uVar6) {
        fn_004efcf4(*(undefined4 *)(param_1 + 0x18),0);
        *(undefined1 *)(param_1 + 0xa4) = 2;
        uVar4 = extraout_r1;
      }
      return CONCAT44(uVar4,(int)uVar6);
    }
  }
  if (DAT_008c0630 != 0) {
    uVar3 = 8;
  }
LAB_005074e0:
  return CONCAT44(uVar3,&DAT_e0a14827);
}


