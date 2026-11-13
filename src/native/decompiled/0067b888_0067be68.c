#include "0067b888_0067be68.h"



void fn_0067be68(undefined4 *param_1)

{
  *param_1 = &DAT_00859be4;
  fn_0066ec54(param_1);
  *param_1 = &DAT_00859b90;
  fn_002feef8(param_1);
  return;
}



bool fn_0067bdd8(int param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = true;
  piVar1 = (int *)fn_0066eb80(DAT_00898840,5);
  iVar2 = *(int *)(param_1 + 0x44);
  if (iVar2 == 0) {
    fn_0066d050(piVar1,param_1 + 100,param_1 + 0x8c,(int)*(char *)(param_1 + 0xb4));
    *(undefined4 *)(param_1 + 0x44) = 1;
  }
  else if (iVar2 == 1) {
    iVar2 = (**(code **)(*piVar1 + 0x2c))();
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x44) = 2;
    }
  }
  else {
    bVar3 = iVar2 != 2;
  }
  return bVar3;
}



void fn_0067bdac(int param_1,undefined4 *param_2,undefined4 *param_3,undefined1 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_2[4];
  uVar5 = param_2[5];
  uVar6 = param_2[6];
  uVar7 = param_2[7];
  *(undefined4 *)(param_1 + 100) = *param_2;
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  *(undefined4 *)(param_1 + 0x6c) = uVar2;
  *(undefined4 *)(param_1 + 0x70) = uVar3;
  *(undefined4 *)(param_1 + 0x74) = uVar4;
  *(undefined4 *)(param_1 + 0x78) = uVar5;
  *(undefined4 *)(param_1 + 0x7c) = uVar6;
  *(undefined4 *)(param_1 + 0x80) = uVar7;
  uVar1 = param_2[9];
  *(undefined4 *)(param_1 + 0x84) = param_2[8];
  *(undefined4 *)(param_1 + 0x88) = uVar1;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  uVar4 = param_3[4];
  uVar5 = param_3[5];
  uVar6 = param_3[6];
  uVar7 = param_3[7];
  *(undefined4 *)(param_1 + 0x8c) = *param_3;
  *(undefined4 *)(param_1 + 0x90) = uVar1;
  *(undefined4 *)(param_1 + 0x94) = uVar2;
  *(undefined4 *)(param_1 + 0x98) = uVar3;
  *(undefined4 *)(param_1 + 0x9c) = uVar4;
  *(undefined4 *)(param_1 + 0xa0) = uVar5;
  *(undefined4 *)(param_1 + 0xa4) = uVar6;
  *(undefined4 *)(param_1 + 0xa8) = uVar7;
  uVar1 = param_3[9];
  *(undefined4 *)(param_1 + 0xac) = param_3[8];
  *(undefined4 *)(param_1 + 0xb0) = uVar1;
  *(undefined1 *)(param_1 + 0xb4) = param_4;
  return;
}



bool fn_0067bd60(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  if (iVar1 != 0) {
    iVar2 = param_2[1];
    iVar3 = param_2[2];
    iVar4 = param_2[3];
    iVar5 = param_2[4];
    iVar6 = param_2[5];
    param_1[0x13] = *param_2;
    param_1[0x14] = iVar2;
    param_1[0x15] = iVar3;
    param_1[0x16] = iVar4;
    param_1[0x17] = iVar5;
    param_1[0x18] = iVar6;
    param_1[0x11] = 2;
  }
  return iVar1 == 0;
}



void fn_0067bd0c(undefined4 *param_1)

{
  *param_1 = &DAT_00859be4;
  fn_0066ec54(param_1);
  *param_1 = &DAT_00859b90;
  fn_002feef8(param_1);
  return;
}



bool fn_0067bc80(int param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = true;
  piVar1 = (int *)fn_0066eb80(DAT_00898840,5);
  iVar2 = *(int *)(param_1 + 0x44);
  if (iVar2 == 0) {
    fn_0066cfe8(piVar1,param_1 + 100,(int)*(char *)(param_1 + 0x8c));
    *(undefined4 *)(param_1 + 0x44) = 1;
  }
  else if (iVar2 == 1) {
    iVar2 = (**(code **)(*piVar1 + 0x2c))();
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x44) = 2;
    }
  }
  else {
    bVar3 = iVar2 != 2;
  }
  return bVar3;
}



