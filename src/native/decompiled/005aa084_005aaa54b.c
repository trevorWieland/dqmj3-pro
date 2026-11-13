#include "005aa084_005aaa54b.h"



void fn_005aaa54(int param_1)

{
  fn_003956e0();
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}



void fn_005aa9e8(int *param_1,int param_2,int param_3,int param_4)

{
  (**(code **)(*param_1 + 0xc))(param_1);
  param_1[2] = param_2;
  *(undefined1 *)(param_1 + 5) = 1;
  param_1[3] = param_3;
  param_1[4] = param_4;
  return;
}



undefined4 * fn_005aa6fc(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint *puVar9;
  uint uVar10;
  uint local_20;
  uint local_1c;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  puVar1[0x19] = 0;
  *puVar1 = &DAT_00847268;
  puVar1[0x21] = 0;
  puVar1[0x22] = 0;
  puVar1[0x23] = 0;
  puVar1[0x24] = 0;
  puVar1[0x25] = 0;
  puVar1[0x26] = 0;
  *(undefined1 *)((int)puVar1 + 0xa2) = 1;
  *(undefined1 *)((int)puVar1 + 0xa3) = 1;
  *(undefined1 *)(puVar1 + 0x29) = 0;
  local_20 = 0x40;
  puVar9 = puVar1 + 0x21;
  if ((uint)((int)(puVar1[0x23] - puVar1[0x21]) >> 2) < 0x40) {
    uVar10 = (int)(puVar1[0x22] - puVar1[0x21]) >> 2;
    local_1c = uVar10 + (uVar10 >> 1) + (uVar10 >> 3);
    if (local_1c < uVar10 + 0x20) {
      local_1c = uVar10 + 0x20;
    }
    puVar6 = &local_1c;
    if (local_1c < 0x41) {
      puVar6 = &local_20;
    }
    uVar10 = *puVar6;
    puVar2 = (undefined4 *)fn_00100fc6(uVar10 << 2,0);
    puVar8 = (undefined4 *)puVar1[0x22];
    puVar3 = puVar2;
    for (puVar7 = (undefined4 *)*puVar9; puVar7 != puVar8; puVar7 = puVar7 + 1) {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *puVar7;
      }
      puVar3 = puVar3 + 1;
    }
    uVar4 = *puVar9;
    uVar5 = uVar4;
    if ((uint)puVar1[0x22] < uVar4) {
      do {
        uVar5 = uVar5 + 4;
      } while (uVar5 != puVar1[0x22]);
    }
    fn_001008c4(uVar4,(int)(puVar1[0x23] - uVar4) >> 2,0);
    uVar5 = *puVar9;
    puVar1[0x21] = puVar2;
    puVar1[0x22] = (puVar1[0x22] - uVar5 & 0xfffffffc) + (int)puVar2;
    puVar1[0x23] = puVar2 + uVar10;
  }
  puVar9 = puVar1 + 0x24;
  local_20 = 0x40;
  if ((uint)((int)(puVar1[0x26] - puVar1[0x24]) >> 2) < 0x40) {
    uVar10 = (int)(puVar1[0x25] - puVar1[0x24]) >> 2;
    local_1c = uVar10 + (uVar10 >> 1) + (uVar10 >> 3);
    if (local_1c < uVar10 + 0x20) {
      local_1c = uVar10 + 0x20;
    }
    puVar6 = &local_1c;
    if (local_1c < 0x41) {
      puVar6 = &local_20;
    }
    uVar10 = *puVar6;
    puVar2 = (undefined4 *)fn_00100fc6(uVar10 << 2,0);
    puVar8 = (undefined4 *)puVar1[0x25];
    puVar3 = puVar2;
    for (puVar7 = (undefined4 *)*puVar9; puVar7 != puVar8; puVar7 = puVar7 + 1) {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *puVar7;
      }
      puVar3 = puVar3 + 1;
    }
    uVar4 = *puVar9;
    uVar5 = uVar4;
    if ((uint)puVar1[0x25] < uVar4) {
      do {
        uVar5 = uVar5 + 4;
      } while (uVar5 != puVar1[0x25]);
    }
    fn_001008c4(uVar4,(int)(puVar1[0x26] - uVar4) >> 2,0);
    uVar5 = *puVar9;
    puVar1[0x24] = puVar2;
    puVar1[0x25] = (puVar1[0x25] - uVar5 & 0xfffffffc) + (int)puVar2;
    puVar1[0x26] = puVar2 + uVar10;
  }
  return puVar1;
}



