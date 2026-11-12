#include "00459cb0_0045a5b0aba.h"



int * fn_00459eac(int param_1,ushort param_2)

{
  int iVar1;
  int *piVar2;
  
  if ((param_1 == 0) || ((*(byte *)(param_1 + 0x1c) & 4) == 0)) {
    iVar1 = fn_0015ece0(0x150);
    piVar2 = (int *)0x0;
    if (iVar1 != 0) {
      piVar2 = (int *)fn_004bc1a4(iVar1,0,0xf,0,param_1,0);
    }
LAB_00459f58:
    piVar2[0x28] = 0;
    piVar2[0x29] = 0;
    piVar2[0x2a] = 0;
    piVar2[0x2b] = 0;
    piVar2[0x2c] = 0;
    piVar2[0x2d] = 0;
    piVar2[0x2e] = 0;
    *(undefined1 *)(piVar2 + 9) = 0xd0;
    *(ushort *)((int)piVar2 + 0xa2) = param_2 & 0xf;
    return piVar2;
  }
  iVar1 = fn_00455040(0x150,0);
  if (iVar1 != 0) {
    piVar2 = (int *)fn_00491934(iVar1,0,0xf,0,param_1,0);
    if (piVar2 != (int *)0x0) {
      if (((*(ushort *)(piVar2 + 0xf) & 0x40) == 0) || (piVar2[0x46] != 0)) goto LAB_00459f58;
      (**(code **)(*piVar2 + 4))();
    }
  }
  return (int *)0x0;
}


