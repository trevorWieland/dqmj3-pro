#include "0039c5c4_0039d338.h"



void fn_0039d338(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  fn_003e8960(*(undefined4 *)(param_1 + 0xd0));
  fn_003896fc(*(undefined4 *)(param_1 + 0xcc));
  fn_005849d4(*(undefined4 *)(param_1 + 0xc4));
  fn_0057137c(*(undefined4 *)(param_1 + 0xd8));
  fn_0041f738(*(undefined4 *)(param_1 + 0xd4));
  if (*(int *)(param_1 + 0x98) != -1) {
    fn_0016a43c(*(undefined4 *)(param_1 + 0x88));
    *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x94) != -1) {
                    /* WARNING: Subroutine does not return */
    fn_001482f4(*(undefined4 *)(param_1 + 0x88));
  }
  uVar4 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x24) + 8);
  iVar1 = fn_00176d68(uVar4);
  uVar2 = *(undefined4 *)(param_1 + 0xa4);
  uVar3 = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(iVar1 + 0x68) = uVar2;
  *(undefined4 *)(iVar1 + 0x78) = uVar3;
  *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x800;
  uVar2 = fn_00176d68(uVar4);
  fn_005456f4(uVar2,param_1 + 0xac);
  return;
}



void fn_0039d308(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  puVar1[0x19] = 0;
  *puVar1 = &DAT_0082cb74;
  return;
}



void fn_0039d2b8(int param_1)

{
  if (*(char *)(*(int *)(param_1 + 100) + 9) == '\0') {
    return;
  }
  fn_006899f4(param_1,0,0);
  fn_00689930(param_1,0,0);
  fn_0056a710(*(undefined4 *)(param_1 + 100));
  return;
}



void fn_0039d284(int param_1)

{
  uint uVar1;
  
  uVar1 = fn_006f6ab4();
  if (((uVar1 & 0x14f000f) != 0) && (*(char *)(*(int *)(param_1 + 100) + 8) == '\x01')) {
    *(undefined1 *)(*(int *)(param_1 + 100) + 8) = 0;
  }
  return;
}



void fn_0039d1cc(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0x65);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00894b30) goto LAB_0039d214;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_0039d214:
  *(undefined4 **)(param_1 + 100) = puVar1;
  fn_00689efc(param_1,0x66,0);
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



void fn_0039d158(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0082ca4c;
  if (param_1[0x3c] != 0) {
    fn_00289c54();
  }
  if (param_1[0x3c] != 0) {
    fn_00289ca8();
    fn_002feef8();
  }
  if ((int *)param_1[0x38] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x38] + 4))();
  }
  if ((int *)param_1[0x36] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x36] + 4))();
  }
  fn_003bc2c8(param_1);
  return;
}



void fn_0039d0e0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0082ca4c;
  if (param_1[0x3c] != 0) {
    fn_00289c54();
  }
  if (param_1[0x3c] != 0) {
    fn_00289ca8();
    fn_002feef8();
  }
  if ((int *)param_1[0x38] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x38] + 4))();
  }
  if ((int *)param_1[0x36] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x36] + 4))();
  }
  fn_003bc2c8(param_1);
  fn_002feef8();
  return;
}



void fn_0039cdc0(int param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint in_fpscr;
  float fVar7;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float fStack_20;
  float local_1c;
  
  iVar2 = fn_0022cdf0();
  if (iVar2 != 0) {
    fn_003bbdc0(param_1);
    fn_00243e04(*(undefined4 *)(param_1 + 0xd8));
    iVar6 = *(int *)(param_1 + 0xd8);
    iVar2 = fn_006b5350(iVar6 + 0xa0);
    if (((iVar2 != 0) && (*(char *)(iVar6 + 0x14c) == '\0')) && (*(char *)(param_1 + 0xec) != '\0'))
    {
      fn_0024405c(*(undefined4 *)(param_1 + 0xd8),1);
      iVar2 = *(int *)(param_1 + 0xe4);
      local_30 = *(float *)(iVar2 + 0x1c) + *(float *)(param_1 + 0xb8) + DAT_008cc098;
      local_2c = *(float *)(iVar2 + 0x20) + *(float *)(param_1 + 0xbc) + DAT_008cc09c;
      local_28 = *(float *)(iVar2 + 0x24) + *(float *)(param_1 + 0xc0) + DAT_008cc0a0;
      fn_00243cdc(*(undefined4 *)(param_1 + 0xd8),&local_30);
      local_24 = DAT_008cc0c8 + DAT_008cc0d4;
      fStack_20 = DAT_008cc0cc + DAT_008cc0d8;
      local_1c = DAT_008cc0d0 + DAT_008cc0dc;
      fn_002440a8(*(undefined4 *)(param_1 + 0xd8),&local_24);
      fVar7 = (float)VectorUnsignedToFloat
                               ((uint)*(byte *)(*(int *)(param_1 + 0xe4) + 0x46),
                                (byte)(in_fpscr >> 0x16) & 3);
      fVar7 = fVar7 * 0.003921569;
      if (*(int *)(*(int *)(param_1 + 0xd8) + 0x140) != 0) {
        fn_0069e2e4();
      }
      iVar2 = *(int *)(*(int *)(param_1 + 0xd8) + 0x148);
      if (iVar2 != 0) {
        fn_0069e2e4(iVar2);
        uVar4 = *(undefined4 *)(param_1 + 0xb0);
        uVar5 = *(undefined4 *)(param_1 + 0xb4);
        *(undefined4 *)(iVar2 + 0x34) = *(undefined4 *)(param_1 + 0xac);
        *(undefined4 *)(iVar2 + 0x38) = uVar4;
        *(undefined4 *)(iVar2 + 0x3c) = uVar5;
      }
      if (0x3f7fffff < (int)fVar7) {
        *(undefined1 *)(param_1 + 0xec) = 0;
      }
    }
    fn_006890bc(*(undefined4 *)(param_1 + 0xe0));
    if ((*(short *)(*(int *)(param_1 + 0x98) + 0x1c) != *(short *)(param_1 + 0xa8)) ||
       (iVar2 = fn_001f890c(param_1 + 0xc4,*(int *)(param_1 + 0x98) + 0xac), iVar2 != 0)) {
      fn_0039c784(param_1);
    }
    if (*(char *)(*(int *)(param_1 + 0x98) + 0x32e) != '\0') {
      fn_0039cbe4(param_1);
      *(undefined1 *)(*(int *)(param_1 + 0x98) + 0x32e) = 0;
    }
    if (*(char *)(*(int *)(param_1 + 0x98) + 0x2e4) != '\0') {
      uVar4 = (**(code **)(**(int **)(param_1 + 0x94) + 0x1c))();
      iVar2 = fn_00689210(uVar4,(char *)&DAT_0039d04c);
      if ((iVar2 != 0) && (piVar3 = *(int **)(iVar2 + 0x14), piVar3 != (int *)(iVar2 + 0x14))) {
        do {
          *(byte *)(piVar3 + 0x10) = *(byte *)(piVar3 + 0x10) & 0xfe;
          piVar3 = (int *)*piVar3;
        } while (piVar3 != (int *)(iVar2 + 0x14));
      }
      bVar1 = *(byte *)(*(int *)(param_1 + 0x98) + 0x27);
      iVar2 = fn_00688920(*(undefined4 *)(*(int *)(param_1 + 0x94) + 8),"ic_guest");
      *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe | bVar1;
      return;
    }
  }
  return;
}



