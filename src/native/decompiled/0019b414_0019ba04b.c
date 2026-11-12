#include "0019b414_0019ba04b.h"



void fn_0019ba04(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (**(code **)(*param_2 + 0x14))(param_2,param_3);
  iVar2 = (**(code **)(*param_1 + 0x28))(param_1,param_4);
  fn_0019501c(*(int *)(iVar2 + 0x78) + param_5 * 0x20,uVar1);
  *(byte *)(iVar2 + 0x7c) = *(byte *)(iVar2 + 0x7c) & 0xf7;
  return;
}



undefined4 * fn_0019b998(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  iVar1 = 4;
  *param_1 = &DAT_00850dac;
  if (4 < param_3) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_3);
  }
  fn_0019b390(param_1);
  param_1[10] = 0;
  param_1[5] = param_2;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  fn_0019e8c4(param_2 + 0x44,param_1);
  return param_1;
}



undefined4 fn_0019b728(int param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  bool bVar11;
  
  while (uVar7 = *param_2, uVar7 != 0x1000001) {
    bVar11 = uVar7 == 0x1000008;
    iVar2 = 0;
    if (!bVar11) {
      iVar2 = uVar7 + 0xfafffffe;
      bVar11 = iVar2 == 0;
    }
    if (bVar11) {
      uVar3 = param_2[1];
    }
    else if (iVar2 == 2) {
      uVar3 = (uint)(float)param_2[1];
    }
    else if (iVar2 == 0x300000e) {
      uVar3 = *(uint *)(param_2[1] + 0x18);
    }
    else {
      uVar3 = (int)param_2[1] >> 3;
    }
    uVar9 = *(int *)(param_1 + 0x24) - 1;
    puVar4 = (uint *)(*(int *)(param_1 + 0x20) + (uVar3 & uVar9) * 0x14);
    puVar10 = puVar4;
    do {
      uVar3 = puVar10[3];
      bVar11 = uVar3 == param_2[1];
      if (bVar11) {
        uVar3 = puVar10[2];
      }
      if (bVar11 && uVar3 == uVar7) {
        if (puVar10 != (uint *)0x0) {
          fn_0019e864(puVar10,param_3);
          return 0;
        }
        break;
      }
      puVar10 = (uint *)puVar10[4];
    } while (puVar10 != (uint *)0x0);
    uVar7 = puVar4[2];
    puVar10 = puVar4;
    if (uVar7 != 0x1000001) {
      bVar11 = uVar7 == 0x1000008;
      iVar2 = 0;
      if (!bVar11) {
        iVar2 = uVar7 + 0xfafffffe;
        bVar11 = iVar2 == 0;
      }
      puVar10 = *(uint **)(param_1 + 0x1c);
      if (bVar11) {
        uVar7 = puVar4[3];
      }
      else if (iVar2 == 2) {
        uVar7 = (uint)(float)puVar4[3];
      }
      else if (iVar2 == 0x300000e) {
        uVar7 = *(uint *)(puVar4[3] + 0x18);
      }
      else {
        uVar7 = (int)puVar4[3] >> 3;
      }
      if ((puVar10 < puVar4) &&
         (puVar5 = (uint *)(*(int *)(param_1 + 0x20) + (uVar7 & uVar9) * 0x14), puVar5 != puVar4)) {
        for (puVar1 = (uint *)puVar5[4]; puVar1 != puVar4; puVar1 = (uint *)puVar1[4]) {
          if (puVar1 == (uint *)0x0) goto code_r0x0019b8c0;
          puVar5 = puVar1;
        }
        puVar5[4] = (uint)puVar10;
        fn_0019e864(puVar10 + 2,puVar4 + 2);
        fn_0019e864(puVar10,puVar4);
        puVar10[4] = puVar4[4];
        fn_0019e864(puVar4 + 2,&DAT_008c06e8);
        fn_0019e864(puVar4,&DAT_008c06e8);
        puVar4[4] = 0;
        puVar10 = puVar4;
      }
      else {
        puVar10[4] = puVar4[4];
        puVar4[4] = (uint)puVar10;
      }
    }
    fn_0019e864(puVar10 + 2,param_2);
    iVar2 = *(int *)(param_1 + 0x1c);
    while( true ) {
      iVar8 = *(int *)(iVar2 + 8);
      bVar11 = iVar8 == 0x1000001;
      if (bVar11) {
        iVar8 = *(int *)(iVar2 + 0x10);
      }
      if (bVar11 && iVar8 == 0) {
        piVar6 = (int *)puVar10[1];
        uVar3 = *puVar10;
        puVar10[1] = param_3[1];
        uVar7 = *param_3;
        *puVar10 = uVar7;
        if ((uVar7 & 0x8000000) != 0) {
          *(int *)(puVar10[1] + 4) = *(int *)(puVar10[1] + 4) + 1;
        }
        if (((uVar3 & 0x8000000) != 0) &&
           (iVar2 = piVar6[1], piVar6[1] = iVar2 + -1, iVar2 + -1 == 0)) {
          (**(code **)(*piVar6 + 8))();
        }
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
        return 1;
      }
      if (iVar2 == *(int *)(param_1 + 0x20)) break;
      iVar2 = iVar2 + -0x14;
      *(int *)(param_1 + 0x1c) = iVar2;
    }
    fn_0019b4ec(param_1,1);
  }
code_r0x0019b8c0:
                    /* WARNING: Subroutine does not return */
  fn_00146590();
}



void fn_0019b650(int param_1,float *param_2)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  bool bVar6;
  
  fVar4 = *param_2;
  fVar1 = param_2[1];
  if ((fVar4 == 2.350991e-38) || (fVar4 == 6.0185325e-36)) {
    fVar3 = fVar1;
  }
  else if (fVar4 == 6.018534e-36) {
    fVar3 = (float)(int)fVar1;
  }
  else if (fVar4 == 3.8518672e-34) {
    fVar3 = *(float *)((int)fVar1 + 0x18);
  }
  else {
    fVar3 = (float)((int)fVar1 >> 3);
  }
  iVar5 = *(int *)(param_1 + 0x20) + ((uint)fVar3 & *(int *)(param_1 + 0x24) - 1U) * 0x14;
  while( true ) {
    fVar3 = *(float *)(iVar5 + 0xc);
    bVar6 = fVar3 == fVar1;
    if (bVar6) {
      fVar3 = *(float *)(iVar5 + 8);
    }
    if (bVar6 && fVar3 == fVar4) break;
    iVar5 = *(int *)(iVar5 + 0x10);
    if (iVar5 == 0) {
      return;
    }
  }
  if (iVar5 == 0) {
    return;
  }
  uVar2 = fn_0019e864(iVar5 + 8,&DAT_008c06e8);
  fn_0019e864(iVar5,uVar2);
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
  fn_0019b4ec(param_1,0);
  return;
}