void fn_0067bc64(int param_1,undefined4 *param_2,undefined1 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_2[4];
  uVar5 = param_2[5];
  uVar6 = param_2[6];
  uVar7 = param_2[7];
  *(undefined4 *)(param_1 + 100) = *param_2;
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  *(undefined4 *)(param_1 + 0x6c) = uVar2;
  *(undefined4 *)(param_1 + 0x70) = uVar3;
  *(undefined4 *)(param_1 + 0x74) = uVar4;
  *(undefined4 *)(param_1 + 0x78) = uVar5;
  *(undefined4 *)(param_1 + 0x7c) = uVar6;
  *(undefined4 *)(param_1 + 0x80) = uVar7;
  uVar1 = param_2[9];
  *(undefined4 *)(param_1 + 0x84) = param_2[8];
  *(undefined4 *)(param_1 + 0x88) = uVar1;
  *(undefined1 *)(param_1 + 0x8c) = param_3;
  return;
}



bool fn_0067bc18(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  if (iVar1 != 0) {
    iVar2 = param_2[1];
    iVar3 = param_2[2];
    iVar4 = param_2[3];
    iVar5 = param_2[4];
    iVar6 = param_2[5];
    param_1[0x13] = *param_2;
    param_1[0x14] = iVar2;
    param_1[0x15] = iVar3;
    param_1[0x16] = iVar4;
    param_1[0x17] = iVar5;
    param_1[0x18] = iVar6;
    param_1[0x11] = 2;
  }
  return iVar1 == 0;
}



undefined4 fn_0067babc(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint *puVar3;
  uint local_18;
  int iStack_14;
  int iStack_10;
  uint local_c;
  
  local_c = param_3;
  iStack_10 = param_2;
  iStack_14 = param_1;
  local_18 = *(int *)(param_1 + 0xa0) - *(int *)(param_1 + 0x9c);
  if (local_18 == 0) {
    uVar1 = 0;
  }
  else {
    puVar3 = &local_c;
    if (local_18 < param_3) {
      puVar3 = &local_18;
    }
    uVar2 = 0;
    if (*puVar3 != 0) {
      do {
        *(undefined1 *)(param_2 + uVar2) = *(undefined1 *)(*(int *)(param_1 + 0x9c) + uVar2);
        uVar2 = uVar2 + 1;
        local_18 = *(int *)(param_1 + 0xa0) - *(int *)(param_1 + 0x9c);
        puVar3 = &local_c;
        if (local_18 < param_3) {
          puVar3 = &local_18;
        }
      } while (uVar2 < *puVar3);
    }
    uVar1 = 1;
  }
  return uVar1;
}



undefined4 * fn_0067b9c4(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)fn_00145b00(0x68,&DAT_00812c8c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = &DAT_00859b90;
    fn_00129688(puVar1);
    fn_002fec40(puVar1 + 1,s_NexCommandRankingDownloadMyCommo_008c72c9);
    *puVar1 = &DAT_00859be4;
    iVar2 = fn_00119b40(puVar1 + 0x13);
    puVar1 = (undefined4 *)(iVar2 + -0x4c);
    fn_00119b60();
    *puVar1 = &DAT_00859ab8;
    *puVar1 = &DAT_0085a8c4;
  }
  *(undefined4 **)(param_1 + 0x98) = puVar1;
  puVar4 = *(undefined4 **)(param_1 + 0x9c);
  puVar3 = *(undefined4 **)(param_1 + 0xa0);
  if (puVar4 != puVar3) {
    puVar1 = puVar4;
    if (puVar4 < puVar3) {
      if (0 < (int)puVar3 - (int)puVar4) {
        for (iVar2 = (int)puVar3 - (int)puVar4 >> 1; iVar2 != 0; iVar2 = iVar2 + -1) {
        }
      }
    }
    else {
      do {
        puVar1 = (undefined4 *)((int)puVar1 + 1);
      } while (puVar1 != puVar3);
    }
    *(undefined4 **)(param_1 + 0xa0) = puVar4;
    puVar1 = puVar4;
  }
  return puVar1;
}



void fn_0067b95c(int *param_1)

{
  fn_0066e458(DAT_00898840,2,0);
  *(int **)(param_1[0x26] + 100) = param_1 + 0x27;
                    /* WARNING: Could not recover jumptable at 0x0067b998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,2);
  return;
}



void fn_0067b914(undefined4 *param_1)

{
  *param_1 = &DAT_00859be4;
  fn_0066ec54(param_1);
  *param_1 = &DAT_00859b90;
  fn_002feef8(param_1);
  return;
}



bool fn_0067b888(int param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = true;
  piVar1 = (int *)fn_0066eb80(DAT_00898840,5);
  iVar2 = *(int *)(param_1 + 0x44);
  if (iVar2 == 0) {
    fn_0066cf80(piVar1,param_1 + 100,(int)*(char *)(param_1 + 0x8c));
    *(undefined4 *)(param_1 + 0x44) = 1;
  }
  else if (iVar2 == 1) {
    iVar2 = (**(code **)(*piVar1 + 0x2c))();
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x44) = 2;
    }
  }
  else {
    bVar3 = iVar2 != 2;
  }
  return bVar3;
}


