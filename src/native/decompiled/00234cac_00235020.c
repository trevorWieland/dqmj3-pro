#include "00234cac_00235020.h"



uint * fn_00235020(uint *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  uint local_18;
  uint local_14;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_18 = 3;
  uVar8 = (int)-*param_1 >> 3;
  if (uVar8 < 3) {
    local_14 = uVar8 + (uVar8 >> 1) + (uVar8 >> 3);
    if (local_14 < uVar8 + 0x20) {
      local_14 = uVar8 + 0x20;
    }
    puVar5 = &local_14;
    if (local_14 < 4) {
      puVar5 = &local_18;
    }
    uVar8 = *puVar5;
    puVar1 = (undefined4 *)fn_00100fc6(uVar8 << 3,0);
    puVar7 = (undefined4 *)param_1[1];
    puVar2 = puVar1;
    for (puVar6 = (undefined4 *)*param_1; puVar6 != puVar7; puVar6 = puVar6 + 2) {
      if (puVar2 != (undefined4 *)0x0) {
        uVar9 = puVar6[1];
        *puVar2 = *puVar6;
        puVar2[1] = uVar9;
      }
      puVar2 = puVar2 + 2;
    }
    uVar3 = *param_1;
    uVar4 = uVar3;
    if (param_1[1] < uVar3) {
      do {
        uVar4 = uVar4 + 8;
      } while (uVar4 != param_1[1]);
    }
    fn_001008c4(uVar3,(int)(param_1[2] - uVar3) >> 3,0);
    uVar4 = *param_1;
    *param_1 = (uint)puVar1;
    param_1[1] = (param_1[1] - uVar4 & 0xfffffff8) + (int)puVar1;
    param_1[2] = (uint)(puVar1 + uVar8 * 2);
  }
  return param_1;
}



void fn_00234dcc(uint *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  
  if (param_2 != 0) {
    uVar7 = *param_1;
    uVar9 = param_1[1];
    if (uVar7 != uVar9) {
      uVar2 = uVar7;
      if (uVar9 <= uVar7) {
        do {
          uVar2 = uVar2 + 8;
        } while (uVar2 != uVar9);
      }
      param_1[1] = uVar9 - (uVar9 - uVar7 & 0xfffffff8);
    }
    iVar12 = 3 - param_2;
    while( true ) {
      puVar10 = (undefined4 *)param_1[1];
      uVar7 = (int)((int)puVar10 - *param_1) >> 3;
      if (uVar7 == param_2) break;
      iVar1 = iVar12 * 8;
      puVar13 = (undefined4 *)(&DAT_007c6774 + iVar1);
      if (puVar10 == (undefined4 *)param_1[2]) {
        if (uVar7 < (uint)((int)((int)param_1[2] - *param_1) >> 3)) {
          param_1[1] = (uint)(puVar10 + 2);
          if (puVar10 != (undefined4 *)0x0) {
            *puVar10 = puVar10[-2];
            puVar10[1] = puVar10[-1];
          }
          puVar5 = puVar10 + -2;
          puVar11 = puVar10;
          if (puVar10 < puVar5) {
            iVar3 = (int)puVar5 - (int)puVar10;
            if (0 < iVar3) {
              if (iVar3 * 0x10000000 < 0) {
                puVar5 = puVar10 + -4;
                puVar11 = puVar10 + -2;
                *puVar11 = *puVar5;
                puVar10[-1] = puVar10[-3];
              }
              for (iVar3 = iVar3 >> 4; iVar3 != 0; iVar3 = iVar3 + -1) {
                uVar8 = puVar5[-1];
                puVar11[-2] = puVar5[-2];
                puVar11[-1] = uVar8;
                uVar8 = puVar5[-3];
                puVar11[-4] = puVar5[-4];
                puVar11[-3] = uVar8;
                puVar5 = puVar5 + -4;
                puVar11 = puVar11 + -4;
              }
            }
          }
          else {
            while (puVar10 != puVar5) {
              uVar8 = puVar5[-1];
              puVar11[-2] = puVar5[-2];
              puVar11[-1] = uVar8;
              puVar11 = puVar11 + -2;
              puVar5 = puVar5 + -2;
            }
          }
          uVar8 = *(undefined4 *)(&DAT_007c6778 + iVar1);
          *puVar10 = *puVar13;
          puVar10[1] = uVar8;
        }
        else {
          uVar2 = uVar7 + (uVar7 >> 1) + (uVar7 >> 3);
          uVar9 = uVar7 + 0x20;
          if (uVar7 + 0x20 <= uVar2) {
            uVar9 = uVar2;
          }
          puVar4 = (undefined4 *)fn_00100fc6(uVar9 << 3,0);
          puVar11 = puVar4;
          for (puVar5 = (undefined4 *)*param_1; puVar5 != puVar10; puVar5 = puVar5 + 2) {
            if (puVar11 != (undefined4 *)0x0) {
              uVar8 = puVar5[1];
              *puVar11 = *puVar5;
              puVar11[1] = uVar8;
            }
            puVar11 = puVar11 + 2;
          }
          puVar5 = (undefined4 *)(((int)puVar10 - *param_1 & 0xfffffff8) + (int)puVar4);
          if (puVar5 != (undefined4 *)0x0) {
            uVar8 = *(undefined4 *)(&DAT_007c6778 + iVar1);
            *puVar5 = *puVar13;
            puVar5[1] = uVar8;
          }
          puVar5 = (undefined4 *)param_1[1];
          puVar13 = (undefined4 *)(((int)puVar10 - *param_1 & 0xfffffff8) + (int)puVar4);
          for (; puVar10 != puVar5; puVar10 = puVar10 + 2) {
            puVar11 = puVar13 + 2;
            if (puVar11 != (undefined4 *)0x0) {
              uVar8 = puVar10[1];
              *puVar11 = *puVar10;
              puVar13[3] = uVar8;
            }
            puVar13 = puVar11;
          }
          uVar2 = *param_1;
          uVar6 = param_1[1];
          uVar7 = uVar2;
          if (uVar6 < uVar2) {
            do {
              uVar7 = uVar7 + 8;
            } while (uVar7 != uVar6);
          }
          fn_001008c4(uVar2,(int)(param_1[2] - uVar2) >> 3,0);
          param_1[2] = (uint)(puVar4 + uVar9 * 2);
          param_1[1] = (uint)(puVar4 + ((int)(uVar6 - uVar2) >> 3) * 2 + 2);
          *param_1 = (uint)puVar4;
        }
      }
      else {
        param_1[1] = (uint)(puVar10 + 2);
        if (puVar10 != (undefined4 *)0x0) {
          uVar8 = *(undefined4 *)(&DAT_007c6778 + iVar1);
          *puVar10 = *puVar13;
          puVar10[1] = uVar8;
        }
      }
      iVar12 = iVar12 + 1;
    }
  }
  return;
}



