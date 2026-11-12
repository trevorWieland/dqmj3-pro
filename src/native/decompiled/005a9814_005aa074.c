#include "005a9814_005aa074.h"



void fn_005aa074(void)

{
  fn_005aa084();
  fn_002feef8();
  return;
}



void fn_005aa02c(undefined4 param_1,undefined4 param_2,undefined4 param_3,float *param_4)

{
  float local_20 [2];
  float local_18;
  
  fn_00190d50(param_2,param_3);
  if (param_4 != (float *)0x0) {
    fn_006e2830(local_20,param_2);
    *param_4 = local_18 - local_20[0];
  }
  return;
}



void fn_005a9ebc(int param_1)

{
  float *pfVar1;
  float in_s0;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  *(undefined4 *)(param_1 + 0x30) = 0x43870000;
  if (*(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20) >> 2 == 0) {
    fn_002ff628(9,&DAT_008c766e,&DAT_008c766e,0,0);
  }
  pfVar1 = *(float **)(param_1 + 0x20);
  fVar3 = 10.0;
  fVar4 = 0.5;
  fVar2 = (*pfVar1 + in_s0 + 10.0) * 0.5;
  if ((int)fVar2 < 0x43480000) {
    if (*(int *)(param_1 + 0x24) - (int)pfVar1 >> 2 == 0) {
      fn_002ff628(9,&DAT_008c766e,&DAT_008c766e,0,0);
    }
    *(float *)(param_1 + 0x3c) = fVar2 - (fVar3 + **(float **)(param_1 + 0x20) * fVar4);
    *(float *)(param_1 + 0x58) = in_s0;
  }
  else {
    fVar5 = fVar2 - 200.0;
    if (*(int *)(param_1 + 0x24) - (int)pfVar1 >> 2 == 0) {
      fn_002ff628(9,&DAT_008c766e,&DAT_008c766e,0,0);
    }
    *(float *)(param_1 + 0x3c) = (fVar2 - (fVar3 + **(float **)(param_1 + 0x20) * fVar4)) - fVar5;
    *(float *)(param_1 + 0x58) = in_s0;
    if (0x43c80000 < (int)in_s0) {
      in_s0 = 400.0;
    }
    *(float *)(param_1 + 0x58) = in_s0;
  }
  *(undefined1 *)(param_1 + 0x51) = 0;
  fn_0054ca94(*(undefined4 *)(param_1 + 0x1c),param_1 + 0x30);
  *(undefined2 *)(param_1 + 0x48) = 6;
  *(undefined2 *)(param_1 + 0x2e) = 0;
  return;
}



void fn_005a9dd4(int *param_1)

