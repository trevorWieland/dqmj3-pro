#include "single_002b7e1c_r.h"


extern undefined4 _local_10;

void fn_002b7e1c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_10;
  undefined3 uStack_f;
  
  _local_10 = CONCAT31((int3)((uint)param_4 >> 8),0x20);
  uVar1 = fn_0017484c(DAT_008977e4);
  fn_00175dcc(uVar1,&local_10);
  iVar2 = fn_001748ec();
  fn_001d4c0c(*(int *)(param_1 + 8) + 0x58,iVar2,*(undefined4 *)(*(int *)(param_1 + 8) + 0x54));
  *(char *)(*(int *)(*(int *)(param_1 + 8) + 0x7c) + 0x40) = (char)iVar2;
  fn_0035402c(*(undefined4 *)(*(int *)(param_1 + 8) + 0x54));
  if (iVar2 != 0) {
    fn_0035326c(*(undefined4 *)(*(int *)(param_1 + 8) + 0x54),iVar2,0);
    fn_0017b1e8(*(undefined4 *)(*(int *)(param_1 + 8) + 0x54),iVar2,0);
  }
  return;
}


