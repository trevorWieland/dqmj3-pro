#include "0051c380_0051cd8ca.h"



longlong fn_0051c664(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *extraout_r1;
  undefined4 *extraout_r1_00;
  uint extraout_r1_01;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = DAT_008c0674;
  uVar4 = 0x3ff00000;
  if (0x3fefffff < DAT_008c0674 - 0x100000U) {
    if (DAT_008c0630 != 0) {
      uVar4 = 8;
    }
    return CONCAT44(uVar4,&DAT_e0a14827);
  }
  puVar3 = &DAT_008c0630;
  uVar4 = 0xe0e14826;
  iVar6 = 0;
  if (param_1 - 0x100000U < 0x3ff00000) {
    puVar3 = (undefined4 *)(param_2 + -0x100000);
    if (puVar3 < (undefined4 *)0x3ff00000) {
      iVar5 = DAT_008c0674 + 0x88;
      fn_004edc34(iVar5);
      uVar2 = 0;
      if (*(uint *)(iVar1 + 0x84) != 0) {
        do {
          if (*(int *)(iVar1 + uVar2 * 4 + 0x54) == param_1) {
            iVar6 = *(int *)(iVar1 + 0x50) + uVar2 * 0x4c;
            fn_004edc70(iVar5);
            puVar3 = extraout_r1;
            goto LAB_00519050;
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < *(uint *)(iVar1 + 0x84));
      }
      fn_004edc70(iVar5);
      puVar3 = extraout_r1_00;
LAB_00519050:
      if (iVar6 != 0) {
        fn_00301a9c(param_2,iVar6 + 0x20,0x24);
        return (ulonglong)extraout_r1_01 << 0x20;
      }
      uVar4 = 0xd1614828;
    }
    else if (DAT_008c0630 != 0) {
      puVar3 = (undefined4 *)0x8;
    }
  }
  else if (DAT_008c0630 != 0) {
    puVar3 = (undefined4 *)0x8;
  }
  return CONCAT44(puVar3,uVar4);
}



void fn_0051c5c8(int param_1)

{
  if (*(int *)(param_1 + 0x2c) - 0x100000U < 0x3ff00000) {
    fn_0050faac();
    (**(code **)(**(int **)(param_1 + 0x2c) + 8))(*(int **)(param_1 + 0x2c),0);
  }
  if (*(int *)(param_1 + 0x30) - 0x100000U < 0x3ff00000) {
    fn_0051557c();
    (**(code **)(**(int **)(param_1 + 0x30) + 8))(*(int **)(param_1 + 0x30),0);
  }
  if (*(int *)(param_1 + 0x34) - 0x100000U < 0x3ff00000) {
    fn_0051c11c();
                    /* WARNING: Could not recover jumptable at 0x0051c64c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x34) + 8))(*(int **)(param_1 + 0x34),0);
    return;
  }
  return;
}



undefined4 fn_0051c560(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  if (param_2 + -0x40000 < (int *)0x3ff00000) {
    uVar1 = (**(code **)(*param_2 + 8))(param_2);
    *(undefined4 *)(param_1 + 0x2c) = uVar1;
    uVar1 = (**(code **)(*param_2 + 0xc))(param_2);
    *(undefined4 *)(param_1 + 0x30) = uVar1;
    fn_00517050(*(undefined4 *)(param_1 + 0x24),4);
    uVar1 = 0;
  }
  else {
    uVar1 = 0xe0e14826;
  }
  return uVar1;
}



undefined4 fn_0051c4e4(int param_1,uint param_2)

{
  undefined2 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  uVar3 = *(uint *)(param_1 + 0x40);
  if (uVar3 != 0) {
    uVar2 = 0;
    do {
      uVar4 = (uint)*(ushort *)(param_1 + uVar2 * 2);
      bVar5 = param_2 <= uVar4;
      if (uVar4 != param_2) {
        uVar2 = uVar2 + 1;
        bVar5 = uVar2 <= uVar3;
      }
    } while (bVar5 && (uVar4 != param_2 && uVar3 != uVar2));
    if (uVar3 != uVar2) {
      if (uVar2 < uVar3 - 1) {
        do {
          puVar1 = (undefined2 *)(param_1 + uVar2 * 2);
          uVar2 = uVar2 + 1;
          *puVar1 = puVar1[1];
        } while (uVar2 < *(int *)(param_1 + 0x40) - 1U);
      }
      *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
      return 1;
    }
  }
  return 0;
}



bool fn_0051c4bc(int param_1,undefined2 param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x40);
  if (uVar1 < 0x20) {
    *(uint *)(param_1 + 0x40) = uVar1 + 1;
    *(undefined2 *)(param_1 + uVar1 * 2) = param_2;
  }
  return uVar1 < 0x20;
}



void fn_0051c494(void)

{
  if (DAT_008c0680 != 0) {
    fn_004ecfd0();
    DAT_008c0680 = 0;
  }
  return;
}



void fn_0051c380(undefined4 *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)param_1[0x15];
  *param_1 = &DAT_008572d8;
  if (pcVar1 != (char *)0x0) {
    if (*pcVar1 == '\x01') {
      fn_004ed068(pcVar1);
    }
    if (param_1[0x15] != 0) {
      fn_00656b7c(param_1[0x15]);
    }
    param_1[0x15] = 0;
  }
  fn_004ede4c(param_1);
  fn_004ecfd0();
  return;
}


