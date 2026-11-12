#include "006aba20_006abe98.h"



bool fn_006abe98(void)

{
  int iVar1;
  
  iVar1 = fn_006b4f84(*(undefined4 *)(DAT_00897804 + 0x18));
  return 0 < iVar1;
}



void fn_006abe60(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  uint in_fpscr;
  undefined4 uVar2;
  
  if (((-1 < (int)param_2) && (param_2 < 0x50)) &&
     (iVar1 = *(int *)(param_1 + param_2 * 0x2c + 0x8c), iVar1 != 0)) {
    uVar2 = VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
    *(undefined4 *)(iVar1 + 0x1b0) = uVar2;
  }
  return;
}



void fn_006abe40(void)

{
  int iVar1;
  
  iVar1 = fn_006f7a0c(DAT_008977e0);
  fn_006c3a50(*(undefined4 *)(iVar1 + 0x30));
  return;
}



void fn_006abe20(void)

{
  int iVar1;
  
  iVar1 = fn_006f7a0c(DAT_008977e0);
  fn_006c3a30(*(undefined4 *)(iVar1 + 0x30));
  return;
}



void fn_006abe0c(void)

{
  fn_002426a8(*(undefined4 *)(DAT_00897804 + 0x1c));
  return;
}



void fn_006abdf0(void)

{
  fn_006f7a84(DAT_008977e0);
  fn_006aba74();
  return;
}



undefined4 fn_006abd58(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  uint local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  if (*(int *)(param_1 + 0x78) != 0) {
    fn_00183718(&local_34,*(int *)(param_1 + 0x78),&DAT_006abdec);
    local_3c = local_20;
    uStack_38 = uStack_1c;
    uStack_4c = uStack_30;
    uStack_48 = uStack_2c;
    uStack_44 = uStack_28;
    uStack_40 = uStack_24;
    if (local_34 != 0) {
      uVar3 = 0;
      do {
        uVar1 = fn_006f6e30(&uStack_4c,uVar3);
        iVar2 = fn_003035b0(uVar1,param_2);
        if (iVar2 == 0) {
          return uVar1;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < local_34);
    }
  }
  return 0;
}



int fn_006abd08(void)

{
  int iVar1;
  
  iVar1 = fn_006f7a5c(DAT_008977e0);
  return iVar1 + 0x1c;
}



void fn_006abce8(void)

{
  fn_006f7a5c(DAT_008977e0);
  fn_00163890();
  return;
}



bool fn_006abcc0(void)

{
  int iVar1;
  
  iVar1 = fn_006b2a40(*(undefined4 *)(DAT_00897804 + 0x28));
  return 99 < iVar1;
}



void fn_006abc8c(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if ((param_2 != 0) &&
     (puVar1 = (undefined4 *)fn_00176d74(*(undefined4 *)(param_1 + 0xe50)),
     puVar1 != (undefined4 *)0x0)) {
    uVar2 = *puVar1;
  }
  fn_00144834(uVar2,param_3);
  return;
}



int fn_006abc40(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  while( true ) {
    iVar2 = param_1 + iVar1 * 0x2c;
    if (*(int *)(param_1 + 0x88) == *(int *)(iVar2 + 0x8c)) {
      return iVar1;
    }
    if (*(int *)(param_1 + 0x88) == *(int *)(iVar2 + 0xb8)) break;
    iVar1 = iVar1 + 2;
    if (0x4f < iVar1) {
      return -1;
    }
  }
  return iVar1 + 1;
}



void fn_006abc14(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if ((param_2 != 0) &&
     (puVar1 = (undefined4 *)fn_00176d74(*(undefined4 *)(param_1 + 0xe50)),
     puVar1 != (undefined4 *)0x0)) {
    uVar2 = *puVar1;
  }
  fn_00154ac8(uVar2);
  return;
}



void fn_006abc00(void)

{
  fn_002e2c10(*(undefined4 *)(DAT_00897804 + 0x2c));
  return;
}



void fn_006abbcc(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint in_fpscr;
  
  if ((((int)param_2 < 0) || (0x4f < param_2)) ||
     (piVar2 = *(int **)(param_1 + param_2 * 0x2c + 0x8c), piVar2 == (int *)0x0)) {
    return;
  }
  piVar2[0x72] = param_3;
  if (piVar2[0x6a] != 0) {
    if (param_3 == 1) {
      piVar2[0x6a] = 1;
      piVar2[0x6d] = piVar2[8];
      piVar2[0x6e] = piVar2[9];
      piVar2[0x6f] = piVar2[10];
      iVar1 = fn_001da77c(piVar2);
      if (iVar1 == 0) {
        piVar2[0x6b] = 0;
        (**(code **)(*piVar2 + 0x44))(piVar2,0,4);
      }
      else {
        piVar2[0x6b] = 1;
        uVar3 = fn_00163868(0x168);
        iVar1 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
        fn_0017fe34();
        piVar2[0x70] = iVar1;
        (**(code **)(*piVar2 + 0x44))(piVar2,6,4,0);
      }
      uVar3 = 0;
      piVar2[0x71] = 0;
    }
    else {
      uVar3 = 1;
      piVar2[0x6a] = -1;
    }
    fn_001dbc64(piVar2,uVar3);
    piVar2[0x6b] = -1;
  }
  return;
}



void fn_006abb9c(void)

{
  int iVar1;
  
  iVar1 = fn_006f7a0c(DAT_008977e0);
  if (*(int *)(iVar1 + 0x30) == 0) {
    return;
  }
  fn_006c3a84(*(int *)(iVar1 + 0x30));
  return;
}



void fn_006abb88(void)

{
  fn_006b2aa0(*(undefined4 *)(DAT_00897804 + 0x14));
  return;
}



void fn_006abae0(void)

{
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined1 local_18 [24];
  
  local_20 = 0;
  uStack_1c = 0x3f800000;
  fn_005f2d30(&local_20,local_18);
  return;
}



undefined4 fn_006aba8c(undefined4 param_1)

{
  int iVar1;
  
  fn_006f7a48(DAT_008977e0);
  iVar1 = fn_006a7d8c();
  if ((iVar1 == 0) ||
     ((iVar1 = fn_006aba20(param_1), iVar1 != 0 && (iVar1 = fn_00154ac8(0x3f), iVar1 == 0)))) {
    return 0;
  }
  return 1;
}



bool fn_006aba74(int param_1)

{
  return *(char *)(param_1 + 0x208) != -1;
}



undefined4 fn_006aba20(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (int)*(char *)(param_1 + 0x208);
  if (((iVar2 == -1 || iVar2 == 4) ||
      (iVar2 = fn_0025988c(*(undefined4 *)(param_1 + iVar2 * 4 + 0x1f8)), iVar2 != 3 && iVar2 != 4)
      ) || (iVar2 = fn_006f7358(DAT_008977e0), iVar2 != 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


