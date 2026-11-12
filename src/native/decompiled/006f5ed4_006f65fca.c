#include "006f5ed4_006f65fca.h"



bool fn_006f61c8(void)

{
  int iVar1;
  float in_s0;
  
  iVar1 = fn_006f7a0c(DAT_008977e0);
  (**(code **)(**(int **)(*(int *)(iVar1 + 0x30) + 0x28) + 0x2c))();
  if (0x4315ffff < (int)in_s0) {
    in_s0 = 0.0;
  }
  return 0.0 < in_s0;
}



bool fn_006f6104(undefined4 *param_1)

{
  float in_s0;
  
  fn_006f62bc(*param_1);
  return 0.0 < in_s0;
}



bool fn_006f60ec(int param_1,int param_2)

{
  return *(int *)(param_1 + 0x78) == *(int *)(param_2 + 0x78);
}



undefined4 fn_006f60a4(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x7c);
  iVar2 = 0;
  do {
    if (*(undefined4 **)(param_1 + 0x80) == puVar1) {
      return 0xffffffff;
    }
    if (puVar1[1] == param_2) {
      if (iVar2 == param_3) {
        return *puVar1;
      }
      iVar2 = iVar2 + 1;
    }
    puVar1 = puVar1 + 2;
  } while( true );
}



int fn_006f608c(int param_1)

{
  return **(int **)(param_1 + 0x90) + *(int *)(param_1 + 0x78) * 0xc;
}



undefined4 fn_006f5f68(int param_1,float *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ulonglong uVar8;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  fVar6 = *param_2;
  fVar3 = param_2[1];
  fVar7 = 0.0;
  iVar2 = 0;
  fVar4 = param_2[2];
  fVar5 = param_2[3];
  *param_3 = -1;
  fVar4 = fVar4 - fVar6;
  fVar5 = fVar5 - fVar3;
  fVar3 = 1.0 / SQRT(fVar4 * fVar4 + fVar5 * fVar5);
  fVar4 = fVar4 * fVar3;
  uVar8 = (ulonglong)(uint)(fVar5 * fVar3);
  do {
    iVar1 = param_1 + iVar2 * 8;
    if (fVar4 * *(float *)(iVar1 + 0x30) + (float)uVar8 * *(float *)(iVar1 + 0x34) < fVar7) {
      iVar1 = param_1 + iVar2 * 0xc;
      local_38 = *(undefined4 *)(iVar1 + 0xc);
      uStack_34 = *(undefined4 *)(iVar1 + 0x14);
      local_30 = local_38;
      local_2c = uStack_34;
      iVar1 = fn_0067f7dc(param_2,&local_38);
      if (iVar1 != 0) {
        iVar1 = *(int *)(param_1 + 0x7c);
        while( true ) {
          if (*(int *)(param_1 + 0x80) == iVar1) {
            return 1;
          }
          if (*(int *)(iVar1 + 4) == iVar2) break;
          iVar1 = iVar1 + 8;
        }
        *param_3 = iVar2;
        return 0;
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  return 2;
}



void fn_006f5f30(undefined4 param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = fn_0066eb80(DAT_00898840,3);
  iVar2 = *(int *)(iVar2 + 0x4a4);
  if (iVar2 == 0) {
    return;
  }
  uVar3 = 0;
  uVar1 = *(int *)(iVar2 + 0xc) - *(int *)(iVar2 + 8) >> 3;
  if (uVar1 != 0) {
    do {
      if ((param_2 & 1) != 0) {
        return;
      }
      uVar3 = uVar3 + 1;
      param_2 = param_2 >> 1;
    } while (uVar3 < uVar1);
  }
  return;
}



undefined4 fn_006f5ed4(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x44) != 0) {
    switch(*(int *)(param_1 + 0x44)) {
    case 0xd:
    case 0xf:
    case 0x12:
      return 0;
    case 0xe:
      uVar1 = 1;
      break;
    case 0x10:
      return 2;
    case 0x11:
      return 3;
    default:
      return 4;
    }
  }
  return uVar1;
}


