#include "002013cc_002017e4.h"



undefined4
fn_002017e4(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,uint param_5,int param_6
            ,uint param_7,undefined4 param_8,undefined4 param_9,int param_10,int param_11,
            char *param_12)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  bool bVar8;
  bool bVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  undefined1 auStack_50 [28];
  int iStack_34;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  uVar10 = CONCAT44(param_8,param_9);
  uVar11 = (ulonglong)param_7;
  iVar6 = param_1;
  iStack_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  if (param_11 == 0) {
    fn_00301a9c(&local_70,&DAT_007ba154,0x1e);
    iVar6 = 0;
    do {
      if (*(byte *)(param_10 + iVar6) != 0) {
        fn_002eb5ac(auStack_50,iVar6,*(byte *)(param_10 + iVar6) - 1);
        fn_0019bc50(auStack_50 + iVar6 * 6 + -0x20,auStack_50);
      }
      param_7 = (uint)uVar11;
      iVar6 = iVar6 + 1;
    } while (iVar6 < 5);
    uVar2 = fn_0068eb30(DAT_008977e8);
    uVar2 = fn_00265604(uVar2,local_2c);
    iVar6 = fn_0068eb30(DAT_008977e8);
    if (((int)local_30 < 0) ||
       ((uint)((*(int *)(iVar6 + 8) - *(int *)(iVar6 + 4)) / 0x34) <= local_30)) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined4 *)(*(int *)(iVar6 + 0x10) + local_30 * 4);
    }
    iVar6 = fn_0068eb30(DAT_008977e8);
    if ((int)local_30 < 0) {
LAB_0020190c:
      iVar6 = 0;
    }
    else {
      if ((uint)((*(int *)(iVar6 + 8) - *(int *)(iVar6 + 4)) / 0x34) <= local_30) goto LAB_0020190c;
      iVar6 = *(int *)(iVar6 + 4) + local_30 * 0x34;
    }
    iVar6 = fn_00294440(iVar6,uVar7,uVar2,&local_70);
  }
  if (param_12 != (char *)0x0) {
    iVar6 = param_6;
  }
  if (param_12 == (char *)0x0 || iVar6 == -1) goto LAB_00201a18;
  uVar2 = fn_0068eb30(DAT_008977e8);
  uVar2 = fn_00265604(uVar2,param_6);
  iVar6 = fn_0068eb30(DAT_008977e8);
  if (((int)param_5 < 0) || ((uint)((*(int *)(iVar6 + 8) - *(int *)(iVar6 + 4)) / 0x34) <= param_5))
  {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined4 *)(*(int *)(iVar6 + 0x10) + param_5 * 4);
  }
  iVar6 = fn_0068eb30(DAT_008977e8);
  if ((int)param_5 < 0) {
LAB_002019d4:
    iVar6 = 0;
  }
  else {
    if ((uint)((*(int *)(iVar6 + 8) - *(int *)(iVar6 + 4)) / 0x34) <= param_5) goto LAB_002019d4;
    iVar6 = *(int *)(iVar6 + 4) + param_5 * 0x34;
  }
  fn_002cd5b0(iVar6,uVar7,uVar2,param_12);
  cVar1 = *param_12;
  bVar8 = cVar1 == '\0';
  if (bVar8) {
    cVar1 = param_12[6];
  }
  bVar9 = bVar8 && cVar1 == '\0';
  if (bVar8 && cVar1 == '\0') {
    bVar9 = param_12[0xc] == '\0';
  }
  if (!bVar9) {
    *(undefined1 *)(param_1 + 0x23c) = 1;
  }
LAB_00201a18:
  local_6c = (undefined4)((ulonglong)uVar10 >> 0x20);
  local_68 = (undefined4)uVar10;
  local_64 = param_11;
  local_70 = param_7;
  fn_006a3dd4(param_1,local_30,local_28,param_5);
  iVar6 = fn_00145b00(8,&DAT_00812c8c);
  piVar3 = (int *)0x0;
  if (iVar6 != 0) {
    piVar3 = (int *)fn_005efdbc();
  }
  piVar5 = *(int **)(param_1 + 0x234);
  if (piVar5 != piVar3) {
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
    *(int **)(param_1 + 0x234) = piVar3;
  }
  fn_0068eb30(DAT_008977e8);
  uVar2 = fn_00264404();
  uVar2 = fn_0069ee40(*(undefined4 *)(param_1 + 0x234),uVar2,0);
  puVar4 = (undefined4 *)fn_00242b4c(local_28);
  *(undefined4 *)(param_1 + 0x244) = *puVar4;
  uVar7 = fn_00242bd4(local_28);
  fn_001fa18c(*(undefined4 *)(param_1 + 0x24c),uVar7);
  return uVar2;
}



