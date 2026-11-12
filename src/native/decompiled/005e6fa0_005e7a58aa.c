#include "005e6fa0_005e7a58aa.h"



void fn_005e72e0(undefined4 *param_1,int *param_2,int param_3)

{
  *param_1 = *(undefined4 *)(*(int *)(*(int *)(*param_2 + 0x30) + 0x9c) + param_3 * 4);
  return;
}



void fn_005e72b4(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00858ae8;
  fn_002feef8(param_1[7]);
  fn_005df880(param_1);
  fn_002feef8();
  return;
}



void fn_005e6fa0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  
  piVar2 = *(int **)(param_1 + 4);
  iVar1 = *piVar2;
  *(undefined4 *)(iVar1 + 0x90) = 0;
  *(undefined4 *)(iVar1 + 0x8c) = 0x3f800000;
  *(undefined4 *)(iVar1 + 0x94) = 0;
  *(undefined4 *)(iVar1 + 0x98) = 0;
  *(undefined4 *)(iVar1 + 0x9c) = 0;
  *(undefined4 *)(iVar1 + 0xa0) = 0x3f800000;
  *(undefined4 *)(iVar1 + 0xa4) = 0;
  *(undefined4 *)(iVar1 + 0xa8) = 0;
  *(undefined4 *)(iVar1 + 0xac) = 0;
  *(undefined4 *)(iVar1 + 0xb0) = 0;
  *(undefined4 *)(iVar1 + 0xb4) = 0x3f800000;
  *(undefined4 *)(iVar1 + 0xb8) = 0;
  fn_005ec694(*piVar2,param_2,param_3);
  fn_005ec718(*piVar2,param_2,param_3);
  fn_005ec610(*piVar2,param_2,param_3);
  iVar1 = *piVar2;
  piVar2 = *(int **)(iVar1 + 0x148);
  uVar3 = *(uint *)(*piVar2 + 0x60);
  uVar4 = *(uint *)(*piVar2 + 100);
  if ((char)piVar2[0xe] != '\0' && uVar3 < uVar4) {
    do {
      if (((uint)*(byte *)(piVar2[0xc] + (uint)(*(ushort *)(uVar3 + 4) >> 3)) &
          1 << (*(ushort *)(uVar3 + 4) & 7)) != 0) {
        fn_005eb2f8(piVar2,param_2,param_3,iVar1,iVar1 + 0x8c,uVar3);
      }
      uVar3 = uVar3 + 0x38;
    } while (uVar3 < uVar4);
  }
  return;
}


