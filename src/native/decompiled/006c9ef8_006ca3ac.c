#include "006c9ef8_006ca3ac.h"



void fn_006ca3ac(undefined4 param_1,int param_2,short param_3,int param_4)

{
  uint uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined2 *puVar7;
  uint in_fpscr;
  float fVar8;
  undefined2 *local_3c;
  undefined2 *local_38;
  int local_34;
  undefined2 *local_30;
  undefined2 *local_2c;
  int local_28;
  undefined2 local_24 [4];
  undefined2 local_1c [4];
  
  fn_006c9754();
  fn_00301f50(param_2,0xf0);
  uVar3 = fn_00237090((int)param_3);
  *(undefined2 *)(param_2 + 0x1c) = uVar3;
  uVar2 = fn_00661570();
  if (100 < param_4) {
    param_4 = 100;
  }
  *(char *)(param_2 + 0x2e) = (char)param_4;
  uVar4 = fn_002cd49c((int)(char)((char)param_4 + -1),uVar2);
  *(undefined4 *)(param_2 + 0x30) = uVar4;
  if (*(char *)(param_2 + 0x2e) == 'x') {
    *(undefined4 *)(param_2 + 0x34) = 0;
  }
  else {
    uVar4 = fn_002cd49c((int)*(char *)(param_2 + 0x2e),uVar2);
    *(undefined4 *)(param_2 + 0x34) = uVar4;
  }
  uVar2 = fn_002376f0(*(undefined1 *)(param_2 + 0x2e),0);
  *(undefined1 *)(param_2 + 0x3c) = uVar2;
  iVar5 = fn_0066173c((int)*(short *)(param_2 + 0x1c));
  local_3c = (undefined2 *)0x0;
  local_38 = (undefined2 *)0x0;
  local_34 = 0;
  if (2 < iVar5) {
    iVar5 = 2;
  }
  fn_002377a0(&local_3c,(int)*(short *)(param_2 + 0x1c),iVar5,*(undefined1 *)(param_2 + 0x2e),0);
  uVar1 = (int)local_38 - (int)local_3c >> 1;
  if ((int)uVar1 < 1) {
    uVar6 = 0;
  }
  else {
    uVar6 = uVar1 & 1;
    if (uVar6 != 0) {
      *(undefined2 *)(param_2 + 0x44) = *local_3c;
    }
  }
  for (; (int)uVar6 < (int)uVar1; uVar6 = uVar6 + 2) {
    iVar5 = param_2 + uVar6 * 2;
    *(undefined2 *)(iVar5 + 0x44) = local_3c[uVar6];
    *(undefined2 *)(iVar5 + 0x46) = local_3c[uVar6 + 1];
  }
  local_30 = (undefined2 *)0x0;
  local_2c = (undefined2 *)0x0;
  local_28 = 0;
  local_1c[0] = fn_006617a8((int)*(short *)(param_2 + 0x1c));
  fn_0079e764(&local_30,local_1c);
  uVar4 = fn_00661714((int)*(short *)(param_2 + 0x1c));
  local_24[0] = fn_006c9598(param_1,uVar4,&local_30,0,1);
  fn_0079e764(&local_30,local_24);
  iVar5 = fn_00163868(100);
  if (iVar5 < 0x19) {
    uVar4 = fn_00661714((int)*(short *)(param_2 + 0x1c));
    local_24[0] = fn_006c9598(param_1,uVar4,&local_30,0,0);
    fn_0079e764(&local_30,local_24);
  }
  uVar1 = (int)local_2c - (int)local_30 >> 1;
  if ((int)uVar1 < 1) {
    uVar6 = 0;
  }
  else {
    uVar6 = uVar1 & 1;
    if (uVar6 != 0) {
      *(undefined2 *)(param_2 + 0x56) = *local_30;
    }
  }
  for (; (int)uVar6 < (int)uVar1; uVar6 = uVar6 + 2) {
    iVar5 = param_2 + uVar6 * 4;
    *(undefined2 *)(iVar5 + 0x56) = local_30[uVar6];
    *(undefined2 *)(iVar5 + 0x5a) = local_30[uVar6 + 1];
  }
  uVar3 = fn_00388784(*(undefined1 *)(param_2 + 0x2e),param_2);
  *(undefined2 *)(param_2 + 0x3a) = uVar3;
  uVar4 = fn_005fe128(param_2,0);
  fVar8 = (float)VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
  fn_00246880(*(undefined1 *)(param_2 + 0x2e),1);
  *(short *)(param_2 + 0x1e) = (short)(int)fVar8;
  uVar4 = fn_0020ddfc(param_2,0);
  fVar8 = (float)VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
  fn_00246880(*(undefined1 *)(param_2 + 0x2e),1);
  *(short *)(param_2 + 0x20) = (short)(int)fVar8;
  *(undefined2 *)(param_2 + 0x22) = *(undefined2 *)(param_2 + 0x1e);
  *(short *)(param_2 + 0x24) = (short)(int)fVar8;
  uVar4 = fn_0020fd10(param_2,0);
  fVar8 = (float)VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
  fn_00246880(*(undefined1 *)(param_2 + 0x2e),1);
  *(short *)(param_2 + 0x26) = (short)(int)fVar8;
  uVar4 = fn_00210174(param_2,0);
  fVar8 = (float)VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
  fn_00246880(*(undefined1 *)(param_2 + 0x2e),1);
  *(short *)(param_2 + 0x28) = (short)(int)fVar8;
  uVar4 = fn_0020e628(param_2,0);
  fVar8 = (float)VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
  fn_00246880(*(undefined1 *)(param_2 + 0x2e),1);
  *(short *)(param_2 + 0x2a) = (short)(int)fVar8;
  uVar4 = fn_0020e3a4(param_2,0);
  fVar8 = (float)VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
  fn_00246880(*(undefined1 *)(param_2 + 0x2e),1);
  *(short *)(param_2 + 0x2c) = (short)(int)fVar8;
  fn_0024f108(param_2,0);
  puVar7 = local_30;
  if (local_2c < local_30) {
    do {
      puVar7 = puVar7 + 1;
    } while (puVar7 != local_2c);
  }
  fn_001008c4(local_30,local_28 - (int)local_30 >> 1,0);
  puVar7 = local_3c;
  if (local_38 < local_3c) {
    do {
      puVar7 = puVar7 + 1;
    } while (puVar7 != local_38);
  }
  fn_001008c4(local_3c,local_34 - (int)local_3c >> 1,0);
  return;
}