{
  undefined4 uVar1;
  
  if (param_1[9] - param_1[8] >> 2 == 0) {
    fn_002ff628(9,&DAT_008c766e,&DAT_008c766e,0,0);
  }
  if (param_1[2] - param_1[1] >> 2 == 0) {
    fn_002ff628(9,&DAT_008c7667,&DAT_008c7667,0,0);
  }
  uVar1 = *(undefined4 *)param_1[1];
  if (param_1[5] - param_1[4] >> 2 == 0) {
    fn_002ff628(9,&DAT_008c7665,&DAT_008c7665,0,0);
  }
                    /* WARNING: Could not recover jumptable at 0x005a9eac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,*(undefined4 *)param_1[4],uVar1);
  return;
}



void fn_005a9d88(int param_1)

{
  int iVar1;
  float in_s0;
  float local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  uStack_14 = *(undefined4 *)(iVar1 + 0x20);
  uStack_10 = *(undefined4 *)(iVar1 + 0x24);
  local_18 = *(float *)(iVar1 + 0x1c) + in_s0;
  fn_0054ca94(*(undefined4 *)(param_1 + 0x1c),&local_18);
  *(undefined2 *)(param_1 + 0x48) = 0;
  *(undefined2 *)(param_1 + 0x2e) = 1;
  return;
}



void fn_005a9ce0(void)

{
  fn_005aa084();
  fn_002feef8();
  return;
}



undefined4 fn_005a9c48(int *param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  uVar6 = 1;
  iVar3 = (**(code **)(*param_1 + 0xc))(param_1);
  iVar5 = 0;
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = (int)(short)param_1[0xb];
    iVar5 = iVar4 + -2;
  }
  if (iVar5 < 0 != (iVar3 != 0 && SBORROW4(iVar4,2))) {
    uVar6 = 0;
    sVar1 = (short)iVar4 + (ushort)*(byte *)(param_1 + 0x14);
    *(short *)(param_1 + 0xb) = sVar1;
    if (2 < sVar1) {
      *(undefined2 *)(param_1 + 0xb) = 2;
    }
  }
  iVar5 = fn_005a9afc(param_1);
  if (iVar5 != 0) {
    sVar1 = (short)param_1[0x12];
    if (*(short *)((int)param_1 + 0x2e) < sVar1) {
      uVar6 = 0;
      sVar2 = *(short *)((int)param_1 + 0x2e) + (ushort)*(byte *)(param_1 + 0x14);
      *(short *)((int)param_1 + 0x2e) = sVar2;
      if (sVar1 < sVar2) {
        sVar2 = sVar1;
      }
      *(short *)((int)param_1 + 0x2e) = sVar2;
    }
  }
  return uVar6;
}



void fn_005a9b8c(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    fn_00151954(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xc));
    if (*(int **)(param_1 + 0x1c) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
    }
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  uVar2 = *(uint *)(param_1 + 8);
  uVar3 = *(uint *)(param_1 + 4);
  if (uVar3 != uVar2) {
    uVar1 = uVar3;
    if (uVar2 <= uVar3) {
      do {
        uVar1 = uVar1 + 4;
      } while (uVar1 != uVar2);
    }
    *(uint *)(param_1 + 8) = uVar2 - (uVar2 - uVar3 & 0xfffffffc);
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  uVar3 = *(uint *)(param_1 + 0x14);
  if (uVar2 != uVar3) {
    uVar1 = uVar2;
    if (uVar3 <= uVar2) {
      do {
        uVar1 = uVar1 + 4;
      } while (uVar1 != uVar3);
    }
    *(uint *)(param_1 + 0x14) = uVar3 - (uVar3 - uVar2 & 0xfffffffc);
  }
  return;
}



bool fn_005a9afc(int param_1)

{
  int iVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float local_10;
  float fStack_c;
  float local_8;
  
  iVar2 = (int)*(short *)(param_1 + 0x2e);
  iVar1 = (int)*(short *)(param_1 + 0x48);
  if (iVar2 <= iVar1) {
    fVar3 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
    fVar4 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
    fVar4 = fVar4 / fVar3;
    fVar3 = 1.0 - fVar4;
    local_10 = *(float *)(param_1 + 0x30) * fVar3 + *(float *)(param_1 + 0x3c) * fVar4;
    fStack_c = *(float *)(param_1 + 0x34) * fVar3 + *(float *)(param_1 + 0x40) * fVar4;
    local_8 = *(float *)(param_1 + 0x38) * fVar3 + *(float *)(param_1 + 0x44) * fVar4;
    fn_0054ca94(*(undefined4 *)(param_1 + 0x1c),&local_10);
  }
  return iVar2 <= iVar1;
}



void fn_005a99ec(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  fn_003d0b80(*(undefined4 *)(param_1 + 8),0);
  fn_003d0ae8(*(undefined4 *)(param_1 + 8),1,0);
  fn_003cfaac(param_1,2);
  fn_003d0478(*(undefined4 *)(param_1 + 8),2);
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(*(int *)(param_1 + 8) + 0x14);
  uVar3 = *(undefined4 *)(iVar2 + 0x20);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar2 + 0x1c);
  *(undefined4 *)(iVar1 + 8) = uVar3;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  fn_0038dad0(*(undefined4 *)(param_1 + 4),0,5,0,1,&DAT_005a9acc,&DAT_005a9acc);
  fn_0038dad0(*(undefined4 *)(param_1 + 4),1,5,1,1,&DAT_005a9acc,&DAT_005a9acc);
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x22) = 1;
  return;
}



void fn_005a9944(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  fn_0038d4c4(*(undefined4 *)(param_1 + 4),0,(int)*(char *)(param_1 + 0x22),param_4,param_4);
  iVar3 = *(int *)(param_1 + 4);
  uVar2 = (uint)*(char *)(param_1 + 0x14);
  uVar1 = *(int *)(iVar3 + 0x1c) - *(int *)(iVar3 + 0x18) >> 2;
  if (uVar1 <= uVar2) {
    fn_002ff628(9,&DAT_008c765f,&DAT_008c765f,uVar2,uVar1);
  }
  fn_0025e7cc(*(undefined4 *)(param_1 + 0x34),**(int **)(*(int *)(iVar3 + 0x18) + uVar2 * 4) + 0x1c
              );
  fn_003cfa24(param_1,param_2,param_3,param_4);
  return;
}



undefined4 * fn_005a9814(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  *param_1 = &DAT_00847230;
  do {
    fn_0018cb08(param_1,uVar4);
    uVar4 = uVar4 + 1;
  } while (uVar4 < 4);
  uVar4 = 0;
  if ((int)(param_1[2] - param_1[1]) >> 2 != 0) {
    do {
      uVar3 = (int)(param_1[2] - param_1[1]) >> 2;
      if (uVar3 <= uVar4) {
        fn_002ff628(9,&DAT_008c7659,&DAT_008c7659,uVar4,uVar3);
        param_4 = uVar3;
      }
      piVar1 = *(int **)(param_1[1] + uVar4 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)((int)(param_1[2] - param_1[1]) >> 2));
  }
  uVar4 = param_1[2];
  uVar3 = param_1[1];
  if (uVar3 != uVar4) {
    uVar2 = uVar3;
    if (uVar4 <= uVar3) {
      do {
        uVar2 = uVar2 + 4;
      } while (uVar2 != uVar4);
    }
    param_1[2] = uVar4 - (uVar4 - uVar3 & 0xfffffffc);
  }
  uVar3 = param_1[1];
  uVar4 = uVar3;
  if ((uint)param_1[2] < uVar3) {
    do {
      uVar4 = uVar4 + 4;
    } while (uVar4 != param_1[2]);
  }
  fn_001008c4(uVar3,(int)(param_1[3] - uVar3) >> 2,0,uVar3,param_4);
  return param_1;
}


