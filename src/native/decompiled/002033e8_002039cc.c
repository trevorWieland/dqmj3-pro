#include "002033e8_002039cc.h"



void fn_002039cc(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(&DAT_007c47c0 + param_2 * 8);
  *param_1 = *(undefined4 *)(&DAT_007c47bc + param_2 * 8);
  param_1[1] = uVar1;
  return;
}



void fn_00203954(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_2 == param_3) {
    uVar1 = *(undefined4 *)(&DAT_007c485c + param_2 * 8);
    uVar2 = *(undefined4 *)(&DAT_007c4860 + param_2 * 8);
  }
  else {
    uVar1 = 0;
    uVar2 = 0;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



void fn_00203898(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  ushort local_18;
  byte local_16;
  
  uVar1 = fn_006b86c4(*(undefined4 *)(DAT_00897804 + 0x30));
  fn_0019bc50(&local_18,uVar1);
  uVar2 = (uint)local_18;
  if ((0x96 < uVar2) || (-1 < param_1)) {
    uVar3 = uVar2 + param_1 & 0xffff;
    if ((uVar2 < 0x96) || (0x95 < uVar3)) {
      if (9999 < uVar3) {
        uVar3 = 9999;
      }
    }
    else {
      uVar3 = 0x96;
    }
    uVar2 = 0x13;
    local_18 = (ushort)uVar3;
    do {
      if (*(ushort *)(&DAT_007c4794 + uVar2 * 2) <= uVar3) break;
      uVar2 = uVar2 - 1 & 0xff;
    } while (uVar2 != 0);
    if (local_16 < uVar2) {
      local_16 = (byte)uVar2;
    }
    fn_0019bc44(*(undefined4 *)(DAT_00897804 + 0x30),&local_18);
  }
  return;
}



void fn_00203884(void)

{
  fn_006b86c4(*(undefined4 *)(DAT_00897804 + 0x30));
  return;
}



void fn_00203874(void)

{
  fn_005f3a1c();
  fn_002feef8();
  return;
}



void fn_00203804(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while ((iVar1 = fn_0016678c(param_1,iVar2), iVar1 == 0 ||
         (iVar1 = fn_006ec8f0(param_1,iVar2), iVar1 != param_2))) {
    iVar2 = iVar2 + 1;
    if (0x1f < iVar2) {
      return;
    }
  }
  if (iVar2 == 0x21) {
    return;
  }
  fn_0016383c(param_1,iVar2,param_3);
  return;
}



void fn_00203728(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  piVar1 = *(int **)(param_1 + 0x10);
  if (*(int **)(param_1 + 0x14) != piVar1) {
    piVar5 = *(int **)(param_1 + 0x14);
    piVar3 = piVar1;
    do {
      if (*piVar3 == param_2) {
        if (piVar1 != piVar5) {
          piVar1 = piVar3 + 1;
          if (piVar5 != piVar1) {
            if (piVar5 < piVar1) {
              for (; piVar1 != piVar5; piVar1 = piVar1 + 1) {
                *piVar3 = *piVar1;
                piVar3 = piVar3 + 1;
              }
            }
            else {
              iVar2 = (int)piVar5 - (int)piVar1;
              if (0 < iVar2) {
                piVar5 = piVar3;
                piVar4 = piVar3 + -1;
                if (iVar2 * 0x20000000 < 0) {
                  *piVar3 = *piVar1;
                  piVar5 = piVar1;
                  piVar4 = piVar3;
                }
                for (iVar2 = iVar2 >> 3; iVar2 != 0; iVar2 = iVar2 + -1) {
                  piVar4[1] = piVar5[1];
                  piVar5 = piVar5 + 2;
                  piVar4 = piVar4 + 2;
                  *piVar4 = *piVar5;
                }
              }
            }
          }
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -4;
        }
        break;
      }
      piVar3 = piVar3 + 1;
    } while (piVar5 != piVar3);
  }
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



int fn_00203634(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  
  iVar4 = 0;
  while ((iVar1 = fn_0016678c(param_1,iVar4), iVar1 == 0 ||
         (iVar1 = fn_006ec8f0(param_1,iVar4), iVar1 != param_2))) {
    iVar4 = iVar4 + 1;
    if (0x1f < iVar4) {
LAB_00203690:
      iVar4 = fn_001912b0(param_1,param_2);
      uVar3 = 0;
      if (iVar4 == 2) {
        iVar1 = *(int *)(param_1 + 0xc);
        iVar4 = iVar1 + 1;
        if (0xb < iVar4) {
          uVar3 = 8;
        }
        *(int *)(param_1 + 0xc) = iVar4;
        if (0xb < iVar4) {
          *(undefined4 *)(param_1 + 0xc) = uVar3;
        }
      }
      else {
        iVar1 = *(int *)(param_1 + 8);
        *(int *)(param_1 + 8) = iVar1 + 1;
        if (7 < iVar1 + 1) {
          *(undefined4 *)(param_1 + 8) = 0;
        }
      }
      uVar2 = fn_0016678c(param_1,0xd);
      bVar5 = uVar2 == 0;
      if (bVar5) {
        uVar2 = (uint)*(byte *)(param_1 + 0x38);
      }
      if (bVar5 && uVar2 == 0) {
        fn_0015a394(param_1,iVar1,param_2);
      }
      return iVar1;
    }
  }
  if (iVar4 != 0x21) {
    fn_0016383c(param_1,iVar4,0);
  }
  goto LAB_00203690;
}



undefined4 fn_002035e4(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_0016678c(param_1,0xe);
  if (iVar1 == 0) {
    iVar1 = 0;
    while (iVar2 = fn_0016678c(param_1,iVar1), iVar2 == 0) {
      iVar1 = iVar1 + 1;
      if (6 < iVar1) {
        return 0;
      }
    }
  }
  return 1;
}



void fn_00203558(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    fn_0016383c(param_1,iVar1,param_2);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 8);
  iVar1 = 8;
  do {
    fn_0016383c(param_1,iVar1,param_2);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0xc);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 8;
  return;
}



undefined4 fn_00203458(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    fn_0016383c(param_1,iVar1,4);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 8);
  iVar1 = 8;
  do {
    fn_0016383c(param_1,iVar1,4);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0xc);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 8;
  if (*(char *)(param_1 + 0x39) != '\0') {
    iVar1 = fn_0016678c(param_1,0xc);
    if (iVar1 != 0) {
      fn_00128788(param_1,0xc,1,0x12);
      *(undefined4 *)(param_1 + 0x34) = 0x18;
      goto LAB_00203548;
    }
    if ((*(char *)(param_1 + 0x39) != '\0') && (iVar1 = fn_0016678c(param_1,0xf), iVar1 != 0)) {
      fn_00128788(param_1,0xf,1,0x12);
      *(undefined4 *)(param_1 + 0x34) = 0x18;
      goto LAB_00203548;
    }
  }
  *(undefined4 *)(param_1 + 0x34) = 1;
LAB_00203548:
  *(undefined4 *)(param_1 + 0x30) = param_2;
  *(undefined1 *)(param_1 + 0x38) = 1;
  return 0xd;
}



void fn_00203440(void)

{
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



int fn_002033e8(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = *(int *)(param_1 + 0x14);
  *(int *)(param_1 + 0x14) = iVar2 + 1;
  if (0x17 < iVar2 + 1) {
    *(undefined4 *)(param_1 + 0x14) = 0x14;
  }
  uVar1 = fn_0016678c(param_1,0xd);
  bVar3 = uVar1 == 0;
  if (bVar3) {
    uVar1 = (uint)*(byte *)(param_1 + 0x38);
  }
  if (bVar3 && uVar1 == 0) {
    fn_0015a394(param_1,iVar2,param_2);
  }
  return iVar2;
}


