#include "00614c9c_00615a7ca.h"



void fn_006157a4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x4c8,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_006157d8(iVar1,param_1);
  return;
}



void fn_006156fc(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  *(undefined4 *)(param_1 + 0xc) = param_2;
  uVar1 = *(undefined4 *)(param_3 + 8);
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  uVar3 = *(undefined4 *)(param_3 + 0x10);
  uVar4 = *(undefined4 *)(param_3 + 0x14);
  uVar5 = *(undefined4 *)(param_3 + 0x18);
  uVar6 = *(undefined4 *)(param_3 + 0x1c);
  uVar7 = *(undefined4 *)(param_3 + 0x20);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  *(undefined4 *)(param_1 + 0x24) = uVar4;
  *(undefined4 *)(param_1 + 0x28) = uVar5;
  *(undefined4 *)(param_1 + 0x2c) = uVar6;
  *(undefined4 *)(param_1 + 0x30) = uVar7;
  uVar1 = *(undefined4 *)(param_3 + 0x28);
  uVar2 = *(undefined4 *)(param_3 + 0x2c);
  uVar3 = *(undefined4 *)(param_3 + 0x30);
  uVar4 = *(undefined4 *)(param_3 + 0x34);
  uVar5 = *(undefined4 *)(param_3 + 0x38);
  uVar6 = *(undefined4 *)(param_3 + 0x3c);
  uVar7 = *(undefined4 *)(param_3 + 0x40);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_3 + 0x24);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  *(undefined4 *)(param_1 + 0x40) = uVar3;
  *(undefined4 *)(param_1 + 0x44) = uVar4;
  *(undefined4 *)(param_1 + 0x48) = uVar5;
  *(undefined4 *)(param_1 + 0x4c) = uVar6;
  *(undefined4 *)(param_1 + 0x50) = uVar7;
  uVar1 = *(undefined4 *)(param_3 + 0x48);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_3 + 0x44);
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  uVar1 = *(undefined4 *)(param_3 + 0x50);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_3 + 0x4c);
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  fn_0017821c(param_1 + 100,param_3 + 0x54,0x3c0);
  *(undefined1 *)(param_1 + 0x424) = *(undefined1 *)(param_3 + 0x414);
  *(undefined4 *)(param_1 + 0x428) = *(undefined4 *)(param_3 + 0x418);
  *(undefined4 *)(param_1 + 0x42c) = *(undefined4 *)(param_3 + 0x41c);
  uVar1 = *(undefined4 *)(param_3 + 0x424);
  uVar2 = *(undefined4 *)(param_3 + 0x428);
  uVar3 = *(undefined4 *)(param_3 + 0x42c);
  uVar4 = *(undefined4 *)(param_3 + 0x430);
  uVar5 = *(undefined4 *)(param_3 + 0x434);
  *(undefined4 *)(param_1 + 0x430) = *(undefined4 *)(param_3 + 0x420);
  *(undefined4 *)(param_1 + 0x434) = uVar1;
  *(undefined4 *)(param_1 + 0x438) = uVar2;
  *(undefined4 *)(param_1 + 0x43c) = uVar3;
  *(undefined4 *)(param_1 + 0x440) = uVar4;
  *(undefined4 *)(param_1 + 0x444) = uVar5;
  fn_0017821c(param_1 + 0x448,param_3 + 0x438,0x1e);
  *(undefined1 *)(param_1 + 0x466) = *(undefined1 *)(param_3 + 0x456);
  fn_0017821c(param_1 + 0x468,param_3 + 0x458,0x60);
  return;
}



