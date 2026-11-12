#include "005ca358_005cb584bb.h"



void fn_005cb584(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x84) == 0) {
    fn_002f8444();
    uVar2 = fn_002f6fa8();
    uVar3 = fn_002f8914();
    iVar1 = fn_006cd9d8(uVar2,uVar3);
    fn_0015b0f8(*(undefined4 *)(iVar1 + 0x10));
    fn_002f6534(param_1);
    fn_0015b0dc();
    uVar2 = fn_0022f584((char *)&DAT_005cb690,0);
    fn_0068974c(param_1,uVar2,0,1);
    uVar2 = fn_0022f584((char *)&DAT_005cb6ac,0);
    fn_0036c13c(*(undefined4 *)(param_1 + 0x5c),uVar2);
    return;
  }
  iVar1 = fn_006adbb4();
  if ((iVar1 == 0) && (iVar1 = fn_006f6a6c(param_1), iVar1 == 1)) {
    uVar2 = fn_002f8914();
    uVar3 = fn_002f6fa8();
    uVar2 = fn_006cd9b0(uVar3,uVar2);
    fn_002f5624(uVar2,10,0xffffffff);
    fn_00689930(param_1,0xf5,1,0);
    *(code **)(param_1 + 0x78) = fn_005cb284;
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  return;
}



void fn_005cb284(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint *puVar4;
  
  if (*(int *)(param_1 + 0x84) != 0) {
    iVar1 = fn_006f6a6c(param_1);
    if (iVar1 == 1) {
      *(code **)(param_1 + 0x78) = fn_005cb6c8;
      *(undefined4 *)(param_1 + 0x7c) = 0;
    }
    return;
  }
  uVar2 = fn_0022f584((char *)&DAT_005cb34c,0);
  fn_0068974c(param_1,uVar2,0,1);
  uVar2 = fn_002f6fa8();
  uVar3 = fn_002f8914();
  puVar4 = (uint *)fn_006cd9d8(uVar2,uVar3);
  if (*puVar4 < 0xb) {
    uVar2 = fn_0022f584((char *)&DAT_005cb368,0);
    fn_0036c13c(*(undefined4 *)(param_1 + 0x5c),uVar2);
    return;
  }
  uVar2 = fn_0022f584((char *)&DAT_005cb384,0);
  fn_0036c13c(*(undefined4 *)(param_1 + 0x5c),uVar2);
  return;
}



void fn_005caefc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x84) == 0) {
    uVar2 = fn_0022f584((char *)&DAT_005caf5c,0);
    fn_0068974c(param_1,uVar2,0,1);
    return;
  }
  iVar1 = fn_006f6a6c(param_1);
  if (iVar1 == 1) {
    *(code **)(param_1 + 0x78) = fn_005cae80;
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  return;
}



void fn_005cae80(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1[0x21] == 0) {
    uVar2 = fn_002f8914();
    fn_002f7714(uVar2,0,1);
    fn_002f829c(0);
    fn_002f4624(DAT_008977ec,0);
    iVar1 = (**(code **)(*param_1 + 8))(param_1);
    fn_0026a494(DAT_00897818,*(undefined4 *)(iVar1 + 0x18),1);
    return;
  }
  iVar1 = fn_002f5908();
  if (iVar1 == 0) {
    return;
  }
  fn_006899f4(param_1,0xd6,1);
  fn_00689930(param_1,0,0);
  return;
}



void fn_005cae14(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0039571c();
  *puVar1 = &DAT_0084b50c;
  *(undefined1 *)(puVar1 + 3) = 0xff;
  return;
}


