#include "00519904_00551360bb.h"



int * fn_00551360(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  undefined1 auStack_2c [24];
  
  if (param_2 == 0x316e6170) {
    iVar1 = (**(code **)(*DAT_0089a918 + 8))(DAT_0089a918,0xa4,4);
    if (iVar1 != 0) {
      piVar2 = (int *)fn_0054ce60(iVar1,param_3,param_5);
      return piVar2;
    }
  }
  else if (param_2 < 0x316e6170) {
    if (param_2 == 0x31636970) {
      iVar1 = (**(code **)(*DAT_0089a918 + 8))(DAT_0089a918,0xc0,4);
      if (iVar1 != 0) {
        piVar2 = (int *)fn_005530f8(iVar1,param_3,param_4,param_5);
        return piVar2;
      }
    }
    else if (param_2 == 0x31646e62) {
      iVar1 = (**(code **)(*DAT_0089a918 + 8))(DAT_0089a918,0xa4,4);
      if (iVar1 != 0) {
        piVar2 = (int *)fn_0054ce60(iVar1,param_3,param_5);
        *piVar2 = (int)&PTR_LAB_00857e68;
        return piVar2;
      }
    }
    else if ((param_2 == 0x31646e77) &&
            (iVar1 = (**(code **)(*DAT_0089a918 + 8))(DAT_0089a918,0xd8,4), iVar1 != 0)) {
      piVar2 = (int *)fn_00552894(iVar1,param_3,param_4,param_5);
      return piVar2;
    }
  }
  else if (param_2 == 0x31747270) {
    iVar1 = (**(code **)(*DAT_0089a918 + 8))(DAT_0089a918,0xb0,4);
    if (iVar1 != 0) {
      piVar2 = (int *)fn_0054ce60(iVar1,param_3,param_5);
      *piVar2 = (int)&PTR_LAB_00857bcc;
      piVar2[0x29] = 0;
      piVar2[0x2a] = 0;
      piVar2[0x2b] = 0;
      return piVar2;
    }
  }
  else if (param_2 == 0x31747874) {
    iVar1 = (**(code **)(*DAT_0089a918 + 8))(DAT_0089a918,0x100,4);
    piVar2 = (int *)0x0;
    if (iVar1 != 0) {
      piVar2 = (int *)fn_00553f04(iVar1,param_3,param_4,param_5,auStack_2c);
    }
    (**(code **)(*piVar2 + 0x54))(piVar2,param_5,auStack_2c);
    return piVar2;
  }
  return (int *)0x0;
}


