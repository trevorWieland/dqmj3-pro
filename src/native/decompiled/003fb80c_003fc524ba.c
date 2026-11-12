#include "003fb80c_003fc524ba.h"



undefined4 fn_003fbf44(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  fn_0039bdf4();
  (**(code **)(*param_1 + 0x118))(param_1,DAT_00894dcc,DAT_00894dd0,DAT_00894dd4);
  iVar4 = 0;
  do {
    iVar3 = param_1[0x2a];
    iVar1 = iVar4 * 4;
    uVar2 = fn_0068897c(*(undefined4 *)(param_1[0x1d] + 0x10),(&DAT_00894de4)[iVar4]);
    iVar4 = iVar4 + 1;
    *(undefined4 *)(iVar3 + iVar1) = uVar2;
  } while (iVar4 < 0xd);
  fn_003fc048(param_1);
  fn_0039c438(param_1);
  fn_0031c7bc(param_1);
  fn_0031ca48(param_1);
  fn_0031c02c(param_1);
  return 1;
}



void fn_003fbef0(int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = *(int *)(param_1 + 0xac) - *(int *)(param_1 + 0xa8) >> 2;
  iVar1 = iVar2 + -1;
  if (iVar2 != 0 && -2 < iVar1) {
    do {
      iVar2 = iVar1 + -1;
      bVar3 = iVar1 != 0;
      *(undefined4 *)(*(int *)(param_1 + 0xa8) + iVar1 * 4) = 0;
      iVar1 = iVar2;
    } while (bVar3 && -2 < iVar2);
  }
  fn_0022ccb4(param_1);
  fn_0039bcdc(param_1);
  return;
}



void fn_003fbeb0(undefined4 *param_1)

{
  *param_1 = &DAT_00835ff8;
  if ((int *)param_1[0x28] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x28] + 4))();
  }
  fn_003e2a90(param_1);
  fn_002feef8();
  return;
}


