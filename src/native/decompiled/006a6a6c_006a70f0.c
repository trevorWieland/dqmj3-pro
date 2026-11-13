#include "006a6a6c_006a70f0.h"



void fn_006a70f0(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar4 = (undefined4 *)param_1[0x3a];
  *param_1 = &DAT_008515ec;
  param_1[0x15] = &DAT_008516b8;
  if ((undefined4 *)param_1[0x3b] != puVar4) {
    do {
      fn_002cf370(*puVar4,param_1 + 0x15);
      puVar4 = puVar4 + 1;
    } while ((undefined4 *)param_1[0x3b] != puVar4);
  }
  puVar4 = (undefined4 *)param_1[0x34];
  if ((undefined4 *)param_1[0x35] != puVar4) {
    do {
      fn_002cf370(*puVar4,param_1 + 0x15);
      puVar4 = puVar4 + 2;
    } while ((undefined4 *)param_1[0x35] != puVar4);
  }
  *(undefined1 *)(param_1 + 0x5b) = 0;
  param_1[0x5c] = 0;
  *(undefined1 *)(param_1 + 0x5d) = 0;
  param_1[0x5e] = 0;
  *(undefined1 *)(param_1 + 0x5f) = 0;
  param_1[0x60] = 0;
  uVar1 = param_1[0x3a];
  uVar3 = uVar1;
  if ((uint)param_1[0x3b] < uVar1) {
    do {
      uVar3 = uVar3 + 4;
    } while (uVar3 != param_1[0x3b]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x3c] - uVar1) >> 2,0);
  uVar1 = param_1[0x34];
  uVar3 = uVar1;
  if ((uint)param_1[0x35] < uVar1) {
    do {
      uVar3 = uVar3 + 8;
    } while (uVar3 != param_1[0x35]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x36] - uVar1) >> 3,0);
  uVar1 = param_1[0x31];
  uVar3 = uVar1;
  if ((uint)param_1[0x32] < uVar1) {
    do {
      uVar3 = uVar3 + 0xc;
    } while (uVar3 != param_1[0x32]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x33] - uVar1) / 0xc,0);
  puVar5 = (undefined4 *)param_1[0x21];
  for (puVar4 = (undefined4 *)param_1[0x20]; puVar4 != puVar5; puVar4 = puVar4 + 3) {
    (**(code **)*puVar4)(puVar4);
  }
  iVar2 = param_1[0x20];
  fn_001008c4(iVar2,(param_1[0x22] - iVar2) / 0xc,0);
  if ((int *)param_1[0x18] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x18] + 4))();
  }
  if ((int *)param_1[0x17] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x17] + 4))();
  }
  if ((int *)param_1[0x16] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x16] + 4))();
  }
  fn_001cccdc(param_1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x006a6e28) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffac : 0x006a6e2c */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_006a6d8c(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined8 in_d8;
  undefined4 uVar5;
  undefined4 in_s18;
  undefined4 in_s19;
  int local_44;
  int local_40;
  
  uVar5 = (undefined4)((ulonglong)in_d8 >> 0x20);
  puVar1 = (undefined4 *)fn_001ccc2c();
  puVar1[0x15] = &DAT_008516b8;
  puVar1[0x16] = 0;
  *puVar1 = &DAT_008515ec;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0xffffffff;
  uVar4 = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0xffffffff;
  puVar1[0x1f] = 0xffffffff;
  piVar3 = puVar1 + 0x20;
  *piVar3 = 0;
  puVar1[0x21] = 0;
  puVar1[0x22] = 0;
  local_40 = 2;
  puVar2 = (undefined4 *)fn_00100fc6(0x180,0);
  *piVar3 = (int)puVar2;
  for (; local_40 != 0; local_40 = local_40 + -1) {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = &DAT_0085aa24;
      *(undefined1 *)(puVar2 + 1) = 0;
      puVar2[2] = 0;
    }
    puVar2 = puVar2 + 3;
  }
  puVar1[0x21] = *piVar3 + 0x18;
  puVar1[0x22] = *piVar3 + 0x180;
  puVar1[0x23] = uVar4;
  puVar1[0x24] = uVar4;
  puVar1[0x25] = uVar4;
  puVar1[0x26] = uVar4;
  puVar1[0x27] = uVar4;
  puVar1[0x28] = uVar4;
  puVar1[0x29] = 0;
  puVar1[0x2a] = 0xffffffff;
  puVar1[0x2d] = 2;
  puVar1[0x2b] = 0;
  puVar1[0x2c] = 0xffffffff;
  piVar3 = puVar1 + 0x31;
  *piVar3 = 0;
  puVar1[0x32] = 0;
  puVar1[0x33] = 0;
  local_44 = 0x5a;
  puVar2 = (undefined4 *)fn_00100fc6(0x438,0);
  *piVar3 = (int)puVar2;
  for (; local_44 != 0; local_44 = local_44 + -1) {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = uVar5;
      puVar2[1] = in_s18;
      puVar2[2] = in_s19;
    }
    puVar2 = puVar2 + 3;
  }
  puVar1[0x32] = *piVar3 + 0x438;
  puVar1[0x33] = *piVar3 + 0x438;
  puVar1[0x34] = 0;
  puVar1[0x35] = 0;
  puVar1[0x36] = 0;
  puVar1[0x37] = 0;
  puVar1[0x38] = 0;
  puVar1[0x39] = 0;
  puVar1[0x3a] = 0;
  puVar1[0x3b] = 0;
  puVar1[0x3c] = 0;
  puVar1[0x3d] = 0xffffffff;
  puVar1[0x3f] = 0;
  puVar1[0x3e] = 0xffffffff;
  puVar1[0x40] = 0;
  *(undefined1 *)(puVar1 + 0x41) = 0;
  puVar1[0x42] = 0x3f800000;
  puVar1[0x43] = 0x3f800000;
  puVar1[0x44] = 0x3f800000;
  puVar1[0x46] = uVar4;
  puVar1[0x47] = 0;
  puVar1[0x48] = uVar4;
  puVar1[0x49] = 0;
  *(undefined1 *)(puVar1 + 0x4a) = 0;
  *(undefined1 *)((int)puVar1 + 0x129) = 0;
  puVar1[0x4b] = 0;
  puVar1[0x4c] = 0x41000000;
  puVar1[0x4d] = 0x3ecccccd;
  puVar1[0x4e] = 0x3ecccccd;
  *(undefined2 *)(puVar1 + 0x4f) = 0xffff;
  *(undefined1 *)((int)puVar1 + 0x156) = 0;
  puVar1[0x56] = 0;
  puVar1[0x57] = 0xffffffff;
  *(undefined1 *)(puVar1 + 0x58) = 0;
  puVar1[0x59] = 0;
  *(undefined1 *)(puVar1 + 0x5a) = 0;
  *(undefined1 *)(puVar1 + 0x61) = 0;
  *(undefined1 *)((int)puVar1 + 0x185) = 0xff;
  puVar1[0x62] = uVar4;
  puVar1[99] = 0;
  *(undefined1 *)(puVar1 + 100) = 0;
  puVar1[0x65] = 0xffffffff;
  puVar1[0x66] = 0xffffffff;
  *(undefined1 *)(puVar1 + 0x67) = 0;
  puVar1[0x68] = 0;
  puVar1[0x69] = 0;
  puVar1[0x6a] = 0;
  puVar1[0x6b] = 0;
  *(undefined1 *)(puVar1 + 0x6c) = 0;
  puVar1[0x6d] = 0xffffffff;
  puVar1[0x6e] = 0;
  puVar1[0x6f] = 0xffffffff;
  *(undefined1 *)(puVar1 + 0x70) = 0;
  *(undefined1 *)((int)puVar1 + 0x1c1) = 0;
  puVar1[0x71] = 0;
  puVar1[0x72] = uVar4;
  puVar1[0x73] = 0;
  puVar1[0x74] = 0;
  *(undefined1 *)(puVar1 + 0x75) = 0;
  puVar1[0x76] = uVar4;
  *(undefined1 *)(puVar1 + 0x77) = 0;
  puVar1[0x78] = 0;
  *(undefined1 *)(puVar1 + 0x79) = 0;
  *(undefined1 *)((int)puVar1 + 0x1e5) = 0;
  *(undefined1 *)((int)puVar1 + 0x1e6) = 0;
  puVar1[0x7a] = 0;
  puVar1[0x7b] = 0xffffffff;
  puVar1[0x7c] = 0xffffffff;
  puVar1[0x7d] = uVar4;
  puVar1[0x7e] = uVar4;
  puVar1[0x7f] = uVar4;
  puVar1[0x80] = uVar4;
  puVar1[0x81] = uVar4;
  puVar1[0x82] = uVar4;
  *(undefined1 *)(puVar1 + 0x83) = 0;
  puVar1[0x85] = 0xffffffff;
  *(undefined1 *)(puVar1 + 0x86) = 0;
  *(undefined1 *)((int)puVar1 + 0x219) = 0xff;
  *(undefined1 *)((int)puVar1 + 0x21a) = 0xff;
  puVar1[0x87] = 0xffffffff;
  puVar1[0x88] = 0;
  puVar1[0x89] = 0xffffffff;
  puVar1[0x8a] = 0;
  *(undefined1 *)(puVar1 + 0x5b) = 0;
  puVar1[0x5c] = 0;
  *(undefined1 *)(puVar1 + 0x5d) = 0;
  puVar1[0x5e] = 0;
  *(undefined1 *)(puVar1 + 0x5f) = 0;
  puVar1[0x60] = 0;
  return;
}



