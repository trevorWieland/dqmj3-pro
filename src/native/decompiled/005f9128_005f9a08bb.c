#include "005f9128_005f9a08bb.h"



undefined4 * fn_005f9a08(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  *puVar1 = &DAT_0084e080;
  puVar1[0x19] = &DAT_00859210;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  return puVar1;
}



void fn_005f9958(int param_1)

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



void fn_005f9824(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = fn_002f6fa8();
  if (*(int *)(param_1 + 0x84) == 0) {
    uVar2 = fn_002f8914();
    iVar3 = fn_006cd8a0(uVar1,uVar2);
    if (iVar3 == 0) {
      iVar3 = fn_006cd864(uVar1);
      if (iVar3 == 0) {
        uVar1 = fn_0022f584((char *)&DAT_005f9904,0);
        fn_0068974c(param_1,uVar1,0,1);
        return;
      }
      uVar1 = fn_0022f584((char *)&DAT_005f98e0,0);
      fn_0068974c(param_1,uVar1,0,1);
      return;
    }
  }
  else if (*(char *)(*(int *)(param_1 + 0x5c) + 0x31) != '\x01') {
    return;
  }
  *(code **)(param_1 + 0x78) = fn_005f97b8;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  return;
}



void fn_005f97b8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = fn_002f6f54();
  iVar2 = fn_006cd8f4();
  if (iVar2 == 0) {
    uVar3 = fn_002f73c0();
    fn_006cd878(uVar1,uVar3);
  }
  else {
    uVar3 = fn_002f73c0();
    fn_006cd6a8(uVar1,uVar3);
  }
  fn_002f66b8();
  fn_002f6c2c(param_1,1);
  *(code **)(param_1 + 0x78) = fn_005f96e4;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  return;
}


