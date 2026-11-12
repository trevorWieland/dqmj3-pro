#include "004064d0_00406a1c.h"



void fn_00406a1c(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  uint local_50 [5];
  undefined4 *local_3c;
  char *apcStack_38 [5];
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xb4) + 0x10) + param_2 * 0x104;
  iVar11 = (int)*(short *)(iVar1 + 0x2c);
  uVar2 = (uint)*(byte *)(iVar1 + 0x4c);
  bVar12 = uVar2 - 0x19 < 0x19;
  uVar9 = (uint)bVar12;
  if (!bVar12) {
    if (uVar2 - 0x32 < 0x32) {
      uVar9 = 2;
    }
    else if (99 < uVar2) {
      uVar9 = 3;
    }
  }
  puVar8 = local_50 + 1;
  if (0x1f < uVar9) {
    puVar8 = local_50;
  }
  local_50[0] = uVar9;
  local_50[1] = 0x20;
  uVar10 = *puVar8;
  puVar3 = (undefined4 *)fn_00100fc6(uVar10 << 2,0);
  puVar4 = puVar3;
  for (uVar2 = local_50[0]; uVar2 != 0; uVar2 = uVar2 - 1) {
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = 0;
    }
    puVar4 = puVar4 + 1;
  }
  iVar1 = 0;
  puVar4 = puVar3 + local_50[0];
  if (uVar9 != 0) {
    do {
      fn_006616f4(iVar11,iVar1 + 5);
      uVar5 = fn_0016a7c4();
      puVar3[iVar1] = uVar5;
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)uVar9);
  }
  fn_002317d8(local_50 + 5,iVar11,0);
  fn_0015b0dc(local_3c);
  uVar2 = 0;
  if ((int)puVar4 - (int)puVar3 >> 2 != 0) {
    do {
      fn_0015b0dc(puVar3[uVar2]);
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)((int)puVar4 - (int)puVar3 >> 2));
  }
  apcStack_38[0] = (char *)0x0;
  apcStack_38[1] = "MenuMessageCouplingChoicePlus25";
  apcStack_38[2] = (char *)&DAT_0085fc98;
  apcStack_38[3] = (char *)&DAT_0085fc74;
  uVar5 = fn_0022f584(apcStack_38[uVar9],0);
  local_50[1] = 1;
  local_50[2] = 0;
  local_50[4] = 1;
  local_50[0] = 1;
  local_50[3] = 0;
  fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar5,1,0);
  fn_00689bd0(param_1,0x48,0);
  fn_0068ab44(param_1,0x100094b);
  if (local_3c != &DAT_008f9cf4) {
    piVar6 = local_3c + -3;
    iVar1 = *piVar6;
    if ((iVar1 == -1) || ((piVar6 != &DAT_008f9ce8 && (*piVar6 = iVar1 + -1, iVar1 == 0)))) {
      fn_001008c4(local_3c + -3,local_3c[-2] + 8,0);
    }
  }
  puVar7 = puVar3;
  if (puVar4 < puVar3) {
    do {
      puVar7 = puVar7 + 1;
    } while (puVar7 != puVar4);
  }
  fn_001008c4(puVar3,(int)(uVar10 * 4) >> 2,0);
  return;
}



void fn_004068fc(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  
  *(undefined1 *)(*(int *)(param_1 + 0x6c) + 0x14) = 2;
  *(undefined4 *)(*(int *)(param_1 + 0x6c) + 0xc) = **(undefined4 **)(*(int *)(param_1 + 0xb4) + 4);
  *(undefined4 *)(*(int *)(param_1 + 0x6c) + 0x10) =
       *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xb4) + 4) + 4);
  uVar4 = *(undefined4 *)(param_1 + 0x7c);
  iVar5 = *(int *)(param_1 + 0x6c);
  iVar1 = fn_006ba4ec(uVar4);
  if (iVar1 < 2) {
    iVar1 = 0;
  }
  else {
    iVar1 = fn_006ba4ec(uVar4);
    iVar1 = iVar1 + -2;
  }
  *(int *)(iVar5 + 0x1c) = iVar1;
  iVar1 = *(int *)(param_1 + 0x6c);
  uVar4 = fn_006ba4ec(*(undefined4 *)(param_1 + 0x7c));
  *(undefined4 *)(iVar1 + 0x30) = uVar4;
  puVar2 = (undefined4 *)fn_001f74ec(param_1,0xd6);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_00890b08) goto LAB_004069c0;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_004069c0:
  uVar4 = *(undefined4 *)(param_1 + 0x7c);
  iVar5 = *(int *)(param_1 + 0xb4);
  iVar1 = fn_006ba4ec(uVar4);
  if (iVar1 < 2) {
    iVar1 = 0;
  }
  else {
    iVar1 = fn_006ba4ec(uVar4);
    iVar1 = iVar1 + -2;
  }
  fn_0060165c(puVar2,*(int *)(iVar5 + 0x10) + iVar1 * 0x104);
  fn_006899f4(param_1,0xd6,0,1);
  return;
}



undefined1 fn_004068b8(int param_1,int param_2)

{
  uint uVar1;
  undefined1 uVar2;
  
  uVar1 = (uint)*(byte *)(*(int *)(*(int *)(param_1 + 0xb4) + 0x10) + param_2 * 0x104 + 0x4c);
  uVar2 = uVar1 - 0x19 < 0x19;
  if (!(bool)uVar2) {
    if (uVar1 - 0x32 < 0x32) {
      uVar2 = 2;
    }
    else if (99 < uVar1) {
      uVar2 = 3;
    }
  }
  return uVar2;
}



