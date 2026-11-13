#include "00379dcc_0037b90c.h"



undefined4 fn_0037b90c(int *param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (((*(char *)(param_2 + 0xdc) == '\0') && ((char)param_1[0x16] != '\0')) && (param_1[0x5a] == 0)
     ) {
    fVar4 = *(float *)(param_2 + 0x20) - (float)param_1[8];
    fVar3 = *(float *)(param_2 + 0x24) - (float)param_1[9];
    fVar5 = *(float *)(param_2 + 0x28) - (float)param_1[10];
    fVar4 = fVar4 * fVar4 + fVar3 * fVar3 + fVar5 * fVar5;
    iVar1 = fn_006f7a84(DAT_008977e0);
    fVar3 = *(float *)(*(int *)(iVar1 + 0x100) + 0xc) + 24.0;
    fVar3 = fVar3 * fVar3;
    bVar2 = fVar4 == fVar3;
    if (fVar4 <= fVar3) {
      bVar2 = param_1[0x5a] == 0;
    }
    if (bVar2) {
      (**(code **)(*param_1 + 0x44))(param_1,1,4,0);
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
  }
  return 0;
}



void fn_0037b890(int *param_1)

{
  int iVar1;
  
  fn_001db0c4();
  iVar1 = param_1[0x5a];
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      iVar1 = (**(code **)(*param_1 + 0x48))(param_1);
      if (iVar1 != 0) {
        param_1[0x5a] = 2;
      }
    }
    else if (iVar1 == 2) {
      param_1[0x5a] = 3;
      (**(code **)(*param_1 + 0x58))(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x0037b8e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x54))(param_1,0);
      return;
    }
  }
  return;
}



undefined4 fn_0037b7a8(int *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = fn_001d99a0(param_1,param_2,0);
  uVar2 = fn_006f7a9c(DAT_008977e0);
  fn_00279bbc(uVar2,param_2 + 1);
  param_1[0x4e] = param_1[0x4e] | 0x20;
  (**(code **)(*param_1 + 0x10c))(param_1,1);
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  (**(code **)(*param_1 + 0x54))(param_1,1);
  param_1[0x5a] = 0;
  fn_001d96a0(param_1,&DAT_007c1144);
  param_1[0x4e] = param_1[0x4e] | 8;
  (**(code **)(*param_1 + 0x44))(param_1,0,4);
  (**(code **)(*param_1 + 0x20))(param_1);
  return uVar1;
}



void fn_0037b780(int *param_1)

{
  (**(code **)(*param_1 + 0x54))(param_1,0);
  fn_001d9fcc(param_1);
  return;
}



void fn_0037b708(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &PTR_FUN_00828d64;
  param_1[0x67] = &DAT_00828ea8;
  fn_00288ab8(param_1 + 0x67);
  iVar1 = param_1[0x74];
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x18) != 0) {
      fn_002feef8(*(int *)(iVar1 + 0x18));
    }
    fn_002feef8(iVar1);
  }
  if ((int *)param_1[0x73] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x73] + 4))();
  }
  iVar1 = fn_002893f4(param_1 + 0x67);
  fn_001dc088(iVar1 + -0x19c);
  return;
}



void fn_0037b680(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &PTR_FUN_00828d64;
  param_1[0x67] = &DAT_00828ea8;
  fn_00288ab8(param_1 + 0x67);
  iVar1 = param_1[0x74];
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x18) != 0) {
      fn_002feef8(*(int *)(iVar1 + 0x18));
    }
    fn_002feef8(iVar1);
  }
  if ((int *)param_1[0x73] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x73] + 4))();
  }
  iVar1 = fn_002893f4(param_1 + 0x67);
  fn_001dc088(iVar1 + -0x19c);
  fn_002feef8();
  return;
}



