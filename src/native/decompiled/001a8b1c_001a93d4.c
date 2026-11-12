#include "001a8b1c_001a93d4.h"



void fn_001a93d4(uint *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint local_28;
  int *local_24;
  uint local_20;
  int *local_1c;
  
  local_1c = (int *)fn_0019ba68(*(undefined4 *)(param_2 + 0xdc),param_3,param_4);
  local_20 = 0x8000010;
  if (local_1c == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    fn_00146590();
  }
  local_1c[1] = local_1c[1] + 1;
  local_28 = 0x5000002;
  local_24 = (int *)&DAT_00000001;
  fn_0019b728(*(undefined4 *)(param_2 + 0x84),&local_20,&local_28);
  if (((local_28 & 0x8000000) != 0) &&
     (iVar1 = local_24[1], local_24[1] = iVar1 + -1, iVar1 + -1 == 0)) {
    (**(code **)(*local_24 + 8))();
  }
  if (((local_20 & 0x8000000) != 0) &&
     (iVar1 = local_1c[1], local_1c[1] = iVar1 + -1, iVar1 + -1 == 0)) {
    (**(code **)(*local_1c + 8))();
  }
  *param_1 = local_20;
  param_1[1] = (uint)local_1c;
  return;
}



void fn_001a931c(int param_1,uint *param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  
  fn_00192720();
  uVar4 = *param_2;
  piVar3 = (int *)param_2[1];
  if ((uVar4 & 0x8000000) != 0) {
    piVar3[1] = piVar3[1] + 1;
  }
  if (*(uint *)(param_1 + 0x50) <= *(uint *)(param_1 + 0x4c)) {
    iVar5 = *(uint *)(param_1 + 0x4c) << 1;
    if (iVar5 == 0) {
      iVar5 = 4;
    }
    uVar1 = fn_0018388c(*(undefined4 *)(param_1 + 0x48),*(uint *)(param_1 + 0x50) << 3,iVar5 << 3);
    *(undefined4 *)(param_1 + 0x48) = uVar1;
    *(int *)(param_1 + 0x50) = iVar5;
  }
  puVar2 = (uint *)(*(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x4c) * 8);
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
  if (puVar2 != (uint *)0x0) {
    puVar2[1] = (uint)piVar3;
    *puVar2 = uVar4;
    if ((uVar4 & 0x8000000) != 0) {
      piVar3[1] = piVar3[1] + 1;
    }
  }
  if (((uVar4 & 0x8000000) == 0) || (iVar5 = piVar3[1], piVar3[1] = iVar5 + -1, iVar5 + -1 != 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001a93cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar3 + 8))(piVar3);
  return;
}



int * fn_001a9170(int param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint local_30;
  int *local_2c;
  uint local_28;
  int *local_24;
  uint local_20;
  int *local_1c;
  
  local_20 = 0x1000001;
  local_1c = (int *)0x0;
  local_30 = *param_2;
  local_2c = (int *)param_2[1];
  if ((local_30 & 0x8000000) != 0) {
    local_2c[1] = local_2c[1] + 1;
  }
  iVar1 = fn_001a1dc8(*(undefined4 *)(param_1 + 0x7c),&local_30,&local_20);
  if (((local_30 & 0x8000000) != 0) &&
     (iVar2 = local_2c[1], local_2c[1] = iVar2 + -1, iVar2 + -1 == 0)) {
    (**(code **)(*local_2c + 8))();
  }
  if (iVar1 != 1) {
    piVar3 = *(int **)(param_1 + 0x98);
    if (((local_20 & 0x8000000) != 0) &&
       (iVar1 = local_1c[1], local_1c[1] = iVar1 + -1, iVar1 + -1 == 0)) {
      (**(code **)(*local_1c + 8))();
    }
    local_20 = 0x5000002;
    local_28 = *param_2;
    local_24 = (int *)param_2[1];
    if ((local_28 & 0x8000000) != 0) {
      local_24[1] = local_24[1] + 1;
    }
    local_1c = piVar3;
    fn_0019b728(*(undefined4 *)(param_1 + 0x7c),&local_28,&local_20);
    if (((local_28 & 0x8000000) != 0) &&
       (iVar1 = local_24[1], local_24[1] = iVar1 + -1, iVar1 + -1 == 0)) {
      (**(code **)(*local_24 + 8))();
    }
    *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
  }
  piVar3 = local_1c;
  if (((local_20 & 0x8000000) != 0) &&
     (iVar1 = local_1c[1], local_1c[1] = iVar1 + -1, iVar1 + -1 == 0)) {
    (**(code **)(*local_1c + 8))();
  }
  return piVar3;
}



