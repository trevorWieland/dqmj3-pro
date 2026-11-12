#include "002b7c3c_002b8090ba.h"



void fn_002b7eb0(int param_1,char *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  bool bVar6;
  undefined1 local_28 [4];
  undefined1 local_24 [8];
  
  local_28[0] = 0x22;
  uVar1 = fn_0017484c(DAT_008977e4);
  uVar1 = fn_00175d88(uVar1,local_28);
  iVar2 = fn_001748ec();
  iVar3 = fn_001748ec(uVar1);
  if (iVar3 == *param_2) {
    local_24[0] = 0x22;
    uVar1 = fn_0017484c(DAT_008977e4);
    fn_00175d88(uVar1,local_24);
    iVar2 = fn_001748ec();
    fn_003540b4(*(undefined4 *)(*(int *)(param_1 + 8) + 0x54));
    if (iVar2 != 0) {
      fn_0017baa4(*(undefined4 *)(*(int *)(param_1 + 8) + 0x54),iVar2,1);
    }
    fn_001d4db0(*(int *)(param_1 + 8) + 0x58,0,*(undefined4 *)(*(int *)(param_1 + 8) + 0x54));
    *(undefined1 *)(*(int *)(*(int *)(param_1 + 8) + 0x7c) + 0x42) = 0;
  }
  else {
    fn_003540b4(*(undefined4 *)(*(int *)(param_1 + 8) + 0x54));
    if (iVar2 != 0) {
      fn_0017baa4(*(undefined4 *)(*(int *)(param_1 + 8) + 0x54),iVar2,0);
    }
    fn_00353db0(*(undefined4 *)(*(int *)(param_1 + 8) + 0x54),*param_2,2);
    fn_001d4db0(*(int *)(param_1 + 8) + 0x58,*param_2,*(undefined4 *)(*(int *)(param_1 + 8) + 0x54)
                );
    *(char *)(*(int *)(*(int *)(param_1 + 8) + 0x7c) + 0x42) = *param_2;
  }
  iVar4 = fn_00174828(DAT_008977e4);
  iVar4 = iVar4 + *param_2 * 0x418;
  psVar5 = (short *)(iVar4 + -0x4080);
  bVar6 = psVar5 == (short *)0x0;
  iVar2 = 0;
  iVar3 = iVar4;
  if (!bVar6) {
    iVar2 = (int)*psVar5;
    iVar3 = iVar2;
  }
  if ((!bVar6 && iVar3 != 0) && iVar2 < 0 == (bVar6 && SBORROW4(iVar4 + -0x4000,0x80))) {
    iVar2 = fn_006c26b0(*(undefined4 *)(*(int *)(param_1 + 8) + 0x54));
    if (iVar2 != *param_2) {
      iVar2 = fn_00166804(psVar5);
      if (iVar2 == 0) {
        return;
      }
      iVar2 = fn_006c26b0(*(undefined4 *)(*(int *)(param_1 + 8) + 0x54));
      if (iVar2 != 0) {
        return;
      }
    }
    fn_002b7e1c(param_1);
  }
  return;
}