void fn_006a6b58(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  float *pfVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  undefined4 in_s2;
  undefined8 uVar6;
  undefined8 uVar7;
  float local_50 [5];
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_24 [6];
  
  iVar1 = (**(code **)(*param_1 + 0x3c))(param_1);
  if ((iVar1 == 0) && (*(char *)((int)param_1 + 0x156) != '\x02')) {
    param_1[0x23] = (int)((float)param_1[0x23] * 0.98);
    param_1[0x24] = (int)((float)param_1[0x24] * 0.98);
    fVar5 = (float)param_1[0x25];
    fVar4 = fVar5 * 0.98;
    param_1[0x25] = (int)fVar4;
  }
  else {
    param_1[0x23] = (int)((float)param_1[0x23] * 0.88);
    param_1[0x24] = (int)((float)param_1[0x24] * 0.88);
    fVar5 = (float)param_1[0x25];
    fVar4 = fVar5 * 0.88;
    param_1[0x25] = (int)fVar4;
  }
  if (param_1[0x1f] == -1) {
    fVar5 = (float)param_1[0x4e];
    fVar4 = (float)param_1[0x1b] - fVar5;
    param_1[0x1b] = (int)fVar4;
  }
  fn_006a1868(param_1);
  uVar7 = CONCAT44(in_s2,fVar5);
  local_3c = 1.0;
  uVar6 = CONCAT44(fVar4,SQRT((float)param_1[0x23] * (float)param_1[0x23] +
                              (float)param_1[0x24] * (float)param_1[0x24] +
                              (float)param_1[0x25] * (float)param_1[0x25]));
  iVar1 = (**(code **)(*param_1 + 0xa4))(param_1);
  if (iVar1 == 0) {
    local_38 = (float)param_1[0x46];
  }
  else {
    uVar2 = (**(code **)(*param_1 + 0xa0))(param_1);
    fVar4 = (float)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
    local_38 = (fVar4 + 100.0) * 0.01 * (float)param_1[0x46];
  }
  local_38 = (float)uVar6 / local_38;
  fVar4 = 0.0;
  pfVar3 = &local_3c;
  if (local_38 < local_3c) {
    pfVar3 = &local_38;
  }
  local_24[0] = *pfVar3;
  if (0.0 < (float)uVar6) {
    fVar4 = local_3c;
    fn_006f7e48(param_1);
    local_50[0] = fVar4 * (float)uVar6;
    pfVar3 = local_24;
    if (local_24[0] <= local_50[0]) {
      pfVar3 = local_50;
    }
    fVar4 = *pfVar3 / (float)uVar6;
  }
  local_34 = (float)param_1[0x23] * fVar4 + (float)param_1[0x1a] + (float)((ulonglong)uVar6 >> 0x20)
  ;
  local_30 = (float)param_1[0x24] * fVar4 + (float)param_1[0x1b] + (float)uVar7;
  local_2c = (float)param_1[0x25] * fVar4 + (float)param_1[0x1c] + (float)((ulonglong)uVar7 >> 0x20)
  ;
  fn_006f8460(param_1,&local_34);
  param_1[0x2e] = (int)((float)param_1[2] + local_34);
  param_1[0x2f] = (int)((float)param_1[3] + local_30);
  param_1[0x30] = (int)((float)param_1[4] + local_2c);
  return;
}



void fn_006a6a6c(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint local_18;
  
  (**(code **)(*param_1 + 0x40))(param_1,0x9c5e,1);
  uVar4 = 0;
  local_18 = param_4;
  if (param_1[0x3b] - param_1[0x3a] >> 2 != 0) {
    do {
      uVar1 = param_1[0x3b] - param_1[0x3a] >> 2;
      if (uVar1 <= uVar4) {
        fn_002ff628(9,&DAT_008c7652,&DAT_008c7652,uVar4);
        local_18 = uVar1;
      }
      iVar2 = param_1[0x3a];
      uVar3 = fn_0068eb30(DAT_008977e8);
      fn_00249c94(uVar3,*(undefined4 *)(iVar2 + uVar4 * 4));
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)(param_1[0x3b] - param_1[0x3a] >> 2));
  }
  if (param_1[0x3f] != 0) {
    fn_0024a1b0();
  }
  fn_0014481c(DAT_008977e8);
  iVar2 = fn_00263814();
  fn_00660790(9,iVar2 + 8,param_1 + 2,local_18);
  return;
}