int fn_006ca394(int param_1)

{
  return (int)*(short *)(*(int *)(param_1 + 0x24) + **(short **)(param_1 + 0x54) * 0x40);
}



void fn_006ca2f4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = DAT_00897800;
  iVar2 = fn_001d4f28(*(undefined1 *)(*(int *)(param_1 + 8) + 9));
  if (*(char *)(iVar2 + 7) == '\x02') {
    fn_0016ba34(uVar1,L"rom:/data/Message/DiscMessage.mes",(char *)&DAT_006ca36c,0);
    return;
  }
  if (*(char *)(iVar2 + 7) == '\x05') {
    fn_0016ba34(uVar1,L"rom:/data/Message/DiscMessage.mes",(char *)&DAT_006ca380,0);
    return;
  }
  fn_006c9998(param_1);
  return;
}



void fn_006ca25c(undefined4 param_1,int param_2,short param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = fn_006c9754(param_1,(int)param_3);
  fn_0017821c(param_2 + 0x284,iVar1 + 0x28c,0x120);
  fn_0017821c(param_2 + 0x284,iVar1 + 0x28c,0x98);
  fn_0017821c(param_2 + 0x124,iVar1 + 300,0xdc);
  *(undefined1 *)(param_2 + 0x120) = *(undefined1 *)(iVar1 + 0x128);
  fn_0017821c(param_2 + 0x3a4,iVar1 + 0x3ac,0x1a);
  *(undefined1 *)(param_2 + 0x58) = *(undefined1 *)(iVar1 + 0x60);
  *(undefined1 *)(param_2 + 0x59) = *(undefined1 *)(iVar1 + 0x61);
  *(undefined2 *)(param_2 + 0x1c) = *(undefined2 *)(iVar1 + 0x24);
  *(undefined2 *)(param_2 + 0x1e) = *(undefined2 *)(iVar1 + 0x26);
  uVar2 = *(undefined4 *)(iVar1 + 0x2c);
  uVar3 = *(undefined4 *)(iVar1 + 0x30);
  *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(iVar1 + 0x28);
  *(undefined4 *)(param_2 + 0x24) = uVar2;
  *(undefined4 *)(param_2 + 0x28) = uVar3;
  uVar2 = *(undefined4 *)(iVar1 + 0x38);
  uVar3 = *(undefined4 *)(iVar1 + 0x3c);
  *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(iVar1 + 0x34);
  *(undefined4 *)(param_2 + 0x30) = uVar2;
  *(undefined4 *)(param_2 + 0x34) = uVar3;
  return;
}



