#include "0036a8a4_0036ac88.h"



int fn_0036ac88(int param_1)

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
  iVar2 = fn_006b4f84();
  iVar15 = 0;
  if (0 < iVar2) {
    do {
      puVar3 = (undefined4 *)fn_0024222c(uVar1,iVar15);
      puVar12 = *(undefined4 **)(param_1 + 200);
      puVar14 = (uint *)(param_1 + 0xc4);
      if (puVar12 == *(undefined4 **)(param_1 + 0xcc)) {
        uVar6 = (int)((int)puVar12 - *puVar14) >> 4;
        if (uVar6 < (uint)((int)((int)*(undefined4 **)(param_1 + 0xcc) - *puVar14) >> 4)) {
          *(undefined4 **)(param_1 + 200) = puVar12 + 4;
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
          puVar8 = *(undefined4 **)(param_1 + 200);
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
          uVar9 = *(uint *)(param_1 + 200);
          uVar6 = uVar7;
          if (uVar9 < uVar7) {
            do {
              uVar6 = uVar6 + 0x10;
            } while (uVar6 != uVar9);
          }
          fn_001008c4(uVar7,(int)(*(int *)(param_1 + 0xcc) - uVar7) >> 4);
          *(undefined4 **)(param_1 + 0xcc) = puVar5 + uVar16 * 4;
          *(undefined4 **)(param_1 + 200) = puVar5 + ((int)(uVar9 - uVar7) >> 4) * 4 + 4;
          *puVar14 = (uint)puVar5;
        }
      }
      else {
        *(undefined4 **)(param_1 + 200) = puVar12 + 4;
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
  return *(int *)(param_1 + 200) - *(int *)(param_1 + 0xc4) >> 4;
}



undefined4 fn_0036abf4(uint param_1)

{
  int iVar1;
  
  if (((*(char *)(param_1 + 0xc) != '\0') &&
      (*(int *)(DAT_00897808 + 0x14) == *(int *)(DAT_00897808 + 0xc))) &&
     (*(int *)(DAT_0089780c + 0x14) == *(int *)(DAT_0089780c + 0xc))) {
    *(undefined1 *)(param_1 + 0xd) = 1;
  }
  if (*(char *)(param_1 + 0xd) == '\0') {
    iVar1 = *(int *)(param_1 + 8);
    param_1 = 0;
    if (iVar1 != 0) {
      param_1 = (uint)*(byte *)(iVar1 + 0xb);
    }
    if (iVar1 == 0 || param_1 == 0) {
      return 7;
    }
  }
  fn_002d37e8(param_1);
  return 6;
}



void fn_0036ab44(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = fn_00182988(DAT_008977e4);
  if (*(char *)(iVar1 + 0x3a3) != '\0') {
    fn_0036aa68(param_1);
    *(undefined1 *)(param_1 + 0xd) = 0;
    return;
  }
  puVar2 = (undefined4 *)fn_0028e650(*(undefined4 *)(param_1 + 4),0x80);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_008964f4) goto LAB_0036abbc;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_0036abbc:
  *(undefined4 **)(param_1 + 8) = puVar2;
  *(undefined1 *)(puVar2 + 2) = 1;
  *(undefined4 *)(*(int *)(param_1 + 8) + 0x10) = 0;
  *(undefined1 *)(*(int *)(param_1 + 8) + 10) = 1;
  fn_001f73a0(*(undefined4 *)(param_1 + 4),0x80);
  return;
}



void fn_0036aa68(int param_1)

{
  uint uVar1;
  undefined4 local_18;
  
  if (*(char *)(param_1 + 0xc) == '\0') {
    if ((*(int *)(DAT_00897808 + 0x14) == *(int *)(DAT_00897808 + 0xc)) &&
       (*(int *)(DAT_0089780c + 0x14) == *(int *)(DAT_0089780c + 0xc))) {
      uVar1 = *(uint *)(DAT_00897808 + 0x18);
      if ((uVar1 << 0x18 | ((uVar1 & 0xffff) >> 8) << 0x10 | ((uVar1 & 0xffffff) >> 0x10) << 8 |
          uVar1 >> 0x18) != 0xff) {
        local_18 = 0xff000000;
        fn_00163988(DAT_00897808,&local_18,10);
      }
      uVar1 = *(uint *)(DAT_0089780c + 0x18);
      if ((uVar1 << 0x18 | ((uVar1 & 0xffff) >> 8) << 0x10 | ((uVar1 & 0xffffff) >> 0x10) << 8 |
          uVar1 >> 0x18) != 0xff) {
        local_18 = 0xff000000;
        fn_00163988(DAT_0089780c,&local_18,10);
      }
    }
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  return;
}



void fn_0036aa40(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_008276a8;
  fn_002e40d8(param_1);
  fn_002e4388(param_1);
  return;
}



undefined4 * fn_0036aa18(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002e42dc();
  *puVar1 = &PTR_FUN_008276a8;
  puVar1[10] = 0;
  puVar1[0xb] = 1;
  *(undefined1 *)(puVar1 + 0xc) = 0;
  return puVar1;
}



void fn_0036a9f8(int *param_1,int param_2)

{
  if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0036aa10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34))(param_1,0,0xffffffff);
  return;
}



bool fn_0036a9c4(int param_1)

{
  bool bVar1;
  
  bVar1 = -1 < *(int *)(param_1 + 0x28) + -1;
  if (bVar1) {
    fn_002e3e30(param_1);
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
  }
  return bVar1;
}



bool fn_0036a98c(int param_1)

{
  bool bVar1;
  
  bVar1 = *(int *)(param_1 + 0x28) + 1 < *(int *)(param_1 + 0x2c);
  if (bVar1) {
    fn_002e3e30(param_1);
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  }
  return bVar1;
}



void fn_0036a948(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  fn_002e3e30();
  if (param_2 == 0) {
    iVar1 = 0;
  }
  else {
    if (param_2 != 1) {
      if (param_2 == 2) {
        *(undefined4 *)(param_1 + 0x28) = param_3;
      }
      return;
    }
    iVar1 = *(int *)(param_1 + 0x2c) + -1;
  }
  *(int *)(param_1 + 0x28) = iVar1;
  return;
}



void fn_0036a8a4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined1 param_10,undefined4 param_11)

{
  fn_002e4004(param_1,param_2,param_5,param_7,param_8);
  fn_002e3d70(param_1,param_4,param_5,param_7,1);
  fn_002e3c08(param_1,param_4,param_3,param_6,param_7,param_8,param_11,0);
  *(undefined4 *)(param_1 + 0x2c) = param_9;
  *(undefined1 *)(param_1 + 0x30) = param_10;
  return;
}


