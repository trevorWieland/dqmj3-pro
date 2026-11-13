#include "00557430_00557be0.h"



void fn_00557be0(int param_1,undefined1 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x50) = param_3;
  *(undefined1 *)(param_1 + 0x9d) = param_2;
  return;
}



void fn_00557b84(int *param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = fn_00141104();
  iVar2 = fn_00140e98(iVar1,6);
  *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + 0x184);
  *(undefined1 *)(iVar2 + 4) = 10;
  uVar3 = (**(code **)(*param_1 + 0x20))(param_1);
  *(undefined4 *)(iVar2 + 0x10) = uVar3;
  *(undefined1 *)(iVar2 + 0x15) = param_2;
  fn_001411b8(iVar1,iVar2);
  return;
}



void fn_005579dc(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  param_1[0x2d] = DAT_0089a938;
  DAT_0089a938 = DAT_0089a938 + 1;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0x2c] = -1;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined1 *)((int)param_1 + 0xa1) = 0;
  *(undefined1 *)((int)param_1 + 0xa2) = 0;
  *(undefined1 *)((int)param_1 + 0xa3) = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(undefined1 *)((int)param_1 + 0x99) = 0;
  *(undefined1 *)((int)param_1 + 0x9a) = 0;
  *(undefined1 *)((int)param_1 + 0x9b) = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x1a] = 0x3f800000;
  param_1[0x1b] = 0x3f800000;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0x3f800000;
  param_1[0x1f] = 0x3f800000;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0x3f800000;
  param_1[0x23] = 0x3f800000;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x32] = 0x3f800000;
  param_1[0x34] = 0x3f800000;
  param_1[0x33] = 0;
  param_1[0x2e] = 0x3f800000;
  param_1[0x2f] = 0x3f800000;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x35] = 0;
  *(undefined1 *)((int)param_1 + 0x9e) = 0xff;
  param_1[0x36] = 0;
  param_1[0x3a] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0xc] = 0x3f800000;
  param_1[0xd] = 0x3f800000;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = -1;
  param_1[0x15] = 0;
  param_1[0x17] = 0x3f800000;
  param_1[0x16] = 0x3f800000;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  if (param_1[0x3c] != 0) {
    fn_00158f6c(param_1[0x3b]);
  }
  iVar1 = (**(code **)(*param_1 + 0x20))(param_1);
  iVar2 = fn_00141104();
  iVar3 = fn_00140e98(iVar2,6);
  *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar2 + 0x184);
  *(undefined1 *)(iVar3 + 4) = 3;
  *(int *)(iVar3 + 0x10) = iVar1;
  *(int **)(iVar3 + 0x14) = param_1 + 0x27;
  fn_001411b8(iVar2,iVar3);
  fn_0013c428(iVar1 + 4);
  *(undefined1 *)((int)param_1 + 0x9f) = 1;
  return;
}



