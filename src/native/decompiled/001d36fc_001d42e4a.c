#include "001d36fc_001d42e4a.h"



undefined4 fn_001d3a94(int param_1)

{
  undefined4 uVar1;
  
  switch(*(undefined1 *)(param_1 + 4)) {
  case 0:
  case 1:
  case 3:
  case 5:
  case 6:
  case 8:
    uVar1 = fn_00118290();
    return uVar1;
  case 2:
  case 4:
  case 7:
    uVar1 = fn_001287b4();
    return uVar1;
  default:
    return 0;
  }
}



void fn_001d3a40(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  do {
    iVar3 = param_1 + uVar2 * 2;
    if (*(short *)(iVar3 + 200) != -1) {
      piVar1 = (int *)fn_006f7508(DAT_008977e0);
      (**(code **)(*piVar1 + 100))(piVar1,(int)*(short *)(iVar3 + 200),1);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x40);
  return;
}



void fn_001d36fc(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *local_91c;
  undefined1 auStack_918 [100];
  undefined1 auStack_8b4 [2164];
  undefined1 auStack_40 [36];
  
  uVar5 = 0;
  uVar4 = 1;
  iVar6 = *(int *)(DAT_00897804 + 8);
  if (param_2 != 0) {
    uVar4 = 0x1b;
    uVar5 = fn_006b621c(iVar6);
  }
  iVar1 = fn_00174828(DAT_008977e4);
  *(undefined2 *)(iVar1 + 0x4280) = uVar4;
  uVar2 = fn_006b64b0(iVar6);
  *(undefined4 *)(iVar1 + 0xdc) = uVar2;
  *(undefined4 *)(iVar1 + 0xe0) = uVar2;
  fn_00301a9c(auStack_40,&DAT_007ba154,0x1e);
  fn_0029432c(*(undefined4 *)(iVar6 + 4),auStack_40);
  if (param_2 == 0) {
    fn_001d19e4(param_1,*(undefined4 *)(iVar6 + 4),auStack_40,uVar5,1);
    return;
  }
  fn_00290734(auStack_918);
  fn_0022eb78(&local_91c,auStack_8b4);
  fn_001d19e4(param_1,local_91c,auStack_40,uVar5,1);
  if (local_91c != &DAT_008f9cf4) {
    piVar3 = local_91c + -3;
    iVar6 = *piVar3;
    if ((iVar6 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar6 + -1, iVar6 == 0)))) {
      fn_001008c4(local_91c + -3,local_91c[-2] + 8,0);
    }
  }
  return;
}


