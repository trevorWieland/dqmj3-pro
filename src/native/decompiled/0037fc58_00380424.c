#include "0037fc58_00380424.h"



void fn_00380424(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 0x104);
  iVar1 = *param_2;
  piVar2 = (int *)(iVar1 + -0xc);
  if (*piVar2 == -1) {
    if (piVar3 != param_2) {
      fn_00177c88(piVar3,0,*(undefined4 *)(*piVar3 + -4),iVar1,*(undefined4 *)(iVar1 + -4),0,
                   *(undefined4 *)(iVar1 + -4));
      return;
    }
  }
  else {
    if (piVar2 != &DAT_008f9ce8) {
      *piVar2 = *piVar2 + 1;
    }
    if ((undefined4 *)*piVar3 != &DAT_008f9cf4) {
      piVar2 = (undefined4 *)*piVar3 + -3;
      iVar1 = *piVar2;
      if ((iVar1 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar1 + -1, iVar1 == 0)))) {
        fn_001008c4(*piVar3 + -0xc,*(int *)(*piVar3 + -8) + 8,0);
      }
    }
    *piVar3 = *param_2;
  }
  return;
}



void fn_003803c8(int param_1)

{
  fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x104),1,0,1,1,0,0,1);
  fn_00689bd0(param_1,0x48,0);
  return;
}



void fn_00380368(int param_1)

{
  fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x104),1,0,1,1,0,0,1);
  fn_00689bd0(param_1,0x48,0);
  return;
}



void fn_00380308(int param_1)

{
  fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x104),1,0,1,1,0,0,1);
  fn_00689bd0(param_1,0x48,0);
  return;
}



int fn_003801dc(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  iVar1 = fn_002bf534();
  if (iVar1 != 0) {
    if (*(char *)(param_1 + 0xfc) != '\0') {
      bVar4 = *(int *)(param_1 + 0x68) != 1;
      iVar2 = 1;
      if (bVar4) {
        iVar2 = *param_2;
      }
      if (!bVar4 || iVar2 == 1) {
        fn_0037feb4(param_1,0);
        fn_0037feb4(param_1,1);
      }
    }
    if (*(char *)(param_1 + 0x10a) != '\0') {
      if ((*(int *)(param_1 + 0x68) == 4) && (*param_2 == 1 || *param_2 == 2)) {
        uVar3 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),*(undefined4 *)(param_1 + 0x74));
        fn_0020bbc4(auStack_20,uVar3);
        iVar2 = fn_006bfffc(auStack_1c);
        if (iVar2 != 0) {
          fn_0020b99c(auStack_20);
        }
      }
      if ((*param_2 == 4) && (*(int *)(param_1 + 0x68) == 1 || *(int *)(param_1 + 0x68) == 2)) {
        uVar3 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),param_2[3]);
        fn_0020bbc4(auStack_20,uVar3);
        iVar2 = fn_006bfffc(auStack_1c);
        if (iVar2 != 0) {
          fn_0020b99c(auStack_20);
        }
      }
    }
  }
  return iVar1;
}



