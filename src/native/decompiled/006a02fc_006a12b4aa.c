#include "006a02fc_006a12b4aa.h"



void fn_006a06a0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = fn_0032d6f4(param_2);
  fn_0069f6ec(param_1);
  fn_0069fb50(param_1);
  fn_0069fb68(param_1);
  fn_0069f6d4(param_1);
  *(undefined1 *)(param_1 + 0x128) = *(undefined1 *)(iVar1 + 0x1c);
  *(undefined1 *)(param_1 + 0x129) = *(undefined1 *)(iVar1 + 0x1d);
  fn_006a2b28(param_1);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(iVar1 + 0x14);
  fn_0069f6b8(param_1);
  fn_006a0744(param_1,0,*(undefined1 *)(iVar1 + 0x1e));
  *(undefined1 *)(*(int *)(param_1 + 0x80) + 0x10) = *(undefined1 *)(iVar1 + 0x1f);
  return;
}



void fn_006a02fc(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  
  iVar1 = param_1[0x68];
  bVar3 = iVar1 == 0;
  if (bVar3) {
    iVar1 = param_1[0x69];
  }
  if ((bVar3 && iVar1 == 0) && ((char)param_1[0x79] == '\0')) {
    if ((char)param_1[0x67] != '\0') {
      fn_006a69c8(param_1);
      return;
    }
    if ((char)param_1[0x61] == '\0') {
      (**(code **)(*param_1 + 0x40))(param_1,0x9c42,1);
      fn_0014481c(DAT_008977e8);
      iVar1 = fn_00263814();
      fn_00660790(0x26,iVar1 + 8,param_1 + 2);
      if (param_1[0x85] == -1) {
        iVar1 = (**(code **)(*param_1 + 0x40))(param_1,0xa411,0);
        param_1[0x85] = iVar1;
        uVar2 = fn_0068c7e8(DAT_008977e8);
        fn_0023dd30(uVar2,param_1[0x85]);
      }
      fn_0018d060(param_1[0x17],7,4);
      while (param_1[0x3b] - param_1[0x3a] >> 2 != 0) {
        fn_006a2620(param_1,param_2 + 8);
      }
      iVar1 = fn_0068cafc(DAT_008977e8);
      *(undefined1 *)((int)param_1 + 0x185) = 1;
      fn_006a2584(param_1,*(undefined4 *)(iVar1 + 0x24c));
      *(undefined1 *)(param_1 + 0x77) = 1;
      fn_006a2388(param_1);
      return;
    }
    *(undefined1 *)(param_1 + 0x61) = 0;
  }
  return;
}


