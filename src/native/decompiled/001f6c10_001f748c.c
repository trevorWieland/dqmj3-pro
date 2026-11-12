#include "001f6c10_001f748c.h"



void fn_001f748c(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001f7498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x10) + 0x24))();
  return;
}



void fn_001f7468(int param_1)

{
  fn_001f7624();
                    /* WARNING: Could not recover jumptable at 0x001f7498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x10) + 0x24))(*(int **)(param_1 + 0x10),0xd4,1);
  return;
}



void fn_001f7448(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x14) + 0x28))();
  return;
}



void fn_001f7438(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001f7444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x14) + 0x24))();
  return;
}



void fn_001f7430(int param_1)

{
  fn_0028eac8(*(undefined4 *)(param_1 + 0xc));
  return;
}



void fn_001f7424(int param_1)

{
  fn_0028eac8(*(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x18) + 0xc));
  return;
}



void fn_001f7414(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001f7420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x14) + 0x30))();
  return;
}



void fn_001f73b8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uStack_10;
  
  *(undefined1 *)(param_1 + 0x22) = 2;
  uStack_10 = param_4;
  uVar1 = fn_001603f8(&uStack_10,0xff);
  fn_00163988(DAT_00897808,uVar1,param_2);
  uVar1 = fn_001603f8(&uStack_10,0xff);
  fn_00163988(DAT_0089780c,uVar1,param_2);
  return;
}



void fn_001f73a0(int param_1,undefined4 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x001f73b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x18) + 0x24))(*(int **)(param_1 + 0x18),param_2,0);
  return;
}



void fn_001f7390(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001f739c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x14) + 0x2c))();
  return;
}



void fn_001f7350(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = &DAT_0081c1ec;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  return;
}



void fn_001f7318(undefined4 *param_1)

{
  *param_1 = &DAT_0081c1d4;
  if (param_1[0x21] != 0) {
    fn_0019fb94();
    param_1[0x21] = 0;
  }
  fn_0055563c(param_1);
  return;
}



int fn_001f72e0(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_00555604();
  *puVar1 = &DAT_0081c1d4;
  iVar2 = fn_00101a1c(puVar1 + 0x22,fn_0017d8f8,4,7);
  *(undefined4 *)(iVar2 + -4) = 0;
  return iVar2 + -0x88;
}



uint fn_001f7254(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint param_5,
                 undefined4 param_6,uint param_7)

{
  uint uVar1;
  uint unaff_r7;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  param_7 = param_7 & 0xff;
  uVar2 = (*(ushort *)(param_1 + 0x74) & 0x1ff) >> 6;
  uVar3 = 0;
  if (uVar2 < param_5) {
    unaff_r7 = 1;
  }
  uVar4 = 0;
  uVar5 = 0;
  if (param_5 <= uVar2) {
    unaff_r7 = 0;
  }
  uVar2 = param_5;
  uVar1 = fn_005548fc(param_1);
  if ((uVar1 & unaff_r7) != 0) {
    if (*(int *)(param_1 + 0x84) != 0) {
      fn_0019fb94();
      *(undefined4 *)(param_1 + 0x84) = 0;
    }
    uVar3 = fn_00194ee4(param_5 * 0x16,4,param_3,param_4,uVar2,param_6,param_7,uVar3,uVar4,uVar5);
    *(undefined4 *)(param_1 + 0x84) = uVar3;
    uVar1 = 0;
  }
  return uVar1;
}



int * fn_001f6c10(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  iVar1 = fn_00145b00(0x78,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_00241510(iVar1,0x80000);
  }
  piVar4 = (int *)*param_1;
  if (piVar4 != piVar2) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    *param_1 = (int)piVar2;
  }
  iVar1 = fn_00145b00(0x40,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_0023e8ec(iVar1,4);
  }
  piVar4 = (int *)param_1[1];
  if (piVar4 != piVar2) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    param_1[1] = (int)piVar2;
  }
  *(int *)(param_1[1] + 4) = *param_1;
  iVar1 = fn_00145b00(0x48,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_001138cc(iVar1,&DAT_001f6fd0);
  }
  piVar4 = (int *)param_1[2];
  if (piVar4 != piVar2) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    param_1[2] = (int)piVar2;
  }
  iVar1 = fn_00145b00(0x48,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_001138ac(iVar1,&DAT_001f6fd0);
  }
  piVar4 = (int *)param_1[3];
  if (piVar4 != piVar2) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    param_1[3] = (int)piVar2;
  }
  iVar1 = fn_00145b00(0x48,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_001138cc(iVar1,&DAT_001f6fd0);
  }
  piVar4 = (int *)param_1[4];
  if (piVar4 != piVar2) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    param_1[4] = (int)piVar2;
  }
  iVar1 = fn_00145b00(0x48,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_001138ac(iVar1,&DAT_001f6fd0);
  }
  piVar4 = (int *)param_1[5];
  if (piVar4 != piVar2) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    param_1[5] = (int)piVar2;
  }
  iVar1 = fn_00145b00(0x80,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_00110518();
  }
  piVar4 = (int *)param_1[6];
  if (piVar4 != piVar2) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    param_1[6] = (int)piVar2;
  }
  fn_0011050c(param_1[6],param_1[2],param_1[3]);
  iVar1 = fn_00145b00(0x80,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_00110518();
  }
  piVar4 = (int *)param_1[7];
  if (piVar4 != piVar2) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    param_1[7] = (int)piVar2;
  }
  fn_0011050c(param_1[7],param_1[4],param_1[5]);
  iVar1 = fn_00145b00(0x2c,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_003053fc(iVar1,0);
  }
  piVar4 = (int *)param_1[8];
  if (piVar4 != piVar2) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))(piVar4);
    }
    param_1[8] = (int)piVar2;
  }
  *(int *)(param_1[8] + 8) = param_1[6];
  *(int *)(param_1[8] + 0xc) = param_1[7];
  *(int *)(param_1[8] + 0x10) = *param_1;
  *(int *)(param_1[8] + 0x14) = param_1[1];
  iVar1 = fn_00145b00(0x48,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_00305424(iVar1,param_1[8]);
  }
  piVar4 = (int *)param_1[9];
  if (piVar4 != piVar2) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    param_1[9] = (int)piVar2;
  }
  iVar1 = *param_1;
  uVar5 = *(undefined4 *)(param_1[1] + 0x3c);
  uVar3 = fn_00129004();
  fn_002419f4(uVar3,iVar1,uVar5);
  iVar1 = param_1[2];
  iVar6 = param_1[3];
  uVar3 = fn_00129004();
  fn_002416b4(uVar3,iVar1,iVar6);
  iVar1 = param_1[4];
  iVar6 = param_1[5];
  uVar3 = fn_00129004();
  fn_00241948(uVar3,iVar1,iVar6);
  fn_002cd71c();
  fn_00121838(DAT_00897800,DAT_00898250,1);
  return param_1;
}