void fn_005aa42c(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  *(int *)(param_1 + 100) = param_2;
  piVar1 = (int *)(**(code **)(**(int **)(param_2 + 0x10) + 0x2c))
                            (*(int **)(param_2 + 0x10),(char *)&DAT_0085d918,1);
  if (piVar1 != (int *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 8))(piVar1);
    do {
      if (puVar2 == &DAT_0089a924) goto LAB_005aa490;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  piVar1 = (int *)0x0;
LAB_005aa490:
  *(int **)(param_1 + 0x68) = piVar1;
  piVar1 = *(int **)(*(int *)(param_1 + 100) + 0x10);
  piVar1 = (int *)(**(code **)(*piVar1 + 0x2c))(piVar1,(char *)&DAT_0085d908,1);
  if (piVar1 != (int *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 8))(piVar1);
    do {
      if (puVar2 == &DAT_0089a930) goto LAB_005aa4e4;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  piVar1 = (int *)0x0;
LAB_005aa4e4:
  *(int **)(param_1 + 0x6c) = piVar1;
  piVar1 = *(int **)(*(int *)(param_1 + 100) + 0x10);
  piVar1 = (int *)(**(code **)(*piVar1 + 0x2c))(piVar1,(char *)&DAT_0085d958,1);
  if (piVar1 != (int *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 8))(piVar1);
    do {
      if (puVar2 == &DAT_0089a934) goto LAB_005aa53c;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  piVar1 = (int *)0x0;
LAB_005aa53c:
  *(int **)(param_1 + 0x74) = piVar1;
  piVar1 = *(int **)(*(int *)(param_1 + 100) + 0x10);
  piVar1 = (int *)(**(code **)(*piVar1 + 0x2c))(piVar1,(char *)&DAT_0085d968,1);
  if (piVar1 != (int *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 8))(piVar1);
    do {
      if (puVar2 == &DAT_0089a934) goto LAB_005aa590;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  piVar1 = (int *)0x0;
LAB_005aa590:
  *(int **)(param_1 + 0x70) = piVar1;
  piVar1 = *(int **)(*(int *)(param_1 + 100) + 0x10);
  piVar1 = (int *)(**(code **)(*piVar1 + 0x2c))(piVar1,(char *)&DAT_0085d934,1);
  if (piVar1 != (int *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 8))(piVar1);
    do {
      if (puVar2 == &DAT_0089a934) goto LAB_005aa5e4;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  piVar1 = (int *)0x0;
LAB_005aa5e4:
  *(int **)(param_1 + 0x78) = piVar1;
  piVar1 = *(int **)(*(int *)(param_1 + 100) + 0x10);
  piVar1 = (int *)(**(code **)(*piVar1 + 0x2c))(piVar1,(char *)&DAT_0085d924,1);
  if (piVar1 != (int *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 8))(piVar1);
    do {
      if (puVar2 == &DAT_0089a934) goto LAB_005aa634;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  piVar1 = (int *)0x0;
LAB_005aa634:
  *(int **)(param_1 + 0x7c) = piVar1;
  piVar1 = *(int **)(*(int *)(param_1 + 100) + 0x10);
  piVar1 = (int *)(**(code **)(*piVar1 + 0x2c))(piVar1,(char *)&DAT_0085d948,1);
  if (piVar1 != (int *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 8))(piVar1);
    do {
      if (puVar2 == &DAT_0089a924) goto LAB_005aa684;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  piVar1 = (int *)0x0;
LAB_005aa684:
  *(int **)(param_1 + 0x80) = piVar1;
  *(byte *)(*(int *)(param_1 + 0x6c) + 0x44) = *(byte *)(*(int *)(param_1 + 0x6c) + 0x44) & 0xfe;
  *(byte *)(*(int *)(param_1 + 0x74) + 0x44) = *(byte *)(*(int *)(param_1 + 0x74) + 0x44) & 0xfe;
  *(byte *)(*(int *)(param_1 + 0x70) + 0x44) = *(byte *)(*(int *)(param_1 + 0x70) + 0x44) & 0xfe;
  *(byte *)(*(int *)(param_1 + 0x78) + 0x44) = *(byte *)(*(int *)(param_1 + 0x78) + 0x44) & 0xfe;
  *(byte *)(*(int *)(param_1 + 0x7c) + 0x44) = *(byte *)(*(int *)(param_1 + 0x7c) + 0x44) & 0xfe;
  *(byte *)(*(int *)(param_1 + 0x80) + 0x44) = *(byte *)(*(int *)(param_1 + 0x80) + 0x44) & 0xfe;
  return;
}