void fn_00234da4(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 unaff_r4;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined4 *puVar15;
  
  uVar2 = (**(code **)(*param_1 + 0x10))(param_1);
  puVar3 = (uint *)(param_1 + 2);
  if (uVar2 != 0) {
    uVar7 = *puVar3;
    uVar10 = param_1[3];
    if (uVar7 != uVar10) {
      uVar4 = uVar7;
      if (uVar10 <= uVar7) {
        do {
          uVar4 = uVar4 + 8;
        } while (uVar4 != uVar10);
      }
      param_1[3] = uVar10 - (uVar10 - uVar7 & 0xfffffff8);
    }
    iVar14 = 3 - uVar2;
    while( true ) {
      puVar12 = (undefined4 *)param_1[3];
      uVar7 = (int)((int)puVar12 - *puVar3) >> 3;
      if (uVar7 == uVar2) break;
      puVar11 = (undefined4 *)param_1[4];
      iVar1 = iVar14 * 8;
      puVar15 = (undefined4 *)(&DAT_007c6774 + iVar1);
      if (puVar12 == puVar11) {
        iVar9 = (int)puVar11 - *puVar3;
        if (uVar7 < (uint)(iVar9 >> 3)) {
          param_1[3] = (int)(puVar12 + 2);
          if (puVar12 != (undefined4 *)0x0) {
            *puVar12 = puVar12[-2];
            puVar12[1] = puVar12[-1];
          }
          puVar11 = puVar12 + -2;
          puVar13 = puVar12;
          if (puVar12 < puVar11) {
            iVar9 = (int)puVar11 - (int)puVar12;
            if (0 < iVar9) {
              if (iVar9 * 0x10000000 < 0) {
                puVar11 = puVar12 + -4;
                puVar13 = puVar12 + -2;
                *puVar13 = *puVar11;
                puVar12[-1] = puVar12[-3];
              }
              for (iVar9 = iVar9 >> 4; iVar9 != 0; iVar9 = iVar9 + -1) {
                uVar8 = puVar11[-1];
                puVar13[-2] = puVar11[-2];
                puVar13[-1] = uVar8;
                uVar8 = puVar11[-3];
                puVar13[-4] = puVar11[-4];
                puVar13[-3] = uVar8;
                puVar11 = puVar11 + -4;
                puVar13 = puVar13 + -4;
              }
            }
          }
          else {
            while (puVar12 != puVar11) {
              uVar8 = puVar11[-1];
              puVar13[-2] = puVar11[-2];
              puVar13[-1] = uVar8;
              puVar13 = puVar13 + -2;
              puVar11 = puVar11 + -2;
            }
          }
          uVar8 = *(undefined4 *)(&DAT_007c6778 + iVar1);
          *puVar12 = *puVar15;
          puVar12[1] = uVar8;
        }
        else {
          uVar4 = uVar7 + (uVar7 >> 1) + (uVar7 >> 3);
          uVar10 = uVar7 + 0x20;
          if (uVar7 + 0x20 <= uVar4) {
            uVar10 = uVar4;
          }
          puVar5 = (undefined4 *)fn_00100fc6(uVar10 << 3,0,iVar9,puVar11,unaff_r4);
          puVar13 = puVar5;
          for (puVar11 = (undefined4 *)*puVar3; puVar11 != puVar12; puVar11 = puVar11 + 2) {
            if (puVar13 != (undefined4 *)0x0) {
              uVar8 = puVar11[1];
              *puVar13 = *puVar11;
              puVar13[1] = uVar8;
            }
            puVar13 = puVar13 + 2;
          }
          puVar11 = (undefined4 *)(((int)puVar12 - *puVar3 & 0xfffffff8) + (int)puVar5);
          if (puVar11 != (undefined4 *)0x0) {
            uVar8 = *(undefined4 *)(&DAT_007c6778 + iVar1);
            *puVar11 = *puVar15;
            puVar11[1] = uVar8;
          }
          puVar15 = (undefined4 *)param_1[3];
          puVar11 = (undefined4 *)(((int)puVar12 - *puVar3 & 0xfffffff8) + (int)puVar5);
          for (; puVar12 != puVar15; puVar12 = puVar12 + 2) {
            puVar13 = puVar11 + 2;
            if (puVar13 != (undefined4 *)0x0) {
              uVar8 = puVar12[1];
              *puVar13 = *puVar12;
              puVar11[3] = uVar8;
            }
            puVar11 = puVar13;
          }
          uVar4 = *puVar3;
          uVar6 = param_1[3];
          uVar7 = uVar4;
          if (uVar6 < uVar4) {
            do {
              uVar7 = uVar7 + 8;
            } while (uVar7 != uVar6);
          }
          fn_001008c4(uVar4,(int)(param_1[4] - uVar4) >> 3,0);
          param_1[4] = (int)(puVar5 + uVar10 * 2);
          param_1[3] = (int)(puVar5 + ((int)(uVar6 - uVar4) >> 3) * 2 + 2);
          *puVar3 = (uint)puVar5;
        }
      }
      else {
        param_1[3] = (int)(puVar12 + 2);
        if (puVar12 != (undefined4 *)0x0) {
          uVar8 = *(undefined4 *)(&DAT_007c6778 + iVar1);
          *puVar12 = *puVar15;
          puVar12[1] = uVar8;
        }
      }
      iVar14 = iVar14 + 1;
    }
  }
  return;
}



void fn_00234d5c(int param_1)

{
  if (param_1 == 2) {
    fn_0022f750((char *)&DAT_00234d94);
    return;
  }
  if ((param_1 == 1) || (param_1 != 0)) {
    fn_0022f750((char *)&DAT_00234d8c);
    return;
  }
  fn_0022f750(&DAT_00234d9c);
  return;
}



ushort fn_00234d38(int param_1)

{
  return *(ushort *)(DAT_00892900 + param_1 * 0x72 + 10) & 0x1fff;
}



uint fn_00234d10(int param_1)

{
  return (*(ushort *)(DAT_00892900 + param_1 * 0x72 + 8) & 0xfff) >> 8;
}



void fn_00234cac(void)

{
  undefined4 uVar1;
  
  uVar1 = fn_00118290();
  DAT_008928f8 = fn_0011c184(L"rom:/data/Parameter/Whale/EnmyKindTbl.bin",uVar1,0x80,5);
  DAT_008928fc = fn_00145ac0();
  DAT_00892900 = DAT_008928fc + 8;
  return;
}


