#include "00482b9c_00482f98b.h"



void fn_00482f98(int param_1)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  code *local_38;
  int *piStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  
  iVar7 = *(int *)(param_1 + 0x88);
  iVar8 = *(int *)(param_1 + 0x1ac) + 8;
  piVar6 = (int *)**(int **)(iVar7 + 0x6c);
  if (piVar6 != *(int **)(iVar7 + 0x6c)) {
    do {
      iVar3 = (**(code **)(*(int *)piVar6[2] + 0x1c))((int *)piVar6[2],iVar8);
      if (iVar3 != 0) {
        piVar6 = (int *)piVar6[2];
        goto LAB_00482ffc;
      }
      piVar6 = (int *)*piVar6;
    } while (piVar6 != (int *)*(int *)(iVar7 + 0x6c));
  }
  piVar6 = (int *)0x0;
LAB_00482ffc:
  if ((piVar6 == (int *)0x0) ||
     (piVar6 = (int *)(**(code **)(*piVar6 + 0x24))(piVar6,iVar8), piVar6 == (int *)0x0)) {
    uVar1 = *(ushort *)(param_1 + 0x1aa);
  }
  else {
    (**(code **)(*piVar6 + 0x5c))(&local_38,piVar6,*(undefined4 *)(iVar7 + 0x54));
    *(int **)(param_1 + 0x78) = piVar6;
    if (*(char *)(param_1 + 0x1a8) != '\0') {
      iVar7 = *(int *)(param_1 + 0x88);
      uVar4 = *(uint *)(iVar7 + 0x30);
      if ((((uVar4 & 0xff) != 0 || (uVar4 >> 8 & 0xff) != 0) || (uVar4 >> 0x10 & 0xff) != 0) ||
          uVar4 >> 0x18 != 0) {
        (**(code **)(*piVar6 + 0x40))(piVar6,0xffffffff);
        (**(code **)(*piVar6 + 0x38))(piVar6);
        iVar8 = fn_004b7748();
        if (iVar8 == 0) {
          piVar5 = (int *)0x0;
        }
        else {
          piVar5 = *(int **)(iVar8 + 0x90);
        }
        iVar8 = (**(code **)(*piVar5 + 0x28))();
        if ((char)piVar6[0x1b] == '\0') {
          fn_0014ea80(piVar6 + 2);
        }
        fn_0045e504(*(int *)(iVar8 + 0xc) + 0x78,piVar6[3],iVar7 + 0x28,1);
      }
    }
    piStack_34 = &local_20;
    uStack_30 = *(undefined4 *)(param_1 + 0x98);
    local_38 = fn_003e68fc;
    local_20 = param_1;
    (**(code **)(**(int **)(param_1 + 0x78) + 0x70))
              (&local_2c,*(int **)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x17c),
               *(undefined4 *)(param_1 + 0x180));
    *(undefined4 *)(param_1 + 0x7c) = local_2c;
    *(undefined4 *)(param_1 + 0x80) = local_28;
    *(undefined4 *)(param_1 + 0x84) = local_24;
    if (-1 < *(int *)(param_1 + 0x7c)) {
      piVar6 = (int *)(param_1 + 4);
      do {
        bVar2 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar2);
      *piVar6 = *piVar6 + 1;
      fn_004b301c(param_1,2);
      fn_0013d0fc(&local_38);
      *(code **)(param_1 + 0x40) = local_38;
      *(int **)(param_1 + 0x44) = piStack_34;
      *(undefined **)(param_1 + 0x58) = &DAT_00483224;
      *(code **)(param_1 + 0x50) = fn_00484074;
      *(undefined4 *)(param_1 + 0x54) = 0;
      return;
    }
    (**(code **)(**(int **)(*(int *)(param_1 + 0x78) + 4) + 0x40))();
    *(undefined4 *)(param_1 + 0x78) = 0;
    uVar1 = *(ushort *)(param_1 + 0x1aa);
  }
  if (uVar1 != 0) {
    iVar7 = *(int *)(param_1 + 0x1ac);
    fn_0017695c(iVar7 + 8);
    *(ushort *)(*(int *)(iVar7 + 0xc) + 6) = uVar1 << 8 | uVar1 >> 8;
    *(undefined1 *)(iVar7 + 0x6d) = 0;
    *(undefined2 *)(param_1 + 0x1aa) = 0;
  }
  *(undefined4 *)(param_1 + 0x1ac) = **(undefined4 **)(param_1 + 0x1ac);
  fn_0013d0fc(&local_38);
  *(code **)(param_1 + 0x40) = local_38;
  *(int **)(param_1 + 0x44) = piStack_34;
  *(undefined **)(param_1 + 0x58) = &DAT_00483224;
  *(code **)(param_1 + 0x50) = fn_0048322c;
  *(undefined4 *)(param_1 + 0x54) = 0;
  return;
}


