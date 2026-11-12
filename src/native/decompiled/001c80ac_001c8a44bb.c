#include "001c80ac_001c8a44bb.h"



void fn_001c8a44(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  
  if (param_4 == -1) {
    return;
  }
  uVar1 = fn_00183970(param_1,*(undefined4 *)(param_1 + 0x38),param_1 + 0x38,param_4,param_4);
  fn_001c897c(param_1,param_2,param_3,uVar1,0);
  return;
}



undefined4 fn_001c897c(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_4 + 0x10);
  if (param_5 != 0) {
    iVar4 = fn_00172c98(iVar4);
    iVar4 = *(int *)(iVar4 + 0xac);
  }
  uVar1 = fn_001774dc(param_1,param_1 + 0x40,0);
  uVar2 = fn_0019fb30(*(undefined4 *)(iVar4 + 0x14),param_3);
  uVar2 = fn_005518e4(iVar4,param_2,uVar2,1);
  iVar3 = fn_00145b00(0x20,&DAT_00812c8c);
  if (iVar3 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = fn_0016a2c0(iVar3,uVar1,0,0,uVar2,0,iVar4);
  }
  fn_0017d948(param_1 + 0x40,param_1 + 0x44,iVar4 + 0x18);
  return uVar1;
}



void fn_001c88b8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  
  piVar3 = (int *)*(int *)(param_1 + 0x38);
  while (piVar3 != (int *)(param_1 + 0x38)) {
    piVar4 = (int *)*piVar3;
    iVar2 = (int)(piVar3 + -2);
    if (piVar3[-1] != 0) {
      if (piVar3[-4] == 0) {
        uVar1 = fn_0017a088(*(undefined4 *)(param_1 + 0x78));
        piVar3[-1] = uVar1;
      }
      else {
        uVar1 = fn_0017a088(*(undefined4 *)(param_1 + 0x7c));
        piVar3[-1] = uVar1;
      }
    }
    fn_0017d90c(param_1 + 0x34,piVar3);
    if (*(char *)(piVar3 + -6) == '\x01') {
      if ((int *)piVar3[-3] != (int *)0x0) {
        (**(code **)(*(int *)piVar3[-3] + 8))();
      }
      piVar3[-3] = 0;
    }
    bVar5 = piVar3 != (int *)0x1c;
    piVar3 = piVar4;
    if (bVar5) {
      iVar2 = fn_002fedf4(iVar2);
      fn_002feef8(iVar2 + -0x14);
    }
  }
  return;
}


