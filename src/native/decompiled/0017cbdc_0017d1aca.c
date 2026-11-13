#include "0017cbdc_0017d1aca.h"



void fn_0017cec8(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  param_1 = param_1 + param_2 * 4;
  *param_3 = *(undefined4 *)(param_1 + 0x14);
  *param_4 = *(undefined4 *)(param_1 + 0x1c);
  return;
}



void fn_0017ce68(int param_1,int param_2)

{
  int iVar1;
  
  fn_00170704(param_1 + 0x44);
  iVar1 = param_1 + param_2 * 8;
  if (*(int *)(iVar1 + 0x34) != 0) {
    fn_0019f1b0();
  }
  if (*(int *)(iVar1 + 0x38) != 0) {
    fn_0019f1fc();
  }
  *(undefined4 *)(iVar1 + 0x34) = 0;
  *(undefined4 *)(iVar1 + 0x38) = 0;
  fn_0019ed20(&DAT_008f34bc,param_2,0);
  fn_001707b4(param_1 + 0x44);
  return;
}



undefined4 fn_0017ce54(int param_1,int param_2,int param_3)

{
  *(undefined1 *)(param_1 + param_2 * 2 + param_3) = 0;
  return 1;
}



undefined4 fn_0017ce0c(int param_1)

{
  if ((*(char *)(param_1 + 0xe) == '\0') &&
     ((DAT_008f08d8 == '\0' || ('\x02' < (char)(DAT_008f08d9 - *(char *)(param_1 + 0xf)))))) {
    return 0;
  }
  return 1;
}



undefined4 fn_0017cdc0(int param_1)

{
  if ((*(char *)(param_1 + 0xe) == '\0') &&
     ((DAT_008f08d8 == '\0' || ('\x02' < (char)(DAT_008f08d9 - *(char *)(param_1 + 0xf)))))) {
    return 0;
  }
  return 1;
}



int fn_0017cbdc(uint *param_1,int param_2,int param_3,int param_4,int param_5)

{
  ushort uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  undefined4 *puVar6;
  undefined2 *puVar7;
  uint uVar8;
  uint unaff_r11;
  bool bVar9;
  
  puVar6 = (undefined4 *)(param_3 + -0x10);
  puVar7 = (undefined2 *)(*(int *)(param_2 + 4) + param_2 + 0x10);
  puVar5 = (undefined2 *)(param_3 + param_4);
  puVar3 = *(undefined4 **)(param_2 + 8);
  puVar4 = (undefined4 *)(param_2 - ((*(ushort *)(param_2 + 2) & 0x7fff) >> 8));
  uVar2 = *(uint *)(param_2 + 0xc);
  if (puVar3 == (undefined4 *)0x0) {
    *param_1 = uVar2;
  }
  else {
    puVar3[3] = uVar2;
  }
  if (uVar2 != 0) {
    *(undefined4 **)(uVar2 + 8) = puVar3;
  }
  uVar8 = (int)puVar6 - (int)puVar4;
  if (uVar2 == 0) {
    param_1[1] = (uint)puVar3;
  }
  if (uVar8 < 0x14) {
LAB_0017cc90:
  }
  else {
    if (param_5 == 0) {
      unaff_r11 = (uint)(byte)param_1[5];
    }
    if (param_5 == 0 && unaff_r11 == 0) goto LAB_0017cc90;
    *(undefined2 *)puVar4 = 0x4652;
    *(undefined2 *)((int)puVar4 + 2) = 0;
    puVar4[3] = 0;
    puVar4[2] = puVar3;
    puVar4[1] = uVar8 - 0x10;
    if (puVar3 == (undefined4 *)0x0) {
      uVar8 = *param_1;
      *param_1 = (uint)puVar4;
    }
    else {
      uVar8 = puVar3[3];
      puVar3[3] = puVar4;
    }
    puVar4[3] = uVar8;
    puVar3 = puVar4;
    if (uVar8 == 0) {
      param_1[1] = (uint)puVar4;
      puVar4 = puVar6;
    }
    else {
      *(undefined4 **)(uVar8 + 8) = puVar4;
      puVar4 = puVar6;
    }
  }
  if (0x13 < (uint)((int)puVar7 - (int)puVar5)) {
    if (param_5 == 1) {
      uVar8 = (uint)(byte)param_1[5];
    }
    if (param_5 != 1 || uVar8 != 0) {
      *puVar5 = 0x4652;
      puVar5[1] = 0;
      *(undefined4 *)(puVar5 + 6) = 0;
      *(undefined4 **)(puVar5 + 4) = puVar3;
      *(uint *)(puVar5 + 2) = ((int)puVar7 - (int)puVar5) - 0x10;
      if (puVar3 == (undefined4 *)0x0) {
        uVar2 = *param_1;
        *param_1 = (uint)puVar5;
      }
      else {
        uVar2 = puVar3[3];
        puVar3[3] = puVar5;
      }
      *(uint *)(puVar5 + 6) = uVar2;
      if (uVar2 == 0) {
        param_1[1] = (uint)puVar5;
      }
      else {
        *(undefined2 **)(uVar2 + 8) = puVar5;
      }
      goto LAB_0017ccf4;
    }
  }
  puVar5 = puVar7;
LAB_0017ccf4:
  uVar2 = (int)puVar5 - (int)puVar4;
  bVar9 = (param_1[-1] & 1) != 0;
  if (bVar9) {
    puVar7 = (undefined2 *)0x0;
  }
  if (bVar9 && 3 < uVar2) {
    puVar3 = puVar4 + -1;
    if ((int)(uVar2 * 0x20000000) < 0) {
      *puVar4 = puVar7;
      puVar3 = puVar4;
    }
    for (uVar2 = uVar2 >> 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      puVar3[1] = puVar7;
      puVar3 = puVar3 + 2;
      *puVar3 = puVar7;
    }
  }
  *(undefined2 *)puVar6 = 0x5544;
  *(undefined4 *)(param_3 + -8) = 0;
  *(int *)(param_3 + -0xc) = (int)puVar5 + (-0x10 - (int)puVar6);
  *(undefined4 *)(param_3 + -4) = 0;
  uVar1 = (ushort)(param_5 << 0xf) | (ushort)(((int)puVar6 - (int)puVar4 & 0x7fU) << 8);
  *(ushort *)(param_3 + -0xe) = uVar1;
  *(ushort *)(param_3 + -0xe) = uVar1 | (ushort)param_1[4] & 0xff;
  uVar2 = param_1[3];
  *(uint *)(param_3 + -8) = uVar2;
  if (uVar2 == 0) {
    uVar8 = param_1[2];
    param_1[2] = (uint)puVar6;
  }
  else {
    uVar8 = *(uint *)(uVar2 + 0xc);
    *(undefined4 **)(uVar2 + 0xc) = puVar6;
  }
  *(uint *)(param_3 + -4) = uVar8;
  if (uVar8 == 0) {
    param_1[3] = (uint)puVar6;
  }
  else {
    *(undefined4 **)(uVar8 + 8) = puVar6;
  }
  return param_3;
}


