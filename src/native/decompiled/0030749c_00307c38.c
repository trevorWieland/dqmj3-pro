#include "0030749c_00307c38.h"



void fn_00307c38(int param_1)

{
  int iVar1;
  float in_s0;
  
  iVar1 = *(int *)(param_1 + 0x24);
  *(undefined4 *)(iVar1 + 0x3c) = *(undefined4 *)(iVar1 + 0x3c);
  *(float *)(iVar1 + 0x40) = *(float *)(iVar1 + 0x40) + in_s0;
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xef | 0x10;
  iVar1 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(iVar1 + 0x3c) = *(undefined4 *)(iVar1 + 0x3c);
  *(float *)(iVar1 + 0x40) = *(float *)(iVar1 + 0x40) + in_s0;
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xef | 0x10;
  iVar1 = *(int *)(param_1 + 0x18);
  *(undefined4 *)(iVar1 + 0x3c) = *(undefined4 *)(iVar1 + 0x3c);
  *(float *)(iVar1 + 0x40) = *(float *)(iVar1 + 0x40) + in_s0;
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xef | 0x10;
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) + in_s0;
  return;
}



void fn_00307c28(int param_1,undefined4 param_2)

{
  *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x3c) = param_2;
  return;
}



void fn_00307bb8(int param_1)

{
  fn_0069e748();
  fn_00307a1c(param_1,0);
  if (*(byte *)(param_1 + 0x40) != *(byte *)(param_1 + 0x41)) {
    *(byte *)(*(int *)(param_1 + 0x18) + 0x44) =
         *(byte *)(param_1 + 0x41) | *(byte *)(*(int *)(param_1 + 0x18) + 0x44) & 0xfe;
  }
  if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x34)) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x34);
  }
  if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 0x3c)) {
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x3c);
  }
  if (*(char *)(param_1 + 0x40) != *(char *)(param_1 + 0x41)) {
    *(char *)(param_1 + 0x40) = *(char *)(param_1 + 0x41);
  }
  return;
}



undefined4 fn_00307ba8(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x1c);
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x20);
  }
  return uVar1;
}



void fn_00307a0c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x34) = param_2;
  return;
}



void fn_00307900(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x2c))(*(int **)(param_1 + 8),DAT_00893780,1);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  uVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x2c))(*(int **)(param_1 + 8),DAT_00893784,1);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x2c))(*(int **)(param_1 + 8),DAT_00893788,1);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  uVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x2c))(*(int **)(param_1 + 8),DAT_0089378c,1);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  uVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x2c))(*(int **)(param_1 + 8),DAT_00893790,1);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x40);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x3c);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  fn_0069e710(param_1);
  fn_00307a1c(param_1,1);
  *(byte *)(*(int *)(param_1 + 0x18) + 0x44) =
       *(byte *)(param_1 + 0x41) | *(byte *)(*(int *)(param_1 + 0x18) + 0x44) & 0xfe;
  if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x34)) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x34);
  }
  if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 0x3c)) {
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x3c);
  }
  if (*(char *)(param_1 + 0x40) != *(char *)(param_1 + 0x41)) {
    *(char *)(param_1 + 0x40) = *(char *)(param_1 + 0x41);
  }
  return;
}



void fn_00307a1c(int param_1,int param_2)

{
  int iVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (((param_2 != 0) || (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x34))) ||
     (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 0x3c))) {
    fVar2 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x34),(byte)(in_fpscr >> 0x16) & 3)
    ;
    fVar2 = *(float *)(param_1 + 0x2c) / fVar2;
    iVar1 = *(int *)(param_1 + 0x14);
    if ((int)fVar2 < 0x42300000) {
      fVar2 = 44.0;
    }
    *(undefined4 *)(iVar1 + 0x3c) = *(undefined4 *)(iVar1 + 0x3c);
    *(float *)(iVar1 + 0x40) = fVar2;
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xef | 0x10;
    fVar4 = *(float *)(param_1 + 0x2c) - fVar2;
    fVar3 = fVar4 * 0.5;
    if (1 < *(int *)(param_1 + 0x34)) {
      fVar5 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x3c),
                                         (byte)(in_fpscr >> 0x16) & 3);
      fVar6 = (float)VectorSignedToFloat(*(int *)(param_1 + 0x34) + -1,(byte)(in_fpscr >> 0x16) & 3)
      ;
      fVar3 = fVar3 - (fVar5 * fVar4) / fVar6;
    }
    iVar1 = *(int *)(param_1 + 0x14);
    *(float *)(iVar1 + 0x20) = fVar3;
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xef | 0x10;
    fVar4 = *(float *)(param_1 + 0x2c);
    iVar1 = *(int *)(param_1 + 0x1c);
    *(undefined4 *)(iVar1 + 0x3c) = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x3c);
    fVar4 = (fVar4 * 0.5 - fVar3) - fVar2 * 0.5;
    if (fVar4 < 0.0) {
      fVar4 = -fVar4;
    }
    *(float *)(iVar1 + 0x40) = fVar4;
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xef | 0x10;
    iVar1 = *(int *)(param_1 + 0x20);
    fVar4 = (*(float *)(param_1 + 0x2c) * -0.5 - fVar3) + fVar2 * 0.5;
    if (fVar4 < 0.0) {
      fVar4 = -fVar4;
    }
    *(float *)(iVar1 + 0x40) = fVar4;
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xef | 0x10;
    iVar1 = *(int *)(param_1 + 0x1c);
    *(float *)(iVar1 + 0x20) = fVar3 + fVar2 * 0.5;
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xef | 0x10;
    iVar1 = *(int *)(param_1 + 0x20);
    *(float *)(iVar1 + 0x20) = fVar3 - fVar2 * 0.5;
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xef | 0x10;
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x003077fc) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffd4 : 0x00307800 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 * fn_00307738(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined1 in_stack_0000000c;
  int local_30;
  
  puVar1 = (undefined4 *)fn_002e4414();
  *puVar1 = &DAT_00821a78;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar2 = (undefined4 *)fn_00100fc6(0x80,0);
  iVar3 = 4;
  puVar1[7] = puVar2;
  do {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
    }
    iVar3 = iVar3 + -1;
    puVar2 = puVar2 + 1;
  } while (iVar3 != 0);
  iVar3 = puVar1[7];
  puVar1[8] = iVar3 + 0x10;
  puVar1[9] = iVar3 + 0x80;
  piVar4 = puVar1 + 10;
  *piVar4 = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  local_30 = 4;
  puVar2 = (undefined4 *)fn_00100fc6(0x80,0);
  *piVar4 = (int)puVar2;
  for (; local_30 != 0; local_30 = local_30 + -1) {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 1;
  }
  puVar1[0xc] = *piVar4 + 0x80;
  puVar1[0xb] = *piVar4 + 0x10;
  *(undefined1 *)(puVar1 + 0xd) = in_stack_0000000c;
  return puVar1;
}



