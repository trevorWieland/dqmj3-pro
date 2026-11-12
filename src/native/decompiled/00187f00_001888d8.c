#include "00187f00_001888d8.h"



void fn_001888d8(char param_1,int param_2,char param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int *piVar3;
  
  uVar2 = fn_00182994(DAT_008977e4);
  uVar1 = fn_001659c0(uVar2,(int)param_3,(int)param_1);
  uVar2 = fn_00182994(DAT_008977e4);
  fn_00179990(uVar2,(char *)&DAT_00188948,uVar1);
  if (param_2 == 0) {
    return;
  }
  piVar3 = (int *)fn_00182994(DAT_008977e4);
                    /* WARNING: Could not recover jumptable at 0x0018893c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar3 + 0x14))(piVar3,"SE_BTL_024");
  return;
}



void fn_0018861c(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  short *psVar3;
  int *piVar4;
  short *psVar5;
  short *psVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  short *local_4c [4];
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 *local_34;
  undefined4 *local_30 [2];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [8];
  
  fn_00168a24(local_4c,param_2,auStack_28);
  fn_00168a24(local_30,*(undefined4 *)(*(int *)(DAT_00897804 + 8) + 4),auStack_24);
  local_3c = 0x2010001;
  uStack_38 = 0xffff0000;
  fn_00168a24(&local_34,&local_3c,auStack_20);
  puVar1 = local_34;
  iVar7 = 0;
  uVar8 = local_34[-1];
  if (0xfffffff1 < uVar8) {
    fn_002ff628(8,&DAT_008c75f8,&DAT_008c75f8,uVar8,0xfffffff1);
  }
  if (uVar8 <= *(uint *)(local_4c[0] + -2)) {
    do {
      iVar2 = fn_001006de(local_4c[0] + iVar7,puVar1,uVar8);
      if (iVar2 == 0) {
        if (iVar7 != -1) goto LAB_001886f8;
        break;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 + uVar8 <= *(uint *)(local_4c[0] + -2));
  }
  goto LAB_001887a8;
  while( true ) {
    while (iVar2 = fn_001006de(local_4c[0] + iVar7,puVar1,uVar8), iVar2 != 0) {
      iVar7 = iVar7 + 1;
      if (*(uint *)(local_4c[0] + -2) < iVar7 + uVar8) goto LAB_001887a8;
    }
    if (iVar7 == -1) break;
LAB_001886f8:
    fn_00177c88(local_4c,iVar7,local_34[-1],local_30[0],local_30[0][-1],0,local_30[0][-1]);
    puVar1 = local_34;
    uVar8 = local_34[-1];
    iVar7 = iVar7 + local_30[0][-1];
    if (0xfffffff1 < uVar8) {
      fn_002ff628(8,&DAT_008c75f8,&DAT_008c75f8,uVar8,0xfffffff1);
    }
    if (*(uint *)(local_4c[0] + -2) < iVar7 + uVar8) break;
  }
LAB_001887a8:
  uVar8 = 0;
  psVar3 = local_4c[0];
  psVar5 = (short *)(param_1 + 0x158);
  do {
    uVar8 = uVar8 + 1;
    psVar6 = psVar5 + 1;
    *psVar5 = *psVar3;
    bVar9 = psVar3[1] == 0;
    psVar3 = psVar3 + 1;
    psVar5 = psVar6;
  } while ((bVar9 || uVar8 < 0x400) && (!bVar9 && uVar8 != 0x3ff));
  *psVar6 = 0;
  if (local_34 != &DAT_008f9cf4) {
    piVar4 = local_34 + -3;
    iVar7 = *piVar4;
    if ((iVar7 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar7 + -1, iVar7 == 0)))) {
      fn_001008c4(local_34 + -3,local_34[-2] + 8,0);
    }
  }
  if (local_30[0] != &DAT_008f9cf4) {
    piVar4 = local_30[0] + -3;
    iVar7 = *piVar4;
    if ((iVar7 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar7 + -1, iVar7 == 0)))) {
      fn_001008c4(local_30[0] + -3,local_30[0][-2] + 8,0);
    }
  }
  if (local_4c[0] != (short *)&DAT_008f9cf4) {
    piVar4 = (int *)(local_4c[0] + -6);
    iVar7 = *piVar4;
    if ((iVar7 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar7 + -1, iVar7 == 0)))) {
      fn_001008c4(local_4c[0] + -6,*(int *)(local_4c[0] + -4) + 8,0);
    }
  }
  return;
}



int * fn_001880d0(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  uint local_10;
  int *local_c;
  
  if (*param_2 == 0x8000010) {
    local_10 = 0x1000001;
    local_c = (int *)0x0;
    iVar2 = fn_001a1dc8(*(undefined4 *)(param_1 + 8),param_2,&local_10);
    piVar1 = local_c;
    if (iVar2 != 0) {
      if (((local_10 & 0x8000000) != 0) &&
         (iVar2 = local_c[1], local_c[1] = iVar2 + -1, iVar2 + -1 == 0)) {
        (**(code **)(*local_c + 8))();
      }
      return piVar1;
    }
    if (((local_10 & 0x8000000) != 0) &&
       (iVar2 = local_c[1], local_c[1] = iVar2 + -1, iVar2 + -1 == 0)) {
      (**(code **)(*local_c + 8))();
    }
  }
  return (int *)&DAT_ffffffff;
}



int fn_001880b0(int param_1)

{
  return DAT_00892844 + param_1 * 0x58 + 10;
}



void fn_00188010(int param_1,int param_2)

{
  short local_38 [10];
  undefined1 *puStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined *local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  if (param_2 == 0) {
    local_38[0] = -1;
    local_38[1] = 0x5f;
    local_38[2] = 0x60;
    local_38[3] = 0x61;
    local_38[4] = 0x62;
    local_38[5] = 99;
    local_38[6] = 100;
    local_38[7] = 0x65;
    local_38[8] = 0x66;
    local_38[9] = 0x67;
    puStack_24 = &LAB_00690068;
    uStack_20 = 0x6b006a;
    uStack_1c = 0x6d006c;
    local_18 = &DAT_006f006e;
    uStack_14 = 0x710070;
    uStack_10 = 0x730072;
    uStack_c = 0x750074;
    uStack_8 = 0x770076;
    fn_00192cb4(DAT_00897800,(int)local_38[param_1],0);
    return;
  }
  local_38[0] = -1;
  local_38[1] = 0x46;
  local_38[2] = 0x47;
  local_38[3] = 0x48;
  local_38[4] = 0x49;
  local_38[5] = 0x4a;
  local_38[6] = 0x4b;
  local_38[7] = 0x4c;
  local_38[8] = 0x4d;
  local_38[9] = 0x4e;
  puStack_24 = (undefined1 *)0x50004f;
  uStack_20 = 0x520051;
  uStack_1c = 0x540053;
  local_18 = (undefined *)0x560055;
  uStack_14 = 0x580057;
  uStack_10 = 0x5a0059;
  uStack_c = 0x5c005b;
  uStack_8 = 0x5e005d;
  fn_00192cb4(DAT_00897800,(int)local_38[param_1],0);
  return;
}



void fn_00187f94(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_18;
  
  local_18 = param_4;
  uVar2 = fn_0017484c(DAT_008977e4);
  iVar3 = fn_00174828(DAT_008977e4);
  cVar1 = *(char *)(iVar3 + *(char *)(param_1 + 0x35) * 8 + 0x4182);
  if (cVar1 == '\0') {
    fn_001794fc(param_1,0,param_3,local_18);
    return;
  }
  local_18 = CONCAT31(((unsigned int)(local_18) >> 8) & 0xffffff,cVar1);
  uVar2 = fn_00182e2c(uVar2,&local_18);
  fn_001794fc(param_1,uVar2);
  return;
}



void fn_00187f00(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  bool bVar1;
  float in_s0;
  undefined4 uVar2;
  undefined4 uVar3;
  
  bVar1 = in_s0 != 0.0;
  if (bVar1) {
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x3c);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x40);
  }
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(float *)(param_1 + 0x8c) = in_s0;
  if (bVar1) {
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x4c);
  }
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(float *)(param_1 + 0x94) = in_s0;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  *(undefined4 *)(param_1 + 8) = *param_2;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  *(undefined4 *)(param_1 + 0x14) = *param_3;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  if (!bVar1) {
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    *(undefined4 *)(param_1 + 0x38) = *param_2;
    *(undefined4 *)(param_1 + 0x3c) = uVar2;
    *(undefined4 *)(param_1 + 0x40) = uVar3;
    uVar2 = param_3[1];
    uVar3 = param_3[2];
    *(undefined4 *)(param_1 + 0x44) = *param_3;
    *(undefined4 *)(param_1 + 0x48) = uVar2;
    *(undefined4 *)(param_1 + 0x4c) = uVar3;
  }
  return;
}


