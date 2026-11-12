#include "0019ba80_0019bed8.h"



void fn_0019bed8(int param_1,float *param_2,int param_3,int param_4)

{
  float fVar1;
  undefined8 uVar2;
  int local_30 [2];
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  
  uVar2 = 0;
  *param_2 = 0.0;
  param_2[2] = 0.0;
  param_2[1] = 0.0;
  param_2[3] = 0.0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  local_30[0] = param_3;
  do {
    local_28 = (float)uVar2;
    local_24 = local_28;
    local_20 = local_28;
    local_1c = local_28;
    fn_001a24d0(param_1,&local_28,local_30);
    fVar1 = *param_2;
    if (local_28 < *param_2) {
      fVar1 = local_28;
    }
    *param_2 = fVar1;
    if (param_2[1] <= local_24) {
      local_24 = param_2[1];
    }
    param_2[1] = local_24;
    if (local_20 <= param_2[2]) {
      local_20 = param_2[2];
    }
    param_2[2] = local_20;
    if (local_1c <= param_2[3]) {
      local_1c = param_2[3];
    }
    param_2[3] = local_1c;
  } while (0 < (param_3 + param_4 * 2) - local_30[0] >> 1);
  return;
}



void fn_0019be88(float *param_1,float param_2)

{
  uint in_fpscr;
  float in_s0;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_1[1];
  if ((int)param_1[3] < (int)param_1[2]) {
    fVar2 = (float)VectorSignedToFloat(param_1[3],(byte)(in_fpscr >> 0x16) & 3);
    fVar3 = (float)VectorSignedToFloat(param_1[2],(byte)(in_fpscr >> 0x16) & 3);
    fVar1 = ((fVar1 - *param_1) * fVar2) / fVar3 + *param_1;
  }
  *param_1 = fVar1;
  param_1[1] = in_s0;
  param_1[2] = param_2;
  param_1[3] = 0.0;
  return;
}



void fn_0019be0c(int param_1,uint param_2,code *param_3,uint param_4)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    if (param_2 == 0) {
      return;
    }
    if ((((param_2 & 1) != 0) && (iVar3 < 0x10)) &&
       (iVar1 = *(int *)(param_1 + iVar3 * 4 + 0x90), iVar1 != 0)) {
      pcVar2 = param_3;
      if ((param_4 & 1) != 0) {
        pcVar2 = *(code **)(param_3 + *(int *)(iVar1 + ((int)param_4 >> 1)));
      }
      (*pcVar2)();
    }
    iVar3 = iVar3 + 1;
    param_2 = param_2 >> 1;
  } while (iVar3 < 0x10);
  return;
}



double fn_0019bd60(int param_1,uint param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 local_8;
  
  local_8 = (double)CONCAT44(param_2,param_1);
  *param_3 = 0;
  uVar1 = param_2 & 0x7fffffff;
  if ((uVar1 < 0x7ff00000) && (param_1 != 0 || uVar1 != 0)) {
    if (uVar1 < 0x100000) {
      iVar2 = -0x36;
      local_8 = local_8 * 18014398509481984.0;
      param_2 = (uint)((ulonglong)local_8 >> 0x20);
      *param_3 = -0x36;
      uVar1 = param_2 & 0x7fffffff;
    }
    else {
      iVar2 = *param_3;
    }
    *param_3 = ((int)uVar1 >> 0x14) + -0x3fe + iVar2;
    local_8 = (double)(CONCAT44(param_2,(undefined4)local_8) & 0x800fffffffffffff |
                      0x3fe0000000000000);
  }
  return local_8;
}



void fn_0019bc68(double *param_1,undefined4 param_2)

