#include "002dc338_002dcbd8.h"



void fn_002dcbd8(int *param_1)

{
  (**(code **)(*param_1 + 0x54))(param_1,0);
  fn_001daac0(param_1);
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



void fn_002dcb38(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  (**(code **)(*param_1 + 0x13c))(param_1);
  fn_002dc06c(param_1);
  (**(code **)(*param_1 + 0x140))(param_1);
  cVar1 = *(char *)((int)param_1 + 0x1b5);
  uVar3 = 0x80f3;
  if (cVar1 != '\x01') {
    if (cVar1 == '\x02') {
      uVar3 = 0x80f4;
    }
    else if (cVar1 == '\x03') {
      uVar3 = 0x80e9;
    }
  }
  fn_006f7a84(DAT_008977e0);
  fn_006ab984();
  uVar2 = fn_0017fde4();
  fn_0016a9b0(*(undefined4 *)(DAT_008977e0 + 0x2c),uVar3,uVar2,1);
  return;
}



undefined4 fn_002dca94(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar2 = fn_002dc0b8();
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0x41200000;
  uVar3 = fn_00121838(DAT_00897800,DAT_008918dc,0);
  *(undefined4 *)(param_1 + 0x184) = uVar3;
  *(undefined4 *)(param_1 + 400) = 0;
  *(char **)(param_1 + 0x194) = (char *)&DAT_002dcb20;
  iVar4 = fn_00163868(100);
  if (iVar4 == 0) {
    *(undefined1 *)(param_1 + 0x1b5) = 3;
  }
  else {
    if (iVar4 < 0x1e) {
      uVar1 = 2;
    }
    else {
      uVar1 = 1;
    }
    *(undefined1 *)(param_1 + 0x1b5) = uVar1;
  }
  return uVar2;
}



void fn_002dc8b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  cVar1 = *(char *)(param_1 + 0x1b5);
  uVar2 = 0;
  if (cVar1 == '\x01') {
    uVar2 = fn_0016ba34(DAT_00897800,DAT_008918dc,(char *)&DAT_002dca38,0);
  }
  else if (cVar1 == '\x02') {
    uVar2 = fn_0016ba34(DAT_00897800,DAT_008918dc,(char *)&DAT_002dca40,0);
  }
  else if (cVar1 == '\x03') {
    uVar2 = fn_0016ba34(DAT_00897800,DAT_008918dc,(char *)&DAT_002dca48,0);
  }
  fn_0015b0dc(uVar2);
  iVar3 = fn_006f6fc4(*(undefined4 *)(DAT_008977e0 + 0x40));
  if (iVar3 != 0) {
    fn_00318bf4(*(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 8),1);
    fn_002a5c44(*(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 0x10));
    fn_003d5930(*(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 4),*(undefined4 *)(param_1 + 0x1b0)
                );
    return;
  }
  iVar3 = fn_00154ac8(0x1b);
  if (iVar3 == 0) {
    fn_00144834(0x1b,1);
    uVar2 = fn_0016ba34(DAT_00897800,DAT_008918dc,(char *)&DAT_002dca60,0);
    uVar4 = fn_006f75ac(DAT_008977e0);
    fn_0038fee8(uVar4,uVar2);
    uVar2 = fn_006f75ac(DAT_008977e0);
    fn_0038ff40(uVar2,0,1,1,0);
    return;
  }
  uVar2 = fn_0016ba34(DAT_00897800,DAT_008918dc,(char *)&DAT_002dca54,0);
  fn_003b679c(*(undefined4 *)(DAT_008977e0 + 0x54),uVar2,*(undefined4 *)(DAT_008977e0 + 0x54),
               param_4);
  return;
}



void fn_002dc818(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_008202d4;
  uVar1 = param_1[0x67];
  uVar2 = uVar1;
  if ((uint)param_1[0x68] < uVar1) {
    do {
      uVar2 = uVar2 + 0xc;
    } while (uVar2 != param_1[0x68]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x69] - uVar1) / 0xc,0);
  fn_001dc088(param_1);
  return;
}



