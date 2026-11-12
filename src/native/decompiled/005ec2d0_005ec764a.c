#include "005ec2d0_005ec764a.h"



void fn_005ec4fc(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_s0;
  undefined4 in_s1;
  undefined4 in_s2;
  
  piVar2 = *(int **)(param_1 + 4);
  iVar1 = *piVar2;
  *(undefined4 *)(iVar1 + 0x90) = 0;
  *(undefined4 *)(iVar1 + 0x8c) = 0x3f800000;
  *(undefined4 *)(iVar1 + 0x94) = 0;
  *(undefined4 *)(iVar1 + 0x98) = in_s0;
  *(undefined4 *)(iVar1 + 0x9c) = 0;
  *(undefined4 *)(iVar1 + 0xa0) = 0x3f800000;
  *(undefined4 *)(iVar1 + 0xa4) = 0;
  *(undefined4 *)(iVar1 + 0xa8) = in_s1;
  *(undefined4 *)(iVar1 + 0xac) = 0;
  *(undefined4 *)(iVar1 + 0xb0) = 0;
  *(undefined4 *)(iVar1 + 0xb4) = 0x3f800000;
  *(undefined4 *)(iVar1 + 0xb8) = in_s2;
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



int * fn_005ec438(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined1 local_30;
  undefined1 local_2f;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar1 = (**(code **)(*param_2 + 8))(param_2,0x14c,4);
  local_2f = 1;
  local_2c = 4;
  uStack_28 = 8;
  uStack_24 = 1;
  local_30 = 0;
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_005ec764(iVar1,param_1,&local_30,param_2,param_3,param_4,param_5);
  }
  uVar3 = (**(code **)(*piVar2 + 0x24))(piVar2,param_2);
  if ((uVar3 & 0x80000000) != 0) {
    (**(code **)(*param_2 + 0xc))(param_2,piVar2);
    piVar2 = (int *)0x0;
  }
  return piVar2;
}



void fn_005ec3dc(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != (int *)0x0) {
    puVar1 = (undefined4 *)(**(code **)(*param_2 + 8))(param_2);
    do {
      if (puVar1 == &DAT_008bf788) {
        if (param_2 != (int *)0x0) {
          fn_005e42cc(param_2,param_1);
        }
        break;
      }
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  fn_005434d4(param_1,param_2);
  return;
}



int fn_005ec2d0(int param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    do {
      piVar3 = (int *)(*(int *)(param_1 + 0x8c) + uVar2 * 4);
      if (*piVar3 != 0) {
        fn_005e7e54();
        fn_002feef8();
        *piVar3 = 0;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 8));
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    fn_00143b48();
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  if (*(int *)(param_1 + 100) != 0) {
    fn_00143a58();
    *(undefined4 *)(param_1 + 100) = 0;
  }
  if (*(int *)(param_1 + 0x68) != 0) {
    fn_00143b48();
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  uVar1 = *(uint *)(param_1 + 0x8c);
  uVar2 = uVar1;
  if (*(uint *)(param_1 + 0x90) < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != *(uint *)(param_1 + 0x90));
  }
  fn_001008c4(uVar1,(int)(*(int *)(param_1 + 0x94) - uVar1) >> 2,0);
  uVar1 = *(uint *)(param_1 + 0x54);
  uVar2 = uVar1;
  if (*(uint *)(param_1 + 0x58) <= uVar1) {
    for (; uVar2 != *(uint *)(param_1 + 0x58); uVar2 = uVar2 + 8) {
    }
  }
  fn_001008c4(uVar1,(int)(*(int *)(param_1 + 0x5c) - uVar1) >> 3,0);
  return param_1;
}


