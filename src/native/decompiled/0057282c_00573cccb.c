#include "0057282c_00573cccb.h"



void fn_00573ccc(undefined4 *param_1)

{
  *param_1 = &DAT_008411c0;
  if ((int *)param_1[0x22] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x22] + 4))();
  }
  fn_0068ad5c(param_1);
  fn_002feef8();
  return;
}



void fn_00573c7c(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  *puVar1 = &DAT_008411c0;
  puVar1[0x19] = &DAT_00859420;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = *(undefined4 *)(param_2 + 8);
  puVar1[0x22] = 0;
  puVar1[0x23] = param_2;
  return;
}



undefined4 * fn_00573250(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002c4694();
  *puVar1 = &DAT_0084106c;
  puVar1[0x2c] = &DAT_00859110;
  puVar1[0x2d] = 0;
  puVar1[0x2e] = 0;
  puVar1[0x2f] = 0;
  puVar1[0x30] = 0;
  puVar1[0x31] = 0;
  puVar1[0x32] = 0;
  puVar1[0x33] = 0;
  puVar1[0x34] = 0;
  return puVar1;
}



void fn_00573220(int param_1)

{
  if (*(int *)(param_1 + 0x6c) != -1) {
    fn_00178eec(*(undefined4 *)(param_1 + 100),*(int *)(param_1 + 0x6c),0);
  }
  fn_00689824(param_1,0);
  return;
}



void fn_00573118(int param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  
  fn_002c4304();
  if ((*(char *)(param_1 + 0xc) == '\x03') && (iVar1 = fn_002f8974(), iVar1 != 0)) {
    pcVar3 = *(code **)(param_1 + 0xb4);
    if ((*(uint *)(param_1 + 0xb8) & 1) != 0) {
      pcVar3 = *(code **)(pcVar3 + *(int *)(param_1 + ((int)*(uint *)(param_1 + 0xb8) >> 1)));
    }
    (*pcVar3)();
    iVar1 = *(int *)(param_1 + 0xb4);
    uVar2 = *(uint *)(param_1 + 200);
    uVar4 = *(uint *)(param_1 + 0xb8);
    *(int *)(param_1 + 0xbc) = iVar1;
    *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xc4);
    *(uint *)(param_1 + 0xc0) = uVar4;
    *(uint *)(param_1 + 0xb8) = uVar2;
    *(int *)(param_1 + 0xcc) = *(int *)(param_1 + 0xcc) + 1;
    if ((iVar1 == *(int *)(param_1 + 0xc4)) &&
       (((iVar1 == 0 && (((*(byte *)(param_1 + 0xc0) | uVar2) & 1) == 0)) || (uVar4 == uVar2)))) {
      *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + 1;
    }
    else {
      *(undefined4 *)(param_1 + 0xd0) = 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  fn_006ba250(param_1);
}



void fn_005730e8(int param_1)

{
  if (*(int *)(param_1 + 0x6c) != -1) {
    fn_00178eec(*(undefined4 *)(param_1 + 100),*(int *)(param_1 + 0x6c),1);
  }
  fn_00689824(param_1,1);
  return;
}



code * fn_00572fb8(code *param_1,undefined4 param_2)

{
  int iVar1;
  code *pcVar2;
  
  iVar1 = fn_002f6784();
  pcVar2 = (code *)0x0;
  if (iVar1 != 0) {
    pcVar2 = param_1;
    switch(param_2) {
    case 0:
      fn_0068ab44(param_1,0x100094b);
      fn_002f8914();
      iVar1 = fn_002f6180();
      if (iVar1 < 1) {
        *(code **)(param_1 + 0xc4) = fn_00572654;
        *(int *)(param_1 + 200) = 0;
        return fn_00572654;
      }
      pcVar2 = (code *)fn_002f64f4(param_1,0xdc,0,0,param_2);
      break;
    case 1:
      fn_0068ab44(param_1,0x100094b);
      pcVar2 = (code *)fn_002f64f4(param_1,0xd7,0,0,param_2);
      return pcVar2;
    case 2:
      fn_0068ab44(param_1,0x100094b);
      pcVar2 = (code *)fn_002f64f4(param_1,0xe4,0,0,param_2);
      return pcVar2;
    case 3:
      fn_0068ab44(param_1,0x100094b);
      pcVar2 = (code *)fn_002f64f4(param_1,0xeb,0,0,param_2);
      return pcVar2;
    case 4:
                    /* WARNING: Could not recover jumptable at 0x005730dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar2 = (code *)(**(code **)(*(int *)param_1 + 0x110))(param_1);
      return pcVar2;
    }
  }
  return pcVar2;
}


