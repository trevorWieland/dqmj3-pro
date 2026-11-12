#include "005ccccc_005cd8ecaa.h"



int fn_005ccfc0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)0x0;
  if (param_2 == 0) {
    puVar2 = (undefined4 *)fn_001f74ec(param_1,0x4e);
    if (puVar2 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
      do {
        if (puVar3 == &DAT_00894694) {
          puVar5 = puVar2;
          break;
        }
        puVar3 = (undefined4 *)*puVar3;
      } while (puVar3 != (undefined4 *)0x0);
    }
    iVar1 = fn_002f5cf0(param_1);
    if (iVar1 == 0) {
      uVar4 = 4;
    }
    else {
      uVar4 = 2;
    }
    puVar5[4] = 0xdb;
    puVar5[3] = uVar4;
    puVar5[5] = 0xdb;
    fn_0068ab44(param_1,0x100094b);
    fn_006899f4(param_1,0x4e,0,1);
    param_1 = fn_002f830c(param_1);
    *(undefined1 *)(param_1 + 0x80) = 1;
  }
  else if (param_2 == 1) {
    iVar1 = fn_00154ac8(0x93);
    if (iVar1 == 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x38) = 0;
      uVar4 = fn_0022f584((char *)&DAT_005cd178);
      fn_0068974c(param_1,uVar4,0,1);
      iVar1 = fn_0068ab44(param_1,0x100094d);
      return iVar1;
    }
    puVar2 = (undefined4 *)fn_001f74ec(param_1,0x56);
    if (puVar2 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
      do {
        if (puVar3 == &DAT_00894498) {
          puVar5 = puVar2;
          break;
        }
        puVar3 = (undefined4 *)*puVar3;
      } while (puVar3 != (undefined4 *)0x0);
    }
    fn_002f5cf0(param_1);
    fn_005c19c4(puVar5,0xdb);
    fn_0068ab44(param_1,0x100094b);
    fn_006899f4(param_1,0x56,0,1);
    iVar1 = fn_002f830c(param_1);
    *(undefined1 *)(iVar1 + 0x80) = 1;
    return iVar1;
  }
  return param_1;
}



void fn_005ccf90(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xe4,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005cd19c(iVar1,param_1);
  return;
}



undefined4 * fn_005ccccc(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002c4694();
  *puVar1 = &DAT_0084b994;
  puVar1[0x2c] = &DAT_008591e0;
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


