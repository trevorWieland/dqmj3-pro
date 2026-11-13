#include "00472f44_004738f0.h"



void fn_004738f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 local_18;
  
  iVar4 = 0;
  if (*(int *)(param_1 + 0xa8) == 0) {
    local_18 = param_4;
    iVar1 = fn_001249d0();
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(iVar1 + 0xc);
    }
    piVar2 = (int *)(iVar1 + 0x50);
    (**(code **)(*piVar2 + 8))();
    if (*(int *)(param_1 + 0xa8) == 0) {
      iVar1 = fn_0015ecdc(0x14);
      puVar3 = (undefined4 *)0x0;
      if (iVar1 != 0) {
        puVar3 = (undefined4 *)fn_004bbf80(iVar1,0);
        *puVar3 = &DAT_00854db0;
        puVar3[4] = param_1;
      }
      *(undefined4 **)(param_1 + 0xa8) = puVar3;
    }
    (**(code **)(*piVar2 + 0xc))(piVar2);
  }
  local_18 = *(undefined4 *)(param_1 + 0xa8);
  fn_0045616c(param_2,fn_00615d94,&local_18,0);
  iVar1 = fn_001249d0();
  if (iVar1 != 0) {
    iVar4 = *(int *)(iVar1 + 0xc);
  }
  (**(code **)(*(int *)(iVar4 + 0x50) + 8))();
  (**(code **)(*(int *)(iVar4 + 0x50) + 0xc))((int *)(iVar4 + 0x50));
  return;
}



void fn_0047380c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 local_18;
  
  iVar4 = 0;
  if (*(int *)(param_1 + 0xa4) == 0) {
    local_18 = param_4;
    iVar1 = fn_001249d0();
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(iVar1 + 0xc);
    }
    piVar2 = (int *)(iVar1 + 0x50);
    (**(code **)(*piVar2 + 8))();
    if (*(int *)(param_1 + 0xa4) == 0) {
      iVar1 = fn_0015ecdc(0x14);
      puVar3 = (undefined4 *)0x0;
      if (iVar1 != 0) {
        puVar3 = (undefined4 *)fn_004bbf80(iVar1,0);
        *puVar3 = &DAT_00854bbc;
        puVar3[4] = param_1;
      }
      *(undefined4 **)(param_1 + 0xa4) = puVar3;
    }
    (**(code **)(*piVar2 + 0xc))(piVar2);
  }
  local_18 = *(undefined4 *)(param_1 + 0xa4);
  fn_0045616c(param_2,fn_00615d94,&local_18,0);
  iVar1 = fn_001249d0();
  if (iVar1 != 0) {
    iVar4 = *(int *)(iVar1 + 0xc);
  }
  (**(code **)(*(int *)(iVar4 + 0x50) + 8))();
  (**(code **)(*(int *)(iVar4 + 0x50) + 0xc))((int *)(iVar4 + 0x50));
  return;
}



void fn_0047358c(int param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 extraout_r1;
  uint uVar2;
  
  uVar2 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x10);
  iVar1 = *(int *)(param_1 + 0x10) + *(int *)(param_1 + 4);
  if (param_3 < uVar2) {
    fn_00301a9c(iVar1,param_2,param_3);
    *(uint *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_3;
    *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + param_3;
  }
  else {
    fn_00301a9c(iVar1,param_2,uVar2);
    *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + uVar2;
    fn_00169f1c(*(int *)(param_1 + 0x10) + uVar2,*(undefined4 *)(param_1 + 0x1c));
    iVar1 = param_3 - uVar2;
    *(undefined4 *)(param_1 + 0x10) = extraout_r1;
    if (iVar1 != 0) {
      fn_00301a9c(*(undefined4 *)(param_1 + 4),param_2 + uVar2,iVar1);
      *(int *)(param_1 + 0x10) = iVar1;
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + iVar1;
      return;
    }
  }
  return;
}



int fn_00473520(int param_1,int param_2)

{
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined2 *)(param_1 + 0x14) = *(undefined2 *)(param_2 + 0x14);
  *(undefined2 *)(param_1 + 0x16) = *(undefined2 *)(param_2 + 0x16);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  fn_00170fa4(param_1 + 0x28,param_2 + 0x28);
  return param_1;
}



