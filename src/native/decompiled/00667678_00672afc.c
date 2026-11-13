#include "00667678_00672afc.h"



undefined4 fn_00672afc(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_28 [24];
  
  fn_00673cb8();
  switch(param_1[0x11]) {
  default:
    goto switchD_00672b18_caseD_0;
  case 1:
    iVar1 = param_1[0x12];
    iVar2 = 0;
    if (iVar1 == 0) {
      fn_0066eb80(DAT_00898840,7);
      fn_006734c4();
      (**(code **)(*param_1 + 0x34))(param_1,1);
    }
    else if (iVar1 == 1) {
      iVar1 = fn_0066eb80(DAT_00898840,7);
      if (((*(byte *)(iVar1 + 0x4c) & 1) != 0) && (iVar2 = fn_00672734(param_1), iVar2 == 0)) {
        param_1[0x13] = param_1[0x13] | 1;
        (**(code **)(*param_1 + 0x34))(param_1,2);
      }
    }
    else if ((iVar1 == 2) && (iVar1 = fn_00673be8(param_1), iVar1 == 0)) {
      (**(code **)(*param_1 + 0x30))(param_1,0);
    }
    break;
  case 2:
    if (param_1[0x12] != 0) {
      return 1;
    }
    iVar2 = fn_00673be8(param_1);
    if (iVar2 != 0) {
      return 1;
    }
    goto LAB_00672d88;
  case 3:
    iVar2 = fn_00672344(param_1);
    break;
  case 4:
    iVar2 = fn_00671eac(param_1);
    break;
  case 5:
    iVar2 = fn_00672594(param_1);
    break;
  case 6:
    iVar2 = fn_0066eb80(DAT_00898840,0xb);
    iVar1 = param_1[0x12];
    if (iVar1 == 0) {
      fn_006741c8(iVar2);
      (**(code **)(*param_1 + 0x34))(param_1,1);
      return 1;
    }
    if (iVar1 == 1) {
      if ((*(byte *)(iVar2 + 0x4c) & 0x10) == 0) {
        return 1;
      }
      (**(code **)(*DAT_008bf4fc + 4))();
      *(uint *)(iVar2 + 0x4c) = *(uint *)(iVar2 + 0x4c) & 0xffffffef;
      param_1[0x13] = param_1[0x13] & 0xffffffed;
      (**(code **)(*param_1 + 0x34))(param_1,2);
      return 1;
    }
    if (iVar1 != 2) {
      return 1;
    }
    iVar2 = fn_00673be8(param_1);
    goto joined_r0x00672d84;
  case 7:
    if (param_1[0x12] == 0) {
      fn_004db748();
      if (DAT_008bf504 - 0x100000U < 0x3ff00000) {
        fn_004dee3c();
        fn_004def40(DAT_008bf504);
      }
      fn_004dd8ac();
      fn_004ec384();
      param_1[0x13] = 0;
      (**(code **)(*param_1 + 0x34))(param_1,1);
      return 1;
    }
    if (param_1[0x12] != 1) {
      return 1;
    }
    iVar2 = fn_00673be8(param_1);
joined_r0x00672d84:
    if (iVar2 == 0) {
LAB_00672d88:
      (**(code **)(*param_1 + 0x30))(param_1,0);
    }
    goto switchD_00672b18_caseD_0;
  }
  if (iVar2 != 0) {
    fn_00119b40(auStack_28);
    (**(code **)(*param_1 + 0x24))(param_1,auStack_28);
    fn_0066e870(DAT_00898840,auStack_28);
  }
switchD_00672b18_caseD_0:
  return 1;
}



