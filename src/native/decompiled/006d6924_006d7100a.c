#include "006d6924_006d7100a.h"



undefined8 fn_006d6d3c(undefined4 *param_1)

{
  return CONCAT44(*param_1,(uint)*(ushort *)(param_1 + 1));
}



void fn_006d6ce0(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = *param_1;
  fn_004f07b8(param_2,(char *)&DAT_006d6d2c,uVar1 >> 0x18,(uVar1 & 0xff0000) >> 0x10,
               (uVar1 & 0xff00) >> 8,uVar1 & 0xff,(short)param_1[1]);
  return;
}



undefined4 fn_006d6c60(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = param_1 + 0x174;
  fn_004edc34(iVar2);
  uVar1 = 0;
  do {
    if (*(int *)(param_1 + uVar1 * 0x14 + 0x3c) != 0) {
      fn_004edc70(iVar2);
      return 1;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x10);
  fn_004edc70(iVar2);
  return 0;
}



int fn_006d6ba4(int param_1)

{
  int iVar1;
  uint local_38 [10];
  
  iVar1 = fn_0051f5ac(local_38);
  if (iVar1 < 0) {
    iVar1 = *(int *)(param_1 + 0x48);
  }
  else {
    iVar1 = (local_38[0] & 0xffff0000) + (local_38[0] & 0xffff);
  }
  return iVar1;
}



uint fn_006d6ae0(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = (uint)*(byte *)(*(int *)(DAT_008bf504 + 0x14) + 0xf);
  if (uVar4 != 0xff) {
    iVar1 = fn_006d5cf0();
    if (iVar1 == 0) {
      uVar2 = fn_006d67fc(*(undefined4 *)(DAT_008bf504 + 0x14),0);
    }
    else {
      uVar2 = fn_006d6690();
    }
    uVar3 = 0;
    do {
      if ((uVar4 != uVar3 + 1) && ((uVar2 & 1 << (uVar3 & 0xff)) != 0)) {
        return uVar3 + 1 & 0xff;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0xc);
  }
  return 0xff;
}



undefined2 fn_006d6aa8(int param_1,int param_2)

{
  if (param_2 - 1U < 0xc) {
    return *(undefined2 *)(*(int *)(param_1 + 8) + param_2 * 2 + -2);
  }
  return *(undefined2 *)(*(int *)(DAT_008bf504 + 0x14) + 0x42);
}



uint fn_006d6924(int param_1,undefined4 param_2,int param_3,int param_4,uint param_5,
                 undefined1 *param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int unaff_r8;
  uint uVar6;
  
  *param_6 = 0;
  if (param_4 != 0 || param_3 != *(int *)(param_1 + 0x48)) {
    if (param_5 != 0) {
      unaff_r8 = *(int *)(param_1 + 4);
    }
    uVar6 = 0;
    uVar1 = 0;
    if (param_5 != 0) {
      do {
        piVar4 = (int *)(unaff_r8 + uVar1 * 0x10 + 8);
        iVar3 = *piVar4;
        iVar5 = piVar4[1];
        if (iVar3 == param_3 && iVar5 == param_4) {
          *param_6 = 1;
          return (uint)*(byte *)(*(int *)(param_1 + 4) + uVar1 * 0x10 + 1);
        }
        if (iVar3 != *(int *)(param_1 + 0x48) || iVar5 != 0) {
          uVar6 = uVar6 | 1 << (uVar1 & 0xff);
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < param_5);
    }
    if (param_5 != 0) {
      uVar1 = param_5 & 1;
      uVar2 = 0;
      if (uVar1 != 0) {
        do {
          if ((uVar6 & 1 << (uVar2 & 0xff)) == 0) {
            return uVar2 + 1 & 0xff;
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < uVar1);
      }
      while( true ) {
        if (param_5 <= uVar1) {
          return 0xff;
        }
        if ((uVar6 & 1 << (uVar1 & 0xff)) == 0) break;
        uVar2 = uVar1 + 1;
        uVar1 = uVar1 + 2;
        if ((uVar6 & 1 << (uVar2 & 0xff)) == 0) {
LAB_006d6a30:
          return uVar1 & 0xff;
        }
      }
      uVar1 = uVar1 + 1;
      goto LAB_006d6a30;
    }
  }
  return 0xff;
}


