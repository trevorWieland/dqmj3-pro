#include "0068af70_0068b510.h"



void fn_0068b510(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  uint uVar9;
  undefined2 *puVar10;
  uint *puVar11;
  uint uVar12;
  
  puVar11 = (uint *)(param_1 + 0x60);
  uVar1 = *(undefined2 *)(param_2 + 0x62);
  puVar10 = *(undefined2 **)(param_1 + 100);
  if (puVar10 == *(undefined2 **)(param_1 + 0x68)) {
    uVar4 = (int)((int)puVar10 - *puVar11) >> 1;
    if (uVar4 < (uint)((int)((int)*(undefined2 **)(param_1 + 0x68) - *puVar11) >> 1)) {
      *(undefined2 **)(param_1 + 100) = puVar10 + 1;
      if (puVar10 != (undefined2 *)0x0) {
        *puVar10 = puVar10[-1];
      }
      puVar7 = puVar10 + -1;
      puVar8 = puVar10;
      if (puVar10 < puVar7) {
        iVar6 = (int)puVar7 - (int)puVar10;
        if (0 < iVar6) {
          if (iVar6 * 0x40000000 < 0) {
            puVar7 = puVar10 + -2;
            puVar8 = puVar10 + -1;
            *puVar8 = *puVar7;
          }
          for (iVar6 = iVar6 >> 2; iVar6 != 0; iVar6 = iVar6 + -1) {
            puVar8[-1] = puVar7[-1];
            puVar7 = puVar7 + -2;
            puVar8 = puVar8 + -2;
            *puVar8 = *puVar7;
          }
        }
      }
      else {
        while (puVar10 != puVar7) {
          puVar7 = puVar7 + -1;
          puVar8[-1] = *puVar7;
          puVar8 = puVar8 + -1;
        }
      }
      *puVar10 = uVar1;
    }
    else {
      uVar12 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
      if (uVar12 < uVar4 + 0x20) {
        uVar12 = uVar4 + 0x20;
      }
      puVar2 = (undefined2 *)fn_00100fc6(uVar12 << 1,0);
      puVar8 = puVar2;
      for (puVar7 = (undefined2 *)*puVar11; puVar7 != puVar10; puVar7 = puVar7 + 1) {
        if (puVar8 != (undefined2 *)0x0) {
          *puVar8 = *puVar7;
        }
        puVar8 = puVar8 + 1;
      }
      puVar7 = (undefined2 *)(((int)puVar10 - *puVar11 & 0xfffffffe) + (int)puVar2);
      if (puVar7 != (undefined2 *)0x0) {
        *puVar7 = uVar1;
      }
      puVar8 = *(undefined2 **)(param_1 + 100);
      puVar7 = (undefined2 *)(((int)puVar10 - *puVar11 & 0xfffffffe) + (int)puVar2);
      for (; puVar10 != puVar8; puVar10 = puVar10 + 1) {
        puVar7 = puVar7 + 1;
        if (puVar7 != (undefined2 *)0x0) {
          *puVar7 = *puVar10;
        }
      }
      uVar3 = *puVar11;
      uVar9 = *(uint *)(param_1 + 100);
      uVar4 = uVar3;
      if (uVar9 < uVar3) {
        do {
          uVar4 = uVar4 + 2;
        } while (uVar4 != uVar9);
      }
      fn_001008c4(uVar3,(int)(*(int *)(param_1 + 0x68) - uVar3) >> 1,0);
      *(undefined2 **)(param_1 + 0x68) = puVar2 + uVar12;
      *(undefined2 **)(param_1 + 100) = puVar2 + ((int)(uVar9 - uVar3) >> 1) + 1;
      *puVar11 = (uint)puVar2;
    }
  }
  else {
    *(undefined2 **)(param_1 + 100) = puVar10 + 1;
    if (puVar10 != (undefined2 *)0x0) {
      *puVar10 = uVar1;
    }
  }
  uVar5 = fn_0014481c(DAT_008977e8);
  fn_002625d0(uVar5,param_2);
  return;
}



void fn_0068b44c(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  if (*(int *)(param_1 + 0x74) != -1) {
    piVar1 = (int *)fn_0068c7e8(DAT_008977e8);
    (**(code **)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(param_1 + 0x74));
    *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  }
  *(undefined1 *)(param_1 + 0x89) = 1;
  *(undefined4 *)(param_1 + 0x7c) = 1;
  *(undefined4 *)(param_1 + 0x80) = 300;
  local_2c = 0;
  local_28 = 0xc3140000;
  local_24 = 0;
  uVar2 = fn_0017fde4(*(undefined4 *)(param_1 + 0x58));
  uVar3 = fn_0068c7e8(DAT_008977e8);
  uVar2 = fn_00179ac8(uVar3,0x9c62,uVar2,(char *)&DAT_0068b504,&local_2c);
  *(undefined4 *)(param_1 + 0x74) = uVar2;
  return;
}



