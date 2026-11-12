#include "00432620_00432fa0.h"



void fn_00432fa0(int param_1)

{
  uint uVar1;
  
  fn_0042fe80();
  uVar1 = *(uint *)(*(int *)(param_1 + 0x114) + 0xc);
  if ((uVar1 & 8) != 0) {
    fn_0043243c();
    return;
  }
  if ((uVar1 & 4) == 0) {
    return;
  }
  fn_00433620(param_1);
  return;
}



void fn_00432f2c(int *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (param_2 == 0) {
    uVar4 = 0;
    uVar3 = 1;
    uVar5 = 0;
    uVar2 = 1;
  }
  else {
    uVar5 = 0xffffffff;
    uVar2 = 3;
    uVar4 = 5;
    uVar3 = 8;
  }
  fn_0031f8fc(param_1[0x3c],uVar2,uVar3,uVar4,uVar5);
  iVar1 = param_1[0x3c];
  *(char *)(iVar1 + 0x85) = (char)param_2;
  fn_0031ee10(iVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00432f9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x198))(param_1,param_2 ^ 1);
  return;
}



void fn_00432df4(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  ulonglong uVar7;
  
  uVar7 = (ulonglong)param_5;
  if (param_1[0x19] == 7) {
    iVar2 = param_1[0x48];
    *(undefined1 *)(iVar2 + 0x46) = 0;
    iVar5 = 0;
    do {
      if (iVar5 != 0) {
        iVar2 = param_1[0x47];
      }
      if (iVar5 == 0 || iVar2 == 0) {
        fn_002b20a4(param_1[0x46],0);
        uVar3 = *(undefined4 *)(param_1[0x46] + 0x1c);
        pcVar4 = *(code **)(*param_1 + 0x168);
      }
      else {
        fn_002b20a4(iVar2,0);
        pcVar4 = *(code **)(*param_1 + 0x168);
        uVar3 = *(undefined4 *)(param_1[0x47] + 0x1c);
      }
      iVar2 = (*pcVar4)(param_1,uVar3);
      param_5 = (uint)uVar7;
      iVar5 = iVar5 + 1;
    } while (iVar5 < 2);
  }
  fn_004309e8(param_1,param_2,param_3,param_4,param_5);
  if (param_1[0x19] == 7) {
    *(undefined1 *)(param_1[0x48] + 0x46) = 1;
    (**(code **)(*(int *)param_1[0x48] + 0x2c))((int *)param_1[0x48],param_3,0);
    fn_004323d8(param_1,param_3,1);
  }
  if (5 < param_2) {
    (**(code **)(*param_1 + 400))(param_1,0);
  }
  cVar1 = (char)param_1[0x3f];
  bVar6 = cVar1 == '\x01';
  if (bVar6) {
    cVar1 = *(char *)((int)param_1 + 0xe5);
  }
  if ((bVar6 && cVar1 == '\0') && (iVar2 = param_1[0x3c], iVar2 != 0)) {
    *(bool *)(iVar2 + 0x7f) = param_2 == 1;
    fn_0031ef00(iVar2,0,0);
    return;
  }
  return;
}



void fn_0043280c(int param_1,int *param_2)

{
  byte bVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [8];
  
  bVar1 = *(byte *)(*(int *)(param_1 + 0x114) + 0xc);
  bVar8 = (bVar1 & 0x70) != 0;
  if (((bVar1 & 1) != 0 || bVar8) &&
     (puVar2 = (uint *)fn_002b0948(*(undefined4 *)(DAT_00897804 + 0x10),
                                    *(undefined4 *)(param_1 + 0x124)),
     (*puVar2 & bVar1 & 1) != 0 || bVar8)) {
    iVar6 = 0;
    iVar7 = 0;
    do {
      if ((bVar1 & 1) == 0) {
        uVar3 = fn_00144df4(*(undefined4 *)(DAT_00897804 + 0xc),iVar6);
      }
      else {
        uVar3 = puVar2[iVar6 + 7];
      }
      if (uVar3 != 0) {
        uVar4 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),uVar3);
        fn_0020bbc4(auStack_30,uVar4);
        *(uint *)(*param_2 + iVar7 * 4) = uVar3;
        fn_006bfe90(auStack_2c);
        iVar5 = fn_001cab7c();
        iVar7 = iVar7 + iVar5;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 4);
  }
  return;
}



void fn_00432620(undefined4 param_1)

{
  uint uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined1 auStack_130 [240];
  uint local_40;
  uint local_3c;
  int local_38;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [8];
  
  iVar5 = fn_002e8cf0();
  fn_00301f50(auStack_130,0xf0);
  iVar8 = 2;
  iVar6 = iVar5 + 0x60;
  do {
    fn_0017821c(iVar6 + 0xf0,auStack_130,0xf0);
    iVar6 = iVar6 + 0x1e0;
    fn_0017821c(iVar6,auStack_130,0xf0);
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  iVar6 = fn_002c11d0(param_1,1,0);
  fn_0079e0cc(&local_40,iVar6 + 4);
  iVar6 = 0;
  uVar9 = 0;
  if ((int)(local_3c - local_40) >> 2 != 0) {
    do {
      uVar1 = (int)(local_3c - local_40) >> 2;
      if (uVar1 <= uVar9) {
        fn_002ff628(9,&DAT_008c760d,&DAT_008c760d,uVar9,uVar1);
      }
      iVar8 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),*(undefined4 *)(local_40 + uVar9 * 4)
                          );
      if (iVar8 != 0) {
        iVar7 = iVar5 + 0x150 + iVar6 * 0xf0;
        fn_0017821c(iVar7,iVar8,0xf0);
        *(undefined4 *)(iVar7 + 0xe0) = 0;
        *(undefined4 *)(iVar7 + 0xe4) = 0;
        *(undefined4 *)(iVar7 + 0xe8) = 0;
        *(undefined4 *)(iVar7 + 0xec) = 0;
        fn_0020bbc4(auStack_30,iVar7);
        sVar2 = fn_006bf5bc(auStack_2c);
        sVar4 = sVar2;
        sVar3 = fn_006c0028(auStack_2c);
        if (sVar4 <= sVar3) {
          sVar3 = sVar2;
        }
        *(short *)(iVar7 + 0x22) = sVar3;
        sVar4 = fn_006bf5c8(auStack_2c);
        sVar3 = fn_006c0114(auStack_2c);
        if (sVar4 <= sVar3) {
          sVar3 = sVar4;
        }
        *(short *)(iVar7 + 0x24) = sVar3;
        iVar6 = iVar6 + 1;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (uint)((int)(local_3c - local_40) >> 2));
  }
  uVar9 = local_40;
  if (local_3c < local_40) {
    do {
      uVar9 = uVar9 + 4;
    } while (uVar9 != local_3c);
  }
  fn_001008c4(local_40,(int)(local_38 - local_40) >> 2,0);
  return;
}


