#include "0028cfd8_0028e3b4.h"



int fn_0028e340(int param_1)

{
  bool bVar1;
  
  bVar1 = *(int *)(param_1 + 0x30) == 0;
  if (bVar1) {
    param_1 = *(int *)(param_1 + 0x2c);
  }
  if (!bVar1 || param_1 != 0) {
    param_1 = 1;
  }
  return param_1;
}



void fn_0028e310(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x28);
  for (piVar1 = (int *)*piVar2; piVar1 != piVar2; piVar1 = (int *)*piVar1) {
    fn_0028f93c(*(undefined4 *)piVar1[2]);
  }
  return;
}



void fn_0028e284(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)fn_0028eaf4(param_1,param_3);
  puVar3 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)(*(int *)*puVar1 + 0x28))((int *)*puVar1,param_4,param_5,0);
    puVar3 = puVar1;
  }
  if ((param_2 != 0) && (iVar2 = fn_0028e3b4(param_1,param_2), iVar2 != 0)) {
    if (puVar3 == (undefined4 *)0x0) {
      fn_0028e718(param_1,iVar2,param_4,param_5);
      return;
    }
    puVar3[2] = iVar2;
  }
  return;
}



undefined4 * fn_0028e3b4(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar2 = *(undefined4 **)(param_1 + 0xc);
  puVar3 = *(undefined4 **)(param_1 + 0x10);
  if (puVar2 < puVar3) {
    iVar4 = 1;
    iVar1 = (int)puVar3 - (int)puVar2 >> 3;
    if (1 < iVar1 + 1) {
      do {
        if (*(int *)*puVar2 == param_2) {
          return puVar2;
        }
        iVar4 = iVar4 + 1;
        puVar2 = puVar2 + 2;
      } while (iVar4 < iVar1 + 1);
    }
  }
  else {
    for (; puVar2 != puVar3; puVar2 = puVar2 + 2) {
      if (*(int *)*puVar2 == param_2) {
        return puVar2;
      }
    }
  }
  return (undefined4 *)0x0;
}



undefined4 fn_0028e27c(undefined4 param_1)

{
  return param_1;
}



void fn_0028e264(undefined4 *param_1,undefined4 param_2)

{
  param_1[1] = param_2;
  *param_1 = &DAT_0081e204;
  return;
}



void fn_0028e1e8(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &DAT_0081e1e0;
  uVar1 = param_1[5];
  uVar2 = uVar1;
  if ((uint)param_1[6] < uVar1) {
    do {
      uVar2 = uVar2 + 2;
    } while (uVar2 != param_1[6]);
  }
  fn_001008c4(uVar1,(int)(param_1[7] - uVar1) >> 1,0);
  if ((int *)param_1[3] != (int *)0x0) {
    (**(code **)(*(int *)param_1[3] + 4))();
  }
  *param_1 = &DAT_0081d408;
  fn_002feef8(param_1);
  return;
}



undefined4 fn_0028e118(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 0xc);
  if (piVar3 != (int *)0x0) {
    iVar1 = fn_00182988(DAT_008977e4);
    if (*(char *)(iVar1 + 0x39c) != '\0') {
      fn_001c2374(DAT_008977e4);
      fn_0025fbf0();
    }
    iVar1 = (**(code **)(*piVar3 + 8))(piVar3);
    if (iVar1 == 10) {
      return 6;
    }
    if (iVar1 != 0xd) {
      piVar3 = (int *)fn_0028c944(param_1 + 8);
      piVar2 = *(int **)(param_1 + 0xc);
      if (piVar2 != piVar3) {
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 4))();
        }
        *(int **)(param_1 + 0xc) = piVar3;
      }
    }
  }
  return 7;
}



undefined4 fn_0028dd10(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x10);
    if ((iVar1 != 0) && (*(int *)(*(int *)(iVar1 + 0x34) + 0xc) != 0)) {
      iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x80);
      if (*(char *)(iVar1 + 0x88) != '\0') {
                    /* WARNING: Subroutine does not return */
        fn_001638a0();
      }
      fn_00404ee8(iVar1);
    }
  }
  else if ((*(int *)(DAT_00897808 + 0x14) == *(int *)(DAT_00897808 + 0xc)) &&
          (*(int *)(DAT_0089780c + 0x14) == *(int *)(DAT_0089780c + 0xc))) {
    return 8;
  }
  return 0xd;
}



undefined4 fn_0028d824(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_00338c10(*(undefined4 *)(*(int *)(param_1 + 4) + 0x10));
  if (iVar1 != 0) {
    fn_00338cb8();
    fn_00338e04(*(undefined4 *)(*(int *)(param_1 + 4) + 0x10));
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  iVar1 = 0;
  if (*(int *)(*(int *)(param_1 + 4) + 0x10) != 0) {
    iVar1 = fn_006f6a38();
  }
  iVar2 = fn_00338bd4(*(undefined4 *)(*(int *)(param_1 + 4) + 0x10));
  if (iVar2 == 0) {
    if (iVar1 != 0) {
      fn_00338974(*(undefined4 *)(*(int *)(param_1 + 4) + 0x10));
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
  }
  else {
    fn_00338cb8(*(undefined4 *)(*(int *)(param_1 + 4) + 0x10));
    fn_00338e04(*(undefined4 *)(*(int *)(param_1 + 4) + 0x10));
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
  }
  return 0xd;
}



undefined4 fn_0028d468(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(DAT_0089780c + 0x14) == *(int *)(DAT_0089780c + 0xc)) {
    fn_00353a48(*(undefined4 *)(*(int *)(param_1 + 8) + 0x54));
    fn_001f748c(*(undefined4 *)(param_1 + 8),0xd5,0);
    uVar1 = 1;
  }
  else {
    uVar1 = 0xd;
  }
  return uVar1;
}



undefined4 fn_0028cfd8(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)(**(code **)(**(int **)(param_1 + 8) + 8))();
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar1 == &DAT_00890360) break;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  iVar3 = *(int *)(*(int *)(param_1 + 8) + 0x80);
  iVar2 = fn_006ccb98(iVar3);
  if (iVar2 == 0) {
    fn_00404edc(iVar3);
    return 0xd;
  }
  iVar2 = *(int *)(*(int *)(param_1 + 8) + 0x10);
  if ((iVar2 != 0) && (*(int *)(*(int *)(iVar2 + 0x34) + 0xc) != 0)) {
    if (*(char *)(iVar3 + 0x88) != '\0') {
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
    fn_00404ee8(iVar3);
  }
  return 0xd;
}