undefined4 * fn_002dc338(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  uint uVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  int iVar17;
  undefined4 uVar18;
  undefined4 in_s0;
  uint local_38;
  uint local_34 [4];
  
  puVar2 = &local_38;
  puVar1 = (undefined4 *)fn_00211c48(param_1,param_4);
  *puVar1 = &PTR_FUN_008202d4;
  puVar1[0x67] = 0;
  puVar1[0x68] = 0;
  puVar1[0x69] = 0;
  puVar1[0x6a] = 0;
  puVar1[0x6b] = in_s0;
  puVar1[0x6c] = param_3;
  *(undefined1 *)(puVar1 + 0x6d) = 1;
  puVar12 = puVar1 + 0x67;
  local_34[0] = *(uint *)(param_2 + 0x14);
  if (0x15555555 < *(uint *)(param_2 + 0x14)) {
    local_38 = 0x15555555;
    fn_002ff628(8,&DAT_008c7631);
  }
  if ((uint)((int)(puVar1[0x69] - *puVar12) / 0xc) < local_34[0]) {
    uVar14 = (int)(puVar1[0x68] - *puVar12) / 0xc;
    local_38 = uVar14 + (uVar14 >> 1) + (uVar14 >> 3);
    if (local_38 < uVar14 + 0x20) {
      local_38 = uVar14 + 0x20;
    }
    if (local_38 <= local_34[0]) {
      puVar2 = local_34;
    }
    uVar14 = *puVar2;
    puVar3 = (undefined4 *)fn_00100fc6(uVar14 * 0xc,0);
    puVar9 = (undefined4 *)puVar1[0x68];
    puVar15 = puVar3;
    for (puVar8 = (undefined4 *)*puVar12; puVar8 != puVar9; puVar8 = puVar8 + 3) {
      if (puVar15 != (undefined4 *)0x0) {
        uVar16 = puVar8[1];
        uVar18 = puVar8[2];
        *puVar15 = *puVar8;
        puVar15[1] = uVar16;
        puVar15[2] = uVar18;
      }
      puVar15 = puVar15 + 3;
    }
    uVar4 = *puVar12;
    uVar5 = uVar4;
    if ((uint)puVar1[0x68] < uVar4) {
      do {
        uVar5 = uVar5 + 0xc;
      } while (uVar5 != puVar1[0x68]);
    }
    fn_001008c4(uVar4,(int)(puVar1[0x69] - uVar4) / 0xc);
    uVar5 = *puVar12;
    *puVar12 = (uint)puVar3;
    puVar1[0x68] = puVar3 + ((int)(puVar1[0x68] - uVar5) / 0xc) * 3;
    puVar1[0x69] = puVar3 + uVar14 * 3;
  }
  iVar17 = *(int *)(param_2 + 0x10);
  iVar13 = *(int *)(iVar17 + 8);
  while (iVar13 != iVar17) {
    puVar15 = (undefined4 *)(iVar13 + 0x14);
    puVar8 = (undefined4 *)puVar1[0x68];
    puVar2 = puVar1 + 0x67;
    if (puVar8 == (undefined4 *)puVar1[0x69]) {
      uVar14 = (int)((int)puVar8 - *puVar2) / 0xc;
      if (uVar14 < (uint)((int)((int)puVar1[0x69] - *puVar2) / 0xc)) {
        puVar1[0x68] = puVar8 + 3;
        if (puVar8 != (undefined4 *)0x0) {
          *puVar8 = puVar8[-3];
          puVar8[1] = puVar8[-2];
          puVar8[2] = puVar8[-1];
        }
        puVar3 = puVar8 + -3;
        puVar9 = puVar8;
        if (puVar8 < puVar3) {
          if (0 < (int)puVar3 - (int)puVar8) {
            uVar14 = ((int)puVar3 - (int)puVar8) / 0xc;
            if ((uVar14 & 1) != 0) {
              puVar3 = puVar8 + -6;
              puVar9 = puVar8 + -3;
              *puVar9 = *puVar3;
              puVar8[-2] = puVar8[-5];
              puVar8[-1] = puVar8[-4];
            }
            for (iVar10 = (int)uVar14 >> 1; iVar10 != 0; iVar10 = iVar10 + -1) {
              uVar16 = puVar3[-2];
              uVar18 = puVar3[-1];
              puVar9[-3] = puVar3[-3];
              puVar9[-2] = uVar16;
              puVar9[-1] = uVar18;
              uVar16 = puVar3[-5];
              uVar18 = puVar3[-4];
              puVar9[-6] = puVar3[-6];
              puVar9[-5] = uVar16;
              puVar9[-4] = uVar18;
              puVar9 = puVar9 + -6;
              puVar3 = puVar3 + -6;
            }
          }
        }
        else {
          while (puVar8 != puVar3) {
            uVar16 = puVar3[-2];
            uVar18 = puVar3[-1];
            puVar9[-3] = puVar3[-3];
            puVar9[-2] = uVar16;
            puVar9[-1] = uVar18;
            puVar9 = puVar9 + -3;
            puVar3 = puVar3 + -3;
          }
        }
        uVar16 = *(undefined4 *)(iVar13 + 0x18);
        uVar18 = *(undefined4 *)(iVar13 + 0x1c);
        *puVar8 = *puVar15;
        puVar8[1] = uVar16;
        puVar8[2] = uVar18;
      }
      else {
        uVar5 = uVar14 + (uVar14 >> 1) + (uVar14 >> 3);
        if (uVar5 < uVar14 + 0x20) {
          uVar5 = uVar14 + 0x20;
        }
        puVar6 = (undefined4 *)fn_00100fc6(uVar5 * 0xc,0);
        puVar9 = puVar6;
        for (puVar3 = (undefined4 *)*puVar2; puVar3 != puVar8; puVar3 = puVar3 + 3) {
          if (puVar9 != (undefined4 *)0x0) {
            uVar16 = puVar3[1];
            uVar18 = puVar3[2];
            *puVar9 = *puVar3;
            puVar9[1] = uVar16;
            puVar9[2] = uVar18;
          }
          puVar9 = puVar9 + 3;
        }
        puVar3 = puVar6 + ((int)((int)puVar8 - *puVar2) / 0xc) * 3;
        if (puVar3 != (undefined4 *)0x0) {
          uVar16 = *(undefined4 *)(iVar13 + 0x18);
          uVar18 = *(undefined4 *)(iVar13 + 0x1c);
          *puVar3 = *puVar15;
          puVar3[1] = uVar16;
          puVar3[2] = uVar18;
        }
        puVar3 = (undefined4 *)puVar1[0x68];
        puVar15 = puVar6 + ((int)((int)puVar8 - *puVar2) / 0xc) * 3;
        for (; puVar8 != puVar3; puVar8 = puVar8 + 3) {
          puVar9 = puVar15 + 3;
          if (puVar9 != (undefined4 *)0x0) {
            uVar16 = puVar8[1];
            uVar18 = puVar8[2];
            *puVar9 = *puVar8;
            puVar15[4] = uVar16;
            puVar15[5] = uVar18;
          }
          puVar15 = puVar9;
        }
        uVar4 = *puVar2;
        uVar11 = puVar1[0x68];
        uVar14 = uVar4;
        if (uVar11 < uVar4) {
          do {
            uVar14 = uVar14 + 0xc;
          } while (uVar14 != uVar11);
        }
        fn_001008c4(uVar4,(int)(puVar1[0x69] - uVar4) / 0xc);
        *puVar2 = (uint)puVar6;
        puVar1[0x68] = puVar6 + ((int)(uVar11 - uVar4) / 0xc) * 3 + 3;
        puVar1[0x69] = puVar6 + uVar5 * 3;
      }
    }
    else {
      puVar1[0x68] = puVar8 + 3;
      if (puVar8 != (undefined4 *)0x0) {
        uVar16 = *(undefined4 *)(iVar13 + 0x18);
        uVar18 = *(undefined4 *)(iVar13 + 0x1c);
        *puVar8 = *puVar15;
        puVar8[1] = uVar16;
        puVar8[2] = uVar18;
      }
    }
    iVar10 = *(int *)(iVar13 + 0xc);
    if (*(int *)(iVar13 + 0xc) == 0) {
      iVar10 = *(int *)(iVar13 + 4);
      while (iVar7 = iVar10, iVar13 == *(int *)(iVar7 + 0xc)) {
        iVar13 = iVar7;
        iVar10 = *(int *)(iVar7 + 4);
      }
      if (*(int *)(iVar13 + 0xc) != iVar7) {
        iVar13 = iVar7;
      }
    }
    else {
      do {
        iVar13 = iVar10;
        iVar10 = *(int *)(iVar13 + 8);
      } while (*(int *)(iVar13 + 8) != 0);
    }
  }
  return puVar1;
}


