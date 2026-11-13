#include "005d21a0_005d2950b.h"



void fn_005d2950(int param_1)

{
  fn_003956e0();
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}



undefined4 * fn_005d2898(undefined4 *param_1)

{
  *param_1 = &DAT_0084c48c;
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 0x18))();
    if ((int *)param_1[1] != (int *)0x0) {
      (**(code **)(*(int *)param_1[1] + 4))();
      param_1[1] = 0;
    }
  }
  if ((int *)param_1[2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[2] + 0x18))();
    if ((int *)param_1[2] != (int *)0x0) {
      (**(code **)(*(int *)param_1[2] + 4))();
      param_1[2] = 0;
    }
  }
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 4))();
  }
  return param_1;
}



void fn_005d27f8(int param_1)

{
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 4) + 0x18))();
    if (*(int **)(param_1 + 4) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 4) + 4))();
      *(undefined4 *)(param_1 + 4) = 0;
    }
  }
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 8) + 0x18))();
    if (*(int **)(param_1 + 8) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 8) + 4))();
      *(undefined4 *)(param_1 + 8) = 0;
    }
  }
  return;
}



void fn_005d27ac(int param_1,int param_2,int param_3,undefined4 param_4)

{
  if (*(char *)(param_1 + 0xc) == '\0') {
    fn_00580cdc(*(undefined4 *)(param_1 + 4),(&DAT_007c67c4)[param_3],param_4);
    return;
  }
  if (*(char *)(param_1 + 0xc) == '\x01') {
    fn_00394adc(*(undefined4 *)(param_1 + 8),(&DAT_007c67c6)[param_3 + param_2 * 2],param_4);
    return;
  }
  return;
}



void fn_005d24e4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,char *param_5
                 )

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 local_28;
  
  *(char *)(param_1 + 0xc) = *param_5;
  iVar2 = fn_00172c98(param_4,(char *)&DAT_005d2708);
  local_28 = param_4;
  if (iVar2 != 0) {
    cVar1 = *param_5;
    iVar3 = fn_00145b00(0x28,&DAT_00812c8c);
    piVar4 = (int *)0x0;
    if (iVar3 != 0) {
      piVar4 = (int *)fn_00580ce0(iVar3,param_2,iVar2,cVar1 == '\0');
      local_28 = param_3;
    }
    piVar5 = *(int **)(param_1 + 4);
    if (piVar5 != piVar4) {
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 4))(piVar5);
      }
      *(int **)(param_1 + 4) = piVar4;
    }
    (**(code **)(**(int **)(param_1 + 4) + 0x10))();
    if (cVar1 == '\0') {
      if (*(int *)(*(int *)(param_5 + 4) + -4) != 0) {
        fn_00580cdc(*(undefined4 *)(param_1 + 4),0);
      }
      if (*(int *)(*(int *)(param_5 + 8) + -4) != 0) {
        fn_00580cdc(*(undefined4 *)(param_1 + 4),1);
      }
    }
  }
  iVar2 = fn_00172c98(param_4,(char *)&DAT_005d2724);
  if (iVar2 != 0) {
    cVar1 = *param_5;
    iVar3 = fn_00145b00(0x24,&DAT_00812c8c);
    piVar4 = (int *)0x0;
    if (iVar3 != 0) {
      piVar4 = (int *)fn_00580c14(iVar3,param_2,iVar2,cVar1 == '\x01');
      local_28 = param_3;
    }
    piVar5 = *(int **)(param_1 + 8);
    if (piVar5 != piVar4) {
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 4))(piVar5);
      }
      *(int **)(param_1 + 8) = piVar4;
    }
    (**(code **)(**(int **)(param_1 + 8) + 0x10))();
    if (cVar1 == '\x01') {
      if (*(int *)(*(int *)(param_5 + 4) + -4) != 0) {
        fn_00394adc(*(undefined4 *)(param_1 + 8),0);
      }
      if (*(int *)(*(int *)(param_5 + 8) + -4) != 0) {
        fn_00394adc(*(undefined4 *)(param_1 + 8),1);
      }
      if (*(int *)(*(int *)(param_5 + 0x10) + -4) != 0) {
        fn_00394adc(*(undefined4 *)(param_1 + 8),2);
      }
      if (*(int *)(*(int *)(param_5 + 0x14) + -4) != 0) {
        fn_00394adc(*(undefined4 *)(param_1 + 8),3);
      }
      if (*(int *)(*(int *)(param_5 + 0xc) + -4) != 0) {
        fn_00394adc(*(undefined4 *)(param_1 + 8),4);
      }
      fn_00394abc(*(undefined4 *)(param_1 + 8),4,0,local_28);
      return;
    }
  }
  return;
}


