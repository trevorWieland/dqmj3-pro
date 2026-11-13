#include "0043e754_0043f174.h"



void fn_0043f174(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((int *)param_1[0x1b] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x1b] + 4))();
    param_1[0x1b] = 0;
  }
  iVar1 = (**(code **)(*param_1 + 8))(param_1);
  uVar2 = *(undefined4 *)(iVar1 + 8);
  if (param_1[0x1a] != -1) {
    fn_0016a43c(uVar2);
    param_1[0x1a] = -1;
  }
  if (param_1[0x19] != -1) {
                    /* WARNING: Subroutine does not return */
    fn_001482f4(uVar2);
  }
  return;
}



void fn_0043f144(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0039571c();
  puVar1[3] = 0;
  *puVar1 = &PTR_LAB_0083d5a4;
  return;
}



void fn_0043f110(undefined4 *param_1)

{
  *param_1 = &DAT_0083d594;
  if (param_1[4] != 0) {
    fn_002feef8(param_1[4]);
  }
  fn_002feef8(param_1);
  return;
}



undefined4 * fn_0043f0c4(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  param_1[1] = param_2;
  param_1[2] = 0xffffffff;
  param_1[3] = 0;
  *param_1 = &DAT_0083d594;
  iVar1 = fn_00145b00(0x10,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_00305898();
  }
  param_1[4] = uVar2;
  return param_1;
}



void fn_0043f0a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  iVar1 = fn_00749eb4(param_1,0);
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
  return;
}



void fn_0043eeb0(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 *param_6,int param_7)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  *(undefined4 *)(param_1 + 8) = param_2;
  *(int *)(param_1 + 0xc) = param_3;
  fn_0013ae4c(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 4));
  uVar1 = fn_0068b0a4(param_4);
  local_38 = 1;
  local_34 = 1;
  local_30 = 1;
  local_40 = (undefined4 *)0x0;
  local_3c = 0;
  local_2c = param_5;
  fn_0030551c(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 4),param_4,uVar1);
  fn_00749eb4(param_1,8);
  iVar4 = *(int *)(*(int *)(param_1 + 0x10) + 0xc);
  *(byte *)(iVar4 + 0x47) = *(byte *)(iVar4 + 0x47) & 0xf0;
  fn_0018a69c();
  fn_002317d8(&local_40,param_4,0);
  uVar1 = fn_00749f8c(param_1,4);
  fn_00190d50(uVar1,local_40);
  if (local_40 != &DAT_008f9cf4) {
    piVar2 = local_40 + -3;
    iVar4 = *piVar2;
    if ((iVar4 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar4 + -1, iVar4 == 0)))) {
      fn_001008c4(local_40 + -3,local_40[-2] + 8,0);
    }
  }
  uVar1 = fn_00749f8c(param_1,5);
  fn_00190d50(uVar1,*param_6);
  uVar1 = fn_00749f8c(param_1,6);
  uVar3 = fn_0022f584((char *)&DAT_0043f05c,0);
  fn_00190d50(uVar1,uVar3);
  if (param_7 != 0) {
    uVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
    fn_001028d4(&local_40,(char *)&DAT_0043f088,param_3 + 1);
    iVar4 = fn_001828f0(uVar1,&local_40);
    if (iVar4 != 0) {
      *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xfe;
    }
  }
  return;
}



void fn_0043edc8(int param_1,byte param_2,undefined4 param_3,undefined1 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  undefined1 *local_18;
  
  local_18 = param_4;
  iVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
  piVar4 = *(int **)(iVar1 + 0x10);
  fn_006ce3b4(&local_18,param_1 + 0xc,7);
  piVar4 = (int *)(**(code **)(*piVar4 + 0x2c))(piVar4,local_18,1);
  if (piVar4 != (int *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*piVar4 + 8))(piVar4);
    do {
      if (puVar2 == &DAT_0089a934) goto LAB_0043ee44;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  piVar4 = (int *)0x0;
LAB_0043ee44:
  if (local_18 != &DAT_008f9d04) {
    piVar3 = (int *)(local_18 + -0xc);
    iVar1 = *piVar3;
    if ((iVar1 == -1) || ((piVar3 != &DAT_008f9cf8 && (*piVar3 = iVar1 + -1, iVar1 == 0)))) {
      fn_001008c4(local_18 + -0xc,*(int *)(local_18 + -8) + 0xe,0);
    }
  }
  *(byte *)(piVar4 + 0x11) = *(byte *)(piVar4 + 0x11) & 0xfe | param_2;
  return;
}



/* WARNING: Removing unreachable block (ram,0x0043ed14) */

void fn_0043ebd4(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 *param_6,undefined4 *param_7,int param_8)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 **ppuVar4;
  uint uVar5;
  undefined4 *local_50;
  uint local_4c [12];
  
  *(undefined4 *)(param_1 + 8) = param_2;
  *(int *)(param_1 + 0xc) = param_3;
  fn_0013ae4c(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 4));
  uVar1 = fn_0068b0a4(param_4);
  local_4c[1] = 1;
  local_4c[2] = 1;
  local_4c[3] = 1;
  local_50 = (undefined4 *)0x0;
  local_4c[0] = 0;
  local_4c[4] = param_5;
  fn_0030551c(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 4),param_4,uVar1);
  fn_00749eb4(param_1,8);
  iVar3 = *(int *)(*(int *)(param_1 + 0x10) + 0xc);
  *(byte *)(iVar3 + 0x47) = *(byte *)(iVar3 + 0x47) & 0xf0;
  fn_0018a69c();
  fn_002317d8(&local_50,param_4,0);
  uVar1 = fn_00749f8c(param_1,4);
  fn_00190d50(uVar1,local_50);
  if (local_50 != &DAT_008f9cf4) {
    piVar2 = local_50 + -3;
    iVar3 = *piVar2;
    if ((iVar3 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar3 + -1, iVar3 == 0)))) {
      fn_001008c4(local_50 + -3,local_50[-2] + 8,0);
    }
  }
  uVar1 = fn_00749f8c(param_1,5);
  fn_00190d50(uVar1,*param_6);
  ppuVar4 = (undefined4 **)local_4c;
  local_50 = param_7;
  local_4c[0] = 9999;
  local_4c[1] = 0;
  if ((int)param_7 < 0) {
    ppuVar4 = (undefined4 **)(local_4c + 1);
  }
  if (param_7 < (undefined4 *)0x80000000) {
    ppuVar4 = &local_50;
  }
  if (9999 < (int)*ppuVar4) {
    ppuVar4 = (undefined4 **)local_4c;
  }
  uVar5 = (uint)*ppuVar4;
  uVar1 = fn_00749f8c(param_1,6);
  fn_00688c04(uVar1,uVar5,0);
  if (param_8 != 0) {
    uVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
    fn_001028d4(&local_50,(char *)&DAT_0043edb0,param_3 + 1);
    iVar3 = fn_001828f0(uVar1,&local_50);
    if (iVar3 != 0) {
      *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe;
    }
  }
  return;
}



