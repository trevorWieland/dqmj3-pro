#include "007aaaa4_007ab19c.h"



/* WARNING: Removing unreachable block (ram,0x007ab2b8) */
/* WARNING: Removing unreachable block (ram,0x007ab2c8) */
/* WARNING: Removing unreachable block (ram,0x007ab2dc) */
/* WARNING: Removing unreachable block (ram,0x007ab354) */

void fn_007ab19c(undefined4 *param_1,undefined4 *param_2,int param_3,code *param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined2 local_7c;
  code *local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined2 local_68;
  undefined4 local_64;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined2 local_40;
  
  if ((int)param_2 - (int)param_1 < 0x121) {
    return;
  }
  do {
    if (param_3 == 0) {
      iVar2 = (int)param_2 - (int)param_1;
      if (0x23 < iVar2) {
        local_60 = iVar2 / 0x12;
        iVar5 = (local_60 + -2) / 2;
        while( true ) {
          puVar6 = (undefined4 *)((int)param_1 + iVar5 * 0x12);
          local_88 = puVar6[1];
          local_84 = puVar6[2];
          local_80 = puVar6[3];
          local_7c = *(undefined2 *)(puVar6 + 4);
          local_50 = *puVar6;
          local_78 = param_4;
          local_4c = local_88;
          local_48 = local_84;
          local_44 = local_80;
          local_40 = local_7c;
          fn_007a030c(param_1,iVar5,local_60,local_50);
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
        }
      }
      while (0x12 < iVar2) {
        if (param_1 != param_2) {
          local_60 = *(undefined4 *)((int)param_2 - 0x12);
          local_5c = *(undefined4 *)((int)param_2 - 0xe);
          local_58 = *(undefined4 *)((int)param_2 - 10);
          local_54 = *(undefined4 *)((int)param_2 - 6);
          uVar1 = (uint)local_50 >> 0x10;
          local_50 = CONCAT22((short)uVar1,*(undefined2 *)((int)param_2 - 2));
          *(undefined4 *)((int)param_2 - 0x12) = *param_1;
          *(undefined4 *)((int)param_2 - 0xe) = param_1[1];
          *(undefined4 *)((int)param_2 - 10) = param_1[2];
          *(undefined4 *)((int)param_2 - 6) = param_1[3];
          *(undefined2 *)((int)param_2 - 2) = *(undefined2 *)(param_1 + 4);
          local_78 = param_4;
          fn_0017821c(&local_88,&local_5c,0xe);
          fn_007a030c(param_1,0,((int)param_2 + (-0x12 - (int)param_1)) / 0x12,local_60);
        }
        param_2 = (undefined4 *)((int)param_2 - 0x12);
        iVar2 = (int)param_2 - (int)param_1;
      }
      return;
    }
    puVar6 = (undefined4 *)((int)param_1 + (((int)param_2 - (int)param_1) / 0x24) * 0x12);
    iVar2 = (*param_4)(param_1,puVar6);
    if (iVar2 == 0) {
      iVar2 = (*param_4)(param_1,(int)param_2 - 0x12);
      if (iVar2 == 0) {
        iVar2 = (*param_4)(puVar6,(int)param_2 - 0x12);
        if (iVar2 != 0) goto LAB_007ab464;
      }
      else {
LAB_007ab448:
        puVar6 = param_1;
      }
    }
    else {
      iVar2 = (*param_4)(puVar6);
      if (iVar2 == 0) {
        iVar2 = (*param_4)(param_1,(int)param_2 - 0x12);
        if (iVar2 == 0) goto LAB_007ab448;
LAB_007ab464:
        puVar6 = (undefined4 *)((int)param_2 - 0x12);
      }
    }
    local_64 = *puVar6;
    local_60 = puVar6[1];
    local_5c = puVar6[2];
    local_58 = puVar6[3];
    local_54 = CONCAT22(((unsigned int)(local_54) >> 16) & 0xffff,*(undefined2 *)(puVar6 + 4));
    puVar6 = param_1;
    puVar3 = param_2;
    while( true ) {
      iVar2 = (*param_4)(puVar6,&local_64);
      while (iVar2 != 0) {
        puVar6 = (undefined4 *)((int)puVar6 + 0x12);
        iVar2 = (*param_4)(puVar6,&local_64);
      }
      do {
        puVar4 = puVar3;
        puVar3 = (undefined4 *)((int)puVar4 - 0x12);
        iVar2 = (*param_4)(&local_64);
      } while (iVar2 != 0);
      if (puVar3 <= puVar6) break;
      local_78 = (code *)*puVar6;
      local_74 = puVar6[1];
      local_70 = puVar6[2];
      local_6c = puVar6[3];
      local_68 = *(undefined2 *)(puVar6 + 4);
      *puVar6 = *puVar3;
      puVar6[1] = *(undefined4 *)((int)puVar4 - 0xe);
      puVar6[2] = *(undefined4 *)((int)puVar4 - 10);
      puVar6[3] = *(undefined4 *)((int)puVar4 - 6);
      *(undefined2 *)(puVar6 + 4) = *(undefined2 *)((int)puVar4 - 2);
      puVar6 = (undefined4 *)((int)puVar6 + 0x12);
      *puVar3 = local_78;
      *(undefined4 *)((int)puVar4 - 0xe) = local_74;
      *(undefined4 *)((int)puVar4 - 10) = local_70;
      *(undefined4 *)((int)puVar4 - 6) = local_6c;
      *(undefined2 *)((int)puVar4 - 2) = local_68;
    }
    param_3 = param_3 / 2;
    fn_007ab19c(puVar6,param_2,param_3,param_4);
    param_2 = puVar6;
    if ((int)puVar6 - (int)param_1 < 0x121) {
      return;
    }
  } while( true );
}



