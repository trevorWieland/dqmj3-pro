#include "006f5508_006f5eb8.h"

static void svc_0x28(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x28 }
#endif
}


undefined4 fn_006f5eb8(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x44) != 0) {
    if (*(int *)(param_1 + 0x44) == 0xe) {
      uVar1 = 1;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1;
}



bool fn_006f5e30(int param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  bool bVar6;
  uint local_18;
  int iStack_14;
  
  uVar4 = *(int *)(param_1 + 0x1c) + 1;
  if ((uint)(*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) >> 3) <= uVar4) {
    uVar4 = 0;
  }
  fn_00114248(&local_18);
  puVar5 = (uint *)(*(int *)(param_1 + 0x10) + uVar4 * 8);
  uVar4 = *puVar5;
  lVar1 = (ulonglong)(local_18 - uVar4) * 1000000;
  iVar3 = (iStack_14 - (puVar5[1] + (uint)(local_18 < uVar4))) * 1000000 +
          (int)((ulonglong)lVar1 >> 0x20);
  iVar2 = *(int *)(param_1 + 0xc);
  bVar6 = *(uint *)(param_1 + 8) < (uint)lVar1;
  return (int)(iVar2 - (iVar3 + (uint)bVar6)) < 0 !=
         (SBORROW4(iVar2,iVar3) != SBORROW4(iVar2 - iVar3,(uint)bVar6));
}



void fn_006f5e08(undefined4 param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  uint local_60;
  int local_5c;
  int local_40;
  int iStack_3c;
  undefined1 auStack_38 [12];
  undefined4 local_2c;
  int iStack_28;
  
  iVar9 = *(int *)(*(int *)(*(int *)(param_2 + 4) + 4) + 0xc);
  if (iVar9 == 0) {
    fn_004b9b4c(param_1,DAT_008b64f8);
    return;
  }
  local_2c = param_1;
  iStack_28 = iVar9;
  if (*(int *)(iVar9 + 0x84) == 0) {
    fn_004b9b4c(param_1,DAT_008b64f8);
    return;
  }
  iVar6 = iVar9 + 0x5b8;
  if (*(char *)(iVar9 + 0x5c8) == '\0') {
    uVar12 = fn_006d06a8(*(int *)(iVar9 + 0x84),iVar6);
    svc_0x28();
    *(undefined8 *)(iVar9 + 0x5c0) = uVar12;
    *(undefined1 *)(iVar9 + 0x5c8) = 1;
  }
  else {
    fn_006d3d30(&local_60);
    svc_0x28();
    uVar7 = local_60 - *(uint *)(iVar9 + 0x5c0);
    uVar5 = local_5c - (*(int *)(iVar9 + 0x5c4) + (uint)(local_60 < *(uint *)(iVar9 + 0x5c0)));
    uVar3 = (ulonglong)uVar7 * 3 +
            ((ulonglong)
             (uint)(((int)uVar5 >> 0x1f) * -0x452cb512 +
                   (int)((ulonglong)uVar5 * 0xbad34aee >> 0x20)) << 0x20 |
            (ulonglong)uVar5 * 0xbad34aee & 0xffffffff) +
            CONCAT44(uVar5 * 3,(int)((ulonglong)uVar7 * 0xbad34aee >> 0x20));
    uVar7 = (uint)(uVar3 >> 0x20);
    iVar1 = (int)uVar7 >> 0x1f;
    lVar4 = (ulonglong)uVar7 * 0xd7b634db +
            CONCAT44(iVar1 * -0x2849cb25,(int)((uVar3 & 0xffffffff) * 0xd7b634db >> 0x20));
    uVar11 = (uint)((ulonglong)uVar7 * 0x431bde82);
    lVar2 = (uVar3 & 0xffffffff) * 0x431bde82;
    uVar10 = (uint)((ulonglong)lVar4 >> 0x20);
    uVar5 = (int)((ulonglong)lVar2 >> 0x20) + (uint)CARRY4((uint)lVar2,(uint)lVar4);
    iVar8 = ((int)uVar5 >> 0x1f) + ((int)uVar10 >> 0x1f) + (uint)CARRY4(uVar5,uVar10) +
            iVar1 * 0x431bde82 + (int)((ulonglong)uVar7 * 0x431bde82 >> 0x20) +
            (uint)CARRY4(uVar5 + uVar10,uVar11);
    uVar5 = uVar5 + uVar10 + uVar11 >> 0x12 | iVar8 * 0x4000;
    uVar7 = uVar5 + -iVar1;
    local_40 = uVar7 + local_60;
    iStack_3c = (iVar8 >> 0x12) + (uint)CARRY4(uVar5,-iVar1) + local_5c +
                (uint)CARRY4(uVar7,local_60);
    fn_004b9a2c(auStack_38,&local_40);
    fn_0014f510(iVar6,auStack_38);
    *(uint *)(iVar9 + 0x5c0) = local_60;
    *(int *)(iVar9 + 0x5c4) = local_5c;
  }
  fn_004b9b4c(local_2c,iVar6);
  return;
}



