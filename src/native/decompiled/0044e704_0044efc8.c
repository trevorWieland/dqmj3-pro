#include "0044e704_0044efc8.h"

static void svc_0x32(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x32 }
#endif
}


undefined4 fn_0044eed8(void)

{
  int iVar1;
  bool bVar2;
  float in_s0;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = 0.0;
  if ((in_s0 == 0.0) || ((uint)ABS(in_s0) >> 0x17 == 0xff)) {
    return 0;
  }
  fVar4 = (in_s0 + 2.0) * 2048.0;
  if (0.0 <= fVar4) {
    bVar2 = SBORROW4((int)fVar4,0x46000000);
    iVar1 = (int)fVar4 + -0x46000000;
    if ((int)fVar4 < 0x46000000) {
      bVar2 = SBORROW4((int)fVar4,0x45800000);
      iVar1 = (int)fVar4 + -0x45800000;
      fVar5 = fVar4;
    }
    else {
      fVar5 = 8191.0;
    }
    if (iVar1 < 0 == bVar2) {
      uVar3 = VectorFloatToUnsigned(fVar5 - 4096.0,3);
      return uVar3;
    }
  }
  uVar3 = VectorFloatToUnsigned(fVar5 + 4096.0,3);
  return uVar3;
}



void fn_0044ee24(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int local_18;
  
  iVar1 = *param_1;
  if (iVar1 != 0 && param_2 != 0) {
    local_18 = param_4;
    iVar1 = fn_0044ef7c(iVar1,(iVar1 - param_1[2] & 0xfffffffcU) + 0x18);
    *param_1 = iVar1;
    iVar1 = fn_0044efc8(iVar1,&local_18,param_2,param_3);
    *param_1 = iVar1;
    if ((uint *)param_1[3] != (uint *)0x0) {
      *(uint *)param_1[3] = (uint)(iVar1 - param_1[2]) >> 3;
    }
    param_1[2] = *param_1;
    param_1[3] = local_18;
    if (param_1[4] == 0) {
      param_1[4] = *param_1 - param_1[1] & 0xfffffffc;
    }
  }
  return;
}



uint * fn_0044efc8(uint *param_1,undefined4 *param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  
  *param_1 = param_4 >> 3;
  param_1[1] = 0x804f0238;
  *param_2 = param_1 + 2;
  param_1[2] = 0;
  uVar1 = fn_0015fa88(param_3);
  param_1[3] = uVar1 >> 3;
  uVar1 = fn_0015fa88(param_1 + 6);
  param_1[4] = uVar1 >> 3;
  param_1[5] = 1;
  return param_1 + 6;
}



undefined4 * fn_0044ef7c(undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  
  if (((param_2 & 0xf) != 0) && (uVar3 = 4 - ((param_2 & 0xf) >> 2), 0 < (int)uVar3)) {
    puVar1 = param_1 + -1;
    if ((uVar3 & 1) != 0) {
      *param_1 = 0;
      puVar1 = param_1;
    }
    for (iVar2 = (int)uVar3 >> 1; iVar2 != 0; iVar2 = iVar2 + -1) {
      puVar1[1] = 0;
      puVar1 = puVar1 + 2;
      *puVar1 = 0;
    }
    param_1 = param_1 + uVar3;
  }
  return param_1;
}



void fn_0044ede8(int *param_1,int param_2)

{
  *param_1 = param_2;
  if ((uint *)param_1[3] != (uint *)0x0) {
    *(uint *)param_1[3] = (uint)(param_2 - param_1[2]) >> 3;
  }
  param_1[1] = *param_1;
  param_1[3] = 0;
  param_1[2] = *param_1;
  param_1[4] = 0;
  return;
}



uint * fn_0044ed28(uint *param_1,uint param_2,uint *param_3,int param_4)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  
  *param_1 = param_2 | 0x80000000;
  param_1[1] = 0xf02c0;
  param_1[2] = param_3[3];
  param_1[3] = param_4 * 0x400000 - 0x100000U | 0xf02c1;
  param_1[4] = param_3[2];
  param_1[5] = param_3[1];
  puVar1 = param_1 + 7;
  param_1[6] = *param_3;
  iVar2 = param_4 + -1;
  if (0 < iVar2) {
    puVar4 = param_3 + 7;
    puVar5 = param_3 + 6;
    puVar3 = param_3 + 5;
    puVar6 = puVar1;
    do {
      param_3 = param_3 + 4;
      iVar2 = iVar2 + -1;
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 4;
      puVar6[1] = *puVar5;
      puVar5 = puVar5 + 4;
      puVar6[2] = *puVar3;
      puVar3 = puVar3 + 4;
      puVar6[3] = *param_3;
      puVar6 = puVar6 + 4;
    } while (iVar2 != 0);
    puVar1 = puVar1 + param_4 * 4 + -4;
  }
  *puVar1 = 0;
  return puVar1 + 1;
}



void fn_0044ece8(void)

{
  return;
}



void fn_0044eca8(void)

{
  return;
}



undefined4 fn_0044ec84(undefined4 param_1)

{
  if (DAT_008c3cec != (code *)0x0) {
    (*DAT_008c3cec)();
  }
  return param_1;
}



int fn_0044e764(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar3 + 0x80) = 0x8040000;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    uVar2 = *(undefined4 *)(iVar3 + 0x8c);
    *param_2 = *(undefined4 *)(iVar3 + 0x88);
    param_2[1] = uVar2;
    iVar1 = *(int *)(iVar3 + 0x84);
  }
  return iVar1;
}



int fn_0044e704(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,int param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x8030102;
  *(int *)(iVar2 + 0x8c) = param_6;
  *(undefined4 *)(iVar2 + 0x84) = param_3;
  *(undefined4 *)(iVar2 + 0x88) = param_4;
  *(undefined4 *)(iVar2 + 0x90) = param_7;
  *(uint *)(iVar2 + 0x94) = param_6 << 4 | 10;
  *(undefined4 *)(iVar2 + 0x98) = param_5;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    *param_2 = *(undefined4 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}


