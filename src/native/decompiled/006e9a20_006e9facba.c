#include "006e9a20_006e9facba.h"



undefined4 fn_006e9e4c(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0xc);
  if (iVar1 != 0x6752) {
    if (iVar1 < 0x6752) {
      if (iVar1 == 0x190a) {
switchD_006e9ec8_caseD_6758:
        return 9;
      }
      if (iVar1 < 0x190a) {
        if (iVar1 == 0x1906) {
          return 8;
        }
        if (iVar1 == 0x1907) {
          return 1;
        }
        if ((iVar1 != 0x1908) && (iVar1 == 0x1909)) {
          return 7;
        }
      }
      else if ((iVar1 != 0x6040 && iVar1 != 0x6050) && (iVar1 == 0x6700)) {
        return 6;
      }
    }
    else {
      switch(iVar1) {
      case 0x6754:
        return 1;
      case 0x6756:
        return 8;
      case 0x6757:
        return 7;
      case 0x6758:
        goto switchD_006e9ec8_caseD_6758;
      case 0x6759:
        return 6;
      }
    }
  }
  return 0;
}



undefined4 fn_006e9e24(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x218);
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x3c8);
  }
  return uVar1;
}



undefined4 fn_006e9cf4(int param_1,uint param_2,int param_3)

{
  if (param_3 != 0) {
    if (*(byte *)(param_1 + 8) == param_2) {
      return 1;
    }
    if (param_3 == 1) goto LAB_006e9d24;
  }
  if (*(byte *)(param_1 + 9) == param_2) {
    return 1;
  }
  if (param_3 == 2) {
    return 0;
  }
LAB_006e9d24:
  if (*(byte *)(param_1 + 10) == param_2) {
    return 1;
  }
  return 0;
}


