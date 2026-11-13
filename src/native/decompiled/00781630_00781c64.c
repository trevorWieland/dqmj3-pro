#include "00781630_00781c64.h"



undefined4 fn_00781c64(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_4;
  
  uStack_4 = param_4;
  do {
    if (param_3 <= param_2) {
      return 0;
    }
    iVar1 = fn_006f14a4(param_1,param_2);
    if (iVar1 != 0) {
      iVar3 = 0;
      if (*(char *)(iVar1 + 0x120) != '\0') {
        do {
          iVar2 = fn_006536f4(&uStack_4,(int)*(short *)((byte *)(iVar1 + 0x120) + iVar3 * 2 + 4),
                               param_2);
          if (iVar2 != 0) {
            return 1;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < (int)(uint)*(byte *)(iVar1 + 0x120));
      }
    }
    param_2 = (int)(char)((char)param_2 + '\x01');
  } while( true );
}



undefined4
fn_00781bc4(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined1 param_5)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  undefined1 uStack00000000;
  
  iVar1 = fn_006f14a4();
  if (iVar1 != 0) {
    pbVar3 = (byte *)(iVar1 + 0x120);
    for (; param_3 < param_4; param_3 = (int)(char)((char)param_3 + '\x01')) {
      iVar1 = fn_006f14a4(param_1,param_3);
      if ((iVar1 != 0) && (iVar1 = 0, *pbVar3 != 0)) {
        do {
          iVar2 = fn_00652e3c(&param_5,(int)*(short *)(pbVar3 + iVar1 * 2 + 4),param_3);
          if (iVar2 != 0) {
            return 1;
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < (int)(uint)*pbVar3);
      }
    }
  }
  return 0;
}



undefined1 * fn_00781b58(undefined1 *param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  undefined1 auStack_58 [72];
  
  if (param_3 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    return param_1;
  }
  fn_0017821c(auStack_58,param_1,0x48);
  fn_0019bed8(auStack_58,param_2,param_3,param_4);
  return auStack_58;
}



void fn_00781b20(int param_1)

{
  undefined4 uVar1;
  uint in_fpscr;
  
  uVar1 = 0;
  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)(param_1 + 0x24) + 0x28))();
  }
  VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
  return;
}



void fn_00781ae8(int param_1)

{
  undefined4 uVar1;
  uint in_fpscr;
  
  uVar1 = 0;
  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)(param_1 + 0x24) + 0x28))();
  }
  VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
  return;
}



void fn_0078197c(int param_1,int param_2)

{
  float *pfVar1;
  undefined1 *puVar2;
  float in_s1;
  float local_58;
  float local_54;
  float local_50;
  float local_48;
  float local_44;
  float local_40;
  undefined1 auStack_28 [28];
  
  if ((*(uint *)(param_1 + 8) & 0x20) == 0) {
    pfVar1 = *(float **)(param_1 + 0xc);
    if ((*(uint *)(param_1 + 8) & 4) == 0) {
      fn_00780998(*(float **)(param_1 + 0xc),&local_58);
      pfVar1 = &local_58;
    }
    *(float *)(param_2 + 4) = *(float *)(param_2 + 4) + *pfVar1 * in_s1;
    *(float *)(param_2 + 8) = *(float *)(param_2 + 8) + pfVar1[1] * in_s1;
    *(float *)(param_2 + 0xc) = *(float *)(param_2 + 0xc) + pfVar1[2] * in_s1;
  }
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    if ((*(uint *)(param_1 + 8) & 2) == 0) {
      fn_00780898(*(undefined4 *)(param_1 + 0x10),auStack_28);
      puVar2 = auStack_28;
    }
    else {
      puVar2 = *(undefined1 **)(param_1 + 0x10);
    }
    fn_0052555c(&local_58,puVar2,1);
    *(float *)(param_2 + 0x10) = *(float *)(param_2 + 0x10) + local_58 * in_s1;
    *(float *)(param_2 + 0x14) = *(float *)(param_2 + 0x14) + local_54 * in_s1;
    *(float *)(param_2 + 0x18) = *(float *)(param_2 + 0x18) + local_50 * in_s1;
    *(float *)(param_2 + 0x20) = *(float *)(param_2 + 0x20) + local_48 * in_s1;
    *(float *)(param_2 + 0x24) = *(float *)(param_2 + 0x24) + local_44 * in_s1;
    *(float *)(param_2 + 0x28) = *(float *)(param_2 + 0x28) + local_40 * in_s1;
  }
  if ((*(uint *)(param_1 + 8) & 8) == 0) {
    pfVar1 = *(float **)(param_1 + 0x14);
    if ((*(uint *)(param_1 + 8) & 1) == 0) {
      fn_00780998(*(float **)(param_1 + 0x14),&local_58);
      pfVar1 = &local_58;
    }
    *(float *)(param_2 + 0x1c) = *(float *)(param_2 + 0x1c) + *pfVar1 * in_s1;
    *(float *)(param_2 + 0x2c) = *(float *)(param_2 + 0x2c) + pfVar1[1] * in_s1;
    *(float *)(param_2 + 0x3c) = *(float *)(param_2 + 0x3c) + pfVar1[2] * in_s1;
  }
  return;
}



