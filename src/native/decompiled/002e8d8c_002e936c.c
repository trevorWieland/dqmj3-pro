#include "002e8d8c_002e936c.h"



undefined4 *
fn_002e936c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = &DAT_00821094;
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = param_4;
  *(undefined1 *)(param_1 + 4) = 0;
  return param_1;
}



undefined4 * fn_002e9318(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auStack_40 [52];
  
  puVar1 = (undefined4 *)fn_001283fc(param_1 + 4);
  puVar1[-1] = 0;
  puVar2 = (undefined4 *)fn_001283fc(auStack_40);
  uVar3 = puVar2[1];
  uVar4 = puVar2[2];
  uVar5 = puVar2[3];
  uVar6 = puVar2[4];
  uVar7 = puVar2[5];
  uVar8 = puVar2[6];
  uVar9 = puVar2[7];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  puVar1[4] = uVar6;
  puVar1[5] = uVar7;
  puVar1[6] = uVar8;
  puVar1[7] = uVar9;
  uVar3 = puVar2[9];
  uVar4 = puVar2[10];
  uVar5 = puVar2[0xb];
  uVar6 = puVar2[0xc];
  puVar1[8] = puVar2[8];
  puVar1[9] = uVar3;
  puVar1[10] = uVar4;
  puVar1[0xb] = uVar5;
  puVar1[0xc] = uVar6;
  puVar1[0xd] = 0;
  return puVar1 + -1;
}



undefined1 * fn_002e9288(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_48 [56];
  
  puVar1 = (undefined4 *)param_1[0xe];
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    (**(code **)(*(int *)puVar1[1] + 0xc))((int *)puVar1[1],puVar1);
    param_1[0xe] = 0;
  }
  fn_001433d8(param_1 + 1);
  fn_0012d73c(*param_1);
  *param_1 = 0;
  puVar1 = (undefined4 *)fn_001283fc(auStack_48);
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  uVar5 = puVar1[4];
  uVar6 = puVar1[5];
  uVar7 = puVar1[6];
  uVar8 = puVar1[7];
  param_1[1] = *puVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  param_1[7] = uVar7;
  param_1[8] = uVar8;
  uVar2 = puVar1[9];
  uVar3 = puVar1[10];
  uVar4 = puVar1[0xb];
  uVar5 = puVar1[0xc];
  param_1[9] = puVar1[8];
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  param_1[0xc] = uVar4;
  param_1[0xd] = uVar5;
  param_1[0xe] = 0;
  return auStack_48;
}



undefined1 * fn_002e9240(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_40 [52];
  
  *param_1 = 0;
  puVar1 = (undefined4 *)fn_001283fc(auStack_40);
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  uVar5 = puVar1[4];
  uVar6 = puVar1[5];
  uVar7 = puVar1[6];
  uVar8 = puVar1[7];
  param_1[1] = *puVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  param_1[7] = uVar7;
  param_1[8] = uVar8;
  uVar2 = puVar1[9];
  uVar3 = puVar1[10];
  uVar4 = puVar1[0xb];
  uVar5 = puVar1[0xc];
  param_1[9] = puVar1[8];
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  param_1[0xc] = uVar4;
  param_1[0xd] = uVar5;
  param_1[0xe] = 0;
  return auStack_40;
}



void fn_002e90ac(int param_1)

{
  undefined4 in_s0;
  
  fn_0017fde4(*(undefined4 *)(param_1 + 0x10));
  fn_0017fc3c();
  *(undefined4 *)(param_1 + 0x14) = in_s0;
  return;
}



undefined4 * fn_002e9024(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = fn_002ff600(0x24);
  puVar2 = (undefined4 *)0x0;
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)fn_00210704();
    *puVar2 = &DAT_00821020;
    puVar2[4] = 0;
    puVar2[5] = 0x3f800000;
    puVar2[6] = 0x3f800000;
    *(undefined1 *)(puVar2 + 7) = 0;
    *(undefined1 *)((int)puVar2 + 0x1d) = 0;
    *(undefined1 *)((int)puVar2 + 0x1e) = 0;
    puVar2[8] = 0;
  }
  fn_002e8e24(puVar2,param_1,param_2);
  return puVar2;
}



void fn_002e8ffc(int param_1,undefined1 param_2)

{
  fn_001747e8(*(undefined4 *)(param_1 + 0x10));
  *(undefined1 *)(param_1 + 0xe) = param_2;
  return;
}



