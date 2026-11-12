#include "00178b78_00178f9c.h"



undefined4 fn_00178f9c(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = fn_00183970(param_1,*(undefined4 *)(param_1 + 0x38),param_1 + 0x38,param_2);
  return *(undefined4 *)(iVar1 + 0x10);
}



undefined4 fn_00178f90(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x6c);
  iVar1 = fn_00183970(iVar1,*(undefined4 *)(iVar1 + 0x38),iVar1 + 0x38,
                       *(undefined4 *)(param_1 + 0x68));
  return *(undefined4 *)(iVar1 + 0x10);
}



undefined4 fn_00178eec(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00183970(param_1,*(undefined4 *)(param_1 + 0x38),param_1 + 0x38,param_2);
  if (*(char *)(iVar1 + 5) != param_3) {
    *(char *)(iVar1 + 5) = (char)param_3;
    if (*(int *)(iVar1 + 0xc) == 0) {
      if (param_3 == 0) {
        uVar2 = fn_0017a088(*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(iVar1 + 0x18));
      }
      else {
        uVar2 = fn_0016aae0(*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(iVar1 + 0x10),
                             *(undefined4 *)(iVar1 + 8));
      }
    }
    else if (param_3 == 0) {
      uVar2 = fn_0017a088(*(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(iVar1 + 0x18));
    }
    else {
      uVar2 = fn_0016aae0(*(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(iVar1 + 0x10),
                           *(undefined4 *)(iVar1 + 8));
    }
    *(undefined4 *)(iVar1 + 0x18) = uVar2;
  }
  return 1;
}



void fn_00178b7c(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  int iVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  undefined4 local_38;
  undefined1 local_34 [32];
  
  fn_0018cc74(1,0x10,0x14);
  fn_0018cc74(0,0x14,0x18);
  uVar2 = fn_0017484c(DAT_008977e4);
  local_38 = 0x20;
  uVar13 = 0;
  uVar9 = 0x43340000;
  do {
    iVar3 = (int)(char)local_38;
    uVar8 = iVar3 - 0x10;
    bVar11 = uVar8 < 4;
    if (!bVar11) {
      uVar8 = iVar3 - 0x18;
    }
    if ((bVar11 || uVar8 < 4) || (iVar3 == 0x20 || iVar3 == 0x22)) {
      iVar3 = 1;
    }
    else {
      iVar3 = 0;
    }
    piVar4 = (int *)fn_00175dcc(uVar2,&local_38);
    uVar8 = uVar9;
    if (piVar4 != (int *)0x0) {
      fn_0017fe34();
      if (iVar3 == 0) {
        uVar9 = (uint)((ulonglong)uVar13 >> 0x20);
        fn_0017fe34();
      }
      (**(code **)(*piVar4 + 0x14))(piVar4,1);
      fn_00179928(piVar4);
      piVar4[7] = uVar9;
      fn_00187f94(piVar4);
      if (piVar4[0x14] == 0) {
        uVar6 = fn_00190e98(DAT_008977e4);
        piVar7 = (int *)fn_0019bab8(uVar6,iVar3);
        iVar3 = piVar7[1];
        iVar5 = piVar7[2];
        piVar4[3] = *piVar7;
        piVar4[4] = iVar3;
        piVar4[5] = iVar5;
        iVar5 = (int)(char)local_38;
        iVar3 = fn_00174834(DAT_008977e4);
        if (*(char *)(iVar3 + iVar5 * 8 + 0x18450b) == '\0') {
          (**(code **)(*piVar4 + 0x10))(piVar4,0xb,0);
        }
        else {
          (**(code **)(*piVar4 + 0x10))(piVar4,8);
        }
      }
      else {
        local_34[0] = fn_001748ec(piVar4);
        iVar3 = fn_00182e2c(uVar2,local_34);
        (**(code **)(*piVar4 + 0x14))(piVar4,(int)*(char *)(iVar3 + 0x34));
      }
    }
    iVar3 = (int)((ulonglong)uVar13 >> 0x20);
    cVar1 = (char)local_38 + '\x01';
    local_38 = CONCAT31(((unsigned int)(local_38) >> 8) & 0xffffff,cVar1);
    uVar9 = uVar8;
  } while (cVar1 < '\"');
  uVar2 = fn_0017484c(DAT_008977e4);
  local_38 = 0x22;
  uVar14 = (ulonglong)uVar8;
  do {
    iVar5 = (int)(char)local_38;
    uVar9 = iVar5 - 0x10;
    bVar11 = uVar9 < 4;
    if (!bVar11) {
      uVar9 = iVar5 - 0x18;
    }
    if ((bVar11 || uVar9 < 4) || (iVar5 == 0x20 || iVar5 == 0x22)) {
      iVar5 = 1;
    }
    else {
      iVar5 = 0;
    }
    piVar4 = (int *)fn_00175d88(uVar2,&local_38);
    if (piVar4 != (int *)0x0) {
      iVar10 = (int)uVar14;
      fn_0017fe34();
      if (iVar5 == 0) {
        iVar12 = iVar3;
        fn_0017fe34();
        iVar10 = iVar3;
        iVar3 = iVar12;
      }
      (**(code **)(*piVar4 + 0x14))(piVar4,1);
      fn_00179928(piVar4);
      piVar4[7] = iVar10;
      fn_00187f94(piVar4);
      if (piVar4[0x14] == 0) {
        uVar6 = fn_00190e98(DAT_008977e4);
        piVar7 = (int *)fn_00190ec0(uVar6,iVar5);
        iVar5 = piVar7[1];
        iVar10 = piVar7[2];
        piVar4[3] = *piVar7;
        piVar4[4] = iVar5;
        piVar4[5] = iVar10;
        iVar10 = (int)(char)local_38;
        iVar5 = fn_00174834(DAT_008977e4);
        if (*(char *)(iVar5 + iVar10 * 8 + 0x18450b) == '\0') {
          (**(code **)(*piVar4 + 0x10))(piVar4,0xb,0);
        }
        else {
          (**(code **)(*piVar4 + 0x10))(piVar4,8);
        }
      }
      else {
        local_34[0] = fn_001748ec(piVar4);
        iVar5 = fn_00182e2c(uVar2,local_34);
        (**(code **)(*piVar4 + 0x14))(piVar4,(int)*(char *)(iVar5 + 0x34));
      }
    }
    cVar1 = (char)local_38 + '\x01';
    local_38 = CONCAT31(((unsigned int)(local_38) >> 8) & 0xffffff,cVar1);
  } while (cVar1 < '$');
  return;
}



void fn_00178b78(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  int iVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  undefined4 uStack_38;
  undefined1 auStack_34 [32];
  
  fn_0018cc74(1,0x10,0x14);
  fn_0018cc74(0,0x14,0x18);
  uVar2 = fn_0017484c(DAT_008977e4);
  uStack_38 = 0x20;
  uVar13 = 0;
  uVar9 = 0x43340000;
  do {
    iVar3 = (int)(char)uStack_38;
    uVar8 = iVar3 - 0x10;
    bVar11 = uVar8 < 4;
    if (!bVar11) {
      uVar8 = iVar3 - 0x18;
    }
    if ((bVar11 || uVar8 < 4) || (iVar3 == 0x20 || iVar3 == 0x22)) {
      iVar3 = 1;
    }
    else {
      iVar3 = 0;
    }
    piVar4 = (int *)fn_00175dcc(uVar2,&uStack_38);
    uVar8 = uVar9;
    if (piVar4 != (int *)0x0) {
      fn_0017fe34();
      if (iVar3 == 0) {
        uVar9 = (uint)((ulonglong)uVar13 >> 0x20);
        fn_0017fe34();
      }
      (**(code **)(*piVar4 + 0x14))(piVar4,1);
      fn_00179928(piVar4);
      piVar4[7] = uVar9;
      fn_00187f94(piVar4);
      if (piVar4[0x14] == 0) {
        uVar6 = fn_00190e98(DAT_008977e4);
        piVar7 = (int *)fn_0019bab8(uVar6,iVar3);
        iVar3 = piVar7[1];
        iVar5 = piVar7[2];
        piVar4[3] = *piVar7;
        piVar4[4] = iVar3;
        piVar4[5] = iVar5;
        iVar5 = (int)(char)uStack_38;
        iVar3 = fn_00174834(DAT_008977e4);
        if (*(char *)(iVar3 + iVar5 * 8 + 0x18450b) == '\0') {
          (**(code **)(*piVar4 + 0x10))(piVar4,0xb,0);
        }
        else {
          (**(code **)(*piVar4 + 0x10))(piVar4,8);
        }
      }
      else {
        auStack_34[0] = fn_001748ec(piVar4);
        iVar3 = fn_00182e2c(uVar2,auStack_34);
        (**(code **)(*piVar4 + 0x14))(piVar4,(int)*(char *)(iVar3 + 0x34));
      }
    }
    iVar3 = (int)((ulonglong)uVar13 >> 0x20);
    cVar1 = (char)uStack_38 + '\x01';
    uStack_38 = CONCAT31(((unsigned int)(uStack_38) >> 8) & 0xffffff,cVar1);
    uVar9 = uVar8;
  } while (cVar1 < '\"');
  uVar2 = fn_0017484c(DAT_008977e4);
  uStack_38 = 0x22;
  uVar14 = (ulonglong)uVar8;
  do {
    iVar5 = (int)(char)uStack_38;
    uVar9 = iVar5 - 0x10;
    bVar11 = uVar9 < 4;
    if (!bVar11) {
      uVar9 = iVar5 - 0x18;
    }
    if ((bVar11 || uVar9 < 4) || (iVar5 == 0x20 || iVar5 == 0x22)) {
      iVar5 = 1;
    }
    else {
      iVar5 = 0;
    }
    piVar4 = (int *)fn_00175d88(uVar2,&uStack_38);
    if (piVar4 != (int *)0x0) {
      iVar10 = (int)uVar14;
      fn_0017fe34();
      if (iVar5 == 0) {
        iVar12 = iVar3;
        fn_0017fe34();
        iVar10 = iVar3;
        iVar3 = iVar12;
      }
      (**(code **)(*piVar4 + 0x14))(piVar4,1);
      fn_00179928(piVar4);
      piVar4[7] = iVar10;
      fn_00187f94(piVar4);
      if (piVar4[0x14] == 0) {
        uVar6 = fn_00190e98(DAT_008977e4);
        piVar7 = (int *)fn_00190ec0(uVar6,iVar5);
        iVar5 = piVar7[1];
        iVar10 = piVar7[2];
        piVar4[3] = *piVar7;
        piVar4[4] = iVar5;
        piVar4[5] = iVar10;
        iVar10 = (int)(char)uStack_38;
        iVar5 = fn_00174834(DAT_008977e4);
        if (*(char *)(iVar5 + iVar10 * 8 + 0x18450b) == '\0') {
          (**(code **)(*piVar4 + 0x10))(piVar4,0xb,0);
        }
        else {
          (**(code **)(*piVar4 + 0x10))(piVar4,8);
        }
      }
      else {
        auStack_34[0] = fn_001748ec(piVar4);
        iVar5 = fn_00182e2c(uVar2,auStack_34);
        (**(code **)(*piVar4 + 0x14))(piVar4,(int)*(char *)(iVar5 + 0x34));
      }
    }
    cVar1 = (char)uStack_38 + '\x01';
    uStack_38 = CONCAT31(((unsigned int)(uStack_38) >> 8) & 0xffffff,cVar1);
  } while (cVar1 < '$');
  return;
}


