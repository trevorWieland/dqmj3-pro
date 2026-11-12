#include "00418e14_00419558.h"



undefined4 fn_00419558(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0x42);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00893a0c) goto LAB_004195a0;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_004195a0:
  param_1[0x32] = (int)puVar1;
  fn_00396280(param_1);
  fn_0036baa0(*(undefined4 *)(param_1[0x2c] + 0x10),param_1[0x29],param_1[0x33],param_1[0x34]);
  (**(code **)(*param_1 + 0x124))(param_1);
  fn_00689efc(param_1,0x42,0);
  return 1;
}



int fn_004192f8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  uint *puVar14;
  int iVar15;
  uint uVar16;
  undefined4 uVar17;
  
  uVar1 = *(undefined4 *)(DAT_00897804 + 0x18);
  iVar2 = fn_006b4fb8();
  iVar15 = 0;
  if (0 < iVar2) {
    do {
      puVar3 = (undefined4 *)fn_002422fc(uVar1,iVar15);
      puVar12 = *(undefined4 **)(param_1 + 0xd0);
      puVar14 = (uint *)(param_1 + 0xcc);
      if (puVar12 == *(undefined4 **)(param_1 + 0xd4)) {
        uVar6 = (int)((int)puVar12 - *puVar14) >> 4;
        if (uVar6 < (uint)((int)((int)*(undefined4 **)(param_1 + 0xd4) - *puVar14) >> 4)) {
          *(undefined4 **)(param_1 + 0xd0) = puVar12 + 4;
          if (puVar12 != (undefined4 *)0x0) {
            *puVar12 = puVar12[-4];
            puVar12[1] = puVar12[-3];
            puVar12[2] = puVar12[-2];
            puVar12[3] = puVar12[-1];
          }
          puVar8 = puVar12 + -4;
          puVar13 = puVar12;
          if (puVar12 < puVar8) {
            iVar4 = (int)puVar8 - (int)puVar12;
            if (0 < iVar4) {
              if (iVar4 * 0x8000000 < 0) {
                puVar8 = puVar12 + -8;
                puVar13 = puVar12 + -4;
                *puVar13 = *puVar8;
                puVar12[-3] = puVar12[-7];
                puVar12[-2] = puVar12[-6];
                puVar12[-1] = puVar12[-5];
              }
              for (iVar4 = iVar4 >> 5; iVar4 != 0; iVar4 = iVar4 + -1) {
                uVar10 = puVar8[-3];
                uVar11 = puVar8[-2];
                uVar17 = puVar8[-1];
                puVar13[-4] = puVar8[-4];
                puVar13[-3] = uVar10;
                puVar13[-2] = uVar11;
                puVar13[-1] = uVar17;
                uVar10 = puVar8[-7];
                uVar11 = puVar8[-6];
                uVar17 = puVar8[-5];
                puVar13[-8] = puVar8[-8];
                puVar13[-7] = uVar10;
                puVar13[-6] = uVar11;
                puVar13[-5] = uVar17;
                puVar8 = puVar8 + -8;
                puVar13 = puVar13 + -8;
              }
            }
          }
          else {
            while (puVar12 != puVar8) {
              uVar10 = puVar8[-3];
              uVar11 = puVar8[-2];
              uVar17 = puVar8[-1];
              puVar13[-4] = puVar8[-4];
              puVar13[-3] = uVar10;
              puVar13[-2] = uVar11;
              puVar13[-1] = uVar17;
              puVar13 = puVar13 + -4;
              puVar8 = puVar8 + -4;
            }
          }
          uVar10 = puVar3[1];
          uVar11 = puVar3[2];
          uVar17 = puVar3[3];
          *puVar12 = *puVar3;
          puVar12[1] = uVar10;
          puVar12[2] = uVar11;
          puVar12[3] = uVar17;
        }
        else {
          uVar7 = uVar6 + (uVar6 >> 1) + (uVar6 >> 3);
          uVar16 = uVar6 + 0x20;
          if (uVar6 + 0x20 <= uVar7) {
            uVar16 = uVar7;
          }
          puVar5 = (undefined4 *)fn_00100fc6(uVar16 << 4,0);
          puVar13 = puVar5;
          for (puVar8 = (undefined4 *)*puVar14; puVar8 != puVar12; puVar8 = puVar8 + 4) {
            if (puVar13 != (undefined4 *)0x0) {
              uVar10 = puVar8[1];
              uVar11 = puVar8[2];
              uVar17 = puVar8[3];
              *puVar13 = *puVar8;
              puVar13[1] = uVar10;
              puVar13[2] = uVar11;
              puVar13[3] = uVar17;
            }
            puVar13 = puVar13 + 4;
          }
          puVar8 = (undefined4 *)(((int)puVar12 - *puVar14 & 0xfffffff0) + (int)puVar5);
          if (puVar8 != (undefined4 *)0x0) {
            uVar10 = puVar3[1];
            uVar11 = puVar3[2];
            uVar17 = puVar3[3];
            *puVar8 = *puVar3;
            puVar8[1] = uVar10;
            puVar8[2] = uVar11;
            puVar8[3] = uVar17;
          }
          puVar8 = *(undefined4 **)(param_1 + 0xd0);
          puVar3 = (undefined4 *)(((int)puVar12 - *puVar14 & 0xfffffff0) + (int)puVar5);
          for (; puVar12 != puVar8; puVar12 = puVar12 + 4) {
            puVar13 = puVar3 + 4;
            if (puVar13 != (undefined4 *)0x0) {
              uVar10 = puVar12[1];
              uVar11 = puVar12[2];
              uVar17 = puVar12[3];
              *puVar13 = *puVar12;
              puVar3[5] = uVar10;
              puVar3[6] = uVar11;
              puVar3[7] = uVar17;
            }
            puVar3 = puVar13;
          }
          uVar7 = *puVar14;
          uVar9 = *(uint *)(param_1 + 0xd0);
          uVar6 = uVar7;
          if (uVar9 < uVar7) {
            do {
              uVar6 = uVar6 + 0x10;
            } while (uVar6 != uVar9);
          }
          fn_001008c4(uVar7,(int)(*(int *)(param_1 + 0xd4) - uVar7) >> 4);
          *(undefined4 **)(param_1 + 0xd4) = puVar5 + uVar16 * 4;
          *(undefined4 **)(param_1 + 0xd0) = puVar5 + ((int)(uVar9 - uVar7) >> 4) * 4 + 4;
          *puVar14 = (uint)puVar5;
        }
      }
      else {
        *(undefined4 **)(param_1 + 0xd0) = puVar12 + 4;
        if (puVar12 != (undefined4 *)0x0) {
          uVar10 = puVar3[1];
          uVar11 = puVar3[2];
          uVar17 = puVar3[3];
          *puVar12 = *puVar3;
          puVar12[1] = uVar10;
          puVar12[2] = uVar11;
          puVar12[3] = uVar17;
        }
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 < iVar2);
  }
  return *(int *)(param_1 + 0xd0) - *(int *)(param_1 + 0xcc) >> 4;
}



