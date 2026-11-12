#include "005a2d8c_005a3e68a.h"



void fn_005a2f34(int param_1)

{
  fn_0039536c();
  *(undefined1 *)(param_1 + 0x14) = 1;
  fn_002d691c(*(undefined4 *)(param_1 + 0x18));
  if (*(int *)(param_1 + 0x1c) != 0) {
    fn_002feef8();
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  *(undefined1 *)(param_1 + 0x20) = 0;
  return;
}



void fn_005a2f18(int param_1)

{
  fn_002d6810(*(undefined4 *)(param_1 + 0x18));
  fn_002d691c(*(undefined4 *)(param_1 + 0x18));
  return;
}



void fn_005a2f10(int param_1)

{
  fn_002d66fc(*(undefined4 *)(param_1 + 0x18));
  return;
}



void fn_005a2ec0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xa88,&DAT_00812c8c);
  if (*(int *)(param_1 + 0x1c) != iVar1) {
    fn_002feef8();
    *(int *)(param_1 + 0x1c) = iVar1;
  }
  fn_0017821c(*(undefined4 *)(param_1 + 0x1c),param_2,0xa88);
  return;
}



void fn_005a2e5c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x8c,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005a2e8c(iVar1,param_1);
  return;
}



void fn_005a2e8c(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0025dea8(param_1,param_2,&DAT_00895244,5);
  *puVar1 = &DAT_008469a8;
  return;
}



void fn_005a2e2c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002c4694();
  puVar1[0x2c] = 0;
  *puVar1 = &DAT_00846868;
  return;
}



void fn_005a2d8c(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = fn_006ba220();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x005a2db4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x110))(param_1);
    return;
  }
  puVar2 = (undefined4 *)fn_001f74d8(param_1,0xd9);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_00896ad4) goto LAB_005a2dfc;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_005a2dfc:
  *(char *)(puVar2 + 2) = (char)param_2;
  *(undefined4 *)(param_1[0x2c] + 8) = param_2;
  fn_006899f4(param_1,0xd8,0);
  return;
}