/* WARNING: Removing unreachable block (ram,0x0066781c) */
/* WARNING: Removing unreachable block (ram,0x006677a0) */
/* WARNING: Removing unreachable block (ram,0x006678e0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 fn_00667678(int param_1)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  undefined1 *puVar14;
  int *piVar15;
  int *piVar16;
  uint uVar17;
  undefined *puVar18;
  undefined1 *local_158;
  undefined1 *local_154;
  undefined1 *local_150;
  undefined1 auStack_148 [8];
  undefined *local_140;
  undefined1 local_13c;
  undefined1 local_13b;
  undefined1 local_13a;
  undefined1 local_139;
  undefined1 local_138;
  undefined4 local_134;
  undefined1 local_130;
  uint local_12c;
  uint local_128;
  undefined4 local_124;
  uint local_120;
  undefined *local_11c;
  int local_118;
  undefined4 local_110;
  uint local_108 [3];
  int local_fc;
  undefined4 local_28;
  
  local_28 = 0;
  local_128 = (uint)(*(int *)(param_1 + 0x458) == 1);
  local_13c = 0;
  local_140 = &DAT_00853910;
  local_138 = 2;
  local_13a = 0xff;
  local_139 = 0;
  local_13b = *(int *)(param_1 + 0x464) == 1;
  iVar10 = *(int *)(param_1 + 0x470);
  iVar11 = iVar10;
  if (iVar10 == 0) {
    iVar11 = 0;
  }
  uVar9 = (undefined1)iVar11;
  if (0 < iVar10) {
    uVar9 = 1;
  }
  if (-1 < iVar10) {
    local_139 = *(undefined1 *)(param_1 + 0x474);
    local_13a = uVar9;
  }
  if (*(uint *)(param_1 + 0x468) < 2) {
    local_138 = (undefined1)*(uint *)(param_1 + 0x468);
  }
  local_134 = *(undefined4 *)(param_1 + 0x46c);
  local_130 = *(undefined1 *)(param_1 + 0x460);
  if (*(char *)(*(int *)(param_1 + 0x9c) + 0x10) != '\x01') {
    fn_00456400();
  }
  if (*(undefined4 **)(param_1 + 0x49c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x49c))();
  }
  fn_002feca8(*(undefined4 *)(param_1 + 0x498));
  *(undefined4 *)(param_1 + 0x498) = 0;
  puVar1 = (undefined4 *)fn_001287d4(0x20,&DAT_00812c8c);
  *(undefined4 **)(param_1 + 0x498) = puVar1;
  puVar3 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &DAT_00853a28;
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar18 = &DAT_008540c0;
    piVar16 = puVar1 + 2;
    local_118 = 0;
    local_124 = 0x20;
    puVar2 = (undefined1 *)fn_0015ece0(0x20);
    for (; local_118 != 0; local_118 = local_118 + -1) {
      if (puVar2 != (undefined1 *)0x0) {
        *puVar2 = 0;
      }
      puVar2 = puVar2 + 1;
    }
    local_158 = (undefined1 *)0x0;
    local_154 = (undefined1 *)0x0;
    local_150 = (undefined1 *)0x0;
    local_118 = 0;
    local_158 = (undefined1 *)fn_0015ece0(0x20);
    puVar2 = local_158;
    for (iVar11 = local_118; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (puVar2 != (undefined1 *)0x0) {
        *puVar2 = 0;
      }
      puVar2 = puVar2 + 1;
    }
    local_150 = local_158 + 0x20;
    local_154 = local_158 + local_118;
    iVar10 = fn_00124be8(auStack_148);
    local_11c = &DAT_0085345c;
    *(undefined **)(iVar10 + -0x48) = &DAT_0085345c;
    *(undefined4 *)(iVar10 + -0x40) = 0;
    *(undefined4 *)(iVar10 + -0x38) = 0;
    *(undefined4 *)(iVar10 + -0x34) = 0;
    *(undefined4 *)(iVar10 + -0x30) = 0;
    *(undefined4 *)(iVar10 + -0x2c) = 0;
    *(undefined4 *)(iVar10 + -0x18) = 0;
    *(undefined4 *)(iVar10 + -0x28) = 0;
    *(undefined4 *)(iVar10 + -0x14) = 0;
    fn_0079bd60(iVar10 + -0x10);
    fn_0014f510(iVar10,DAT_008b64f8);
    *piVar16 = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    local_118 = 0;
    local_110 = 0x20;
    local_fc = 0x20;
    puVar3 = (undefined4 *)fn_0015ece0(0xa00);
    *piVar16 = (int)puVar3;
    for (iVar11 = local_118; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = puVar18;
        *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(iVar10 + -0x44);
        puVar3[2] = *(undefined4 *)(iVar10 + -0x40);
        uVar12 = *(undefined4 *)(iVar10 + -0x34);
        puVar3[4] = *(undefined4 *)(iVar10 + -0x38);
        puVar3[5] = uVar12;
        puVar3[6] = *(undefined4 *)(iVar10 + -0x30);
        puVar3[7] = *(undefined4 *)(iVar10 + -0x2c);
        puVar3[8] = *(undefined4 *)(iVar10 + -0x28);
        puVar3[9] = 0;
        puVar3[10] = 0;
        puVar3[0xb] = 0;
        local_12c = *(int *)(iVar10 + -0x20) - *(int *)(iVar10 + -0x24);
        local_120 = 0x20;
        puVar7 = &local_120;
        if (0x1f < local_12c) {
          puVar7 = &local_12c;
        }
        uVar17 = *puVar7;
        puVar4 = (undefined1 *)fn_0015ece0(uVar17);
        puVar3[9] = puVar4;
        puVar14 = *(undefined1 **)(iVar10 + -0x20);
        for (puVar2 = *(undefined1 **)(iVar10 + -0x24); puVar2 != puVar14; puVar2 = puVar2 + 1) {
          if (puVar4 != (undefined1 *)0x0) {
            *puVar4 = *puVar2;
          }
          puVar4 = puVar4 + 1;
        }
        iVar5 = *(int *)(iVar10 + -0x20);
        iVar13 = *(int *)(iVar10 + -0x24);
        iVar6 = puVar3[9];
        puVar3[0xb] = iVar6 + uVar17;
        puVar3[10] = (iVar5 - iVar13) + iVar6;
        uVar12 = *(undefined4 *)(iVar10 + -0x14);
        puVar3[0xc] = *(undefined4 *)(iVar10 + -0x18);
        puVar3[0xd] = uVar12;
        piVar15 = puVar3 + 0xe;
        *piVar15 = 0;
        puVar3[0xf] = 0;
        puVar3[0x10] = 0;
        local_108[0] = *(int *)(iVar10 + -0xc) - *(int *)(iVar10 + -0x10);
        local_120 = 0x20;
        puVar7 = local_108;
        if (local_108[0] < 0x20) {
          puVar7 = &local_120;
        }
        uVar17 = *puVar7;
        puVar4 = (undefined1 *)fn_0015ece0(uVar17);
        *piVar15 = (int)puVar4;
        puVar14 = *(undefined1 **)(iVar10 + -0xc);
        for (puVar2 = *(undefined1 **)(iVar10 + -0x10); puVar2 != puVar14; puVar2 = puVar2 + 1) {
          if (puVar4 != (undefined1 *)0x0) {
            *puVar4 = *puVar2;
          }
          puVar4 = puVar4 + 1;
        }
        iVar5 = *(int *)(iVar10 + -0xc);
        iVar6 = *(int *)(iVar10 + -0x10);
        puVar3[0x10] = *piVar15 + uVar17;
        puVar3[0xf] = (iVar5 - iVar6) + *piVar15;
        iVar5 = fn_004b9b4c(puVar3 + 0x12,iVar10);
        *(undefined **)(iVar5 + -0x48) = local_11c;
      }
      puVar3 = puVar3 + 0x14;
    }
    puVar1[4] = *piVar16 + local_fc * 0x50;
    puVar1[3] = *piVar16 + local_118 * 0x50;
    iVar11 = fn_004b93c4(&local_158);
    fn_004b93c4(iVar11 + -0x14);
    iVar11 = fn_00124be8(puVar1 + 6);
    *(undefined4 *)(iVar11 + -4) = 0;
    puVar3 = (undefined4 *)(iVar11 + -0x18);
    *puVar3 = &DAT_00852ef4;
  }
  *(undefined4 **)(param_1 + 0x49c) = puVar3;
  iVar11 = fn_004689a0(*(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x9c),local_128,
                        *(undefined4 *)(param_1 + 0x45c),&local_140,puVar3,0);
  if (iVar11 == 0) {
    local_28 = 0xffffffff;
    uVar12 = fn_0045a590();
    uVar8 = fn_00482b9c();
    *(undefined4 *)(param_1 + 0x74) = uVar8;
    *(undefined4 *)(param_1 + 0x78) = 1;
    *(undefined1 *)(param_1 + 0x7c) = 1;
    fn_0045a3b0(uVar12,&local_128,0x80);
    fn_0045a5b0();
  }
  else {
    fn_004562e0(*(undefined4 *)(param_1 + 0x9c),0xffffffff);
  }
  return local_28;
}


