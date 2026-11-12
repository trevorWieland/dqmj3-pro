#include "0045db00_0045e504.h"



char fn_0045e504(int param_1,int param_2,int param_3,int param_4)

{
  char *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  char *pcVar11;
  undefined4 uVar12;
  bool bVar13;
  char *local_74;
  char *local_70;
  char local_6c;
  undefined *local_68;
  undefined4 local_64;
  int local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined *local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  uVar2 = *(uint *)(param_3 + 8);
  if ((((uVar2 & 0xff) == 0 && (uVar2 >> 8 & 0xff) == 0) && (uVar2 >> 0x10 & 0xff) == 0) &&
      uVar2 >> 0x18 == 0) {
    return '\0';
  }
  if ((uVar2 == *(uint *)(param_2 + 8)) && (*(short *)(param_3 + 6) == *(short *)(param_2 + 6))) {
    return '\0';
  }
  local_40 = *(undefined4 *)(param_3 + 8);
  uStack_3c = *(undefined4 *)(param_3 + 0xc);
  local_38 = *(undefined4 *)(param_3 + 0x10);
  uStack_34 = *(undefined4 *)(param_3 + 0x14);
  local_28 = *(undefined4 *)(param_1 + 0x20);
  local_44 = *(undefined4 *)(param_3 + 4);
  local_30 = *(undefined4 *)(param_3 + 0x18);
  local_2c = *(undefined4 *)(param_3 + 0x1c);
  local_60 = *(int *)(param_2 + 8);
  uStack_5c = *(undefined4 *)(param_2 + 0xc);
  uStack_58 = *(undefined4 *)(param_2 + 0x10);
  uStack_54 = *(undefined4 *)(param_2 + 0x14);
  uStack_50 = *(undefined4 *)(param_2 + 0x18);
  uStack_4c = *(undefined4 *)(param_2 + 0x1c);
  local_68 = &DAT_008528bc;
  local_48 = &DAT_008528bc;
  pcVar4 = *(char **)(param_1 + 0x14);
  bVar13 = true;
  local_64 = (local_64 & ~((unsigned int)0xffff << 16)) | (((unsigned int)((ushort)((uint)*(undefined4 *)(param_2 + 4) >> 0x10)) & 0xffff) << 16);
  pcVar1 = pcVar4;
  pcVar11 = *(char **)(pcVar4 + 4);
  while (pcVar11 != (char *)0x0) {
    iVar10 = *(int *)(pcVar11 + 0x18);
    bVar13 = (int)(local_60 - (iVar10 + (uint)(((unsigned int)(local_64) >> 16) & 0xffff < *(ushort *)(pcVar11 + 0x16)))) < 0
             != (SBORROW4(local_60,iVar10) !=
                SBORROW4(local_60 - iVar10,(uint)(((unsigned int)(local_64) >> 16) & 0xffff < *(ushort *)(pcVar11 + 0x16))));
    pcVar1 = pcVar11;
    if (bVar13) {
      pcVar11 = *(char **)(pcVar11 + 8);
    }
    else {
      pcVar11 = *(char **)(pcVar11 + 0xc);
    }
  }
  if (*(char *)(param_1 + 0x1c) == '\0') {
    local_70 = pcVar1;
    if (bVar13) {
      if (pcVar1 == *(char **)(pcVar4 + 8)) goto LAB_0045e6c0;
      if ((*pcVar1 == '\0') && (*(char **)(*(int *)(pcVar1 + 4) + 4) == pcVar1)) {
        local_70 = *(char **)(pcVar1 + 0xc);
      }
      else {
        local_70 = *(char **)(pcVar1 + 8);
        if (local_70 == (char *)0x0) {
          local_70 = *(char **)(pcVar1 + 4);
          pcVar11 = local_70;
          if (pcVar1 == *(char **)(local_70 + 8)) {
            do {
              local_70 = *(char **)(pcVar11 + 4);
              bVar13 = pcVar11 == *(char **)(local_70 + 8);
              pcVar11 = local_70;
            } while (bVar13);
          }
        }
        else {
          for (pcVar1 = *(char **)(local_70 + 0xc); pcVar1 != (char *)0x0;
              pcVar1 = *(char **)(pcVar1 + 0xc)) {
            local_70 = pcVar1;
          }
        }
      }
    }
    iVar10 = *(int *)(local_70 + 0x18);
    if ((int)(iVar10 - (local_60 + (uint)(*(ushort *)(local_70 + 0x16) < ((unsigned int)(local_64) >> 16) & 0xffff))) < 0 ==
        (SBORROW4(iVar10,local_60) !=
        SBORROW4(iVar10 - local_60,(uint)(*(ushort *)(local_70 + 0x16) < ((unsigned int)(local_64) >> 16) & 0xffff)))) {
      local_6c = '\0';
      goto LAB_0045e6e8;
    }
  }
LAB_0045e6c0:
  local_64 = *(undefined4 *)(param_2 + 4);
  fn_00765620(&local_74);
  local_70 = local_74;
  local_6c = '\x01';
LAB_0045e6e8:
  if ((local_6c == '\0') && (param_4 != 0)) {
    uVar3 = *(undefined4 *)(param_3 + 4);
    uVar5 = *(undefined4 *)(param_3 + 8);
    uVar12 = *(undefined4 *)(param_3 + 0xc);
    uVar7 = *(undefined4 *)(param_3 + 0x10);
    uVar8 = *(undefined4 *)(param_3 + 0x14);
    uVar9 = *(undefined4 *)(param_3 + 0x18);
    uVar6 = *(undefined4 *)(param_3 + 0x1c);
    *(undefined4 *)(local_70 + 0x50) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(local_70 + 0x4c) = uVar6;
    *(undefined4 *)(local_70 + 0x34) = uVar3;
    *(undefined4 *)(local_70 + 0x38) = uVar5;
    *(undefined4 *)(local_70 + 0x3c) = uVar12;
    local_6c = '\x01';
    *(undefined4 *)(local_70 + 0x40) = uVar7;
    *(undefined4 *)(local_70 + 0x44) = uVar8;
    *(undefined4 *)(local_70 + 0x48) = uVar9;
  }
  return local_6c;
}