void fn_003076d4(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  do {
    (**(code **)(**(int **)(*(int *)(param_1 + 0x1c) + iVar2 * 4) + 0x18))();
    piVar3 = (int *)(*(int *)(param_1 + 0x1c) + iVar2 * 4);
    piVar1 = (int *)*piVar3;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    iVar2 = iVar2 + 1;
    *piVar3 = 0;
  } while (iVar2 < 4);
  return;
}



void fn_00307698(int param_1)

{
  int *piVar1;
  int iVar2;
  
  fn_0069e748();
  iVar2 = 0;
  do {
    piVar1 = *(int **)(*(int *)(param_1 + 0x1c) + iVar2 * 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x14))();
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  return;
}



void fn_0030764c(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    fn_0030749c(param_1,*(undefined4 *)(**(int **)(param_1 + 0x18) + iVar1 * 4),
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar1 * 4));
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  return;
}



undefined4 fn_00307600(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  while ((piVar1 = *(int **)(*(int *)(param_1 + 0x1c) + iVar3 * 4), piVar1 == (int *)0x0 ||
         (iVar2 = (**(code **)(*piVar1 + 0x24))(), iVar2 == 0))) {
    iVar3 = iVar3 + 1;
    if (3 < iVar3) {
      return 1;
    }
  }
  return 0;
}



undefined1 * fn_0030749c(int param_1,int param_2,int *param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  if (param_2 == 0) {
    (**(code **)(*param_3 + 0x20))(param_3,0);
    fn_002b427c(param_3,0);
    fn_002b4348(param_3,0);
    *(undefined1 *)((int)param_3 + 0x3d) = 0;
    *(undefined1 *)((int)param_3 + 0x3f) = 0;
    *(undefined1 *)((int)param_3 + 0x1d) = *(undefined1 *)(param_1 + 0x34);
    *(undefined1 *)((int)param_3 + 0x43) = 0;
    *(undefined1 *)((int)param_3 + 0x45) = 0;
    puVar4 = (undefined1 *)fn_002b325c(param_3,0xffffffff);
    return puVar4;
  }
  iVar2 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc));
  fn_0020bbc4(auStack_20,iVar2);
  (**(code **)(*param_3 + 0x20))(param_3,1);
  uVar3 = fn_006bfda8(auStack_1c);
  fn_002b427c(param_3,uVar3);
  uVar3 = fn_006bfe90(auStack_1c);
  fn_002b4348(param_3,uVar3);
  uVar1 = fn_006bf34c(auStack_1c);
  *(undefined1 *)((int)param_3 + 0x3d) = uVar1;
  uVar1 = fn_001f84ac(iVar2 + 0x72);
  *(undefined1 *)((int)param_3 + 0x3f) = uVar1;
  *(undefined1 *)((int)param_3 + 0x1d) = *(undefined1 *)(param_1 + 0x34);
  uVar1 = fn_006bf184(auStack_1c);
  *(undefined1 *)((int)param_3 + 0x43) = uVar1;
  uVar1 = fn_006c0334(auStack_1c);
  *(undefined1 *)((int)param_3 + 0x45) = uVar1;
  if (*(char *)(param_1 + 0x14) == '\0') {
    if (*(char *)(param_1 + 0x15) != '\0') {
      iVar2 = fn_006bfffc(auStack_1c);
      if (iVar2 == 0) {
        uVar3 = 0xffffffff;
      }
      else {
        uVar3 = 7;
      }
      fn_002b325c(param_3,uVar3);
    }
  }
  else {
    fn_002b325c(param_3,3);
  }
  return auStack_20;
}


