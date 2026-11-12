#include "002e68e8_002e6e84.h"



void fn_002e6e84(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_90 [128];
  
  iVar3 = param_1[0x21] + param_2 * 0x34;
  iVar2 = *(int *)(iVar3 + 0x30);
  if (iVar2 == 0) {
    iVar2 = (**(code **)(*param_1 + 8))();
    uVar4 = *(undefined4 *)(iVar2 + 8);
    fn_00301f50(auStack_90,0x80);
    fn_00101a50(auStack_90,0x80,L"rom:/data/Menu/Library/%s.arc",iVar3 + 0xc);
    uVar1 = fn_001481c8(uVar4,auStack_90,&DAT_002e6f90,1,1);
    *(undefined4 *)(iVar3 + 4) = uVar1;
    uVar1 = fn_001480d0(uVar4,uVar1,(char *)&DAT_002e6f98,"",0,1,2);
    *(undefined4 *)(iVar3 + 8) = uVar1;
    iVar2 = fn_00178f9c(uVar4,uVar1);
    *(undefined4 *)(iVar3 + 0x30) = *(undefined4 *)(iVar2 + 0x10);
    return;
  }
  *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe | 1;
  return;
}



undefined4 fn_002e6dac(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0xd1);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00893ef0) goto LAB_002e6df4;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_002e6df4:
  if (param_2 == 0) {
    uVar3 = fn_003ba118(puVar1,(char *)&DAT_002e6e5c);
    return uVar3;
  }
  if (param_2 == 1) {
    uVar3 = fn_003ba118(puVar1,(char *)&DAT_002e6e70);
    return uVar3;
  }
  if (param_2 == 2) {
    uVar3 = fn_003ba118(puVar1,(char *)&DAT_002e6e48);
    return uVar3;
  }
  return 0;
}



void fn_002e6cc8(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  
  iVar2 = param_1[0x22] - param_1[0x21] >> 0x1f;
  iVar1 = (param_1[0x22] - param_1[0x21]) / 0x34 + iVar2;
  if (iVar1 == iVar2) {
    return;
  }
  iVar3 = (**(code **)(*param_1 + 8))(param_1);
  uVar5 = *(undefined4 *)(iVar3 + 8);
  uVar4 = 0;
  if (iVar1 != iVar2) {
    do {
      iVar3 = param_1[0x21] + uVar4 * 0x34;
      if (*(int *)(iVar3 + 0x30) != 0) {
        fn_0016a43c(uVar5,*(undefined4 *)(iVar3 + 8));
                    /* WARNING: Subroutine does not return */
        fn_001482f4(uVar5,*(undefined4 *)(iVar3 + 4));
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)(iVar1 - iVar2));
  }
  fn_001c93c8(uVar5);
  fn_001c93c8(uVar5);
  return;
}



void fn_002e6c7c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 8))(param_1);
  uVar2 = *(undefined4 *)(iVar1 + 8);
  fn_00159f34(uVar2,param_1[0x31]);
  fn_0016a43c(uVar2,param_1[0x30]);
                    /* WARNING: Subroutine does not return */
  fn_001482f4(uVar2,param_1[0x2f]);
}



void fn_002e6c1c(int *param_1)

{
  int iVar1;
  
  if (param_1[0x1a] == 1) {
    iVar1 = (**(code **)(*param_1 + 8))(param_1);
    iVar1 = fn_00178f9c(*(undefined4 *)(iVar1 + 8),param_1[0x30]);
    if (((*(byte *)(*(int *)(iVar1 + 0x10) + 0x44) & 1) != 0) &&
       (iVar1 = param_1[0x2b], param_1[0x2b] = iVar1 + -1, iVar1 + -1 < 0)) {
      param_1[0x2b] = param_1[0x2e];
    }
  }
  return;
}



undefined4 * fn_002e6a94(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  *puVar1 = &PTR_FUN_00820de4;
  uVar3 = *(undefined4 *)(param_2 + 8);
  puVar1[0x1a] = 0xffffffff;
  puVar1[0x19] = uVar3;
  puVar1[0x1b] = 0xffffffff;
  puVar1[0x1c] = 0xffffffff;
  puVar1[0x1d] = 0;
  iVar2 = fn_00145b00(0x20,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_00689144();
  }
  puVar1[0x1e] = uVar3;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 1;
  puVar1[0x21] = 0;
  puVar1[0x22] = 0;
  puVar1[0x23] = 1;
  puVar1[0x24] = 0;
  puVar1[0x25] = 0;
  puVar1[0x26] = 0;
  return puVar1;
}



void fn_002e69f8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (0 < *(int *)(*(int *)(param_1 + 0x78) + 0x1c)) {
    fn_006890bc(*(undefined4 *)(param_1 + 0x78));
  }
  if (*(int *)(param_1 + 0x6c) != -1) {
    iVar1 = *(int *)(param_1 + 0x78);
    iVar2 = fn_00178f9c(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x6c));
    iVar2 = *(int *)(iVar2 + 0x10);
    uVar3 = *(undefined4 *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(iVar1 + 4);
    *(undefined4 *)(iVar2 + 0x20) = uVar3;
    *(undefined4 *)(iVar2 + 0x24) = uVar4;
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xef | 0x10;
  }
  if (*(int **)(param_1 + 0x98) == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x002e6a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x98) + 0x14))();
  return;
}



undefined4 fn_002e698c(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x70) != -1) {
    piVar1 = (int *)fn_001854ac(*(undefined4 *)(param_1 + 100));
    (**(code **)(*piVar1 + 0xc))(piVar1);
    (**(code **)(*piVar1 + 0x14))(piVar1);
    if ((float)piVar1[9] != 0.0) {
      return 0;
    }
  }
  return 1;
}



void fn_002e6978(int param_1)

{
  if (*(int *)(param_1 + 0x98) == 0) {
    return;
  }
  fn_0031c0e0();
  return;
}



void fn_002e68e8(int param_1)

{
  if (*(int **)(param_1 + 0x98) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x98) + 0x18))();
    if (*(int **)(param_1 + 0x98) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x98) + 4))();
      *(undefined4 *)(param_1 + 0x98) = 0;
    }
  }
  if (*(int *)(param_1 + 0x70) != -1) {
    fn_00159f34(*(undefined4 *)(param_1 + 100));
    *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x6c) != -1) {
    fn_0016a43c(*(undefined4 *)(param_1 + 100));
    *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x68) != -1) {
                    /* WARNING: Subroutine does not return */
    fn_001482f4(*(undefined4 *)(param_1 + 100));
  }
  return;
}