void fn_002015e4(int *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 in_s0;
  undefined4 in_s1;
  undefined4 local_18;
  undefined4 uStack_14;
  
  if ((((byte)DAT_008c62ec & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008c62ec), iVar1 != 0)) {
    in_s0 = 0;
    DAT_008c62f0 = 0;
    DAT_008c62f4 = 0;
  }
  local_18 = DAT_008c62f0;
  uStack_14 = DAT_008c62f4;
  iVar1 = fn_006f7da4(param_1);
  if ((iVar1 != 0) || (iVar1 = fn_0069fb20(param_1), iVar1 != 0)) {
    fn_006f6bac(DAT_008977e8,param_2);
    local_18 = in_s0;
    uStack_14 = in_s1;
    fn_006a4518(param_1,&local_18);
  }
  iVar1 = fn_006f6b6c(DAT_008977e8,param_2);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x60))(param_1,0);
  }
  iVar1 = fn_006f6b4c(DAT_008977e8,param_2);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 100))(param_1);
  }
  iVar1 = fn_006f6c20(DAT_008977e8,param_2);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x68))(param_1,0);
  }
  iVar1 = fn_006f6c40(DAT_008977e8,param_2);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x68))(param_1,1);
  }
  iVar1 = fn_006f6c7c(DAT_008977e8,param_2);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x6c))(param_1);
  }
  iVar1 = fn_006f6c9c(DAT_008977e8,param_2);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x70))(param_1,1);
  }
  iVar1 = fn_006f6b8c(DAT_008977e8,param_2);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x94))(param_1);
  }
  uVar2 = fn_006ec83c();
  if ((uVar2 & 0x20000) != 0) {
    fn_00144810(DAT_008977e8);
    fn_001cc148();
  }
  return;
}



undefined4 * fn_002015b8(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00145b00(0x2e0,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_00200cf8();
  }
  *param_1 = uVar2;
  return param_1;
}



void fn_002013cc(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  bool bVar6;
  char *local_40 [6];
  char *local_28 [4];
  
  iVar5 = *param_1;
  iVar1 = fn_001828f0(*(undefined4 *)(iVar5 + 0xa0),s_Null_tutorial_count_008c44a9);
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | 1;
  iVar1 = 0;
  local_40[0] = s_count_1a_008c44bd;
  local_40[1] = s_count_2a_008c44c6;
  local_40[2] = s_count_3a_008c44cf;
  local_40[3] = s_count_4a_008c44d8;
  local_40[4] = s_count_5a_008c44e1;
  local_28[0] = s_count_1b_008c44ea;
  local_28[1] = s_count_2b_008c44f3;
  local_28[2] = s_count_3b_008c44fc;
  local_28[3] = s_count_4b_008c4505;
  do {
    iVar2 = fn_001828f0(*(undefined4 *)(iVar5 + 0xa0),local_40[iVar1]);
    bVar6 = iVar1 == param_2 + -1;
    iVar1 = iVar1 + 1;
    bVar4 = *(byte *)(iVar2 + 0x44) & 0xfe;
    if (bVar6) {
      bVar4 = bVar4 | 1;
    }
    *(byte *)(iVar2 + 0x44) = bVar4;
  } while (iVar1 < 5);
  iVar1 = 0;
  do {
    iVar2 = fn_001828f0(*(undefined4 *)(iVar5 + 0xa0),local_28[iVar1]);
    bVar6 = iVar1 == param_3 + -1;
    iVar1 = iVar1 + 1;
    bVar4 = *(byte *)(iVar2 + 0x44) & 0xfe;
    if (bVar6) {
      bVar4 = bVar4 | 1;
    }
    *(byte *)(iVar2 + 0x44) = bVar4;
  } while (iVar1 < 4);
  iVar1 = fn_001828f0(*(undefined4 *)(iVar5 + 0xa0),s_tutorial_start_008c4dfe);
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | 1;
  iVar1 = fn_001828f0(*(undefined4 *)(iVar5 + 0xa0),s_tutorial_cleat_008c4e0d);
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
  *(undefined1 *)(*(int *)(iVar5 + 8) + *(int *)(iVar5 + 0x18)) = 0x1c;
  uVar3 = *(int *)(iVar5 + 0x18) + 1;
  if ((uint)(*(int *)(iVar5 + 0xc) - *(int *)(iVar5 + 8)) <= uVar3) {
    uVar3 = 0;
  }
  *(uint *)(iVar5 + 0x18) = uVar3;
  return;
}


