#include "005ec2d0_005ec764b.h"



undefined4 *
fn_005ec764(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  puVar1 = (undefined4 *)fn_00543524(param_1,param_4,0,param_3);
  puVar1[0x52] = 0;
  *puVar1 = &DAT_00858d38;
  iVar2 = fn_00145b00(0xd0,&DAT_00812c8c);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = fn_005eb894(iVar2,param_2,param_5,param_6,param_7);
  }
  iVar2 = puVar1[0x52];
  if (iVar2 != iVar3) {
    if (iVar2 != 0) {
      fn_005ec2d0(iVar2);
      fn_002feef8();
    }
    puVar1[0x52] = iVar3;
  }
  *(byte *)(puVar1[0x52] + 0x98) = *(byte *)(puVar1[0x52] + 0x98) | 0x10;
  iVar3 = *(int *)puVar1[0x52];
  uVar4 = *(undefined4 *)(iVar3 + 8);
  uVar5 = *(undefined4 *)(iVar3 + 0xc);
  uVar6 = *(undefined4 *)(iVar3 + 0x10);
  uVar7 = *(undefined4 *)(iVar3 + 0x14);
  uVar8 = *(undefined4 *)(iVar3 + 0x18);
  uVar9 = *(undefined4 *)(iVar3 + 0x1c);
  uVar10 = *(undefined4 *)(iVar3 + 0x20);
  puVar1[0x23] = *(undefined4 *)(iVar3 + 4);
  puVar1[0x24] = uVar4;
  puVar1[0x25] = uVar5;
  puVar1[0x26] = uVar6;
  puVar1[0x27] = uVar7;
  puVar1[0x28] = uVar8;
  puVar1[0x29] = uVar9;
  puVar1[0x2a] = uVar10;
  uVar4 = *(undefined4 *)(iVar3 + 0x28);
  uVar5 = *(undefined4 *)(iVar3 + 0x2c);
  uVar6 = *(undefined4 *)(iVar3 + 0x30);
  puVar1[0x2b] = *(undefined4 *)(iVar3 + 0x24);
  puVar1[0x2c] = uVar4;
  puVar1[0x2d] = uVar5;
  puVar1[0x2e] = uVar6;
  return puVar1;
}



void fn_005ec738(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  fn_005eb2f8(*(undefined4 *)(param_1 + 0x148),param_2,param_3,param_1,param_1 + 0x8c,param_4);
  return;
}



void fn_005ec718(int param_1,undefined4 param_2,undefined4 param_3)

{
  fn_005eb1b4(*(undefined4 *)(param_1 + 0x148),param_2,param_3,param_1,param_1 + 0x8c);
  return;
}



void fn_005ec694(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  
  piVar2 = *(int **)(param_1 + 0x148);
  uVar1 = *(uint *)(*piVar2 + 0x48);
  uVar3 = *(uint *)(*piVar2 + 0x4c);
  if ((char)piVar2[0xe] != '\0' && uVar1 < uVar3) {
    do {
      if (((uint)*(byte *)(piVar2[0xc] + (uint)(*(ushort *)(uVar1 + 4) >> 3)) &
          1 << (*(ushort *)(uVar1 + 4) & 7)) != 0) {
        fn_005eb2f8(piVar2,param_2,param_3,param_1,param_1 + 0x8c,uVar1);
      }
      uVar1 = uVar1 + 0x38;
    } while (uVar1 < uVar3);
  }
  return;
}



void fn_005ec610(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  
  piVar2 = *(int **)(param_1 + 0x148);
  uVar1 = *(uint *)(*piVar2 + 0x58);
  uVar3 = *(uint *)(*piVar2 + 0x5c);
  if ((char)piVar2[0xe] != '\0' && uVar1 < uVar3) {
    do {
      if (((uint)*(byte *)(piVar2[0xc] + (uint)(*(ushort *)(uVar1 + 4) >> 3)) &
          1 << (*(ushort *)(uVar1 + 4) & 7)) != 0) {
        fn_005eb2f8(piVar2,param_2,param_3,param_1,param_1 + 0x8c,uVar1);
      }
      uVar1 = uVar1 + 0x38;
    } while (uVar1 < uVar3);
  }
  return;
}