undefined4 fn_001a9048(int param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  uint local_20;
  int *local_1c;
  uint local_18;
  int *local_14;
  
  local_18 = 0x1000001;
  local_14 = (int *)0x0;
  local_20 = *param_2;
  local_1c = (int *)param_2[1];
  if ((local_20 & 0x8000000) != 0) {
    local_1c[1] = local_1c[1] + 1;
  }
  iVar1 = fn_001a1dc8(*(undefined4 *)(*(int *)(param_1 + 0xdc) + 0x38),&local_20,&local_18);
  if (((local_20 & 0x8000000) != 0) &&
     (iVar2 = local_1c[1], local_1c[1] = iVar2 + -1, iVar2 + -1 == 0)) {
    (**(code **)(*local_1c + 8))();
  }
  if (iVar1 == 0) {
    if (((local_18 & 0x8000000) != 0) &&
       (iVar1 = local_14[1], local_14[1] = iVar1 + -1, iVar1 + -1 == 0)) {
      (**(code **)(*local_14 + 8))();
    }
    return 0;
  }
  *param_3 = local_18;
  param_3[1] = (uint)local_14;
  if (((local_18 & 0x8000000) != 0) &&
     (iVar1 = local_14[1], local_14[1] = iVar1 + -1, iVar1 + -1 == 0)) {
    (**(code **)(*local_14 + 8))();
  }
  return 1;
}



