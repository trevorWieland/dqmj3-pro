#include "00263430_00263b94.h"



void fn_00263b94(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  iVar1 = fn_006b6bc4();
  uVar3 = 0;
  if (0 < iVar1) {
    do {
      piVar2 = (int *)fn_006b71a8(param_1,uVar3 & 0xff);
      fVar7 = (float)piVar2[2] - *(float *)(param_2 + 8);
      fVar6 = (float)piVar2[3] - *(float *)(param_2 + 0xc);
      fVar5 = (float)piVar2[4] - *(float *)(param_2 + 0x10);
      if (0x4347ffff < (int)SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5)) {
        (**(code **)(*piVar2 + 0x38))(piVar2);
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < iVar1);
  }
  iVar1 = fn_006b6c88(param_1);
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      piVar2 = (int *)fn_006b6b3c(param_1,iVar4);
      fVar7 = (float)piVar2[2] - *(float *)(param_2 + 8);
      fVar6 = (float)piVar2[3] - *(float *)(param_2 + 0xc);
      fVar5 = (float)piVar2[4] - *(float *)(param_2 + 0x10);
      if (0x4347ffff < (int)SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5)) {
        (**(code **)(*piVar2 + 0x38))(piVar2);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x00263aac) */
/* WARNING: Removing unreachable block (ram,0x00263b20) */
/* WARNING: Removing unreachable block (ram,0x00263970) */
/* WARNING: Removing unreachable block (ram,0x002639e8) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffe0 : 0x002638fc */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 * fn_002638a8(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int local_20;
  
  piVar1 = (int *)fn_00145b00(0x9c,&DAT_00812c8c);
  if (piVar1 != (int *)0x0) {
    *piVar1 = 0;
    piVar1[1] = 0;
    piVar1[2] = 0;
    local_20 = 100;
    puVar2 = (undefined4 *)fn_00100fc6(400,0);
    *piVar1 = (int)puVar2;
    for (; local_20 != 0; local_20 = local_20 + -1) {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 0;
      }
      puVar2 = puVar2 + 1;
    }
    piVar1[1] = *piVar1 + 400;
    piVar1[2] = *piVar1 + 400;
    piVar1[3] = 0;
    piVar1[4] = 0;
    piVar1[5] = 0;
    local_20 = 4;
    puVar2 = (undefined4 *)fn_00100fc6(0x80,0);
    piVar1[3] = (int)puVar2;
    for (; local_20 != 0; local_20 = local_20 + -1) {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 0xffffffff;
      }
      puVar2 = puVar2 + 1;
    }
    iVar3 = piVar1[3];
    piVar1[4] = iVar3 + 0x10;
    piVar1[5] = iVar3 + 0x80;
    piVar1[6] = 0;
    piVar1[7] = 0;
    piVar1[8] = 0;
    local_20 = 4;
    puVar2 = (undefined4 *)fn_00100fc6(0x80,0);
    piVar1[6] = (int)puVar2;
    for (; local_20 != 0; local_20 = local_20 + -1) {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 0xffffffff;
      }
      puVar2 = puVar2 + 1;
    }
    iVar3 = piVar1[6];
    piVar1[8] = iVar3 + 0x80;
    piVar1[9] = 0;
    piVar1[7] = iVar3 + 0x10;
    piVar1[10] = 0;
    piVar1[0xb] = 0;
    piVar1[0xc] = 0;
    piVar1[0xd] = 0;
    piVar1[0xe] = 0;
    piVar1[0xf] = 0;
    piVar1[0x10] = 0;
    piVar1[0x11] = 0;
    piVar1[0x12] = 0;
    piVar1[0x13] = 0;
    piVar1[0x14] = 0;
    piVar1[0x15] = 0;
    piVar1[0x16] = 0;
    piVar1[0x17] = 0;
    piVar1[0x18] = 0;
    piVar1[0x19] = 0;
    piVar1[0x1a] = 0;
    piVar1[0x1b] = 0;
    piVar1[0x1c] = 0;
    piVar1[0x1d] = 0;
    piVar1[0x1f] = -1;
    piVar1[0x1e] = 0;
    piVar4 = piVar1 + 0x20;
    *piVar4 = 0;
    piVar1[0x21] = 0;
    piVar1[0x22] = 0;
    local_20 = 0;
    puVar2 = (undefined4 *)fn_00100fc6(0x80,0);
    *piVar4 = (int)puVar2;
    for (; local_20 != 0; local_20 = local_20 + -1) {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 0;
      }
      puVar2 = puVar2 + 1;
    }
    piVar1[0x21] = *piVar4;
    piVar1[0x22] = *piVar4 + 0x80;
    piVar1[0x23] = 0;
    piVar1[0x24] = 0;
    piVar1[0x25] = 0;
    local_20 = 0;
    puVar2 = (undefined4 *)fn_00100fc6(0x80,0);
    piVar1[0x23] = (int)puVar2;
    for (; local_20 != 0; local_20 = local_20 + -1) {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 0;
      }
      puVar2 = puVar2 + 1;
    }
    iVar3 = piVar1[0x23];
    piVar1[0x25] = iVar3 + 0x80;
    piVar1[0x26] = 0;
    piVar1[0x24] = iVar3;
  }
  *param_1 = piVar1;
  return param_1;
}



