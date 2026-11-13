#include "0042e5b0_0042ecb4.h"



void fn_0042ecb4(int param_1,int param_2,undefined2 param_3,short *param_4,char param_5)

{
  short *psVar1;
  short *psVar2;
  uint uVar3;
  bool bVar4;
  
  param_1 = param_1 + param_2 * 0x20;
  *(undefined2 *)(param_1 + 0x6c) = param_3;
  uVar3 = 0;
  psVar1 = (short *)(param_1 + 0x6e);
  do {
    uVar3 = uVar3 + 1;
    psVar2 = psVar1 + 1;
    *psVar1 = *param_4;
    bVar4 = param_4[1] == 0;
    psVar1 = psVar2;
    param_4 = param_4 + 1;
  } while ((bVar4 || uVar3 < 0xb) && (!bVar4 && uVar3 != 10));
  *psVar2 = 0;
  *(byte *)(param_1 + 0x8b) = *(byte *)(param_1 + 0x8b) & 0xfd | param_5 << 1;
  return;
}



void fn_0042ec40(int param_1,int param_2,undefined2 *param_3,int *param_4,undefined1 *param_5)

{
  param_1 = param_1 + param_2 * 0x20;
  *param_3 = *(undefined2 *)(param_1 + 0x6c);
  *param_4 = param_1 + 0x6e;
  *param_5 = (char)((*(byte *)(param_1 + 0x8b) & 3) >> 1);
  return;
}



void fn_0042ec28(int param_1,int param_2)

{
  if (param_2 == 0) {
    return;
  }
  fn_00301a9c(param_1 + 0x2a0,param_2,0x34);
  return;
}



void fn_0042ec18(int param_1,int param_2,undefined2 param_3,undefined2 param_4)

{
  param_1 = param_1 + param_2 * 4;
  *(undefined2 *)(param_1 + 0x50) = param_3;
  *(undefined2 *)(param_1 + 0x52) = param_4;
  return;
}



void fn_0042ec00(int param_1,int param_2,undefined2 *param_3,undefined2 *param_4)

{
  param_1 = param_1 + param_2 * 4;
  *param_3 = *(undefined2 *)(param_1 + 0x50);
  *param_4 = *(undefined2 *)(param_1 + 0x52);
  return;
}



void fn_0042e9d4(int param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined2 *puVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  uint local_2c;
  uint uStack_28;
  
  piVar8 = (int *)(param_1 + 0x20);
  uVar1 = fn_00100b58(param_2);
  puVar9 = &DAT_008f9ce8;
  puVar2 = (undefined4 *)*piVar8;
  if (uVar1 == 0) {
    piVar3 = puVar2 + -3;
    iVar5 = *piVar3;
    if (iVar5 != 0) {
      if ((puVar2 != &DAT_008f9cf4) &&
         ((iVar5 == -1 || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar5 + -1, iVar5 == 0)))))) {
        fn_001008c4(*piVar8 + -0xc,*(int *)(*piVar8 + -8) + 8,0);
      }
      *piVar8 = (int)&DAT_008f9cf4;
      return;
    }
    puVar2[-1] = 0;
    puVar4 = (undefined2 *)*piVar8;
  }
  else {
    if (((1 < puVar2[-3] + 1) || ((uint)puVar2[-2] < uVar1)) ||
       ((param_2 != (undefined4 *)0x0 &&
        ((puVar2 <= param_2 && (param_2 < (undefined4 *)((int)puVar2 + puVar2[-1] * 2))))))) {
      uVar6 = puVar2[-1];
      local_2c = uVar6 + (uVar6 >> 1) + (uVar6 >> 3);
      if (local_2c < uVar6 + 0x80) {
        local_2c = uVar6 + 0x80;
      }
      puVar7 = &uStack_28;
      if (uVar1 <= local_2c) {
        puVar7 = &local_2c;
      }
      uStack_28 = uVar1;
      uVar6 = *puVar7;
      if (0xfffffff1 < uVar6) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar6,0xfffffff1);
      }
      if (uVar6 < uVar1) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar1,uVar6);
      }
      if (uVar6 != 0) {
        puVar9 = (undefined4 *)fn_00100fc6((uVar6 + 8) * 2,0);
        if (puVar9 != (undefined4 *)0x0) {
          *puVar9 = 0;
          puVar9[1] = 0;
          puVar9[2] = 0;
        }
        puVar4 = (undefined2 *)((int)puVar9 + uVar1 * 2 + 0xc);
        *puVar9 = 0;
        puVar9[1] = uVar6;
        puVar9[2] = uVar1;
        if (puVar4 != (undefined2 *)0x0) {
          *puVar4 = 0;
        }
      }
      fn_00301a9c(puVar9 + 3,param_2,uVar1 << 1);
      if ((undefined4 *)*piVar8 != &DAT_008f9cf4) {
        piVar3 = (undefined4 *)*piVar8 + -3;
        iVar5 = *piVar3;
        if ((iVar5 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar5 + -1, iVar5 == 0)))) {
          fn_001008c4(*piVar8 + -0xc,*(int *)(*piVar8 + -8) + 8,0);
        }
      }
      *piVar8 = (int)(puVar9 + 3);
      return;
    }
    fn_001006ac(puVar2,param_2,uVar1);
    *(uint *)(*piVar8 + -4) = uVar1;
    puVar4 = (undefined2 *)(*piVar8 + uVar1 * 2);
  }
  *puVar4 = 0;
  return;
}



void fn_0042e9bc(int param_1,int param_2)

{
  if (param_2 == 0) {
    return;
  }
  fn_00301a9c(param_1 + 0x180,param_2,0x120);
  return;
}



