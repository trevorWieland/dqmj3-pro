#include "002c946c_002cabdca.h"



void fn_002ca330(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xd0) == 0) {
    fn_00227398();
    fn_002e3524(*(undefined4 *)(param_1 + 0xd4),4,1);
    return;
  }
  iVar1 = fn_002e3564(*(undefined4 *)(param_1 + 0xd4));
  if (iVar1 != 0) {
    iVar1 = fn_002e341c();
    if (iVar1 == 0) {
      fn_00689824(param_1,1);
      *(undefined **)(param_1 + 0xc4) = &DAT_002c94a0;
      *(undefined4 *)(param_1 + 200) = 0;
      return;
    }
    *(code **)(param_1 + 0xc4) = fn_002ca3b8;
    *(undefined4 *)(param_1 + 200) = 0;
  }
  return;
}



void fn_002c99dc(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xd0) == 0) {
    uVar1 = fn_0022f584((char *)&DAT_002c9a3c,0);
    fn_0068974c(param_1,uVar1,0,1);
    return;
  }
  if (*(char *)(*(int *)(param_1 + 0x5c) + 0x31) == '\x01') {
    *(code **)(param_1 + 0xc4) = fn_002ca5dc;
    *(undefined4 *)(param_1 + 200) = 0;
  }
  return;
}



void fn_002c98c4(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0xd0) == 0) {
    uVar2 = fn_0022f584((char *)&DAT_002c9938,0);
    fn_0068974c(param_1,uVar2,1);
    return;
  }
  cVar1 = *(char *)(*(int *)(param_1 + 0x5c) + 0x31);
  if (cVar1 == '\x03') {
    fn_002ca68c(param_1);
    return;
  }
  if (cVar1 == '\x02') {
    *(code **)(param_1 + 0xc4) = fn_002ca4b4;
    *(undefined4 *)(param_1 + 200) = 0;
  }
  return;
}



void fn_002c97f4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0xd0) != 0) {
    if (*(char *)(*(int *)(param_1 + 0x5c) + 0x31) == '\x01') {
      *(code **)(param_1 + 0xc4) = fn_002ca5dc;
      *(undefined4 *)(param_1 + 200) = 0;
    }
    return;
  }
  iVar1 = fn_001296d0(DAT_00898840);
  if (((iVar1 != 0) || (iVar1 = fn_0066eb04(DAT_00898840), iVar1 == 0)) &&
     (*(int *)(DAT_00898840 + 0x20) != 0)) {
    fn_005f3b74(DAT_00898840,*(undefined4 *)(DAT_00898840 + 0x24));
  }
  uVar2 = fn_0022f584((char *)&DAT_002c98ac,0);
  fn_0068974c(param_1,uVar2,0,1);
  return;
}



void fn_002c94a4(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  uVar1 = DAT_00897818;
  if (param_1[0x34] == 0) {
    iVar2 = (**(code **)(*param_1 + 8))(param_1);
    fn_0026a494(uVar1,*(undefined4 *)(iVar2 + 0x18),1);
    return;
  }
  iVar2 = fn_00269b38(DAT_00897818);
  if (iVar2 != 2) {
    return;
  }
  puVar3 = (undefined4 *)fn_001f74ec(param_1,0xaf);
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar4 == &DAT_00895dec) goto LAB_002c9518;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_002c9518:
  puVar3[2] = 0xae;
  fn_006899f4(param_1,0xaf,0);
  return;
}



void fn_002c946c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0034d9e4();
  *puVar1 = &DAT_0081f8dc;
  *(undefined1 *)((int)puVar1 + 0xdd) = 0;
  return;
}


