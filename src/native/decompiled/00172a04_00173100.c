#include "00172a04_00173100.h"



void fn_00173100(int param_1,int param_2)

{
  fn_0017d90c(param_1 + 4,param_2 + 0x1b0);
  if (param_2 == 0) {
    return;
  }
  fn_0017f0ec(param_2);
  fn_0017f108(param_1,param_2);
  return;
}



void fn_00173078(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 2;
  if (param_2 == 0) {
    fn_0018b010();
  }
  else if (param_2 == 1) {
    uVar2 = 3;
    fn_0018b010();
  }
  else if (param_2 == 2 || param_2 == 3) {
    uVar2 = 1;
  }
  if (*(code **)(param_3 + 0x1a0) != (code *)0x0) {
    (**(code **)(param_3 + 0x1a0))(param_3,uVar2,*(undefined4 *)(param_3 + 0x1a4));
  }
  *(undefined4 *)(param_3 + 0x1a8) = 0;
  *(undefined1 *)(param_3 + 0x138) = 0;
  *(undefined1 *)(param_3 + 0x139) = 0;
  *(undefined1 *)(param_3 + 0x13a) = 0;
  iVar1 = fn_00152724();
  fn_0017d90c(iVar1 + 4,param_3 + 0x1b0);
  if (param_3 == 0) {
    return;
  }
  fn_0017f0ec(param_3);
  fn_0017f108(iVar1,param_3);
  return;
}



void fn_00173040(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)(param_1 + 8)) {
    do {
      piVar2 = (int *)*piVar1;
      fn_0017ed40(piVar1 + -0x6c,1);
      piVar1 = piVar2;
    } while (piVar2 != (int *)(param_1 + 8));
  }
  return;
}



undefined * fn_00172fc4(void)

{
  int iVar1;
  
  if (((DAT_008c3584 & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008c3584), iVar1 != 0)) {
    fn_00152680(&DAT_008f2770);
  }
  return &DAT_008f2770;
}



uint fn_00172f98(void)

{
  DAT_008c3594 = DAT_008c3594 * 0x19660d + 0x3c6ef35f;
  return DAT_008c3594 >> 0x10;
}



void fn_00172f4c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_10;
  
  local_10 = param_4;
  while (iVar1 = fn_001585d4(param_1,&local_10), iVar1 != 0) {
    fn_0017dfc4(local_10);
    coproc_moveto_Data_Memory_Barrier(0);
    fn_001675c4(param_1 + 0xb4,local_10);
  }
  return;
}



int fn_00172edc(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1 + 0x2c;
  fn_00170704(iVar2);
  if (*(int *)(param_1 + param_2 * 0xc) == 0) {
    fn_001707b4(iVar2);
    return 0;
  }
  iVar1 = *(int *)(param_1 + param_2 * 0xc + 4);
  if (param_3 != 0) {
    fn_00150c1c();
  }
  fn_001707b4(iVar2);
  return iVar1 + -4;
}



undefined * fn_00172e2c(void)

{
  int iVar1;
  
  if (((DAT_008c358c & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008c358c), iVar1 != 0)) {
    iVar1 = fn_00101a1c(&DAT_008f2978,&LAB_0015882c,0xc,3);
    *(undefined4 *)(iVar1 + 0x24) = 0;
    *(undefined1 *)(iVar1 + 0x28) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    *(undefined4 *)(iVar1 + 0x30) = 0;
    *(undefined4 *)(iVar1 + 0x34) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x3c) = 0;
    *(undefined2 *)(iVar1 + 0x40) = 0;
    *(undefined4 *)(iVar1 + 0x44) = 0;
    *(undefined2 *)(iVar1 + 0x48) = 0;
    *(undefined4 *)(iVar1 + 0x4c) = 0;
    *(undefined4 *)(iVar1 + 0x50) = 0;
    *(undefined4 *)(iVar1 + 0x54) = 0xffffffff;
    *(undefined4 *)(iVar1 + 100) = 0;
    *(undefined4 *)(iVar1 + 0x68) = 0;
  }
  return &DAT_008f2978;
}



