#include "001c483c_001c5180b.h"



void fn_001c5180(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < (*(int *)(param_1 + 0x170) - *(int *)(param_1 + 0x16c)) / 0x28) {
    do {
      iVar1 = fn_003035b0(param_3,*(int *)(param_1 + 0x16c) + iVar2 * 0x28 + 8);
      if ((iVar1 == 0) &&
         ((param_4 == -1 || (*(int *)(*(int *)(param_1 + 0x16c) + iVar2 * 0x28) == param_4)))) {
        fn_0017fd38(param_2,*(undefined4 *)(*(int *)(param_1 + 0x16c) + iVar2 * 0x28 + 4),10);
        return;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (*(int *)(param_1 + 0x170) - *(int *)(param_1 + 0x16c)) / 0x28);
  }
  return;
}



void fn_001c5118(int param_1)

{
  if (*(int *)(param_1 + 0x178) == 0x21) {
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



void fn_001c50dc(undefined4 *param_1)

{
  *param_1 = &DAT_0081b7ec;
  if (param_1[0x5d] != 0) {
    fn_002feef8(param_1[0x5d]);
  }
  fn_001dc08c(param_1);
  fn_002feef8();
  return;
}



undefined4 * fn_001c5034(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  short *psVar4;
  
  puVar1 = (undefined4 *)fn_001dbf48(param_1,5);
  *puVar1 = &DAT_0081b7ec;
  puVar1[0x5c] = param_2;
  puVar1[0x5a] = 0xffffffff;
  puVar1[0x5b] = 0;
  iVar2 = fn_00145b00(0xc,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_002a51f8(iVar2,0);
  }
  puVar1[0x5f] = 0xffffffff;
  puVar1[0x5d] = uVar3;
  puVar1[0x5e] = 0;
  puVar1[0x60] = 0xffffffff;
  if (*(int *)(puVar1[0x5c] + 0x10) == 2) {
    fn_006f756c(DAT_008977e0);
    uVar3 = fn_006bad40();
    puVar1[0x5f] = uVar3;
    uVar3 = fn_006f756c(DAT_008977e0);
    psVar4 = (short *)fn_006bad1c(uVar3,puVar1[0x5f]);
    puVar1[0x60] = (int)*psVar4;
  }
  return puVar1;
}



void fn_001c4b7c(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  
  fn_001db0c4();
  fVar5 = 0.3;
  switch(param_1[0x5a]) {
  case 0:
    iVar2 = fn_006a9948(param_1);
    if (iVar2 == 0) {
      iVar2 = fn_00154ac8(0x4a);
      if (iVar2 != 0) {
        fn_002a5144(param_1[0x5d],param_1 + 8);
      }
    }
    else {
      param_1[0x5a] = 1;
      (**(code **)(*param_1 + 0x58))(param_1,1);
      (**(code **)(*param_1 + 0xd8))(param_1);
      param_1[0x5b] = 0;
    }
    break;
  case 1:
    iVar2 = param_1[0x5b] + 1;
    param_1[0x5b] = iVar2;
    if (iVar2 < 0xf) {
      VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
      (**(code **)(*param_1 + 0xd8))(param_1);
    }
    else {
      (**(code **)(*param_1 + 0xd8))(param_1);
      param_1[0x5a] = 2;
      param_1[0x4e] = param_1[0x4e] & 0xfffffffd;
    }
    break;
  case 2:
    iVar2 = fn_001c483c(param_1);
    if (iVar2 == 0) {
      param_1[0x5a] = 3;
    }
    break;
  case 3:
    if (*(char *)(DAT_008977e0 + 0x170) == '\x01') {
      return;
    }
    fn_006f7a84();
    iVar2 = fn_006aaa00();
    if (iVar2 != 0) {
      return;
    }
    iVar2 = fn_001c483c(param_1);
    if ((iVar2 != 0) && (*(char *)(DAT_008977e0 + 0x219) == '\0')) {
      iVar2 = fn_006f7a84();
      *(undefined1 *)(iVar2 + 0x3e3) = 1;
      iVar2 = fn_006f756c(DAT_008977e0);
      uVar3 = *(undefined4 *)(iVar2 + 0x14);
      uVar1 = fn_006f75ac(DAT_008977e0);
      fn_0038ff40(uVar1,0,0,0,0);
      if (*(int *)(param_1[0x5c] + 0xc) == 0) {
        uVar3 = fn_0025f9d8(DAT_00897800,uVar3,(char *)&DAT_001c4f28);
        fn_0038fee8(uVar1,uVar3);
      }
      else {
        uVar3 = fn_0025f9d8(DAT_00897800,uVar3,(char *)&DAT_001c4f18);
        fn_0038fee8(uVar1,uVar3);
      }
      param_1[0x5a] = 4;
      param_1[0x5e] = 1;
      fn_00698fb8(DAT_008977e0,1);
      uVar1 = fn_006f7a84(DAT_008977e0);
      fn_001dcb00(uVar1,1);
    }
    break;
  case 4:
    fn_006f75ac(DAT_008977e0);
    iVar2 = fn_006b5398();
    if (iVar2 == 0) break;
    fn_006f75ac(DAT_008977e0);
    fn_0016b40c();
    iVar2 = 5;
    goto LAB_001c4fa8;
  case 5:
    iVar2 = fn_006f75ac(DAT_008977e0);
    iVar2 = fn_001759d0(*(undefined4 *)(iVar2 + 8));
    if (iVar2 != 0) break;
    iVar2 = fn_006f75ac(DAT_008977e0);
    if (*(char *)(*(int *)(iVar2 + 8) + 0x8f) != '\x01') {
      fn_00698fb8(DAT_008977e0,0xffffffff);
      uVar1 = fn_006f7a84(DAT_008977e0);
      fn_001dcb00(uVar1,0);
      param_1[0x5a] = 2;
      param_1[0x5e] = 2;
      break;
    }
    uVar1 = fn_006f72b4(DAT_008977e0);
    fn_0021f144(uVar1,*(undefined4 *)(param_1[0x5c] + 0x28));
    *(undefined4 *)(param_1[0x5c] + 0x28) = 0xffffffff;
    if (*(int *)(param_1[0x5c] + 0xc) == 0) {
      fn_006f756c(DAT_008977e0);
      fn_002d9f78();
    }
    else if (*(int *)(param_1[0x5c] + 0x10) == 2) {
      uVar1 = fn_006f756c(DAT_008977e0);
      fn_002d8cac(uVar1,*(undefined4 *)param_1[0x5c],param_1[0x5f]);
    }
    else {
      uVar1 = fn_006f756c(DAT_008977e0);
      fn_002d8cb4(uVar1,*(undefined4 *)param_1[0x5c]);
    }
    iVar2 = fn_006f7a84(DAT_008977e0);
    *(undefined1 *)(iVar2 + 0x3e1) = 0;
    iVar2 = 6;
LAB_001c4fa8:
    param_1[0x5a] = iVar2;
  }
  iVar2 = param_1[0x5e];
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      param_1[0x4e] = param_1[0x4e] | 2;
                    /* WARNING: Could not recover jumptable at 0x001c502c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xd8))(param_1);
      return;
    }
    if (iVar2 == 2) {
      param_1[0x4e] = param_1[0x4e] | 2;
      fVar4 = (float)param_1[0x3e] - 0.046666667;
      if ((int)fVar4 < 0x3e99999a) {
        fVar4 = fVar5;
      }
      (**(code **)(*param_1 + 0xd8))(param_1);
      if (fVar4 == 0.3) {
        param_1[0x4e] = param_1[0x4e] & 0xfffffffd;
        param_1[0x5e] = 0;
      }
    }
  }
  return;
}



void fn_001c4b10(int *param_1)

{
  fn_001d9f6c(param_1,0x7549);
  if ((*(byte *)(param_1[0x5c] + 8) & 8) == 0) {
    (**(code **)(*param_1 + 0xd8))(param_1);
    (**(code **)(*param_1 + 300))(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x001c4b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x58))(param_1,0);
    return;
  }
  return;
}


