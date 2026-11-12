#include "00571b24_005726e0bb.h"



void fn_005726e0(int param_1)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if (*(int *)(param_1 + 0xd0) != 0) {
    if (*(char *)(*(int *)(param_1 + 0x5c) + 0x31) == '\x01') {
      *(code **)(param_1 + 0xc4) = fn_0057282c;
      *(undefined4 *)(param_1 + 200) = 0;
    }
    return;
  }
  puVar5 = *(undefined4 **)(param_1 + 0x18);
  if (puVar5 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar5)(puVar5);
    do {
      if (puVar2 == &DAT_00897044) goto LAB_00572760;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar5 = (undefined4 *)0x0;
LAB_00572760:
  uVar1 = *(undefined1 *)(puVar5 + 4);
  uVar3 = fn_002f7e70();
  iVar4 = fn_006c3ab0(uVar3,uVar1);
  fn_002f6100(param_1);
  fn_0015b0dc();
  fn_0015b0f8(*(undefined1 *)(iVar4 + 0x3c2));
  uVar3 = fn_0022f584((char *)&DAT_005727f4,0);
  fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar3,1,0,1,1,0,0,1);
  fn_00689bd0(param_1,0x48,0);
  return;
}



void fn_00572654(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0xd0) == 0) {
    fn_002f6100(param_1);
    fn_0015b0dc();
    uVar2 = fn_0022f584((char *)&DAT_005726c8,0);
    fn_0068974c(param_1,uVar2,0,1);
    return;
  }
  iVar1 = fn_006f6a6c();
  if (iVar1 == 1) {
    *(undefined **)(param_1 + 0xc4) = &DAT_00572650;
    *(undefined4 *)(param_1 + 200) = 0;
  }
  return;
}



void fn_00572280(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  puVar1[0x19] = 0xffffffff;
  *puVar1 = &DAT_00840f5c;
  puVar1[0x1a] = 0xffffffff;
  return;
}


