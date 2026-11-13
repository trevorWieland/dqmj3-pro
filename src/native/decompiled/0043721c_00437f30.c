#include "0043721c_00437f30.h"



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_00437f30(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined4 local_44;
  undefined4 local_40 [9];
  
  if (*(short *)(param_1 + 0xdc) == 0) {
    uVar1 = *(int *)(param_1 + 0xe4) - *(int *)(param_1 + 0xe0) >> 2;
    if (uVar1 <= param_3) {
      fn_002ff628(9,&DAT_008c7667,&DAT_008c7667,param_3,uVar1);
    }
    fn_00190d50(*(undefined4 *)(*(int *)(param_1 + 0xe0) + param_3 * 4),&DAT_00438240);
    iVar2 = *(int *)(param_1 + 0xf0) - *(int *)(param_1 + 0xec);
  }
  else {
    if (*(char *)(*(int *)(param_1 + 0x98) + 0x338) == '\0') {
      fn_0017d96c(local_40,0x20,0x1f,(char *)&DAT_00438244,param_2);
      uVar3 = fn_001c80ac(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68),local_40);
      uVar1 = *(int *)(param_1 + 0xe4) - *(int *)(param_1 + 0xe0) >> 2;
      if (uVar1 <= param_3) {
        fn_002ff628(9,&DAT_008c7667,&DAT_008c7667,param_3,uVar1);
      }
      fn_00190d50(*(undefined4 *)(*(int *)(param_1 + 0xe0) + param_3 * 4),uVar3);
      uVar3 = DAT_00895660;
      switch(param_2) {
      case 0:
        uVar3 = _DAT_0089566c;
        break;
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
        uVar3 = _DAT_00895680;
      }
      uVar1 = *(int *)(param_1 + 0xe4) - *(int *)(param_1 + 0xe0) >> 2;
      if (uVar1 <= param_3) {
        fn_002ff628(9,&DAT_008c7667,&DAT_008c7667,param_3,uVar1);
      }
      iVar2 = *(int *)(*(int *)(param_1 + 0xe0) + param_3 * 4);
      *(undefined4 *)(iVar2 + 0xac) = uVar3;
      *(undefined4 *)(iVar2 + 0xb0) = uVar3;
      if (param_4 == 0) {
        uVar1 = *(int *)(param_1 + 0xf0) - *(int *)(param_1 + 0xec) >> 2;
        if (uVar1 <= param_3) {
          fn_002ff628(9,&DAT_008c7667,&DAT_008c7667,param_3,uVar1);
        }
        uVar3 = *(undefined4 *)(*(int *)(param_1 + 0xec) + param_3 * 4);
        puVar4 = &DAT_00438240;
      }
      else {
        puVar4 = (undefined *)fn_00230bcc(1,0);
        uVar1 = *(int *)(param_1 + 0xf0) - *(int *)(param_1 + 0xec) >> 2;
        if (uVar1 <= param_3) {
          fn_002ff628(9,&DAT_008c7667,&DAT_008c7667,param_3,uVar1);
        }
        uVar3 = *(undefined4 *)(*(int *)(param_1 + 0xec) + param_3 * 4);
      }
      fn_00190d50(uVar3,puVar4);
      goto LAB_00438228;
    }
    local_44 = 0;
    local_40[0] = 0;
    fn_0022ef60(&local_44,3);
    uVar1 = *(int *)(param_1 + 0xe4) - *(int *)(param_1 + 0xe0) >> 2;
    if (uVar1 <= param_3) {
      fn_002ff628(9,&DAT_008c7667,&DAT_008c7667,param_3,uVar1);
    }
    fn_00190d50(*(undefined4 *)(*(int *)(param_1 + 0xe0) + param_3 * 4),&local_44);
    uVar1 = *(int *)(param_1 + 0xe4) - *(int *)(param_1 + 0xe0) >> 2;
    if (uVar1 <= param_3) {
      fn_002ff628(9,&DAT_008c7667,&DAT_008c7667,param_3,uVar1);
    }
    uVar3 = DAT_00895660;
    iVar2 = *(int *)(*(int *)(param_1 + 0xe0) + param_3 * 4);
    *(undefined4 *)(iVar2 + 0xac) = DAT_00895660;
    *(undefined4 *)(iVar2 + 0xb0) = uVar3;
    iVar2 = *(int *)(param_1 + 0xf0) - *(int *)(param_1 + 0xec);
  }
  if ((uint)(iVar2 >> 2) <= param_3) {
    fn_002ff628(9,&DAT_008c7667,&DAT_008c7667,param_3,iVar2 >> 2);
  }
  fn_00190d50(*(undefined4 *)(*(int *)(param_1 + 0xec) + param_3 * 4),&DAT_00438240);
LAB_00438228:
  *(char *)(param_1 + param_3 + 0xa7) = (char)param_2;
  return;
}