void fn_0061547c(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &PTR_FUN_007cbdcc;
  fn_00129004();
  fn_00120f74();
  iVar1 = param_1[5];
  if (iVar1 != 0) {
    fn_001218d4(DAT_00897800,L"rom:/data/Message/DiscQuestResultMessage.mes");
    if (*(int **)(iVar1 + 0x38) != (int *)0x0) {
      (**(code **)(**(int **)(iVar1 + 0x38) + 4))();
    }
    if (*(int **)(iVar1 + 0x34) != (int *)0x0) {
      (**(code **)(**(int **)(iVar1 + 0x34) + 8))();
    }
    if (*(int **)(iVar1 + 0x30) != (int *)0x0) {
      (**(code **)(**(int **)(iVar1 + 0x30) + 4))();
    }
    if (*(int **)(iVar1 + 0x2c) != (int *)0x0) {
      (**(code **)(**(int **)(iVar1 + 0x2c) + 4))();
    }
    if (*(int **)(iVar1 + 0x28) != (int *)0x0) {
      (**(code **)(**(int **)(iVar1 + 0x28) + 4))();
    }
    if (*(int **)(iVar1 + 0x24) != (int *)0x0) {
      (**(code **)(**(int **)(iVar1 + 0x24) + 4))();
    }
    if (*(int **)(iVar1 + 0x1c) != (int *)0x0) {
      (**(code **)(**(int **)(iVar1 + 0x1c) + 4))();
    }
    if (*(int **)(iVar1 + 0x18) != (int *)0x0) {
      (**(code **)(**(int **)(iVar1 + 0x18) + 4))();
    }
    fn_002feef8(*(undefined4 *)(iVar1 + 0x14));
    if (*(int **)(iVar1 + 0x10) != (int *)0x0) {
      (**(code **)(**(int **)(iVar1 + 0x10) + 4))();
    }
    if (*(int **)(iVar1 + 0xc) != (int *)0x0) {
      (**(code **)(**(int **)(iVar1 + 0xc) + 4))();
    }
    if (*(int **)(iVar1 + 8) != (int *)0x0) {
      (**(code **)(**(int **)(iVar1 + 8) + 4))();
    }
    fn_002feef8(iVar1);
  }
  if ((int *)param_1[4] != (int *)0x0) {
    (**(code **)(*(int *)param_1[4] + 4))();
  }
  if ((int *)param_1[3] != (int *)0x0) {
    (**(code **)(*(int *)param_1[3] + 4))();
  }
  if ((int *)param_1[2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[2] + 4))();
  }
  fn_005f6f1c(param_1);
  return;
}



undefined4 fn_00614de8(int param_1)

{
  int *piVar1;
  
  fn_00613c58(*(undefined4 *)(param_1 + 0x14));
  piVar1 = (int *)fn_006f7a84(DAT_008977e0);
  (**(code **)(*piVar1 + 0x58))(piVar1,1);
  return 1;
}



void fn_00614dac(undefined4 *param_1)

{
  *param_1 = &DAT_007cbeb8;
  if (param_1[7] != 0) {
    fn_002feef8(param_1[7]);
  }
  fn_0061564c(param_1);
  fn_002feef8();
  return;
}



undefined4 * fn_0061564c(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_007cbe10;
  if (param_1[4] != -1) {
    fn_00159f34(param_1[1]);
  }
  if (param_1[3] != -1) {
    fn_0016a43c(param_1[1]);
  }
  if (param_1[2] != -1) {
                    /* WARNING: Subroutine does not return */
    fn_001482f4(param_1[1]);
  }
  return param_1;
}



void fn_00614c9c(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_100 [244];
  
  cVar1 = *(char *)(param_1 + 0x18);
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      iVar3 = fn_0028eb38(*(undefined4 *)(*(int *)(param_1 + 0x20) + 0xc));
      if (iVar3 != 0) {
        return;
      }
      iVar4 = fn_00145b00(0x114,&DAT_00812c8c);
      iVar3 = 0;
      if (iVar4 != 0) {
        iVar3 = fn_002fa328();
      }
      iVar4 = *(int *)(param_1 + 0x1c);
      if (iVar4 != iVar3) {
        if (iVar4 != 0) {
          fn_002feef8(iVar4);
        }
        *(int *)(param_1 + 0x1c) = iVar3;
      }
      fn_003f4edc(*(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 4),auStack_100);
      fn_002f96c4(*(undefined4 *)(param_1 + 0x1c),auStack_100,*(undefined4 *)(param_1 + 0x20),0);
      uVar2 = 2;
    }
    else {
      if (cVar1 != '\x02') {
        return;
      }
      iVar3 = fn_002f9da0(*(undefined4 *)(param_1 + 0x1c));
      if (iVar3 == 0) {
        return;
      }
      fn_002f9980(*(undefined4 *)(param_1 + 0x1c));
      if (*(int *)(param_1 + 0x1c) != 0) {
        fn_002feef8(*(int *)(param_1 + 0x1c));
        *(undefined4 *)(param_1 + 0x1c) = 0;
      }
      uVar2 = 3;
    }
    *(undefined1 *)(param_1 + 0x18) = uVar2;
  }
  return;
}


