#include "003b07bc_003b182c.h"



undefined4 fn_003b182c(undefined4 param_1)

{
  return param_1;
}



undefined4 * fn_003b17d4(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 in_s0;
  
  puVar1 = (undefined4 *)fn_002fdf94();
  *puVar1 = &PTR_FUN_0082ea20;
  puVar1[0x16] = 0;
  puVar1[0x17] = 3;
  puVar1[0x18] = 0;
  *(undefined1 *)(puVar1 + 0x19) = 0;
  fn_006c3a0c(*(undefined4 *)(param_2 + 0x170));
  puVar1[7] = in_s0;
  return puVar1;
}



void fn_003b16e4(int *param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  (**(code **)(*(int *)param_1[1] + 0x34))();
  iVar1 = fn_006aff38(param_1[5],0);
  iVar2 = param_1[5];
  if (iVar1 == 0) {
    fVar3 = *(float *)(*(int *)(iVar2 + 0x170) + 0x20) - *(float *)(iVar2 + 0x20);
    fn_00525bd0();
    param_1[7] = (int)(fVar3 * 0.024543693);
                    /* WARNING: Could not recover jumptable at 0x003b1790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x2c))(param_1,6);
    return;
  }
  if ((*(byte *)(iVar2 + 0x39c) & 8) != 0) {
    fVar3 = *(float *)(param_1[1] + 0x30) + 3.1415927;
    fn_005df8f8();
    param_1[7] = (int)fVar3;
                    /* WARNING: Could not recover jumptable at 0x003b174c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x2c))(param_1,6);
    return;
  }
  iVar1 = param_1[6];
  param_1[6] = iVar1 + 1U;
  if ((uint)(param_1[0x16] * 0x1e) < iVar1 + 1U) {
                    /* WARNING: Could not recover jumptable at 0x003b17c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x2c))(param_1,4);
    return;
  }
  return;
}



void fn_003b1684(int *param_1)

{
  int iVar1;
  
  iVar1 = fn_001c7160(param_1[1]);
  if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x003b16dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)param_1[1] + 0x34))();
    return;
  }
  iVar1 = fn_00163868(param_1[0x17]);
  param_1[0x16] = iVar1 + 1;
                    /* WARNING: Could not recover jumptable at 0x003b16c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2c))(param_1,5);
  return;
}



void fn_003b1644(int *param_1)

{
  fn_00215cb4(param_1[5],param_1 + 0x19,param_1[0x18]);
  if (*(byte *)(param_1 + 0x19) < 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x003b167c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2c))(param_1,6);
  return;
}



undefined4 fn_003b1580(int *param_1)

{
  int iVar1;
  uint in_fpscr;
  float in_s0;
  float fVar2;
  float fVar3;
  
  fn_002fdeac();
  fn_006c3a0c(*(undefined4 *)(param_1[5] + 0x170));
  param_1[7] = (int)in_s0;
  iVar1 = fn_00163868(param_1[0x17]);
  param_1[0x16] = iVar1 + 1;
  (**(code **)(*(int *)param_1[5] + 0x94))();
  if (in_s0 != 0.0) {
    fVar2 = *(float *)(((int *)param_1[5])[0x5c] + 0xe8);
    fVar3 = (float)VectorSignedToFloat(fVar2,(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
    (**(code **)(*(int *)param_1[5] + 0x94))();
    param_1[0x17] = (int)(fVar3 / (fVar2 * 30.0 * 2.0));
  }
  if (param_1[0x17] < 1) {
    param_1[0x17] = 3;
  }
  (**(code **)(*param_1 + 0x2c))(param_1,5);
  return 1;
}



void fn_003b1518(int param_1,int param_2)

{
  undefined4 uVar1;
  uint in_fpscr;
  
  if (param_2 == 6) {
    uVar1 = fn_00163868(0x168);
    uVar1 = VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
    fn_0017fe34();
    *(undefined4 *)(param_1 + 0x1c) = uVar1;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(int *)(param_1 + 0xc) = param_2;
  *(undefined1 *)(param_1 + 100) = 0;
                    /* WARNING: Could not recover jumptable at 0x003b1574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x14) + 0x44))
            (*(int **)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x60),4,0);
  return;
}



undefined4 * fn_003b136c(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined1 uVar3;
  code *pcVar4;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,1);
  *puVar1 = &DAT_0082e9d0;
  piVar2 = (int *)puVar1[5];
  if (param_3 == (undefined1 *)0x0) {
    pcVar4 = *(code **)(*piVar2 + 0x44);
    uVar3 = 0;
  }
  else {
    uVar3 = *param_3;
    pcVar4 = *(code **)(*piVar2 + 0x44);
  }
  (*pcVar4)(piVar2,uVar3,4,0);
  return puVar1;
}



void fn_003b1108(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_0082e8c0;
  if ((int *)param_1[0x2b] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x2b] + 4))();
  }
  if ((int *)param_1[0x2a] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x2a] + 4))();
  }
  uVar1 = param_1[0x27];
  uVar2 = uVar1;
  if ((uint)param_1[0x28] <= uVar1) {
    for (; uVar2 != param_1[0x28]; uVar2 = uVar2 + 4) {
    }
  }
  fn_001008c4(uVar1,(int)(param_1[0x29] - uVar1) >> 2,0);
  uVar1 = param_1[0x24];
  uVar2 = uVar1;
  if ((uint)param_1[0x25] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[0x25]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x26] - uVar1) >> 2,0);
  uVar1 = param_1[0x1f];
  uVar2 = uVar1;
  if ((uint)param_1[0x20] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[0x20]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x21] - uVar1) >> 2,0);
  fn_0068ad5c(param_1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x003b1008) */
/* WARNING: Removing unreachable block (ram,0x003b1080) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffdc : 0x003b100c */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_003b0f3c(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int local_28;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  *puVar1 = &PTR_FUN_0082e8c0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = *(undefined4 *)(param_2 + 8);
  puVar1[0x1b] = 0xffffffff;
  puVar1[0x1c] = 0xffffffff;
  puVar1[0x1d] = 0xffffffff;
  puVar1[0x1e] = 0xffffffff;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  puVar2 = (undefined4 *)fn_00100fc6(0x80,0);
  iVar3 = 4;
  puVar1[0x1f] = puVar2;
  do {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
    }
    iVar3 = iVar3 + -1;
    puVar2 = puVar2 + 1;
  } while (iVar3 != 0);
  iVar3 = puVar1[0x1f];
  puVar1[0x20] = iVar3 + 0x10;
  puVar1[0x21] = iVar3 + 0x80;
  puVar1[0x22] = 0;
  puVar1[0x23] = 0;
  piVar4 = puVar1 + 0x24;
  *piVar4 = 0;
  puVar1[0x25] = 0;
  puVar1[0x26] = 0;
  local_28 = 2;
  puVar2 = (undefined4 *)fn_00100fc6(0x80,0);
  *piVar4 = (int)puVar2;
  for (; local_28 != 0; local_28 = local_28 + -1) {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 1;
  }
  puVar1[0x25] = *piVar4 + 8;
  puVar1[0x26] = *piVar4 + 0x80;
  puVar1[0x27] = 0;
  puVar1[0x28] = 0;
  puVar1[0x29] = 0;
  local_28 = 2;
  puVar2 = (undefined4 *)fn_00100fc6(0x80,0);
  puVar1[0x27] = puVar2;
  for (; local_28 != 0; local_28 = local_28 + -1) {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 1;
  }
  iVar3 = puVar1[0x27];
  puVar1[0x28] = iVar3 + 8;
  puVar1[0x29] = iVar3 + 0x80;
  puVar1[0x2a] = 0;
  puVar1[0x2b] = 0;
  *(undefined1 *)((int)puVar1 + 0xb1) = 0;
  *(undefined1 *)((int)puVar1 + 0xb2) = 0;
  puVar1[0x2d] = 0xffffffff;
  return;
}



void fn_003b0ed0(int param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  
  if (param_2 == 0) {
    *(byte *)(**(int **)(param_1 + 0x90) + 0x44) =
         *(byte *)(**(int **)(param_1 + 0x90) + 0x44) & 0xfe;
    iVar1 = *(int *)(*(int *)(param_1 + 0x90) + 4);
    bVar2 = *(byte *)(iVar1 + 0x44) & 0xfe;
  }
  else {
    *(undefined1 *)(param_1 + 0xb0) = 1;
    *(byte *)(**(int **)(param_1 + 0x9c) + 0x44) =
         *(byte *)(**(int **)(param_1 + 0x9c) + 0x44) & 0xfe;
    iVar1 = *(int *)(*(int *)(param_1 + 0x9c) + 4);
    bVar2 = *(byte *)(iVar1 + 0x44) & 0xfe | 1;
  }
  *(byte *)(iVar1 + 0x44) = bVar2;
  *(char *)(param_1 + 0xb2) = (char)param_2;
  return;
}



void fn_003b07bc(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *(char *)(param_1 + 0xb1);
  if (cVar1 == '\0') {
    iVar2 = fn_006f6a38(param_1);
    if ((iVar2 != 0) || (iVar2 = fn_006f6a44(param_1), iVar2 != 0)) {
      fn_00178eec(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70),1);
      fn_00178eec(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x74),0);
      fn_001caa40(*(undefined4 *)(param_1 + 0xa8),1);
      fn_001caa40(*(undefined4 *)(param_1 + 0xac),0);
      fn_0068ab44(param_1,0x100094b);
      *(undefined1 *)(param_1 + 0xb1) = 1;
    }
  }
  else {
    if (cVar1 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x003b0888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(int **)(param_1 + 0xa8) + 0x18))();
      return;
    }
    if (cVar1 == '\x02') {
      if (*(char *)(param_1 + 0xb2) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x003b07fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(int **)(param_1 + 0xac) + 0x18))();
        return;
      }
      iVar2 = fn_006f6a38(param_1);
      if ((iVar2 != 0) || (iVar2 = fn_006f6a44(param_1), iVar2 != 0)) {
        *(undefined1 *)(*(int *)(param_1 + 100) + 8) = 1;
        fn_00689bd0(param_1,0,0);
        return;
      }
    }
  }
  return;
}