void fn_004732fc(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int local_20;
  
  *(undefined1 *)(param_2 + 4) = 0;
  cVar1 = *(char *)(param_1 + 0x3b);
  local_20 = 0;
  if (cVar1 == '\0') {
    iVar2 = *(int *)(param_1 + 8);
    if (*(int *)(iVar2 + 0x10) == *(int *)(param_1 + 0xc)) {
      *(undefined1 *)(param_1 + 4) = 1;
      *(undefined1 *)(param_2 + 4) = 0;
    }
    else {
      *(undefined1 *)(param_2 + 4) =
           *(undefined1 *)(*(int *)(iVar2 + 0x18) + *(int *)(iVar2 + 0xc) + *(int *)(param_1 + 0xc))
      ;
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    }
    if (*(char *)(param_1 + 4) != '\0') {
      return;
    }
    fn_0074a528(param_1,&local_20);
    if (*(char *)(param_1 + 4) != '\0') {
      return;
    }
  }
  iVar2 = *(int *)(param_1 + 0xc);
  if ((((*(char *)(param_1 + 4) == '\0') &&
       (fn_0074a528(param_1,param_2 + 8), *(char *)(param_1 + 4) == '\0')) &&
      (fn_0074a528(param_1,param_2 + 0xc), *(char *)(param_1 + 4) == '\0')) &&
     (fn_0074a528(param_1,param_2 + 0x10), *(char *)(param_1 + 4) == '\0')) {
    iVar3 = *(int *)(param_1 + 8);
    if ((uint)(*(int *)(iVar3 + 0x10) - *(int *)(param_1 + 0xc)) < 2) {
      *(undefined1 *)(param_1 + 4) = 1;
      *(undefined2 *)(param_2 + 0x14) = 0;
    }
    else {
      *(undefined2 *)(param_2 + 0x14) =
           *(undefined2 *)(*(int *)(iVar3 + 0x18) + *(int *)(iVar3 + 0xc) + *(int *)(param_1 + 0xc))
      ;
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 2;
    }
    if (*(char *)(param_1 + 4) == '\0') {
      iVar3 = *(int *)(param_1 + 8);
      if ((uint)(*(int *)(iVar3 + 0x10) - *(int *)(param_1 + 0xc)) < 2) {
        *(undefined1 *)(param_1 + 4) = 1;
        *(undefined2 *)(param_2 + 0x16) = 0;
      }
      else {
        *(undefined2 *)(param_2 + 0x16) =
             *(undefined2 *)
              (*(int *)(iVar3 + 0x18) + *(int *)(iVar3 + 0xc) + *(int *)(param_1 + 0xc));
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 2;
      }
      if ((((*(char *)(param_1 + 4) == '\0') &&
           (fn_0074a528(param_1,param_2 + 0x18), *(char *)(param_1 + 4) == '\0')) &&
          ((fn_0074a528(param_1,param_2 + 0x1c), *(char *)(param_1 + 4) == '\0' &&
           ((fn_0074a528(param_1,param_2 + 0x20), *(char *)(param_1 + 4) == '\0' &&
            (fn_0074a528(param_1,param_2 + 0x24), *(char *)(param_1 + 4) == '\0')))))) &&
         (fn_0045f7f0(param_1,param_2 + 0x28), *(char *)(param_1 + 4) == '\0' && cVar1 == '\0')) {
        uVar4 = local_20 + iVar2;
        if ((uVar4 < *(uint *)(param_1 + 0xc)) || (*(uint *)(*(int *)(param_1 + 8) + 0x10) < uVar4))
        {
          *(undefined1 *)(param_1 + 4) = 1;
        }
        else {
          *(uint *)(param_1 + 0xc) = uVar4;
        }
      }
    }
  }
  return;
}



void fn_00473198(int param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int local_28;
  undefined1 local_24 [4];
  undefined4 local_20 [2];
  
  cVar1 = *(char *)(param_1 + 0x3b);
  iVar4 = 0;
  if (cVar1 == '\0') {
    local_24[0] = 0;
    piVar2 = (int *)local_24;
    if (*(char *)(param_2 + 4) == '\0') {
      piVar2 = &local_28;
    }
    local_28 = CONCAT31(((unsigned int)(local_28) >> 8) & 0xffffff,*(char *)(param_2 + 4));
    fn_0015ef4c(param_1,piVar2,1);
    iVar4 = *(int *)(*(int *)(param_1 + 8) + 0x10);
    local_20[0] = 0;
    fn_0015ef4c(param_1,local_20,4);
  }
  fn_0015ef4c(param_1,param_2 + 8,4);
  fn_0015ef4c(param_1,param_2 + 0xc,4);
  fn_0015ef4c(param_1,param_2 + 0x10,4);
  fn_0015ef4c(param_1,param_2 + 0x14,2);
  fn_0015ef4c(param_1,param_2 + 0x16,2);
  fn_0015ef4c(param_1,param_2 + 0x18,4);
  fn_0015ef4c(param_1,param_2 + 0x1c,4);
  fn_0015ef4c(param_1,param_2 + 0x20,4);
  fn_0015ef4c(param_1,param_2 + 0x24,4);
  fn_0045f6f0(param_1,param_2 + 0x28);
  if (cVar1 == '\0') {
    iVar3 = *(int *)(*(int *)(param_1 + 8) + 0x10);
    fn_00454cbc(param_1,iVar4);
    local_28 = (iVar3 - iVar4) + -4;
    fn_0015ef4c(param_1,&local_28,4);
    fn_00454cbc(param_1,iVar3);
  }
  return;
}