void fn_0045e3dc(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int local_20;
  undefined4 uStack_1c;
  int local_18;
  undefined1 auStack_14 [4];
  
  fn_0013d0fc(&local_20);
  uVar3 = local_20 - *(int *)(param_1 + 0x28);
  if (999 < uVar3) {
    *(int *)(param_1 + 0x28) = local_20;
    *(undefined4 *)(param_1 + 0x2c) = uStack_1c;
    local_18 = *(int *)(*(int *)(param_1 + 0x14) + 8);
    while (local_18 != *(int *)(param_1 + 0x14)) {
      if (uVar3 < *(uint *)(local_18 + 0x50)) {
        *(uint *)(local_18 + 0x50) = *(uint *)(local_18 + 0x50) - uVar3;
        iVar1 = *(int *)(local_18 + 0xc);
        if (*(int *)(local_18 + 0xc) == 0) {
          iVar1 = *(int *)(local_18 + 4);
          if (local_18 == *(int *)(iVar1 + 0xc)) {
            do {
              local_18 = iVar1;
              iVar1 = *(int *)(local_18 + 4);
            } while (local_18 == *(int *)(iVar1 + 0xc));
          }
          if (*(int *)(local_18 + 0xc) != iVar1) {
            local_18 = iVar1;
          }
        }
        else {
          do {
            local_18 = iVar1;
            iVar1 = *(int *)(local_18 + 8);
          } while (*(int *)(local_18 + 8) != 0);
        }
      }
      else {
        iVar1 = *(int *)(local_18 + 0xc);
        if (*(int *)(local_18 + 0xc) == 0) {
          iVar1 = *(int *)(local_18 + 4);
          iVar2 = local_18;
          if (local_18 == *(int *)(iVar1 + 0xc)) {
            do {
              iVar2 = iVar1;
              iVar1 = *(int *)(iVar2 + 4);
            } while (iVar2 == *(int *)(iVar1 + 0xc));
          }
          if (*(int *)(iVar2 + 0xc) != iVar1) {
            iVar2 = iVar1;
          }
        }
        else {
          do {
            iVar2 = iVar1;
            iVar1 = *(int *)(iVar2 + 8);
          } while (*(int *)(iVar2 + 8) != 0);
        }
        fn_00764e48(auStack_14,param_1 + 4,&local_18);
        local_18 = iVar2;
      }
    }
  }
  return;
}