undefined4 fn_0037b0bc(int *param_1,int *param_2)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  undefined4 in_s0;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  float local_64;
  float local_60;
  float fStack_5c;
  float local_50;
  float local_4c;
  float fStack_48;
  float local_44;
  float local_40;
  float local_3c;
  
  fn_006f7a48(DAT_008977e0);
  iVar2 = fn_006a7dc8();
  if ((iVar2 == 0) || (iVar2 = (**(code **)(*param_1 + 0xc4))(param_1,param_2), iVar2 == 0)) {
    return 0;
  }
  if ((char)param_2[0x37] == '\0') {
    piVar3 = (int *)fn_006f7a84(DAT_008977e0);
    (**(code **)(*piVar3 + 0x44))(piVar3,0,4);
    if (*(char *)((int)param_1 + 0x1a1) == '\0') {
      uVar4 = fn_0016ba34(DAT_00897800,DAT_00891870,(char *)&DAT_0037b528,0);
      uVar5 = fn_006f75ac(DAT_008977e0);
      fn_0038fee8(uVar5,uVar4);
      uVar4 = fn_006f75ac(DAT_008977e0);
      fn_0038ff40(uVar4,0,0,1,0);
    }
    else if (*(char *)((int)param_1 + 0x1a1) == '\x02') {
      fn_00698fb8(DAT_008977e0,1);
      pfVar8 = (float *)(param_1 + 8);
      sVar1 = *(short *)((int)param_1 + 0x1c6);
      local_7c = 0;
      local_78 = 0;
      local_74 = 0;
      local_70 = 0;
      local_6c = 0;
      if (param_1[0x72] == 0) {
        fn_002cd778(&local_7c,(int)sVar1,(int)(short)param_1[0x71]);
      }
      else {
        fn_0030c174(&local_7c,param_1[0x72] + 0x14);
      }
      iVar9 = param_1[0x73];
      iVar13 = param_1[0xc];
      uVar4 = (**(code **)(*param_1 + 0x138))(param_1);
      iVar2 = fn_006a7f8c(iVar9 + 0x2c);
      if (iVar2 == 0) {
        uVar5 = fn_006f7a9c(DAT_008977e0);
        fn_00279408(&local_64,uVar5,(int)sVar1);
        *(float *)(iVar9 + 0x2c) = local_64;
        *(float *)(iVar9 + 0x30) = local_60;
        *(float *)(iVar9 + 0x34) = fStack_5c;
      }
      iVar2 = param_1[9];
      iVar7 = param_1[10];
      fVar12 = 0.0;
      *(float *)(iVar9 + 0x10) = *pfVar8;
      *(int *)(iVar9 + 0x14) = iVar2;
      *(int *)(iVar9 + 0x18) = iVar7;
      *(undefined4 *)(iVar9 + 0x1c) = 0;
      *(int *)(iVar9 + 0x20) = iVar13;
      *(undefined4 *)(iVar9 + 0x24) = 0;
      fn_002cd59c(uVar4);
      *(undefined4 *)(iVar9 + 0x28) = in_s0;
      *(char *)(iVar9 + 0x38) = (char)uVar4;
      *(undefined4 *)(iVar9 + 0x3a) = local_7c;
      *(undefined4 *)(iVar9 + 0x3e) = local_78;
      *(undefined4 *)(iVar9 + 0x42) = local_74;
      *(undefined4 *)(iVar9 + 0x46) = local_70;
      *(undefined2 *)(iVar9 + 0x4a) = (undefined2)local_6c;
      fVar14 = *(float *)(param_1[0x73] + 0x28);
      iVar2 = fn_006f7a5c(DAT_008977e0);
      iVar9 = *(int *)(iVar2 + 0x20);
      iVar13 = *(int *)(iVar2 + 0x24);
      fVar15 = 25.0;
      param_1[0x77] = *(int *)(iVar2 + 0x1c);
      param_1[0x78] = iVar9;
      param_1[0x79] = iVar13;
      if (param_1[0x72] == 0) {
        fVar11 = *pfVar8 + fVar12;
        fVar12 = (float)param_1[10] + fVar12;
        fVar10 = (float)param_1[9] + fVar14 * 15.0;
        local_44 = fVar11;
        local_40 = fVar10;
        local_3c = fVar12;
        fn_006a8048(param_1);
        fVar10 = *pfVar8 + fVar10 * 70.0 * fVar14;
        fVar12 = (float)param_1[10] + fVar12 * 70.0 * fVar14;
        local_60 = (float)param_1[9] + fVar11 * 70.0 * fVar14 + fVar14 * fVar15;
        local_64 = fVar10;
        fStack_5c = fVar12;
        uVar4 = fn_006f7a5c(DAT_008977e0);
        fn_001d6a64(uVar4,&local_44,&local_64);
      }
      else {
        fVar11 = *pfVar8 + fVar12;
        fVar12 = (float)param_1[10] + fVar12;
        fVar10 = (float)param_1[9] + fVar14 * 25.0;
        local_44 = fVar11;
        local_40 = fVar10;
        local_3c = fVar12;
        fn_006a8048(param_1);
        fVar10 = *pfVar8 + fVar10 * 80.0 * fVar14;
        fVar12 = (float)param_1[10] + fVar12 * 80.0 * fVar14;
        local_60 = (float)param_1[9] + fVar11 * 80.0 * fVar14 + fVar14 * fVar15;
        local_64 = fVar10;
        fStack_5c = fVar12;
        uVar4 = fn_006f7a5c(DAT_008977e0);
        fn_001d6a64(uVar4,&local_44,&local_64);
      }
      fVar14 = 0.03;
      param_1[0x76] = 0x3cf5c28f;
      (**(code **)(*param_2 + 0x54))(param_2,0);
      iVar2 = fn_00145b00(0x2c,&DAT_00812c8c);
      piVar3 = (int *)0x0;
      if (iVar2 != 0) {
        fn_006a8048(param_1);
        local_50 = fVar14 * -2.0;
        local_4c = fVar12 * -2.0;
        fStack_48 = fVar10 * -2.0;
        piVar3 = (int *)fn_00288d30(iVar2,param_1,&local_50);
      }
      piVar6 = (int *)param_1[0x69];
      if (piVar6 != piVar3) {
        if (piVar6 != (int *)0x0) {
          (**(code **)(*piVar6 + 4))(piVar6);
        }
        param_1[0x69] = (int)piVar3;
      }
      fn_00289204(param_1[0x69],1);
      (**(code **)(param_1[0x67] + 0x14))(param_1 + 0x67);
      param_1[0x4e] = param_1[0x4e] & 0xfffffff7U | 2;
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
  }
  return 0;
}



