#include "0020fb74_0020fd28b.h"



void fn_0020fd28(undefined4 param_1,uint *param_2,undefined4 param_3)

{
  short sVar1;
  short sVar2;
  int *piVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int local_d0;
  short local_cc [2];
  int local_c8;
  int iStack_c4;
  int local_c0;
  int local_bc;
  undefined4 local_b8;
  int local_ac;
  int local_a0;
  undefined4 local_9c;
  int local_90;
  int local_84;
  undefined4 local_80;
  int local_74;
  uint local_68;
  uint local_64;
  uint local_60;
  char local_5b;
  undefined4 local_58;
  undefined1 auStack_54 [36];
  undefined4 uStack_30;
  uint *local_2c;
  undefined4 uStack_28;
  
  uStack_30 = param_1;
  local_2c = param_2;
  uStack_28 = param_3;
  fn_0020fb74(local_cc,param_1);
  fn_0020ea94(local_cc);
  if (local_5b == '\0') {
    fn_00661308((int)local_cc[0]);
    iVar5 = fn_0033a35c();
    if (iVar5 == 2 || iVar5 == 1) {
      iVar11 = 0;
      iVar12 = 0;
      iVar5 = fn_0026cda4();
      if (0 < iVar5) {
        do {
          iVar5 = fn_0026cdd0(iVar12);
          if (iVar5 == local_cc[0]) {
            fn_0026cdec(iVar12,auStack_54 + iVar11 * 4 + -4,2);
            iVar11 = iVar11 + 1;
          }
          iVar12 = iVar12 + 1;
          iVar5 = fn_0026cda4();
        } while (iVar12 < iVar5);
        iVar5 = 0;
        if (0 < iVar11) {
          do {
            local_d0 = (int)*(short *)(auStack_54 + iVar5 * 4 + -2);
            fn_0020f3e0(local_cc,3,3,(int)*(short *)(auStack_54 + iVar5 * 4 + -4));
            if (local_5b != '\0') break;
            iVar5 = iVar5 + 1;
          } while (iVar5 < iVar11);
        }
      }
    }
  }
  if (local_5b == '\0') {
    fn_00661308((int)local_cc[0]);
    iVar5 = fn_0033a35c();
    if (iVar5 == 2 || iVar5 == 1) {
      iVar12 = 0;
      iVar11 = 0;
      iVar5 = fn_00378ba8();
      if (0 < iVar5) {
        do {
          iVar5 = fn_00378bf0(iVar11);
          if (iVar5 == local_cc[0]) {
            uVar4 = fn_00378bbc(iVar11);
            iVar5 = iVar12 * 4;
            *(undefined2 *)(auStack_54 + iVar5 + -4) = uVar4;
            uVar4 = fn_00378afc(iVar11);
            iVar12 = iVar12 + 1;
            *(undefined2 *)(auStack_54 + iVar5 + -2) = uVar4;
          }
          iVar11 = iVar11 + 1;
          iVar5 = fn_00378ba8();
        } while (iVar11 < iVar5);
        iVar5 = 0;
        if (0 < iVar12) {
          do {
            iVar11 = 0x3fe;
            sVar1 = *(short *)(auStack_54 + iVar5 * 4 + -4);
            sVar2 = *(short *)(auStack_54 + iVar5 * 4 + -2);
            do {
              iVar6 = fn_001a46f4();
              if ((iVar6 != 0) && (iVar6 = fn_00661094((int)(short)iVar11), iVar6 == sVar2)) {
                local_d0 = (int)(short)iVar11;
                fn_0020f3e0(local_cc,4,3,(int)sVar1);
                if (local_5b != '\0') goto LAB_0020ff1c;
              }
              iVar11 = iVar11 + -1;
            } while (0 < iVar11);
            iVar5 = iVar5 + 1;
          } while (iVar5 < iVar12);
        }
      }
    }
  }
LAB_0020ff1c:
  fn_0020f2d8(local_cc);
  uVar8 = *local_2c;
  *local_2c = local_68;
  uVar9 = local_2c[1];
  local_2c[1] = local_64;
  uVar10 = local_2c[2];
  local_2c[2] = local_60;
  uVar7 = uVar8;
  if (uVar9 < uVar8) {
    do {
      uVar7 = uVar7 + 0x10;
    } while (uVar7 != uVar9);
  }
  local_68 = uVar8;
  local_64 = uVar9;
  local_60 = uVar10;
  fn_001008c4(uVar8,(int)(uVar10 - uVar8) >> 4,0);
  if (local_74 != 0) {
    local_58 = local_74;
    local_d0 = *(int *)(local_74 + 8);
    fn_00770154(auStack_54,&local_84,&local_d0,&local_58);
    *(undefined4 *)(local_74 + 0xc) = local_80;
    piVar3 = (int *)local_84;
    while (local_84 = (int)piVar3, piVar3 != (int *)0x0) {
      local_84 = *piVar3;
      fn_001008c4(piVar3[2],piVar3[1],0);
      fn_001008c4(piVar3,1,0);
      piVar3 = (int *)local_84;
    }
  }
  if (local_90 != 0) {
    local_d0 = local_90;
    local_58 = *(int *)(local_90 + 8);
    fn_00770154(auStack_54,&local_a0,&local_58,&local_d0);
    *(undefined4 *)(local_90 + 0xc) = local_9c;
    piVar3 = (int *)local_a0;
    while (local_a0 = (int)piVar3, piVar3 != (int *)0x0) {
      local_a0 = *piVar3;
      fn_001008c4(piVar3[2],piVar3[1],0);
      fn_001008c4(piVar3,1,0);
      piVar3 = (int *)local_a0;
    }
  }
  iVar5 = local_c8;
  if (local_ac != 0) {
    local_58 = local_ac;
    local_d0 = *(int *)(local_ac + 8);
    fn_00770154(auStack_54,&local_bc,&local_d0,&local_58);
    *(undefined4 *)(local_ac + 0xc) = local_b8;
    piVar3 = (int *)local_bc;
    while (local_bc = 0, iVar5 = local_c8, piVar3 != (int *)0x0) {
      local_bc = *piVar3;
      fn_001008c4(piVar3[2],piVar3[1],0);
      fn_001008c4(piVar3,1,0);
      piVar3 = (int *)local_bc;
    }
  }
  for (; iVar5 != iStack_c4; iVar5 = iVar5 + 0x1c) {
    fn_007874ac(iVar5);
  }
  iVar5 = (int)((longlong)(local_c0 - local_c8) * -0x6db6db6d +
                ((ulonglong)(uint)(local_c0 - local_c8) << 0x20) >> 0x20);
  fn_001008c4(local_c8,(iVar5 >> 4) - (iVar5 >> 0x1f),0);
  return;
}



