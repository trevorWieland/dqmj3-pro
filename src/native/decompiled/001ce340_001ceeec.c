#include "001ce340_001ceeec.h"



undefined4 fn_001ceeec(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x10);
  if ((iVar3 == 0) || (iVar1 = fn_005f6c04(iVar3), iVar1 == 0)) {
    return 0;
  }
  uVar2 = fn_00143e04(iVar3,param_2);
  return uVar2;
}



void fn_001cee1c(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  
  iVar1 = fn_00145b00(8,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_00127bf8();
  }
  piVar5 = *(int **)(param_1 + 0x10);
  if (piVar5 != piVar2) {
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
    *(int **)(param_1 + 0x10) = piVar2;
  }
  *(undefined1 *)(param_1 + 0x1c) = 0;
  uVar6 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = fn_0012a26c(*(undefined4 *)(param_1 + 0x18));
  uVar4 = fn_00145ac0(*(undefined4 *)(param_1 + 0x18));
  iVar1 = fn_00143e20(uVar6,(char *)&DAT_001cea8c,uVar4,uVar3);
  if (iVar1 == 0) {
    return;
  }
  fn_00143e04(uVar6,(char *)&DAT_001cea8c);
  return;
}



void fn_001cedc8(int *param_1)

{
  fn_001484b4();
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 7) = 1;
  *(undefined1 *)((int)param_1 + 0x6b) = 0;
  if ((int *)param_1[4] != (int *)0x0) {
    (**(code **)(*(int *)param_1[4] + 4))();
    param_1[4] = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x001cee18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x74))(param_1);
  return;
}



bool fn_001cec84(int param_1)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  if (*(char *)(param_1 + 0x68) != '\0') {
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  if (*(char *)(param_1 + 0x6c) != '\0') {
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  if (*(char *)(param_1 + 0x69) != '\0') {
    iVar1 = DAT_00897808;
    if (*(char *)(param_1 + 0x6b) == '\x01') {
      iVar1 = DAT_00897810;
    }
    bVar2 = *(int *)(iVar1 + 0x14) != *(int *)(iVar1 + 0xc);
    if (!bVar2) {
      *(undefined1 *)(param_1 + 0x69) = 0;
    }
  }
  if (*(char *)(param_1 + 0x6a) != '\0') {
    if (*(int *)(DAT_0089780c + 0x14) == *(int *)(DAT_0089780c + 0xc)) {
      *(undefined1 *)(param_1 + 0x6a) = 0;
    }
    else {
      bVar2 = true;
    }
  }
  return bVar2;
}



void fn_001ceaf0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 0x40) != 0) {
    piVar2 = (int *)**(int **)(param_1 + 0x60);
    if (piVar2 != *(int **)(param_1 + 0x60)) {
      do {
        (**(code **)(**(int **)(param_1 + 0x40) + 0xc))(*(int **)(param_1 + 0x40),piVar2[2]);
        piVar2 = (int *)*piVar2;
      } while (piVar2 != (int *)*(int *)(param_1 + 0x60));
    }
    piVar3 = *(int **)(param_1 + 0x60);
    piVar2 = (int *)*piVar3;
    while (piVar1 = piVar2, piVar1 != piVar3) {
      piVar2 = *(int **)(param_1 + 0x60);
      if (piVar1 != *(int **)(param_1 + 0x60)) {
        piVar2 = (int *)*piVar1;
        *(int *)piVar1[1] = *piVar1;
        *(int *)(*piVar1 + 4) = piVar1[1];
        *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + -1;
        *piVar1 = *(int *)(param_1 + 0x54);
        *(int **)(param_1 + 0x54) = piVar1;
      }
    }
  }
  return;
}



int fn_001cea94(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int local_10;
  
  if (*(int *)(param_1 + 0x40) == 0) {
    local_10 = -1;
  }
  else {
    local_10 = param_4;
    uVar1 = fn_001747a8(param_2);
    local_10 = fn_0023ddec(*(undefined4 *)(param_1 + 0x40),uVar1);
    if (-1 < local_10) {
      fn_0017811c(param_1 + 0x50,&local_10);
    }
  }
  return local_10;
}



undefined4 fn_001cea38(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = fn_0012a26c(*(undefined4 *)(param_1 + 0x18));
  uVar2 = fn_00145ac0(*(undefined4 *)(param_1 + 0x18));
  iVar3 = fn_00143e20(param_2,(char *)&DAT_001cea8c,uVar2,uVar1);
  uVar1 = 0;
  if ((iVar3 != 0) && (iVar3 = fn_00143e04(param_2,(char *)&DAT_001cea8c), uVar1 = 0, iVar3 != 0)) {
    uVar1 = 1;
  }
  return uVar1;
}



