#include "0026c018_00271eac.h"



void fn_00271eac(undefined4 param_1,short param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_0026fcd0(param_1,(char *)&DAT_00271ee4);
  if (iVar1 == 0) {
    return;
  }
  fn_00661714((int)param_2);
  uVar2 = fn_0023051c();
  fn_00190d50(iVar1,uVar2);
  return;
}



void fn_00270664(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    uVar3 = (**(code **)(**(int **)(param_1 + 4) + 0x60))();
    param_2 = param_2 & uVar3;
    uVar3 = (**(code **)(**(int **)(param_1 + 4) + 0x68))();
  }
  fn_00271e64(param_1,(char *)&DAT_00270780,param_2 & ~uVar3);
  fn_00271e64(param_1,(char *)&DAT_00270788,uVar3 & param_2);
  fn_00271e64(param_1,(char *)&DAT_00270790,uVar3 & param_2);
  if ((param_2 != 0) && (iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x68))(), iVar1 == 0)) {
    (**(code **)(**(int **)(param_1 + 4) + 0x74))();
  }
  fn_00271e64(param_1,(char *)&DAT_00270798);
  if (param_2 == 0) {
    return;
  }
  iVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14));
  uVar2 = fn_0068897c(*(undefined4 *)(iVar1 + 0x10),(char *)&DAT_002707a0);
  iVar1 = (**(code **)(**(int **)(param_1 + 4) + 100))();
  if (iVar1 == 0) {
    fn_00689080(uVar2);
    return;
  }
  fn_00688fd8();
  return;
}



void fn_00270184(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  
  fn_002700fc();
  fVar6 = 0.0;
  fVar8 = -121.0;
  fVar9 = -90.0;
  uVar10 = 0x41680000;
  iVar4 = 0;
  fVar7 = fVar6;
  do {
    iVar3 = param_1 + iVar4 * 0x10;
    *(undefined1 *)(iVar3 + 0x78) = 0;
    *(undefined4 *)(iVar3 + 0x7c) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x80) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x84) = 0xffffffff;
    uVar1 = fn_001c8124(*(undefined4 *)(param_1 + 0xc),DAT_00892118,(char *)&DAT_0027028c,0,0,0xc);
    *(undefined4 *)(iVar3 + 0x7c) = uVar1;
    uVar1 = fn_001c804c(*(undefined4 *)(param_1 + 0xc),
                         (&PTR_s_reactor_battery_battery_00_bflan_0089223c)[*(byte *)(iVar3 + 0x78)]
                         ,uVar1);
    *(undefined4 *)(iVar3 + 0x80) = uVar1;
    iVar2 = fn_00178f9c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(iVar3 + 0x7c));
    iVar2 = *(int *)(iVar2 + 0x10);
    fVar5 = (float)VectorSignedToFloat(iVar4 + -1,(byte)(in_fpscr >> 0x16) & 3);
    *(float *)(iVar2 + 0x1c) = fVar8 + fVar5 * (float)uVar10;
    *(float *)(iVar2 + 0x20) = fVar9 + fVar7;
    *(float *)(iVar2 + 0x24) = fVar6 + fVar7;
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xee | 0x11;
    fn_00178eec(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(iVar3 + 0x7c),1);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 3);
  return;
}



