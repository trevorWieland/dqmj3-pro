#include "00108fd0_00109684.h"



void fn_00109684(undefined4 param_1)

{
  fn_00121838(param_1,DAT_00898204,1);
  fn_00121838(param_1,DAT_00898208,1);
  fn_00121838(param_1,DAT_0089820c,1);
  fn_00121838(param_1,DAT_00898210,1);
  fn_00121838(param_1,DAT_00898214,1);
  fn_00121838(param_1,DAT_00898218,1);
  fn_00121838(param_1,DAT_0089821c,1);
  fn_00121838(param_1,DAT_00898220,1);
  fn_00121838(param_1,DAT_00898224,1);
  fn_00121838(param_1,DAT_00898228,1);
  fn_00121838(param_1,DAT_0089822c,1);
  fn_00121838(param_1,DAT_00898230,1);
  fn_00121838(param_1,DAT_00898234,1);
  fn_00121838(param_1,DAT_00898238,1);
  fn_00121838(param_1,DAT_0089823c,1);
  fn_00121838(param_1,DAT_00898240,1);
  fn_00121838(param_1,DAT_00898244,1);
  fn_00121838(param_1,DAT_00898248,1);
  fn_00121838(param_1,DAT_0089824c,1);
  fn_00121838(param_1,DAT_00898250,1);
  return;
}



int fn_0010963c(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &DAT_0081d830;
  iVar1 = fn_00101a1c(param_1 + 1,&LAB_00112e14,0x38,2);
  iVar1 = fn_001283fc(iVar1 + 0x70);
  iVar1 = fn_001283fc(iVar1 + 0x34);
  *(undefined4 *)(iVar1 + 0x34) = 0;
  *(undefined4 *)(iVar1 + 0x38) = 0;
  return iVar1 + -0xa8;
}



int * fn_00109510(int *param_1)

{
  if ((int *)param_1[10] != (int *)0x0) {
    (**(code **)(*(int *)param_1[10] + 4))();
  }
  if ((int *)param_1[9] != (int *)0x0) {
    (**(code **)(*(int *)param_1[9] + 4))();
  }
  if ((int *)param_1[8] != (int *)0x0) {
    (**(code **)(*(int *)param_1[8] + 8))();
  }
  if ((int *)param_1[7] != (int *)0x0) {
    (**(code **)(*(int *)param_1[7] + 4))();
  }
  if ((int *)param_1[6] != (int *)0x0) {
    (**(code **)(*(int *)param_1[6] + 4))();
  }
  if ((int *)param_1[5] != (int *)0x0) {
    (**(code **)(*(int *)param_1[5] + 4))();
  }
  if ((int *)param_1[4] != (int *)0x0) {
    (**(code **)(*(int *)param_1[4] + 4))();
  }
  if ((int *)param_1[3] != (int *)0x0) {
    (**(code **)(*(int *)param_1[3] + 4))();
  }
  if ((int *)param_1[2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[2] + 4))();
  }
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 4))();
  }
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 4))();
  }
  return param_1;
}



int fn_001094b0(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0xff;
  *(undefined1 *)((int)param_1 + 0x35) = 0xff;
  iVar1 = fn_00113c58((int)param_1 + 0x36);
  iVar1 = fn_00117074(iVar1 + 0x16);
  return iVar1 + -0x4c;
}



undefined4 * fn_00109478(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 != (undefined4 *)0x0) {
    fn_002feef8(*puVar1);
    *puVar1 = 0;
    fn_002feef8(puVar1);
  }
  return param_1;
}



undefined4 * fn_0010940c(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *unaff_r4;
  
  *param_1 = 0;
  puVar1 = (undefined4 *)fn_00145b00(4,&DAT_00812c8c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    unaff_r4 = puVar1;
  }
  puVar2 = (undefined4 *)*param_1;
  if (puVar1 == (undefined4 *)0x0) {
    unaff_r4 = (undefined4 *)0x0;
  }
  if (puVar2 != unaff_r4) {
    if (puVar2 != (undefined4 *)0x0) {
      fn_002feef8(*puVar2);
      *puVar2 = 0;
      fn_002feef8(puVar2);
    }
    *param_1 = unaff_r4;
  }
  return param_1;
}



void fn_001093e0(void)

{
  fn_00143b48(DAT_0088fcd8);
  fn_00143b48(DAT_0088fcdc);
  DAT_0088fcd8 = 0;
  DAT_0088fcdc = 0;
  return;
}



void fn_00109334(void)

