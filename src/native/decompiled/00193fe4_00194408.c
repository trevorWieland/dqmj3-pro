#include "00193fe4_00194408.h"



void fn_00194408(void)

{
  uint in_fpscr;
  float in_s0;
  float fVar1;
  uint uVar2;
  
  fVar1 = ABS(in_s0);
  if (0x477fffff < (int)fVar1) {
    fn_001a23a8();
  }
  uVar2 = VectorFloatToUnsigned(fVar1,3);
  VectorUnsignedToFloat(uVar2 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
  return;
}



void fn_001943e8(int param_1)

{
  int iVar1;
  undefined4 in_s0;
  
  *(undefined4 *)(param_1 + 100) = in_s0;
  iVar1 = *(int *)(param_1 + 0x68);
  *(undefined4 *)(iVar1 + 0x68) = in_s0;
  *(ushort *)(iVar1 + 0x6c) = *(ushort *)(iVar1 + 0x6c) | 1;
  return;
}



void fn_001943c0(int param_1)

{
  float in_s0;
  
  if (in_s0 < 0.0) {
    in_s0 = 0.0;
  }
  *(float *)(param_1 + 0x24) = in_s0;
  *(ushort *)(param_1 + 0x6c) = *(ushort *)(param_1 + 0x6c) | 2;
  return;
}



void fn_00194370(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0xc) = *param_2;
  *(undefined4 *)(param_1 + 0x10) = param_2[1];
  *(undefined2 *)(param_1 + 0x14) = *(undefined2 *)(param_2 + 2);
  iVar1 = *(int *)(param_1 + 0x68);
  *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(param_1 + 0x10);
  *(undefined2 *)(iVar1 + 0x1c) = *(undefined2 *)(param_1 + 0x14);
  *(ushort *)(iVar1 + 0x6c) = *(ushort *)(iVar1 + 0x6c) | 0x10;
  return;
}



void fn_00194358(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x10) = *param_2;
  *(ushort *)(param_1 + 0x6c) = *(ushort *)(param_1 + 0x6c) | 8;
  return;
}



void fn_001942ec(int param_1)

{
  int iVar1;
  
  fn_00170704();
  iVar1 = *(int *)(param_1 + 0x30);
  while (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 0x11) = 3;
    iVar1 = *(int *)(iVar1 + 0x14);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined2 *)(param_1 + 0x34) = 0;
  *(undefined2 *)(param_1 + 0x36) = 0;
  fn_001707b4(param_1 + 0x70);
  *(ushort *)(param_1 + 0x6c) = *(ushort *)(param_1 + 0x6c) | 0x8000;
  *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + 1;
  return;
}



void fn_001942b8(int param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  
  if (param_2 == 0) {
    bVar2 = *(byte *)(param_1 + 7) & 0xfe;
  }
  else {
    bVar2 = *(byte *)(param_1 + 7) | 1;
  }
  *(byte *)(param_1 + 7) = bVar2;
  iVar1 = *(int *)(param_1 + 0x68);
  *(byte *)(iVar1 + 0xf) = bVar2;
  *(ushort *)(iVar1 + 0x6c) = *(ushort *)(iVar1 + 0x6c) | 4;
  return;
}



