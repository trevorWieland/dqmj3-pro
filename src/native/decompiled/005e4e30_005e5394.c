#include "005e4e30_005e5394.h"



void fn_005e5394(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  float in_s0;
  float fVar4;
  float in_s1;
  float fVar5;
  
  *(float *)(param_1 + 0x3c) = in_s0;
  *(float *)(param_1 + 0x40) = in_s1;
  fVar5 = 1.0 / (in_s1 - in_s0);
  fVar4 = -(in_s0 * fVar5);
  iVar1 = (uint)*(ushort *)(param_1 + 4) * 0x278 + **(int **)(param_1 + 0x4c) +
          *(int *)(param_1 + 8) * 0x2c;
  iVar3 = 0;
  if ((ABS(fVar5) == 0.0) || (iVar3 = ((uint)ABS(fVar5) >> 0x17) - 0x40, -1 < iVar3)) {
    uVar2 = ((uint)fVar5 & 0x7fffff) >> 0xb | iVar3 << 0xc | ((uint)fVar5 >> 0x1f) << 0x13;
  }
  else {
    uVar2 = ((uint)fVar5 >> 0x1f) << 0x13;
  }
  *(uint *)(iVar1 + 0x28) = uVar2;
  iVar3 = 0;
  if ((ABS(fVar4) == 0.0) || (iVar3 = ((uint)ABS(fVar4) >> 0x17) - 0x40, -1 < iVar3)) {
    uVar2 = ((uint)fVar4 & 0x7fffff) >> 0xb | iVar3 << 0xc | ((uint)fVar4 >> 0x1f) << 0x13;
  }
  else {
    uVar2 = ((uint)fVar4 >> 0x1f) << 0x13;
  }
  *(uint *)(iVar1 + 0x24) = uVar2;
  **(byte **)(param_1 + 0x50) = **(byte **)(param_1 + 0x50) | 1;
  return;
}



void fn_005e529c(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  char cVar8;
  float fVar9;
  float fVar10;
  
  uVar1 = *(undefined2 *)(param_1 + 4);
  uVar7 = *(undefined4 *)(param_1 + 8);
  iVar6 = *param_2;
  iVar2 = fn_00176d68(param_3);
  uVar4 = *(undefined4 *)(param_1 + 0x4c);
  fn_006e0670(iVar6,uVar4,uVar1,uVar7,param_4);
  fn_006e04a0(iVar6,uVar4,uVar1,uVar7,iVar2 + 0x148);
  cVar3 = *(char *)(iVar6 + 0x28);
  cVar8 = cVar3 == '\n';
  if ((!(bool)cVar8) && (cVar3 == '\v')) {
    cVar8 = '\x02';
  }
  *(char *)(param_1 + 0x48) = cVar8;
  if (cVar8 == '\x02') {
    cVar3 = '\x01';
  }
  if (cVar8 != '\x02') {
    cVar3 = '\0';
  }
  *(char *)(*(int *)(param_1 + 8) +
           **(int **)(param_1 + 0x4c) + (uint)*(ushort *)(param_1 + 4) * 0x278 + 0x170) = cVar3;
  uVar4 = *(undefined4 *)(iVar6 + 0x20);
  uVar7 = *(undefined4 *)(iVar6 + 0x24);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(iVar6 + 0x1c);
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  *(undefined4 *)(param_1 + 0x2c) = uVar7;
  uVar4 = *(undefined4 *)(iVar6 + 0x44);
  uVar7 = *(undefined4 *)(iVar6 + 0x48);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(iVar6 + 0x40);
  *(undefined4 *)(param_1 + 0x34) = uVar4;
  *(undefined4 *)(param_1 + 0x38) = uVar7;
  uVar4 = *(undefined4 *)(iVar6 + 0x14);
  uVar7 = *(undefined4 *)(iVar6 + 0x18);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(iVar6 + 0x10);
  *(undefined4 *)(param_1 + 0x1c) = uVar4;
  *(undefined4 *)(param_1 + 0x20) = uVar7;
  uVar4 = *(undefined4 *)(iVar6 + 8);
  uVar7 = *(undefined4 *)(iVar6 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar6 + 4);
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  *(undefined4 *)(param_1 + 0x14) = uVar7;
  fVar9 = *(float *)(iVar6 + 0x54);
  fVar10 = *(float *)(iVar6 + 0x58);
  *(float *)(param_1 + 0x3c) = fVar9;
  *(float *)(param_1 + 0x40) = fVar10;
  fVar10 = 1.0 / (fVar10 - fVar9);
  fVar9 = -(fVar9 * fVar10);
  iVar6 = (uint)*(ushort *)(param_1 + 4) * 0x278 + **(int **)(param_1 + 0x4c) +
          *(int *)(param_1 + 8) * 0x2c;
  iVar2 = 0;
  if ((ABS(fVar10) == 0.0) || (iVar2 = ((uint)ABS(fVar10) >> 0x17) - 0x40, -1 < iVar2)) {
    uVar5 = ((uint)fVar10 & 0x7fffff) >> 0xb | iVar2 << 0xc | ((uint)fVar10 >> 0x1f) << 0x13;
  }
  else {
    uVar5 = ((uint)fVar10 >> 0x1f) << 0x13;
  }
  *(uint *)(iVar6 + 0x28) = uVar5;
  iVar2 = 0;
  if ((ABS(fVar9) == 0.0) || (iVar2 = ((uint)ABS(fVar9) >> 0x17) - 0x40, -1 < iVar2)) {
    uVar5 = ((uint)fVar9 & 0x7fffff) >> 0xb | iVar2 << 0xc | ((uint)fVar9 >> 0x1f) << 0x13;
  }
  else {
    uVar5 = ((uint)fVar9 >> 0x1f) << 0x13;
  }
  *(uint *)(iVar6 + 0x24) = uVar5;
  **(byte **)(param_1 + 0x50) = **(byte **)(param_1 + 0x50) | 1;
  return;
}