undefined4 *
fn_0026dd3c(undefined4 *param_1,undefined4 param_2,undefined1 *param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 **ppuVar7;
  int *piVar8;
  undefined4 *puVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  undefined4 *puVar13;
  undefined4 *local_b4;
  undefined1 auStack_b0 [64];
  undefined4 *local_70 [5];
  int *local_5c;
  undefined4 local_50;
  undefined1 *local_4c;
  undefined *local_48;
  undefined1 *local_44;
  undefined4 *puStack_34;
  undefined4 uStack_30;
  undefined1 *local_2c;
  undefined4 local_28;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  *(undefined1 *)(param_1 + 0x402) = 1;
  param_1[0x403] = 0;
  param_1[0x405] = 0xffffffff;
  param_1[0x404] = 0;
  piVar8 = param_1 + 0x409;
  param_1[0x406] = 0;
  param_1[0x407] = 0;
  local_5c = param_1 + 0x40a;
  *piVar8 = (int)&DAT_008f9d04;
  *local_5c = (int)&DAT_008f9cf4;
  puStack_34 = param_1;
  uStack_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  fn_0013c500();
  local_50 = 4;
  local_4c = &LAB_0074a180;
  local_48 = &DAT_0074a288;
  local_44 = &LAB_0074a258;
  local_b4 = (undefined4 *)0x0;
  local_70[0] = param_1;
  iVar2 = fn_0014e2f4(param_1,&local_50,fn_0026d71c,local_70,param_1 + 0x402,0xf,0xfffffffe);
  if (iVar2 < 0) {
    fn_0015e294();
  }
  puVar1 = local_2c;
  param_1[0x408] = param_2;
  puVar3 = (undefined4 *)fn_002febd8(local_2c);
  puVar4 = (undefined1 *)*piVar8;
  if (puVar3 == (undefined4 *)0x0) {
    iVar2 = *(int *)(puVar4 + -0xc);
    if (iVar2 == 0) {
      *(undefined4 *)(puVar4 + -4) = 0;
      *(undefined1 *)*piVar8 = 0;
    }
    else {
      if ((puVar4 != &DAT_008f9d04) &&
         ((iVar2 == -1 ||
          (((undefined4 *)(puVar4 + -0xc) != &DAT_008f9cf8 &&
           (*(int *)(puVar4 + -0xc) = iVar2 + -1, iVar2 == 0)))))) {
        fn_001008c4(*piVar8 + -0xc,*(int *)(*piVar8 + -8) + 0xe,0);
      }
      *piVar8 = (int)&DAT_008f9d04;
    }
    goto LAB_0026e028;
  }
  uVar10 = *(int *)(puVar4 + -0xc) + 1;
  bVar12 = *(int *)(puVar4 + -0xc) != -1;
  bVar11 = uVar10 == 1;
  if (uVar10 < 2) {
    bVar12 = *(undefined4 **)(puVar4 + -8) <= puVar3;
    bVar11 = puVar3 == *(undefined4 **)(puVar4 + -8);
  }
  if (bVar12 && !bVar11) {
LAB_0026de70:
    uVar10 = *(uint *)(puVar4 + -4);
    local_70[0] = puVar3;
    local_b4 = (undefined4 *)(uVar10 + (uVar10 >> 1) + (uVar10 >> 3));
    if (local_b4 < (undefined4 *)(uVar10 + 0x80)) {
      local_b4 = (undefined4 *)(uVar10 + 0x80);
    }
    ppuVar7 = &local_b4;
    if (local_b4 < puVar3) {
      ppuVar7 = local_70;
    }
    puVar9 = *ppuVar7;
    puVar13 = puVar3;
    if ((undefined4 *)0xfffffff1 < puVar9) {
      fn_002ff628(8,&DAT_008c7615,&DAT_008c7615,puVar9,0xfffffff1);
    }
    if (puVar9 < puVar3) {
      fn_002ff628(8,&DAT_008c7615,&DAT_008c7615,puVar3,puVar9);
    }
    if (puVar9 == (undefined4 *)0x0) {
      puVar5 = &DAT_008f9cf8;
    }
    else {
      puVar5 = (undefined4 *)fn_00100fc6((int)puVar9 + 0xe,0);
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
      }
      puVar5[2] = puVar3;
      puVar4 = (undefined1 *)((int)puVar5 + (int)puVar3 + 0xc);
      *puVar5 = 0;
      puVar5[1] = puVar9;
      if (puVar4 != (undefined1 *)0x0) {
        *puVar4 = 0;
      }
    }
    fn_00301a9c(puVar5 + 3,puVar1,puVar13);
    if ((undefined1 *)*piVar8 != &DAT_008f9d04) {
      piVar6 = (int *)((undefined1 *)*piVar8 + -0xc);
      iVar2 = *piVar6;
      if ((iVar2 == -1) || ((piVar6 != &DAT_008f9cf8 && (*piVar6 = iVar2 + -1, iVar2 == 0)))) {
        fn_001008c4(*piVar8 + -0xc,*(int *)(*piVar8 + -8) + 0xe,0);
      }
    }
    *piVar8 = (int)(puVar5 + 3);
  }
  else {
    if (puVar1 != (undefined1 *)0x0) {
      bVar11 = puVar1 <= puVar4;
      if (puVar4 <= puVar1) {
        bVar11 = puVar4 + *(int *)(puVar4 + -4) <= puVar1;
      }
      if (!bVar11) goto LAB_0026de70;
    }
    fn_00301b24(puVar4,puVar1,puVar3);
    *(undefined4 **)(*piVar8 + -4) = puVar3;
    *(undefined1 *)(*piVar8 + (int)puVar3) = 0;
  }
