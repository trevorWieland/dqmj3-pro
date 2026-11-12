#include "006cba08_006cc314.h"



void fn_006cc314(undefined4 param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  undefined1 auStack_30 [32];
  
  fn_00301a9c(auStack_30,&DAT_007ba154,0x1e);
  bVar2 = 0;
  do {
    iVar1 = (int)*(char *)((char)bVar2 + param_2 + 0x25);
    if (iVar1 != 0) {
      fn_00294630(bVar2,iVar1,auStack_30);
    }
    bVar2 = bVar2 + 1;
  } while (bVar2 < 5);
  fn_00301a9c(param_1,auStack_30,0x1e);
  return;
}



int fn_006cc27c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = fn_006ba284();
  iVar2 = fn_006ba274(param_1);
  uVar3 = iVar1 * iVar2 + param_2;
  if ((((int)uVar3 < 0) ||
      ((uint)(*(int *)(param_1 + 200) - *(int *)(param_1 + 0xc4) >> 4) <= uVar3)) ||
     (iVar1 = *(int *)(param_1 + 0xc4) + uVar3 * 0x10, iVar1 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(short *)(iVar1 + 4);
  }
  return iVar1;
}



bool fn_006cc1e4(int param_1)

{
  return *(int *)(param_1 + 4) == *(int *)(param_1 + 8);
}



void fn_006cbff0(undefined4 param_1,undefined4 param_2,int param_3)

{
  short sVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  puVar3 = (undefined2 *)fn_003b3780(param_2,0);
  *puVar3 = 1;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  *(undefined1 *)((int)puVar3 + 5) = 1;
  puVar3[3] = 100;
  puVar3[4] = 1;
  puVar3[5] = 1;
  puVar3[6] = 1;
  puVar3[7] = 0;
  puVar3[8] = 0;
  *(undefined1 *)(puVar3 + 9) = 0;
  puVar3[10] = 0;
  *(undefined1 *)((int)puVar3 + 0x13) = 0;
  *(undefined1 *)(puVar3 + 0xb) = 0;
  puVar3[0xc] = 0;
  *(undefined1 *)((int)puVar3 + 0x17) = 0;
  puVar3[0xd] = 1;
  puVar3[0xe] = 0;
  puVar3[0xf] = 0;
  *(undefined1 *)(puVar3 + 0x10) = 0;
  puVar3[0x11] = 0;
  *(undefined1 *)((int)puVar3 + 0x21) = 0;
  *(undefined1 *)(puVar3 + 0x12) = 0;
  puVar3[0x13] = 0;
  uVar7 = 0;
  *(undefined1 *)((int)puVar3 + 0x25) = 0;
  while ((*(short *)(param_3 + uVar7 * 2 + 0x10) == 0 ||
         (iVar4 = fn_002ea524(), iVar4 != *(short *)(param_3 + 0xc)))) {
    uVar7 = uVar7 + 1;
    if (3 < uVar7) {
LAB_006cc0c4:
      uVar7 = 0;
LAB_006cc0c8:
      puVar3 = (undefined2 *)fn_003b2f70(param_2,0);
      uVar9 = 0x3f800000;
      *puVar3 = 1;
      puVar3[1] = 0;
      iVar8 = param_3 + uVar7 * 2;
      *(undefined4 *)(puVar3 + 2) = 0x3f800000;
      puVar3[4] = 300;
      puVar3[6] = 1;
      uVar10 = uVar9;
      iVar4 = fn_002ea308((int)*(short *)(iVar8 + 0x10));
      if (iVar4 == 4) {
        uVar9 = 0x3ee66666;
      }
      *(undefined4 *)(puVar3 + 8) = uVar9;
      puVar3 = (undefined2 *)fn_003b305c(param_2,0);
      fn_00301f50(puVar3,0x7c);
      *puVar3 = 1;
      sVar1 = *(short *)(iVar8 + 0x10);
      puVar3[1] = sVar1;
      uVar2 = fn_002ea524((int)sVar1);
      puVar3[2] = uVar2;
      puVar3[0x16] = 0;
      puVar3[0x17] = 0;
      *(undefined4 *)(puVar3 + 0x18) = uVar10;
      *(undefined4 *)(puVar3 + 0x1a) = uVar10;
      puVar3[0x1c] = 0;
      puVar3[0x1d] = 0;
      puVar3[0xc] = 1;
      *(undefined1 *)(puVar3 + 0xd) = 0;
      *(undefined1 *)(puVar3 + 0x14) = 0;
      *(char *)((int)puVar3 + 0x29) = (char)uVar7;
      iVar4 = 0;
      *(undefined1 *)(puVar3 + 0x15) = 3;
      param_3 = param_3 + 0xe;
      uVar6 = 0;
      iVar8 = 4;
      do {
        iVar5 = iVar4;
        if (uVar6 != uVar7) {
          iVar5 = iVar4 + 1;
          puVar3[iVar4 * 2 + 6] = *(undefined2 *)(param_3 + 2);
          puVar3[iVar4 * 2 + 7] = 100;
        }
        iVar4 = iVar5;
        if (uVar6 + 1 != uVar7) {
          iVar4 = iVar5 + 1;
          puVar3[iVar5 * 2 + 6] = *(undefined2 *)(param_3 + 4);
          puVar3[iVar5 * 2 + 7] = 100;
        }
        iVar8 = iVar8 + -1;
        uVar6 = uVar6 + 2;
        param_3 = param_3 + 4;
      } while (iVar8 != 0);
      return;
    }
  }
  if (uVar7 != 0xffffffff) goto LAB_006cc0c8;
  goto LAB_006cc0c4;
}