void fn_005e5258(int param_1,undefined4 *param_2)

{
  *(undefined4 *)
   (**(int **)(param_1 + 0x4c) + (uint)*(ushort *)(param_1 + 4) * 0x278 +
    *(int *)(param_1 + 8) * 0x10 + 0x1c0) = *param_2;
  **(byte **)(param_1 + 0x50) = **(byte **)(param_1 + 0x50) | 1;
  return;
}



void fn_005e5214(int param_1,undefined4 *param_2)

{
  *(undefined4 *)
   (**(int **)(param_1 + 0x4c) + (uint)*(ushort *)(param_1 + 4) * 0x278 +
    *(int *)(param_1 + 8) * 0x10 + 0x1bc) = *param_2;
  **(byte **)(param_1 + 0x50) = **(byte **)(param_1 + 0x50) | 1;
  return;
}



void fn_005e5204(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *(undefined4 *)(param_1 + 0x30) = *param_2;
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  return;
}



void fn_005e51f4(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *(undefined4 *)(param_1 + 0x24) = *param_2;
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  return;
}



void fn_005e51b0(int param_1,undefined4 *param_2)

{
  *(undefined4 *)
   (**(int **)(param_1 + 0x4c) + (uint)*(ushort *)(param_1 + 4) * 0x278 +
    *(int *)(param_1 + 8) * 0x10 + 0x1b8) = *param_2;
  **(byte **)(param_1 + 0x50) = **(byte **)(param_1 + 0x50) | 1;
  return;
}



void fn_005e516c(int param_1,undefined4 *param_2)

{
  *(undefined4 *)
   (**(int **)(param_1 + 0x4c) + (uint)*(ushort *)(param_1 + 4) * 0x278 +
    *(int *)(param_1 + 8) * 0x10 + 0x1b4) = *param_2;
  **(byte **)(param_1 + 0x50) = **(byte **)(param_1 + 0x50) | 1;
  return;
}