void fn_00172d60(undefined4 *param_1)

{
  *param_1 = &DAT_00857f98;
  param_1[0xc] = 0x3f800000;
  param_1[0xd] = 0x3f800000;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0x3f800000;
  param_1[0x17] = 0x3f800000;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined1 *)((int)param_1 + 0x9f) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  return;
}



void fn_00172cfc(undefined4 *param_1)

{
  *param_1 = &DAT_00857c64;
  param_1[1] = 0;
  param_1[2] = param_1 + 2;
  param_1[4] = 0;
  param_1[3] = param_1 + 2;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = param_1 + 0xb;
  param_1[0xd] = 0;
  param_1[0xc] = param_1 + 0xb;
  param_1[0xe] = 0;
  return;
}



int fn_00172c98(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x2c);
  do {
    if (piVar2 == (int *)(param_1 + 0x2c)) {
      return 0;
    }
    iVar1 = 0;
    while (*(char *)(param_2 + iVar1) == *(char *)((int)piVar2 + iVar1 + -0x24)) {
      if ((*(char *)(param_2 + iVar1) == '\0') || (iVar1 = iVar1 + 1, 0x17 < iVar1)) {
        return (int)(piVar2 + -0x29);
      }
    }
    piVar2 = (int *)*piVar2;
  } while( true );
}



int fn_00172bb8(void)

{
  int iVar1;
  
  iVar1 = fn_0017d8f8();
  iVar1 = fn_0017d8f8(iVar1 + 4);
  iVar1 = fn_0017d8f8(iVar1 + 4);
  iVar1 = fn_0017d8f8(iVar1 + 4);
  return iVar1 + -0xc;
}



void fn_00172a04(int *param_1,int param_2,uint param_3,int param_4,undefined1 param_5)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  undefined2 *puVar5;
  int iVar6;
  int local_28;
  int local_24;
  int local_20;
  uint uStack_1c;
  
  uVar1 = param_4 + 0xfU & 0xfffffff0;
  param_1[0x14] = uVar1;
  local_24 = param_2 + param_3 * 0x448 + uVar1 * 4;
  iVar4 = param_3 * 0xd0 + uVar1;
  iVar2 = 0;
  local_28 = param_2;
  do {
    if (iVar4 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = local_28 + 3U & 0xfffffffc;
      local_28 = uVar1 + iVar4;
    }
    param_1[iVar2 * 8 + 4] = uVar1;
    if (iVar4 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = local_28 + 3U & 0xfffffffc;
      local_28 = uVar1 + iVar4;
    }
    iVar6 = iVar2 + 1;
    param_1[iVar2 * 8 + 5] = uVar1;
    iVar2 = iVar6;
  } while (iVar6 < 2);
  fn_0017dc74(&local_20,&local_28,param_3 << 8,4);
  uVar1 = 0;
  *param_1 = local_20;
  param_1[1] = uStack_1c >> 8;
  if (uStack_1c >> 8 != 0) {
    do {
      iVar2 = *param_1 + uVar1 * 0x100;
      if (iVar2 != 0) {
        fn_00101a1c(iVar2,&LAB_0017dc64,0x20,8);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)param_1[1]);
  }
  iVar2 = 0;
  do {
    puVar3 = (uint *)(param_1 + iVar2 * 8 + 2);
    if (param_3 * 4 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = local_28 + 3U & 0xfffffffc;
      local_28 = uVar1 + param_3 * 4;
    }
    *puVar3 = uVar1;
    puVar3[1] = param_3 & 0x3fffffff;
    uVar1 = 0;
    if ((param_3 & 0x3fffffff) != 0) {
      do {
        puVar5 = (undefined2 *)(*puVar3 + uVar1 * 4);
        uVar1 = uVar1 + 1;
        if (puVar5 != (undefined2 *)0x0) {
          *puVar5 = 0;
          puVar5[1] = 0;
        }
      } while (uVar1 < puVar3[1]);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  *(undefined1 *)(param_1 + 0x13) = param_5;
  return;
}


