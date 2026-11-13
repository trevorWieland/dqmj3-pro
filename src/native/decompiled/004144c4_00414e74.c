#include "004144c4_00414e74.h"



void fn_00414e74(int param_1)

{
  fn_0028ad24(*(undefined4 *)(DAT_00897804 + 0xc));
  fn_0028ad18(*(undefined4 *)(DAT_00897804 + 0xc),*(undefined4 *)(param_1 + 0xf4));
  fn_0028b680(*(undefined4 *)(DAT_00897804 + 0xc));
  fn_0028b674(*(undefined4 *)(DAT_00897804 + 0xc),*(undefined4 *)(param_1 + 0xf8));
  return;
}



void fn_00414d6c(int *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  
  piVar1 = param_1;
  if (param_2 != 0) {
    piVar1 = (int *)param_1[0x46];
  }
  if (param_2 != 0 && piVar1 != (int *)0x0) {
    fn_002b20a4(piVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00414da4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x168))(param_1,*(undefined4 *)(param_1[0x46] + 0x1c));
    return;
  }
  fn_002b20a4(param_1[0x45],param_3);
                    /* WARNING: Could not recover jumptable at 0x00414dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x168))(param_1,*(undefined4 *)(param_1[0x45] + 0x1c));
  return;
}



void fn_00414d40(int param_1,undefined4 param_2)

{
  fn_00689efc(param_1,0x2d,0);
  fn_0025f354(*(undefined4 *)(param_1 + 0x10c),param_2);
  return;
}



undefined4 fn_004144c4(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  code *pcVar8;
  int iVar9;
  int iVar10;
  int local_b0 [3];
  wchar16 *local_a4;
  char *local_a0;
  int *local_9c;
  int *local_98;
  int local_94;
  undefined1 local_8e;
  uint local_88;
  uint local_84;
  int local_80;
  undefined1 local_7a;
  uint local_74;
  uint uStack_70;
  int local_6c;
  undefined1 local_68;
  undefined1 local_66;
  undefined1 local_63;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 *local_50;
  undefined4 local_4c;
  undefined4 *local_44;
  undefined4 *local_40 [2];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  fn_003808c0(local_b0 + 3);
  local_a4 = L"rom:/data/Layout/menu/replacing_member.arc";
  local_a0 = "replacing_member.bflyt";
  local_8e = 1;
  local_7a = 1;
  local_66 = 1;
  local_68 = 1;
  local_63 = 1;
  uVar2 = fn_0016ba34(DAT_00897800,DAT_00898228,*(undefined4 *)(&DAT_007c6fd4 + param_1[0x4c] * 4),
                       0);
  fn_00147974(&local_50,uVar2);
  local_4c = 0x46;
  uVar2 = fn_0022f584((char *)&DAT_0041484c,0);
  fn_00147974(&local_44,uVar2);
  uVar2 = fn_0022f584((char *)&DAT_0041486c,0);
  fn_00147974(local_40,uVar2);
  cVar1 = *(char *)(param_1[0x44] + 8);
  *(char *)(param_1 + 0x48) = cVar1;
  if (cVar1 == '\x01') {
    local_60 = *(undefined4 *)(param_1[0x44] + 0xc);
    uStack_5c = 4;
    param_1[0x49] = 4;
  }
  if ((char)param_1[0x48] == '\x03') {
    iVar9 = 0;
    iVar10 = 0;
    do {
      iVar3 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),
                           *(undefined4 *)(param_1[0x44] + iVar9 * 4 + 0x1c));
      if (iVar3 != 0) {
        fn_0020bbc4(local_b0);
        iVar3 = fn_006bf5e0(local_b0 + 1);
        local_9c[iVar10] = iVar3;
        fn_006bfe90(local_b0 + 1);
        iVar3 = fn_001cab7c();
        iVar10 = iVar10 + iVar3;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < 2);
    iVar9 = 0;
    iVar10 = 0;
    do {
      iVar3 = fn_0028b348(*(undefined4 *)(DAT_00897804 + 0xc),iVar9);
      if (iVar3 != 0) {
        fn_0020bbc4(local_b0,iVar3);
        iVar3 = fn_006bf5e0(local_b0 + 1);
        if (iVar3 == *local_9c) {
          iVar3 = 0;
        }
        if (iVar3 == local_9c[1]) {
          iVar3 = 0;
        }
        if (iVar3 == local_9c[2]) {
          iVar3 = 0;
        }
        if (iVar3 != local_9c[3] && iVar3 != 0) {
          *(int *)(local_88 + iVar10 * 4) = iVar3;
          fn_006bfe90(local_b0 + 1);
          iVar3 = fn_001cab7c();
          iVar10 = iVar10 + iVar3;
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < 4);
    local_8e = 0;
    local_7a = 0;
  }
  fn_0037ffb4(param_1,local_b0 + 3);
  uVar2 = fn_00178f9c(param_1[0x20],param_1[0x22]);
  cVar1 = (char)param_1[0x48];
  if (cVar1 == '\0') {
LAB_00414720:
    uVar4 = fn_00172c98(uVar2,(char *)&DAT_00414890);
    iVar9 = fn_00145b00(0x30,&DAT_00812c8c);
    piVar5 = (int *)0x0;
    if (iVar9 != 0) {
      local_b0[0] = param_1[0x12];
      local_b0[1] = 1;
      local_b0[2] = 0;
      piVar5 = (int *)fn_002b20c0(iVar9,param_1[1],uVar4,1);
    }
    piVar7 = (int *)param_1[0x45];
    if (piVar7 != piVar5) {
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 4))(piVar7);
      }
      param_1[0x45] = (int)piVar5;
    }
    (**(code **)(*(int *)param_1[0x45] + 0x10))();
    fn_002b20a4(param_1[0x45],0);
    uVar2 = fn_00172c98(uVar2,(char *)&DAT_004148a0);
    iVar9 = fn_00145b00(0x30,&DAT_00812c8c);
    if (iVar9 == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      local_b0[0] = param_1[0x12];
      local_b0[1] = 1;
      local_b0[2] = 0;
      piVar5 = (int *)fn_002b20c0(iVar9,param_1[1],uVar2,1);
    }
    piVar7 = (int *)param_1[0x46];
    if (piVar7 != piVar5) {
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 4))();
      }
      param_1[0x46] = (int)piVar5;
    }
    (**(code **)(*(int *)param_1[0x46] + 0x10))();
    fn_002b20a4(param_1[0x46],0);
  }
  else if (cVar1 == '\x01') {
    iVar9 = fn_001828f0(uVar2,(char *)&DAT_00414c4c);
    *(byte *)(iVar9 + 0x44) = *(byte *)(iVar9 + 0x44) & 0xfe | 1;
    uVar4 = fn_00172c98(uVar2,(char *)&DAT_00414c5c);
    iVar9 = fn_00145b00(0x30,&DAT_00812c8c);
    piVar5 = (int *)0x0;
    if (iVar9 != 0) {
      local_b0[0] = param_1[0x12];
      local_b0[1] = 1;
      local_b0[2] = 0;
      piVar5 = (int *)fn_002b20c0(iVar9,param_1[1],uVar4,1);
    }
    piVar7 = (int *)param_1[0x45];
    if (piVar7 != piVar5) {
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 4))(piVar7);
      }
      param_1[0x45] = (int)piVar5;
    }
    (**(code **)(*(int *)param_1[0x45] + 0x10))();
    fn_002b20a4(param_1[0x45],0);
    iVar9 = fn_001828f0(uVar2,(char *)&DAT_00414c68);
    *(byte *)(iVar9 + 0x44) = *(byte *)(iVar9 + 0x44) & 0xfe;
  }
  else if (cVar1 == '\x02' || cVar1 == '\x03') goto LAB_00414720;
  iVar9 = fn_00145b00(0xe4,&DAT_00812c8c);
  if (iVar9 == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)fn_001caa80(iVar9,param_1[1],1);
  }
  piVar7 = (int *)param_1[0x47];
  if (piVar7 != piVar5) {
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 4))();
    }
    param_1[0x47] = (int)piVar5;
  }
  *(int **)(param_1[0x47] + 8) = param_1;
  cVar1 = (char)param_1[0x48];
  if (cVar1 == '\0') {
LAB_004149e4:
    piVar5 = (int *)param_1[0x47];
    pcVar8 = *(code **)(*piVar5 + 0x24);
    uVar2 = 2;
LAB_00414a10:
    (*pcVar8)(piVar5,uVar2,1);
  }
  else {
    if (cVar1 == '\x01') {
      piVar5 = (int *)param_1[0x47];
      pcVar8 = *(code **)(*piVar5 + 0x24);
      uVar2 = 1;
      goto LAB_00414a10;
    }
    if (cVar1 == '\x02' || cVar1 == '\x03') goto LAB_004149e4;
  }
  *(undefined1 *)(param_1[0x47] + 0x45) = 0;
  *(undefined1 *)(param_1[0x47] + 0x44) = 1;
  *(undefined4 *)(param_1[0x47] + 0x10) = 0x100094e;
  cVar1 = (char)param_1[0x48];
  if (cVar1 == '\0') {
LAB_00414a58:
    iVar9 = 0;
LAB_00414a7c:
    iVar10 = param_1[0x45];
    do {
      uVar2 = *(undefined4 *)(iVar10 + 0x1c);
      do {
        fn_001c9d44(param_1[0x47],iVar9,uVar2,0);
        iVar9 = iVar9 + 1;
        if (1 < iVar9) goto LAB_00414abc;
        uVar2 = 0;
        if (iVar9 == 0) goto LAB_00414a7c;
      } while (iVar9 != 1);
      iVar10 = param_1[0x46];
    } while( true );
  }
  if (cVar1 == '\x01') {
    fn_001c9d44(param_1[0x47],0,*(undefined4 *)(param_1[0x45] + 0x1c),0);
  }
  else if (cVar1 == '\x02' || cVar1 == '\x03') goto LAB_00414a58;
LAB_00414abc:
  *(undefined1 *)(param_1[0x47] + 0x46) = 0;
  fn_00245330(param_1,param_1[0x47]);
  uVar2 = fn_006b846c(*(undefined4 *)(DAT_00897804 + 0xc));
  fn_003807f4(param_1,uVar2,0);
  uVar2 = fn_006b8600(*(undefined4 *)(DAT_00897804 + 0xc));
  fn_003807f4(param_1,uVar2,0,1);
  fn_0041434c(param_1);
  iVar9 = param_1[0x3c];
  *(undefined1 *)(iVar9 + 0x81) = 1;
  fn_0031f3f4(iVar9,0);
  if ((char)param_1[0x48] == '\x01') {
    fn_002c07c0(&local_38);
    local_34 = 0;
    local_38 = 4;
    local_30 = 0;
    local_2c = *(undefined4 *)(param_1[0x44] + 0xc);
    fn_002c14e4(param_1,&local_38);
    (**(code **)(*param_1 + 0x1b4))(param_1);
  }
  if (local_40[0] != &DAT_008f9cf4) {
    piVar5 = local_40[0] + -3;
    iVar9 = *piVar5;
    if ((iVar9 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar9 + -1, iVar9 == 0)))) {
      fn_001008c4(local_40[0] + -3,local_40[0][-2] + 8,0);
    }
  }
  if (local_44 != &DAT_008f9cf4) {
    piVar5 = local_44 + -3;
    iVar9 = *piVar5;
    if ((iVar9 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar9 + -1, iVar9 == 0)))) {
      fn_001008c4(local_44 + -3,local_44[-2] + 8,0);
    }
  }
  if (local_50 != &DAT_008f9cf4) {
    piVar5 = local_50 + -3;
    iVar9 = *piVar5;
    if ((iVar9 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar9 + -1, iVar9 == 0)))) {
      fn_001008c4(local_50 + -3,local_50[-2] + 8,0);
    }
  }
  uVar6 = local_74;
  if (uStack_70 < local_74) {
    do {
      uVar6 = uVar6 + 4;
    } while (uVar6 != uStack_70);
  }
  fn_001008c4(local_74,(int)(local_6c - local_74) >> 2,0);
  uVar6 = local_88;
  if (local_84 < local_88) {
    do {
      uVar6 = uVar6 + 4;
    } while (uVar6 != local_84);
  }
  fn_001008c4(local_88,(int)(local_80 - local_88) >> 2,0);
  piVar5 = local_9c;
  if (local_98 < local_9c) {
    do {
      piVar5 = piVar5 + 1;
    } while (piVar5 != local_98);
  }
  fn_001008c4(local_9c,local_94 - (int)local_9c >> 2,0);
  return 1;
}


