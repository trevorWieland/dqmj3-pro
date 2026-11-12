#include "00116070_0011838cb.h"



int fn_0011838c(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 == 0) {
    iVar1 = *DAT_008bf77c;
  }
  else if (param_1 == 1) {
    iVar1 = 1 - *DAT_008bf77c;
  }
  return iVar1;
}



void fn_00117ad8(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0x3f800000;
  return;
}



void fn_00117780(undefined4 param_1)

{
  int *piVar1;
  
  piVar1 = (int *)fn_001287b4();
                    /* WARNING: Could not recover jumptable at 0x001177a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 8))(piVar1,param_1,0x80);
  return;
}



undefined1 * fn_00117378(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  if (param_1 != 0) {
    uVar2 = fn_0012336c(0x80,8,1);
    DAT_0089a4f0 = fn_002fecec();
    puVar3 = (undefined1 *)fn_00123070((char *)&DAT_001173e8,0x80,8,DAT_0089a4f0,uVar2,1);
    return puVar3;
  }
  uVar5 = 0;
  uVar6 = 0;
  iVar8 = 0;
  do {
    uVar7 = (uint)(char)(&DAT_001173f0)[iVar8];
    if (uVar7 == 0x3a) goto LAB_00123158;
    uVar1 = uVar5 >> 0x18;
    iVar8 = iVar8 + 1;
    uVar5 = uVar7 | uVar5 << 8;
    uVar6 = uVar1 | uVar6 << 8 | (int)uVar7 >> 0x1f;
  } while (iVar8 < 8);
  uVar5 = 0;
  uVar6 = 0;
LAB_00123158:
  if (uVar5 != 0 || uVar6 != 0) {
    iVar8 = 0;
    do {
      if ((&DAT_008e3474)[iVar8 * 4] == uVar6 && (&DAT_008e3470)[iVar8 * 4] == uVar5) {
        puVar4 = &DAT_008e3470 + iVar8 * 4;
LAB_001231ac:
        if (puVar4 == (undefined4 *)0x0) {
          return &DAT_c8804465;
        }
        puVar3 = (undefined1 *)fn_001233c4((char *)&DAT_001173e8,puVar4[2],(int)*(char *)(puVar4 + 3),1);
        return puVar3;
      }
      if ((&DAT_008e3484)[iVar8 * 4] == uVar6 && (&DAT_008e3480)[iVar8 * 4] == uVar5) {
        puVar4 = &DAT_008e3480 + iVar8 * 4;
        goto LAB_001231ac;
      }
      iVar8 = iVar8 + 2;
    } while (iVar8 < 0x20);
  }
  return &DAT_c8804465;
}



void fn_0011705c(int param_1)

{
  if (*(int *)(param_1 + 8) == 0) {
    return;
  }
  fn_00116fdc(param_1);
  return;
}



void fn_00116f6c(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &DAT_008585f4;
  param_1[1] = 0;
  iVar1 = fn_00125f30(param_1 + 2);
  iVar1 = fn_00125f30(iVar1 + 0x10);
  *(undefined1 *)(iVar1 + 0x14) = 0;
  *(undefined1 *)(iVar1 + 0x15) = 0;
  *(undefined1 *)(iVar1 + 0x18) = 0;
  *(undefined1 *)(iVar1 + 0x19) = 0;
  *(undefined1 *)(iVar1 + 0x1a) = 0;
  *(undefined1 *)(iVar1 + 0x1b) = 0;
  *(undefined1 *)(iVar1 + 0x1c) = 0;
  *(undefined1 *)(iVar1 + 0x1d) = 0;
  *(undefined4 *)(iVar1 + 0x5f4) = 0;
  *(undefined4 *)(iVar1 + 0x5e4) = 0;
  *(undefined4 *)(iVar1 + 0x5e8) = 0;
  *(undefined4 *)(iVar1 + 0x5ec) = 0;
  *(undefined4 *)(iVar1 + 0x5f0) = 0;
  return;
}