void fn_001ce9ec(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_0011c1b4(L"rom:/data/Script/Common.nut",0,0,0,0,0,0,0,5);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  return;
}



int fn_001ce970(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int local_18 [4];
  
  if (*(int *)(param_1 + 0x40) == 0) {
    local_18[0] = -1;
  }
  else {
    uVar1 = fn_001747a8(param_2);
    local_18[0] = fn_0023e194(*(undefined4 *)(param_1 + 0x40),uVar1,0);
    if (-1 < local_18[0]) {
      fn_0017811c(param_1 + 0x50,local_18);
    }
  }
  return local_18[0];
}



void fn_001ce928(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  
  iVar1 = fn_00143e20(param_6,param_5,param_1,param_3);
  if (iVar1 == 0) {
    return;
  }
  fn_00143e04(param_6,param_5);
  return;
}



void fn_001ce8ec(void)

{
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



void fn_001ce7bc(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2 != 0) {
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 4) + uVar3 * 4);
      if (piVar1 != (int *)0x0) {
        iVar2 = (**(code **)(*piVar1 + 0xc))();
        if (iVar2 == 0) {
          (**(code **)(**(int **)(*(int *)(param_1 + 4) + uVar3 * 4) + 8))();
        }
        else {
          piVar4 = (int *)(*(int *)(param_1 + 4) + uVar3 * 4);
          piVar1 = (int *)*piVar4;
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 4))();
          }
          *piVar4 = 0;
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)(*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2));
  }
  return;
}



void fn_001ce798(void)

{
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



void fn_001ce340(undefined4 *param_1)

{
  *param_1 = &DAT_0081bd68;
  fn_00129004();
  fn_001210e8();
  fn_00129004();
  fn_00121084();
  fn_00129004();
  fn_00120f74();
  if ((int *)param_1[10] != (int *)0x0) {
    (**(code **)(*(int *)param_1[10] + 4))();
    param_1[10] = 0;
  }
  if ((int *)param_1[9] != (int *)0x0) {
    (**(code **)(*(int *)param_1[9] + 8))();
    param_1[9] = 0;
  }
  if ((int *)param_1[8] != (int *)0x0) {
    (**(code **)(*(int *)param_1[8] + 4))();
    param_1[8] = 0;
  }
  if ((int *)param_1[7] != (int *)0x0) {
    (**(code **)(*(int *)param_1[7] + 4))();
    param_1[7] = 0;
  }
  if ((int *)param_1[4] != (int *)0x0) {
    (**(code **)(*(int *)param_1[4] + 4))();
    param_1[4] = 0;
  }
  if ((int *)param_1[5] != (int *)0x0) {
    (**(code **)(*(int *)param_1[5] + 4))();
    param_1[5] = 0;
  }
  if ((int *)param_1[2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[2] + 4))();
    param_1[2] = 0;
  }
  if ((int *)param_1[3] != (int *)0x0) {
    (**(code **)(*(int *)param_1[3] + 4))();
    param_1[3] = 0;
  }
  if ((int *)param_1[6] != (int *)0x0) {
    (**(code **)(*(int *)param_1[6] + 4))();
    param_1[6] = 0;
  }
  if ((int *)param_1[10] != (int *)0x0) {
    (**(code **)(*(int *)param_1[10] + 4))();
  }
  if ((int *)param_1[9] != (int *)0x0) {
    (**(code **)(*(int *)param_1[9] + 8))();
  }
  if ((int *)param_1[8] != (int *)0x0) {
    (**(code **)(*(int *)param_1[8] + 4))();
  }
  if ((int *)param_1[7] != (int *)0x0) {
    (**(code **)(*(int *)param_1[7] + 4))();
  }
  if ((int *)param_1[6] != (int *)0x0) {
    (**(code **)(*(int *)param_1[6] + 4))();
  }
  if ((int *)param_1[5] != (int *)0x0) {
    (**(code **)(*(int *)param_1[5] + 4))();
  }
  if ((int *)param_1[4] != (int *)0x0) {
    (**(code **)(*(int *)param_1[4] + 4))();
  }
  if ((int *)param_1[3] != (int *)0x0) {
    (**(code **)(*(int *)param_1[3] + 4))();
  }
  if ((int *)param_1[2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[2] + 4))();
  }
  fn_005f6f1c(param_1);
  return;
}


