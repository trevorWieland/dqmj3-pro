#include "0022d168_0022d8bcb.h"



void fn_0022d8bc(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 local_218 [2];
  undefined1 auStack_210 [516];
  
  sVar1 = *(short *)(param_1 + 0x26);
  if (sVar1 != 0) {
    fn_00301f50(auStack_210,0x200);
    fn_0068afd8(auStack_210,0x100,(int)sVar1);
    local_218[0] = 1;
    uVar2 = fn_001481c8(*(undefined4 *)(param_1 + 0x10),auStack_210,&DAT_0022d944,1);
    *(undefined4 *)(param_1 + 0x14) = uVar2;
    fn_00301f50(local_218,0x100);
    fn_0068b06c(local_218,0x100,(int)*(short *)(param_1 + 0x26));
    uVar2 = fn_001c8c60(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),local_218);
    *(undefined4 *)(param_1 + 0x18) = uVar2;
  }
  return;
}



void fn_0022d7f4(int param_1)

{
  int iVar1;
  short sVar2;
  int iVar3;
  bool bVar4;
  
  fn_0022d3d4(param_1,0);
  fn_0022d58c(param_1,0);
  iVar1 = (int)*(char *)(param_1 + 0x28);
  iVar3 = (int)*(char *)(param_1 + 0x29);
  bVar4 = iVar1 != iVar3;
  if (bVar4) {
    iVar1 = *(int *)(param_1 + 0x20);
  }
  if (bVar4 && iVar1 != 0) {
    if (iVar3 == 0) {
      sVar2 = 3;
    }
    else {
      sVar2 = 0;
    }
    *(ushort *)(iVar1 + 0x76) = sVar2 << 6 | *(ushort *)(iVar1 + 0x76) & 0xfe3f;
  }
  if (*(short *)(param_1 + 0x24) != *(short *)(param_1 + 0x26)) {
    *(short *)(param_1 + 0x24) = *(short *)(param_1 + 0x26);
  }
  if (*(char *)(param_1 + 0x28) != *(char *)(param_1 + 0x29)) {
    *(char *)(param_1 + 0x28) = *(char *)(param_1 + 0x29);
  }
  if (*(char *)(param_1 + 0x2a) != *(char *)(param_1 + 0x2b)) {
    *(char *)(param_1 + 0x2a) = *(char *)(param_1 + 0x2b);
  }
  if (*(char *)(param_1 + 0x2c) != *(char *)(param_1 + 0x2d)) {
    *(char *)(param_1 + 0x2c) = *(char *)(param_1 + 0x2d);
  }
  if (*(char *)(param_1 + 0x2e) != *(char *)(param_1 + 0x2f)) {
    *(char *)(param_1 + 0x2e) = *(char *)(param_1 + 0x2f);
  }
  if (*(char *)(param_1 + 0x30) != *(char *)(param_1 + 0x31)) {
    *(char *)(param_1 + 0x30) = *(char *)(param_1 + 0x31);
  }
  return;
}



void fn_0022d734(int param_1)

{
  int iVar1;
  short sVar2;
  
  fn_0068aeac();
  fn_0022d3d4(param_1,1);
  fn_0022d58c(param_1,1);
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 != 0) {
    if (*(char *)(param_1 + 0x29) == '\0') {
      sVar2 = 3;
    }
    else {
      sVar2 = 0;
    }
    *(ushort *)(iVar1 + 0x76) = sVar2 << 6 | *(ushort *)(iVar1 + 0x76) & 0xfe3f;
  }
  if (*(short *)(param_1 + 0x24) != *(short *)(param_1 + 0x26)) {
    *(short *)(param_1 + 0x24) = *(short *)(param_1 + 0x26);
  }
  if (*(char *)(param_1 + 0x28) != *(char *)(param_1 + 0x29)) {
    *(char *)(param_1 + 0x28) = *(char *)(param_1 + 0x29);
  }
  if (*(char *)(param_1 + 0x2a) != *(char *)(param_1 + 0x2b)) {
    *(char *)(param_1 + 0x2a) = *(char *)(param_1 + 0x2b);
  }
  if (*(char *)(param_1 + 0x2c) != *(char *)(param_1 + 0x2d)) {
    *(char *)(param_1 + 0x2c) = *(char *)(param_1 + 0x2d);
  }
  if (*(char *)(param_1 + 0x2e) != *(char *)(param_1 + 0x2f)) {
    *(char *)(param_1 + 0x2e) = *(char *)(param_1 + 0x2f);
  }
  if (*(char *)(param_1 + 0x30) != *(char *)(param_1 + 0x31)) {
    *(char *)(param_1 + 0x30) = *(char *)(param_1 + 0x31);
  }
  return;
}