undefined4
fn_00557430(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,int param_5,
            undefined4 param_6,int *param_7)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 extraout_r1;
  int *piVar7;
  uint uVar8;
  int iVar9;
  int *local_d0;
  int local_cc;
  undefined4 uStack_c8;
  uint local_c4;
  int local_c0 [9];
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  int local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined1 local_7c;
  undefined1 local_7b;
  undefined1 local_7a;
  undefined1 local_79;
  undefined1 auStack_78 [4];
  int local_74 [8];
  undefined4 local_54;
  undefined1 local_50 [4];
  undefined4 local_4c;
  undefined4 local_48;
  int iStack_44;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_38;
  int iStack_34;
  int local_30;
  undefined4 *puStack_2c;
  undefined4 *puStack_28;
  
  iVar9 = 0;
  iStack_34 = param_1;
  local_30 = param_2;
  puStack_2c = param_3;
  puStack_28 = param_4;
  if ((*(int *)(param_1 + 0x114) != 0) &&
     (iVar2 = fn_006e2b3c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_2 + 0xb0)), iVar2 != 0
     )) {
    piVar7 = *(int **)(param_1 + 0x114);
    iVar9 = 0;
    if ((char)piVar7[1] != '\0') {
      local_d0 = (int *)0x0;
      iVar9 = (**(code **)(*piVar7 + 0x18))(piVar7,iVar2,&DAT_00807cc0,(char *)&DAT_00807cd0);
    }
  }
  local_54 = *param_4;
  local_4c = param_4[5];
  if ((iVar9 == 0) &&
     (iVar9 = fn_006e2cf0(*(undefined4 *)(param_1 + 0x110),*param_3), param_7 != (int *)0x0)) {
    if (*param_7 != 0) {
      iVar9 = *param_7;
    }
    fn_00195964(&local_d0,iVar9);
    if (param_7[1] != 0) {
      iVar2 = fn_006e3974(&local_d0,param_7[1],&local_54);
      if (iVar2 == 0) {
        return 0xf;
      }
      local_54 = fn_0055f20c(local_cc,local_54,&local_4c);
    }
  }
  local_c4 = (uint)(*(int *)(*(int *)(local_30 + 0x10) + 0x38) != 0);
  local_8c = 0;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  fn_00101a1c(local_c0,&LAB_00172f3c,8,4);
  fn_00101a1c(auStack_78,&LAB_00172f3c,8,4);
  local_48 = *(undefined4 *)(local_30 + 0xb0);
  if (iVar9 == 0) {
    if (local_c4 == 0) {
      return 5;
    }
    local_8c = 1;
  }
  iStack_44 = iVar9;
  if ((*(int *)(param_1 + 0x114) != 0) &&
     (iVar2 = fn_006e2b3c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(local_30 + 0xb0)),
     iVar2 != 0)) {
    piVar7 = (int *)0x0;
    do {
      cVar1 = *(char *)(*(int *)(param_1 + 0x114) + 4);
      if (cVar1 == '\0') {
        *(undefined1 *)(*(int *)(*(int *)(param_1 + 4) + 8) + 4) = 1;
        *(undefined1 *)(*(int *)(param_1 + 0x114) + 4) = 1;
      }
      piVar3 = *(int **)(param_1 + 0x114);
      if ((char)piVar3[1] == '\0') {
        iVar4 = 0;
      }
      else {
        local_d0 = piVar7;
        iVar4 = (**(code **)(*piVar3 + 0x18))(piVar3,iVar2,&DAT_00807cc0,(char *)&DAT_00807cd6);
      }
      piVar3 = *(int **)(param_1 + 0x114);
      if ((char)piVar3[1] == '\0') {
        iVar5 = 0;
      }
      else {
        local_d0 = piVar7;
        iVar5 = (**(code **)(*piVar3 + 0x18))(piVar3,iVar2,&DAT_00807cc0,(char *)&DAT_00807cdc);
      }
      if (cVar1 == '\0') {
        *(undefined1 *)(*(int *)(*(int *)(param_1 + 4) + 8) + 4) = 0;
        *(undefined1 *)(*(int *)(param_1 + 0x114) + 4) = 0;
      }
      if (iVar4 == 0 || iVar5 == 0) {
        local_c0[(int)piVar7 * 2 + 1] = 0;
        local_74[(int)piVar7 * 2] = 0;
      }
      else {
        local_c0[(int)piVar7 * 2 + 1] = iVar4;
        local_74[(int)piVar7 * 2] = iVar5;
        local_50[(int)piVar7] = 0;
      }
      piVar7 = (int *)((int)piVar7 + 1);
    } while (piVar7 < (int *)0x4);
  }
  if (param_7 == (int *)0x0) {
    local_c0[0] = param_4[1];
    local_c0[2] = param_4[2];
    local_c0[4] = param_4[3];
    local_c0[6] = param_4[4];
  }
  else {
    local_c0[0] = param_7[2];
    local_c0[2] = param_7[3];
    local_c0[4] = param_7[4];
    local_c0[6] = param_7[5];
  }
  uVar8 = 0;
  do {
    if (((*(int *)(param_1 + 0x114) == 0) || (local_c0[uVar8 * 2 + 1] == 0)) ||
       (local_74[uVar8 * 2] == 0)) {
      local_90 = 0xffffffff;
      iVar2 = fn_00145604(*(undefined4 *)(param_1 + 4),local_c0[uVar8 * 2],&local_90);
      if (iVar2 != 0) {
        iVar2 = fn_006e2cf0(*(undefined4 *)(param_1 + 0x110),local_90);
        local_c0[uVar8 * 2 + 1] = iVar2;
        if (iVar2 == 0) {
          if (local_c4 != 0) {
            local_8c = 1;
            break;
          }
        }
        else {
          local_d0 = *(int **)(param_1 + 0x110);
          if (local_d0 != (int *)0x0) {
            local_d0 = local_d0 + 3;
          }
          uVar6 = fn_00559ed8(auStack_78 + uVar8 * 8,local_50 + uVar8,iVar2,
                               *(undefined4 *)(param_1 + 4));
          switch(uVar6) {
          case 0:
          case 1:
            break;
          case 2:
            if (local_c4 != 0) goto LAB_00557818;
            break;
          case 0xfffffffe:
            return 0x12;
          case 0xffffffff:
            if (local_c4 == 0) {
              return 8;
            }
LAB_00557818:
            local_8c = 1;
            break;
          default:
            return 0xff;
          }
        }
      }
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 < 4);
  local_d0 = (int *)(uint)*(byte *)(param_4 + 6);
  uStack_c8 = *(undefined4 *)(param_1 + 0x10);
  local_c4 = *(undefined4 *)(param_1 + 0x14);
  local_cc = (int)*(char *)((int)param_4 + 0x19);
  fn_00558f74(local_30,*(undefined4 *)(param_1 + 0xf0),local_4c,param_1 + 8);
  if (param_5 == 0) {
    local_3c = 1;
  }
  else {
    uVar6 = extraout_r1;
    if (param_5 != 1) {
      uVar6 = 0;
    }
    local_3c = 0;
    if (param_5 != 1) {
      param_6 = uVar6;
    }
  }
  local_38 = param_6;
  local_40 = local_54;
  if (local_8c == 0) {
    local_9c = local_c0[1];
    local_8c = local_74[0];
    local_7c = local_50[0];
    local_98 = local_c0[3];
    local_88 = local_74[2];
    local_7b = local_50[1];
    local_94 = local_c0[5];
    local_84 = local_74[4];
    local_7a = local_50[2];
    local_90 = local_c0[7];
    local_80 = local_74[6];
    local_79 = local_50[3];
    local_c0[8] = iVar9;
    fn_00558fec(local_30,local_c0 + 8,&local_40);
  }
  else {
    local_cc = *(undefined4 *)(local_30 + 0x10);
    local_d0 = local_c0;
    fn_0055df30(local_c0 + 8,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x110),
                 &local_48);
    fn_00558e28(local_30,local_c0 + 8,&local_40);
  }
  return 0;
}