void fn_0042e988(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x544,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0042ed0c(iVar1,param_1);
  return;
}



void fn_0042e954(int param_1,int param_2,undefined2 param_3,char param_4,undefined2 param_5,
                 char param_6)

{
  param_1 = param_1 + param_2 * 0x20;
  *(undefined2 *)(param_1 + 0x86) = param_3;
  *(undefined2 *)(param_1 + 0x88) = param_5;
  *(byte *)(param_1 + 0x8b) =
       (*(byte *)(param_1 + 0x8b) & 0xfb | param_4 << 2) & 0xf7 | param_6 << 3;
  return;
}



void fn_0042e938(int param_1,int param_2)

{
  if (param_2 == 0) {
    return;
  }
  fn_00301a9c(param_1 + 0x33a,param_2,0x120);
  return;
}



void fn_0042e8f4(int param_1,int param_2,undefined2 *param_3,undefined1 *param_4,
                 undefined2 *param_5,undefined1 *param_6)

{
  param_1 = param_1 + param_2 * 0x20;
  *param_3 = *(undefined2 *)(param_1 + 0x86);
  *param_4 = (char)((*(byte *)(param_1 + 0x8b) & 7) >> 2);
  *param_5 = *(undefined2 *)(param_1 + 0x88);
  *param_6 = (char)((*(byte *)(param_1 + 0x8b) & 0xf) >> 3);
  return;
}



void fn_0042e8d0(int param_1,int param_2)

{
  if (param_2 == 0) {
    return;
  }
  fn_00301a9c(param_1 + 0xbe,param_2,0xc2);
  return;
}



undefined4 * fn_0042e7dc(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0032118c();
  *puVar1 = &DAT_0083bd60;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  return puVar1;
}



void fn_0042e5b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint *puVar11;
  uint uVar12;
  
  puVar1 = (undefined4 *)fn_00145b00(0xc,&DAT_00812c8c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[2] = 0;
    *puVar1 = &DAT_008f9cf4;
    puVar1[1] = &DAT_008f9cf4;
  }
  fn_00147974(puVar1,param_2);
  fn_00147974(puVar1 + 1,param_3);
  iVar2 = fn_0022eb34(param_3);
  if (iVar2 < 2) {
    iVar2 = 2;
  }
  puVar11 = (uint *)(param_1 + 0x1c);
  puVar1[2] = iVar2;
  puVar10 = *(undefined4 **)(param_1 + 0x20);
  if (puVar10 != *(undefined4 **)(param_1 + 0x24)) {
    *(undefined4 **)(param_1 + 0x20) = puVar10 + 1;
    if (puVar10 != (undefined4 *)0x0) {
      *puVar10 = puVar1;
    }
    return;
  }
  uVar6 = (int)((int)puVar10 - *puVar11) >> 2;
  if (uVar6 < (uint)((int)((int)*(undefined4 **)(param_1 + 0x24) - *puVar11) >> 2)) {
    *(undefined4 **)(param_1 + 0x20) = puVar10 + 1;
    if (puVar10 != (undefined4 *)0x0) {
      *puVar10 = puVar10[-1];
    }
    puVar8 = puVar10 + -1;
    puVar4 = puVar10;
    if (puVar10 < puVar8) {
      if (0 < (int)puVar8 - (int)puVar10) {
        iVar2 = (int)puVar8 - (int)puVar10 >> 2;
        iVar7 = 0;
        do {
          iVar2 = iVar2 + -1;
          puVar10[iVar7 + -1] = puVar8[iVar7 + -1];
          iVar7 = iVar7 + -1;
        } while (iVar2 != 0);
      }
    }
    else {
      while (puVar10 != puVar8) {
        puVar8 = puVar8 + -1;
        puVar4[-1] = *puVar8;
        puVar4 = puVar4 + -1;
      }
    }
    *puVar10 = puVar1;
    return;
  }
  uVar12 = uVar6 + (uVar6 >> 1) + (uVar6 >> 3);
  if (uVar12 < uVar6 + 0x20) {
    uVar12 = uVar6 + 0x20;
  }
  puVar3 = (undefined4 *)fn_00100fc6(uVar12 << 2,0);
  puVar4 = puVar3;
  for (puVar8 = (undefined4 *)*puVar11; puVar8 != puVar10; puVar8 = puVar8 + 1) {
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = *puVar8;
    }
    puVar4 = puVar4 + 1;
  }
  puVar8 = (undefined4 *)(((int)puVar10 - *puVar11 & 0xfffffffc) + (int)puVar3);
  if (puVar8 != (undefined4 *)0x0) {
    *puVar8 = puVar1;
  }
  puVar8 = *(undefined4 **)(param_1 + 0x20);
  puVar1 = (undefined4 *)(((int)puVar10 - *puVar11 & 0xfffffffc) + (int)puVar3);
  for (; puVar10 != puVar8; puVar10 = puVar10 + 1) {
    puVar1 = puVar1 + 1;
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *puVar10;
    }
  }
  uVar5 = *puVar11;
  uVar9 = *(uint *)(param_1 + 0x20);
  uVar6 = uVar5;
  if (uVar9 < uVar5) {
    do {
      uVar6 = uVar6 + 4;
    } while (uVar6 != uVar9);
  }
  fn_001008c4(uVar5,(int)(*(int *)(param_1 + 0x24) - uVar5) >> 2,0);
  *(undefined4 **)(param_1 + 0x24) = puVar3 + uVar12;
  *(undefined4 **)(param_1 + 0x20) = puVar3 + ((int)(uVar9 - uVar5) >> 2) + 1;
  *puVar11 = (uint)puVar3;
  return;
}