void fn_00194004(uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 uVar4;
  bool bVar5;
  uint in_fpscr;
  uint uVar6;
  float fVar7;
  
  bVar5 = (param_1[0x1b] & 1) != 0;
  if (bVar5) {
    fn_0017d694(param_1);
  }
  if ((param_1[0x1b] & 2) != 0) {
    fVar7 = (float)VectorSignedToFloat(param_1[8],(byte)(in_fpscr >> 0x16) & 3);
    param_1[10] = (uint)((float)param_1[9] * fVar7 * 3.055488e-05);
    fn_0017d130(&DAT_008ef5bc,*param_1 & 0xff);
    if (*(char *)((int)param_1 + 0xe) == '\0') {
      *(ushort *)(param_1 + 0x1b) = (ushort)param_1[0x1b] | 0x20;
    }
    bVar5 = true;
  }
  if ((param_1[0x1b] & 4) != 0) {
    fn_0017d520(&DAT_008ef5bc,*param_1 & 0xff,*(undefined1 *)((int)param_1 + 0xf));
    bVar5 = true;
  }
  if ((param_1[0x1b] & 8) != 0) {
    fn_0017d590(&DAT_008ef5bc,*param_1 & 0xff,(int)(short)param_1[4],
                 (int)*(short *)((int)param_1 + 0x12));
  }
  if ((param_1[0x1b] & 0x10) != 0) {
    fn_0017d608(&DAT_008ef5bc,*param_1 & 0xff,(int)(short)param_1[5],
                 (int)*(short *)((int)param_1 + 0x16),(int)(short)param_1[6],
                 (int)*(short *)((int)param_1 + 0x1a),(int)(short)param_1[7]);
  }
  if ((param_1[0x1b] & 0x20) != 0) {
    uVar2 = 2;
    uVar4 = 1;
    if (*(char *)((int)param_1 + 0xe) == '\0') {
      uVar2 = 0;
      uVar4 = (int)param_1[10] < 0x3faaaaac;
      if (((bool)uVar4) && ((int)param_1[10] < 0x3f800001)) {
        uVar4 = 2;
      }
    }
    else if (*(char *)((int)param_1 + 0xe) == '\x01') {
      uVar2 = 1;
    }
    fn_0017d0b0(&DAT_008ef5bc,*param_1 & 0xff,uVar2,uVar4);
    bVar5 = true;
  }
  if ((param_1[0x1b] & 0x40) != 0) {
    fn_0017d494(&DAT_008ef5bc,*param_1 & 0xff,param_1 + 0x1f);
  }
  if (!bVar5) goto LAB_00194284;
  param_1[0xb] = 0x578;
  uVar1 = *(ushort *)((int)param_1 + 0x1e) & 3;
  fVar7 = (float)VectorSignedToFloat(*(undefined4 *)
                                      (&UNK_00812810 +
                                      (*(ushort *)((int)param_1 + 0x1e) & 0xc) * 2 + uVar1 * 4),
                                     (byte)(in_fpscr >> 0x16) & 3);
  uVar6 = VectorFloatToUnsigned(fVar7 * (float)param_1[10] + 1400.0,3);
  param_1[0xb] = uVar6;
  iVar3 = *(int *)(&UNK_00812828 + (uint)*(byte *)((int)param_1 + 0xe) * 8 + uVar1 * 4);
  param_1[0xb] = uVar6 + iVar3;
  uVar6 = uVar6 + iVar3 +
          *(int *)(&UNK_00812840 + (uint)*(byte *)((int)param_1 + 0xf) * 8 + uVar1 * 4);
  param_1[0xb] = uVar6;
  uVar1 = param_1[0x12];
  iVar3 = 1;
  bVar5 = uVar1 != 0;
  if (!bVar5) {
    uVar1 = param_1[0x13];
  }
  if (bVar5 || uVar1 != 0) {
LAB_00194244:
    iVar3 = 2;
  }
  else {
    uVar1 = param_1[0x14];
    bVar5 = uVar1 == 0;
    if (bVar5) {
      uVar1 = param_1[0x15];
    }
    if (!bVar5 || uVar1 != 0) goto LAB_00194244;
  }
  uVar1 = param_1[0x16];
  bVar5 = uVar1 != 0;
  if (!bVar5) {
    uVar1 = param_1[0x17];
  }
  if (bVar5 || uVar1 != 0) {
LAB_00194270:
    iVar3 = iVar3 + 1;
  }
  else {
    uVar1 = param_1[0x18];
    bVar5 = uVar1 == 0;
    if (bVar5) {
      uVar1 = param_1[0x19];
    }
    if (!bVar5 || uVar1 != 0) goto LAB_00194270;
  }
  param_1[0xb] = uVar6 + iVar3 * 0x898;
LAB_00194284:
  *(ushort *)(param_1 + 0x1b) = (ushort)param_1[0x1b] & 0x8000;
  return;
}



