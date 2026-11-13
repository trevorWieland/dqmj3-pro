#include "00664580_00664c58.h"



void fn_00664c58(int *param_1)

{
  fn_005ef320(*(undefined4 *)(*param_1 + 4));
  return;
}



void fn_00664ac4(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  uVar4 = 0;
  puVar3 = (undefined4 *)**(undefined4 **)(*param_1 + 0x44);
  if ((int)(puVar3[4] - puVar3[3]) >> 2 != 0) {
    do {
      iVar1 = fn_0017fde4(*(undefined4 *)(puVar3[3] + uVar4 * 4));
      if (iVar1 != 0) {
        iVar2 = fn_0068c694(DAT_008977e8);
        iVar2 = fn_006ebf84(*(undefined4 *)(iVar2 + 0x24),iVar1);
        if (iVar2 != 0) {
          iVar2 = fn_0068c694(DAT_008977e8);
          fn_00162d54(*(undefined4 *)(iVar2 + 0x24),iVar1);
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)((int)(puVar3[4] - puVar3[3]) >> 2));
  }
  iVar1 = fn_0017fde4(puVar3[2]);
  if (iVar1 != 0) {
    iVar2 = fn_0068c694(DAT_008977e8);
    iVar2 = fn_006ebf84(*(undefined4 *)(iVar2 + 0x24),iVar1);
    if (iVar2 != 0) {
      iVar2 = fn_0068c694(DAT_008977e8);
      fn_00162d54(*(undefined4 *)(iVar2 + 0x24),iVar1);
    }
  }
  iVar1 = fn_0017fde4(puVar3[1]);
  if (iVar1 != 0) {
    iVar2 = fn_0068c694(DAT_008977e8);
    iVar2 = fn_006ebf84(*(undefined4 *)(iVar2 + 0x24),iVar1);
    if (iVar2 != 0) {
      iVar2 = fn_0068c694(DAT_008977e8);
      fn_00162d54(*(undefined4 *)(iVar2 + 0x24),iVar1);
    }
  }
  iVar1 = fn_0017fde4(*puVar3);
  if (iVar1 != 0) {
    iVar2 = fn_0068c694(DAT_008977e8);
    iVar2 = fn_006ebf84(*(undefined4 *)(iVar2 + 0x24),iVar1);
    if (iVar2 != 0) {
      iVar2 = fn_0068c694(DAT_008977e8);
      fn_00162d54(*(undefined4 *)(iVar2 + 0x24),iVar1);
    }
  }
  iVar1 = fn_0068c694(DAT_008977e8);
  fn_00162d44(*(undefined4 *)(iVar1 + 0x24));
  return;
}



void fn_00664a70(undefined1 *param_1)

{
  fn_00662bd0();
  fn_006642e8();
  *param_1 = 0;
  return;
}



void fn_0066481c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_1544 [4];
  undefined1 auStack_1540 [5416];
  
  fn_006643f4();
  fn_00663994();
  fn_00662a34(auStack_1540);
  iVar1 = fn_00662bd0();
  fn_00664a8c(auStack_1544);
  iVar2 = fn_006649e0(auStack_1544);
  if (iVar2 == 2) {
    iVar2 = fn_00662d30(*(undefined4 *)(iVar1 + 8),iVar1 + 0xc,1,0,0,0);
    if (iVar2 == 2) {
      iVar3 = *(int *)(iVar1 + 0x10) - *(int *)(iVar1 + 0xc);
      iVar2 = iVar3 >> 0x1f;
      if ((iVar3 / 0x1528 + iVar2 != iVar2) && (iVar1 = fn_006f5d90(iVar1 + 0xc,0), iVar1 != 0)) {
        fn_0017821c(auStack_1540,iVar1,0x1510);
        fn_00664a98(auStack_1544);
        goto LAB_006648d4;
      }
    }
  }
  fn_00664a98(auStack_1544);
LAB_006648d4:
  if (param_1 != 0) {
    fn_0017821c(param_1,auStack_1540,0x1510);
  }
  fn_00663ce4(auStack_1540);
  fn_00664464();
  return;
}



char * fn_00664a98(char *param_1)

{
  if (*param_1 != '\0') {
    fn_00662bd0();
    fn_00663dac();
    *param_1 = '\0';
  }
  return param_1;
}



void fn_006647e8(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    return;
  }
  fn_0017821c(param_1,param_2,0xa88);
  return;
}



int * fn_00664580(int *param_1)

{
  if (param_1[0x2b] != 0) {
    param_1[0x2b] = 0;
  }
  if (param_1[0x2a] != 0) {
    (*(code *)param_1[0x2c])();
    param_1[0x2a] = 0;
  }
  if (param_1[0x28] != 0) {
    param_1[0x28] = 0;
  }
  if (param_1[0x27] != 0) {
    (*(code *)param_1[0x29])();
    param_1[0x27] = 0;
  }
  if (param_1[0x25] != 0) {
    param_1[0x25] = 0;
  }
  if (param_1[0x24] != 0) {
    (*(code *)param_1[0x26])();
    param_1[0x24] = 0;
  }
  if (param_1[0x22] != 0) {
    param_1[0x22] = 0;
  }
  if (param_1[0x21] != 0) {
    (*(code *)param_1[0x23])();
    param_1[0x21] = 0;
  }
  if (param_1[0x1f] != 0) {
    param_1[0x1f] = 0;
  }
  if (param_1[0x1e] != 0) {
    (*(code *)param_1[0x20])();
    param_1[0x1e] = 0;
  }
  if (param_1[0x1c] != 0) {
    param_1[0x1c] = 0;
  }
  if (param_1[0x1b] != 0) {
    (*(code *)param_1[0x1d])();
    param_1[0x1b] = 0;
  }
  if (param_1[0x19] != 0) {
    param_1[0x19] = 0;
  }
  if (param_1[0x18] != 0) {
    (*(code *)param_1[0x1a])();
    param_1[0x18] = 0;
  }
  if (param_1[0x16] != 0) {
    param_1[0x16] = 0;
  }
  if (param_1[0x15] != 0) {
    (*(code *)param_1[0x17])();
    param_1[0x15] = 0;
  }
  if (param_1[0x13] != 0) {
    param_1[0x13] = 0;
  }
  if (param_1[0x12] != 0) {
    (*(code *)param_1[0x14])();
    param_1[0x12] = 0;
  }
  if (param_1[0x10] != 0) {
    param_1[0x10] = 0;
  }
  if (param_1[0xf] != 0) {
    (*(code *)param_1[0x11])();
    param_1[0xf] = 0;
  }
  if (param_1[0xd] != 0) {
    param_1[0xd] = 0;
  }
  if (param_1[0xc] != 0) {
    (*(code *)param_1[0xe])();
    param_1[0xc] = 0;
  }
  if (param_1[10] != 0) {
    param_1[10] = 0;
  }
  if (param_1[9] != 0) {
    (*(code *)param_1[0xb])();
    param_1[9] = 0;
  }
  if (param_1[7] != 0) {
    param_1[7] = 0;
  }
  if (param_1[6] != 0) {
    (*(code *)param_1[8])();
    param_1[6] = 0;
  }
  if (param_1[4] != 0) {
    param_1[4] = 0;
  }
  if (param_1[3] != 0) {
    (*(code *)param_1[5])();
    param_1[3] = 0;
  }
  if (param_1[1] != 0) {
    param_1[1] = 0;
  }
  if (*param_1 != 0) {
    (*(code *)param_1[2])();
    *param_1 = 0;
  }
  return param_1;
}


