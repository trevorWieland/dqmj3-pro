#include "00216530_00216938.h"



void fn_00216938(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  if (param_2 == -1) {
    return;
  }
  uVar2 = 0;
  uVar1 = *(int *)(param_1 + 0x2ec) - *(int *)(param_1 + 0x2e8) >> 4;
  if (uVar1 == 0) {
    return;
  }
  do {
    puVar3 = (undefined4 *)(*(int *)(param_1 + 0x2e8) + uVar2 * 0x10);
    if (puVar3[1] == param_2) {
      (**(code **)(**(int **)(DAT_008977e0 + 0x2c) + 0xc))();
      puVar3[1] = 0xffffffff;
      *puVar3 = 0xffffffff;
      return;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < uVar1);
  return;
}



void fn_00216824(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    iVar1 = param_1 + uVar3 * 0x10;
    if (*(int *)(iVar1 + 0x1ec) != -1) {
      (**(code **)(**(int **)(DAT_008977e0 + 0x2c) + 0xc))();
      *(undefined4 *)(iVar1 + 0x1ec) = 0xffffffff;
      if (uVar3 < 7) {
        *(undefined4 *)(iVar1 + 0x1e8) = 0xffffffff;
        uVar2 = 0;
        if (*(int *)(param_1 + 0x374) - *(int *)(param_1 + 0x370) >> 2 != 0) {
          do {
            if (*(int *)(*(int *)(param_1 + 0x370) + uVar2 * 4) == -1) {
              *(undefined4 *)(*(int *)(param_1 + 0x370) + uVar2 * 4) = 0xffffffff;
            }
            uVar2 = uVar2 + 1;
          } while (uVar2 < (uint)(*(int *)(param_1 + 0x374) - *(int *)(param_1 + 0x370) >> 2));
        }
      }
    }
    uVar3 = uVar3 + 1 & 0xff;
  } while (uVar3 < 0x10);
  uVar3 = 0;
  if (*(int *)(param_1 + 0x2ec) - *(int *)(param_1 + 0x2e8) >> 4 != 0) {
    do {
      iVar1 = *(int *)(param_1 + 0x2e8) + uVar3 * 0x10;
      if (*(int *)(iVar1 + 4) != -1) {
        (**(code **)(**(int **)(DAT_008977e0 + 0x2c) + 0xc))();
        *(undefined4 *)(iVar1 + 4) = 0xffffffff;
      }
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < (uint)(*(int *)(param_1 + 0x2ec) - *(int *)(param_1 + 0x2e8) >> 4));
  }
  return;
}



void fn_002167f8(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = fn_001c7120();
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + param_2 * 0xc + 0x2fc) = param_4;
  }
  return;
}



void fn_00216784(int *param_1)

{
  if (param_1[0x39] == 0) {
    return;
  }
  (**(code **)(*(int *)param_1[0x5c] + 0x8c))();
  (**(code **)(*param_1 + 0x88))(param_1);
  fn_001da640(param_1);
  return;
}



void fn_00216530(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = (**(code **)(*param_1 + 0x180))(param_1);
  if (iVar1 != 0) goto LAB_00216708;
  fn_006f7a84(DAT_008977e0);
  fn_00259878();
  iVar1 = fn_001cab7c();
  iVar4 = 0x15;
  iVar2 = fn_001cab7c((int)*(char *)((int)param_1 + 0x1be));
  fn_006f7a84(DAT_008977e0);
  iVar3 = fn_001e6e78();
  if (iVar3 == 0) {
    if (param_1[2] == 1) {
LAB_002165dc:
      (**(code **)(*param_1 + 0x174))(param_1,1);
    }
    else if (param_1[2] == 2) {
      iVar3 = (**(code **)(*param_1 + 0x70))(param_1,2);
      if ((0x1e < iVar3) && (iVar3 = (**(code **)(*param_1 + 0x70))(param_1,2), iVar3 < 0x22))
      goto LAB_002165dc;
      if ((param_1[2] != 2) ||
         (((iVar3 = (**(code **)(*param_1 + 0x70))(param_1,2), iVar3 != 0x14 &&
           (iVar3 = (**(code **)(*param_1 + 0x70))(param_1,2), iVar3 != 0x15)) &&
          (iVar3 = (**(code **)(*param_1 + 0x70))(param_1,2), iVar3 != 0x16)))) goto LAB_00216654;
    }
    else {
LAB_00216654:
      (**(code **)(*param_1 + 0x174))(param_1,0);
    }
    if (iVar2 <= iVar1) {
      if ((2 < iVar1) && (iVar2 < 3)) goto LAB_00216680;
      iVar4 = 0x14;
    }
  }
  else {
LAB_00216680:
    iVar4 = 0x17;
  }
  (**(code **)(*param_1 + 0x164))(param_1,0);
  (**(code **)(*param_1 + 0x1dc))(param_1,2,iVar4,0);
  if ((param_1[2] == 2) && (iVar1 = (**(code **)(*param_1 + 0x70))(param_1,2), iVar1 == iVar4)) {
    if ((char)param_1[1] == '\0') {
      *(undefined1 *)((int)param_1 + 6) = 1;
    }
  }
  else if ((char)param_1[1] == '\0') {
    param_1[3] = 2;
  }
LAB_00216708:
  iVar1 = (**(code **)(*param_1 + 0x184))(param_1);
  if (iVar1 == 0) {
    fn_006f7a84(DAT_008977e0);
    fn_0023ddec(*(undefined4 *)(DAT_008977e0 + 0x2c),0x756b);
                    /* WARNING: Could not recover jumptable at 0x00216768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xe4))(param_1,0x10009a0,0);
    return;
  }
  return;
}