void fn_0022d58c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 local_38;
  float local_34;
  undefined4 local_30;
  float local_2c;
  undefined4 local_28;
  float local_24;
  undefined4 local_20;
  float local_1c;
  
  bVar5 = param_2 == 0;
  iVar1 = (int)*(char *)(param_1 + 0x2b);
  if (bVar5) {
    param_2 = (int)*(char *)(param_1 + 0x2a);
  }
  iVar4 = (int)*(char *)(param_1 + 0x2d);
  bVar6 = bVar5 && param_2 == iVar1;
  if (bVar5 && param_2 == iVar1) {
    bVar6 = *(char *)(param_1 + 0x2c) == iVar4;
  }
  if ((!bVar6) || (*(char *)(param_1 + 0x2e) != *(char *)(param_1 + 0x2f))) {
    if (iVar1 == 0) {
      iVar1 = (int)*(char *)(param_1 + 0x2f);
    }
    else {
      iVar1 = 0;
    }
    uVar9 = 0;
    uVar10 = 0x3f800000;
    if (iVar4 <= iVar1) {
      iVar1 = *(int *)(param_1 + 0x1c);
      fVar7 = (float)VectorSignedToFloat(iVar4 + 1,(byte)(in_fpscr >> 0x16) & 3);
      *(undefined4 *)(iVar1 + 0x3c) = 0x42300000;
      *(float *)(iVar1 + 0x40) = fVar7 * 44.0;
      *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xef | 0x10;
      local_38 = 0;
      local_34 = 0.0;
      local_30 = 0x3f800000;
      local_2c = 0.0;
      local_28 = 0;
      local_24 = 1.0;
      local_20 = 0x3f800000;
      local_1c = 1.0;
      fn_00552f04(*(undefined4 *)(param_1 + 0x1c),0,&local_38);
      return;
    }
    iVar2 = *(int *)(param_1 + 0x1c);
    fVar7 = (float)VectorSignedToFloat(iVar1 + 1,(byte)(in_fpscr >> 0x16) & 3);
    *(undefined4 *)(iVar2 + 0x3c) = 0x42300000;
    *(float *)(iVar2 + 0x40) = fVar7 * 44.0;
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xef | 0x10;
    pcVar3 = (char *)fn_00242930((int)*(short *)(param_1 + 0x26));
    iVar2 = 0;
    if (iVar1 == 0) {
      iVar2 = (int)*pcVar3;
    }
    else if (iVar1 == 1) {
      iVar2 = (int)pcVar3[1];
    }
    else if (iVar1 == 2) {
      iVar2 = (int)pcVar3[2];
    }
    else if (iVar1 == 3) {
      iVar2 = (int)pcVar3[3];
    }
    fVar8 = (float)VectorSignedToFloat(iVar4 + 1,(byte)(in_fpscr >> 0x16) & 3);
    local_34 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
    fVar7 = (float)VectorSignedToFloat(iVar4 + 1,(byte)(in_fpscr >> 0x16) & 3);
    local_34 = local_34 / fVar8;
    local_24 = (float)VectorSignedToFloat(iVar2 + iVar1 + 1,(byte)(in_fpscr >> 0x16) & 3);
    local_24 = local_24 / fVar7;
    local_38 = uVar9;
    local_30 = uVar10;
    local_2c = local_34;
    local_28 = uVar9;
    local_20 = uVar10;
    local_1c = local_24;
    fn_00552f04(*(undefined4 *)(param_1 + 0x1c),0,&local_38);
  }
  return;
}



void fn_0022d3d4(int param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  short sVar5;
  int *piVar6;
  undefined4 local_218 [2];
  undefined1 auStack_210 [516];
  
  if ((param_2 != 0) || (*(short *)(param_1 + 0x24) != *(short *)(param_1 + 0x26))) {
    if (*(int **)(param_1 + 0x1c) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
    if (*(int *)(param_1 + 0x18) != -1) {
      fn_00148348(*(undefined4 *)(param_1 + 0x10));
      *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
    }
    if (*(int *)(param_1 + 0x14) != -1) {
                    /* WARNING: Subroutine does not return */
      fn_001482f4(*(undefined4 *)(param_1 + 0x10));
    }
    sVar5 = *(short *)(param_1 + 0x26);
    if (sVar5 != 0) {
      fn_00301f50(auStack_210,0x200);
      fn_0068afd8(auStack_210,0x100,(int)sVar5);
      local_218[0] = 1;
      uVar2 = fn_001481c8(*(undefined4 *)(param_1 + 0x10),auStack_210,&DAT_0022d944,1);
      *(undefined4 *)(param_1 + 0x14) = uVar2;
      fn_00301f50(local_218,0x100);
      fn_0068b06c(local_218,0x100,(int)*(short *)(param_1 + 0x26));
      uVar2 = fn_001c8c60(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),local_218
                          );
      *(undefined4 *)(param_1 + 0x18) = uVar2;
    }
    uVar2 = fn_001c8888(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
    iVar3 = fn_00145b00(0xc0,&DAT_00812c8c);
    piVar4 = (int *)0x0;
    if (iVar3 != 0) {
      piVar4 = (int *)fn_001c99cc(iVar3,uVar2);
    }
    piVar6 = *(int **)(param_1 + 0x1c);
    if (piVar6 != piVar4) {
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 4))(piVar6);
      }
      *(int **)(param_1 + 0x1c) = piVar4;
    }
    fn_001c9700(*(undefined4 *)(param_1 + 0x1c));
    bVar1 = *(byte *)(*(int *)(param_1 + 0x1c) + 0x47);
    *(byte *)(*(int *)(param_1 + 0x1c) + 0x47) = bVar1 & 0xfc | 1;
    *(byte *)(*(int *)(param_1 + 0x1c) + 0x47) = bVar1 & 0xf0 | 5;
    iVar3 = fn_006e1ee4(*(undefined4 *)(param_1 + 0x1c));
    *(int *)(param_1 + 0x20) = iVar3;
    if (*(char *)(param_1 + 0x29) == '\0') {
      sVar5 = 3;
    }
    else {
      sVar5 = 0;
    }
    *(ushort *)(iVar3 + 0x76) = sVar5 << 6 | *(ushort *)(iVar3 + 0x76) & 0xfe3f;
  }
  return;
}


