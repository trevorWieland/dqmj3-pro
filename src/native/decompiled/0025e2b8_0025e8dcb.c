#include "0025e2b8_0025e8dcb.h"



void fn_0025e8dc(int param_1)

{
  int *piVar1;
  int iVar2;
  
  fn_0068af5c();
  iVar2 = 0;
  do {
    if (*(int *)(*(int *)(param_1 + 0x20) + iVar2 * 4) != -1) {
      piVar1 = (int *)fn_001854ac(*(undefined4 *)(param_1 + 0x14));
      (**(code **)(*piVar1 + 0x60))();
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  return;
}



void fn_0025e868(int param_1,undefined4 param_2)

{
  int iVar1;
  uint in_fpscr;
  
  iVar1 = fn_0068b334(param_2);
  if (iVar1 == -1) {
    return;
  }
  *(char *)(param_1 + 0x30) = (char)iVar1;
  VectorSignedToFloat(iVar1 + 1,(byte)(in_fpscr >> 0x16) & 3);
  fn_0025e43c(param_1,0x22);
  fn_0025e43c(param_1,0x26);
  return;
}



void fn_0025e7fc(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    if (*(int *)(*(int *)(param_1 + 0x20) + iVar2 * 4) != -1) {
      piVar1 = (int *)fn_001854ac(*(undefined4 *)(param_1 + 0x14));
      (**(code **)(*piVar1 + 0xc))(piVar1);
      (**(code **)(*piVar1 + 0x14))(piVar1);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  return;
}



void fn_0025e7cc(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar2 = param_2[2];
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  *(undefined4 *)(param_1 + 0x34) = uVar3;
  *(undefined4 *)(param_1 + 0x38) = uVar4;
  iVar1 = *(int *)(param_1 + 0x4c);
  *(undefined4 *)(iVar1 + 0x24) = uVar2;
  *(undefined4 *)(iVar1 + 0x1c) = uVar3;
  *(undefined4 *)(iVar1 + 0x20) = uVar4;
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xef | 0x10;
  return;
}



void fn_0025e738(int param_1)

{
  int iVar1;
  
  fn_0068af3c();
  iVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x1c));
  fn_00151954(*(undefined4 *)(*(int *)(iVar1 + 0x10) + 0xc));
  iVar1 = 0;
  do {
    if (*(int *)(*(int *)(param_1 + 0x20) + iVar1 * 4) != -1) {
      fn_00159f34(*(undefined4 *)(param_1 + 0x14));
      *(undefined4 *)(*(int *)(param_1 + 0x20) + iVar1 * 4) = 0xffffffff;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  if (*(int *)(param_1 + 0x1c) != -1) {
    fn_0016a43c(*(undefined4 *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x18) != -1) {
                    /* WARNING: Subroutine does not return */
    fn_001482f4(*(undefined4 *)(param_1 + 0x14));
  }
  *(undefined1 *)(param_1 + 0x10) = 0;
  return;
}



void fn_0025e53c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  bool bVar6;
  
  if (*(int *)(param_1 + 0x18) == -1) {
    uVar1 = fn_001481c8(*(undefined4 *)(param_1 + 0x14),L"rom:/data/Layout/common/resident.arc",
                         &DAT_0025e728,1,1);
    *(undefined4 *)(param_1 + 0x18) = uVar1;
  }
  if (*(int *)(param_1 + 0x1c) == -1) {
    uVar1 = fn_001c8abc(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                         (char *)&DAT_00867dd4);
    *(undefined4 *)(param_1 + 0x1c) = uVar1;
  }
  iVar5 = 0;
  do {
    if (*(int *)(*(int *)(param_1 + 0x20) + iVar5 * 4) == -1) {
      uVar1 = fn_001853ec(*(undefined4 *)(param_1 + 0x14),(&DAT_007c7c08)[iVar5],
                           *(undefined4 *)(param_1 + 0x1c));
      *(undefined4 *)(*(int *)(param_1 + 0x20) + iVar5 * 4) = uVar1;
      piVar2 = (int *)fn_001854ac(*(undefined4 *)(param_1 + 0x14));
      (**(code **)(*piVar2 + 0x50))(piVar2,1);
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 4);
  iVar5 = fn_00178f9c(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x1c));
  piVar2 = *(int **)(iVar5 + 0x10);
  *(int **)(param_1 + 0x4c) = piVar2;
  fn_0018a69c(*(undefined4 *)(param_1 + 0x2c),piVar2);
  iVar5 = 0;
  do {
    iVar3 = (**(code **)(*piVar2 + 0x2c))(piVar2,(&DAT_007c7c18)[iVar5],1);
    *(int *)(*(int *)(param_1 + 0x50) + iVar5 * 4) = iVar3;
    if (7 < iVar5 - 0x22U) {
      *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x2a);
  iVar5 = *(int *)(param_1 + 0x4c);
  uVar1 = *(undefined4 *)(param_1 + 0x38);
  uVar4 = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(iVar5 + 0x1c) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(iVar5 + 0x20) = uVar1;
  *(undefined4 *)(iVar5 + 0x24) = uVar4;
  *(byte *)(iVar5 + 0x44) = *(byte *)(iVar5 + 0x44) & 0xef | 0x10;
  *(byte *)(*(int *)(param_1 + 0x4c) + 0x44) =
       *(byte *)(param_1 + 0x48) | *(byte *)(*(int *)(param_1 + 0x4c) + 0x44) & 0xfe;
  bVar6 = *(char *)(param_1 + 0x49) == '\0';
  *(byte *)(**(int **)(param_1 + 0x50) + 0x44) =
       !bVar6 | *(byte *)(**(int **)(param_1 + 0x50) + 0x44) & 0xfe;
  iVar5 = *(int *)(*(int *)(param_1 + 0x50) + 4);
  *(byte *)(iVar5 + 0x44) = bVar6 | *(byte *)(iVar5 + 0x44) & 0xfe;
  *(undefined1 *)(param_1 + 0x10) = 1;
  fn_0068aeac(param_1,param_2);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0025e4e8) */
/* WARNING: Removing unreachable block (ram,0x0025e4fc) */
/* WARNING: Removing unreachable block (ram,0x0025e51c) */

void fn_0025e4c0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x24);
  if (param_2 == 0) {
    *(undefined1 *)(iVar1 + 0x49) = 1;
    iVar2 = **(int **)(iVar1 + 0x50);
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe | 1;
    iVar1 = *(int *)(*(int *)(iVar1 + 0x50) + 4);
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
    return;
  }
  fn_0025e4dc(iVar1,0);
  return;
}



void fn_0025e4dc(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  
  bVar4 = param_2 == 0;
  *(char *)(param_1 + 0x49) = (char)param_2;
  iVar2 = **(int **)(param_1 + 0x50);
  *(byte *)(iVar2 + 0x44) = !bVar4 | *(byte *)(iVar2 + 0x44) & 0xfe;
  iVar2 = *(int *)(param_1 + 0x50);
  piVar3 = (int *)(iVar2 + 4);
  if (bVar4) {
    iVar2 = 1;
  }
  bVar1 = (byte)iVar2;
  if (!bVar4) {
    bVar1 = 0;
  }
  *(byte *)(*piVar3 + 0x44) = bVar1 | *(byte *)(*piVar3 + 0x44) & 0xfe;
  return;
}


