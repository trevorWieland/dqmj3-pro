#include "00260b38_00260ed0.h"



void fn_00260ed0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  fn_00144810(DAT_008977e8);
  iVar1 = fn_006be434();
  if (iVar1 != 0) {
    return;
  }
  if (*(int *)(param_1 + 0x6c) != -1) {
    piVar2 = (int *)fn_0068c7e8(DAT_008977e8);
    (**(code **)(*piVar2 + 0xc))(piVar2,*(undefined4 *)(param_1 + 0x6c));
    *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



void fn_00260cf4(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int local_20;
  int local_1c [2];
  
  iVar3 = *(int *)(param_1 + 0x80);
  *(int *)(param_1 + 0x80) = iVar3 + -1;
  if (iVar3 != 0) {
    fn_0018367c(*(undefined4 *)(param_1 + 4));
    iVar3 = fn_006eb3a4();
    if (iVar3 == 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x80) = 0;
    (**(code **)(**(int **)(param_1 + 4) + 0x18))(*(int **)(param_1 + 4),0);
    if (*(int *)(param_1 + 0x6c) != -1) {
      piVar4 = (int *)fn_0068c7e8(DAT_008977e8);
      (**(code **)(*piVar4 + 0xc))(piVar4,*(undefined4 *)(param_1 + 0x6c));
      *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
    }
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  if (*(char *)(*(int *)(param_1 + 0x7c) + 0x89) != '\0') {
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  fn_0068b6e4(*(undefined4 *)(param_1 + 0x7c));
  local_20 = 0x14;
  uVar1 = *(undefined1 *)(*(int *)(param_1 + 0x7c) + 0x53);
  uVar5 = fn_00144810(DAT_008977e8);
  local_1c[0] = fn_006a8858(uVar5,uVar1,0);
  piVar4 = &local_20;
  if (local_1c[0] < local_20) {
    piVar4 = local_1c;
  }
  iVar3 = *piVar4;
  cVar2 = *(char *)(*(int *)(param_1 + 0x7c) + 0x53);
  uVar5 = fn_00144810(DAT_008977e8);
  fn_001cc250(uVar5,(int)cVar2,iVar3);
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



void fn_00260b90(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  float fVar4;
  
  fVar4 = (float)param_1[0x22] - 0.033333335;
  param_1[0x22] = (int)fVar4;
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  param_1[0x22] = (int)fVar4;
  (**(code **)(*param_1 + 0x34))(param_1);
  iVar1 = param_1[0x1c];
  param_1[0x1c] = iVar1 + -1;
  if (iVar1 + -1 < 0) {
    param_1[0x1c] = 0;
    (**(code **)(*param_1 + 0x34))(param_1);
    if (param_1[0x1b] != -1) {
      piVar2 = (int *)fn_0068c7e8(DAT_008977e8);
      (**(code **)(*piVar2 + 0xc))(piVar2,param_1[0x1b]);
      param_1[0x1b] = -1;
    }
    uVar3 = fn_0017fde4(param_1[1]);
    iVar1 = fn_0068c694(DAT_008977e8);
    fn_00162d54(*(undefined4 *)(iVar1 + 0x24),uVar3);
    iVar1 = fn_0068c694(DAT_008977e8);
    fn_00162d44(*(undefined4 *)(iVar1 + 0x24));
    fn_00144810(DAT_008977e8);
    fn_0030fce4();
    uVar3 = fn_0068c7e8(DAT_008977e8);
    iVar1 = fn_0023e194(uVar3,0x9c67,0);
    param_1[0x1a] = iVar1;
    param_1[0x21] = 0x44598000;
    fn_0068e960(DAT_008977e8);
    fn_0017fd40();
    *(undefined1 *)((int)param_1 + 0x5a) = 6;
  }
  return;
}



void fn_00260b60(undefined4 *param_1)

{
  *param_1 = &DAT_0081de94;
  fn_00260014(param_1,1);
  fn_00260750(param_1);
  fn_002feef8();
  return;
}



void fn_00260b38(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00260690();
  puVar1[0x1e] = 0;
  *puVar1 = &DAT_0081de94;
  puVar1[0x1f] = 0;
  *(undefined1 *)(puVar1 + 0x20) = 0;
  return;
}


