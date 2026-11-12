#include "0036af0c_0036ba6c.h"



bool fn_0036ba6c(undefined4 *param_1)

{
  int iVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    return false;
  }
  iVar1 = fn_0028afe0(*(undefined4 *)(DAT_00897804 + 0xc),*param_1);
  return iVar1 != 0;
}



bool fn_0036ba1c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 unaff_r4;
  undefined4 in_lr;
  
  iVar1 = fn_006ba284();
  iVar2 = fn_006ba274(param_1);
  uVar3 = iVar1 * iVar2 + param_2;
  if (((int)uVar3 < 0) ||
     ((uint)(*(int *)(param_1 + 0xd0) - *(int *)(param_1 + 0xcc) >> 4) <= uVar3)) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = (undefined4 *)(*(int *)(param_1 + 0xcc) + uVar3 * 0x10);
  }
  if (puVar4 == (undefined4 *)0x0) {
    return false;
  }
  iVar1 = fn_0028afe0(*(undefined4 *)(DAT_00897804 + 0xc),*puVar4,
                       *(undefined4 *)(DAT_00897804 + 0xc),param_4,unaff_r4,in_lr);
  return iVar1 != 0;
}



int fn_0036b9b8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = fn_006ba284();
  iVar2 = fn_006ba274(param_1);
  uVar3 = iVar1 * iVar2 + param_2;
  if (((int)uVar3 < 0) ||
     ((uint)(*(int *)(param_1 + 0xd0) - *(int *)(param_1 + 0xcc) >> 4) <= uVar3)) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xcc) + uVar3 * 0x10;
  }
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 4);
  }
  if (iVar1 != 0 && iVar2 != 0) {
    iVar2 = 1;
  }
  return iVar2;
}



void fn_0036b954(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &DAT_0082770c;
  uVar1 = param_1[0x31];
  uVar2 = uVar1;
  if ((uint)param_1[0x32] < uVar1) {
    do {
      uVar2 = uVar2 + 0x10;
    } while (uVar2 != param_1[0x32]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x33] - uVar1) >> 4,0);
  fn_00397614(param_1);
  fn_002feef8();
  return;
}



void fn_0036b628(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_0036bb80(*(undefined4 *)(param_1[0x2f] + 0x10));
  *(undefined4 *)(param_1[0x2f] + 0x10) = uVar1;
  fn_0036bae4(uVar1,param_1[0x29],param_1 + 0x31);
  (**(code **)(*param_1 + 0x124))(param_1);
  fn_0068ab44(param_1,0x1000950);
  return;
}



void fn_0036b464(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined *puVar8;
  undefined4 *local_28;
  undefined4 *local_24;
  
  fn_002c3e78();
  iVar5 = 0;
  uVar6 = *(undefined4 *)(DAT_00897804 + 0xc);
  iVar1 = fn_006ba274(param_1);
  if (0 < iVar1) {
    do {
      iVar1 = fn_006ba284(param_1);
      iVar2 = fn_006ba274(param_1);
      uVar3 = iVar1 * iVar2 + iVar5;
      if (((-1 < (int)uVar3) &&
          (uVar3 < (uint)(*(int *)(param_1 + 200) - *(int *)(param_1 + 0xc4) >> 4))) &&
         (puVar7 = (undefined4 *)(*(int *)(param_1 + 0xc4) + uVar3 * 0x10),
         puVar7 != (undefined4 *)0x0)) {
        local_28 = &DAT_008f9cf4;
        local_24 = &DAT_008f9cf4;
        fn_002318cc(puVar7,&local_28,&local_24);
        fn_0031b78c(param_1,iVar5,1,local_28);
        fn_0031b78c(param_1,iVar5,4,local_24);
        puVar8 = &DAT_0036b60c;
        iVar1 = fn_0028afe0(uVar6,*puVar7);
        if (iVar1 != 0) {
          puVar8 = (undefined *)fn_0022f584((char *)&DAT_0036b610,0);
        }
        fn_0031b78c(param_1,iVar5,7,puVar8);
        if (local_24 != &DAT_008f9cf4) {
          piVar4 = local_24 + -3;
          iVar1 = *piVar4;
          if ((iVar1 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar1 + -1, iVar1 == 0)))) {
            fn_001008c4(local_24 + -3,local_24[-2] + 8,0);
          }
        }
        if (local_28 != &DAT_008f9cf4) {
          piVar4 = local_28 + -3;
          iVar1 = *piVar4;
          if ((iVar1 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar1 + -1, iVar1 == 0)))) {
            fn_001008c4(local_28 + -3,local_28[-2] + 8,0);
          }
        }
      }
      iVar5 = iVar5 + 1;
      iVar1 = fn_006ba274(param_1);
    } while (iVar5 < iVar1);
  }
  return;
}