int fn_006f5d90(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *param_1 + param_2 * 0x1528;
  if (*(char *)(iVar1 + 0x1524) == '\0') {
    iVar1 = 0;
  }
  return iVar1;
}



undefined4 fn_006f5d18(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 0x1510;
  while( true ) {
    if (param_1 == iVar1) {
      return 0;
    }
    if (*(short *)(param_1 + 4) != 0) break;
    param_1 = param_1 + 0xa88;
  }
  return 1;
}



int fn_006f5ce4(int param_1)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = param_1 + 0x1510;
  while (param_1 != iVar2) {
    psVar1 = (short *)(param_1 + 4);
    param_1 = param_1 + 0xa88;
    if (*psVar1 != 0) {
      iVar3 = iVar3 + 1;
    }
  }
  return iVar3;
}



undefined4 fn_006f5bec(undefined4 param_1,undefined4 param_2,int param_3)

{
  short *psVar1;
  undefined4 uVar2;
  short local_20;
  short local_1e;
  short local_1c;
  short local_1a;
  
  psVar1 = (short *)fn_006b64a4(*(undefined4 *)(DAT_00897804 + 8));
  fn_00166824(&local_20,param_2);
  if (*psVar1 < local_20) {
    local_20 = 0;
    local_1e = local_1e + 1;
  }
  if (psVar1[1] < local_1e) {
    local_1e = 0;
    local_1c = local_1c + 1;
  }
  if (psVar1[2] < local_1c) {
    local_1c = 0;
    local_1a = local_1a + 1;
  }
  if (psVar1[3] < local_1a) {
    uVar2 = 0;
    local_1a = 0;
    if (param_3 != 0) {
      fn_00166824(param_3,param_2);
    }
  }
  else {
    uVar2 = 1;
    if (param_3 != 0) {
      fn_00166824(param_3,&local_20);
    }
  }
  return uVar2;
}