{
  bool bVar1;
  undefined8 in_d0;
  uint uVar2;
  double in_d9;
  undefined8 local_28;
  
  local_28 = *param_1;
  uVar2 = (uint)((ulonglong)local_28 >> 0x20);
  bVar1 = (~(uVar2 >> 0x14) & 0x7ff) != 0;
  if (bVar1) {
    in_d9 = 0.0;
  }
  if (bVar1 && local_28 != 0.0) {
    local_28 = (double)fn_001a2abc(SUB84(local_28,0),uVar2,param_2);
    if (((uint)((ulonglong)local_28 >> 0x34) & 0x7ff) == 0x7ff) {
      fn_00102ca2(2);
      local_28 = (double)((ulonglong)((uint)((ulonglong)local_28 >> 0x20) & 0x80000000 | 0x7ff00000)
                         << 0x20);
    }
    else if (local_28 == in_d9) {
      fn_00102ca2(2);
      uVar2 = (uint)((ulonglong)local_28 >> 0x20);
      fn_001a24b8();
      local_28 = (double)CONCAT44((uint)((ulonglong)in_d0 >> 0x20) & 0x7fffffff | uVar2 & 0x80000000
                                  ,(int)in_d0);
    }
  }
  *param_1 = local_28;
  return;
}



void fn_0019bc50(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  return;
}



void fn_0019bc44(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar1 + 0x24) = *param_2;
  *(undefined2 *)(iVar1 + 0x28) = *(undefined2 *)(param_2 + 1);
  return;
}



undefined4 fn_0019bbe8(int param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)(*(int *)(param_1 + 8) + param_3 * 0x14 + 4);
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  uVar2 = fn_001a232c();
  param_2[2] = uVar2;
  return 1;
}



undefined4 fn_0019bbc0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = fn_001a2150(*(undefined4 *)(param_1 + 4));
  fn_0017821c(param_2,uVar1,0x4c);
  return 1;
}



undefined2 fn_0019bbb0(int param_1)

{
  undefined2 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    uVar1 = *(undefined2 *)(*(int *)(param_1 + 8) + 10);
  }
  return uVar1;
}



undefined4 fn_0019bab8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar3 = 8;
  if (param_2 == 0) {
    iVar3 = 9;
  }
  iVar1 = fn_001a1fb8();
  puVar5 = (&PTR_s_pos_700_0088ff30)[iVar1 * 0x18 + iVar3];
  iVar3 = fn_003035b0(puVar5,&DAT_0019bb88);
  if (iVar3 != 0) {
    fn_00183718(&local_2c,*(undefined4 *)(param_1 + 8),&DAT_0019bb8c);
    uVar4 = 0;
    uStack_44 = uStack_28;
    uStack_40 = uStack_24;
    uStack_3c = uStack_20;
    uStack_38 = uStack_1c;
    uStack_34 = uStack_18;
    uStack_30 = uStack_14;
    if (local_2c != 0) {
      do {
        uVar2 = fn_0018385c(&uStack_44,uVar4);
        iVar3 = fn_003035b0(uVar2,puVar5);
        if (iVar3 == 0) {
          uVar2 = fn_00183840(&uStack_44,uVar4);
          return uVar2;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < local_2c);
    }
  }
  return 0;
}



undefined4 fn_0019ba80(int param_1,char param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = (int)param_2;
  uVar3 = iVar1 - 0x10;
  if (3 < uVar3) {
    param_4 = iVar1 - 0x18;
  }
  if ((3 < uVar3 && 3 < param_4) && (iVar1 != 0x20 && iVar1 != 0x22)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  iVar1 = fn_001a1fb8(param_1,uVar2);
  puVar4 = (&PTR_s_pos_700_0088ff30)[iVar1 * 0x18 + (uVar3 & 0xff)];
  iVar1 = fn_003035b0(puVar4,&DAT_0019bb88);
  if (iVar1 != 0) {
    fn_00183718(&uStack_2c,*(undefined4 *)(param_1 + 8),&DAT_0019bb8c);
    uVar3 = 0;
    uStack_44 = uStack_28;
    uStack_40 = uStack_24;
    uStack_3c = uStack_20;
    uStack_38 = uStack_1c;
    uStack_34 = uStack_18;
    uStack_30 = uStack_14;
    if (uStack_2c != 0) {
      do {
        uVar2 = fn_0018385c(&uStack_44,uVar3);
        iVar1 = fn_003035b0(uVar2,puVar4);
        if (iVar1 == 0) {
          uVar2 = fn_00183840(&uStack_44,uVar3);
          return uVar2;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uStack_2c);
    }
  }
  return 0;
}


