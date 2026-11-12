#include "006f38c0_006f3f24b.h"



undefined4 fn_006f3f24(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  while( true ) {
    iVar2 = (int)*(short *)(param_1 + iVar1 * 2 + 0x284);
    if (0x21e < iVar2 - 1U) {
      return 0;
    }
    if ((iVar2 == 0x86 || iVar2 == 0x87) || iVar2 == 0x88) break;
    iVar1 = iVar1 + 1;
    if (0x4b < iVar1) {
      return 0;
    }
  }
  return 1;
}



undefined4 fn_006f3e88(undefined4 param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  while( true ) {
    sVar1 = *(short *)(param_2 + iVar2 * 2 + 0x284);
    iVar3 = (int)sVar1;
    if (0x21e < iVar3 - 1U) {
      return 0;
    }
    if (iVar3 == 6) break;
    if (iVar3 < 7) {
      switch(sVar1) {
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
        goto switchD_006f3ec0_caseD_1;
      }
    }
    else {
      if (iVar3 == 0x60) {
        return 1;
      }
      if (iVar3 < 0x61) {
        if (iVar3 == 7 || iVar3 == 0x5f) {
          return 1;
        }
      }
      else if (iVar3 == 0x61 || iVar3 == 0x62) {
        return 1;
      }
    }
    iVar2 = iVar2 + 1;
    if (0x4b < iVar2) {
      return 0;
    }
  }
switchD_006f3ec0_caseD_1:
  return 1;
}



undefined4 fn_006f3e1c(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  while( true ) {
    iVar2 = (int)*(short *)(param_2 + iVar1 * 2 + 0x284);
    if (0x21e < iVar2 - 1U) {
      return 0;
    }
    if ((iVar2 == 0x46 || iVar2 == 0x87) || iVar2 == 0x88) break;
    iVar1 = iVar1 + 1;
    if (0x4b < iVar1) {
      return 0;
    }
  }
  return 1;
}



int fn_006f3da8(int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  
  sVar1 = *(short *)(param_1 + 0x30);
  sVar2 = *(short *)(param_1 + 0x3c);
  sVar3 = *(short *)(param_1 + 0x32);
  sVar4 = *(short *)(param_1 + 0x3e);
  sVar5 = *(short *)(param_1 + 0x36);
  sVar6 = *(short *)(param_1 + 0x42);
  sVar7 = *(short *)(param_1 + 0x34);
  sVar8 = *(short *)(param_1 + 0x40);
  iVar9 = fn_00176e70(param_1);
  iVar10 = fn_00176dc0(param_1);
  return iVar9 + iVar10 * 2 + (short)(sVar2 + sVar1) * 2 + (int)(short)(sVar3 + sVar4) +
         (int)(short)(sVar7 + sVar8) + (int)(short)(sVar5 + sVar6);
}