{
  DAT_0088fcd8 = fn_001287dc(0x1000,4);
  DAT_0088fcdc = fn_001287dc(0x1000,4);
  fn_0011c1b4(L"patch:/data/Parameter/MonsAuthKey.bin",DAT_0088fcd8,0x1000,0,0,0,0,0,5);
  fn_0012d73c();
  fn_0011c1b4(L"rom:/data/Parameter/MonsCheckKey.bin",DAT_0088fcdc,0x1000,0,0,0,0,0,5);
  fn_0012d73c();
  return;
}



void fn_001092d0(int param_1)

{
  int iVar1;
  ushort uVar2;
  
  if ((*(char *)(param_1 + 8) != '\0') &&
     ((iVar1 = fn_00113ca8(), iVar1 != 0 || (iVar1 = fn_00113ce4(), iVar1 != 0)))) {
    uVar2 = *(short *)(*(int *)(param_1 + 4) + 0x50e) + 1;
    *(ushort *)(*(int *)(param_1 + 4) + 0x50e) = uVar2;
    if (10000 < uVar2) {
      *(undefined2 *)(*(int *)(param_1 + 4) + 0x50e) = 10000;
    }
  }
  return;
}



void fn_00109248(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  
  for (piVar4 = *(int **)(param_1 + 8); *(int **)(param_1 + 0xc) != piVar4; piVar4 = piVar4 + 1) {
    if ((int *)*piVar4 != (int *)0x0) {
      (**(code **)(*(int *)*piVar4 + 4))();
    }
    *piVar4 = 0;
  }
  uVar3 = *(uint *)(param_1 + 8);
  *(undefined4 *)(param_1 + 8) = 0;
  uVar2 = *(uint *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = 0;
  iVar5 = *(int *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = 0;
  uVar1 = uVar3;
  if (uVar2 < uVar3) {
    do {
      uVar1 = uVar1 + 4;
    } while (uVar1 != uVar2);
  }
  fn_001008c4(uVar3,(int)(iVar5 - uVar3) >> 2,0);
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}



void fn_00109230(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00118dcc();
  *puVar1 = &DAT_0081d07c;
  return;
}



int * fn_00109204(int *param_1)

{
  if (*param_1 != 0) {
    fn_00112880();
    fn_002feef8();
    *param_1 = 0;
  }
  return param_1;
}



int * fn_001091ac(int *param_1)

{
  int iVar1;
  int iVar2;
  
  *param_1 = 0;
  iVar1 = fn_00145b00(0x1c,&DAT_00812c8c);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = fn_001127e0();
  }
  iVar1 = *param_1;
  if (iVar1 != iVar2) {
    if (iVar1 != 0) {
      fn_00112880(iVar1);
      fn_002feef8();
    }
    *param_1 = iVar2;
  }
  return param_1;
}



undefined4 * fn_00109178(undefined4 *param_1)

{
  *param_1 = &DAT_0081c51c;
  param_1[1] = 0;
  param_1[2] = &DAT_008517d0;
  fn_00110dbc(param_1);
  return param_1;
}



int * fn_00108fd0(int *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined2 *puVar4;
  int iVar5;
  uint uVar6;
  
  *param_1 = (int)&DAT_008f9cf4;
  param_1[0x401] = 0;
  *(undefined1 *)(param_1 + 0x402) = 0;
  param_1[0x404] = 0;
  param_1[0x405] = 0;
  param_1[0x406] = 0;
  param_1[0x407] = 0;
  param_1[0x408] = 0;
  param_1[0x40a] = -1;
  param_1[0x409] = 0;
  fn_0013c500();
  if (*(uint *)(*param_1 + -8) < 0x100) {
    uVar1 = *(uint *)(*param_1 + -4);
    uVar6 = 0x100;
    if (uVar1 < 0x101) {
      uVar6 = uVar1;
    }
    if (0x100 < uVar6) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar6,0x100);
    }
    puVar2 = (undefined4 *)fn_00100fc6(0x210,0);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
    }
    puVar4 = (undefined2 *)((int)puVar2 + uVar6 * 2 + 0xc);
    *puVar2 = 0;
    puVar2[1] = 0x100;
    puVar2[2] = uVar6;
    if (puVar4 != (undefined2 *)0x0) {
      *puVar4 = 0;
    }
    fn_00301a9c(puVar2 + 3,*param_1,*(int *)(*param_1 + -4) << 1);
    if ((undefined4 *)*param_1 != &DAT_008f9cf4) {
      piVar3 = (undefined4 *)*param_1 + -3;
      iVar5 = *piVar3;
      if ((iVar5 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar5 + -1, iVar5 == 0)))) {
        fn_001008c4(*param_1 + -0xc,*(int *)(*param_1 + -8) + 8,0);
      }
    }
    *param_1 = (int)(puVar2 + 3);
  }
  fn_00301f50(param_1 + 1,0x1000);
  return param_1;
}