void fn_006f5508(undefined4 param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint local_90;
  uint local_8c;
  uint local_88;
  int local_84;
  undefined1 auStack_80 [72];
  int local_38;
  undefined4 *local_34;
  int local_30;
  undefined4 **local_2c;
  
  iVar5 = param_2[1];
  iVar7 = *param_2;
  iVar6 = iVar7;
  if (iVar7 != iVar5) {
    for (; iVar6 != iVar5; iVar6 = iVar6 + 8) {
      if (*(undefined4 **)(iVar6 + 4) != &DAT_008f9cf4) {
        piVar1 = *(undefined4 **)(iVar6 + 4) + -3;
        iVar4 = *piVar1;
        if ((iVar4 == -1) || ((piVar1 != &DAT_008f9ce8 && (*piVar1 = iVar4 + -1, iVar4 == 0)))) {
          fn_001008c4(*(int *)(iVar6 + 4) + -0xc,*(int *)(*(int *)(iVar6 + 4) + -8) + 8,0);
        }
      }
    }
    param_2[1] = param_2[1] - (iVar5 - iVar7 & 0xfffffff8U);
  }
  local_90 = 5;
  if ((uint)(param_2[2] - *param_2 >> 3) < 5) {
    uVar8 = param_2[1] - *param_2 >> 3;
    local_8c = uVar8 + (uVar8 >> 1) + (uVar8 >> 3);
    if (local_8c < uVar8 + 0x20) {
      local_8c = uVar8 + 0x20;
    }
    puVar3 = &local_8c;
    if (local_8c < 6) {
      puVar3 = &local_90;
    }
    uVar8 = *puVar3;
    iVar7 = fn_00100fc6(uVar8 << 3,0);
    iVar4 = param_2[1];
    iVar5 = iVar7;
    for (iVar6 = *param_2; iVar6 != iVar4; iVar6 = iVar6 + 8) {
      if (iVar5 != 0) {
        fn_0065a190(iVar5,iVar6);
      }
      iVar5 = iVar5 + 8;
    }
    iVar5 = param_2[1];
    for (iVar6 = *param_2; iVar6 != iVar5; iVar6 = iVar6 + 8) {
      if (*(undefined4 **)(iVar6 + 4) != &DAT_008f9cf4) {
        piVar1 = *(undefined4 **)(iVar6 + 4) + -3;
        iVar4 = *piVar1;
        if ((iVar4 == -1) || ((piVar1 != &DAT_008f9ce8 && (*piVar1 = iVar4 + -1, iVar4 == 0)))) {
          fn_001008c4(*(int *)(iVar6 + 4) + -0xc,*(int *)(*(int *)(iVar6 + 4) + -8) + 8,0);
        }
      }
    }
    fn_001008c4(*param_2,param_2[2] - *param_2 >> 3,0);
    iVar6 = *param_2;
    *param_2 = iVar7;
    param_2[1] = (param_2[1] - iVar6 & 0xfffffff8U) + iVar7;
    param_2[2] = iVar7 + uVar8 * 8;
  }
  iVar6 = fn_006c3b40(*(undefined4 *)(DAT_00897804 + 0x3c));
  uVar8 = 0;
  do {
    local_34 = &DAT_008f9cf4;
    iVar5 = iVar6 + uVar8 * 0x474;
    local_38 = iVar5;
    fn_00301f50(auStack_80,0x48);
    fn_0017821c(auStack_80,iVar5 + 0x20,0x48);
    uVar2 = fn_00100b58(auStack_80);
    if (uVar2 == 0) {
      piVar1 = local_34 + -3;
      iVar5 = *piVar1;
      if (iVar5 == 0) {
        local_34[-1] = 0;
        *(undefined2 *)local_34 = 0;
      }
      else {
        if ((local_34 != &DAT_008f9cf4) &&
           ((iVar5 == -1 || ((piVar1 != &DAT_008f9ce8 && (*piVar1 = iVar5 + -1, iVar5 == 0)))))) {
          fn_001008c4(local_34 + -3,local_34[-2] + 8,0);
        }
        local_34 = &DAT_008f9cf4;
      }
    }
    else {
      local_8c = 0;
      local_90 = uVar2;
      local_88 = uVar2;
      fn_00177c88(&local_34,0,local_34[-1],auStack_80);
    }
    fn_00797258(param_2,&local_38);
    fn_001588d4(&local_34);
    uVar8 = uVar8 + 1;
  } while (uVar8 < 3);
  iVar5 = fn_006c3b4c(*(undefined4 *)(DAT_00897804 + 0x3c));
  local_30 = iVar6 + 0x474;
  local_84 = iVar6 + 0x8e8;
  uVar8 = 0;
  do {
    iVar4 = iVar5 + uVar8 * 0x474;
    iVar7 = fn_001010c8(iVar6,iVar4,0x10);
    if (((iVar7 != 0) && (iVar7 = fn_001010c8(local_30,iVar4,0x10), iVar7 != 0)) &&
       (iVar7 = fn_001010c8(local_84,iVar4,0x10), iVar7 != 0)) {
      local_34 = &DAT_008f9cf4;
      local_38 = iVar4;
      fn_00301f50(auStack_80,0x48);
      fn_0017821c(auStack_80,iVar4 + 0x20,0x48);
      local_2c = &local_34;
      uVar2 = fn_00100b58(auStack_80);
      if (uVar2 == 0) {
        piVar1 = local_34 + -3;
        iVar7 = *piVar1;
        if (iVar7 == 0) {
          local_34[-1] = 0;
          *(undefined2 *)local_34 = 0;
        }
        else {
          if ((local_34 != &DAT_008f9cf4) &&
             ((iVar7 == -1 || ((piVar1 != &DAT_008f9ce8 && (*piVar1 = iVar7 + -1, iVar7 == 0)))))) {
            fn_001008c4(local_34 + -3,local_34[-2] + 8,0);
          }
          local_34 = &DAT_008f9cf4;
        }
      }
      else {
        local_8c = 0;
        local_90 = uVar2;
        local_88 = uVar2;
        fn_00177c88(local_2c,0,local_34[-1],auStack_80);
      }
      fn_00797258(param_2,&local_38);
      fn_001588d4(&local_34);
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 < 2);
  return;
}


