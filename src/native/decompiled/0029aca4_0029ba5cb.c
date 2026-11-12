#include "0029aca4_0029ba5cb.h"



void fn_0029ba5c(int param_1,undefined1 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float in_s0;
  float in_s1;
  
  fn_0029b484();
  uVar2 = 7;
  switch(param_5) {
  case 3:
    if (param_3 < 0) {
      uVar2 = 5;
    }
    else if (*(char *)(param_1 + 0x1c) == '\0') {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
    break;
  case 4:
    if (param_3 < 0) {
      uVar2 = 6;
    }
    else {
      uVar2 = 2;
    }
    break;
  case 9:
    if (param_3 < 0) {
      uVar2 = 4;
    }
    else {
      uVar2 = 3;
    }
  }
  uVar1 = fn_00182994(DAT_008977e4);
  if (param_3 < 0) {
    param_3 = -param_3;
  }
  fn_001755cc(uVar1,param_2,uVar2,param_3,param_4,(int)in_s0,(int)in_s1);
  return;
}



void fn_0029b484(int param_1,int param_2)

{
  int iVar1;
  uint in_fpscr;
  
  iVar1 = fn_0061be08(param_2);
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x1c) != '\0') {
      param_1 = param_1 + (param_2 + -0x14) * 4;
      iVar1 = *(int *)(param_1 + 0xa4) * 8 + (*(int *)(param_1 + 0xa4) / 6) * -0x30;
      VectorSignedToFloat(*(undefined4 *)(&DAT_007bcf6c + iVar1),(byte)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(*(undefined4 *)(&DAT_007bcf70 + iVar1),(byte)(in_fpscr >> 0x16) & 3);
      *(int *)(param_1 + 0xa4) = *(int *)(param_1 + 0xa4) + 1;
    }
  }
  else if (*(char *)(param_1 + 0x1c) == '\0') {
    param_1 = param_1 + (param_2 + -0x10) * 4;
    iVar1 = *(int *)(param_1 + 0xa4) * 8 + (*(int *)(param_1 + 0xa4) / 6) * -0x30;
    VectorSignedToFloat(*(undefined4 *)(&DAT_007bcf6c + iVar1),(byte)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(*(undefined4 *)(&DAT_007bcf70 + iVar1),(byte)(in_fpscr >> 0x16) & 3);
    *(int *)(param_1 + 0xa4) = *(int *)(param_1 + 0xa4) + 1;
  }
  return;
}


