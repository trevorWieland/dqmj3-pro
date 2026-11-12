#include "00263cbc_0026455c.h"



int fn_0026455c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_138;
  int local_134;
  undefined1 auStack_130 [128];
  undefined1 auStack_b0 [128];
  int local_30 [2];
  undefined1 auStack_28 [8];
  int iStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iStack_20 = param_1;
  local_1c = param_2;
  uStack_18 = param_3;
  uStack_14 = param_4;
  fn_00301f50(auStack_130,0x80);
  fn_001f835c(auStack_130,0x80,(int)(short)local_1c,param_4);
  fn_00301f50(auStack_b0,0x80);
  fn_00101a50(auStack_b0,0x80,L"patch:/data/Model/%s.bch",auStack_130);
  fn_00785f5c(local_30,param_1 + 0x28,&local_1c);
  if (local_30[0] == *(int *)(param_1 + 0x38)) {
    iVar1 = 0x51;
    do {
      if (*(int *)(*(int *)(param_1 + 0x1c) + iVar1 * 4) == 0) goto LAB_00264604;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x5b);
    iVar1 = -1;
LAB_00264604:
    local_138 = 0;
    iVar1 = fn_00264f50(param_1,iVar1,auStack_b0,param_3);
    if (iVar1 != -1) {
      local_138 = CONCAT22(((unsigned int)(local_138) >> 16) & 0xffff,(short)local_1c);
      local_134 = iVar1;
      fn_00785fc4(auStack_28,param_1 + 0x28,&local_138);
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



undefined4 fn_00264434(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_90 [128];
  
  uVar1 = fn_0068c6ac(DAT_008977e8);
  uVar1 = fn_006adb48(uVar1,param_2);
  fn_00101a50(auStack_90,0x80,L"rom:/data/Race/Hit/%s_W.bin",uVar1);
  uVar1 = 0x38;
  uVar2 = fn_00118290();
  uVar2 = fn_0011c184(auStack_90,uVar2,0x80,5);
  iVar3 = fn_00145ac0();
  if (iVar3 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xe0) = uVar2;
  }
  return uVar1;
}



int fn_00264404(int param_1)

{
  int iVar1;
  
  if ((uint)((*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x34) < 0x44) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 4) + 0xd9c;
  }
  return iVar1;
}



int fn_00264324(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = param_2 + 0x3a;
  iVar4 = iVar1;
  do {
    if (*(int *)(*(int *)(param_1 + 0x1c) + iVar4 * 4) == 0) {
      if (iVar4 == -1) {
        return iVar1;
      }
      uVar2 = fn_001287b4();
      uVar2 = fn_0011c184(L"rom:/data/Model/BreakL.bch",uVar2,0x80,5);
      iVar3 = fn_00145ac0();
      iVar4 = -1;
      if (iVar3 != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar1 * 4) = uVar2;
        iVar4 = iVar1;
      }
      uVar2 = fn_00145ac0(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4 * 4));
      fn_00179dc0(param_1,iVar4,uVar2);
      return iVar4;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < param_2 + 0x3b);
  return iVar1;
}



void fn_00264288(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_90 [132];
  
  uVar1 = fn_0068c6ac(DAT_008977e8);
  uVar1 = fn_006adb48(uVar1,param_2);
  fn_00101a50(auStack_90,0x80,L"rom:/data/Field/Obj/o_%s.bch",uVar1);
  fn_00264f50(param_1,2,auStack_90,1,1);
  return;
}



