#include "006cab18_006e979c.h"



void fn_006e979c(int param_1)

{
  if (*(char *)(param_1 + 9) == '\0') {
    fn_002cf2a4(param_1);
    return;
  }
  return;
}



undefined4 fn_006dbb64(int param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  if (((0x3fefffff < DAT_008c06a4 - 0x100000U) ||
      (iVar3 = fn_00518bac(), 0x3fefffff < iVar3 - 0x100000U)) ||
     (uVar4 = (uint)*(byte *)(param_1 + 0x14), uVar4 == 0xfd)) {
    return 0xffffffff;
  }
  if ((*(uint *)(iVar3 + 0x1c) & 0xff) <= uVar4) {
    return 0xffffffff;
  }
  pcVar1 = (char *)(*(int *)(iVar3 + 0x18) + uVar4 * 0x60);
  iVar3 = 0;
  if (*pcVar1 != '\0') {
    iVar3 = *(int *)(pcVar1 + 0x14);
  }
  if (*pcVar1 != '\0' && iVar3 != 0) {
    uVar2 = fn_00780650(pcVar1 + 0x10,0x10);
    return uVar2;
  }
  return 0xffffffff;
}



undefined4 fn_006dbb08(int param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  if (((0x3fefffff < DAT_008c06a4 - 0x100000U) ||
      (iVar3 = fn_00518bac(), 0x3fefffff < iVar3 - 0x100000U)) ||
     (uVar4 = (uint)*(byte *)(param_1 + 0x14), uVar4 == 0xfd)) {
    return 0xffffffff;
  }
  if ((*(uint *)(iVar3 + 0x1c) & 0xff) <= uVar4) {
    return 0xffffffff;
  }
  pcVar1 = (char *)(*(int *)(iVar3 + 0x18) + uVar4 * 0x60);
  iVar3 = 0;
  if (*pcVar1 != '\0') {
    iVar3 = *(int *)(pcVar1 + 0x14);
  }
  if (*pcVar1 != '\0' && iVar3 != 0) {
    uVar2 = fn_00780650(pcVar1 + 0x10,param_2);
    return uVar2;
  }
  return 0xffffffff;
}



void fn_006d92b8(int param_1)

