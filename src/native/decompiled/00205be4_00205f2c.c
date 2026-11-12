#include "00205be4_00205f2c.h"



undefined4 fn_00205f2c(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined1 auStack_188 [128];
  undefined1 auStack_108 [128];
  undefined1 auStack_88 [100];
  undefined1 auStack_24 [12];
  
  iVar1 = fn_006a7b6c(DAT_008977e4);
  if (iVar1 == 2) {
    fn_00129014(1);
  }
  param_1[0x21] = param_2;
  fn_00207c98(param_1);
  iVar1 = fn_00145b00(8,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_00128f40();
  }
  piVar7 = (int *)param_1[0x2e];
  if (piVar7 != piVar2) {
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 4))(piVar7);
    }
    param_1[0x2e] = (int)piVar2;
  }
  uVar3 = fn_0011c1b4(L"rom:/data/Battle/Param/ScriptSetting.nut",0,0,0,0,0,0,0,5);
  iVar1 = fn_00145aac();
  if (iVar1 == 1) {
    uVar4 = fn_0012a26c(uVar3);
    uVar5 = fn_00145ac0(uVar3);
    fn_00128ee0(param_1[0x2e],uVar5,uVar4);
    fn_0012d73c(uVar3);
  }
  else {
    fn_0012d73c();
  }
  uVar3 = 1;
  if (((param_1[0x21] != 0) && (*(char *)(param_1[0x21] + 4) == '\0')) &&
     (pcVar6 = (char *)fn_006ba918(), *pcVar6 == '\v')) {
    uVar3 = 0;
  }
  fn_002083b4(param_1,uVar3);
  iVar1 = param_1[4];
  fn_0011d1bc(iVar1);
  fn_0011e6e4(iVar1);
  uVar8 = fn_0012a26c(param_1[0x39]);
  uVar3 = fn_00145ac0(param_1[0x39]);
  fn_001ce928(uVar3,(char *)&DAT_00206200,(int)uVar8,(int)((ulonglong)uVar8 >> 0x20),(char *)&DAT_00206200,iVar1);
  iVar1 = fn_005f6644(iVar1,(char *)&DAT_0020620c,*(undefined4 *)param_1[0x3a],
                       ((undefined4 *)param_1[0x3a])[1]);
  uVar3 = 0;
  if (iVar1 != 0) {
    fn_001cf08c(param_1,(char *)&DAT_0020621c);
    iVar1 = (**(code **)(*param_1 + 0x38))(param_1,(char *)&DAT_0020620c);
    uVar3 = 0;
    if (((iVar1 != 0) &&
        (iVar1 = (**(code **)(*param_1 + 0x38))(param_1,(char *)&DAT_00206224), uVar3 = 0, iVar1 != 0)) &&
       (iVar1 = fn_006adef0(param_1,auStack_24), uVar3 = 0, iVar1 != 0)) {
      fn_00101a50(auStack_188,0x40,L"rom:/data/Script/Battle/Script/%s.nut",auStack_24);
      iVar1 = fn_006a8cbc(param_1,auStack_188,(char *)&DAT_00206230);
      uVar3 = 0;
      if (iVar1 != 0) {
        fn_00101a50(auStack_108,0x40,L"rom:/data/Script/Battle/Pos/%s.xbb.gz",auStack_24);
        fn_001028d4(auStack_88,(char *)&DAT_002062cc,auStack_24);
        *(undefined4 *)param_1[0x22] = 0;
        iVar1 = fn_00145b00(8,&DAT_00812c8c);
        uVar3 = 0;
        if (iVar1 != 0) {
          uVar3 = fn_00692eac();
        }
        *(undefined4 *)param_1[0x25] = uVar3;
        fn_00238fec(auStack_108,auStack_88,param_1[0x22],uVar3);
        iVar1 = (**(code **)(*param_1 + 0x38))(param_1,&LAB_0020623c);
        uVar3 = 0;
        if (iVar1 != 0) {
          param_1[0x2f] = 0;
          uVar3 = 1;
        }
      }
    }
  }
  return uVar3;
}