void fn_00193ff8(uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 uVar4;
  bool bVar5;
  uint in_fpscr;
  uint uVar6;
  float fVar7;
  
  *(undefined2 *)(param_1 + 0x1b) = 0xffff;
  bVar5 = (param_1[0x1b] & 1) != 0;
  if (bVar5) {
    fn_0017d694(param_1);
  }
  if ((param_1[0x1b] & 2) != 0) {
    fVar7 = (float)VectorSignedToFloat(param_1[8],(byte)(in_fpscr >> 0x16) & 3);
    param_1[10] = (uint)((float)param_1[9] * fVar7 * 3.055488e-05);
    fn_0017d130(&DAT_008ef5bc,*param_1 & 0xff);
    if (*(char *)((int)param_1 + 0xe) == '\0') {
      *(ushort *)(param_1 + 0x1b) = (ushort)param_1[0x1b] | 0x20;
    }
    bVar5 = true;
  }
  if ((param_1[0x1b] & 4) != 0) {
    fn_0017d520(&DAT_008ef5bc,*param_1 & 0xff,*(undefined1 *)((int)param_1 + 0xf));
    bVar5 = true;
  }
  if ((param_1[0x1b] & 8) != 0) {
    fn_0017d590(&DAT_008ef5bc,*param_1 & 0xff,(int)(short)param_1[4],
                 (int)*(short *)((int)param_1 + 0x12));
  }
  if ((param_1[0x1b] & 0x10) != 0) {
    fn_0017d608(&DAT_008ef5bc,*param_1 & 0xff,(int)(short)param_1[5],
                 (int)*(short *)((int)param_1 + 0x16),(int)(short)param_1[6],
                 (int)*(short *)((int)param_1 + 0x1a),(int)(short)param_1[7]);
  }
  if ((param_1[0x1b] & 0x20) != 0) {
    uVar2 = 2;
    uVar4 = 1;
    if (*(char *)((int)param_1 + 0xe) == '\0') {
      uVar2 = 0;
      uVar4 = (int)param_1[10] < 0x3faaaaac;
      if (((bool)uVar4) && ((int)param_1[10] < 0x3f800001)) {
        uVar4 = 2;
      }
    }
    else if (*(char *)((int)param_1 + 0xe) == '\x01') {
      uVar2 = 1;
    }
    fn_0017d0b0(&DAT_008ef5bc,*param_1 & 0xff,uVar2,uVar4);
    bVar5 = true;
  }
  if ((param_1[0x1b] & 0x40) != 0) {
    fn_0017d494(&DAT_008ef5bc,*param_1 & 0xff,param_1 + 0x1f);
  }
  if (!bVar5) goto LAB_00194284;
  param_1[0xb] = 0x578;
  uVar1 = *(ushort *)((int)param_1 + 0x1e) & 3;
  fVar7 = (float)VectorSignedToFloat(*(undefined4 *)
                                      (&UNK_00812810 +
                                      (*(ushort *)((int)param_1 + 0x1e) & 0xc) * 2 + uVar1 * 4),
                                     (byte)(in_fpscr >> 0x16) & 3);
  uVar6 = VectorFloatToUnsigned(fVar7 * (float)param_1[10] + 1400.0,3);
  param_1[0xb] = uVar6;
  iVar3 = *(int *)(&UNK_00812828 + (uint)*(byte *)((int)param_1 + 0xe) * 8 + uVar1 * 4);
  param_1[0xb] = uVar6 + iVar3;
  uVar6 = uVar6 + iVar3 +
          *(int *)(&UNK_00812840 + (uint)*(byte *)((int)param_1 + 0xf) * 8 + uVar1 * 4);
  param_1[0xb] = uVar6;
  uVar1 = param_1[0x12];
  iVar3 = 1;
  bVar5 = uVar1 != 0;
  if (!bVar5) {
    uVar1 = param_1[0x13];
  }
  if (bVar5 || uVar1 != 0) {
LAB_00194244:
    iVar3 = 2;
  }
  else {
    uVar1 = param_1[0x14];
    bVar5 = uVar1 == 0;
    if (bVar5) {
      uVar1 = param_1[0x15];
    }
    if (!bVar5 || uVar1 != 0) goto LAB_00194244;
  }
  uVar1 = param_1[0x16];
  bVar5 = uVar1 != 0;
  if (!bVar5) {
    uVar1 = param_1[0x17];
  }
  if (bVar5 || uVar1 != 0) {
LAB_00194270:
    iVar3 = iVar3 + 1;
  }
  else {
    uVar1 = param_1[0x18];
    bVar5 = uVar1 == 0;
    if (bVar5) {
      uVar1 = param_1[0x19];
    }
    if (!bVar5 || uVar1 != 0) goto LAB_00194270;
  }
  param_1[0xb] = uVar6 + iVar3 * 0x898;
LAB_00194284:
  *(ushort *)(param_1 + 0x1b) = (ushort)param_1[0x1b] & 0x8000;
  return;
}



void fn_00193fe4(undefined4 param_1,undefined4 param_2)

{
  fn_0019eb38(&DAT_008ef56c,param_1,param_2);
  return;
}


