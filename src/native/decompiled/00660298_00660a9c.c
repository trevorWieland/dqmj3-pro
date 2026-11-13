#include "00660298_00660a9c.h"



bool fn_00660a9c(int param_1)

{
  return param_1 == 0x1a9;
}



byte fn_00660a7c(int param_1)

{
  return *(byte *)(DAT_008994b0 + param_1 * 0x48 + 4) & 1;
}



int fn_00660a50(int param_1)

{
  if ((param_1 < 0) || (4 < param_1)) {
    return 0x46;
  }
  return (int)*(short *)(&DAT_007d5ea2 + param_1 * 2);
}



undefined4 fn_00660994(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  if (((param_1 == 0) || (param_4 < (int)(uint)(param_3 == 0))) ||
     (iVar1 = fn_00147e6c(param_1,&DAT_00660a44,4), iVar1 != 0)) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 4;
  }
  iVar3 = 0x48;
  iVar4 = 0;
  iVar1 = fn_0011c134(param_3 - 4,param_4 - (uint)(param_3 < 4));
  if (iVar3 != 0 || iVar4 != 0) {
    param_1 = 0;
  }
  if ((int)-(param_4 + (uint)(4 < param_3)) < 0 ==
      (SBORROW4(0,param_4) != SBORROW4(-param_4,(uint)(4 < param_3)))) {
    iVar1 = 0;
  }
  DAT_008994b0 = param_1;
  DAT_008994b4 = iVar1;
  DAT_008994b8 = 0;
  if (0 < iVar1) {
    piVar2 = (int *)(param_1 + 0x1c);
    do {
      iVar3 = *piVar2;
      piVar2 = piVar2 + 0x12;
      if (iVar3 != 0) {
        iVar5 = iVar5 + 1;
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    DAT_008994b8 = iVar5;
  }
  return 1;
}



undefined4 fn_00660978(int param_1)

{
  return *(undefined4 *)(DAT_008994b0 + param_1 * 0x48 + 0xc);
}



undefined4 fn_006608f0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  
  local_24 = 0;
  local_18 = 0;
  fn_00115d78(0x402);
  fn_00115a44(0x402,param_1,0x104,DAT_0089a54c);
  local_20 = DAT_0089a558;
  uStack_1c = DAT_0089a55c;
  uVar1 = fn_001152bc(&local_18,param_2,0x84,&local_24,0);
  fn_001150b0(1);
  return uVar1;
}



undefined4 fn_00660790(int param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float local_28 [6];
  
  pfVar2 = (float *)(DAT_00896d60 + param_1 * 8);
  fVar3 = SQRT((*param_2 - *param_3) * (*param_2 - *param_3) +
               (param_2[1] - param_3[1]) * (param_2[1] - param_3[1]) +
               (param_2[2] - param_3[2]) * (param_2[2] - param_3[2]));
  fVar4 = *pfVar2 - pfVar2[1];
  if (fVar4 == 0.0) {
    fVar4 = 1.0;
    if (*pfVar2 < fVar3) {
      fVar4 = 0.0;
    }
  }
  else {
    local_28[0] = 0.0;
    local_28[1] = 1.0;
    local_28[2] = (*pfVar2 - fVar3) / fVar4;
    pfVar2 = local_28 + 2;
    if (1.0 <= local_28[2]) {
      pfVar2 = local_28 + 1;
    }
    pfVar1 = local_28;
    if (0.0 < *pfVar2) {
      pfVar1 = pfVar2;
    }
    fVar4 = *pfVar1;
  }
  if (0.0 < fVar4) {
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  return 0xffffffff;
}



void fn_006605e0(void)

{
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



void fn_006605b4(int *param_1)

{
  if (*param_1 != -1) {
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  return;
}



undefined4 * fn_0066055c(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &DAT_00850c74;
  uVar1 = param_1[0x14];
  uVar2 = uVar1;
  if ((uint)param_1[0x15] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[0x15]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x16] - uVar1) >> 2,0);
  return param_1;
}



void fn_00660458(undefined4 param_1,int param_2,undefined1 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_006896e0();
  *puVar1 = &DAT_00850c74;
  puVar1[2] = 0;
  puVar1[3] = *(undefined4 *)(param_2 + 0x28);
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  *(undefined1 *)(puVar1 + 0x11) = 0;
  *(undefined1 *)((int)puVar1 + 0x45) = 0;
  *(undefined1 *)((int)puVar1 + 0x46) = 1;
  *(undefined1 *)((int)puVar1 + 0x47) = 1;
  *(undefined1 *)(puVar1 + 0x12) = param_3;
  *(undefined1 *)((int)puVar1 + 0x49) = 0;
  *(undefined1 *)((int)puVar1 + 0x4a) = 0;
  *(undefined1 *)((int)puVar1 + 0x4b) = 0;
  *(undefined1 *)(puVar1 + 0x13) = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  puVar1[0x22] = 0;
  puVar1[0x24] = 0xffffffff;
  puVar1[0x23] = 0;
  puVar1[0x25] = 0xffffffff;
  puVar1[0x26] = 0xffffffff;
  puVar1[0x27] = 0xffffffff;
  puVar1[0x28] = 0xffffffff;
  puVar1[0x29] = 0xffffffff;
  puVar1[0x2a] = 0xffffffff;
  puVar1[0x2b] = 0xffffffff;
  puVar1[0x2c] = 0xffffffff;
  puVar1[0x2d] = 0xffffffff;
  puVar1[0x2e] = 0xffffffff;
  puVar1[0x2f] = 0xffffffff;
  puVar1[0x30] = 0xffffffff;
  *(undefined1 *)(puVar1 + 0x31) = 0;
  return;
}



void fn_0066042c(int param_1,undefined1 param_2)

{
  *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x46) = param_2;
  return;
}



void fn_006603ac(int param_1)

{
  *(undefined1 *)(param_1 + 0x49) = 0;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  *(undefined1 *)(param_1 + 0x4b) = 0;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x9c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xac) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xbc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc0) = 0xffffffff;
  *(undefined1 *)(param_1 + 0xc4) = 0;
  return;
}



void fn_00660364(int *param_1)

{
  (**(code **)(*param_1 + 0x1c))(param_1);
  if (*(char *)((int)param_1 + 0x46) == '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00660398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1);
  return;
}



void fn_0066033c(int param_1)

{
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_1 + 0x94);
  if (*(int *)(param_1 + 0x14) == 0) {
    return;
  }
  fn_0069e8c8(*(undefined4 *)(param_1 + 0xc));
  return;
}



void fn_00660298(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x50) >> 2 != 0) {
    do {
      uVar1 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x50) >> 2;
      if (uVar1 <= uVar2) {
        fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,uVar2,uVar1);
      }
      if (*(int *)(*(int *)(param_1 + 0x50) + uVar2 * 4) != 0) {
        fn_00689b38(*(undefined4 *)(param_1 + 8));
      }
      *(undefined4 *)(*(int *)(param_1 + 0x50) + uVar2 * 4) = 0;
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)(*(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x50) >> 2));
  }
  return;
}


