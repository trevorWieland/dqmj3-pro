#include "0038784c_00388aa8bb.h"



void fn_00388aa8(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_5c;
  float local_58;
  float local_54;
  float local_4c;
  float local_48 [14];
  
  iVar1 = fn_006f7a5c(DAT_008977e0);
  iVar1 = fn_00176d68(*(undefined4 *)(iVar1 + 4));
  fVar6 = 0.0;
  fVar7 = 1.0;
  if (((DAT_008c6118 & 1) == 0) && (iVar2 = fn_00303afc(&DAT_008c6118), iVar2 != 0)) {
    DAT_008f9e14 = fVar6;
    DAT_008f9e18 = fVar7;
    DAT_008f9e1c = fVar6;
  }
  if (((DAT_008c6114 & 1) == 0) && (iVar2 = fn_00303afc(&DAT_008c6114), iVar2 != 0)) {
    DAT_008f9e08 = fVar6;
    DAT_008f9e0c = fVar6;
    DAT_008f9e10 = fVar7;
  }
  fVar8 = *(float *)(iVar1 + 0x58);
  fVar9 = *(float *)(iVar1 + 0x68);
  fVar10 = *(float *)(iVar1 + 0x78);
  pfVar3 = (float *)fn_006dcd40(iVar1);
  fVar11 = *pfVar3;
  uVar12 = *(undefined8 *)(pfVar3 + 1);
  fVar13 = 100.0;
  fVar4 = fVar9 - pfVar3[1];
  local_d0 = DAT_008f9e14;
  local_cc = DAT_008f9e18;
  local_c8 = DAT_008f9e1c;
  fVar15 = DAT_008f9e1c * (fVar8 - fVar11) - DAT_008f9e14 * (fVar10 - pfVar3[2]);
  fVar16 = DAT_008f9e18 * (fVar10 - pfVar3[2]) - DAT_008f9e1c * fVar4;
  fVar14 = DAT_008f9e14 * fVar4 - DAT_008f9e18 * (fVar8 - fVar11);
  fn_0052534c(&local_4c,local_48);
  fVar5 = fVar7 - local_48[0];
  fVar4 = fVar7 / SQRT(fVar16 * fVar16 + fVar15 * fVar15 + fVar14 * fVar14);
  fVar15 = fVar15 * fVar4;
  fVar16 = fVar16 * fVar4;
  fVar14 = fVar14 * fVar4;
  local_88 = fVar5 * fVar15 * fVar14;
  local_9c = fVar5 * fVar16 * fVar15;
  local_98 = fVar5 * fVar16 * fVar14;
  local_78 = local_48[0] + fVar5 * fVar14 * fVar14;
  local_a0 = local_48[0] + fVar5 * fVar16 * fVar16;
  local_8c = local_48[0] + fVar5 * fVar15 * fVar15;
  local_7c = local_88 + local_4c * fVar16;
  local_88 = local_88 - local_4c * fVar16;
  local_90 = local_9c + local_4c * fVar14;
  local_9c = local_9c - local_4c * fVar14;
  local_80 = local_98 - local_4c * fVar15;
  local_98 = local_98 + local_4c * fVar15;
  local_94 = fVar6;
  local_84 = fVar6;
  local_74 = fVar6;
  fn_0016947c(&local_d0,&local_a0);
  fVar4 = fVar7 / SQRT(local_d0 * local_d0 + local_cc * local_cc + local_c8 * local_c8);
  local_c8 = local_c8 * fVar4 * fVar13;
  local_cc = local_cc * fVar4 * fVar13;
  local_d0 = local_d0 * fVar4 * fVar13;
  iVar1 = fn_006f7a20(DAT_008977e0);
  fStack_bc = (float)uVar12;
  fStack_b8 = (float)((ulonglong)uVar12 >> 0x20);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_2 + 4);
    *(float *)(iVar1 + 0x98) = fVar11 + local_d0 + fVar6;
    *(float *)(iVar1 + 0xa8) = fStack_bc + local_cc + 200.0;
    *(float *)(iVar1 + 0xb8) = fStack_b8 + local_c8 + fVar6;
    local_c0 = fVar11;
    fn_005456f4(*(undefined4 *)(param_2 + 4),&local_c0);
    fn_005455e4(*(undefined4 *)(param_2 + 4),&DAT_008f9e08);
    return;
  }
  fVar11 = fVar11 - fVar8;
  fStack_bc = fStack_bc - fVar9;
  fStack_b8 = fStack_b8 - fVar10;
  fVar7 = fVar7 / SQRT(fVar11 * fVar11 + fStack_bc * fStack_bc + fStack_b8 * fStack_b8);
  local_5c = fVar8 + fVar11 * fVar7 * 130.0;
  local_58 = fVar9 + fStack_bc * fVar7 * 130.0;
  local_54 = fVar10 + fStack_b8 * fVar7 * 130.0;
  iVar1 = *(int *)(param_2 + 4);
  *(float *)(iVar1 + 0x98) = local_5c + local_d0;
  *(float *)(iVar1 + 0xa8) = local_58 + local_cc;
  *(float *)(iVar1 + 0xb8) = local_54 + local_c8;
  fn_005456f4(*(undefined4 *)(param_2 + 4),&local_5c);
  fn_005455e4(*(undefined4 *)(param_2 + 4),&DAT_008f9e08);
  return;
}



void fn_00388a80(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003e208c();
  *puVar1 = &DAT_0082a6a8;
  return;
}



void fn_003889c8(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = *(undefined4 **)(param_1 + 0x98);
  if (puVar4 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar4)(puVar4);
    do {
      if (puVar1 == &DAT_00896a84) goto LAB_00388a0c;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar4 = (undefined4 *)0x0;
LAB_00388a0c:
  fn_0039c438(param_1);
  uVar2 = fn_002473c0(puVar4[0x2a7]);
  fn_0036e8fc(*(undefined4 *)(*(int *)(param_1 + 0x74) + 0x10),uVar2);
  fn_003e14c0(param_1,puVar4 + 7);
  iVar3 = fn_006bcce8(*(undefined4 *)(DAT_00897820 + 0x44),*(undefined1 *)(puVar4 + 0x2a6));
  uVar2 = fn_0022f584(*(undefined4 *)(iVar3 + 0x14),0);
  fn_003e1490(param_1,uVar2);
  fn_0031c7bc(param_1);
  return;
}


