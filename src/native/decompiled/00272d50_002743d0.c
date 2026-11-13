#include "00272d50_002743d0.h"



undefined1 * fn_002743d0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_170 [28];
  short local_154;
  undefined1 local_142;
  char *local_80;
  char *local_7c;
  undefined1 auStack_70 [4];
  undefined4 local_6c;
  char *local_68;
  undefined1 auStack_60 [40];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [16];
  
  iVar7 = *(int *)(param_1 + 0x20);
  fn_0017821c(auStack_170,iVar7 + 0x1f0,0xf0);
  fn_0020bbc4(auStack_38,auStack_170);
  iVar6 = (int)local_154;
  iVar1 = fn_00154ac8(0x46);
  iVar2 = fn_0016ba34(DAT_00897800,DAT_008987a4,(char *)&DAT_0027479c,0);
  fn_002309d8(auStack_70,3,local_142,0);
  local_80 = (char *)fn_0026fcd0(param_1,(char *)&DAT_002747bc);
  uVar3 = DAT_00897800;
  local_68 = (char *)&DAT_002747c4;
  if (iVar2 != 0) {
    fn_0015b0dc();
  }
  fn_0015b0dc(auStack_70);
  uVar3 = fn_0016ba34(uVar3,DAT_008987a4,local_68,0);
  fn_00190d50(local_80,uVar3);
  uVar3 = fn_00661094(iVar6);
  fn_00230e40(uVar3,0);
  fn_0015b0dc();
  iVar4 = fn_0015b064(iVar6);
  uVar3 = fn_0026fcd0(param_1,(char *)&DAT_002747d0);
  local_7c = (char *)&DAT_002747e4;
  local_6c = DAT_00897800;
  if (iVar2 != 0) {
    fn_0015b0dc();
  }
  if (iVar4 != 0) {
    fn_0015b0dc(iVar4);
  }
  uVar5 = fn_0016ba34(local_6c,DAT_008987a4,local_7c,0);
  fn_00190d50(uVar3,uVar5);
  uVar3 = fn_006bfe90(auStack_34);
  uVar3 = fn_002305a4(uVar3,0);
  uVar5 = fn_0026fcd0(param_1,(char *)&DAT_002747f4);
  fn_00190d50(uVar5,uVar3);
  fn_00275e0c(param_1,0);
  fn_00271be0(param_1,iVar6);
  uVar3 = fn_002ea244((int)(short)*(undefined4 *)(iVar7 + 0x2e0));
  fn_0018a618(auStack_70,8,7,&DAT_00274804,uVar3);
  local_7c = (char *)fn_0026fcd0(param_1,(char *)&DAT_0027480c);
  uVar3 = DAT_00897800;
  local_80 = (char *)&DAT_00274814;
  fn_0015b0dc(auStack_70);
  uVar3 = fn_0016ba34(uVar3,DAT_008987a4,local_80,0);
  fn_00190d50(local_7c,uVar3);
  uVar3 = fn_002ea2b0((int)(short)*(undefined4 *)(iVar7 + 0x2e0));
  fn_0018a618(auStack_60,7,6,&DAT_00274820,uVar3);
  local_80 = (char *)fn_0026fcd0(param_1,&DAT_00274828);
  uVar3 = DAT_00897800;
  fn_0015b0dc(auStack_60);
  uVar3 = fn_0016ba34(uVar3,DAT_008987a4,(char *)&DAT_00274830,0);
  fn_00190d50(local_80,uVar3);
  fn_00273da8(param_1,auStack_170,iVar2);
  fn_0017d96c(&local_80,0x40,0x3f,(char *)&DAT_002726c4,iVar6);
  uVar3 = fn_0016ba34(DAT_00897800,DAT_00898784,&local_80,0);
  uVar5 = fn_0026fcd0(param_1,(char *)&DAT_002726e0);
  fn_00190d50(uVar5,uVar3);
  fn_00271a14(param_1,iVar6);
  iVar2 = fn_0026fcd0(param_1,(char *)&DAT_00271ee4);
  if (iVar2 != 0) {
    fn_00661714(iVar6);
    uVar3 = fn_0023051c();
    fn_00190d50(iVar2,uVar3);
  }
  fn_00272408(param_1,iVar6);
  fn_00271e64(param_1,(char *)&DAT_0027484c,iVar1 != 0);
  fn_00271e64(param_1,(char *)&DAT_00274854,0);
  iVar1 = fn_00154ac8(0x47);
  if (iVar1 != 0) {
    uVar3 = 0;
    uVar5 = 0x3f800000;
    iVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14));
    iVar1 = (**(code **)(**(int **)(iVar1 + 0x10) + 0x2c))(*(int **)(iVar1 + 0x10),(char *)&DAT_00274864,1);
    *(undefined4 *)(iVar1 + 0x34) = uVar3;
    *(undefined4 *)(iVar1 + 0x38) = uVar5;
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xef | 0x10;
    fn_00271e64(param_1,(char *)&DAT_00274870,0);
  }
  fn_00271e64(param_1,(char *)&DAT_0027487c,0);
  iVar1 = fn_00154ac8(0x39);
  if (iVar1 != 0) {
    fn_00273bc0(param_1,iVar6);
  }
  return auStack_38;
}