void fn_006ca224(void)

{
  fn_0016ba34(DAT_00897800,L"rom:/data/Message/DiscMessage.mes",(char *)&DAT_006ca244,0);
  return;
}



void fn_006c9ef8(int param_1,undefined4 param_2,undefined4 param_3,int param_4,short param_5)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  int iVar8;
  undefined4 uVar9;
  
  sVar1 = (short)param_3 + 1;
  psVar7 = (short *)(*(int *)(param_1 + 0x24) + param_4 * 0x40);
  psVar3 = (short *)fn_003b3780(param_2,param_3);
  *psVar3 = sVar1;
  psVar3[1] = 0;
  *(undefined1 *)(psVar3 + 2) = 1;
  *(undefined1 *)((int)psVar3 + 5) = 1;
  psVar3[3] = 100;
  psVar3[4] = sVar1;
  psVar3[5] = param_5;
  iVar4 = 0;
  do {
    psVar3[iVar4 * 7 + 6] = 1;
    psVar3[iVar4 * 7 + 7] = 0;
    sVar2 = fn_00163868(0x168);
    psVar3[iVar4 * 7 + 8] = sVar2;
    iVar8 = iVar4 + 1;
    *(undefined1 *)(psVar3 + iVar4 * 7 + 9) = *(undefined1 *)((int)psVar7 + 0xf);
    psVar3[iVar4 * 7 + 10] = 0;
    *(char *)((int)psVar3 + iVar4 * 0xe + 0x13) = (char)psVar7[8];
    *(undefined1 *)(psVar3 + iVar4 * 7 + 0xb) = *(undefined1 *)((int)psVar7 + 0xf);
    psVar3[iVar4 * 7 + 0xc] = 0;
    *(char *)((int)psVar3 + iVar4 * 0xe + 0x17) = (char)psVar7[8];
    iVar4 = iVar8;
  } while (iVar8 < 2);
  psVar3 = (short *)fn_003b2f70(param_2,param_3);
  uVar9 = 0x3f800000;
  *psVar3 = sVar1;
  psVar3[1] = 1;
  psVar3[2] = 0;
  psVar3[3] = 0x3f80;
  psVar3[4] = 300;
  if (*(char *)((int)psVar7 + 0x11) == '\0') {
    iVar4 = 0;
  }
  else {
    iVar4 = fn_00163868();
    if (iVar4 + 1 < 1) goto LAB_006ca0f4;
  }
  iVar6 = 0;
  iVar8 = (iVar4 + 1) % 10;
  iVar5 = 0;
  if (0 < iVar8) {
    do {
      iVar5 = iVar5 + 1;
      psVar3[iVar6 * 4 + 6] = sVar1;
      *(undefined4 *)(psVar3 + iVar6 * 4 + 8) = uVar9;
      iVar6 = iVar6 + 1;
    } while (iVar5 < iVar8);
  }
  for (; iVar8 < iVar4 + 1; iVar8 = iVar8 + 10) {
    psVar3[iVar6 * 4 + 6] = sVar1;
    *(undefined4 *)(psVar3 + iVar6 * 4 + 8) = uVar9;
    psVar3[(iVar6 + 1) * 4 + 6] = sVar1;
    *(undefined4 *)(psVar3 + (iVar6 + 1) * 4 + 8) = uVar9;
    psVar3[(iVar6 + 2) * 4 + 6] = sVar1;
    *(undefined4 *)(psVar3 + (iVar6 + 2) * 4 + 8) = uVar9;
    psVar3[(iVar6 + 3) * 4 + 6] = sVar1;
    *(undefined4 *)(psVar3 + (iVar6 + 3) * 4 + 8) = uVar9;
    psVar3[(iVar6 + 4) * 4 + 6] = sVar1;
    *(undefined4 *)(psVar3 + (iVar6 + 4) * 4 + 8) = uVar9;
    psVar3[(iVar6 + 5) * 4 + 6] = sVar1;
    *(undefined4 *)(psVar3 + (iVar6 + 5) * 4 + 8) = uVar9;
    psVar3[(iVar6 + 6) * 4 + 6] = sVar1;
    *(undefined4 *)(psVar3 + (iVar6 + 6) * 4 + 8) = uVar9;
    psVar3[(iVar6 + 7) * 4 + 6] = sVar1;
    *(undefined4 *)(psVar3 + (iVar6 + 7) * 4 + 8) = uVar9;
    iVar5 = iVar6 + 9;
    psVar3[(iVar6 + 8) * 4 + 6] = sVar1;
    *(undefined4 *)(psVar3 + (iVar6 + 8) * 4 + 8) = uVar9;
    psVar3[iVar5 * 4 + 6] = sVar1;
    iVar6 = iVar6 + 10;
    *(undefined4 *)(psVar3 + iVar5 * 4 + 8) = uVar9;
  }
