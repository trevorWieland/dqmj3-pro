#include "0043f94c_00440d78ba.h"



void fn_004405ec(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_28 [12];
  
  if (*(int *)(DAT_0089783c + 0x30) <= param_2) {
    return;
  }
  puVar1 = (undefined4 *)fn_001f7510(param_1,0x48);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008942d0) goto LAB_00440654;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_00440654:
  iVar3 = fn_00295fa4(DAT_0089783c,param_2);
  if (iVar3 != 0) {
    fn_004b9b40(auStack_28,DAT_0089783c,param_2);
    iVar3 = fn_006d3e6c(*(int *)(DAT_0089783c + 0x2c) + param_2 * 0x128 + 0x18,auStack_28);
    if (iVar3 != 0) {
      *(int *)(param_1 + 0xfc) = param_2;
      fn_0036c658(puVar1,0);
      uVar4 = fn_0022f584((char *)&DAT_00440740,0);
      fn_0036c13c(puVar1,uVar4);
      fn_00689bd0(param_1,0x48,0);
      uVar4 = 1;
      goto LAB_0044072c;
    }
  }
  fn_0036c658(puVar1,0);
  uVar4 = fn_0022f584((char *)&DAT_00440768,0);
  fn_0036c13c(puVar1,uVar4);
  fn_00689bd0(param_1,0x48,0);
  uVar4 = 2;
LAB_0044072c:
  *(undefined4 *)(param_1 + 0xf0) = uVar4;
  return;
}



void fn_004405bc(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x100,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00440b78(iVar1,param_1);
  return;
}



void fn_00440308(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  *puVar1 = &DAT_0083d7f0;
  puVar1[0x19] = *(undefined4 *)(param_2 + 8);
  puVar1[0x1c] = 0xffffffff;
  return;
}