void fn_00419218(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  cVar1 = *(char *)(param_1[0x17] + 0x31);
  if (cVar1 == '\x03') {
    uVar2 = param_1[0x34];
    uVar4 = param_1[0x30] - param_1[0x2f] >> 4;
    if (uVar4 <= uVar2) {
      fn_002ff628(9,&DAT_008c7624,&DAT_008c7624,uVar2,uVar4);
      param_4 = uVar4;
    }
    uVar3 = *(undefined4 *)(param_1[0x2f] + uVar2 * 0x10 + 8);
    fn_006899f4(param_1,uVar3,1,1,param_4);
    (**(code **)(*param_1 + 0x13c))(param_1,uVar3);
    *(undefined1 *)(param_1[0x17] + 0x31) = 0;
    return;
  }
  if (cVar1 == '\x02') {
    *(undefined1 *)(param_1[0x17] + 0x31) = 0;
  }
  return;
}



void fn_00419090(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((char)param_1[3] != '\x03') {
    return;
  }
  iVar2 = fn_00747fd0(param_1);
  if (iVar2 == 0) {
    fn_0068ab44(param_1,0x100094d);
    return;
  }
  param_1[0x34] = param_2;
  if (*(int *)(param_1[0x35] + 0x98) != 0) {
    fn_0074824c(param_1,param_2);
    return;
  }
  if (param_2 == 1) {
    *(undefined4 *)(param_1[0x17] + 0x38) = 0;
    fn_00747f28(param_1,DAT_00898214,(char *)&DAT_004191d0,1,1,1,0);
    fn_0068ab44(param_1,0x100094b);
    return;
  }
  uVar1 = param_1[0x30] - param_1[0x2f] >> 4;
  if (uVar1 <= param_2) {
    fn_002ff628(9,&DAT_008c7624,&DAT_008c7624,param_2,uVar1);
  }
  uVar3 = *(undefined4 *)(param_1[0x2f] + param_2 * 0x10 + 8);
  fn_006899f4(param_1,uVar3,1);
  (**(code **)(*param_1 + 0x13c))(param_1,uVar3);
  fn_0068ab44(param_1,0x100094b);
  return;
}



void fn_00419060(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xd8,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_004192bc(iVar1,param_1);
  return;
}



void fn_004192bc(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0043ccd8(param_1,param_2,0);
  puVar1[0x34] = 0;
  *puVar1 = &DAT_0083956c;
  puVar1[0x35] = 0;
  return;
}



void fn_00418e14(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)param_1[6];
  if (puVar4 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar4)(puVar4);
    do {
      if (puVar1 == &DAT_008965d0) goto LAB_00418e58;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar4 = (undefined4 *)0x0;
LAB_00418e58:
  param_1[0x35] = (int)puVar4;
  if (param_1[0x2d] == 0) {
    param_1[0x2d] = (int)(puVar4 + 4);
  }
  fn_0043c608(param_1);
  iVar2 = fn_006896fc(param_1,0x39);
  if (iVar2 == 0) {
    fn_00689930(param_1,0x39,0);
  }
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1);
  if (puVar4 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar4)(puVar4);
    do {
      if (puVar1 == &DAT_008963ac) goto LAB_00418ef0;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar4 = (undefined4 *)0x0;
LAB_00418ef0:
  if (*(int *)(param_1[0x35] + 0x98) == 0) {
    uVar3 = 8;
  }
  else {
    if (*(int *)(param_1[0x35] + 0x98) != 3) goto code_r0x00418f18;
    uVar3 = 5;
  }
  *(undefined1 *)(puVar4 + 0xe) = uVar3;
code_r0x00418f18:
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}