int fn_0020fd1c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  float afStack_50 [4];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [16];
  
  fn_0020bbc4(auStack_28,param_1);
  afStack_50[0] = 0.0;
  afStack_50[1] = 0.7;
  afStack_50[2] = 0.7;
  afStack_50[3] = 0.7;
  uStack_40 = 0x3f4ccccd;
  uStack_3c = 0x3f4ccccd;
  uStack_38 = 0x3f4ccccd;
  uStack_34 = 0x3f666666;
  uStack_30 = 0x3f800000;
  iVar1 = fn_006bfdec(auStack_24);
  fVar5 = afStack_50[iVar1];
  uVar2 = fn_006bf1d4(auStack_24);
  switch(uVar2) {
  case 0:
    fVar4 = 0.5;
    break;
  case 1:
    fVar4 = 0.55;
    break;
  case 2:
    fVar4 = 0.6;
    break;
  case 3:
    fVar4 = 0.65;
    break;
  case 4:
    fVar4 = 0.7;
    break;
  case 5:
    fVar4 = 0.75;
    break;
  case 6:
    fVar4 = 0.8;
    break;
  case 7:
    fVar4 = 0.85;
    break;
  case 8:
    fVar4 = 0.9;
    break;
  case 9:
    fVar4 = 0.95;
    break;
  default:
    fVar4 = 1.0;
  }
  uVar2 = fn_005fe134(param_1,1,param_2);
  fVar3 = (float)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
  fVar4 = fVar3 * fVar5 * fVar4;
  fn_006f9f20();
  return (int)(short)(int)fVar4;
}


