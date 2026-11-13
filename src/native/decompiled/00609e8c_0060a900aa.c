#include "00609e8c_0060a900aa.h"



void fn_0060a098(void)

{
                    /* WARNING: Subroutine does not return */
  fn_006ba250();
}



int fn_00609fb4(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  undefined4 uVar6;
  bool bVar7;
  bool bVar8;
  
  iVar2 = fn_00609e8c();
  if (iVar2 == 0) {
    sVar1 = *(short *)(param_1 + 0xc);
    sVar5 = *(short *)(param_2 + 0xc);
    if (sVar1 == sVar5) {
      sVar1 = *(short *)(param_1 + 0xe);
      sVar5 = *(short *)(param_2 + 0xe);
    }
    iVar2 = fn_00661094();
    iVar3 = fn_00661094();
    if (iVar3 == iVar2) {
      uVar6 = *(undefined4 *)(DAT_00897804 + 0xc);
      bVar7 = *(int *)(param_1 + 4) != 0;
      iVar3 = 0;
      if (bVar7) {
        iVar3 = *(int *)(param_2 + 4);
      }
      iVar4 = fn_00661308((int)sVar1);
      iVar2 = fn_00661308((int)sVar5);
      bVar8 = iVar4 == iVar2;
      if (!bVar8 || (!bVar7 || iVar3 == 0)) {
        iVar2 = iVar2 - iVar4;
      }
      if (bVar8 && (bVar7 && iVar3 != 0)) {
        iVar2 = fn_006b8390(uVar6,*(undefined4 *)(param_1 + 4));
        iVar3 = fn_006b8390(uVar6,*(undefined4 *)(param_2 + 4));
        iVar2 = (uint)*(byte *)(iVar3 + 0x2e) - (uint)*(byte *)(iVar2 + 0x2e);
      }
    }
    else {
      iVar2 = iVar2 - iVar3;
    }
  }
  return iVar2;
}



undefined4 fn_00609e8c(int param_1,int param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  
  iVar5 = *(int *)(param_1 + 4);
  if (iVar5 != 0) {
    param_3 = *(uint *)(param_1 + 8);
  }
  uVar6 = *(undefined4 *)(DAT_00897804 + 0xc);
  iVar2 = *(int *)(param_2 + 4);
  if (iVar5 == 0 || param_3 == 0) {
    if (iVar2 != 0) {
      param_3 = *(uint *)(param_2 + 8);
    }
    if (iVar2 == 0 || param_3 == 0) {
      if (iVar5 != 0) {
        param_3 = *(uint *)(param_1 + 8);
      }
      if (iVar5 == 0 || param_3 == 0) {
        return 0;
      }
      iVar5 = 0;
      if (iVar2 != 0) {
        iVar5 = *(int *)(param_2 + 8);
      }
      if (iVar2 == 0 || iVar5 == 0) {
        return 0;
      }
    }
    else {
      if (iVar5 != 0) {
        iVar2 = *(int *)(param_1 + 8);
      }
      if (iVar5 == 0 || iVar2 == 0) {
        return 1;
      }
    }
  }
  else {
    iVar5 = 0;
    if (iVar2 != 0) {
      iVar5 = *(int *)(param_2 + 8);
    }
    if (iVar2 == 0 || iVar5 == 0) {
      return 0xffffffff;
    }
  }
  iVar5 = fn_006b8390(uVar6);
  iVar2 = fn_006b8390(uVar6,*(undefined4 *)(param_1 + 8));
  iVar3 = fn_006b8390(uVar6,*(undefined4 *)(param_2 + 4));
  uVar4 = fn_006b8390(uVar6,*(undefined4 *)(param_2 + 8));
  bVar1 = *(byte *)(iVar5 + 0x2e);
  if (bVar1 >= 10) {
    param_3 = (uint)*(byte *)(iVar2 + 0x2e);
  }
  if (bVar1 < 10 || param_3 < 10) {
    bVar7 = 9 < *(byte *)(iVar3 + 0x2e);
    if (bVar7) {
      uVar4 = (uint)*(byte *)(uVar4 + 0x2e);
    }
    if (bVar7 && 9 < uVar4) {
      if (9 < bVar1) {
        uVar4 = (uint)*(byte *)(iVar2 + 0x2e);
      }
      if (9 >= bVar1 || uVar4 < 10) {
        return 1;
      }
    }
  }
  else {
    bVar7 = 9 < *(byte *)(iVar3 + 0x2e);
    if (bVar7) {
      uVar4 = (uint)*(byte *)(uVar4 + 0x2e);
    }
    if (!bVar7 || uVar4 < 10) {
      return 0xffffffff;
    }
  }
  return 0;
}


