#include "0050a73c_0050b0d4b.h"



int fn_0050b0d4(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = fn_0050fbd8(param_2,param_3);
  if ((uVar1 < 0xc) || (uVar1 == 0xfe)) {
    for (piVar2 = (int *)(param_1 + 0x3c);
        (int *)(param_1 + *(int *)(param_1 + 0x38) * 4 + 0x3c) != piVar2; piVar2 = piVar2 + 1) {
      if (*(byte *)(*piVar2 + 0x14) == uVar1) {
        return *piVar2;
      }
    }
  }
  return 0;
}



int fn_0050b080(int param_1,uint param_2)

{
  int *piVar1;
  
  if ((param_2 < 0xc) || (param_2 == 0xfe)) {
    for (piVar1 = (int *)(param_1 + 0x3c);
        (int *)(param_1 + *(int *)(param_1 + 0x38) * 4 + 0x3c) != piVar1; piVar1 = piVar1 + 1) {
      if (*(byte *)(*piVar1 + 0x14) == param_2) {
        return *piVar1;
      }
    }
  }
  return 0;
}



int fn_0050afe0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0x30) - 0x100000U < 0x3ff00000) {
    if (*(int *)(param_1 + 0x28) != 0) {
      puVar1 = *(undefined4 **)(param_1 + 0xc);
      while (puVar1 != (undefined4 *)(param_1 + 8)) {
        puVar2 = (undefined4 *)puVar1[1];
        *puVar1 = 0;
        puVar1[1] = 0;
        fn_004f0ab4(param_1 + 0x14,param_1 + 0x18,*(int *)(param_1 + 0x24) + (int)puVar1);
        puVar1 = puVar2;
      }
      fn_004f0c04(param_1 + 4);
    }
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x2c);
    if (*(int *)(param_1 + 0x30) != 0) {
      fn_00656b7c();
    }
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  return param_1;
}



int fn_0050af98(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  fn_004f0c04(param_1 + 4);
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  fn_004f0c04(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  return param_1;
}



void fn_0050af00(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0x30) - 0x100000U < 0x3ff00000) {
    if (*(int *)(param_1 + 0x28) != 0) {
      puVar1 = *(undefined4 **)(param_1 + 0xc);
      while (puVar1 != (undefined4 *)(param_1 + 8)) {
        puVar2 = (undefined4 *)puVar1[1];
        *puVar1 = 0;
        puVar1[1] = 0;
        fn_004f0ab4(param_1 + 0x14,param_1 + 0x18,*(int *)(param_1 + 0x24) + (int)puVar1);
        puVar1 = puVar2;
      }
      fn_004f0c04(param_1 + 4);
    }
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x2c);
    if (*(int *)(param_1 + 0x30) != 0) {
      fn_00656b7c();
    }
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  return;
}



void fn_0050aef0(int param_1,uint param_2)

{
  if (param_2 <= *(uint *)(param_1 + 0x2c)) {
    *(uint *)(param_1 + 0x34) = param_2;
  }
  return;
}



undefined1 * fn_0050ae68(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined4 unaff_r4;
  
  puVar1 = (undefined4 *)fn_006d9e0c();
  if (puVar1 == (undefined4 *)0x0) {
    puVar2 = &DAT_d8814829;
  }
  else {
    puVar3 = (undefined4 *)fn_0013d4ec(param_1);
    *puVar1 = *puVar3;
    puVar1[1] = puVar3[1];
    *(undefined1 *)(puVar1 + 2) = 0xfd;
    puVar1[3] = 0;
    fn_004f0c1c(param_1 + 4,puVar1 + -2);
    fn_004f0ab4(param_1 + 0x14,param_1 + 0x18,*(int *)(param_1 + 0x24) + (int)(puVar1 + -2),param_4
                 ,unaff_r4);
    puVar2 = (undefined1 *)0x0;
  }
  return puVar2;
}


