#include "0025a550_0025ac4c.h"



void fn_0025ac4c(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x18);
  uVar6 = *(undefined4 *)(param_2 + 0x1c);
  uVar7 = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  *(undefined4 *)(param_1 + 0x60) = uVar4;
  *(undefined4 *)(param_1 + 100) = uVar5;
  *(undefined4 *)(param_1 + 0x68) = uVar6;
  *(undefined4 *)(param_1 + 0x6c) = uVar7;
  uVar1 = *(undefined4 *)(param_2 + 0x28);
  uVar2 = *(undefined4 *)(param_2 + 0x2c);
  uVar3 = *(undefined4 *)(param_2 + 0x30);
  uVar4 = *(undefined4 *)(param_2 + 0x34);
  uVar5 = *(undefined4 *)(param_2 + 0x38);
  uVar6 = *(undefined4 *)(param_2 + 0x3c);
  uVar7 = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  *(undefined4 *)(param_1 + 0x78) = uVar2;
  *(undefined4 *)(param_1 + 0x7c) = uVar3;
  *(undefined4 *)(param_1 + 0x80) = uVar4;
  *(undefined4 *)(param_1 + 0x84) = uVar5;
  *(undefined4 *)(param_1 + 0x88) = uVar6;
  *(undefined4 *)(param_1 + 0x8c) = uVar7;
  uVar1 = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x94) = uVar1;
  uVar1 = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 0x9c) = uVar1;
  fn_0017821c(param_1 + 0xa0,param_2 + 0x54,0x3c0);
  *(undefined1 *)(param_1 + 0x460) = *(undefined1 *)(param_2 + 0x414);
  *(undefined4 *)(param_1 + 0x464) = *(undefined4 *)(param_2 + 0x418);
  *(undefined4 *)(param_1 + 0x468) = *(undefined4 *)(param_2 + 0x41c);
  uVar1 = *(undefined4 *)(param_2 + 0x424);
  uVar2 = *(undefined4 *)(param_2 + 0x428);
  uVar3 = *(undefined4 *)(param_2 + 0x42c);
  uVar4 = *(undefined4 *)(param_2 + 0x430);
  uVar5 = *(undefined4 *)(param_2 + 0x434);
  *(undefined4 *)(param_1 + 0x46c) = *(undefined4 *)(param_2 + 0x420);
  *(undefined4 *)(param_1 + 0x470) = uVar1;
  *(undefined4 *)(param_1 + 0x474) = uVar2;
  *(undefined4 *)(param_1 + 0x478) = uVar3;
  *(undefined4 *)(param_1 + 0x47c) = uVar4;
  *(undefined4 *)(param_1 + 0x480) = uVar5;
  fn_0017821c(param_1 + 0x484,param_2 + 0x438,0x1e);
  *(undefined1 *)(param_1 + 0x4a2) = *(undefined1 *)(param_2 + 0x456);
  fn_0017821c(param_1 + 0x4a4,param_2 + 0x458,0x60);
  return;
}



undefined1 * fn_0025ac1c(int param_1)

{
  undefined4 uVar1;
  undefined1 auStack_20 [24];
  
  uVar1 = fn_00113c58(auStack_20);
  fn_0037cb88(param_1 + 0x36,uVar1);
  return auStack_20;
}



void fn_0025a8f4(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  *(undefined1 *)(param_1 + 0xd) = 0xff;
  iVar1 = fn_00145b00(0x78,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_00241510(iVar1,0x80000);
  }
  piVar3 = (int *)*param_1;
  if (piVar3 != piVar2) {
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    *param_1 = (int)piVar2;
  }
  iVar1 = fn_00145b00(0x40,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_0023e8ec(iVar1,4);
  }
  piVar3 = (int *)param_1[1];
  if (piVar3 != piVar2) {
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    param_1[1] = (int)piVar2;
  }
  *(int *)(param_1[1] + 4) = *param_1;
  iVar1 = fn_00145b00(0x48,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_001138cc(iVar1,&DAT_0025ac18);
  }
  piVar3 = (int *)param_1[2];
  if (piVar3 != piVar2) {
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    param_1[2] = (int)piVar2;
  }
  iVar1 = fn_00145b00(0x48,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_001138ac(iVar1,&DAT_0025ac18);
  }
  piVar3 = (int *)param_1[3];
  if (piVar3 != piVar2) {
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    param_1[3] = (int)piVar2;
  }
  iVar1 = fn_00145b00(0x48,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_001138cc(iVar1,&DAT_0025ac18);
  }
  piVar3 = (int *)param_1[4];
  if (piVar3 != piVar2) {
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    param_1[4] = (int)piVar2;
  }
  iVar1 = fn_00145b00(0x48,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_001138ac(iVar1,&DAT_0025ac18);
  }
  piVar3 = (int *)param_1[5];
  if (piVar3 != piVar2) {
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    param_1[5] = (int)piVar2;
  }
  iVar1 = fn_00145b00(0x80,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_00110518();
  }
  piVar3 = (int *)param_1[6];
  if (piVar3 != piVar2) {
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    param_1[6] = (int)piVar2;
  }
  fn_0011050c(param_1[6],param_1[2],param_1[3]);
  iVar1 = fn_00145b00(0x80,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_00110518();
  }
  piVar3 = (int *)param_1[7];
  if (piVar3 != piVar2) {
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    param_1[7] = (int)piVar2;
  }
  fn_0011050c(param_1[7],param_1[4],param_1[5]);
  iVar1 = fn_00145b00(0x2c,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_00420fb8(iVar1,0);
  }
  piVar3 = (int *)param_1[8];
  if (piVar3 != piVar2) {
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))(piVar3);
    }
    param_1[8] = (int)piVar2;
  }
  *(int *)(param_1[8] + 8) = param_1[6];
  *(int *)(param_1[8] + 0xc) = param_1[7];
  *(int *)(param_1[8] + 0x10) = *param_1;
  *(int *)(param_1[8] + 0x14) = param_1[1];
  iVar1 = fn_00145b00(0x54,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_00421148(iVar1,param_1[8]);
  }
  piVar3 = (int *)param_1[9];
  if (piVar3 != piVar2) {
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    param_1[9] = (int)piVar2;
  }
  fn_002cd71c();
  return;
}