int fn_00472f44(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  int iVar6;
  int *piVar7;
  int local_20;
  int local_1c;
  undefined1 auStack_18 [4];
  
  piVar7 = (int *)(param_1 + 0x20);
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 8);
    if (*(int *)(param_1 + 0x34) == 0) {
      while (iVar2 != iVar1) {
        iVar3 = *(int *)(iVar2 + 0xc);
        if (*(int *)(iVar2 + 0xc) == 0) {
          iVar3 = *(int *)(iVar2 + 4);
          iVar6 = iVar2;
          if (iVar2 == *(int *)(iVar3 + 0xc)) {
            do {
              iVar6 = iVar3;
              iVar3 = *(int *)(iVar6 + 4);
            } while (iVar6 == *(int *)(iVar3 + 0xc));
          }
          if (*(int *)(iVar6 + 0xc) != iVar3) {
            iVar6 = iVar3;
          }
        }
        else {
          do {
            iVar6 = iVar3;
            iVar3 = *(int *)(iVar6 + 8);
          } while (*(int *)(iVar6 + 8) != 0);
        }
        local_20 = iVar2;
        fn_00769544(&local_1c,piVar7,&local_20);
        iVar2 = iVar6;
      }
    }
    else {
      iVar1 = *(int *)(iVar1 + 4);
      while (iVar1 != 0) {
        fn_00769ba0(piVar7,*(undefined4 *)(iVar1 + 0xc));
        iVar2 = *(int *)(iVar1 + 8);
        *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_1 + 0x24);
        *(int *)(param_1 + 0x24) = iVar1;
        iVar1 = iVar2;
      }
      *(int *)(*(int *)(param_1 + 0x30) + 8) = *(int *)(param_1 + 0x30);
      *(undefined4 *)(*(int *)(param_1 + 0x30) + 4) = 0;
      *(int *)(*(int *)(param_1 + 0x30) + 0xc) = *(int *)(param_1 + 0x30);
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
    iVar1 = *(int *)(param_1 + 0x30);
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_1 + 0x24);
    *(int *)(param_1 + 0x24) = iVar1;
    piVar4 = (int *)*piVar7;
    while (piVar4 != (int *)0x0) {
      *piVar7 = *piVar4;
      if (piVar4[2] != 0) {
        pcVar5 = *(code **)(piVar4[2] + -8);
        if (pcVar5 == (code *)0x0) {
          fn_0030233c();
        }
        else {
          (*pcVar5)();
        }
      }
      if (piVar4 != (int *)0x0) {
        if ((code *)piVar4[-2] == (code *)0x0) {
          fn_0030233c(piVar4 + -2);
        }
        else {
          (*(code *)piVar4[-2])();
        }
      }
      piVar4 = (int *)*piVar7;
    }
  }
  local_1c = *(int *)(param_1 + 0x14);
  piVar7 = (int *)(param_1 + 4);
  if (local_1c != 0) {
    local_20 = *(int *)(local_1c + 8);
    fn_0076ea8c(auStack_18,piVar7,&local_20,&local_1c);
    iVar1 = *(int *)(param_1 + 0x14);
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_1 + 8);
    *(int *)(param_1 + 8) = iVar1;
    piVar4 = (int *)*piVar7;
    while (piVar4 != (int *)0x0) {
      *piVar7 = *piVar4;
      if (piVar4[2] != 0) {
        pcVar5 = *(code **)(piVar4[2] + -8);
        if (pcVar5 == (code *)0x0) {
          fn_0030233c();
        }
        else {
          (*pcVar5)();
        }
      }
      if (piVar4 != (int *)0x0) {
        if ((code *)piVar4[-2] == (code *)0x0) {
          fn_0030233c(piVar4 + -2);
        }
        else {
          (*(code *)piVar4[-2])();
        }
      }
      piVar4 = (int *)*piVar7;
    }
  }
  return param_1;
}


