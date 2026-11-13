#include "0049c724_0049cef8aa.h"



void fn_0049c724(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  fn_004b8d90(param_1 + 0x16c);
  iVar1 = fn_006d3b8c(param_1 + 0x16c);
  if ((iVar1 == 0) && (*(int *)(*(int *)(param_1 + 0x198) + 0x78) != 0)) {
    fn_00456400(param_1 + 0x88);
    iVar1 = fn_00473638(*(int *)(param_1 + 0x198),param_1 + 0x88,
                         *(undefined4 *)(*(int *)(param_1 + 0x198) + 0x78));
    if (iVar1 != 0) {
      fn_004b2f0c(param_1);
      puVar2 = (undefined4 *)fn_0015ecdc(0x10);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = &DAT_00853500;
        puVar2[1] = &LAB_0049cd48;
        puVar2[2] = 0;
        puVar2[3] = &DAT_0049c870;
      }
      fn_00479b1c(param_1,param_1 + 0x88,puVar2);
      return;
    }
  }
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68));
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x300) != 0) {
      fn_004b8d90(*(int *)(param_1 + 0x300),param_1 + 0x16c);
    }
    iVar3 = fn_006d3b8c(param_1 + 0x16c);
    if (iVar3 == 0) {
      local_18 = *(undefined4 *)(param_1 + 0x16c);
      uStack_14 = *(undefined4 *)(param_1 + 0x170);
      uStack_10 = *(undefined4 *)(param_1 + 0x174);
      fn_00456044(iVar1,&local_18);
    }
    else {
      **(undefined4 **)(param_1 + 0x84) = *(undefined4 *)(*(int *)(param_1 + 0x198) + 0x78);
      local_18 = *(undefined4 *)(param_1 + 0x16c);
      uStack_14 = *(undefined4 *)(param_1 + 0x170);
      uStack_10 = *(undefined4 *)(param_1 + 0x174);
      fn_00456074(iVar1,&local_18);
    }
  }
  fn_004b2f04(param_1);
  return;
}


