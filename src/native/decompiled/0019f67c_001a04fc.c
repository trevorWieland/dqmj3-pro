#include "0019f67c_001a04fc.h"



void fn_001a04fc(void)

{
  return;
}



void fn_001a03f4(byte *param_1)

{
  undefined *puVar1;
  float in_s0;
  float fVar2;
  
  if (1.0 < in_s0) {
    in_s0 = 1.0;
  }
  else if (in_s0 < -1.0) {
    in_s0 = -1.0;
  }
  if ((param_1[3] == 0) && (DAT_008ece51 == '\x02')) {
    puVar1 = &DAT_008c35a4;
  }
  else {
    puVar1 = &DAT_008c3598;
  }
  fVar2 = *(float *)(*(int *)(puVar1 + (uint)*param_1 * 4) +
                    (int)((in_s0 + 1.0) * 0.5 * 256.0 + 0.5) * 4);
  if (param_1[1] != 0) {
    fVar2 = fVar2 / *(float *)(*(int *)(puVar1 + (uint)*param_1 * 4) + 0x200);
  }
  if (param_1[2] == 0) {
    if (2.0 < fVar2) {
      return;
    }
  }
  else if (1.0 < fVar2) {
    return;
  }
  if (0.0 <= fVar2) {
    return;
  }
  return;
}



uint fn_001a03e0(uint param_1)

{
  if (1 < param_1) {
    param_1 = 3;
  }
  return param_1;
}



void fn_001a0354(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 unaff_r4;
  
  param_1[0x15] = 0;
  param_1[0x1f] = param_1;
  param_1[0x20] = param_1;
  *param_1 = param_1[5];
  iVar1 = fn_00172e2c();
  fn_00170704(iVar1 + 0x2c);
  fn_0013c428(param_1 + 0x1c);
  *(undefined1 *)(param_1 + 0x1e) = 1;
  fn_0017d948(iVar1 + 0xc,iVar1 + 0x10,param_1 + 0x1a,param_4,unaff_r4);
  fn_001839ac(iVar1 + 0x38,0);
  fn_001707b4(iVar1 + 0x2c);
  return;
}



int fn_0019fb30(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 4);
  do {
    if (piVar2 == (int *)(param_1 + 4)) {
      return 0;
    }
    iVar1 = 0;
    while (*(char *)(piVar2[5] + iVar1) == *(char *)(param_2 + iVar1)) {
      if ((*(char *)(piVar2[5] + iVar1) == '\0') || (iVar1 = iVar1 + 1, 0x1f < iVar1)) {
        return (int)(piVar2 + -1);
      }
    }
    piVar2 = (int *)*piVar2;
  } while( true );
}



undefined4 fn_0019f9ac(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  
  iVar1 = *param_1;
  iVar5 = *param_2;
  uVar8 = 0;
  if (((*(int *)(iVar1 + 0x4c) == 0) && (iVar6 = *(int *)(iVar1 + 0x5c), iVar6 != 0)) &&
     (*(int *)(iVar1 + 0x60) != 0)) {
    iVar2 = *(int *)(iVar5 + 0x30);
    uVar3 = fn_002febd8(iVar6);
    iVar6 = fn_00190fe0(iVar2 + 0x34,iVar6,uVar3);
    if (iVar6 == 0xffff) {
      uVar8 = 0x80000020;
    }
    else {
      iVar2 = *(int *)(iVar1 + 0x60);
      piVar9 = *(int **)(*(int *)(*(int *)(iVar5 + 0x30) + 0x30) + iVar6 * 4);
      if (iVar2 == 0) {
LAB_0019fa70:
        iVar6 = 0;
      }
      else {
        iVar6 = *piVar9;
        iVar7 = iVar6 + piVar9[1] * 0x10;
        while ((iVar6 != iVar7 &&
               (iVar4 = fn_003035b0(*(undefined4 *)(iVar6 + 0xc),iVar2), iVar4 != 0))) {
          iVar6 = iVar6 + 0x10;
        }
        if (*piVar9 + piVar9[1] * 0x10 == iVar6) goto LAB_0019fa70;
      }
      *(int *)(iVar1 + 0x4c) = iVar6;
    }
  }
  if (*(int *)(iVar1 + 0x50) != 0) {
    return uVar8;
  }
  iVar6 = *(int *)(iVar1 + 100);
  if (iVar6 == 0) {
    return uVar8;
  }
  if (*(int *)(iVar1 + 0x68) == 0) {
    return uVar8;
  }
  iVar2 = *(int *)(iVar5 + 0x30);
  uVar3 = fn_002febd8(iVar6);
  iVar6 = fn_00190fe0(iVar2 + 0x34,iVar6,uVar3);
  if (iVar6 == 0xffff) {
    return 0x80000020;
  }
  iVar2 = *(int *)(iVar1 + 0x68);
  piVar9 = *(int **)(*(int *)(*(int *)(iVar5 + 0x30) + 0x30) + iVar6 * 4);
  if (iVar2 != 0) {
    iVar5 = *piVar9;
    iVar6 = iVar5 + piVar9[1] * 0x10;
    while ((iVar5 != iVar6 && (iVar7 = fn_003035b0(*(undefined4 *)(iVar5 + 0xc),iVar2), iVar7 != 0)
           )) {
      iVar5 = iVar5 + 0x10;
    }
    if (*piVar9 + piVar9[1] * 0x10 != iVar5) goto LAB_0019fb20;
  }
  iVar5 = 0;
LAB_0019fb20:
  *(int *)(iVar1 + 0x50) = iVar5;
  return uVar8;
}