void fn_0045e3d0(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  if (*(code **)(param_1 + -8) == (code *)0x0) {
    fn_0030233c();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0045502c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + -8))();
  return;
}



undefined4 fn_0045db00(int param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *unaff_r10;
  uint local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 auStack_60 [8];
  undefined4 local_58;
  int local_48 [2];
  undefined1 auStack_40 [12];
  int local_34;
  int iStack_30;
  int iStack_2c;
  uint uStack_28;
  
  local_34 = param_1;
  iStack_30 = param_2;
  iStack_2c = param_3;
  uStack_28 = param_4;
  if (*(char *)(param_1 + 4) == '\0') {
    local_7c = *(uint *)(DAT_008b63dc + 0x120);
    local_78 = *(undefined4 *)(local_7c + 8);
    fn_0076ac08(&local_74,DAT_008b63dc + 0x110,&local_78,&local_7c);
    uVar2 = extraout_r1_00;
LAB_0045dcc8:
    local_78 = 1;
    local_7c = param_4;
    uVar2 = fn_0044ce40(0,uVar2,0x10602,0x4009b,0);
    uVar4 = fn_0015ece0();
    local_78 = 1;
    local_6c = 0;
    local_7c = param_4;
    local_74 = uVar4;
    local_70 = uVar2;
    iVar6 = fn_0044c79c(DAT_0089a94c,0,0x10602,0x4009b,0);
    if (iVar6 < 0) {
      fn_0014f1bc(uVar4);
      return 0;
    }
    uVar2 = fn_0045ddd4(local_34,param_2,param_3,param_4);
    iVar6 = fn_0016e9e0(DAT_0089a94c);
    if (iVar6 < 0) {
      fn_0014f1bc(uVar4);
      return 0;
    }
    fn_0014f1bc(uVar4);
    return uVar2;
  }
  if (param_4 != 0) {
    unaff_r10 = &DAT_008b63dc;
  }
  uVar7 = 0;
  if (param_4 != 0) {
    do {
      iVar1 = *unaff_r10;
      uVar2 = fn_004b6318(&local_68,*(undefined4 *)(param_3 + uVar7 * 4));
      iVar6 = *(int *)(iVar1 + 0x120);
      iVar5 = *(int *)(*(int *)(iVar1 + 0x120) + 4);
      while (iVar5 != 0) {
        iVar3 = fn_00190ef0(iVar5 + 0x10,uVar2);
        if (iVar3 == 0) {
          iVar6 = iVar5;
          iVar5 = *(int *)(iVar5 + 8);
        }
        else {
          iVar5 = *(int *)(iVar5 + 0xc);
        }
      }
      if ((iVar6 == *(int *)(iVar1 + 0x120)) ||
         (iVar5 = fn_00190ef0(uVar2,iVar6 + 0x10), iVar5 != 0)) {
        iVar6 = *(int *)(iVar1 + 0x120);
      }
      iVar5 = *(int *)(*unaff_r10 + 0x120);
      fn_00170f54(&local_68);
      uVar2 = extraout_r1;
      if (iVar6 == iVar5) goto LAB_0045dcc8;
      uVar7 = uVar7 + 1;
    } while (uVar7 < param_4);
  }
  uVar7 = 0;
  if (param_4 != 0) {
    uVar2 = 0;
    do {
      iVar5 = DAT_008b63dc + 0x110;
      uVar4 = fn_004b6318(auStack_40,*(undefined4 *)(param_3 + uVar7 * 4));
      local_6c = uVar2;
      local_68 = uVar2;
      local_64 = uVar2;
      iVar6 = fn_004b637c(auStack_60,uVar4);
      iVar6 = fn_004b9334(iVar6 + 8,&local_6c);
      fn_007859a8(local_48,iVar5,iVar6 + -8);
      iVar6 = local_48[0];
      fn_0014f1bc(local_58);
      fn_00170f54(auStack_60);
      fn_0014f1bc(local_6c);
      fn_0079c5b8(param_2 + uVar7 * 0xc,iVar6 + 0x18);
      fn_00170f54(auStack_40);
      uVar7 = uVar7 + 1;
    } while (uVar7 < param_4);
  }
  return 1;
}