undefined4 fn_00263814(undefined4 *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  
  piVar2 = (int *)*param_1;
  uVar3 = piVar2[9];
  uVar4 = piVar2[7] - piVar2[6] >> 2;
  if (uVar4 <= uVar3) {
    fn_002ff628(9,&DAT_008c7670,&DAT_008c7670,uVar3,uVar4);
  }
  uVar4 = *(uint *)(piVar2[6] + uVar3 * 4);
  if ((int)uVar4 < 0) {
    uVar1 = 0;
  }
  else {
    uVar3 = piVar2[1] - *piVar2 >> 2;
    if (uVar3 <= uVar4) {
      fn_002ff628(9,&DAT_008c7646,&DAT_008c7646,uVar4,uVar3);
    }
    uVar1 = *(undefined4 *)(*piVar2 + uVar4 * 4);
  }
  return uVar1;
}



undefined4 fn_00263780(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  
  piVar3 = (int *)*param_1;
  uVar4 = piVar3[0x1d] - piVar3[0x1c] >> 2;
  if (uVar4 <= param_2) {
    fn_002ff628(9,&DAT_008c7670,&DAT_008c7670,param_2,uVar4);
  }
  uVar4 = *(uint *)(piVar3[0x1c] + param_2 * 4);
  if ((int)uVar4 < 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = piVar3[1] - *piVar3 >> 2;
    if (uVar1 <= uVar4) {
      fn_002ff628(9,&DAT_008c7646,&DAT_008c7646,uVar4,uVar1);
    }
    uVar2 = *(undefined4 *)(*piVar3 + uVar4 * 4);
  }
  return uVar2;
}



int fn_00263678(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,uint param_8,
                undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                undefined4 param_13)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *param_1;
  iVar2 = fn_00145b00(0x250,&DAT_00812c8c);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = fn_00202228();
    if (iVar2 != 0) {
      uVar3 = fn_00262ad0(iVar4,iVar2);
      fn_002017e4(iVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_11,
                   param_12,param_13);
      fn_006a6834(iVar2,param_10);
      uVar1 = *(int *)(iVar4 + 0x1c) - *(int *)(iVar4 + 0x18) >> 2;
      if (uVar1 <= param_8) {
        fn_002ff628(9,&DAT_008c7670,&DAT_008c7670,param_8,uVar1);
      }
      *(undefined4 *)(*(int *)(iVar4 + 0x18) + param_8 * 4) = uVar3;
      *(uint *)(iVar4 + 0x24) = param_8;
    }
  }
  return iVar2;
}



int fn_0026360c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 local_18;
  
  iVar2 = *param_1;
  local_18 = param_4;
  iVar1 = fn_00145b00(0x60,&DAT_00812c8c);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = fn_0068c604();
    if (iVar1 != 0) {
      local_18 = fn_00262ad0(iVar2,iVar1);
      fn_0079d450(iVar2 + 100,&local_18);
      fn_0068c408(iVar1,param_2,param_3);
    }
  }
  return iVar1;
}



int fn_00263560(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *param_1;
  iVar2 = fn_00145b00(0x8c,&DAT_00812c8c,param_3,param_4,param_4);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = fn_0068c0b4();
    if (iVar2 != 0) {
      uVar3 = fn_00262ad0(iVar4,iVar2);
      fn_0068b7f0(iVar2,param_2,param_3,param_4,param_5);
      uVar1 = *(int *)(iVar4 + 0x10) - *(int *)(iVar4 + 0xc) >> 2;
      if (uVar1 <= param_5) {
        fn_002ff628(9,&DAT_008c7670,&DAT_008c7670,param_5,uVar1);
      }
      *(undefined4 *)(*(int *)(iVar4 + 0xc) + param_5 * 4) = uVar3;
    }
  }
  return iVar2;
}



void fn_00263430(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  
  piVar5 = (int *)*param_1;
  piVar8 = (int *)piVar5[1];
  for (piVar6 = (int *)*piVar5; piVar6 != piVar8; piVar6 = piVar6 + 1) {
    if ((int *)*piVar6 != (int *)0x0) {
      (**(code **)(*(int *)*piVar6 + 8))();
    }
  }
  for (piVar6 = (int *)*piVar5; piVar6 != piVar8; piVar6 = piVar6 + 1) {
    if ((int *)*piVar6 != (int *)0x0) {
      (**(code **)(*(int *)*piVar6 + 0xc))();
    }
  }
  puVar9 = (undefined4 *)piVar5[0x21];
  for (puVar7 = (undefined4 *)piVar5[0x20]; puVar7 != puVar9; puVar7 = puVar7 + 1) {
    fn_002631d8(piVar5,*puVar7);
  }
  piVar8 = (int *)piVar5[0x24];
  for (piVar6 = (int *)piVar5[0x23]; piVar6 != piVar8; piVar6 = piVar6 + 1) {
    if ((int *)*piVar6 != (int *)0x0) {
      (**(code **)(*(int *)*piVar6 + 4))();
    }
  }
  iVar3 = piVar5[0x20];
  piVar5[0x20] = piVar5[0x23];
  piVar5[0x23] = iVar3;
  iVar3 = piVar5[0x21];
  piVar5[0x21] = piVar5[0x24];
  piVar5[0x24] = iVar3;
  iVar3 = piVar5[0x22];
  piVar5[0x22] = piVar5[0x25];
  piVar5[0x25] = iVar3;
  uVar2 = piVar5[0x20];
  uVar4 = piVar5[0x21];
  if (uVar2 != uVar4) {
    uVar1 = uVar2;
    if (uVar4 <= uVar2) {
      do {
        uVar1 = uVar1 + 4;
      } while (uVar1 != uVar4);
    }
    piVar5[0x21] = uVar4 - (uVar4 - uVar2 & 0xfffffffc);
  }
  return;
}