LAB_006ca0f4:
  psVar3 = (short *)fn_003b305c(param_2,param_3);
  *psVar3 = sVar1;
  psVar3[1] = -1;
  psVar3[2] = *psVar7;
  psVar3[0x16] = (short)(char)psVar7[9];
  psVar3[0x17] = (short)*(char *)((int)psVar7 + 0x13);
  *(undefined4 *)(psVar3 + 0x18) = *(undefined4 *)(psVar7 + 10);
  *(undefined4 *)(psVar3 + 0x1a) = *(undefined4 *)(psVar7 + 0xc);
  psVar3[0x1c] = psVar7[0xe];
  psVar3[0x1d] = psVar7[0xf];
  psVar3[0xc] = 1;
  *(undefined1 *)(psVar3 + 0xd) = 1;
  *(undefined1 *)(psVar3 + 0x14) = 1;
  fn_0019bc50(psVar3 + 0x1f,psVar7 + 0x10);
  fn_00166824(psVar3 + 0x2d,psVar7 + 0x13);
  fn_00166824(psVar3 + 0x31,psVar7 + 0x17);
  psVar3[6] = 0;
  psVar3[7] = 0;
  psVar3[8] = 0;
  psVar3[9] = 0;
  psVar3[10] = 0;
  psVar3[0xb] = 0;
  psVar3[0xe] = 0;
  psVar3[0xf] = 0;
  psVar3[0x10] = 0;
  fn_006f94d0(psVar3 + 0x11);
  iVar4 = fn_00242b6c((int)psVar3[2]);
  if (iVar4 == 0) {
    psVar3[0xe] = 1;
    psVar3[0x11] = 1;
  }
  else if (iVar4 == 1) {
    psVar3[0xf] = 2;
    psVar3[0x12] = 2;
  }
  else if (iVar4 == 2) {
    psVar3[0xe] = 1;
    psVar3[0x10] = 3;
    psVar3[0x13] = 3;
  }
  psVar3[0x35] = 0;
  psVar3[0x36] = 0;
  psVar3[0x37] = 0;
  psVar3[0x38] = 0;
  psVar3[0x39] = 0;
  psVar3[0x3a] = 0;
  psVar3[0x3b] = 0;
  psVar3[0x3c] = 0;
  psVar3[0x22] = 2;
  psVar3[0x23] = 0x10;
  psVar3[0x24] = 0;
  fn_0012a2d8(psVar3 + 0x25);
  fn_0012a2d8(psVar3 + 0x29);
  return;
}