int fn_00781908(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint in_s0;
  undefined4 uVar3;
  ulonglong uVar4;
  
  uVar2 = 0;
  uVar4 = (ulonglong)in_s0;
  do {
    if ((*(uint *)(param_1 + 8) & 0x100 << (uVar2 & 0xff)) == 0) {
      iVar1 = param_1 + uVar2 * 4;
      if ((*(uint *)(param_1 + 8) & 1 << (uVar2 & 0xff)) == 0) {
        uVar3 = (undefined4)uVar4;
        fn_006df85c(*(undefined4 *)(iVar1 + 0xc));
      }
      else {
        uVar3 = *(undefined4 *)(iVar1 + 0xc);
      }
      *(undefined4 *)(param_2 + uVar2 * 4) = uVar3;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 4);
  return ~(*(uint *)(param_1 + 8) & 0xf00) << 8;
}



int fn_00781894(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint in_s0;
  undefined4 uVar3;
  ulonglong uVar4;
  
  uVar2 = 0;
  uVar4 = (ulonglong)in_s0;
  do {
    if ((*(uint *)(param_1 + 8) & 0x100 << (uVar2 & 0xff)) == 0) {
      iVar1 = param_1 + uVar2 * 4;
      if ((*(uint *)(param_1 + 8) & 1 << (uVar2 & 0xff)) == 0) {
        uVar3 = (undefined4)uVar4;
        fn_006df85c(*(undefined4 *)(iVar1 + 0xc));
      }
      else {
        uVar3 = *(undefined4 *)(iVar1 + 0xc);
      }
      *(undefined4 *)(param_2 + uVar2 * 4) = uVar3;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 3);
  return ~(*(uint *)(param_1 + 8) & 0xf00) << 8;
}



int fn_00781854(int param_1,undefined4 *param_2)

{
  undefined4 in_s0;
  
  if ((*(uint *)(param_1 + 8) & 0x100) == 0) {
    if ((*(uint *)(param_1 + 8) & 1) == 0) {
      fn_006df85c(*(undefined4 *)(param_1 + 0xc));
    }
    else {
      in_s0 = *(undefined4 *)(param_1 + 0xc);
    }
    *param_2 = in_s0;
  }
  return ~(*(uint *)(param_1 + 8) & 0xf00) << 8;
}



void fn_00781630(int param_1,int param_2)

{
  float in_s0;
  float fVar1;
  float fVar2;
  float fVar3;
  float in_s1;
  float local_50;
  float local_4c;
  float local_48;
  float local_40;
  float local_3c;
  float local_38;
  
  if ((*(uint *)(param_1 + 8) & 0x70000) == 0) {
    fVar1 = in_s0;
    if ((*(uint *)(param_1 + 8) & 0x40) == 0) {
      fn_006df85c(*(undefined4 *)(param_1 + 0xc));
      fVar2 = in_s0;
    }
    else {
      fVar2 = *(float *)(param_1 + 0xc);
    }
    fVar3 = fVar1;
    if ((*(uint *)(param_1 + 8) & 0x80) == 0) {
      fn_006df85c(*(undefined4 *)(param_1 + 0x10));
    }
    else {
      fVar1 = *(float *)(param_1 + 0x10);
    }
    in_s0 = fVar3;
    if ((*(uint *)(param_1 + 8) & 0x100) == 0) {
      fn_006df85c(*(undefined4 *)(param_1 + 0x14));
    }
    else {
      fVar3 = *(float *)(param_1 + 0x14);
    }
    *(float *)(param_2 + 4) = *(float *)(param_2 + 4) + fVar2 * in_s1;
    *(float *)(param_2 + 8) = *(float *)(param_2 + 8) + fVar1 * in_s1;
    *(float *)(param_2 + 0xc) = *(float *)(param_2 + 0xc) + fVar3 * in_s1;
  }
  if ((*(uint *)(param_1 + 8) & 0x380000) == 0) {
    if ((*(uint *)(param_1 + 8) & 0x200) == 0) {
      fn_006df85c(*(undefined4 *)(param_1 + 0x18));
    }
    if ((*(uint *)(param_1 + 8) & 0x400) == 0) {
      fn_006df85c(*(undefined4 *)(param_1 + 0x1c));
    }
    if ((*(uint *)(param_1 + 8) & 0x800) == 0) {
      fn_006df85c(*(undefined4 *)(param_1 + 0x20));
    }
    fn_00525630(&local_50,0);
    *(float *)(param_2 + 0x10) = *(float *)(param_2 + 0x10) + local_50 * in_s1;
    *(float *)(param_2 + 0x14) = *(float *)(param_2 + 0x14) + local_4c * in_s1;
    *(float *)(param_2 + 0x18) = *(float *)(param_2 + 0x18) + local_48 * in_s1;
    *(float *)(param_2 + 0x20) = *(float *)(param_2 + 0x20) + local_40 * in_s1;
    *(float *)(param_2 + 0x24) = *(float *)(param_2 + 0x24) + local_3c * in_s1;
    *(float *)(param_2 + 0x28) = *(float *)(param_2 + 0x28) + local_38 * in_s1;
  }
  if ((*(uint *)(param_1 + 8) & 0x1c00000) == 0) {
    fVar1 = in_s0;
    if ((*(uint *)(param_1 + 8) & 0x2000) == 0) {
      fn_006df85c(*(undefined4 *)(param_1 + 0x24));
      fVar2 = in_s0;
    }
    else {
      fVar2 = *(float *)(param_1 + 0x24);
    }
    fVar3 = fVar1;
    if ((*(uint *)(param_1 + 8) & 0x4000) == 0) {
      fn_006df85c(*(undefined4 *)(param_1 + 0x28));
    }
    else {
      fVar1 = *(float *)(param_1 + 0x28);
    }
    if ((*(uint *)(param_1 + 8) & 0x8000) == 0) {
      fn_006df85c(*(undefined4 *)(param_1 + 0x2c));
    }
    else {
      fVar3 = *(float *)(param_1 + 0x2c);
    }
    *(float *)(param_2 + 0x1c) = *(float *)(param_2 + 0x1c) + fVar2 * in_s1;
    *(float *)(param_2 + 0x2c) = *(float *)(param_2 + 0x2c) + fVar1 * in_s1;
    *(float *)(param_2 + 0x3c) = *(float *)(param_2 + 0x3c) + fVar3 * in_s1;
  }
  return;
}


