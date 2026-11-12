#include "001fd748_001fd748.h"



void fn_001fd748(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  uint uVar8;
  int *piVar9;
  undefined **ppuVar10;
  undefined4 uVar11;
  
  param_1 = (undefined4 *)*param_1;
  iVar1 = fn_00178f9c(*param_1,param_1[4]);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar1 != 0) {
    uVar8 = 0;
    do {
      fn_0014481c(DAT_008977e8);
      iVar2 = fn_006b6bc4();
      if ((int)uVar8 < iVar2) {
        iVar2 = fn_00689210(iVar1,(&PTR_s_race_icon_home_00_008c40f8)[uVar8]);
        param_1[uVar8 + 0x1b] = iVar2;
        *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe;
      }
      else {
        iVar2 = fn_00689210(iVar1,(&PTR_s_race_icon_home_00_008c40f8)[uVar8]);
        *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < 4);
  }
  uVar8 = 0;
  do {
    param_1[uVar8 + 0x23] = 0;
    if (param_1[uVar8 + 0x38d] != 0) {
      fn_0013ae4c(param_1[uVar8 + 0x38d],*param_1);
      iVar2 = param_1[uVar8 + 0x38d];
      if (iVar2 != 0) {
        fn_002feef8(iVar2);
        param_1[uVar8 + 0x38d] = 0;
      }
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 < 4);
  fn_001fcc44(param_1,iVar1);
  iVar2 = fn_00178f9c(*param_1,param_1[4]);
  uVar11 = *(undefined4 *)(iVar2 + 0x10);
  uVar8 = 0;
  if (*(char *)(param_1 + 0x393) == '\0') {
    ppuVar10 = &PTR_s_face_00_008c401c;
  }
  else {
    ppuVar10 = &PTR_s_face_04_008c402c;
  }
  fn_0014481c(DAT_008977e8);
  iVar2 = fn_006b6bc4();
  if (0 < iVar2) {
    do {
      piVar9 = param_1 + uVar8 + 0x38d;
      iVar2 = fn_00145b00(0x10,&DAT_00812c8c);
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = fn_00305898();
      }
      iVar3 = *piVar9;
      if (iVar3 != iVar2) {
        if (iVar3 != 0) {
          fn_002feef8(iVar3);
        }
        *piVar9 = iVar2;
      }
      uVar4 = fn_00689210(uVar11,ppuVar10[uVar8]);
      uVar5 = fn_0014481c(DAT_008977e8);
      piVar6 = (int *)fn_006b71a8(uVar5,uVar8 & 0xff);
      uVar5 = (**(code **)(*piVar6 + 0xb8))();
      uVar7 = fn_0014481c(DAT_008977e8);
      iVar2 = fn_006b71a8(uVar7,uVar8 & 0xff);
      fn_001ccd10(*piVar9,uVar4,*param_1,(int)*(short *)(iVar2 + 0x13c),uVar5);
      uVar8 = uVar8 + 1;
      fn_0014481c(DAT_008977e8);
      iVar2 = fn_006b6bc4();
    } while ((int)uVar8 < iVar2);
  }
  fn_001fd4b8(param_1,iVar1);
  return;
}