undefined4 fn_00379e54(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  fn_00121838(DAT_00897800,DAT_00891870,1);
  uVar2 = fn_002113c8(param_1,param_2);
  (**(code **)(*param_1 + 0x54))(param_1,1);
  (**(code **)(*param_1 + 0xe0))(param_1,0);
  iVar1 = DAT_008c8f34;
  iVar3 = DAT_008c8f30;
  param_1[0x3b] = DAT_008c8f2c;
  param_1[0x3c] = iVar3;
  param_1[0x3d] = iVar1;
  *(undefined1 *)((int)param_1 + 0x1d5) = 0;
  fn_006f7a70(DAT_008977e0);
  iVar3 = fn_002ff310(2);
  param_1[0x4f] = iVar3;
  return uVar2;
}



void fn_00379dcc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 auStack_18 [12];
  
  iVar5 = *(int *)(param_1 + 0x1cc);
  iVar1 = fn_006a7f8c(iVar5 + 0x2c);
  if (iVar1 != 0) {
    uVar2 = fn_006f7a9c(DAT_008977e0);
    fn_00279704(uVar2,iVar5 + 0x2c);
    puVar3 = (undefined4 *)fn_001c6d34(auStack_18);
    uVar2 = puVar3[1];
    uVar4 = puVar3[2];
    *(undefined4 *)(iVar5 + 0x2c) = *puVar3;
    *(undefined4 *)(iVar5 + 0x30) = uVar2;
    *(undefined4 *)(iVar5 + 0x34) = uVar4;
  }
  fn_00289204(iVar5,0);
  fn_001d9f9c(param_1);
  fn_001218d4(DAT_00897800,DAT_00891870);
  return;
}