void fn_0036b2ac(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xbc);
  uVar1 = fn_006ba284();
  *(undefined4 *)(iVar2 + 8) = uVar1;
                    /* WARNING: Subroutine does not return */
  fn_006ba250(param_1);
}



undefined4 * fn_0036b27c(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint local_20;
  uint local_1c [2];
  
  iVar1 = fn_00145b00(0xd0,&DAT_00812c8c);
  if (iVar1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)fn_003975cc(iVar1,param_1);
  puVar11 = (undefined4 *)0x0;
  *puVar2 = &DAT_0082770c;
  puVar2[0x2e] = 0;
  puVar2[0x2f] = 0;
  puVar2[0x30] = 0;
  puVar2[0x31] = 0;
  puVar2[0x32] = 0;
  puVar2[0x33] = 0;
  local_20 = 100;
  puVar10 = puVar2 + 0x31;
  if ((uint)((int)(puVar2[0x33] - puVar2[0x31]) >> 4) < 100) {
    uVar12 = (int)(puVar2[0x32] - puVar2[0x31]) >> 4;
    local_1c[0] = uVar12 + (uVar12 >> 1) + (uVar12 >> 3);
    if (local_1c[0] < uVar12 + 0x20) {
      local_1c[0] = uVar12 + 0x20;
    }
    puVar7 = local_1c;
    if (local_1c[0] < 0x65) {
      puVar7 = &local_20;
    }
    uVar12 = *puVar7;
    puVar3 = (undefined4 *)fn_00100fc6(uVar12 << 4,0);
    puVar9 = (undefined4 *)puVar2[0x32];
    puVar6 = puVar3;
    for (puVar8 = (undefined4 *)*puVar10; puVar8 != puVar9; puVar8 = puVar8 + 4) {
      if (puVar6 != (undefined4 *)0x0) {
        uVar13 = puVar8[1];
        uVar14 = puVar8[2];
        uVar15 = puVar8[3];
        *puVar6 = *puVar8;
        puVar6[1] = uVar13;
        puVar6[2] = uVar14;
        puVar6[3] = uVar15;
      }
      puVar6 = puVar6 + 4;
    }
    uVar4 = *puVar10;
    uVar5 = uVar4;
    if ((uint)puVar2[0x32] < uVar4) {
      do {
        uVar5 = uVar5 + 0x10;
      } while (uVar5 != puVar2[0x32]);
    }
    fn_001008c4(uVar4,(int)(puVar2[0x33] - uVar4) >> 4,0);
    uVar5 = *puVar10;
    puVar2[0x31] = puVar3;
    puVar2[0x32] = (puVar2[0x32] - uVar5 & 0xfffffff0) + (int)puVar3;
    puVar2[0x33] = puVar3 + uVar12 * 4;
  }
  puVar8 = (undefined4 *)fn_00689c1c(puVar2,0x75);
  if (puVar8 != (undefined4 *)0x0) {
    puVar6 = (undefined4 *)(**(code **)*puVar8)(puVar8);
    do {
      if (puVar6 == &DAT_00894374) goto LAB_0036b8a8;
      puVar6 = (undefined4 *)*puVar6;
    } while (puVar6 != (undefined4 *)0x0);
  }
  puVar8 = (undefined4 *)0x0;
LAB_0036b8a8:
  puVar2[0x2e] = puVar8;
  puVar8 = (undefined4 *)fn_001f74ec(puVar2,0x76);
  if (puVar8 != (undefined4 *)0x0) {
    puVar6 = (undefined4 *)(**(code **)*puVar8)(puVar8);
    do {
      if (puVar6 == &DAT_00894370) goto LAB_0036b8ec;
      puVar6 = (undefined4 *)*puVar6;
    } while (puVar6 != (undefined4 *)0x0);
  }
  puVar8 = (undefined4 *)0x0;
LAB_0036b8ec:
  puVar2[0x2f] = puVar8;
  puVar8 = (undefined4 *)fn_001f74d8(puVar2,0x41);
  if (puVar8 != (undefined4 *)0x0) {
    puVar6 = (undefined4 *)(**(code **)*puVar8)(puVar8);
    do {
      if (puVar6 == &DAT_00893a00) {
        puVar11 = puVar8;
        break;
      }
      puVar6 = (undefined4 *)*puVar6;
    } while (puVar6 != (undefined4 *)0x0);
  }
  puVar2[0x30] = puVar11;
  return puVar2;
}