uint fn_0019f67c(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int *local_114 [3];
  undefined1 auStack_108 [60];
  undefined1 auStack_cc [36];
  undefined1 auStack_a8 [72];
  int *local_60;
  uint local_50;
  undefined1 *local_4c [4];
  undefined1 *local_3c;
  int local_34;
  int iStack_30;
  int local_2c;
  int iStack_28;
  
  local_34 = *param_1;
  local_2c = param_1[1];
  iStack_28 = param_1[2];
  iVar6 = *param_2;
  local_50 = 0;
  piVar13 = *(int **)(local_34 + 0x34);
  local_60 = piVar13 + (uint)*(ushort *)(local_34 + 0x38) * 0xb;
  if (piVar13 != local_60) {
    local_4c[3] = auStack_cc;
    local_3c = auStack_a8;
    iStack_30 = iVar6;
    do {
      iVar15 = *piVar13;
      if (iVar15 != 0) {
        if (*(int *)(iVar15 + 8) == 0) {
          iVar1 = *(int *)(iVar6 + 0x30);
          uVar10 = *(undefined4 *)(iVar15 + 0x104);
          uVar2 = fn_002febd8(uVar10);
          iVar1 = fn_00190fe0(iVar1 + 0x1c,uVar10,uVar2);
          if (iVar1 == 0xffff) {
            local_50 = local_50 | 0x80000010;
          }
          else {
            *(undefined4 *)(iVar15 + 8) =
                 *(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x30) + 0x18) + iVar1 * 4);
          }
        }
        iVar1 = 0;
        do {
          iVar14 = iVar15 + iVar1 * 4;
          if (((*(int *)(iVar14 + 0x8c) == 0) && (iVar3 = *(int *)(iVar14 + 0xd4), iVar3 != 0)) &&
             (*(int *)(iVar14 + 0xec) != 0)) {
            iVar7 = *(int *)(iVar6 + 0x30);
            uVar2 = fn_002febd8();
            iVar3 = fn_00190fe0(iVar7 + 0x34,iVar3,uVar2);
            if (iVar3 == 0xffff) {
              local_50 = local_50 | 0x80000020;
            }
            else {
              iVar7 = *(int *)(iVar14 + 0xec);
              piVar12 = *(int **)(*(int *)(*(int *)(iVar6 + 0x30) + 0x30) + iVar3 * 4);
              if (iVar7 == 0) {
LAB_0019f7f8:
                iVar3 = 0;
              }
              else {
                iVar3 = *piVar12;
                iVar11 = iVar3 + piVar12[1] * 0x10;
                while ((iVar3 != iVar11 &&
                       (iVar4 = fn_003035b0(*(undefined4 *)(iVar3 + 0xc),iVar7), iVar4 != 0))) {
                  iVar3 = iVar3 + 0x10;
                }
                if (iVar3 == *piVar12 + piVar12[1] * 0x10) goto LAB_0019f7f8;
              }
              *(int *)(iVar14 + 0x8c) = iVar3;
            }
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < 6);
      }
      fn_001a379c(auStack_108);
      local_4c[0] = auStack_108;
      local_4c[1] = local_4c[3];
      iVar15 = 0;
      local_4c[2] = local_3c;
      uVar9 = 0;
      local_114[0] = piVar13 + 1;
      local_114[1] = piVar13 + 2;
      local_114[2] = piVar13 + 3;
      do {
        piVar12 = local_114[uVar9];
        if ((*piVar12 == 0) && (iVar1 = piVar13[uVar9 + 7], iVar1 != 0)) {
          iVar14 = *(int *)(iVar6 + 0x30);
          uVar2 = fn_002febd8();
          iVar1 = fn_00190fe0(iVar14 + 0x28,iVar1,uVar2);
          if (iVar1 == 0xffff) {
            local_50 = local_50 | 0x80000008;
          }
          else {
            iVar15 = iVar15 + 1;
            *piVar12 = *(int *)(*(int *)(*(int *)(iVar6 + 0x30) + 0x24) + iVar1 * 4);
          }
        }
        iVar1 = *piVar12;
        puVar8 = (undefined1 *)(piVar13[6] + uVar9 * 0x10);
        puVar5 = local_4c[uVar9];
        if (iVar1 != 0) {
          puVar5[8] = *(undefined1 *)(iVar1 + 0x18);
          puVar5[10] = puVar8[1];
          puVar5[9] = puVar8[2];
          puVar5[0xb] = puVar8[3];
          puVar5[0xc] = puVar8[4];
          *(undefined4 *)(puVar5 + 0x10) = *(undefined4 *)(puVar8 + 8);
          puVar5[0x14] = puVar8[5];
          puVar5[0x15] = *(char *)(iVar1 + 0x19) + -1;
          puVar5[0x16] = puVar8[0xc];
          puVar5[0x17] = puVar8[0xd];
          puVar5[0x18] = puVar8[0xe];
          puVar5[0x19] = puVar8[0xf];
          if (uVar9 < 3) {
            puVar5[0x1c] = *puVar8;
          }
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < 3);
      if (iVar15 != 0) {
        iVar15 = piVar13[6];
        fn_001a3ec4(local_34,piVar13 + 4,auStack_108,iVar15,iVar15 + 0x10,iVar15 + 0x20,local_2c,
                     iStack_28);
      }
      piVar13 = piVar13 + 0xb;
    } while (piVar13 != local_60);
  }
  return local_50;
}


