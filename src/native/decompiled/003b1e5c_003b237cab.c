#include "003b1e5c_003b237cab.h"



bool fn_003b21d0(int param_1)

{
  return *(int *)(param_1 + 0x34) != *(int *)(param_1 + 0x38);
}



void fn_003b20c4(int param_1,int param_2,int *param_3)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  if (*(short *)(param_2 + 4) == 0) {
    return;
  }
  iVar6 = (*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28)) / 0x28;
  if (0 < iVar6) {
    param_1 = *(int *)(param_1 + 0x28);
  }
  iVar4 = 0;
  if (0 < iVar6) {
    do {
      if (*(short *)(param_1 + iVar4 * 0x28) == *(short *)(param_2 + 4)) {
        param_1 = param_1 + iVar4 * 0x28;
        goto LAB_003b2130;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar6);
  }
  param_1 = 0;
LAB_003b2130:
  sVar1 = *(short *)(param_2 + 2);
  if (sVar1 == 9 || sVar1 == 0xb) {
    *param_3 = (int)*(short *)(param_1 + 8);
  }
  else {
    if (sVar1 == 0x15) {
      sVar1 = *(short *)(param_1 + 8);
      piVar5 = param_3 + -1;
      iVar6 = 2;
      psVar3 = (short *)(param_1 + 6);
      do {
        sVar2 = psVar3[2];
        piVar5[1] = (int)sVar1;
        sVar1 = psVar3[3];
        iVar6 = iVar6 + -1;
        piVar5 = piVar5 + 2;
        *piVar5 = (int)sVar2;
        psVar3 = psVar3 + 2;
      } while (iVar6 != 0);
    }
    else {
      if (sVar1 != 0x17) {
        return;
      }
      sVar1 = *(short *)(param_1 + 8);
      piVar5 = param_3 + -1;
      iVar6 = 2;
      psVar3 = (short *)(param_1 + 6);
      do {
        sVar2 = psVar3[2];
        piVar5[1] = (int)sVar1;
        sVar1 = psVar3[3];
        iVar6 = iVar6 + -1;
        piVar5 = piVar5 + 2;
        *piVar5 = (int)sVar2;
        psVar3 = psVar3 + 2;
      } while (iVar6 != 0);
    }
    param_3[4] = (int)*(short *)(param_1 + 0x10);
  }
  return;
}