void fn_0025a6c8(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  param_1[0xb] = 0;
  iVar1 = *param_1;
  if (iVar1 != 0) {
    param_3 = *(int *)(iVar1 + 4);
  }
  if (iVar1 != 0 && param_3 != 0) {
    iVar4 = *(int *)(param_3 + 0xc);
    iVar3 = 0;
    if (iVar4 == iVar1) {
      *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(iVar1 + 8);
    }
    else {
      iVar3 = iVar4;
      for (iVar4 = *(int *)(iVar4 + 8); iVar4 != iVar1; iVar4 = *(int *)(iVar4 + 8)) {
        iVar3 = iVar4;
      }
      *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar1 + 8);
    }
    if (*(int *)(param_3 + 0x10) == iVar1) {
      *(int *)(param_3 + 0x10) = iVar3;
    }
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 4) = 0;
    fn_00143174(*(undefined4 *)(*param_1 + 0x20));
  }
  fn_00129004();
  fn_00121084();
  fn_00129004();
  fn_00120f74();
  fn_00129004();
  fn_001210e8();
  bVar5 = (char)param_1[0xd] != '\x01';
  piVar2 = (int *)&DAT_00000001;
  if (bVar5) {
    piVar2 = (int *)param_1[9];
  }
  if (bVar5 && piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x20))();
  }
  if ((int *)param_1[9] != (int *)0x0) {
    (**(code **)(*(int *)param_1[9] + 4))();
    param_1[9] = 0;
  }
  if ((int *)param_1[8] != (int *)0x0) {
    (**(code **)(*(int *)param_1[8] + 8))();
    param_1[8] = 0;
  }
  if ((int *)param_1[7] != (int *)0x0) {
    (**(code **)(*(int *)param_1[7] + 4))();
    param_1[7] = 0;
  }
  if ((int *)param_1[6] != (int *)0x0) {
    (**(code **)(*(int *)param_1[6] + 4))();
    param_1[6] = 0;
  }
  if ((int *)param_1[5] != (int *)0x0) {
    (**(code **)(*(int *)param_1[5] + 4))();
    param_1[5] = 0;
  }
  if ((int *)param_1[4] != (int *)0x0) {
    (**(code **)(*(int *)param_1[4] + 4))();
    param_1[4] = 0;
  }
  if ((int *)param_1[3] != (int *)0x0) {
    (**(code **)(*(int *)param_1[3] + 4))();
    param_1[3] = 0;
  }
  if ((int *)param_1[2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[2] + 4))();
    param_1[2] = 0;
  }
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 4))();
    param_1[1] = 0;
  }
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 4))();
    *param_1 = 0;
  }
  return;
}



undefined4 * fn_0025a63c(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *param_1 = &DAT_0081d820;
  iVar1 = fn_00145b00(0x80,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_00110518();
  }
  param_1[1] = uVar2;
  param_1[2] = 0xffffffff;
  param_1[3] = 0xffffffff;
  param_1[4] = 0xffffffff;
  *(undefined1 *)(param_1 + 5) = 0xff;
  *(undefined1 *)((int)param_1 + 0x15) = 0;
  return param_1;
}



void fn_0025a5c4(int param_1,undefined4 param_2,undefined1 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_50 [64];
  
  iVar1 = *(int *)(param_1 + 0xe88);
  if (*(int *)(iVar1 + 0x10) != -1) {
    fn_00159f34(*(undefined4 *)(iVar1 + 4));
    *(undefined4 *)(iVar1 + 0x10) = 0xffffffff;
  }
  fn_001028d4(auStack_50,(char *)&DAT_007c3290,iVar1 + 0x16,param_2);
  uVar2 = fn_0010887c(*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8),auStack_50,
                       *(undefined4 *)(iVar1 + 0xc));
  *(undefined4 *)(iVar1 + 0x10) = uVar2;
  *(undefined1 *)(iVar1 + 0x15) = param_3;
  *(undefined1 *)(iVar1 + 0x14) = 0;
  return;
}



void fn_0025a550(int param_1)

{
  if (*(int *)(param_1 + 0x10) != -1) {
    fn_00159f34(*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0xc) != -1) {
    fn_0016a43c(*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  }
  if (*(int *)(param_1 + 8) != -1) {
                    /* WARNING: Subroutine does not return */
    fn_001482f4(*(undefined4 *)(param_1 + 4));
  }
  *(undefined1 *)(param_1 + 0x14) = 0xff;
  *(undefined1 *)(param_1 + 0x15) = 0;
  fn_001c93c8(*(undefined4 *)(param_1 + 4));
  fn_001c93c8(*(undefined4 *)(param_1 + 4));
  return;
}