void fn_007aaaa4(int *param_1,int *param_2,int param_3,code *param_4)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int *piVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 auStack_a0 [4];
  int *local_9c;
  int local_98;
  int local_94;
  undefined4 *local_90;
  int *local_8c;
  undefined4 *local_88;
  undefined1 auStack_80 [8];
  int local_78;
  int iStack_74;
  int local_70;
  undefined1 auStack_6c [8];
  int local_64;
  int iStack_60;
  int local_5c;
  undefined1 auStack_58 [8];
  int local_50;
  int iStack_4c;
  int local_48;
  int local_44;
  int *local_40;
  code *local_3c;
  int *piStack_34;
  int *piStack_30;
  int local_2c;
  code *pcStack_28;
  
  piStack_34 = param_1;
  piStack_30 = param_2;
  local_2c = param_3;
  pcStack_28 = param_4;
  if (0x140 < (int)param_2 - (int)param_1) {
    while (local_2c != 0) {
      piVar7 = param_2 + -5;
      piVar13 = param_1 + (((int)param_2 - (int)param_1) / 0x28) * 5;
      iVar3 = (*param_4)(param_1,piVar13);
      if (iVar3 == 0) {
        iVar3 = (*param_4)(param_1,piVar7);
        if (iVar3 == 0) {
          iVar3 = (*param_4)(piVar13,piVar7);
          if (iVar3 != 0) goto LAB_007aafac;
          goto LAB_007aafa8;
        }
LAB_007aaf80:
        piVar7 = param_1;
      }
      else {
        iVar3 = (*param_4)(piVar13);
        if (iVar3 == 0) {
          iVar3 = (*param_4)(param_1,piVar7);
          if (iVar3 == 0) goto LAB_007aaf80;
        }
        else {
LAB_007aafa8:
          piVar7 = piVar13;
        }
      }
LAB_007aafac:
      uVar8 = fn_0034194c(auStack_80,piVar7);
      piVar7 = param_1;
      piVar13 = param_2;
      while( true ) {
        iVar3 = (*param_4)(piVar7,uVar8);
        while (iVar3 != 0) {
          piVar7 = piVar7 + 5;
          iVar3 = (*param_4)(piVar7,uVar8);
        }
        do {
          piVar5 = piVar13;
          piVar13 = piVar5 + -5;
          iVar3 = (*param_4)(uVar8);
        } while (iVar3 != 0);
        iVar3 = local_78;
        if (piVar13 <= piVar7) break;
        local_98 = *piVar7;
        piVar17 = piVar7 + 2;
        local_94 = piVar7[1];
        local_90 = (undefined4 *)0x0;
        local_8c = (int *)0x0;
        local_88 = (undefined4 *)0x0;
        uVar1 = piVar7[3] - *piVar17 >> 5;
        uVar16 = 0x20;
        if (0x1f < uVar1) {
          uVar16 = uVar1;
        }
        local_90 = (undefined4 *)fn_00100fc6(uVar16 << 5,0);
        puVar11 = (undefined4 *)piVar7[3];
        puVar9 = local_90;
        for (puVar10 = (undefined4 *)*piVar17; puVar10 != puVar11; puVar10 = puVar10 + 8) {
          if (puVar9 != (undefined4 *)0x0) {
            uVar18 = puVar10[1];
            uVar19 = puVar10[2];
            uVar20 = puVar10[3];
            uVar21 = puVar10[4];
            uVar22 = puVar10[5];
            uVar23 = puVar10[6];
            uVar24 = puVar10[7];
            *puVar9 = *puVar10;
            puVar9[1] = uVar18;
            puVar9[2] = uVar19;
            puVar9[3] = uVar20;
            puVar9[4] = uVar21;
            puVar9[5] = uVar22;
            puVar9[6] = uVar23;
            puVar9[7] = uVar24;
          }
          puVar9 = puVar9 + 8;
        }
        local_8c = (int *)((piVar7[3] - *piVar17 & 0xffffffe0U) + (int)local_90);
        local_88 = local_90 + uVar16 * 8;
        *piVar7 = *piVar13;
        piVar7[1] = piVar5[-4];
        fn_0078e228(piVar7 + 2,piVar5 + -3);
        *piVar13 = local_98;
        piVar5[-4] = local_94;
        fn_0078e228(piVar5 + -3,&local_90);
        for (puVar10 = local_90; puVar10 != local_8c; puVar10 = puVar10 + 8) {
        }
        fn_001008c4(local_90,(int)local_88 - (int)local_90 >> 5,0);
        piVar7 = piVar7 + 5;
      }
      for (; iVar3 != iStack_74; iVar3 = iVar3 + 0x20) {
      }
      fn_001008c4(local_78,local_70 - local_78 >> 5,0);
      local_2c = local_2c / 2;
      fn_007aaaa4(piVar7,param_2,local_2c,param_4);
      param_2 = piVar7;
      if ((int)piVar7 - (int)param_1 < 0x141) {
        return;
      }
    }
    local_88 = (undefined4 *)((int)param_2 - (int)param_1);
    local_8c = param_2;
    if (0x27 < (int)local_88) {
      local_44 = (int)local_88 / 0x14;
      iVar3 = (local_44 + -2) / 2;
      local_40 = param_1;
      local_3c = param_4;
      do {
        piVar7 = local_40;
        iVar15 = local_44;
        uVar8 = fn_0034194c(auStack_6c,local_40 + iVar3 * 5);
        pcVar2 = local_3c;
        iVar14 = iVar3;
        while( true ) {
          iVar6 = iVar14 * 2;
          iVar12 = iVar6 + 2;
          if (iVar15 <= iVar12) break;
          iVar4 = (*pcVar2)(piVar7 + iVar12 * 5,piVar7 + iVar12 * 5 + -5);
          if (iVar4 != 0) {
            iVar12 = iVar6 + 1;
          }
          piVar13 = piVar7 + iVar14 * 5;
          *piVar13 = piVar7[iVar12 * 5];
          piVar13[1] = piVar7[iVar12 * 5 + 1];
          fn_0078e228(piVar13 + 2,piVar7 + iVar12 * 5 + 2);
          iVar14 = iVar12;
        }
        if (iVar12 == iVar15) {
          piVar13 = piVar7 + iVar14 * 5;
          *piVar13 = piVar7[iVar12 * 5 + -5];
          piVar13[1] = piVar7[iVar12 * 5 + -4];
          fn_0078e228(piVar13 + 2,piVar7 + iVar12 * 5 + -3);
          iVar14 = iVar6 + 1;
        }
        local_9c = (int *)fn_0034194c(auStack_58,uVar8);
        while (iVar15 = (iVar14 + -1) / 2, iVar3 < iVar14) {
          piVar13 = piVar7 + iVar15 * 5;
          iVar6 = (*pcVar2)(piVar13,local_9c);
          if (iVar6 == 0) break;
          piVar5 = piVar7 + iVar14 * 5;
          *piVar5 = piVar7[iVar15 * 5];
          piVar5[1] = piVar13[1];
          fn_0078e228(piVar5 + 2,piVar13 + 2);
          iVar14 = iVar15;
        }
        piVar7 = piVar7 + iVar14 * 5;
        *piVar7 = *local_9c;
        piVar7[1] = local_9c[1];
        fn_0078e228(piVar7 + 2,local_9c + 2);
        for (iVar14 = local_50; iVar14 != iStack_4c; iVar14 = iVar14 + 0x20) {
        }
        fn_001008c4(local_50,local_48 - local_50 >> 5,0);
        for (iVar14 = local_64; iVar14 != iStack_60; iVar14 = iVar14 + 0x20) {
        }
        fn_001008c4(local_64,local_5c - local_64 >> 5,0);
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
      } while( true );
    }
    piVar7 = local_8c;
    puVar10 = local_88;
    if (local_8c < param_2) {
      iVar3 = (int)local_88 / 0x14;
      piVar13 = local_8c;
      do {
        iVar14 = (*param_4)(piVar13,param_1);
        if (iVar14 != 0) {
          uVar8 = fn_0034194c(auStack_6c,piVar13);
          *piVar13 = *param_1;
          piVar13[1] = param_1[1];
          fn_0078e228(piVar13 + 2,param_1 + 2);
          uVar8 = fn_0034194c(auStack_a0,uVar8);
          fn_007a0184(param_1,0,iVar3,uVar8,param_4);
          for (iVar14 = local_98; iVar14 != local_94; iVar14 = iVar14 + 0x20) {
          }
          fn_001008c4(local_98,(int)local_90 - local_98 >> 5,0);
          for (iVar14 = local_64; iVar14 != iStack_60; iVar14 = iVar14 + 0x20) {
          }
          fn_001008c4(local_64,local_5c - local_64 >> 5,0);
        }
        piVar13 = piVar13 + 5;
        piVar7 = local_8c;
        puVar10 = local_88;
      } while (piVar13 < param_2);
    }
    while (0x14 < (int)puVar10) {
      if (param_1 != piVar7) {
        piVar13 = piVar7 + -5;
        uVar8 = fn_0034194c(auStack_a0,piVar13);
        *piVar13 = *param_1;
        piVar7[-4] = param_1[1];
        fn_0078e228(piVar7 + -3,param_1 + 2);
        uVar8 = fn_0034194c(auStack_6c,uVar8);
        fn_007a0184(param_1,0,((int)piVar13 - (int)param_1) / 0x14,uVar8,param_4);
        for (iVar3 = local_64; iVar3 != iStack_60; iVar3 = iVar3 + 0x20) {
        }
        fn_001008c4(local_64,local_5c - local_64 >> 5,0);
        for (iVar3 = local_98; iVar3 != local_94; iVar3 = iVar3 + 0x20) {
        }
        fn_001008c4(local_98,(int)local_90 - local_98 >> 5,0);
      }
      piVar7 = piVar7 + -5;
      puVar10 = (undefined4 *)((int)piVar7 - (int)param_1);
    }
  }
  return;
}