char * fn_006cbfa4(int param_1)

{
  char *pcVar1;
  
  if (*(char *)(*(int *)(param_1 + 8) + 9) == '\0') {
    pcVar1 = "Network_Start";
  }
  else {
    pcVar1 = "One_Time_Network_Start";
  }
  return pcVar1;
}



void fn_006cbd68(undefined4 param_1,int param_2)

{
  fn_006cbf00(param_1,param_2 + 1);
  return;
}



int fn_006cbf00(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int extraout_r1;
  uint uVar3;
  
  uVar1 = *(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20);
  iVar2 = (int)((longlong)(int)uVar1 * -0x6db6db6d + ((ulonglong)uVar1 << 0x20) >> 0x20);
  if (iVar2 >> 4 != iVar2 >> 0x1f) {
    if (param_2 < 0) {
      uVar3 = *(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20);
      do {
        iVar2 = (int)((longlong)(int)uVar3 * -0x6db6db6d + ((ulonglong)uVar3 << 0x20) >> 0x20);
        param_2 = param_2 + ((iVar2 >> 4) - (iVar2 >> 0x1f));
      } while (param_2 < 0);
    }
    iVar2 = (int)((longlong)(int)uVar1 * -0x6db6db6d + ((ulonglong)uVar1 << 0x20) >> 0x20);
    fn_00169f1c(param_2,(iVar2 >> 4) - (iVar2 >> 0x1f));
    param_2 = extraout_r1;
  }
  return param_2;
}



bool fn_006cbb48(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  
  uVar10 = 0;
  iVar11 = *(int *)(DAT_008977e0 + 0xa8);
  uVar1 = fn_006f7a0c();
  iVar2 = fn_006f6434(uVar1,iVar11);
  switch(param_2) {
  case 0:
    uVar10 = fn_006f7530(DAT_008977e0);
    break;
  case 1:
    uVar10 = fn_002d8370(0xffffffff);
    iVar9 = **(int **)(DAT_008977e0 + 0x40);
    uVar4 = fn_002fb61c();
    uVar5 = fn_006afabc(*(undefined4 *)(DAT_008977e0 + 0x1c),iVar11);
    uVar6 = fn_006f7358(DAT_008977e0);
    fn_006f7a84(DAT_008977e0);
    uVar7 = fn_006a9960();
    iVar3 = fn_00129d4c(*(undefined4 *)(DAT_008977e0 + 0x1c),(char *)&DAT_006cbd24);
    uVar8 = fn_006afa24(*(undefined4 *)(DAT_008977e0 + 0x1c),iVar11);
    uVar10 = iVar2 == 0 ^ 1 |
             (uint)(iVar3 == iVar11) | iVar9 != 0 | uVar10 | uVar4 | uVar5 ^ 1 | uVar6 | uVar7 |
             uVar8 ^ 1;
    break;
  case 2:
    bVar12 = **(int **)(DAT_008977e0 + 0x40) != 0;
    uVar10 = (uint)bVar12;
    if (!bVar12) {
      uVar10 = 0;
    }
    uVar4 = fn_002fb61c();
    uVar5 = fn_006afb24(*(undefined4 *)(DAT_008977e0 + 0x1c),iVar11);
    uVar6 = fn_006f7358(DAT_008977e0);
    fn_006f7a84(DAT_008977e0);
    uVar7 = fn_006a9960();
    uVar8 = fn_006afabc(*(undefined4 *)(DAT_008977e0 + 0x1c),iVar11);
    uVar10 = iVar2 == 0 ^ 1 | uVar8 ^ 1 | uVar10 | uVar4 | uVar5 ^ 1 | uVar6 | uVar7;
    break;
  case 3:
    fn_0023f510(*(undefined4 *)(DAT_008977e0 + 0x50));
    iVar2 = fn_006b4f64(*(undefined4 *)(DAT_008977e0 + 0x50));
    if (iVar2 == 0) {
      uVar10 = 1;
    }
  }
  iVar2 = fn_00154ac8(*(undefined4 *)(&DAT_007c0d8c + param_2 * 4));
  return iVar2 == 0 && uVar10 == 0;
}



bool fn_006cbb1c(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_0065fd34(*(undefined4 *)(param_1 + 0x1a0),*(undefined4 *)(param_2 + 0x164),0);
  return iVar1 != 0;
}



undefined4 fn_006cba34(int *param_1,int param_2)

{
  return *(undefined4 *)(*param_1 + param_2 * 0x14 + -0xc);
}



int fn_006cba1c(int *param_1,int param_2)

{
  return *param_1 + (param_2 + -1) * 0x14 + 0x10;
}



undefined4 fn_006cba08(int *param_1,int param_2)

{
  return *(undefined4 *)(*param_1 + param_2 * 0x14 + -8);
}