bool fn_0068b3d4(int param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = *(float *)(param_1 + 8) - *param_2;
  fVar1 = *(float *)(param_1 + 0xc) - param_2[1];
  fVar2 = *(float *)(param_1 + 0x10) - param_2[2];
  fVar2 = SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2);
  fn_0068c6a0(DAT_008977e8);
  fn_006ada88();
  return fVar2 < *(float *)(param_3 + 0xc) + fVar1 * 1.5;
}



void fn_0068b37c(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  switch(param_1) {
  case 0:
    *param_2 = DAT_008961e0;
    return;
  case 1:
    uVar1 = DAT_008961e8;
    break;
  case 2:
    uVar1 = DAT_008961f0;
    break;
  case 3:
    uVar1 = DAT_008961ec;
    break;
  case 4:
    uVar1 = DAT_008961fc;
    break;
  default:
    return;
  }
  *param_2 = uVar1;
  return;
}



undefined4 fn_0068b334(undefined4 param_1)

{
  switch(param_1) {
  case 0:
  case 1:
    return 0;
  case 2:
    return 1;
  case 3:
    return 2;
  case 4:
    return 3;
  default:
    return 0xffffffff;
  }
}



undefined4 fn_0068b2a8(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 auStack_10 [4];
  undefined1 auStack_c [4];
  
  uVar1 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),param_1);
  fn_0020bbc4(auStack_10,uVar1);
  uVar1 = fn_006bfe90(auStack_c);
  switch(uVar1) {
  case 0:
  case 1:
    uVar1 = 0;
    break;
  case 2:
    uVar1 = 1;
    break;
  case 3:
    uVar1 = 2;
    break;
  case 4:
    uVar1 = 3;
    break;
  default:
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



void fn_0068b174(undefined4 *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((DAT_008961dc & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008961dc), iVar1 != 0)) {
    DAT_008cc874 = DAT_008961e0;
    DAT_008cc878 = DAT_008961f0;
    DAT_008cc87c = DAT_008961ec;
  }
  if (param_2 < 3) {
    uVar2 = (&DAT_008cc874)[param_2];
  }
  else {
    uVar2 = DAT_008961e0;
  }
  *param_1 = uVar2;
  return;
}



void fn_0068b14c(int param_1,uint param_2)

{
  if (param_1 == 0) {
    return;
  }
  fn_002b1f48();
  fn_002b1f0c(param_1,param_2 ^ 1);
  return;
}



void fn_0068b0f4(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  fn_002bf8f4();
  iVar1 = fn_006ba1ec(param_2);
  if ((iVar1 != 0) && (iVar1 = fn_002c11d0(param_1,*param_2,0), iVar1 != 0)) {
    fn_002e3fac(iVar1,param_2[2]);
    *(undefined4 *)(param_1 + 0xc4) = param_2[2];
  }
  iVar1 = *(int *)(param_1 + 0xe4);
  if (iVar1 == 0) {
    return;
  }
  fn_002b1f48();
  fn_002b1f0c(iVar1,1);
  return;
}



undefined4 fn_0068b0a4(void)

{
  undefined4 uVar1;
  
  uVar1 = fn_0066173c();
  switch(uVar1) {
  case 0:
  case 1:
    return 0;
  case 2:
    return 1;
  case 3:
    return 2;
  case 4:
    return 3;
  default:
    return 0xffffffff;
  }
}



void fn_0068b06c(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = fn_00242b2c(param_3);
  fn_0017d96c(param_1,param_2,param_2 + -1,DAT_008961d8,uVar1);
  return;
}



void fn_0068b03c(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_38 [48];
  
  fn_0022f128(auStack_38,0x17,param_2);
  fn_00190d50(param_1,auStack_38);
  return;
}



void fn_0068afd8(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = fn_00242b2c(param_3);
  fn_0018a618(param_1,param_2,param_2 + -1,DAT_008961d4,uVar1);
  return;
}



void fn_0068af70(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_006896e0();
  *puVar1 = &DAT_00851134;
  *(undefined1 *)(puVar1 + 2) = 0;
  *(undefined1 *)((int)puVar1 + 9) = 1;
  puVar1[3] = 0;
  return;
}