LAB_0026e028:
  fn_0018a618(auStack_b0,0x20,0x1f,&DAT_0026e13c,local_2c);
  piVar8 = local_5c;
  iVar2 = fn_00100b58(auStack_b0);
  if (iVar2 == 0) {
    puVar3 = (undefined4 *)*piVar8;
    piVar6 = puVar3 + -3;
    iVar2 = *piVar6;
    if (iVar2 == 0) {
      puVar3[-1] = 0;
      *(undefined2 *)*piVar8 = 0;
    }
    else {
      if ((puVar3 != &DAT_008f9cf4) &&
         ((iVar2 == -1 || ((piVar6 != &DAT_008f9ce8 && (*piVar6 = iVar2 + -1, iVar2 == 0)))))) {
        fn_001008c4(*piVar8 + -0xc,*(int *)(*piVar8 + -8) + 8,0);
      }
      *piVar8 = (int)&DAT_008f9cf4;
    }
  }
  else {
    fn_00177c88(piVar8,0,*(undefined4 *)(*piVar8 + -4),auStack_b0,iVar2,0,iVar2);
  }
  param_1[0x40b] = local_28;
  param_1[0x40c] = param_5;
  *(undefined1 *)(param_1 + 0x40d) = 0;
  return param_1;
}



undefined4 fn_0026c018(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_20;
  float fStack_1c;
  float local_18;
  
  fn_00174858(DAT_008977e4);
  iVar1 = fn_006ba8dc();
  if (iVar1 == 0) {
    if ((*(char *)(param_1 + 0xc) == '\0') &&
       (iVar1 = fn_00182988(DAT_008977e4), *(char *)(iVar1 + 0x39e) != '\0')) {
      iVar1 = fn_001c38bc();
      if (iVar1 != 0) {
        *(undefined1 *)(param_1 + 0xc) = 1;
        fn_0026c208(param_1);
      }
    }
    else if (*(char *)(param_1 + 4) == '\0') {
      if (0x59 < *(int *)(param_1 + 8)) {
                    /* WARNING: Subroutine does not return */
        fn_001638a0();
      }
      iVar1 = fn_00174864(DAT_008977e4);
      fVar4 = *(float *)(iVar1 + 0x38) - *(float *)(iVar1 + 0x44);
      fVar3 = *(float *)(iVar1 + 0x3c) - *(float *)(iVar1 + 0x48);
      fVar2 = *(float *)(iVar1 + 0x40) - *(float *)(iVar1 + 0x4c);
      fVar5 = 1.0 / SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
      local_20 = *(float *)(iVar1 + 0x38) + fVar4 * fVar5 * 0.4;
      fStack_1c = *(float *)(iVar1 + 0x3c) + fVar3 * fVar5 * 0.4;
      local_18 = *(float *)(iVar1 + 0x40) + fVar2 * fVar5 * 0.4;
      fn_00204158(iVar1,&local_20);
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    }
    else if ((*(char *)(param_1 + 4) == '\x01') &&
            (iVar1 = *(int *)(param_1 + 8) + 1, *(int *)(param_1 + 8) = iVar1, 0x14 < iVar1)) {
      return 1;
    }
  }
  return 0;
}