/* WARNING: Removing unreachable block (ram,0x00437e08) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffd4 : 0x00437e0c */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 * fn_0043773c(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  undefined2 *puVar6;
  int *piVar7;
  uint uVar8;
  int local_30;
  uint local_2c [3];
  
  iVar1 = fn_00145b00(0x138,&DAT_00812c8c);
  if (iVar1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)fn_003bc118(iVar1,param_1);
  *puVar2 = &DAT_0083c368;
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  uVar3 = fn_00100b58(&DAT_00437e68);
  if (uVar3 == 0) {
    puVar4 = &DAT_008f9cf4;
  }
  else {
    puVar5 = local_2c + 1;
    if (0x20 < uVar3) {
      puVar5 = local_2c;
    }
    local_2c[0] = uVar3;
    local_2c[1] = 0x20;
    uVar8 = *puVar5;
    if (0xfffffff1 < uVar8) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar8);
    }
    if (uVar8 < uVar3) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar3);
    }
    if (uVar8 == 0) {
      puVar4 = &DAT_008f9ce8;
    }
    else {
      puVar4 = (undefined4 *)fn_00100fc6((uVar8 + 8) * 2,0);
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
      }
      *puVar4 = 0;
      puVar4[1] = uVar8;
      puVar6 = (undefined2 *)((int)puVar4 + uVar3 * 2 + 0xc);
      puVar4[2] = uVar3;
      if (puVar6 != (undefined2 *)0x0) {
        *puVar6 = 0;
      }
    }
    puVar4 = puVar4 + 3;
  }
  puVar2[0x2b] = puVar4;
  fn_00301a9c(puVar4,&DAT_00437e68,uVar3 << 1);
  *(undefined1 *)(puVar2 + 0x2c) = 0;
  puVar2[0x3d] = 0;
  *(undefined1 *)(puVar2 + 0x3e) = 0;
  *(undefined1 *)((int)puVar2 + 0xf9) = 0;
  puVar2[0x3f] = 0;
  puVar2[0x40] = 0;
  puVar2[0x41] = 0;
  puVar2[0x42] = 0;
  puVar2[0x43] = 0;
  puVar2[0x44] = 0;
  puVar2[0x45] = 0;
  puVar2[0x46] = 0;
  puVar2[0x47] = 0;
  puVar2[0x48] = 0;
  puVar2[0x49] = 0;
  puVar2[0x4a] = 0;
  piVar7 = puVar2 + 0x4b;
  *piVar7 = 0;
  puVar2[0x4c] = 0;
  puVar2[0x4d] = 0;
  local_30 = 7;
  local_2c[0] = 0x20;
  puVar4 = (undefined4 *)fn_00100fc6(0x80,0);
  *piVar7 = (int)puVar4;
  for (; local_30 != 0; local_30 = local_30 + -1) {
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = 0;
    }
    puVar4 = puVar4 + 1;
  }
  puVar2[0x4d] = *piVar7 + 0x80;
  puVar2[0x4c] = *piVar7 + 0x1c;
  return puVar2;
}



