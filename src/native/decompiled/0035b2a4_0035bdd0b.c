#include "0035b2a4_0035bdd0b.h"



undefined4 fn_0035bdd0(undefined4 param_1,int *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  short *psVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = 0;
  iVar6 = *param_2;
  do {
    iVar3 = iVar6 + uVar5 * 4;
    psVar4 = (short *)(iVar3 + 0x56);
    iVar1 = (int)*psVar4;
    if (iVar1 != 0) {
      iVar1 = fn_0068f708(iVar1,*(undefined2 *)(iVar3 + 0x58));
      uVar2 = 1;
      if (0 < iVar1) {
        do {
          iVar3 = fn_0068f7c4((int)*psVar4,uVar2 & 0xff);
          if ((iVar3 != 0) && (iVar3 == param_3)) {
            return 1;
          }
          uVar2 = uVar2 + 1;
        } while ((int)uVar2 <= iVar1);
      }
    }
    uVar5 = uVar5 + 1;
    if (6 < uVar5) {
      return 0;
    }
  } while( true );
}



undefined4 fn_0035bce0(int param_1,undefined4 param_2,int param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_3 == 0) {
    param_3 = fn_0035cbb0(param_1,0x3f);
  }
  if (param_3 == 0) {
    fn_0035c240(param_1);
    return 0;
  }
  iVar5 = (*(int **)(param_1 + 4))[1];
  iVar4 = iVar5;
  for (iVar3 = **(int **)(param_1 + 4); iVar3 != iVar5; iVar3 = iVar3 + 0x428) {
    sVar1 = *(short *)(iVar3 + 0x24);
    iVar2 = fn_00176dc0(iVar3 + 8);
    if ((sVar1 < iVar2) &&
       (((iVar4 == iVar5 || (*(short *)(iVar3 + 0x24) < *(short *)(iVar4 + 0x24))) ||
        ((*(short *)(iVar3 + 0x24) == *(short *)(iVar4 + 0x24) &&
         ((*(char *)(iVar4 + 0x420) == '\0' && (*(char *)(iVar3 + 0x420) == '\x01')))))))) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 == iVar5) {
    iVar4 = 0;
  }
  fn_0035c980(param_1,iVar4,param_3,0x3f,param_2,3);
  fn_0035c240(param_1);
  return 1;
}



void fn_0035bc74(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  *param_1 = &DAT_00826b30;
  do {
    if (uVar2 < 0x40) {
      if (param_1[uVar2 + 1] != 0) {
        fn_002582d8();
        piVar1 = (int *)param_1[uVar2 + 1];
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 4))();
        }
        param_1[uVar2 + 1] = 0;
      }
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 0x40);
  fn_002feef8(param_1);
  return;
}



void fn_0035bc24(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  param_1[0x41] = 0xffffffff;
  *param_1 = &DAT_00826b30;
  iVar1 = 0;
  iVar2 = 0;
  do {
    iVar1 = iVar1 + 2;
    param_1[iVar2 + 1] = 0;
    param_1[iVar2 + 2] = 0;
    iVar2 = iVar2 + 2;
  } while (iVar1 < 0x40);
  return;
}



uint fn_0035b974(int param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4,
                 undefined1 param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = 0;
  while ((uVar3 < 0x40 && (*(int *)(param_1 + uVar3 * 4 + 4) != 0))) {
    uVar3 = uVar3 + 1;
    if (0x3f < (int)uVar3) {
      return 0xffffffff;
    }
  }
  if (uVar3 == 0xffffffff) {
    return 0xffffffff;
  }
  iVar1 = fn_00145b00(0x10,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_00258524();
  }
  *(undefined4 *)(param_1 + uVar3 * 4 + 4) = uVar2;
  if (uVar3 < 0x40) {
    iVar1 = *(int *)(param_1 + uVar3 * 4 + 4);
  }
  else {
    iVar1 = 0;
  }
  fn_0065fdc4(iVar1,param_2);
  *(undefined1 *)(iVar1 + 8) = param_3;
  *(undefined1 *)(iVar1 + 9) = param_4;
  *(undefined1 *)(iVar1 + 0xf) = param_5;
  return uVar3;
}



uint fn_0035b7f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5,undefined1 param_6,undefined1 param_7)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = 0;
  while ((uVar3 < 0x40 && (*(int *)(param_1 + uVar3 * 4 + 4) != 0))) {
    uVar3 = uVar3 + 1;
    if (0x3f < (int)uVar3) {
      return 0xffffffff;
    }
  }
  if (uVar3 == 0xffffffff) {
    return 0xffffffff;
  }
  iVar1 = fn_00145b00(0x10,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_00258524();
  }
  *(undefined4 *)(param_1 + uVar3 * 4 + 4) = uVar2;
  if (uVar3 < 0x40) {
    iVar1 = *(int *)(param_1 + uVar3 * 4 + 4);
  }
  else {
    iVar1 = 0;
  }
  fn_00258304(iVar1,param_2,param_3,param_4);
  *(undefined1 *)(iVar1 + 8) = param_5;
  *(undefined1 *)(iVar1 + 9) = param_6;
  *(undefined1 *)(iVar1 + 0xf) = param_7;
  return uVar3;
}


