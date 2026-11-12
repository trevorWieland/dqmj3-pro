#include "00556d74_005573ac.h"



undefined4 fn_005573ac(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_18;
  
  if ((*(int *)(*(int *)(param_1 + 4) + 4) == 0) ||
     (uStack_18 = param_4, iVar1 = fn_0012a004(), iVar1 == 0)) {
    return 0;
  }
  uVar2 = fn_006e45b4(&uStack_18,param_2 + param_3 * 0xc + 0x134,param_2 + param_3 * 0x10 + 0xf4,
                       param_4);
  iVar1 = fn_00172fc4();
  *(int *)(iVar1 + 0x1fc) = *(int *)(iVar1 + 0x1fc) + 1;
  return uVar2;
}



undefined4
fn_00556d74(int param_1,int param_2,undefined4 *param_3,undefined2 *param_4,char *param_5,
            int param_6,int param_7,uint *param_8)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined2 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined2 *puVar10;
  int *piVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined2 *puVar14;
  undefined1 *puVar15;
  undefined4 uVar16;
  uint *puVar17;
  int iVar18;
  undefined1 *puVar19;
  int iVar20;
  uint in_fpscr;
  undefined8 uVar21;
  int local_c0;
  uint local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined1 local_b0;
  undefined1 local_af;
  undefined1 local_ae;
  undefined1 local_ad;
  undefined4 local_ac;
  uint local_a8;
  uint local_a4;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined1 local_74;
  undefined1 local_73;
  undefined1 local_72;
  undefined1 *local_70;
  undefined1 *local_6c;
  undefined2 *local_68;
  undefined1 *local_64;
  undefined1 *local_60;
  undefined1 *local_5c;
  undefined2 *local_58;
  undefined1 *local_54;
  undefined1 *local_50;
  undefined1 *local_4c;
  undefined2 *local_48;
  undefined1 *local_44;
  undefined1 *local_40;
  undefined1 *local_3c;
  undefined2 *local_38;
  int local_34;
  int local_30;
  undefined4 *local_2c;
  undefined2 *local_28;
  
  if (*(char *)((int)param_4 + 0x3f) == '\x01') {
    uVar2 = 0;
  }
  else {
    if (*(char *)((int)param_4 + 0x3f) != '\x02') {
      return 0xff;
    }
    uVar2 = 1;
  }
  local_70 = (undefined1 *)((int)param_4 + 5);
  local_6c = (undefined1 *)((int)&local_b4 + 1);
  local_40 = (undefined1 *)((int)&local_ac + 2);
  local_68 = param_4 + 3;
  local_64 = (undefined1 *)((int)&local_b4 + 2);
  local_44 = (undefined1 *)((int)&local_ac + 1);
  puVar19 = &local_ad;
  local_60 = (undefined1 *)((int)param_4 + 7);
  local_5c = (undefined1 *)((int)&local_b4 + 3);
  puVar12 = &local_ac;
  iVar20 = 4;
  local_58 = param_4 + 4;
  local_54 = &local_b0;
  local_50 = (undefined1 *)((int)param_4 + 9);
  local_4c = &local_af;
  local_3c = (undefined1 *)((int)param_4 + 0xf);
  local_48 = param_4 + 5;
  local_38 = param_4 + 8;
  puVar7 = &local_ae;
  puVar3 = param_4 + 2;
  puVar5 = &local_b4;
  puVar9 = (undefined1 *)((int)param_4 + 0xb);
  puVar10 = param_4 + 6;
  puVar14 = param_4 + 7;
  puVar15 = (undefined1 *)((int)&local_ac + 3);
  puVar17 = &local_a8;
  local_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  do {
    param_4 = (undefined2 *)((int)param_4 + 0xd);
    iVar20 = iVar20 + -1;
    *(undefined1 *)puVar5 = *(undefined1 *)puVar3;
    puVar3 = (undefined2 *)((int)puVar3 + 0xd);
    puVar5 = (undefined4 *)((int)puVar5 + 0xd);
    *local_6c = *local_70;
    *local_64 = *(undefined1 *)local_68;
    *local_5c = *local_60;
    *local_54 = *(undefined1 *)local_58;
    *local_4c = *local_50;
    local_70 = local_70 + 0xd;
    *puVar7 = *(undefined1 *)local_48;
    puVar7 = puVar7 + 0xd;
    local_6c = local_6c + 0xd;
    local_68 = (undefined2 *)((int)local_68 + 0xd);
    *puVar19 = *puVar9;
    local_64 = local_64 + 0xd;
    local_60 = local_60 + 0xd;
    *(undefined1 *)puVar12 = *(undefined1 *)puVar10;
    local_5c = local_5c + 0xd;
    *local_44 = *(undefined1 *)param_4;
    local_58 = (undefined2 *)((int)local_58 + 0xd);
    local_54 = local_54 + 0xd;
    local_50 = local_50 + 0xd;
    local_4c = local_4c + 0xd;
    *local_40 = *(undefined1 *)puVar14;
    local_48 = (undefined2 *)((int)local_48 + 0xd);
    puVar9 = puVar9 + 0xd;
    puVar19 = puVar19 + 0xd;
    *puVar15 = *local_3c;
    puVar10 = (undefined2 *)((int)puVar10 + 0xd);
    puVar12 = (undefined4 *)((int)puVar12 + 0xd);
    uVar1 = *(undefined1 *)local_38;
    puVar14 = (undefined2 *)((int)puVar14 + 0xd);
    local_44 = local_44 + 0xd;
    local_40 = local_40 + 0xd;
    local_3c = local_3c + 0xd;
    local_38 = (undefined2 *)((int)local_38 + 0xd);
    *(undefined1 *)puVar17 = uVar1;
    puVar15 = puVar15 + 0xd;
    puVar17 = (uint *)((int)puVar17 + 0xd);
  } while (iVar20 != 0);
  local_c0 = local_34 + 0xd8;
  uVar8 = (uint)(ushort)local_28[1];
  local_80 = 0;
  local_b8 = (char *)(uint)CONCAT12(uVar2,*local_28);
  local_7c = 0xffffffff;
  if ((param_5 != (char *)0x0) &&
     (local_b8 = (char *)CONCAT13(*param_5,CONCAT12(uVar2,*local_28)), *param_5 != '\0')) {
    local_80 = *(undefined4 *)(param_5 + 4);
    local_7c = *(undefined4 *)(param_5 + 8);
  }
  local_78 = *(undefined4 *)(local_28 + 0x1c);
  local_74 = *(undefined1 *)(local_28 + 0x1e);
  local_73 = *(undefined1 *)((int)local_28 + 0x3d);
  local_72 = *(undefined1 *)(local_28 + 0x1f);
  local_bc = uVar8;
  fn_00558638(local_30,&local_c0);
  iVar20 = local_30;
  if (param_6 == 0) {
    local_b0 = 1;
  }
  else if ((param_6 == 1) || (param_6 != 2)) {
    local_b0 = 0;
    param_7 = 0;
  }
  else {
    local_b0 = 0;
  }
  local_a8 = 0;
  local_ac = param_7;
  local_a4 = 0;
  if (param_8 != (uint *)0x0) {
    local_a8 = param_8[3];
    local_a4 = param_8[4];
  }
  iVar13 = local_30 + 0x308c;
  piVar11 = *(int **)(local_34 + 0x114);
  if (piVar11 == (int *)0x0) {
LAB_00557194:
    pcVar6 = (char *)0x0;
    if (((param_8 == (uint *)0x0) || (pcVar6 = (char *)*param_8, pcVar6 != (char *)0x0)) ||
       (pcVar6 = (char *)0x0, param_8[1] == 0)) {
      local_c0 = *(int *)(iVar20 + 0x3290);
      if (local_c0 != 0) {
        uVar8 = *(uint *)(iVar20 + 0x3294);
      }
      local_b8 = pcVar6;
      if (local_c0 != 0 && uVar8 != 0) {
        local_b4 = 0;
        local_bc = uVar8;
        uVar21 = fn_00161958(*(undefined4 *)(local_34 + 4),*local_2c,iVar13,0x200);
      }
      else {
        local_c0 = 0;
        local_bc = 0;
        local_b4 = 0;
        uVar21 = fn_00161958(*(undefined4 *)(local_34 + 4),*local_2c,iVar13,0x200);
      }
    }
    else {
      if (iVar13 == 0) {
        return 10;
      }
      uVar21 = fn_00559538(iVar13,param_8[1],param_8[2]);
    }
    if ((int)uVar21 == 0) {
      return 10;
    }
  }
  else {
    uVar16 = *(undefined4 *)(local_30 + 0x3290);
    iVar18 = *(int *)(local_30 + 0x3294);
    uVar4 = fn_006e2b3c(*(undefined4 *)(local_34 + 4),*(undefined4 *)(local_30 + 0xb0));
    uVar8 = 0;
    if ((char)piVar11[1] == '\0') goto LAB_00557194;
    local_b8 = "bxstm";
    uVar8 = 0x200;
    local_c0 = iVar18;
    local_bc = uVar4;
    uVar21 = (**(code **)(*piVar11 + 0x14))(piVar11,iVar13,0x200,uVar16);
    if ((int)uVar21 == 0) goto LAB_00557194;
  }
  uVar8 = (uint)((ulonglong)uVar21 >> 0x20);
  if (param_8 != (uint *)0x0) {
    uVar8 = param_8[5];
  }
  if (param_8 == (uint *)0x0 || uVar8 == 0) {
    if (*(int *)(local_28 + 0x20) == -1) goto LAB_00557340;
    if (((*(int *)(local_34 + 0x114) != 0) &&
        (iVar20 = fn_006e2b3c(*(undefined4 *)(local_34 + 4),*(undefined4 *)(local_30 + 0xb0)),
        iVar20 != 0)) && (piVar11 = *(int **)(local_34 + 0x114), (char)piVar11[1] != '\0')) {
      local_c0 = 0;
      uVar8 = (**(code **)(*piVar11 + 0x18))(piVar11,iVar20,&DAT_00807cb8,(char *)&DAT_00807ce2);
      if (uVar8 != 0) goto LAB_00557328;
    }
    uVar8 = fn_006e2cf0(*(undefined4 *)(local_34 + 0x110),*(undefined4 *)(local_28 + 0x20));
    if (uVar8 == 0) goto LAB_00557340;
  }
LAB_00557328:
  if (param_7 == 0) {
    fn_00558464(local_30,uVar8,&local_b0);
  }
LAB_00557340:
  fn_005586a0(local_30,(int)uVar21,&local_b0);
  iVar20 = local_30;
  VectorSignedToFloat(local_2c[4],(byte)(in_fpscr >> 0x16) & 3);
  fn_00557e8c(local_30);
  fn_0014115c(iVar20,*(undefined1 *)(local_2c + 5));
  fn_00557b84(iVar20,*(undefined1 *)((int)local_2c + 0x15));
  return 0;
}