undefined4 fn_00263cbc(undefined4 param_1,uint *param_2,uint *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  uint uVar14;
  int iVar15;
  undefined4 uVar16;
  uint uVar17;
  uint uVar18;
  undefined4 local_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_ec;
  undefined1 auStack_e8 [148];
  uint local_54;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 auStack_40 [12];
  undefined4 local_34;
  uint *puStack_30;
  uint *puStack_2c;
  undefined4 uStack_28;
  
  uVar16 = 0;
  local_34 = param_1;
  puStack_30 = param_2;
  puStack_2c = param_3;
  uStack_28 = param_4;
  uVar1 = fn_0068c6ac(DAT_008977e8);
  local_48 = fn_006adb48(uVar1,param_4);
  fn_00101a50(auStack_e8,0x80,L"rom:/data/Field/Lod/%s/VP.lod",local_48);
  uVar1 = fn_00118290();
  local_4c = fn_0011c184(auStack_e8,uVar1,4,5);
  iVar2 = fn_00145ac0();
  if (iVar2 != 0) {
    fn_005f44cc(auStack_40);
    uVar1 = fn_00145ac0(local_4c);
    fn_005f4484(auStack_40,uVar1);
    uVar17 = 0;
    iVar2 = fn_006ec94c(auStack_40);
    if (0 < iVar2) {
      do {
        fn_006ec970(auStack_40,uVar17 & 0xffff,&local_104);
        fn_00101a50(auStack_e8,0x80,L"rom:/data/Field/Lod/%s/%s_H.bch",local_48,local_ec);
        iVar2 = fn_00264f50(local_34,uVar17 + 3,auStack_e8,1,1);
        if (iVar2 != -1) {
          piVar3 = (int *)param_2[1];
          if (piVar3 == (int *)param_2[2]) {
            uVar9 = (int)((int)piVar3 - *param_2) >> 2;
            if (uVar9 < (uint)((int)((int)param_2[2] - *param_2) >> 2)) {
              param_2[1] = (uint)(piVar3 + 1);
              if (piVar3 != (int *)0x0) {
                *piVar3 = piVar3[-1];
              }
              piVar10 = piVar3 + -1;
              piVar11 = piVar3;
              if (piVar3 < piVar10) {
                iVar15 = (int)piVar10 - (int)piVar3;
                if (0 < iVar15) {
                  if (iVar15 * 0x20000000 < 0) {
                    piVar10 = piVar3 + -2;
                    piVar11 = piVar3 + -1;
                    *piVar11 = *piVar10;
                  }
                  for (iVar15 = iVar15 >> 3; iVar15 != 0; iVar15 = iVar15 + -1) {
                    piVar11[-1] = piVar10[-1];
                    piVar10 = piVar10 + -2;
                    piVar11 = piVar11 + -2;
                    *piVar11 = *piVar10;
                  }
                }
              }
              else {
                while (piVar3 != piVar10) {
                  piVar10 = piVar10 + -1;
                  piVar11[-1] = *piVar10;
                  piVar11 = piVar11 + -1;
                }
              }
              *piVar3 = iVar2;
            }
            else {
              local_54 = uVar9 + (uVar9 >> 1) + (uVar9 >> 3);
              if (local_54 < uVar9 + 0x20) {
                local_54 = uVar9 + 0x20;
              }
              piVar4 = (int *)fn_00100fc6(local_54 << 2,0);
              piVar11 = piVar4;
              for (piVar10 = (int *)*param_2; piVar10 != piVar3; piVar10 = piVar10 + 1) {
                if (piVar11 != (int *)0x0) {
                  *piVar11 = *piVar10;
                }
                piVar11 = piVar11 + 1;
              }
              piVar10 = (int *)(((int)piVar3 - *param_2 & 0xfffffffc) + (int)piVar4);
              if (piVar10 != (int *)0x0) {
                *piVar10 = iVar2;
              }
              piVar11 = (int *)param_2[1];
              piVar10 = (int *)(((int)piVar3 - *param_2 & 0xfffffffc) + (int)piVar4);
              for (; piVar3 != piVar11; piVar3 = piVar3 + 1) {
                piVar10 = piVar10 + 1;
                if (piVar10 != (int *)0x0) {
                  *piVar10 = *piVar3;
                }
              }
              uVar18 = *param_2;
              uVar8 = param_2[1];
              uVar9 = uVar18;
              if (uVar8 < uVar18) {
                do {
                  uVar9 = uVar9 + 4;
                } while (uVar9 != uVar8);
              }
              fn_001008c4(uVar18,(int)(param_2[2] - uVar18) >> 2,0);
              param_2[2] = (uint)(piVar4 + local_54);
              param_2[1] = (uint)(piVar4 + ((int)(uVar8 - uVar18) >> 2) + 1);
              *param_2 = (uint)piVar4;
            }
          }
          else {
            param_2[1] = (uint)(piVar3 + 1);
            if (piVar3 != (int *)0x0) {
              *piVar3 = iVar2;
            }
          }
          puVar5 = (undefined4 *)param_3[1];
          if (puVar5 == (undefined4 *)param_3[2]) {
            uVar9 = (int)((int)puVar5 - *param_3) / 0xc;
            if (uVar9 < (uint)((int)((int)param_3[2] - *param_3) / 0xc)) {
              param_3[1] = (uint)(puVar5 + 3);
              if (puVar5 != (undefined4 *)0x0) {
                *puVar5 = puVar5[-3];
                puVar5[1] = puVar5[-2];
                puVar5[2] = puVar5[-1];
              }
              puVar12 = puVar5 + -3;
              puVar13 = puVar5;
              if (puVar5 < puVar12) {
                if (0 < (int)puVar12 - (int)puVar5) {
                  uVar9 = ((int)puVar12 - (int)puVar5) / 0xc;
                  if ((uVar9 & 1) != 0) {
                    puVar12 = puVar5 + -6;
                    puVar13 = puVar5 + -3;
                    *puVar13 = *puVar12;
                    puVar5[-2] = puVar5[-5];
                    puVar5[-1] = puVar5[-4];
                  }
                  for (iVar2 = (int)uVar9 >> 1; iVar2 != 0; iVar2 = iVar2 + -1) {
                    uVar1 = puVar12[-2];
                    uVar16 = puVar12[-1];
                    puVar13[-3] = puVar12[-3];
                    puVar13[-2] = uVar1;
                    puVar13[-1] = uVar16;
                    uVar1 = puVar12[-5];
                    uVar16 = puVar12[-4];
                    puVar13[-6] = puVar12[-6];
                    puVar13[-5] = uVar1;
                    puVar13[-4] = uVar16;
                    puVar12 = puVar12 + -6;
                    puVar13 = puVar13 + -6;
                  }
                }
              }
              else {
                while (puVar5 != puVar12) {
                  uVar1 = puVar12[-2];
                  uVar16 = puVar12[-1];
                  puVar13[-3] = puVar12[-3];
                  puVar13[-2] = uVar1;
                  puVar13[-1] = uVar16;
                  puVar13 = puVar13 + -3;
                  puVar12 = puVar12 + -3;
                }
              }
              *puVar5 = local_104;
              puVar5[1] = uStack_100;
              puVar5[2] = uStack_fc;
            }
            else {
              uVar18 = uVar9 + (uVar9 >> 1) + (uVar9 >> 3);
              if (uVar18 < uVar9 + 0x20) {
                uVar18 = uVar9 + 0x20;
              }
              puVar6 = (undefined4 *)fn_00100fc6(uVar18 * 0xc,0);
              puVar13 = puVar6;
              for (puVar12 = (undefined4 *)*param_3; puVar12 != puVar5; puVar12 = puVar12 + 3) {
                if (puVar13 != (undefined4 *)0x0) {
                  uVar1 = puVar12[1];
                  uVar16 = puVar12[2];
                  *puVar13 = *puVar12;
                  puVar13[1] = uVar1;
                  puVar13[2] = uVar16;
                }
                puVar13 = puVar13 + 3;
              }
              puVar12 = puVar6 + ((int)((int)puVar5 - *param_3) / 0xc) * 3;
              if (puVar12 != (undefined4 *)0x0) {
                *puVar12 = local_104;
                puVar12[1] = uStack_100;
                puVar12[2] = uStack_fc;
              }
              puVar13 = (undefined4 *)param_3[1];
              puVar12 = puVar6 + ((int)((int)puVar5 - *param_3) / 0xc) * 3;
              for (; puVar5 != puVar13; puVar5 = puVar5 + 3) {
                puVar7 = puVar12 + 3;
                if (puVar7 != (undefined4 *)0x0) {
                  uVar1 = puVar5[1];
                  uVar16 = puVar5[2];
                  *puVar7 = *puVar5;
                  puVar12[4] = uVar1;
                  puVar12[5] = uVar16;
                }
                puVar12 = puVar7;
              }
              uVar8 = *param_3;
              uVar14 = param_3[1];
              uVar9 = uVar8;
              if (uVar14 < uVar8) {
                do {
                  uVar9 = uVar9 + 0xc;
                } while (uVar9 != uVar14);
              }
              fn_001008c4(uVar8,(int)(param_3[2] - uVar8) / 0xc,0);
              *param_3 = (uint)puVar6;
              param_3[1] = (uint)(puVar6 + ((int)(uVar14 - uVar8) / 0xc) * 3 + 3);
              param_3[2] = (uint)(puVar6 + uVar18 * 3);
            }
          }
          else {
            param_3[1] = (uint)(puVar5 + 3);
            if (puVar5 != (undefined4 *)0x0) {
              *puVar5 = local_104;
              puVar5[1] = uStack_100;
              puVar5[2] = uStack_fc;
            }
          }
        }
        uVar17 = uVar17 + 1;
        iVar2 = fn_006ec94c(auStack_40);
      } while ((int)uVar17 < iVar2);
    }
    uVar16 = 1;
    fn_005f4564(auStack_40);
  }
  fn_0012d73c(local_4c);
  return uVar16;
}


