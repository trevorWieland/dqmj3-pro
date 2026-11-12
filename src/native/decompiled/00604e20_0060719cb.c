#include "00604e20_0060719cb.h"



void fn_0060719c(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  fn_0039536c();
  piVar3 = *(int **)(param_1 + 0x24);
  piVar1 = (int *)*piVar3;
  while (piVar1 != piVar3) {
    piVar2 = *(int **)(param_1 + 0x24);
    if (piVar1 != *(int **)(param_1 + 0x24)) {
      piVar2 = (int *)*piVar1;
      *(int **)piVar1[1] = piVar2;
      *(int *)(*piVar1 + 4) = piVar1[1];
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
      (**(code **)piVar1[2])(piVar1 + 2);
      *piVar1 = *(int *)(param_1 + 0x18);
      *(int **)(param_1 + 0x18) = piVar1;
    }
    piVar1 = piVar2;
  }
  return;
}



void fn_006070e4(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  *param_1 = &DAT_0084f56c;
  iVar1 = 0;
  do {
    (**(code **)(*(int *)param_1[iVar1 * 7 + 0x1c] + 0x18))();
    if ((int *)param_1[iVar1 * 7 + 0x1c] != (int *)0x0) {
      (**(code **)(*(int *)param_1[iVar1 * 7 + 0x1c] + 4))();
    }
    iVar2 = iVar1 + 1;
    param_1[iVar1 * 7 + 0x1c] = 0;
    iVar1 = iVar2;
  } while (iVar2 < 4);
  uVar3 = *(undefined4 *)(param_1[1] + 8);
  fn_00159f34(uVar3,param_1[0x1b]);
  fn_0016a43c(uVar3,param_1[0x1a]);
                    /* WARNING: Subroutine does not return */
  fn_001482f4(uVar3,param_1[0x19]);
}



int fn_00606718(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar2 = uVar1;
  if (*(uint *)(param_1 + 0x14) < uVar1) {
    do {
      uVar2 = uVar2 + 0xf0;
    } while (uVar2 != *(uint *)(param_1 + 0x14));
  }
  uVar2 = *(int *)(param_1 + 0x18) - uVar1;
  iVar3 = (int)((longlong)(int)uVar2 * -0x77777777 + ((ulonglong)uVar2 << 0x20) >> 0x20);
  fn_001008c4(uVar1,(iVar3 >> 7) - (iVar3 >> 0x1f),0);
  uVar1 = *(uint *)(param_1 + 4);
  uVar2 = uVar1;
  if (*(uint *)(param_1 + 8) <= uVar1) {
    for (; uVar2 != *(uint *)(param_1 + 8); uVar2 = uVar2 + 4) {
    }
  }
  fn_001008c4(uVar1,(int)(*(int *)(param_1 + 0xc) - uVar1) >> 2,0);
  return param_1;
}



int fn_006065bc(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined1 auStack_40 [40];
  
  iVar1 = fn_00145b00(0xe0,&DAT_00812c8c);
  if (iVar1 == 0) {
    return 0;
  }
  puVar2 = (undefined4 *)fn_0068ab5c();
  *puVar2 = &DAT_0084f56c;
  puVar2[0x19] = 0xffffffff;
  puVar2[0x1a] = 0xffffffff;
  puVar2[0x1b] = 0xffffffff;
  iVar1 = fn_00101a1c(puVar2 + 0x1c,fn_006065ec,0x1c,4);
  uVar9 = *(undefined4 *)(param_1 + 8);
  iVar7 = iVar1 + -0x70;
  uVar3 = fn_001481c8(uVar9,DAT_00898ec4,&DAT_006070c0,1,1);
  *(undefined4 *)(iVar1 + -0xc) = uVar3;
  uVar3 = fn_001480d0(uVar9,uVar3,DAT_00898ec8,&DAT_006070c8,0,1,0);
  *(undefined4 *)(iVar1 + -8) = uVar3;
  uVar3 = fn_001853ec(uVar9,DAT_00898ecc,uVar3);
  *(undefined4 *)(iVar1 + -4) = uVar3;
  piVar4 = (int *)fn_001854ac(uVar9,uVar3);
  (**(code **)(*piVar4 + 0x50))(piVar4,1);
  uVar3 = fn_00178f9c(uVar9,*(undefined4 *)(iVar1 + -8));
  iVar8 = 0;
  do {
    fn_0017d96c(auStack_40,0x20,0x1f,(char *)&DAT_006070d0,iVar8);
    uVar9 = fn_00689220(uVar3,auStack_40);
    iVar5 = fn_00145b00(0x38,&DAT_00812c8c);
    piVar4 = (int *)0x0;
    if (iVar5 != 0) {
      iVar6 = iVar7 + iVar8 * 0x1c;
      piVar4 = (int *)fn_005b4f54(iVar5,param_1,uVar9,1,*(undefined4 *)(iVar1 + -0x28),iVar6 + 0x74
                                   ,iVar6 + 0x80,0,0);
    }
    *(int **)(iVar7 + iVar8 * 0x1c + 0x70) = piVar4;
    (**(code **)(*piVar4 + 0x10))();
    iVar8 = iVar8 + 1;
  } while (iVar8 < 4);
  return iVar7;
}



/* WARNING: Removing unreachable block (ram,0x0060668c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 * fn_006065ec(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined1 auStack_110 [240];
  int local_20;
  undefined4 local_1c;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar1 = (undefined4 *)fn_00100fc6(0x80,0);
  iVar2 = 4;
  param_1[1] = puVar1;
  do {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + 1;
  } while (iVar2 != 0);
  iVar2 = param_1[1];
  piVar4 = param_1 + 4;
  param_1[2] = iVar2 + 0x10;
  param_1[3] = iVar2 + 0x80;
  fn_00301f50(auStack_110,0xf0);
  *piVar4 = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  local_20 = 4;
  local_1c = 0x20;
  iVar2 = fn_00100fc6(0x1e00,0);
  *piVar4 = iVar2;
  for (iVar3 = local_20; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (iVar2 != 0) {
      fn_0017821c(iVar2,auStack_110,0xf0);
    }
    iVar2 = iVar2 + 0xf0;
  }
  param_1[6] = *piVar4 + 0x1e00;
  param_1[5] = *piVar4 + local_20 * 0xf0;
  return param_1;
}


