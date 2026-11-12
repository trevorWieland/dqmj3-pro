#include "0018b09c_0018b7fc.h"



void fn_0018b7fc(int param_1,ushort param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 == (int *)(param_1 + 8)) {
    return;
  }
  do {
    piVar2 = (int *)*piVar1;
    if ((char)piVar1[-0x11] != '\0') {
      *(ushort *)(piVar1 + -0xe) = *(ushort *)(piVar1 + -0xe) | param_2;
    }
    piVar1 = piVar2;
  } while (piVar2 != (int *)(param_1 + 8));
  return;
}



undefined1 * fn_0018b794(void)

{
  int iVar1;
  
  if (((DAT_008c357c & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008c357c), iVar1 != 0)) {
    DAT_008f272c = 0;
    DAT_008f2730 = 0;
    DAT_008f2734 = &DAT_008f2734;
    DAT_008f2738 = &DAT_008f2734;
    DAT_008f273c = 0;
    DAT_008f2740 = &DAT_008f2740;
    DAT_008f2744 = &DAT_008f2740;
  }
  return &DAT_008f272c;
}



void fn_0018b788(int param_1,int param_2)

{
  undefined4 in_s0;
  
  *(undefined4 *)(param_1 + param_2 * 4 + 0x38) = in_s0;
  return;
}



void fn_0018b77c(int param_1,undefined1 param_2)

{
  undefined4 in_s0;
  
  *(undefined4 *)(param_1 + 0x28) = in_s0;
  *(undefined1 *)(param_1 + 0x2c) = param_2;
  return;
}



undefined4 fn_0018b4e8(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_1 + param_2 * 0x10;
  if (*(int *)(iVar2 + 0x20) < *(int *)(iVar2 + 0x1c)) {
    fn_0018b588(param_1,param_2);
  }
  fn_0019be88(iVar2 + 0x14,0);
  fn_00193fc0();
  param_1 = param_1 + param_2 * 0xc;
  piVar1 = (int *)(param_1 + 0x54);
  if (*piVar1 == 0) {
    fn_0015f38c((int)(char)param_2,fn_00195e44,param_2);
  }
  fn_0017d948(piVar1,param_1 + 0x58,param_3 + 4);
  return 1;
}



undefined4 fn_0018b350(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1 + param_2 * 0x10;
  if (*(char *)(iVar3 + 0x29c) == '\0') {
    if (*(int *)(iVar3 + 0x20) < *(int *)(iVar3 + 0x1c)) {
      fn_0018b588(param_1,param_2);
    }
    fn_0019be88(iVar3 + 0x14,0);
    fn_00193fc0();
    iVar2 = fn_00193884(param_3,(int)(char)param_2);
    uVar1 = 0;
    if (((iVar2 != 0) && (iVar2 = fn_00193968(param_3,param_4), uVar1 = 0, iVar2 != 0)) &&
       (iVar2 = fn_001938dc(param_3,1), uVar1 = 0, iVar2 != 0)) {
      uVar1 = 1;
      *(undefined4 *)(iVar3 + 0x298) = param_3;
      *(undefined1 *)(iVar3 + 0x29c) = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



undefined4 fn_0018b280(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1 + param_2 * 0x10;
  if (*(char *)(iVar3 + 0x294) == '\0') {
    if (*(int *)(iVar3 + 0x20) < *(int *)(iVar3 + 0x1c)) {
      fn_0018b588(param_1,param_2);
    }
    fn_0019be88(iVar3 + 0x14,0);
    fn_00193fc0();
    iVar2 = fn_00193600(param_3,(int)(char)param_2);
    uVar1 = 0;
    if (((iVar2 != 0) && (iVar2 = fn_0019371c(param_3,param_4), uVar1 = 0, iVar2 != 0)) &&
       (iVar2 = fn_00193690(param_3,1), uVar1 = 0, iVar2 != 0)) {
      uVar1 = 1;
      *(undefined4 *)(iVar3 + 0x290) = param_3;
      *(undefined1 *)(iVar3 + 0x294) = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



void fn_0018b588(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  fn_001710c8();
  iVar2 = 0;
LAB_0018b5ac:
  do {
    iVar1 = param_1 + param_2 * 0x10 + iVar2 * 8;
    if (*(char *)(iVar1 + 0x294) == '\x01') {
      if (iVar2 == 0) {
        fn_00170ffc(*(undefined4 *)(iVar1 + 0x290));
        iVar2 = 1;
        *(undefined1 *)(iVar1 + 0x294) = 2;
        goto LAB_0018b5ac;
      }
      if (iVar2 == 1) {
        fn_001710d8(*(undefined4 *)(iVar1 + 0x290));
        *(undefined1 *)(iVar1 + 0x294) = 2;
      }
    }
    iVar2 = iVar2 + 1;
    if (1 < iVar2) {
      iVar2 = param_1 + param_2 * 0xc;
      if (*(int *)(iVar2 + 0x54) == 0) {
        return;
      }
      fn_001714f4((int)(char)param_2);
      param_1 = param_1 + param_2 * 8;
      *(undefined4 *)(param_1 + 0x280) = 0;
      *(undefined4 *)(param_1 + 0x284) = 0;
      piVar3 = *(int **)(iVar2 + 0x58);
      if (piVar3 != (int *)(iVar2 + 0x58)) {
        do {
          (**(code **)(piVar3[-1] + 0xc))(piVar3 + -1);
          piVar3 = (int *)*piVar3;
        } while (piVar3 != (int *)(iVar2 + 0x58));
      }
      fn_00150c68((int *)(iVar2 + 0x54),*(undefined4 *)(iVar2 + 0x58),iVar2 + 0x58);
      return;
    }
  } while( true );
}



void fn_0018b1fc(int param_1,int param_2,undefined2 param_3)

{
  *(undefined2 *)(param_1 + param_2 * 2 + 0x10c) = param_3;
  return;
}



void fn_0018b1c4(int param_1)

{
  float in_s0;
  
  if (in_s0 < 0.0) {
    in_s0 = 0.0;
  }
  if (*(float *)(param_1 + 0x24) != in_s0) {
    *(float *)(param_1 + 0x24) = in_s0;
    *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) | 0x40;
  }
  return;
}



void fn_0018b188(int param_1,int param_2)

{
  int iVar1;
  float in_s0;
  
  iVar1 = param_1 + param_2 * 4;
  if (in_s0 < 0.0) {
    in_s0 = 0.0;
  }
  if (*(float *)(iVar1 + 0x48) != in_s0) {
    *(float *)(iVar1 + 0x48) = in_s0;
    *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) | 8;
  }
  return;
}



void fn_0018b164(int param_1)

{
  float in_s0;
  
  if (*(float *)(param_1 + 0x28) != in_s0) {
    *(float *)(param_1 + 0x28) = in_s0;
    *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) | 4;
  }
  return;
}



void fn_0018b09c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      iVar2 = *(int *)(param_1 + iVar1 * 4);
      if (iVar2 != 0) {
        fn_00195a70(param_1,iVar1,&local_40);
        fn_0019f23c(iVar2,&local_40);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 8));
  }
  return;
}


