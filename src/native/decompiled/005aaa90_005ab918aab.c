#include "005aaa90_005ab918aab.h"



void fn_005aad14(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_0022f584((char *)&DAT_005aad7c,0);
  fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar1,1,0,1,1,0,0,1);
  fn_00689bd0(param_1,0x48,0);
  fn_0068ab44(param_1,0x1000950);
  return;
}



undefined4 fn_005aab18(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_218 [240];
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [248];
  
  uVar5 = 0;
  uVar4 = 0;
  puVar2 = (undefined4 *)fn_001f74ec(param_1,0xd6);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_00890b08) goto LAB_005aab74;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_005aab74:
  fn_0017821c(auStack_128,puVar2 + 3,0x104);
  cVar1 = *(char *)(puVar2 + 2);
  if (cVar1 == '\0') {
    fn_005ce568(param_1,param_1 + 0xcc,auStack_118);
    uVar5 = 0;
    uVar4 = 0;
    fn_005cefa0(param_1,2);
  }
  else if (cVar1 == '\x01' || cVar1 == '\x02') {
    fn_00601644(puVar2,param_1 + 0xcc);
    uVar5 = puVar2[0x48];
    uVar4 = puVar2[0x49];
    fn_005cefa0(param_1,0);
  }
  fn_005ce9bc(param_1,auStack_128,param_1 + 0xcc);
  fn_005ce8b4(param_1);
  fn_005ceb40(param_1,1,uVar5,uVar4);
  puVar2 = (undefined4 *)fn_001f74ec(param_1,0xd6);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_00890b08) goto LAB_005aac60;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_005aac60:
  fn_0017821c(auStack_218,puVar2 + 7,0xf0);
  fn_002a3c70(*(undefined4 *)(param_1 + 0xb0),auStack_218,0xe1,0);
  fn_00689efc(param_1,0xe1,0);
  if ((*(int *)(param_1 + 0xe8) != 0) && (*(int *)(param_1 + 0xe8) == 2)) {
    uVar4 = fn_001c80ac(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68),
                         (char *)&DAT_005aae08);
    fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar4,1,1,0,1,0,0,1);
    fn_00689bd0(param_1,0x48,0);
    fn_005cefa0(param_1,2);
  }
  return 1;
}