undefined4 * fn_00205da0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint local_20 [3];
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined4 *)((int)param_1 + 10) = *(undefined4 *)((int)param_2 + 10);
  *(undefined4 *)((int)param_1 + 0xe) = *(undefined4 *)((int)param_2 + 0xe);
  *(undefined4 *)((int)param_1 + 0x12) = *(undefined4 *)((int)param_2 + 0x12);
  *(undefined4 *)((int)param_1 + 0x16) = *(undefined4 *)((int)param_2 + 0x16);
  *(undefined1 *)((int)param_1 + 0x1a) = *(undefined1 *)((int)param_2 + 0x1a);
  fn_00166824((int)param_1 + 0x1b,(int)param_2 + 0x1b);
  *(undefined2 *)(param_1 + 9) = *(undefined2 *)(param_2 + 9);
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
  *(undefined1 *)((int)param_1 + 0x3d) = *(undefined1 *)((int)param_2 + 0x3d);
  *(undefined1 *)((int)param_1 + 0x3e) = *(undefined1 *)((int)param_2 + 0x3e);
  uVar3 = param_2[0x11];
  uVar11 = param_2[0x12];
  uVar12 = param_2[0x13];
  uVar13 = param_2[0x14];
  uVar14 = param_2[0x15];
  uVar15 = param_2[0x16];
  uVar16 = param_2[0x17];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar3;
  param_1[0x12] = uVar11;
  param_1[0x13] = uVar12;
  param_1[0x14] = uVar13;
  param_1[0x15] = uVar14;
  param_1[0x16] = uVar15;
  param_1[0x17] = uVar16;
  piVar8 = param_1 + 0x18;
  *piVar8 = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  piVar9 = param_2 + 0x18;
  local_20[0] = (param_2[0x19] - *piVar9) / 0xc;
  puVar6 = local_20;
  if (local_20[0] < 0x20) {
    puVar6 = local_20 + 1;
  }
  local_20[1] = 0x20;
  uVar10 = *puVar6;
  puVar1 = (undefined4 *)fn_00100fc6(uVar10 * 0xc,0);
  *piVar8 = (int)puVar1;
  puVar7 = (undefined4 *)param_2[0x19];
  for (puVar4 = (undefined4 *)*piVar9; puVar4 != puVar7; puVar4 = puVar4 + 3) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *puVar4;
      puVar1[1] = puVar4[1];
      puVar1[2] = puVar4[2];
    }
    puVar1 = puVar1 + 3;
  }
  iVar2 = param_2[0x19];
  iVar5 = *piVar9;
  param_1[0x1a] = *piVar8 + uVar10 * 0xc;
  param_1[0x19] = *piVar8 + ((iVar2 - iVar5) / 0xc) * 0xc;
  return param_1;
}



void fn_00205d34(undefined4 *param_1)

{
  *param_1 = &DAT_0081c3ec;
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 4))();
  }
  fn_002feef8(param_1);
  return;
}



undefined4 * fn_00205be4(undefined4 *param_1,undefined1 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  *param_1 = &DAT_0081c3ec;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  uVar4 = 0;
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar3 = fn_00303afc(&DAT_008c62fc), iVar3 != 0)) {
    DAT_008f9e2c = uVar4;
    DAT_008f9e30 = uVar4;
    DAT_008f9e34 = uVar4;
  }
  uVar2 = DAT_008f9e34;
  uVar1 = DAT_008f9e30;
  param_1[3] = DAT_008f9e2c;
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar3 = fn_00303afc(&DAT_008c62fc), iVar3 != 0)) {
    DAT_008f9e2c = uVar4;
    DAT_008f9e30 = uVar4;
    DAT_008f9e34 = uVar4;
  }
  uVar1 = DAT_008f9e34;
  uVar4 = DAT_008f9e30;
  param_1[6] = DAT_008f9e2c;
  param_1[7] = uVar4;
  param_1[8] = uVar1;
  if (((DAT_008c62f8 & 1) == 0) && (iVar3 = fn_00303afc(&DAT_008c62f8), iVar3 != 0)) {
    DAT_008f9e20 = 0x3f800000;
    DAT_008f9e24 = 0x3f800000;
    DAT_008f9e28 = 0x3f800000;
  }
  uVar2 = DAT_008f9e28;
  uVar1 = DAT_008f9e24;
  uVar4 = DAT_008f9e20;
  param_1[0xc] = 0;
  param_1[9] = uVar4;
  param_1[10] = uVar1;
  param_1[0xb] = uVar2;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)((int)param_1 + 0x35) = param_2;
  *(undefined1 *)((int)param_1 + 0x36) = 1;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  return param_1;
}