undefined4 fn_0039c6f8(int *param_1)

{
  int iVar1;
  
  fn_0032d718();
  *(undefined1 *)(param_1[0x26] + 0x1a) = 0;
  param_1[0x1f] = 4;
  (**(code **)(*param_1 + 0x118))(param_1,DAT_008957f4,DAT_008957f8,DAT_008957fc);
  iVar1 = fn_00178f9c(param_1[0x19],param_1[0x1b]);
  iVar1 = (**(code **)(**(int **)(iVar1 + 0x10) + 0x2c))(*(int **)(iVar1 + 0x10),DAT_00895800,1);
  param_1[0x39] = iVar1;
  fn_0039c784(param_1);
  if (*(char *)(param_1[0x26] + 0x2e4) != '\0') {
    fn_0039cbe4(param_1);
  }
  return 1;
}



void fn_0039c784(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  float fVar4;
  
  fn_00243d10(param_1[0x36]);
  *(undefined2 *)(param_1 + 0x2a) = *(undefined2 *)(param_1[0x26] + 0x1c);
  iVar1 = param_1[0x26];
  param_1[0x31] = *(int *)(iVar1 + 0xac);
  param_1[0x32] = *(int *)(iVar1 + 0xb0);
  param_1[0x33] = *(int *)(iVar1 + 0xb4);
  param_1[0x34] = *(int *)(iVar1 + 0xb8);
  *(undefined2 *)(param_1 + 0x35) = *(undefined2 *)(iVar1 + 0xbc);
  fn_0022cdb4(param_1,(short)param_1[0x2a] != 0);
  if ((short)param_1[0x2a] == 0) {
    return;
  }
  iVar1 = fn_00242984();
  fVar4 = *(float *)(iVar1 + 8) * 0.5;
  param_1[0x2b] = (int)fVar4;
  param_1[0x2c] = (int)fVar4;
  param_1[0x2d] = (int)fVar4;
  piVar2 = (int *)fn_00242984((int)(short)param_1[0x2a]);
  param_1[0x2e] = *piVar2;
  iVar1 = fn_00242984((int)(short)param_1[0x2a]);
  param_1[0x2f] = *(int *)(iVar1 + 4);
  param_1[0x30] = 0;
  (**(code **)(*param_1 + 0x11c))(param_1,param_1[0x36]);
  *(undefined1 *)(param_1 + 0x3b) = 1;
  fn_006890a0(param_1[0x38],&DAT_008cc0a4,&DAT_008cc0a4,0);
  fn_0031c35c(param_1[0x25],*(undefined4 *)(param_1[0x26] + 0x20));
  uVar3 = fn_00178f9c(param_1[0x19],param_1[0x1b]);
  iVar1 = fn_001827b0(uVar3,(char *)&DAT_0039c920);
  if (iVar1 != 0) {
    fn_00190d50(iVar1,*(undefined4 *)(param_1[0x26] + 0x20));
  }
  fn_0039c930(param_1);
  return;
}



void fn_0039c5c4(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0082c924;
  if (param_1[0x29] != 0) {
    fn_00289c54();
    if (param_1[0x29] != 0) {
      fn_00289ca8();
      fn_002feef8();
      param_1[0x29] = 0;
    }
  }
  if ((int *)param_1[0x28] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x28] + 4))();
  }
  fn_0022d114(param_1);
  return;
}