void fn_0043e754(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  char *apcStack_1c [3];
  
  if (*(char *)(param_1 + 0xc) == '\x03') {
    switch(*(undefined1 *)(param_1 + 100)) {
    case 0:
      apcStack_1c[0] = "MenuMessagePassingTutorialStart2";
      apcStack_1c[1] = (char *)&DAT_0086867c;
      apcStack_1c[2] = (char *)&DAT_008686a0;
      iVar2 = fn_006f6a6c(param_1);
      if (iVar2 == 1) {
        if (*(uint *)(param_1 + 0x68) < 3) {
          uVar1 = fn_0022f584(apcStack_1c[*(uint *)(param_1 + 0x68)],0);
          fn_0068974c(param_1,uVar1,0,1);
          *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
          return;
        }
        *(undefined4 *)(param_1 + 0x68) = 0;
        uVar1 = fn_0022f584((char *)&DAT_0043e6a8,0);
        local_28 = 0;
        local_2c = 1;
        local_24 = 0;
        uStack_20 = 1;
        local_30 = 0;
        fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar1,1,1);
        fn_00689bd0(param_1,0x48,0);
        *(undefined1 *)(param_1 + 100) = 1;
        *(undefined4 *)(param_1 + 0x68) = 0;
      }
      break;
    case 1:
      iVar2 = fn_006f6a6c(param_1);
      if (iVar2 == 3) {
        *(undefined4 *)(param_1 + 0x68) = 0;
        *(undefined1 *)(param_1 + 100) = 2;
        return;
      }
      iVar2 = fn_006f6a6c(param_1);
      if (iVar2 == 2) {
        iVar2 = fn_00292f20();
        if (*(char *)(iVar2 + 0xad1) == '\0') {
          uVar1 = fn_0022f584((char *)&DAT_0043e5b8,0);
          fn_0068974c(param_1,uVar1,0,1);
          *(undefined4 *)(param_1 + 0x68) = 0;
          *(undefined1 *)(param_1 + 100) = 4;
          return;
        }
        uVar1 = fn_0022f584((char *)&DAT_0043e594,0);
        fn_0068974c(param_1,uVar1,0,1);
        *(undefined4 *)(param_1 + 0x68) = 0;
        *(undefined1 *)(param_1 + 100) = 4;
        return;
      }
      break;
    case 2:
      fn_00664a8c(&local_30);
      iVar2 = fn_006649e0(&local_30);
      if (iVar2 == 2) {
        fn_00664a70(&local_30);
      }
      iVar2 = fn_00664a3c(&local_30);
      if (iVar2 == 2) {
        uVar1 = fn_0022f584((char *)&DAT_0043e708,0);
        fn_0068974c(param_1,uVar1,0,1);
        *(undefined4 *)(param_1 + 0x68) = 0;
        *(undefined1 *)(param_1 + 100) = 3;
      }
      else if (iVar2 == 6) {
        uVar1 = fn_0022f584((char *)&DAT_0043eb80,0);
        fn_0068974c(param_1,uVar1,0,1);
        *(undefined4 *)(param_1 + 0x68) = 0;
        *(undefined1 *)(param_1 + 100) = 4;
      }
      else {
        uVar1 = fn_0022f584((char *)&DAT_0043eb5c,0);
        fn_0068974c(param_1,uVar1,0,1);
        *(undefined4 *)(param_1 + 0x68) = 0;
        *(undefined1 *)(param_1 + 100) = 4;
      }
      fn_00664a14(&local_30);
      fn_00664a98(&local_30);
      return;
    case 3:
      iVar2 = fn_006f6a6c(param_1);
      if (iVar2 == 1) {
        fn_006899f4(param_1,0xd4,1);
        return;
      }
      break;
    case 4:
      iVar2 = fn_006f6a6c(param_1);
      if (iVar2 == 1) {
        fn_006899f4(param_1,0,1);
        return;
      }
    }
  }
  return;
}


