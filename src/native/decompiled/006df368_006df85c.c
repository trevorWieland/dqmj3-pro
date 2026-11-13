#include "006df368_006df85c.h"



void fn_006df85c(int param_1)

{
  fn_006df72c();
                    /* WARNING: Could not recover jumptable at 0x006df88c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_LAB_0089a854)[(uint)*(byte *)(param_1 + 0xc) * 8 + (uint)*(byte *)(param_1 + 0xd)]
  )(param_1);
  return;
}



void fn_006df72c(float *param_1)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  uint in_fpscr;
  uint uVar4;
  float in_s0;
  float fVar5;
  float fVar6;
  
  fVar5 = *param_1;
  uVar1 = in_fpscr & 0xfffffff | (uint)(fVar5 < in_s0) << 0x1f | (uint)(fVar5 == in_s0) << 0x1e;
  uVar4 = uVar1 | (uint)(NAN(fVar5) || NAN(in_s0)) << 0x1c;
  bVar3 = (byte)(uVar1 >> 0x18);
  if ((bool)(bVar3 >> 6 & 1) || bVar3 >> 7 != ((byte)(uVar4 >> 0x1c) & 1)) {
    fVar6 = param_1[1];
    uVar1 = in_fpscr & 0xfffffff | (uint)(fVar6 == in_s0) << 0x1e;
    uVar4 = uVar1 | (uint)(in_s0 <= fVar6) << 0x1d;
    if ((!(bool)((byte)(uVar4 >> 0x1d) & 1) || SUB41(uVar1 >> 0x1e,0)) &&
       (cVar2 = *(char *)((int)param_1 + 9), cVar2 != '\0')) {
      if (cVar2 == '\x01') {
        fVar5 = (in_s0 - fVar5) / (fVar6 - fVar5);
        fn_006fa358();
        VectorSignedToFloat((int)fVar5,(byte)(uVar4 >> 0x16) & 3);
      }
      else if (cVar2 == '\x02') {
        fVar5 = (in_s0 - fVar5) / (fVar6 - fVar5);
        fn_006fa358();
        VectorSignedToFloat((int)fVar5,(byte)(uVar4 >> 0x16) & 3);
      }
    }
  }
  else {
    cVar2 = *(char *)(param_1 + 2);
    if (cVar2 != '\0') {
      if (cVar2 == '\x01') {
        fVar5 = (in_s0 - fVar5) / (param_1[1] - fVar5);
        fn_006fa358();
        VectorSignedToFloat((int)fVar5,(byte)(uVar4 >> 0x16) & 3);
      }
      else if (cVar2 == '\x02') {
        fVar5 = (in_s0 - fVar5) / (param_1[1] - fVar5);
        fn_006fa358();
        VectorSignedToFloat((int)fVar5,(byte)(uVar4 >> 0x16) & 3);
      }
    }
  }
  return;
}



void fn_006df5e4(int *param_1,int param_2,int *param_3,int param_4,int param_5)

{
  uint uVar1;
  undefined4 *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  int local_28;
  int local_24;
  int local_20;
  uint local_1c;
  
  local_24 = *(int *)(param_5 + 0x14) + param_4;
  local_28 = param_4;
  fn_0017dc74(&local_20,&local_28,*(undefined4 *)(param_5 + 0x5c),4);
  *param_3 = local_20;
  param_3[1] = local_1c / 0xc;
  uVar1 = 0;
  if (local_1c / 0xc != 0) {
    do {
      puVar2 = (undefined4 *)(*param_3 + uVar1 * 0xc);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 0;
        puVar2[1] = 0;
        *(undefined1 *)(puVar2 + 2) = 0;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)param_3[1]);
  }
  puVar3 = (uint *)*param_3;
  iVar7 = 0;
  puVar6 = puVar3 + param_3[1] * 3;
  for (; puVar3 != puVar6; puVar3 = puVar3 + 3) {
    uVar1 = *(uint *)(*(int *)(param_2 + 0x68) + iVar7 * 0x1c + 0x14);
    uVar4 = uVar1 >> 1 & 0xff;
    if ((uVar1 & 1) != 0) {
      uVar4 = uVar4 + 1;
    }
    if ((uVar4 & 0xff) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = local_28 + 3U & 0xfffffffc;
      local_28 = (uVar4 & 0xff) * 8 + uVar5;
    }
    uVar4 = uVar1 >> 1 & 0xff;
    if ((uVar1 & 1) != 0) {
      uVar4 = uVar4 + 1;
    }
    *puVar3 = uVar5;
    puVar3[1] = uVar4 & 0xff;
    for (uVar1 = 0; uVar1 < (uVar4 & 0xff); uVar1 = uVar1 + 1) {
    }
    iVar7 = iVar7 + 1;
  }
  *param_1 = local_28;
  param_1[1] = 0;
  return;
}



void fn_006df498(int *param_1,int param_2,int *param_3,int param_4,int param_5)

{
  undefined2 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 in_d8;
  int local_38;
  int local_34;
  int local_30;
  uint uStack_2c;
  
  local_34 = param_4 + param_5;
  local_38 = param_4;
  fn_0017dc74(&local_30,&local_38,param_5,4);
  uVar6 = 0;
  uStack_2c = uStack_2c / 0x18;
  if (uStack_2c != 0) {
    in_d8 = 0;
  }
  *param_3 = local_30;
  param_3[1] = uStack_2c;
  if (uStack_2c != 0) {
    do {
      puVar1 = (undefined2 *)(*param_3 + uVar6 * 0x18);
      if (puVar1 != (undefined2 *)0x0) {
        *puVar1 = 0;
        uVar7 = (undefined4)in_d8;
        *(undefined4 *)(puVar1 + 2) = uVar7;
        *(undefined4 *)(puVar1 + 4) = uVar7;
        *(undefined4 *)(puVar1 + 6) = uVar7;
        iVar2 = fn_0017d8f8(puVar1 + 8);
        fn_0017d8f8(iVar2 + 4);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < (uint)param_3[1]);
  }
  piVar3 = *(int **)(param_2 + 0x34);
  iVar2 = 0;
  if ((uint)*(ushort *)(param_2 + 0x38) * 0x2c != 0) {
    do {
      iVar5 = iVar2;
      if (*piVar3 == 0) {
        puVar4 = (undefined4 *)piVar3[6];
        iVar5 = iVar2 + 1;
        iVar2 = *param_3 + iVar2 * 0x18;
        *(undefined4 *)(iVar2 + 4) = *puVar4;
        *(undefined4 *)(iVar2 + 8) = puVar4[1];
        *(undefined4 *)(iVar2 + 0xc) = puVar4[2];
        *(undefined4 *)(iVar2 + 0x10) = puVar4[3];
        *(undefined4 *)(iVar2 + 0x14) = puVar4[4];
      }
      piVar3 = piVar3 + 0xb;
      iVar2 = iVar5;
    } while ((int *)(*(int *)(param_2 + 0x34) + (uint)*(ushort *)(param_2 + 0x38) * 0x2c) != piVar3)
    ;
  }
  *param_1 = local_38;
  param_1[1] = 0;
  return;
}



int fn_006df488(int param_1)

{
  return (uint)*(ushort *)(param_1 + 2) * 0x18;
}



void fn_006df368(uint *param_1,int param_2,int *param_3,uint param_4,int param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  uint local_28;
  int local_24;
  int local_20;
  uint local_1c;
  
  local_24 = *(int *)(param_5 + 0x10) + param_4;
  local_28 = param_4;
  fn_0017dc74(&local_20,&local_28,*(undefined4 *)(param_5 + 0x54),4);
  param_3[1] = local_1c >> 3;
  *param_3 = local_20;
  uVar4 = 0;
  uVar2 = 0;
  if (local_1c >> 3 != 0) {
    do {
      puVar1 = (undefined4 *)(*param_3 + uVar4 * 8);
      uVar4 = uVar4 + 1;
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 0;
        puVar1[1] = 0;
      }
      uVar2 = param_3[1];
    } while (uVar4 < uVar2);
  }
  puVar5 = (uint *)*param_3;
  iVar6 = 0;
  puVar7 = puVar5 + uVar2 * 2;
  for (; puVar5 != puVar7; puVar5 = puVar5 + 2) {
    uVar4 = iVar6 * 7;
    uVar2 = *(int *)(*(int *)(param_2 + 0x68) + iVar6 * 0x1c + 4) * 0x18;
    if (uVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = local_28 + 3 & 0xfffffffc;
      uVar4 = uVar3 + uVar2;
      local_28 = uVar4;
    }
    *puVar5 = uVar3;
    uVar3 = 0;
    uVar2 = uVar2 / 0x18;
    if (uVar2 != 0) {
      uVar4 = uVar2;
    }
    puVar5[1] = uVar2;
    if (uVar2 != 0) {
      do {
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
    iVar6 = iVar6 + 1;
  }
  *param_1 = local_28;
  param_1[1] = 0;
  return;
}