undefined4 * fn_005e4e30(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *extraout_r1;
  undefined4 *extraout_r1_00;
  undefined4 *extraout_r1_01;
  undefined4 *extraout_r1_02;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *in_r12;
  
  puVar1 = &DAT_00858a94;
  *param_1 = &DAT_00858a94;
  piVar4 = (int *)param_1[0x52];
  if (piVar4 != (int *)0x0) {
    if ((int *)*piVar4 != (int *)0x0) {
      (**(code **)(*(int *)*piVar4 + 8))();
    }
    fn_002feef8(piVar4);
    puVar1 = extraout_r1;
  }
  *param_1 = &DAT_00857734;
  puVar7 = (undefined4 *)param_1[0x4c];
  if (puVar7 != (undefined4 *)0x0) {
    puVar8 = (undefined4 *)puVar7[3];
    for (puVar1 = (undefined4 *)puVar7[2]; puVar1 != puVar8; puVar1 = puVar1 + 1) {
      piVar4 = (int *)*puVar1;
      piVar6 = (int *)piVar4[1];
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar4 + 4))(piVar4);
        (**(code **)(*piVar6 + 0xc))(piVar6,piVar4);
      }
    }
    puVar7[3] = puVar7[2];
    if ((int *)puVar7[1] != (int *)0x0 && puVar7[2] != 0) {
      (**(code **)(*(int *)puVar7[1] + 0xc))();
    }
    (**(code **)(*(int *)*puVar7 + 0xc))((int *)*puVar7,puVar7);
    param_1[0x4c] = 0;
    puVar1 = extraout_r1_00;
  }
  *param_1 = &DAT_00857920;
  iVar2 = param_1[3];
  if (iVar2 != 0) {
    puVar7 = *(undefined4 **)(iVar2 + 0x18);
    puVar1 = *(undefined4 **)(iVar2 + 0x1c);
    while( true ) {
      if (puVar7 != puVar1) {
        in_r12 = (undefined4 *)*puVar7;
      }
      if (puVar7 == puVar1 || in_r12 == param_1) break;
      puVar7 = puVar7 + 1;
    }
    if (puVar7 != puVar1) {
      puVar8 = puVar7 + 1;
      if (puVar8 < puVar1) {
        iVar3 = (int)puVar1 - (int)puVar8;
        if (0 < iVar3) {
          puVar1 = puVar7;
          if (iVar3 * 0x20000000 < 0) {
            puVar5 = (undefined4 *)*puVar8;
            puVar8 = puVar7 + 2;
            if (puVar5 != param_1) {
              puVar1 = puVar7 + 1;
              *puVar7 = puVar5;
            }
          }
          puVar7 = puVar1;
          for (iVar3 = iVar3 >> 3; iVar3 != 0; iVar3 = iVar3 + -1) {
            puVar1 = puVar7;
            if ((undefined4 *)*puVar8 != param_1) {
              puVar1 = puVar7 + 1;
              *puVar7 = (undefined4 *)*puVar8;
            }
            puVar5 = puVar8 + 1;
            puVar8 = puVar8 + 2;
            puVar7 = puVar1;
            if ((undefined4 *)*puVar5 != param_1) {
              puVar7 = puVar1 + 1;
              *puVar1 = (undefined4 *)*puVar5;
            }
          }
        }
      }
      else {
        while (puVar8 != puVar1) {
          puVar5 = (undefined4 *)*puVar8;
          puVar8 = puVar8 + 1;
          if (puVar5 != param_1) {
            *puVar7 = puVar5;
            puVar7 = puVar7 + 1;
          }
        }
      }
    }
    puVar8 = *(undefined4 **)(iVar2 + 0x1c);
    *(undefined4 **)(iVar2 + 0x1c) = puVar7;
    puVar1 = (undefined4 *)0x0;
    if (puVar8 != puVar7) {
      puVar1 = (undefined4 *)0x0;
      param_1[3] = 0;
    }
  }
  puVar7 = (undefined4 *)param_1[0xd];
  if (puVar7 != (undefined4 *)0x0) {
    puVar8 = (undefined4 *)puVar7[3];
    for (puVar1 = (undefined4 *)puVar7[2]; puVar1 != puVar8; puVar1 = puVar1 + 1) {
      piVar6 = (int *)*puVar1;
      piVar4 = (int *)piVar6[1];
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar6 + 4))(piVar6);
        (**(code **)(*piVar4 + 0xc))(piVar4,piVar6);
      }
    }
    puVar7[3] = puVar7[2];
    if ((int *)puVar7[1] != (int *)0x0 && puVar7[2] != 0) {
      (**(code **)(*(int *)puVar7[1] + 0xc))();
    }
    (**(code **)(*(int *)*puVar7 + 0xc))((int *)*puVar7,puVar7);
    param_1[0xd] = 0;
    puVar1 = extraout_r1_01;
  }
  puVar7 = (undefined4 *)param_1[10];
  if ((puVar7 != (undefined4 *)0x0) && (*(char *)(param_1 + 0xb) != '\0')) {
    (**(code **)*puVar7)(puVar7);
    (**(code **)(*(int *)puVar7[1] + 0xc))((int *)puVar7[1],puVar7);
    puVar1 = extraout_r1_02;
  }
  puVar7 = (undefined4 *)param_1[6];
  puVar8 = (undefined4 *)param_1[7];
  if (puVar7 < puVar8) {
    puVar1 = (undefined4 *)0x1;
    iVar3 = 1;
    iVar2 = (int)puVar8 - (int)puVar7 >> 2;
    if (1 < iVar2 + 1) {
      do {
        puVar1 = (undefined4 *)*puVar7;
        iVar3 = iVar3 + 1;
        puVar7 = puVar7 + 1;
        if (puVar1 != (undefined4 *)0x0) {
          puVar1[3] = 0;
        }
      } while (iVar3 < iVar2 + 1);
    }
  }
  else {
    while (puVar7 != puVar8) {
      puVar1 = (undefined4 *)*puVar7;
      puVar7 = puVar7 + 1;
      if (puVar1 != (undefined4 *)0x0) {
        puVar1[3] = 0;
      }
    }
  }
  param_1[7] = param_1[6];
  piVar4 = (int *)param_1[5];
  if (piVar4 != (int *)0x0) {
    puVar1 = (undefined4 *)param_1[6];
  }
  if (piVar4 != (int *)0x0 && puVar1 != (undefined4 *)0x0) {
    (**(code **)(*piVar4 + 0xc))();
  }
  return param_1;
}


