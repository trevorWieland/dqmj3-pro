#include "005448f0_00544c54.h"



void fn_00544c54(int param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  puVar1 = (uint *)(**(code **)(**(int **)(param_1 + 600) + 0x10))();
  if ((puVar1 != (uint *)0x0) && ((*puVar1 & 0x20000000) == 0)) {
    puVar1 = (uint *)0x0;
  }
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  puVar1[2] = *param_2;
  puVar1[3] = uVar2;
  puVar1[4] = uVar3;
  return;
}



uint fn_00544c0c(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = fn_00542fb4();
  if ((uVar1 & 0x80000000) == 0) {
    uVar2 = fn_00544c90(param_1,param_2);
    uVar3 = fn_00545364(param_1,param_2);
    uVar1 = uVar3 | uVar1 | uVar2;
  }
  return uVar1;
}



void fn_005449ec(int param_1,float *param_2,float *param_3)

{
  char cVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_48;
  float local_44 [12];
  
  iVar2 = *(int *)(param_1 + 0x1c);
  cVar1 = *(char *)(param_1 + 8);
  fVar8 = *(float *)(iVar2 + 0xc);
  fVar6 = *(float *)(iVar2 + 4);
  fVar11 = *(float *)(iVar2 + 8);
  fn_0052534c(&local_48,local_44);
  fVar9 = 1.0;
  fVar10 = -1.0;
  fVar3 = local_44[0] / local_48;
  fVar7 = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  param_2[3] = 0.0;
  param_2[4] = 0.0;
  param_2[6] = 0.0;
  param_2[7] = 0.0;
  param_2[8] = 0.0;
  param_2[9] = 0.0;
  param_2[0xc] = 0.0;
  param_2[0xd] = 0.0;
  param_2[0xe] = -1.0;
  fVar4 = 1.0 / (fVar11 - fVar6);
  param_2[0xf] = 0.0;
  fVar5 = fVar3 / fVar8;
  *param_2 = fVar5;
  param_2[5] = fVar3;
  param_2[10] = fVar11 * fVar4;
  param_2[0xb] = fVar11 * fVar6 * fVar4;
  if (cVar1 != '\0' && cVar1 != '\x04') {
    if (cVar1 == '\x02') {
      *param_2 = -fVar5;
      param_2[1] = -0.0;
      param_2[2] = -0.0;
      param_2[3] = -0.0;
      param_2[4] = -0.0;
      param_2[5] = -fVar3;
      param_2[6] = -0.0;
      param_2[7] = -0.0;
    }
    else if (cVar1 == '\x03') {
      fVar4 = param_2[1];
      *param_2 = -0.0;
      param_2[1] = -fVar3;
      param_2[2] = -0.0;
      param_2[3] = -0.0;
      param_2[4] = fVar5;
      param_2[5] = fVar4;
    }
    else {
      *param_2 = param_2[4];
      param_2[1] = param_2[5];
      param_2[4] = -fVar5;
      param_2[5] = -0.0;
      param_2[6] = -0.0;
      param_2[7] = -0.0;
    }
  }
  fVar3 = *(float *)(param_1 + 0xc);
  fVar4 = *(float *)(param_1 + 0x10);
  fVar5 = *(float *)(param_1 + 0x14);
  fVar6 = *(float *)(param_1 + 0x18);
  fn_0052534c(&local_48,local_44);
  fVar9 = fVar9 / (local_48 / local_44[0]);
  *param_3 = (fVar9 / fVar8) * fVar3;
  param_3[1] = fVar7;
  param_3[2] = -fVar5;
  param_3[3] = fVar7;
  param_3[4] = fVar7;
  param_3[5] = fVar9 * fVar4;
  param_3[6] = -fVar6;
  param_3[7] = fVar7;
  param_3[8] = fVar7;
  param_3[9] = fVar7;
  param_3[10] = fVar10;
  param_3[0xb] = fVar7;
  return;
}



void fn_005448f0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,0x20,4);
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,0x14,4);
  iVar4 = 0x14;
  puVar3 = puVar2;
  do {
    iVar4 = iVar4 + -1;
    *(undefined1 *)puVar3 = 0;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  } while (iVar4 != 0);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
  }
  *puVar2 = 0x20000000;
  puVar2[1] = 0x3f800000;
  puVar2[2] = 0x3f800000;
  puVar2[4] = 0x3f490fdb;
  puVar2[3] = 0x3f800000;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = param_1;
    *(undefined1 *)(puVar1 + 2) = 0;
    *(undefined1 *)((int)puVar1 + 9) = 1;
    puVar1[3] = 0x3f000000;
    puVar1[4] = 0x3f000000;
    puVar1[5] = 0x3f000000;
    puVar1[6] = 0x3f000000;
    puVar1[7] = puVar2;
    *puVar1 = &DAT_0085784c;
  }
  return;
}