{
  if (*(int **)(param_1 + 0x84) + -0x40000 < (int *)0x3ff00000) {
                    /* WARNING: Could not recover jumptable at 0x006d92d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x84) + 0xc))();
    return;
  }
  return;
}



void fn_006d6c48(void)

{
  fn_006d6690(*(undefined4 *)(DAT_008bf504 + 0x14),1);
  return;
}



void fn_006d0c04(undefined4 param_1)

{
  fn_006d0810(param_1,L"type",0);
  return;
}



void fn_006cda24(int param_1)

{
  fn_006b72c8(*(undefined4 *)(param_1 + 0x5b3a4));
  return;
}



void fn_006cda14(int param_1)

{
  fn_006b7260(*(undefined4 *)(param_1 + 0x5b3a4));
  return;
}



void fn_006ccbf8(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  longlong lVar13;
  float fVar14;
  undefined8 uVar15;
  float local_54;
  float fStack_50;
  float fStack_4c;
  int *local_48;
  int *local_44;
  int local_40;
  
  puVar2 = (undefined4 *)fn_006f7770(DAT_008977e0);
  uVar15 = CONCAT44(*puVar2,puVar2[1]);
  lVar13 = (ulonglong)(uint)puVar2[2] << 0x20;
  local_48 = (int *)0x0;
  local_44 = (int *)0x0;
  local_40 = 0;
  iVar3 = fn_006f7a0c(DAT_008977e0);
  (**(code **)(**(int **)(iVar3 + 0x50) + 0x50))(*(int **)(iVar3 + 0x50),&local_48);
  fVar10 = (float)((ulonglong)lVar13 >> 0x20);
  iVar9 = 0;
  iVar3 = ((int)local_44 - (int)local_48) / 0x28;
  if (0 < iVar3) {
    do {
      piVar6 = local_48 + iVar9 * 10;
      if (*(char *)*piVar6 == 'd') {
        fVar10 = (float)piVar6[1] - (float)((ulonglong)uVar15 >> 0x20);
        fVar12 = (float)piVar6[2] - (float)uVar15;
        fVar11 = (float)piVar6[3] - (float)((ulonglong)lVar13 >> 0x20);
        fVar11 = fVar10 * fVar10 + fVar12 * fVar12 + fVar11 * fVar11;
        fn_0025a2ac(3);
        if (fVar11 < (fVar10 + (float)piVar6[7]) * (fVar10 + (float)piVar6[7])) {
          iVar9 = fn_002febd8(&DAT_007bfab3);
          iVar9 = fn_00102d78(iVar9 + *piVar6);
          fVar10 = (float)((ulonglong)lVar13 >> 0x20);
          if ((iVar9 != -1) && (iVar8 = 0, 0 < iVar3)) goto LAB_006ccd04;
          break;
        }
      }
      fVar10 = (float)((ulonglong)lVar13 >> 0x20);
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar3);
  }
LAB_006ccdf8:
  piVar1 = local_44;
  fVar11 = (float)((ulonglong)uVar15 >> 0x20);
  fVar12 = (float)uVar15;
  fVar14 = fVar10;
  for (piVar6 = local_48; piVar6 != piVar1; piVar6 = piVar6 + 10) {
    if ((undefined1 *)*piVar6 != &DAT_008f9d04) {
      piVar5 = (int *)((undefined1 *)*piVar6 + -0xc);
      iVar3 = *piVar5;
      if ((iVar3 == -1) || ((piVar5 != &DAT_008f9cf8 && (*piVar5 = iVar3 + -1, iVar3 == 0)))) {
        fn_001008c4(*piVar6 + -0xc,*(int *)(*piVar6 + -8) + 0xe,0);
      }
    }
  }
  fn_001008c4(local_48,(local_40 - (int)local_48) / 0x28,0);
LAB_006cce84:
  piVar6 = (int *)fn_006f7a84(DAT_008977e0);
  iVar3 = (**(code **)(*piVar6 + 0xf0))();
  if (iVar3 != 0) {
    piVar6 = (int *)fn_006f7a84(DAT_008977e0);
    iVar3 = (**(code **)(*piVar6 + 0xf0))();
    if (iVar3 == 0) goto LAB_006ccef0;
    fn_006f7a84(DAT_008977e0);
    iVar3 = fn_006a99b0();
    if (iVar3 == 0) goto LAB_006ccef0;
  }
  fVar11 = fVar11 + 0.0;
  fVar12 = fVar12 + 100.0;
  fVar10 = fVar10 + 0.0;
LAB_006ccef0:
  piVar6 = (int *)fn_006f7a84(DAT_008977e0);
  fStack_4c = fVar10 - fVar14;
  local_54 = fVar11 - (float)((ulonglong)uVar15 >> 0x20);
  fStack_50 = fVar12 - (float)uVar15;
  (**(code **)(*piVar6 + 0x30))(piVar6,&local_54,0,0,0);
  iVar3 = fn_006f72c8(DAT_008977e0);
  if (iVar3 != 0) {
    uVar7 = fn_006f72c8(DAT_008977e0);
    fn_00222020(uVar7,1);
  }
  return;
LAB_006ccd04:
  piVar6 = local_48 + iVar8 * 10;
  if (*(char *)*piVar6 != 's') goto LAB_006ccdec;
  iVar4 = fn_002febd8(&DAT_007bfab0);
  iVar4 = fn_00102d78(iVar4 + *piVar6);
  piVar1 = local_44;
  if (iVar4 != iVar9) goto LAB_006ccdec;
  fVar11 = (float)piVar6[1];
  fVar14 = (float)((ulonglong)lVar13 >> 0x20);
  fVar12 = (float)piVar6[2];
  fVar10 = (float)piVar6[3];
  for (piVar6 = local_48; piVar6 != piVar1; piVar6 = piVar6 + 10) {
    if ((undefined1 *)*piVar6 != &DAT_008f9d04) {
      piVar5 = (int *)((undefined1 *)*piVar6 + -0xc);
      iVar3 = *piVar5;
      if ((iVar3 == -1) || ((piVar5 != &DAT_008f9cf8 && (*piVar5 = iVar3 + -1, iVar3 == 0)))) {
        fn_001008c4(*piVar6 + -0xc,*(int *)(*piVar6 + -8) + 0xe,0);
      }
    }
  }
  fn_001008c4(local_48,(local_40 - (int)local_48) / 0x28,0);
  goto LAB_006cce84;
LAB_006ccdec:
  fVar10 = (float)((ulonglong)lVar13 >> 0x20);
  iVar8 = iVar8 + 1;
  if (iVar3 <= iVar8) goto LAB_006ccdf8;
  goto LAB_006ccd04;
}



void fn_006caf74(void)

{
  fn_006b6410(*(undefined4 *)(DAT_00897804 + 8));
  return;
}



void fn_006caf0c(void)

{
  fn_006b62ec(*(undefined4 *)(DAT_00897804 + 8));
  return;
}



void fn_006caef8(void)

{
  fn_006b6464(*(undefined4 *)(DAT_00897804 + 8));
  return;
}



void fn_006cae40(void)

{
  fn_006b63ec(*(undefined4 *)(DAT_00897804 + 8));
  return;
}



void fn_006cad68(void)

{
  fn_006b63b8(*(undefined4 *)(DAT_00897804 + 8));
  return;
}



void fn_006cad54(void)

{
  fn_006b63e0(*(undefined4 *)(DAT_00897804 + 8));
  return;
}



void fn_006cac88(void)

{
  fn_006b63ac(*(undefined4 *)(DAT_00897804 + 8));
  return;
}



void fn_006cabf0(void)

{
  fn_006b6210(*(undefined4 *)(DAT_00897804 + 8));
  return;
}



void fn_006cabd0(void)

{
  fn_006b644c(*(undefined4 *)(DAT_00897804 + 8));
  return;
}



void fn_006cab18(void)

{
  fn_006b6428(*(undefined4 *)(DAT_00897804 + 8));
  return;
}