undefined4 * fn_001a8b1c(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint local_40;
  int *local_3c;
  uint local_38;
  int *local_34;
  uint local_30;
  int *local_2c;
  int local_28;
  
  iVar7 = *(int *)(param_1 + 0x70);
  iVar8 = *(int *)(param_1 + 0x98);
  iVar10 = *(int *)(param_1 + 100);
  iVar12 = *(int *)(param_1 + 0x4c);
  iVar14 = *(int *)(param_1 + 0x40);
  iVar15 = *(int *)(param_1 + 0xa0);
  iVar16 = *(int *)(param_1 + 0x58);
  iVar1 = *(int *)(param_1 + 200);
  local_28 = iVar7 * 5;
  puVar2 = (undefined4 *)
           fn_002fece8((iVar10 + iVar8 + iVar12 + iVar14) * 8 + iVar16 * 0x14 + iVar15 * 8 +
                        iVar7 * 0x14 + iVar1 * 4 + 0x60);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = 0;
    *puVar2 = &DAT_0081e52c;
    puVar2[2] = 0;
    puVar2[3] = 0x1000001;
    puVar2[4] = 0;
    puVar2[5] = 0x1000001;
    puVar2[6] = 0;
    puVar2[7] = 0;
    *(undefined1 *)(puVar2 + 8) = 0;
  }
  puVar6 = puVar2 + iVar10 * 2 + 0x18;
  puVar2[0xe] = puVar6;
  puVar6 = puVar6 + iVar8 * 2;
  puVar2[0x10] = puVar6;
  puVar2[0xd] = iVar8;
  puVar2[0x17] = iVar10;
  puVar6 = puVar6 + iVar12 * 2;
  puVar2[0xf] = iVar12;
  puVar2[0x12] = puVar6;
  puVar2[0x13] = iVar16;
  puVar6 = puVar6 + iVar14 * 2;
  puVar2[0x14] = puVar6;
  puVar6 = puVar6 + iVar16 * 5;
  puVar2[0xc] = puVar6;
  puVar2[0x16] = puVar6 + iVar15 * 2 + local_28;
  puVar2[9] = iVar7;
  puVar2[0x11] = iVar14;
  puVar2[10] = puVar6 + iVar15 * 2;
  puVar2[0xb] = iVar15;
  puVar2[0x15] = iVar1;
  iVar1 = 0;
  if (0 < iVar8) {
    do {
      puVar6 = (undefined4 *)(puVar2[0xe] + iVar1 * 8);
      iVar1 = iVar1 + 1;
      if (puVar6 != (undefined4 *)0x0) {
        puVar6[1] = 0;
        *puVar6 = 0x1000001;
      }
    } while (iVar1 < (int)puVar2[0xd]);
  }
  iVar1 = 0;
  if (0 < (int)puVar2[0xf]) {
    do {
      puVar6 = (undefined4 *)(puVar2[0x10] + iVar1 * 8);
      iVar1 = iVar1 + 1;
      if (puVar6 != (undefined4 *)0x0) {
        puVar6[1] = 0;
        *puVar6 = 0x1000001;
      }
    } while (iVar1 < (int)puVar2[0xf]);
  }
  iVar1 = 0;
  if (0 < (int)puVar2[0x11]) {
    do {
      puVar6 = (undefined4 *)(puVar2[0x12] + iVar1 * 8);
      iVar1 = iVar1 + 1;
      if (puVar6 != (undefined4 *)0x0) {
        puVar6[1] = 0;
        *puVar6 = 0x1000001;
      }
    } while (iVar1 < (int)puVar2[0x11]);
  }
  iVar1 = 0;
  if (0 < (int)puVar2[0x13]) {
    do {
      iVar7 = puVar2[0x14] + iVar1 * 0x14;
      if (iVar7 != 0) {
        *(undefined4 *)(iVar7 + 8) = 0;
        *(undefined4 *)(iVar7 + 4) = 0x1000001;
        *(undefined4 *)(iVar7 + 0xc) = 0x1000001;
        *(undefined4 *)(iVar7 + 0x10) = 0;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)puVar2[0x13]);
  }
  iVar1 = 0;
  if (0 < (int)puVar2[9]) {
    do {
      puVar6 = (undefined4 *)(puVar2[10] + iVar1 * 0x14);
      if (puVar6 != (undefined4 *)0x0) {
        puVar6[1] = 0;
        *puVar6 = 0x1000001;
        puVar6[2] = 0;
        puVar6[3] = 0;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)puVar2[9]);
  }
  local_40 = 0x1000001;
  local_3c = (int *)0x0;
  local_38 = 0x1000001;
  local_34 = (int *)0x0;
  local_30 = 0x1000001;
  local_2c = (int *)0x0;
  puVar2[7] = *(undefined4 *)(param_1 + 0x1c);
  fn_0019e864(puVar2 + 3,param_1 + 0x90);
  *(undefined1 *)(puVar2 + 8) = *(undefined1 *)(param_1 + 0x21);
  fn_0019e864(puVar2 + 5,param_1 + 0x88);
  while (piVar3 = (int *)fn_001a8604(*(undefined4 *)(param_1 + 0x7c),0,&local_40,&local_38,
                                      &local_30), piVar3 != (int *)&DAT_ffffffff) {
    fn_0019e864(puVar2[0xe] + (int)local_2c * 8,&local_38);
    if (((local_40 & 0x8000000) != 0) &&
       (iVar1 = local_3c[1], local_3c[1] = iVar1 + -1, iVar1 + -1 == 0)) {
      (**(code **)(*local_3c + 8))();
    }
    local_40 = 0x5000002;
    local_3c = piVar3;
  }
  uVar9 = 0;
  if (*(int *)(param_1 + 0x40) != 0) {
    do {
      fn_0019e864(puVar2[0x12] + uVar9 * 8,*(int *)(param_1 + 0x3c) + uVar9 * 8);
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(uint *)(param_1 + 0x40));
  }
  uVar9 = 0;
  if (*(int *)(param_1 + 0x4c) != 0) {
    do {
      fn_0019e864(puVar2[0x10] + uVar9 * 8,*(int *)(param_1 + 0x48) + uVar9 * 8);
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(uint *)(param_1 + 0x4c));
  }
  uVar9 = 0;
  if (*(int *)(param_1 + 0x58) != 0) {
    do {
      puVar11 = (undefined1 *)(*(int *)(param_1 + 0x54) + uVar9 * 0x14);
      puVar13 = (undefined1 *)(puVar2[0x14] + uVar9 * 0x14);
      *puVar13 = *puVar11;
      fn_0019e864(puVar13 + 4,puVar11 + 4);
      fn_0019e864(puVar13 + 0xc,puVar11 + 0xc);
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(uint *)(param_1 + 0x58));
  }
  uVar9 = 0;
  if (*(int *)(param_1 + 0x70) != 0) {
    do {
      iVar1 = puVar2[10] + uVar9 * 0x14;
      iVar7 = *(int *)(param_1 + 0x6c) + uVar9 * 0x14;
      fn_0019e864(iVar1,iVar7);
      uVar9 = uVar9 + 1;
      *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar7 + 8);
      *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar7 + 0xc);
      *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(iVar7 + 0x10);
    } while (uVar9 < *(uint *)(param_1 + 0x70));
  }
  uVar9 = 0;
  if (*(int *)(param_1 + 0xa0) != 0) {
    do {
      puVar6 = (undefined4 *)(*(int *)(param_1 + 0x9c) + uVar9 * 8);
      uVar4 = puVar6[1];
      puVar5 = (undefined4 *)(puVar2[0xc] + uVar9 * 8);
      *puVar5 = *puVar6;
      puVar5[1] = uVar4;
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(uint *)(param_1 + 0xa0));
  }
  uVar9 = 0;
  if (*(int *)(param_1 + 200) != 0) {
    do {
      *(undefined4 *)(puVar2[0x16] + uVar9 * 4) =
           *(undefined4 *)(*(int *)(param_1 + 0xc4) + uVar9 * 4);
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(uint *)(param_1 + 200));
  }
  fn_0017821c(puVar2 + 0x18,*(undefined4 *)(param_1 + 0x60),*(int *)(param_1 + 100) << 3);
  *(undefined1 *)((int)puVar2 + 0x21) = *(undefined1 *)(param_1 + 0x20);
  if (((local_30 & 0x8000000) != 0) &&
     (iVar1 = local_2c[1], local_2c[1] = iVar1 + -1, iVar1 + -1 == 0)) {
    (**(code **)(*local_2c + 8))();
  }
  if (((local_38 & 0x8000000) != 0) &&
     (iVar1 = local_34[1], local_34[1] = iVar1 + -1, iVar1 + -1 == 0)) {
    (**(code **)(*local_34 + 8))();
  }
  if (((local_40 & 0x8000000) != 0) &&
     (iVar1 = local_3c[1], local_3c[1] = iVar1 + -1, iVar1 + -1 == 0)) {
    (**(code **)(*local_3c + 8))();
  }
  return puVar2;
}