void fn_0036b214(void)

{
                    /* WARNING: Subroutine does not return */
  fn_002c3de4();
}



undefined4 fn_0036af0c(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  wchar16 *local_48;
  char *pcStack_44;
  undefined4 local_40;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  undefined1 local_1a;
  undefined1 local_19;
  undefined1 local_18;
  undefined1 local_16;
  undefined1 local_15;
  
  fn_002c330c(&local_48);
  local_48 = L"rom:/data/Layout/common/common_0100.arc";
  pcStack_44 = "common_0100.bflyt";
  uVar1 = fn_0022f584((char *)&DAT_0036b130,0);
  fn_00147974(&local_2c,uVar1);
  local_19 = 1;
  local_30 = 0x42c00000;
  local_1a = 1;
  uVar1 = fn_0022f584((char *)&DAT_0036b158,0);
  fn_00147974(&local_28,uVar1);
  local_18 = 0;
  local_16 = 1;
  local_15 = 0;
  local_34 = (**(code **)(*param_1 + 0x148))(param_1);
  local_40 = 10;
  uVar1 = fn_002c29a0(param_1,&local_48);
  param_1[0x2d] = param_1[0x2e];
  fn_00689efc(param_1,0x41,0);
  fn_0036bae4(*(undefined4 *)(param_1[0x2f] + 0x10),param_1[0x29],param_1 + 0x31);
  (**(code **)(*param_1 + 0x124))(param_1);
  if (local_20 != &DAT_008f9cf4) {
    piVar2 = local_20 + -3;
    iVar3 = *piVar2;
    if ((iVar3 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar3 + -1, iVar3 == 0)))) {
      fn_001008c4(local_20 + -3,local_20[-2] + 8,0);
    }
  }
  if (local_24 != &DAT_008f9cf4) {
    piVar2 = local_24 + -3;
    iVar3 = *piVar2;
    if ((iVar3 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar3 + -1, iVar3 == 0)))) {
      fn_001008c4(local_24 + -3,local_24[-2] + 8,0);
    }
  }
  if (local_28 != &DAT_008f9cf4) {
    piVar2 = local_28 + -3;
    iVar3 = *piVar2;
    if ((iVar3 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar3 + -1, iVar3 == 0)))) {
      fn_001008c4(local_28 + -3,local_28[-2] + 8,0);
    }
  }
  if (local_2c != &DAT_008f9cf4) {
    piVar2 = local_2c + -3;
    iVar3 = *piVar2;
    if ((iVar3 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar3 + -1, iVar3 == 0)))) {
      fn_001008c4(local_2c + -3,local_2c[-2] + 8,0);
    }
  }
  return uVar1;
}