void fn_00272d50(int param_1)

{
  short sVar1;
  undefined1 uVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  uint in_fpscr;
  float fVar13;
  undefined1 auStack_88 [4];
  char *local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78 [4];
  undefined1 auStack_68 [36];
  int local_44;
  undefined1 auStack_40 [28];
  
  iVar11 = *(int *)(param_1 + 0x20);
  uVar4 = fn_002aae80(iVar11);
  if (*(char *)(iVar11 + 0x36c) == '\0') {
    iVar5 = fn_0016ba34(DAT_00897800,DAT_008987a4,(char *)&DAT_0027317c,0);
  }
  else {
    iVar5 = fn_0016ba34(DAT_00897800,DAT_008987a4,(char *)&DAT_00273168,0);
  }
  local_44 = fn_00154ac8(0x46);
  uVar2 = fn_002aaddc(iVar11);
  fn_002309d8(auStack_40,4,uVar2,0);
  local_80 = fn_0026fcd0(param_1,(char *)&DAT_00273194);
  uVar6 = DAT_00897800;
  local_84 = auStack_40;
  if (iVar5 != 0) {
    fn_0015b0dc();
  }
  fn_0015b0dc(local_84);
  uVar6 = fn_0016ba34(uVar6,DAT_008987a4,(char *)&DAT_0027319c,0);
  fn_00190d50(local_80,uVar6);
  sVar1 = (short)uVar4;
  iVar7 = (int)sVar1;
  uVar6 = fn_00661094();
  local_84 = (char *)fn_00230e40(uVar6,0);
  iVar8 = fn_0015b064(iVar7);
  fn_0015b0dc(local_84);
  uVar6 = fn_0026fcd0(param_1,(char *)&DAT_002731a8);
  local_84 = (char *)&DAT_002731bc;
  local_78[0] = DAT_00897800;
  if (iVar5 != 0) {
    fn_0015b0dc();
  }
  if (iVar8 != 0) {
    fn_0015b0dc(iVar8);
  }
  uVar9 = fn_0016ba34(local_78[0],DAT_008987a4,local_84,0);
  fn_00190d50(uVar6,uVar9);
  uVar6 = fn_002aad7c(iVar11);
  uVar6 = fn_002305a4(uVar6,0);
  uVar9 = fn_0026fcd0(param_1,(char *)&DAT_002731cc);
  fn_00190d50(uVar9,uVar6);
  sVar3 = fn_002aa7c0(iVar11);
  uVar2 = fn_002aac04(iVar11);
  fn_00275e0c(param_1,uVar2,(int)sVar3);
  fn_00271be0(param_1,iVar7);
  uVar6 = fn_002aa76c(iVar11);
  fn_0018a618(local_78,8,7,&DAT_002731dc,uVar6);
  local_80 = fn_0026fcd0(param_1,(char *)&DAT_002731e4);
  uVar6 = DAT_00897800;
  local_84 = (char *)&DAT_002731ec;
  fn_0015b0dc(local_78);
  uVar6 = fn_0016ba34(uVar6,DAT_008987a4,local_84,0);
  fn_00190d50(local_80,uVar6);
  uVar6 = fn_002aad28(iVar11);
  fn_0018a618(auStack_68,7,6,&DAT_002731f8,uVar6);
  local_80 = fn_0026fcd0(param_1,&DAT_00273200);
  local_7c = DAT_00897800;
  fn_0015b0dc(auStack_68);
  uVar6 = fn_0016ba34(local_7c,DAT_008987a4,(char *)&DAT_00273208,0);
  fn_00190d50(local_80,uVar6);
  fn_00273ff0(param_1,iVar11,iVar5);
  fn_0017d96c(auStack_88,0x40,0x3f,(char *)&DAT_002726c4,uVar4);
  uVar6 = fn_0016ba34(DAT_00897800,DAT_00898784,auStack_88,0);
  uVar9 = fn_0026fcd0(param_1,(char *)&DAT_002726e0);
  fn_00190d50(uVar9,uVar6);
  fn_00271a14(param_1,uVar4);
  iVar5 = fn_0026fcd0(param_1,(char *)&DAT_00271ee4);
  if (iVar5 != 0) {
    fn_00661714(iVar7);
    uVar4 = fn_0023051c();
    fn_00190d50(iVar5,uVar4);
  }
  iVar5 = fn_00661518((int)sVar1);
  if (iVar5 == 0) {
    iVar5 = (int)sVar1;
  }
  fn_00272408(param_1,iVar5);
  uVar4 = 0;
  bVar12 = false;
  iVar5 = fn_00154ac8(0x48);
  if ((iVar5 != 0) && (iVar5 = fn_006b1384(iVar11), iVar5 != 0)) {
    iVar5 = fn_006f6fe8(*(undefined4 *)(DAT_008977e0 + 0x40));
    bVar12 = iVar5 == 0;
    if (bVar12) goto LAB_00273100;
  }
  if (local_44 != 0) {
    uVar4 = 1;
  }
LAB_00273100:
  fn_00271e64(param_1,(char *)&DAT_00273228,uVar4);
  fn_00271e64(param_1,(char *)&DAT_00273230,bVar12);
  bVar12 = false;
  iVar5 = fn_00154ac8(0x47);
  if (iVar5 != 0) {
    uVar10 = fn_002aacd0(iVar11);
    if (100 < uVar10) {
      uVar10 = 100;
    }
    bVar12 = *(char *)(iVar11 + 0x36c) != '\0';
    uVar4 = 0x3f800000;
    fVar13 = (float)VectorUnsignedToFloat(uVar10,(byte)(in_fpscr >> 0x16) & 3);
    fVar13 = fVar13 * 0.01;
    iVar11 = fn_00178f9c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14));
    iVar11 = (**(code **)(**(int **)(iVar11 + 0x10) + 0x2c))(*(int **)(iVar11 + 0x10),(char *)&DAT_002732f0,1)
    ;
    *(float *)(iVar11 + 0x34) = fVar13;
    *(undefined4 *)(iVar11 + 0x38) = uVar4;
    *(byte *)(iVar11 + 0x44) = *(byte *)(iVar11 + 0x44) & 0xef | 0x10;
    fn_00271e64(param_1,(char *)&DAT_002732fc);
  }
  fn_00271e64(param_1,(char *)&DAT_00273308,bVar12);
  iVar11 = fn_00154ac8(0x39);
  if (iVar11 != 0) {
    fn_00273bc0(param_1,iVar7);
  }
  return;
}


