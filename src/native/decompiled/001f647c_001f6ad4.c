#include "001f647c_001f6ad4.h"



void fn_001f6ad4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_10;
  
  local_10 = param_4;
  (**(code **)(**(int **)(param_1 + 0x24) + 0x1c))();
  local_10 = 0;
  fn_00163988(DAT_00897808,&local_10,0x14);
  local_10 = 0;
  fn_00163988(DAT_0089780c,&local_10,0x14);
  return;
}



void fn_001f6960(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *param_1 = &DAT_0081c1b4;
  puVar3 = (undefined4 *)param_1[2];
  while (puVar2 = puVar3, puVar2 != param_1 + 2) {
    puVar3 = (undefined4 *)*puVar2;
    for (iVar1 = puVar2[-1]; 0 < iVar1; iVar1 = iVar1 + -1) {
      fn_00110aa8(param_1,puVar2 + -4);
    }
  }
  fn_002feef8(param_1);
  return;
}



undefined4 * fn_001f6934(undefined4 param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_2 + 4);
  while( true ) {
    if (puVar1 == (undefined4 *)(param_2 + 4)) {
      return (undefined4 *)0x0;
    }
    if (puVar1[-4] == param_3) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return puVar1 + -4;
}



void fn_001f68d8(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *param_1 = &DAT_0081c1a4;
  puVar3 = (undefined4 *)param_1[2];
  while (puVar2 = puVar3, puVar2 != param_1 + 2) {
    puVar3 = (undefined4 *)*puVar2;
    for (iVar1 = puVar2[-1]; 0 < iVar1; iVar1 = iVar1 + -1) {
      fn_00148b94(param_1,puVar2 + -4);
    }
  }
  fn_002feef8(param_1);
  return;
}



undefined4 fn_001f6864(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 100);
  piVar3 = *(int **)(iVar1 + 8);
  while( true ) {
    if (piVar3 == (int *)(iVar1 + 8)) {
      return 1;
    }
    iVar2 = fn_00145aac(piVar3[-2]);
    if (iVar2 != 1) break;
    piVar3 = (int *)*piVar3;
  }
  return 0;
}



undefined4 * fn_001f672c(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  
  *param_1 = &PTR_FUN_0081c168;
  fn_001c9360(param_1[1]);
  if ((int *)param_1[0x18] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x18] + 4))();
  }
  if ((int *)param_1[0x17] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x17] + 4))();
  }
  piVar5 = param_1 + 2;
  while (param_1[10] != 0) {
    iVar1 = *piVar5;
    *piVar5 = iVar1 + 1;
    iVar2 = param_1[10] + -1;
    param_1[10] = iVar2;
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = param_1[4];
    }
    if (iVar2 == 0 || iVar1 + 1 == iVar3) {
      puVar4 = (undefined4 *)param_1[5];
      param_1[5] = puVar4 + 1;
      fn_001008c4(*puVar4,0x20);
      if (param_1[10] == 0) {
        param_1[6] = 0;
        param_1[7] = 0;
        param_1[8] = 0;
        param_1[9] = 0;
        *piVar5 = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        fn_001008c4(param_1[0xb],param_1[0xc],0);
      }
      else {
        iVar3 = *(int *)param_1[5];
        if ((int *)param_1[5] == (int *)0x0) {
          iVar1 = 0;
          iVar2 = 0;
        }
        else {
          iVar1 = iVar3 + 0x20;
          iVar2 = iVar3;
        }
        param_1[4] = iVar1;
        *piVar5 = iVar3;
        param_1[3] = iVar2;
      }
    }
  }
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 4))();
  }
  return param_1;
}



undefined4 * fn_001f662c(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)fn_0069c2c8();
  *puVar1 = &PTR_FUN_0081c168;
  iVar2 = fn_00145b00(0x50,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_002e2788();
  }
  puVar1[1] = uVar3;
  puVar1[0xc] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xd] = &DAT_00858ff0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  *(undefined1 *)(puVar1 + 0x16) = 0;
  iVar2 = fn_00145b00(0x10,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_003db900();
  }
  puVar1[0x17] = uVar3;
  iVar2 = fn_00145b00(0x10,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_0031a690(iVar2,puVar1,puVar1[0x17]);
  }
  puVar1[0x18] = uVar3;
  fn_002e25f4(puVar1[1],1);
  return puVar1;
}



undefined4 fn_001f6618(void)

{
  return 1;
}



void fn_001f647c(int param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  
  if (((*(byte *)(DAT_008977e0 + 0x170) < 2) || (iVar1 = fn_006f7ad0(DAT_008977e0,1), iVar1 == 0))
     || (iVar1 = fn_006f7a48(DAT_008977e0),
        *(char *)(iVar1 + 4) != '\0' && *(char *)(iVar1 + 4) != '\x03')) {
    if ((*(char *)(*(int *)(param_1 + 4) + 0x4c) == '\0') ||
       (iVar1 = (**(code **)(**(int **)(DAT_008977e0 + 0x28) + 0x2c))(), iVar1 != 0)) {
      iVar1 = fn_006bc18c(*(undefined4 *)(param_1 + 4));
      if (iVar1 == 0) {
        fn_002e2130(*(undefined4 *)(param_1 + 4));
      }
      *(undefined1 **)(param_1 + 0x48) = &LAB_001f642c;
      *(undefined4 *)(param_1 + 0x4c) = 0;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x38);
    uVar2 = *(uint *)(param_1 + 0x4c);
    uVar4 = *(uint *)(param_1 + 0x3c);
    *(int *)(param_1 + 0x40) = iVar1;
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x48);
    *(uint *)(param_1 + 0x44) = uVar4;
    *(uint *)(param_1 + 0x3c) = uVar2;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
    if ((iVar1 == *(int *)(param_1 + 0x48)) &&
       (((iVar1 == 0 && (((*(byte *)(param_1 + 0x44) | uVar2) & 1) == 0)) || (uVar4 == uVar2)))) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x54) = 0;
    }
    fn_0031a468(*(undefined4 *)(param_1 + 0x60));
    if ((*(int *)(param_1 + 0x38) != 0) ||
       ((*(uint *)(param_1 + 0x3c) & 1) != 0 && *(uint *)(param_1 + 0x3c) != 0)) {
      pcVar3 = *(code **)(param_1 + 0x38);
      if ((*(uint *)(param_1 + 0x3c) & 1) != 0) {
        pcVar3 = *(code **)(pcVar3 + *(int *)(param_1 + ((int)*(uint *)(param_1 + 0x3c) >> 1)));
      }
      (*pcVar3)();
    }
    fn_002e2658(*(undefined4 *)(param_1 + 4));
  }
  fn_006bc184(*(undefined4 *)(param_1 + 4));
  return;
}


