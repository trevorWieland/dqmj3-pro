#include "003e8b04_003e93bcbb.h"



void fn_003e93bc(int *param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(*param_1 + param_2 * 0x14 + -0x14) = param_3;
  return;
}



undefined4 fn_003e93a8(int *param_1,int param_2)

{
  return *(undefined4 *)(*param_1 + param_2 * 0x14 + -0x14);
}



void fn_003e9234(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  fn_007914f4(param_1,*param_1,param_1[1]);
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  iVar3 = param_1[1];
  uVar5 = (iVar3 - *param_1) / 0x14;
  if (uVar5 < 3) {
    fn_00791034(param_1,iVar3,3 - uVar5,&local_38);
  }
  else if (3 < uVar5) {
    fn_007914f4(param_1,*param_1 + 0x3c,iVar3);
  }
  fn_003e8cf0(&local_38);
  uVar5 = 0;
  iVar3 = param_1[1] - *param_1 >> 0x1f;
  if ((param_1[1] - *param_1) / 0x14 + iVar3 != iVar3) {
    do {
      iVar4 = *param_1 + uVar5 * 0x14;
      iVar1 = fn_00145b00(0x70,&DAT_00812c8c);
      iVar3 = 0;
      if (iVar1 != 0) {
        iVar3 = fn_00120ea0(iVar1 + 0x60);
        iVar3 = iVar3 + -0x60;
      }
      *(int *)(iVar4 + 4) = iVar3;
      uVar2 = fn_00145b00(0x78,&DAT_00812c8c);
      *(undefined4 *)(iVar4 + 8) = uVar2;
      uVar2 = fn_00145b00(0x49c,&DAT_00812c8c);
      *(undefined4 *)(iVar4 + 0xc) = uVar2;
      fn_00110c80(*(undefined4 *)(iVar4 + 4));
      fn_00301f50(*(undefined4 *)(iVar4 + 8),0x78);
      fn_00301f50(*(undefined4 *)(iVar4 + 0xc),0x49c);
      *(undefined4 *)(iVar4 + 0x10) = 0;
      uVar6 = uVar5 + 1;
      *(undefined1 *)(*(int *)(*param_1 + uVar5 * 0x14 + 4) + 8) = 6;
      uVar5 = uVar6;
    } while (uVar6 < (uint)((param_1[1] - *param_1) / 0x14));
  }
  param_1[3] = 1;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}


