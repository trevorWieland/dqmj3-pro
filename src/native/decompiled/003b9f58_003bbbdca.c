#include "003b9f58_003bbbdca.h"



void fn_003ba440(int param_1)

{
  if (*(int **)(param_1 + 0x7c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x7c) + 4))();
  }
  fn_006898b8(param_1,0x7e,0);
  fn_0066e620(DAT_00897850,0);
  *(undefined1 *)(*(int *)(param_1 + 0x78) + 0xc) = 1;
  if (*(int **)(param_1 + 100) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 100) + 4))();
    *(undefined4 *)(param_1 + 100) = 0;
  }
  return;
}



void fn_003ba410(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0056a644();
  *puVar1 = &PTR_LAB_0082f1bc;
  *(undefined1 *)(puVar1 + 4) = 0;
  return;
}



int fn_003ba23c(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  puVar1 = (undefined4 *)fn_0028e264();
  *puVar1 = &DAT_0082f1a8;
  iVar2 = fn_00128f40(puVar1 + 2);
  *(undefined4 *)(iVar2 + 8) = 0;
  *(undefined4 *)(iVar2 + 0xc) = 0;
  *(undefined4 *)(iVar2 + 0x10) = 0;
  *(undefined4 *)(iVar2 + 0x14) = 0xffffffff;
  fn_0012d6e0(L"rom:/data/Menu/Library/diary.nut",iVar2);
  fn_00121838(DAT_00897800,DAT_00893eec,1);
  uVar3 = fn_00118290();
  iVar4 = fn_0011c184(L"patch:/data/Script/Field/Event/EventFlagTbl.bin",uVar3,4,5);
  *(int *)(iVar2 + 0xc) = iVar4;
  if ((iVar4 != 0) && (iVar4 = fn_00145ac0(), iVar4 != 0)) {
    iVar4 = fn_00145b00(8,&DAT_00812c8c);
    piVar5 = (int *)0x0;
    if (iVar4 != 0) {
      uVar3 = fn_00145ac0(*(undefined4 *)(iVar2 + 0xc));
      piVar5 = (int *)fn_00118624(iVar4,uVar3);
    }
    piVar6 = *(int **)(iVar2 + 8);
    if (piVar6 != piVar5) {
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 4))(piVar6);
      }
      *(int **)(iVar2 + 8) = piVar5;
    }
  }
  uVar3 = fn_00128e7c(iVar2,DAT_00893ee8,0);
  *(undefined4 *)(iVar2 + 0x10) = uVar3;
  return iVar2 + -8;
}



void fn_003ba0b4(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &DAT_0082f194;
  uVar1 = param_1[2];
  uVar2 = uVar1;
  if ((uint)param_1[3] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[3]);
  }
  fn_001008c4(uVar1,(int)(param_1[4] - uVar1) >> 2,0);
  fn_002feef8(param_1);
  return;
}



undefined4 * fn_003b9f58(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint *puVar10;
  uint uVar11;
  uint local_20;
  uint local_1c [3];
  
  iVar1 = fn_00145b00(0x1c,&DAT_00812c8c);
  if (iVar1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)fn_0028e264(iVar1,param_1);
  *puVar2 = &DAT_0082f194;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  *(undefined1 *)(puVar2 + 6) = 0xff;
  local_20 = 100;
  puVar10 = puVar2 + 2;
  if ((uint)((int)(puVar2[4] - puVar2[2]) >> 2) < 100) {
    uVar11 = (int)(puVar2[3] - puVar2[2]) >> 2;
    local_1c[0] = uVar11 + (uVar11 >> 1) + (uVar11 >> 3);
    if (local_1c[0] < uVar11 + 0x20) {
      local_1c[0] = uVar11 + 0x20;
    }
    puVar7 = local_1c;
    if (local_1c[0] < 0x65) {
      puVar7 = &local_20;
    }
    uVar11 = *puVar7;
    puVar3 = (undefined4 *)fn_00100fc6(uVar11 << 2,0);
    puVar9 = (undefined4 *)puVar2[3];
    puVar4 = puVar3;
    for (puVar8 = (undefined4 *)*puVar10; puVar8 != puVar9; puVar8 = puVar8 + 1) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = *puVar8;
      }
      puVar4 = puVar4 + 1;
    }
    uVar5 = *puVar10;
    uVar6 = uVar5;
    if ((uint)puVar2[3] < uVar5) {
      do {
        uVar6 = uVar6 + 4;
      } while (uVar6 != puVar2[3]);
    }
    fn_001008c4(uVar5,(int)(puVar2[4] - uVar5) >> 2,0);
    uVar6 = *puVar10;
    puVar2[2] = puVar3;
    puVar2[3] = (puVar2[3] - uVar6 & 0xfffffffc) + (int)puVar3;
    puVar2[4] = puVar3 + uVar11;
  }
  return puVar2;
}


