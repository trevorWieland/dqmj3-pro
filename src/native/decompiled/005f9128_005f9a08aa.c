#include "005f9128_005f9a08aa.h"



void fn_005f949c(int param_1)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0xc) == '\x03') {
    pcVar1 = *(code **)(param_1 + 0x68);
    if ((*(uint *)(param_1 + 0x6c) & 1) != 0) {
      pcVar1 = *(code **)(pcVar1 + *(int *)(param_1 + ((int)*(uint *)(param_1 + 0x6c) >> 1)));
    }
    (*pcVar1)();
    uVar2 = *(uint *)(param_1 + 0x7c);
    iVar4 = *(int *)(param_1 + 0x68);
    uVar3 = *(uint *)(param_1 + 0x6c);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x78);
    *(int *)(param_1 + 0x70) = iVar4;
    *(uint *)(param_1 + 0x6c) = uVar2;
    *(uint *)(param_1 + 0x74) = uVar3;
    *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
    if ((iVar4 == *(int *)(param_1 + 0x68)) &&
       (((iVar4 == 0 && (((*(byte *)(param_1 + 0x74) | uVar2) & 1) == 0)) || (uVar3 == uVar2)))) {
      iVar4 = *(int *)(param_1 + 0x84) + 1;
    }
    else {
      iVar4 = 0;
    }
    *(int *)(param_1 + 0x84) = iVar4;
  }
  return;
}



void fn_005f946c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x88,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005f954c(iVar1,param_1);
  return;
}



void fn_005f9128(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_58 [64];
  
  uVar1 = fn_002f6fa8();
  if (*(int *)(param_1 + 0x84) == 0) {
    uVar3 = fn_002f8914();
    iVar4 = fn_006cd638(uVar1,uVar3);
    iVar2 = fn_002f81dc();
    iVar4 = iVar4 + iVar2 * 0x44;
    iVar6 = *(int *)(iVar4 + 0x28);
    iVar2 = *(int *)(iVar4 + 0x2c);
    fn_0015b0f8(iVar2);
    uVar3 = fn_0022f584((char *)&DAT_005f938c,0);
    fn_0068974c(param_1,uVar3,0,1);
    if (0 < iVar6) {
      if (iVar2 < iVar6) {
                    /* WARNING: Subroutine does not return */
        fn_001638a0();
      }
      if (iVar6 < iVar2) {
                    /* WARNING: Subroutine does not return */
        fn_001638a0();
      }
      if (iVar6 == iVar2) {
        uVar3 = fn_0022f584((char *)&DAT_005f93e4,0);
        fn_0036c13c(*(undefined4 *)(param_1 + 0x5c),uVar3);
      }
    }
    uVar3 = fn_002f8914();
    iVar4 = fn_006cd6fc(uVar1,uVar3);
    fn_0015b0f8(*(undefined4 *)(iVar4 + 0x2c));
    uVar3 = fn_0022f584((char *)&DAT_005f93fc,0);
    fn_0036c13c(*(undefined4 *)(param_1 + 0x5c),uVar3);
    uVar3 = fn_002f8914();
    iVar4 = fn_0041fe24(uVar1,uVar3);
    fn_0015b0f8(*(undefined4 *)(iVar4 + 0x2c));
    uVar1 = fn_0022f584((char *)&DAT_005f9418,0);
    fn_0036c13c(*(undefined4 *)(param_1 + 0x5c),uVar1);
    fn_001028d4(auStack_58,(char *)&DAT_005f9434);
    iVar4 = 0;
    do {
      iVar5 = (&DAT_007cae5c)[iVar4 * 2];
      bVar7 = SBORROW4(iVar5,iVar2);
      iVar6 = iVar5 - iVar2;
      if (iVar5 <= iVar2) {
        iVar5 = (&DAT_007cae60)[iVar4 * 2];
        bVar7 = SBORROW4(iVar2,iVar5);
        iVar6 = iVar2 - iVar5;
      }
      if (iVar5 == iVar2 || iVar6 < 0 != bVar7) {
        fn_001028d4(auStack_58,(char *)&DAT_005f9450);
        break;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 5);
    uVar1 = fn_0022f584(auStack_58,0);
    fn_0036c13c(*(undefined4 *)(param_1 + 0x5c),uVar1);
  }
  else {
    iVar2 = fn_006adb80();
    if (iVar2 == 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x30) = 1;
    }
    iVar2 = fn_006f6a6c(param_1);
    if (iVar2 == 1) {
      *(code **)(param_1 + 0x78) = fn_005f8fb4;
      *(undefined4 *)(param_1 + 0x7c) = 0;
      return;
    }
  }
  return;
}


