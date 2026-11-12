#include "0058b5ec_0058c9a0ba.h"



void fn_0058bd64(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((char)param_1[3] == '\x03') {
    iVar1 = fn_0074919c(param_1);
    if (iVar1 == 0) {
      fn_0068ab44(param_1,0x100094d);
      return;
    }
    if (param_1[0x43] == 1) {
      param_1[0x48] = param_2;
      if (param_2 == 0) {
        *(undefined4 *)(param_1[0x17] + 0x38) = 0;
        uVar2 = fn_0022f584((char *)&DAT_0058bef0);
        fn_007491f0(param_1,uVar2);
        param_1[0x49] = 0xf;
        fn_003f71d0(*(undefined4 *)(param_1[0x3c] + 0x40),0xc);
        fn_0068ab44(param_1,0x100094b);
        iVar1 = 4;
      }
      else {
        if (param_2 == 1) {
          iVar1 = (**(code **)(*param_1 + 0x164))(param_1);
          if (iVar1 == 0) {
            return;
          }
          *(undefined4 *)(param_1[0x3d] + 8) = 0xe2;
          fn_006899f4(param_1,0xe5,1);
          (**(code **)(*param_1 + 0x13c))(param_1,0xe5);
          param_1[0x45] = 0x13;
          fn_0068ab44(param_1,0x100094b);
          return;
        }
        if (param_2 != 2) {
          return;
        }
        *(undefined4 *)(param_1[0x17] + 0x38) = 0;
        uVar2 = fn_0022f584((char *)&DAT_0058bed0);
        fn_007491f0(param_1,uVar2);
        param_1[0x49] = 0x1e;
        fn_003f71d0(*(undefined4 *)(param_1[0x3c] + 0x40),0xd);
        fn_0068ab44(param_1,0x100094c);
        iVar1 = 2;
      }
      param_1[0x45] = iVar1;
    }
  }
  return;
}



void fn_0058bd34(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x144,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0058c8bc(iVar1,param_1);
  return;
}



void fn_0058c8bc(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00444384(param_1,param_2,(char *)&DAT_0058c914,0,0);
  *puVar1 = &DAT_00843ccc;
  puVar1[0x49] = 0;
  *(undefined1 *)(puVar1 + 0x4a) = 0;
  puVar1[0x4b] = 0;
  puVar1[0x4c] = 0;
  puVar1[0x4d] = 0;
  puVar1[0x4e] = 0;
  puVar1[0x4f] = 0;
  puVar1[0x50] = 0;
  puVar1[0x43] = 0;
  puVar1[0x44] = 0;
  puVar1[0x45] = 0;
  puVar1[0x46] = 0;
  puVar1[0x47] = 0;
  return;
}