void fn_00406824(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_0022f584((char *)&DAT_0040688c,0);
  fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar1,1,0,1,1,0,0,1);
  fn_00689bd0(param_1,0x48,0);
  fn_0068ab44(param_1,0x100094d);
  return;
}



void fn_0040678c(int param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    fn_002575e0(*(undefined4 *)(param_1 + 0xb4),*(undefined4 *)(param_1 + 0xb8));
    (**(code **)(**(int **)(param_1 + 0x7c) + 8))();
  }
  else {
    iVar1 = fn_006ba4ec(*(undefined4 *)(param_1 + 0x7c));
    if (iVar1 < 2) {
      uVar2 = fn_006ba4ec();
    }
    else {
      uVar2 = 0;
    }
    fn_002573b0(*(undefined4 *)(param_1 + 0xb4),uVar2,param_2);
    fn_002560d0(*(undefined4 *)(param_1 + 0xb4));
    (**(code **)(**(int **)(param_1 + 0x7c) + 8))();
  }
  (**(code **)(**(int **)(param_1 + 0x80) + 0x3c))();
  *(undefined1 *)(param_1 + 0xb0) = *(undefined1 *)(param_1 + 0xa4);
  *(undefined1 *)(param_1 + 0xa6) = param_3;
  return;
}



bool fn_00406660(int param_1,undefined4 param_2,undefined4 param_3,short param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 auStack_38 [24];
  undefined4 local_20;
  
  fn_00579dbc(auStack_38);
  fn_00579d50(auStack_38,param_3);
  fn_00579d5c(auStack_38,(int)param_4);
  uVar2 = 0;
  do {
    if (*(int *)(*(int *)(*(int *)(param_1 + 0xb4) + 4) + uVar2 * 4) != 0) {
      fn_00579d74(auStack_38);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 2);
  uVar3 = *(undefined4 *)(param_1 + 0x7c);
  iVar1 = fn_006ba4ec(uVar3);
  if (iVar1 < 2) {
    uVar2 = fn_006ba4ec(uVar3);
    if (1 < uVar2) {
      local_20 = 0;
      goto LAB_004066fc;
    }
  }
  else {
    uVar2 = 0;
  }
  local_20 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xb4) + 4) + uVar2 * 4);
LAB_004066fc:
  uVar3 = *(undefined4 *)(param_1 + 0x7c);
  iVar1 = fn_006ba4ec(uVar3);
  if (iVar1 < 2) {
    fn_006ba4ec(uVar3);
  }
  iVar1 = fn_00315c0c(*(undefined4 *)(param_1 + 0x80),auStack_38);
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0xb0) = *(undefined1 *)(param_1 + 0xa4);
    *(undefined1 *)(param_1 + 0xa6) = 3;
    fn_002a3bb0(*(undefined4 *)(param_1 + 0x8c),2);
  }
  fn_00579dec(auStack_38);
  return iVar1 != 0;
}



bool fn_004065d8(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = *(undefined4 *)(param_1 + 0x7c);
  iVar1 = fn_006ba4ec(uVar4);
  uVar3 = 0;
  if (iVar1 < 2) {
    uVar2 = fn_006ba4ec(uVar4);
    if (1 < uVar2) goto LAB_0040661c;
  }
  else {
    uVar2 = 0;
  }
  uVar3 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xb4) + 4) + uVar2 * 4);
LAB_0040661c:
  iVar1 = fn_00315c0c(*(undefined4 *)(param_1 + 0x80),param_3,uVar3,0);
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0xb0) = *(undefined1 *)(param_1 + 0xa4);
    *(undefined1 *)(param_1 + 0xa6) = 3;
    fn_002a3bb0(*(undefined4 *)(param_1 + 0x8c),2);
  }
  return iVar1 != 0;
}



/* WARNING: Removing unreachable block (ram,0x00406588) */

undefined4 fn_004064d0(int param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 0x9c);
  if (param_3 == 0xe1) {
    param_3 = 0x35;
  }
  if (iVar1 != param_3) {
    iVar1 = fn_00689efc(param_1,param_3,0);
    *(int *)(param_1 + 0x9c) = param_3;
  }
  if (param_2 != (int *)0x0) {
    iVar1 = *param_2;
  }
  if (param_2 != (int *)0x0 && iVar1 != 0) {
    if (param_3 == 0x35) {
      uVar2 = *(undefined4 *)(param_1 + 0xc4);
    }
    else {
      uVar2 = *(undefined4 *)(param_1 + 0xc0);
    }
    fn_0025f3f4(uVar2,param_2);
    uVar2 = fn_00406564(param_1,param_2);
    return uVar2;
  }
  if (param_3 == 0x35) {
    uVar2 = *(undefined4 *)(param_1 + 0xc4);
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0xc0);
  }
  fn_0025f3f4(uVar2,0);
  piVar3 = *(int **)(param_1 + 0x90);
  if (piVar3 == (int *)0x0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x004065d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*piVar3 + 0x20))(piVar3,0);
  return uVar2;
}



undefined1 * fn_00406564(int param_1,int param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 auStack_18 [12];
  
  piVar1 = *(int **)(param_1 + 0x90);
  puVar2 = (undefined1 *)0x0;
  if (piVar1 != (int *)0x0) {
    if (param_2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x004065d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar2 = (undefined1 *)(**(code **)(*piVar1 + 0x20))(piVar1,0);
      return puVar2;
    }
    fn_0020bbc4(auStack_18);
    (**(code **)(**(int **)(param_1 + 0x90) + 0x20))(*(int **)(param_1 + 0x90),1);
    fn_002b3c24(*(undefined4 *)(param_1 + 0x90),param_2);
    puVar2 = auStack_18;
  }
  return puVar2;
}