void fn_00380100(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  
  piVar2 = (int *)fn_002c11d0(param_1,4,0,param_4,param_4);
  bVar1 = (byte)param_2;
  uVar7 = 0;
  do {
    iVar3 = (**(code **)(*piVar2 + 0xc))(piVar2,uVar7);
    uVar7 = uVar7 + 1;
    *(byte *)(iVar3 + 0x35) = bVar1 ^ 1;
  } while (uVar7 < 0xc);
  fn_00380914(param_1,param_2);
  iVar3 = fn_002c11d0(param_1,1,0);
  *(byte *)(*(int *)(iVar3 + 0x10) + 0xe7) = bVar1;
  if (param_2 == 0) {
    uVar6 = 1;
    uVar8 = 0;
    uVar5 = 1;
    uVar4 = 1;
  }
  else {
    uVar8 = 0xffffffff;
    uVar4 = 3;
    uVar6 = 5;
    uVar5 = 8;
  }
  fn_0031f8fc(param_1[0x3c],uVar4,uVar5,uVar6,uVar8);
  iVar3 = param_1[0x3c];
  *(byte *)(iVar3 + 0x85) = bVar1;
  fn_0031ee10(iVar3,0);
                    /* WARNING: Could not recover jumptable at 0x003801d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x198))(param_1,param_2 ^ 1);
  return;
}



undefined4 fn_0037ffb4(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  
  iVar1 = fn_0042fa70();
  uVar2 = 0;
  if (iVar1 != 0) {
    fn_007854f8(param_1 + 0x100,param_2 + 0x60);
    fn_007854f8(param_1 + 0x104,param_2 + 100);
    *(undefined1 *)(param_1 + 0x108) = *(undefined1 *)(param_2 + 0x68);
    *(bool *)(param_1 + 0xfc) = (*(byte *)(param_1 + 0xfc) & *(byte *)(param_2 + 0x69)) != 0;
    *(undefined1 *)(param_1 + 0x109) = *(undefined1 *)(param_2 + 0x6a);
    *(undefined1 *)(param_1 + 0x10a) = *(undefined1 *)(param_2 + 0x6b);
    uVar2 = fn_00178f9c(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x88));
    uVar2 = fn_00172c98(uVar2,(char *)&DAT_003800e8);
    iVar1 = fn_00145b00(0x88,&DAT_00812c8c);
    piVar3 = (int *)0x0;
    if (iVar1 != 0) {
      piVar3 = (int *)fn_0031fee0(iVar1,*(undefined4 *)(param_1 + 4),uVar2,1,
                                   *(undefined4 *)(param_1 + 0x48));
    }
    piVar4 = *(int **)(param_1 + 0xf0);
    if (piVar4 != piVar3) {
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 4))(piVar4);
      }
      *(int **)(param_1 + 0xf0) = piVar3;
    }
    (**(code **)(**(int **)(param_1 + 0xf0) + 0x10))();
    fn_0031f8fc(*(undefined4 *)(param_1 + 0xf0),1,0,0,0xffffffff);
    iVar1 = *(int *)(param_1 + 0xf0);
    *(bool *)(iVar1 + 0x7f) = *(char *)(param_1 + 0xfc) != '\0';
    fn_0031ef00(iVar1,0,0);
    *(undefined1 *)(*(int *)(param_1 + 0xf0) + 0x83) = 0;
    fn_0031f954();
    uVar2 = 1;
  }
  return uVar2;
}



void fn_0037feb4(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  
  piVar1 = (int *)fn_002c11d0(param_1,1,0);
  bVar5 = 0;
  iVar6 = 0;
  do {
    iVar2 = (**(code **)(*piVar1 + 8))(piVar1,0,iVar6);
    if (param_2 == 0) {
      if ((*(int *)(param_1 + 0xf4) == 0) ||
         (iVar3 = fn_002e3e9c(piVar1,0,iVar6), iVar3 != *(int *)(param_1 + 0xf4))) {
        bVar4 = 0;
      }
      else {
        bVar4 = 1;
      }
      *(byte *)(iVar2 + 0x27) = bVar4;
    }
    else {
      if ((*(int *)(param_1 + 0xf8) == 0) ||
         (iVar3 = fn_002e3e9c(piVar1,0,iVar6), iVar3 != *(int *)(param_1 + 0xf8))) {
        bVar4 = 0;
      }
      else {
        bVar4 = 1;
      }
      fn_002b3d78(iVar2,bVar4,0);
    }
    bVar5 = bVar5 | bVar4;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 4);
  if (param_2 == 0) {
    if (bVar5 == 0) {
      *(undefined4 *)(param_1 + 0xf4) = 0;
    }
    return;
  }
  if (bVar5 == 0) {
    *(undefined4 *)(param_1 + 0xf8) = 0;
  }
  return;
}



void fn_0037fe64(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00829400;
  if ((int *)param_1[0x2e] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x2e] + 4))();
  }
  if ((int *)param_1[0x27] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x27] + 4))();
  }
  fn_0068ad5c(param_1);
  return;
}



undefined4 * fn_0037fcf4(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  *puVar1 = &PTR_FUN_00829400;
  puVar1[0x19] = 0xc3c80000;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0x43c80000;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  puVar1[0x22] = 8;
  uVar5 = *(undefined4 *)(param_2 + 8);
  puVar1[0x24] = 0xffffffff;
  puVar1[0x23] = uVar5;
  puVar1[0x25] = 0xffffffff;
  puVar1[0x26] = 0xffffffff;
  puVar6 = (undefined4 *)0x0;
  iVar2 = fn_00145b00(0x20,&DAT_00812c8c);
  uVar5 = 0;
  if (iVar2 != 0) {
    uVar5 = fn_00689144();
  }
  puVar1[0x27] = uVar5;
  puVar1[0x28] = 1;
  puVar1[0x29] = 0;
  puVar1[0x2a] = 0;
  puVar1[0x2b] = 0;
  puVar1[0x2e] = 0;
  puVar1[0x2f] = 0;
  puVar3 = (undefined4 *)fn_001f74d8(puVar1,0x77);
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar4 == &DAT_00893d64) {
        puVar6 = puVar3;
        break;
      }
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar1[0x2b] = puVar6;
  puVar1[0x2c] = (uint)*(byte *)(puVar6 + 2);
  puVar1[0x2d] = (uint)*(byte *)((int)puVar6 + 9);
  return puVar1;
}



void fn_0037fc58(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (0 < *(int *)(*(int *)(param_1 + 0x9c) + 0x1c)) {
    fn_006890bc(*(undefined4 *)(param_1 + 0x9c));
  }
  if (*(int *)(param_1 + 0x94) != -1) {
    iVar1 = *(int *)(param_1 + 0x9c);
    iVar2 = fn_00178f9c(*(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x94));
    iVar2 = *(int *)(iVar2 + 0x10);
    uVar3 = *(undefined4 *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(iVar1 + 4);
    *(undefined4 *)(iVar2 + 0x20) = uVar3;
    *(undefined4 *)(iVar2 + 0x24) = uVar4;
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xef | 0x10;
  }
  if (*(int **)(param_1 + 0xb8) == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0037fcd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0xb8) + 0x14))();
  return;
}