undefined4 fn_002e8e24(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  int *piVar13;
  
  iVar7 = fn_00145b00(8,&DAT_00812c8c);
  piVar8 = (int *)0x0;
  if (iVar7 != 0) {
    piVar8 = (int *)fn_005efdbc();
  }
  piVar13 = *(int **)(param_1 + 0x10);
  if (piVar13 != piVar8) {
    if (piVar13 != (int *)0x0) {
      (**(code **)(*piVar13 + 4))(piVar13);
    }
    *(int **)(param_1 + 0x10) = piVar8;
  }
  uVar9 = fn_0069ee40(*(undefined4 *)(param_1 + 0x10),param_2,0);
  puVar10 = (undefined4 *)fn_00145b00(0x70,&DAT_00812c8c);
  if (puVar10 == (undefined4 *)0x0) {
    puVar10 = (undefined4 *)0x0;
  }
  else {
    fn_0017fde4(*(undefined4 *)(param_1 + 0x10));
    uVar11 = fn_006ebe64();
    puVar10[1] = uVar11;
    *puVar10 = &DAT_00823c78;
    *(undefined1 *)(puVar10 + 2) = 0;
    *(undefined1 *)((int)puVar10 + 9) = 0;
    puVar10[3] = param_3;
    puVar10[4] = 0;
    puVar10[5] = 0xffffffff;
    *(undefined1 *)(puVar10 + 6) = 0;
    puVar10[0x19] = 0;
    puVar10[0x1a] = 0;
    *(undefined1 *)(puVar10 + 0x1b) = 0;
    if ((((byte)DAT_008c6300 & 1) == 0) && (iVar7 = fn_00303afc(&DAT_008c6300), iVar7 != 0)) {
      DAT_008f9e38 = 0x3f800000;
      DAT_008f9e3c = 0;
      DAT_008f9e40 = 0;
      DAT_008f9e44 = 0;
      DAT_008f9e48 = 0;
      DAT_008f9e4c = 0x3f800000;
      DAT_008f9e50 = 0;
      DAT_008f9e54 = 0;
      DAT_008f9e58 = 0;
      DAT_008f9e5c = 0;
      DAT_008f9e60 = 0x3f800000;
      DAT_008f9e64 = 0;
    }
    uVar6 = DAT_008f9e54;
    uVar5 = DAT_008f9e50;
    uVar4 = DAT_008f9e4c;
    uVar3 = DAT_008f9e48;
    uVar2 = DAT_008f9e44;
    uVar1 = DAT_008f9e40;
    uVar11 = DAT_008f9e3c;
    puVar10[7] = DAT_008f9e38;
    puVar10[8] = uVar11;
    puVar10[9] = uVar1;
    puVar10[10] = uVar2;
    puVar10[0xb] = uVar3;
    puVar10[0xc] = uVar4;
    puVar10[0xd] = uVar5;
    puVar10[0xe] = uVar6;
    uVar2 = DAT_008f9e64;
    uVar1 = DAT_008f9e60;
    uVar11 = DAT_008f9e5c;
    puVar10[0xf] = DAT_008f9e58;
    puVar10[0x10] = uVar11;
    puVar10[0x11] = uVar1;
    puVar10[0x12] = uVar2;
  }
  puVar12 = *(undefined4 **)(param_1 + 0x20);
  if (puVar12 != puVar10) {
    fn_002feef8();
    *(undefined4 **)(param_1 + 0x20) = puVar10;
    puVar12 = puVar10;
  }
  uVar11 = fn_0017fde4(*(undefined4 *)(param_1 + 0x10));
  fn_0018d16c(uVar11,puVar12);
  return uVar9;
}



void fn_002e8d8c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,int param_5
                 )

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  iVar5 = param_1[8];
  uVar1 = (**(code **)(*param_1 + 0x48))();
  *(undefined1 *)(iVar5 + 0x6c) = 1;
  uVar2 = fn_00191238(param_2,param_3);
  *(undefined4 *)(iVar5 + 0x14) = uVar2;
  if (param_5 == 0) {
    iVar3 = fn_005ea33c(param_2);
    puVar4 = (undefined4 *)(*(int *)(iVar3 + 0x14) + *(int *)(iVar5 + 0x14) * 0x30);
    uVar2 = puVar4[1];
    uVar6 = puVar4[2];
    uVar7 = puVar4[3];
    uVar8 = puVar4[4];
    uVar9 = puVar4[5];
    uVar10 = puVar4[6];
    uVar11 = puVar4[7];
    *(undefined4 *)(iVar5 + 0x1c) = *puVar4;
    *(undefined4 *)(iVar5 + 0x20) = uVar2;
    *(undefined4 *)(iVar5 + 0x24) = uVar6;
    *(undefined4 *)(iVar5 + 0x28) = uVar7;
    *(undefined4 *)(iVar5 + 0x2c) = uVar8;
    *(undefined4 *)(iVar5 + 0x30) = uVar9;
    *(undefined4 *)(iVar5 + 0x34) = uVar10;
    *(undefined4 *)(iVar5 + 0x38) = uVar11;
    uVar2 = puVar4[9];
    uVar6 = puVar4[10];
    uVar7 = puVar4[0xb];
    *(undefined4 *)(iVar5 + 0x3c) = puVar4[8];
    *(undefined4 *)(iVar5 + 0x40) = uVar2;
    *(undefined4 *)(iVar5 + 0x44) = uVar6;
    *(undefined4 *)(iVar5 + 0x48) = uVar7;
  }
  else {
    *(undefined4 *)(iVar5 + 0x10) = param_2;
  }
  uVar2 = *param_4;
  uVar6 = param_4[1];
  uVar7 = param_4[2];
  *(int **)(iVar5 + 0x68) = param_1;
  *(undefined4 *)(iVar5 + 0x58) = uVar2;
  *(undefined4 *)(iVar5 + 0x5c) = uVar6;
  *(undefined4 *)(iVar5 + 0x60) = uVar7;
  *(undefined4 *)(iVar5 + 100) = uVar1;
  return;
}


