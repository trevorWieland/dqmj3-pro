#include "0051cfb4_00537704a.h"



int fn_0051cfb4(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  uint uVar8;
  
  piVar7 = (int *)*param_2;
  uVar8 = param_2[1];
  if (((piVar7 + -0x40000 < (int *)0x3ff00000) && (uVar8 - 1 < 0xc)) && (uVar8 < 0x19)) {
    uVar1 = (**(code **)(*piVar7 + 0x38))(piVar7);
    fn_004ede5c(DAT_008c0638,uVar1);
    fn_0050ffd8(DAT_008c0678,uVar8 + 8,uVar8);
    iVar2 = fn_0050b1ac(DAT_008bf4cc,piVar7,uVar8);
    if (iVar2 < 0) {
      return iVar2;
    }
    *(uint *)(param_1 + 0x30) = uVar8;
    fn_0050c67c(param_1 + 0x10);
    fn_005186f8(DAT_008c06a4,uVar8);
    fn_0051b8d8(DAT_008c06a0,uVar8);
    fn_005193c8(DAT_008c0690,uVar8 << 1);
    fn_00518e24(DAT_008c0674,uVar8);
    fn_00514c78(piVar7,param_2[2],param_2[3],DAT_008e96e0,DAT_008e96e4,(int)DAT_008e96e8);
    iVar2 = DAT_008bf4d0;
    piVar3 = (int *)(**(code **)(*piVar7 + 0x34))(piVar7);
    if (((DAT_008c62e4 & 1) == 0) && (iVar4 = fn_00303afc(&DAT_008c62e4), iVar4 != 0)) {
      DAT_008c62e8 = &DAT_0085976c;
    }
    if (piVar3 != (int *)0x0) {
      iVar4 = (**(code **)*piVar3)(piVar3,&DAT_008c62e8);
      if (iVar4 != 0) {
        if (((DAT_008c62e4 & 1) == 0) && (iVar4 = fn_00303afc(&DAT_008c62e4), iVar4 != 0)) {
          DAT_008c62e8 = &DAT_0085976c;
        }
        iVar4 = (**(code **)*piVar3)(piVar3,&DAT_008c62e8);
        if (iVar4 == 0) {
          piVar3 = (int *)0x0;
        }
        *(int **)(param_1 + 0x2c) = piVar3;
        uVar1 = (**(code **)(*piVar7 + 0x50))(piVar7);
        uVar5 = (**(code **)(**(int **)(iVar2 + 8) + 0x14))();
        uVar6 = (**(code **)(**(int **)(iVar2 + 8) + 0x10))();
        iVar2 = fn_00515774(*(undefined4 *)(param_1 + 0x2c),uVar6,uVar5,uVar1);
        if (iVar2 < 0) {
          return iVar2;
        }
        iVar2 = (**(code **)(*piVar7 + 0x30))(piVar7);
        if (iVar2 < 0) {
          return iVar2;
        }
        iVar2 = fn_00512f9c(DAT_008c06a8);
        if (iVar2 < 0) {
          return iVar2;
        }
        *(undefined4 *)(param_1 + 0x68) = param_2[4];
        iVar2 = fn_0050ab60(*(undefined4 *)(param_1 + 0x7c),uVar8);
        if (iVar2 < 0) {
          return iVar2;
        }
        iVar2 = fn_0050baa4(DAT_008c0670);
        if (iVar2 < 0) {
          return iVar2;
        }
        DAT_008ed936 = (short)param_2[1];
        DAT_008ed938 = param_2[2];
        DAT_008ed93c = param_2[3];
        return 0;
      }
      (**(code **)(*piVar3 + 0xc))(piVar3);
    }
  }
  return -0x1f1eb7da;
}


