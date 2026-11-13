#include "single_0053ed8c_r.h"


extern undefined4 _local_38;

void fn_0053ed8c(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,
                 int param_7)

{
  short sVar1;
  uint3 uVar2;
  ushort uVar3;
  uint *puVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  byte bVar16;
  undefined4 local_40;
  uint local_3c;
  undefined2 local_38;
  undefined1 uStack_36;
  undefined1 uStack_35;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  puVar4 = (uint *)fn_0052dfa0();
  iVar10 = *(int *)(param_3 + 8);
  if (iVar10 == -1) {
    *(short *)(param_2 + 0x88) = (short)param_6;
    *(short *)(param_2 + 0x8a) = (short)((uint)param_6 >> 0x10);
    *(undefined4 *)(param_2 + 0x8c) = param_6;
  }
  else if (iVar10 == 0) {
    uVar7 = *puVar4;
    *puVar4 = puVar4[1];
    uVar7 = uVar7 ^ uVar7 << 0xb;
    puVar4[1] = puVar4[2];
    uVar14 = puVar4[3];
    puVar4[2] = uVar14;
    uVar7 = uVar7 ^ uVar7 >> 8 ^ uVar14 ^ uVar14 >> 0x13;
    puVar4[3] = uVar7;
    *(short *)(param_2 + 0x88) = (short)uVar7;
    *(short *)(param_2 + 0x8a) = (short)(uVar7 >> 0x10);
    *(uint *)(param_2 + 0x8c) = uVar7;
  }
  else {
    *(short *)(param_2 + 0x88) = (short)iVar10;
    *(short *)(param_2 + 0x8a) = (short)((uint)iVar10 >> 0x10);
    *(int *)(param_2 + 0x8c) = iVar10;
  }
  if (param_7 == 0) {
    *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_1 + 0x490);
  }
  fn_0053b22c(param_2,param_3);
  if (((*(int **)(param_2 + 0xdc))[1] & 0x400000U) == 0) {
    uVar5 = *(undefined4 *)(param_1 + **(int **)(param_2 + 0xdc) * 4 + 0x494);
  }
  else {
    uVar5 = *(undefined4 *)(param_1 + 0x49c);
  }
  *(undefined4 *)(param_2 + 0xd8) = uVar5;
  fn_0053b5e4(*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_3 + 400));
  local_3c = 0;
  local_2c = 0;
  piVar6 = *(int **)(param_2 + 0xdc);
  uVar3 = CONCAT11((char)piVar6[99],(char)piVar6[0xca]);
  local_40 = (uint)uVar3;
  if (*piVar6 == 1) {
    if (piVar6[0xc9] == 1) {
      local_3c = 2;
    }
    if ((piVar6[0xca] == 5 || piVar6[0xca] == 6) &&
       (local_40 = (uint)CONCAT12((char)*(undefined4 *)
                                         ((uint)*(ushort *)((int)piVar6 + 0x55a) + (int)piVar6),
                                  uVar3), (*(ushort *)(piVar6 + 0x154) & 1) != 0)) {
      local_3c = local_3c | 1;
    }
  }
  else if (piVar6[0xc9] == 1) {
    local_3c = 2;
  }
  iVar10 = *(int *)(param_2 + 0xdc);
  local_38 = (ushort)*(byte *)(iVar10 + 0x540);
  bVar15 = *(short *)(iVar10 + 0xbc) != 0;
  sVar1 = 0;
  if (bVar15) {
    sVar1 = *(short *)(iVar10 + 0xbe);
  }
  if (bVar15 && sVar1 != 0) {
    local_38 = CONCAT11(1,*(byte *)(iVar10 + 0x540));
  }
  _local_38 = CONCAT12((char)*(undefined4 *)(iVar10 + 0x194),local_38);
  _local_38 = CONCAT13((char)*(undefined4 *)(iVar10 + 0x198),_local_38);
  if (*(int *)(iVar10 + 0x324) == 1) {
    local_2c = 2;
  }
  uVar3 = CONCAT11((char)*(undefined4 *)(iVar10 + 0x4d4),(char)*(undefined4 *)(iVar10 + 0x4d0));
  if ((*(uint *)(iVar10 + 4) & 0x800) == 0) {
    local_34 = (local_34 & ~((unsigned int)0xffffff << 0)) | ((unsigned int)((uint3)uVar3) & 0xffffff);
  }
  else {
    local_34 = (local_34 & ~((unsigned int)0xffffff << 0)) | ((unsigned int)(CONCAT12(1,uVar3)) & 0xffffff);
  }
  if ((*(uint *)(iVar10 + 4) & 0x1000) == 0) {
    local_34 = (uint)(uint3)local_34;
  }
  else {
    local_34 = CONCAT13(1,(uint3)local_34);
  }
  bVar16 = (*(uint *)(iVar10 + 4) & 0x4000) != 0;
  if ((*(uint *)(iVar10 + 4) & 0x80000) != 0) {
    bVar16 = 2;
  }
  local_30 = (local_30 & ~((unsigned int)0xffff << 0)) | ((unsigned int)((ushort)bVar16) & 0xffff);
  if ((*(uint *)(iVar10 + 4) & 0x8000) != 0) {
    local_30 = (local_30 & ~((unsigned int)0xffff << 0)) | ((unsigned int)(CONCAT11(1,bVar16)) & 0xffff);
  }
  if ((*(uint *)(iVar10 + 4) & 0x100000) != 0) {
    local_30 = (local_30 & ~((unsigned int)0xffff << 0)) | ((unsigned int)(CONCAT11(2,(byte)local_30)) & 0xffff);
  }
  local_30 = (uint)(ushort)local_30;
  uVar5 = fn_0054105c(*(undefined4 *)(*(int *)(param_1 + 0xc) + param_4 * 4),param_5,&local_40,
                       &local_38);
  *(undefined4 *)(param_2 + 0xf0) = uVar5;
  fn_0053a460(param_2 + 0x240,*(undefined4 *)(param_1 + 8));
  iVar10 = param_5 * 0x3c + 0x38;
  if (*(char *)(param_3 + 0x180) != '\0') {
    fn_0053a3d4(param_2 + 0x240,param_3 + 0x150,
                 *(int *)(param_3 + 0x158) +
                 *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0xc) + param_4 * 4) + 0x18) + iVar10)
                 + 0xc,0);
  }
  uVar7 = local_40;
  piVar6 = *(int **)(param_2 + 0xdc);
  if ((*piVar6 == 1) && ((piVar6[0x152] & 1U) != 0)) {
    local_3c = 0;
    local_40 = (local_40 & ~((unsigned int)0xff << 24)) | (((unsigned int)(SUB41(uVar7,3)) & 0xff) << 24);
    local_40 = (local_40 & ~((unsigned int)0xffffff << 0)) | ((unsigned int)((uint3)CONCAT11((char)piVar6[0x19a],(char)piVar6[0x169])) & 0xffffff);
    if (piVar6[0x168] == 1) {
      local_3c = 2;
    }
    uVar7 = piVar6[0x152];
    local_38 = (ushort)*(byte *)(piVar6 + 0x1cd);
    _local_38 = CONCAT12((char)piVar6[0x1c0],local_38);
    local_2c = 0;
    _local_38 = CONCAT13((char)piVar6[0x1c1],_local_38);
    if (piVar6[0x168] == 1) {
      local_2c = 2;
    }
    if ((uVar7 & 0x20000) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0x10000;
    }
    uVar14 = local_30 >> 8;
    local_30 = local_30 & 0xffffff00;
    if ((uVar7 & 0x80000) != 0) {
      local_30 = CONCAT31((int3)uVar14,1);
    }
    if ((uVar7 & 0x200000) != 0) {
      local_30 = CONCAT31(((unsigned int)(local_30) >> 8) & 0xffffff,2);
    }
    local_34 = (uint)uVar2;
    local_30 = (local_30 & ~((unsigned int)0xffff << 0)) | ((unsigned int)((ushort)(byte)local_30) & 0xffff);
    uVar5 = fn_0054105c(*(undefined4 *)(*(int *)(param_1 + 0xc) + param_4 * 4),param_5,&local_40,
                         &local_38);
    *(undefined4 *)(param_2 + 0xf4) = uVar5;
    fn_0053a3d4(param_2 + 0x240,piVar6 + 0x1c3,
                 piVar6[0x1c5] +
                 *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0xc) + param_4 * 4) + 0x18) + iVar10)
                 + 8,1);
  }
  fn_0053a6a0(param_2);
  *(undefined4 *)(param_2 + 0xf8) = 0;
  iVar10 = param_5 * 0x3c + 0x34;
  iVar12 = param_5 * 0x3c + 0x30;
  if (*(int *)(*(int *)(param_2 + 0xdc) + 0x324) == 1) {
    uVar14 = *(uint *)(*(int *)(param_2 + 0xdc) + 0x14c);
    iVar8 = *(int *)(*(int *)(*(int *)(param_1 + 0xc) + param_4 * 4) + 0x18);
    uVar7 = *(uint *)(iVar8 + iVar10);
    iVar8 = *(int *)(iVar8 + iVar12);
    if (uVar7 != 0) {
      uVar9 = uVar7 & 1;
      uVar11 = 0;
      if (uVar9 != 0) {
        do {
          iVar13 = *(int *)(iVar8 + uVar11 * 4);
          if ((iVar13 != 0) && (uVar14 == uVar11)) goto LAB_0053f1f8;
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar9);
      }
      for (; uVar9 < uVar7; uVar9 = uVar9 + 2) {
        iVar13 = *(int *)(iVar8 + uVar9 * 4);
        if ((iVar13 != 0) && (uVar14 == uVar9)) goto LAB_0053f1f8;
        if ((*(int *)(iVar8 + uVar9 * 4 + 4) != 0) && (uVar14 == uVar9 + 1)) {
          iVar13 = *(int *)(iVar8 + uVar9 * 4 + 4);
          goto LAB_0053f1f8;
        }
      }
    }
    iVar13 = 0;
LAB_0053f1f8:
    *(int *)(param_2 + 0xf8) = iVar13;
    fn_0053a3c8(param_2 + 0x240,1,0);
  }
  *(undefined4 *)(param_2 + 0xfc) = 0;
  piVar6 = *(int **)(param_2 + 0xdc);
  if (((*piVar6 == 1) && ((piVar6[0x152] & 1U) != 0)) && (piVar6[0x168] == 1)) {
    uVar14 = piVar6[0x165];
    iVar8 = *(int *)(*(int *)(*(int *)(param_1 + 0xc) + param_4 * 4) + 0x18);
    uVar7 = *(uint *)(iVar8 + iVar10);
    iVar12 = *(int *)(iVar8 + iVar12);
    iVar10 = 0;
    if (uVar7 != 0) {
      uVar9 = uVar7 & 1;
      uVar11 = 0;
      if (uVar9 != 0) {
        do {
          iVar10 = *(int *)(iVar12 + uVar11 * 4);
          if ((iVar10 != 0) && (uVar14 == uVar11)) {
            goto LAB_0053f2ec;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar9);
      }
      while( true ) {
        iVar10 = 0;
        if ((uVar7 <= uVar9) ||
           ((iVar10 = *(int *)(iVar12 + uVar9 * 4), iVar10 != 0 && (uVar14 == uVar9))))
        goto LAB_0053f2ec;
        if ((*(int *)(iVar12 + uVar9 * 4 + 4) != 0) && (uVar14 == uVar9 + 1)) break;
        uVar9 = uVar9 + 2;
      }
      iVar10 = *(int *)(iVar12 + uVar9 * 4 + 4);
    }
LAB_0053f2ec:
    *(int *)(param_2 + 0xfc) = iVar10;
    fn_0053a3c8(param_2 + 0x240,1);
  }
  return;
}