void fn_0043761c(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  short local_38 [2];
  undefined4 local_34;
  undefined1 uStack_30;
  undefined1 auStack_2f [3];
  int iStack_2c;
  int local_28;
  
  local_34 = 0x3020100;
  iStack_2c = param_1;
  local_28 = param_2;
  fn_0042e8f4(*(undefined4 *)(param_1 + 0x98),param_2,local_38,&uStack_30,local_38 + 1,auStack_2f);
  iVar1 = local_28 * 2;
  iVar4 = 0;
  do {
    uVar5 = (uint)*(byte *)((int)local_38 + iVar4 + iVar1 + 4);
    uVar2 = *(int *)(param_1 + 0x130) - *(int *)(param_1 + 300) >> 2;
    if (uVar2 <= uVar5) {
      fn_002ff628(9,&DAT_008c7651,&DAT_008c7651,uVar5,uVar2);
    }
    iVar3 = *(int *)(*(int *)(param_1 + 300) + uVar5 * 4);
    if (local_38[iVar4] == 0) {
      fn_002b427c(iVar3,1);
      *(undefined1 *)(iVar3 + 0x3b) = 1;
      *(undefined1 *)(iVar3 + 0x3d) = 0;
      *(undefined1 *)(iVar3 + 0x43) = 0;
      *(undefined1 *)(iVar3 + 0x3f) = 0;
      *(undefined1 *)(iVar3 + 0x41) = 0;
    }
    else {
      fn_002b427c(iVar3);
      *(undefined1 *)(iVar3 + 0x3b) = 0;
      *(undefined1 *)(iVar3 + 0x3d) = 0;
      *(undefined1 *)(iVar3 + 0x43) = 0;
      *(undefined1 *)(iVar3 + 0x3f) = 0;
      *(undefined1 *)(iVar3 + 0x41) = 0;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 2);
  param_1 = param_1 + local_28 * 0x20;
  *(short *)(param_1 + 0xcc) = local_38[0];
  *(short *)(param_1 + 0xce) = local_38[1];
  return;
}



void fn_004374f4(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  short *psVar3;
  short *psVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  undefined4 *local_20;
  short *local_1c;
  short local_18 [2];
  undefined4 uStack_14;
  
  local_20 = &uStack_14;
  fn_0042ec40(*(undefined4 *)(param_1 + 0x98),param_2,local_18,&local_1c);
  iVar6 = param_1 + param_2 * 4;
  if (local_18[0] == 0) {
    uVar2 = fn_0022f584((char *)&DAT_00437608,0);
    fn_00190d50(*(undefined4 *)(iVar6 + 0x10c),uVar2);
  }
  else {
    fn_00231300(&local_20,(int)local_18[0],local_1c,0);
    fn_00190d50(*(undefined4 *)(iVar6 + 0x10c),local_20);
    if (local_20 != &DAT_008f9cf4) {
      piVar1 = local_20 + -3;
      iVar6 = *piVar1;
      if ((iVar6 == -1) || ((piVar1 != &DAT_008f9ce8 && (*piVar1 = iVar6 + -1, iVar6 == 0)))) {
        fn_001008c4(local_20 + -3,local_20[-2] + 8,0);
      }
    }
  }
  uVar5 = 0;
  psVar3 = (short *)(param_1 + param_2 * 0x20 + 0xb4);
  do {
    uVar5 = uVar5 + 1;
    psVar4 = psVar3 + 1;
    *psVar3 = *local_1c;
    bVar7 = local_1c[1] == 0;
    local_1c = local_1c + 1;
    psVar3 = psVar4;
  } while ((bVar7 || uVar5 < 0xb) && (!bVar7 && uVar5 != 10));
  *psVar4 = 0;
  return;
}



void fn_0043721c(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  uint *puVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  uint local_2c;
  uint uStack_28;
  
  puVar8 = *(undefined4 **)(*(int *)(param_1 + 0x98) + 0x20);
  fn_00190d50(*(undefined4 *)(param_1 + 0xfc),puVar8);
  piVar9 = (int *)(param_1 + 0xac);
  uVar1 = fn_00100b58(puVar8);
  puVar10 = &DAT_008f9ce8;
  puVar2 = (undefined4 *)*piVar9;
  if (uVar1 == 0) {
    piVar3 = puVar2 + -3;
    iVar7 = *piVar3;
    if (iVar7 != 0) {
      if ((puVar2 != &DAT_008f9cf4) &&
         ((iVar7 == -1 || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar7 + -1, iVar7 == 0)))))) {
        fn_001008c4(*piVar9 + -0xc,*(int *)(*piVar9 + -8) + 8,0);
      }
      *piVar9 = (int)&DAT_008f9cf4;
      return;
    }
    puVar2[-1] = 0;
    puVar6 = (undefined2 *)*piVar9;
  }
  else {
    if (((1 < puVar2[-3] + 1) || ((uint)puVar2[-2] < uVar1)) ||
       ((puVar8 != (undefined4 *)0x0 &&
        ((puVar2 <= puVar8 && (puVar8 < (undefined4 *)((int)puVar2 + puVar2[-1] * 2))))))) {
      uVar4 = puVar2[-1];
      local_2c = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
      if (local_2c < uVar4 + 0x80) {
        local_2c = uVar4 + 0x80;
      }
      puVar5 = &uStack_28;
      if (uVar1 <= local_2c) {
        puVar5 = &local_2c;
      }
      uStack_28 = uVar1;
      uVar4 = *puVar5;
      if (0xfffffff1 < uVar4) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar4,0xfffffff1);
      }
      if (uVar4 < uVar1) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar1,uVar4);
      }
      if (uVar4 != 0) {
        puVar10 = (undefined4 *)fn_00100fc6((uVar4 + 8) * 2,0);
        if (puVar10 != (undefined4 *)0x0) {
          *puVar10 = 0;
          puVar10[1] = 0;
          puVar10[2] = 0;
        }
        puVar6 = (undefined2 *)((int)puVar10 + uVar1 * 2 + 0xc);
        *puVar10 = 0;
        puVar10[1] = uVar4;
        puVar10[2] = uVar1;
        if (puVar6 != (undefined2 *)0x0) {
          *puVar6 = 0;
        }
      }
      fn_00301a9c(puVar10 + 3,puVar8,uVar1 << 1);
      if ((undefined4 *)*piVar9 != &DAT_008f9cf4) {
        piVar3 = (undefined4 *)*piVar9 + -3;
        iVar7 = *piVar3;
        if ((iVar7 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar7 + -1, iVar7 == 0)))) {
          fn_001008c4(*piVar9 + -0xc,*(int *)(*piVar9 + -8) + 8,0);
        }
      }
      *piVar9 = (int)(puVar10 + 3);
      return;
    }
    fn_001006ac(puVar2,puVar8,uVar1);
    *(uint *)(*piVar9 + -4) = uVar1;
    puVar6 = (undefined2 *)(*piVar9 + uVar1 * 2);
  }
  *puVar6 = 0;
  return;
}


