#include "0045f0f8_0045f5e4b.h"



int fn_0045f5e4(int param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  piVar3 = (int *)(param_1 + 4);
  piVar4 = *(int **)(param_1 + 0x14);
  if (piVar4 != (int *)0x0) {
    piVar5 = (int *)*piVar4;
    while (piVar5 != piVar4) {
      piVar6 = *(int **)(param_1 + 0x14);
      if (piVar5 != *(int **)(param_1 + 0x14)) {
        piVar6 = (int *)*piVar5;
        *(int **)piVar5[1] = piVar6;
        *(int *)(*piVar5 + 4) = piVar5[1];
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
        (**(code **)piVar5[2])(piVar5 + 2);
        *piVar5 = *(int *)(param_1 + 8);
        *(int **)(param_1 + 8) = piVar5;
      }
      piVar5 = piVar6;
    }
    puVar1 = *(undefined4 **)(param_1 + 0x14);
    *puVar1 = *(undefined4 *)(param_1 + 8);
    *(undefined4 **)(param_1 + 8) = puVar1;
    piVar4 = (int *)*piVar3;
    while (piVar4 != (int *)0x0) {
      *piVar3 = *piVar4;
      if (piVar4[2] != 0) {
        pcVar2 = *(code **)(piVar4[2] + -8);
        if (pcVar2 == (code *)0x0) {
          fn_0030233c();
        }
        else {
          (*pcVar2)();
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
      piVar4 = (int *)*piVar3;
    }
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return param_1;
}



int fn_0045f4ec(int param_1,undefined4 param_2)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  int *piVar6;
  undefined1 auStack_28 [4];
  undefined *local_24;
  undefined1 auStack_20 [4];
  undefined *local_1c;
  
  piVar6 = (int *)**(int **)(param_1 + 0x14);
  do {
    if (piVar6 == (int *)*(int *)(param_1 + 0x14)) {
      return 0;
    }
    fn_006d0734(auStack_28,piVar6 + 3);
    fn_006d0734(auStack_20,param_2);
    if (local_24 == local_1c) {
LAB_0045f57c:
      iVar3 = fn_006d0810(piVar6 + 3,L"RVCID",0);
      iVar4 = fn_006d0810(param_2,L"RVCID",0);
      if (iVar3 != iVar4) goto LAB_0045f5ac;
      bVar2 = true;
    }
    else {
      if (local_24 == (undefined *)0x0) {
        puVar5 = local_1c;
        puVar1 = &DAT_007db524;
LAB_0045f570:
        iVar3 = fn_004b626c(puVar1,puVar5);
        if (iVar3 != 0) goto LAB_0045f57c;
      }
      else {
        if (local_1c == (undefined *)0x0) {
          puVar5 = &DAT_007db524;
          puVar1 = local_24;
          goto LAB_0045f570;
        }
        iVar3 = fn_00101d80();
        if (iVar3 == 0) goto LAB_0045f57c;
      }
LAB_0045f5ac:
      bVar2 = false;
    }
    fn_00170f54(auStack_20);
    fn_00170f54(auStack_28);
    if (bVar2) {
      return (int)(piVar6 + 2);
    }
    piVar6 = (int *)*piVar6;
  } while( true );
}



int fn_0045f42c(int param_1)

{
  int iVar1;
  
  fn_0045f188(param_1,0x20);
  if ((*(char *)(param_1 + 0x210) != '\0') && (*(char *)(param_1 + 0x211) != '\0')) {
    fn_0010313a(*(undefined4 *)(param_1 + 0xc),&DAT_007dbc50);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 4;
  }
  iVar1 = fn_00101a50(*(undefined4 *)(param_1 + 0xc),0x20);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + iVar1 * 2;
  return param_1;
}



int fn_0045f3dc(int param_1,wchar16 *param_2)

{
  int iVar1;
  
  while (param_2 == (wchar16 *)0x0) {
    param_2 = L"(null)";
  }
  iVar1 = fn_00100b58(param_2);
  fn_0045f188(param_1,iVar1 + 1);
  fn_001003e0(*(undefined4 *)(param_1 + 0xc),param_2);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + iVar1 * 2;
  return param_1;
}



int fn_0045f3b0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  wchar16 *pwVar2;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 in_lr;
  
  if (*(char *)(param_2 + 0x65) == '\0') {
    fn_00455590(param_2);
  }
  pwVar2 = *(wchar16 **)(param_2 + 0x60);
  while (pwVar2 == (wchar16 *)0x0) {
    pwVar2 = L"(null)";
  }
  iVar1 = fn_00100b58(pwVar2);
  fn_0045f188(param_1,iVar1 + 1,param_3,param_4,unaff_r4,unaff_r5,unaff_r6,in_lr);
  fn_001003e0(*(undefined4 *)(param_1 + 0xc),pwVar2);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + iVar1 * 2;
  return param_1;
}



int fn_0045f338(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  fn_0045f188(param_1,0x20);
  if (*(char *)(param_1 + 0x211) != '\0') {
    fn_0010313a(*(undefined4 *)(param_1 + 0xc),&DAT_007dbc50);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 4;
  }
  iVar1 = fn_00101a50(*(undefined4 *)(param_1 + 0xc),0x20,L"%llx",param_4,param_2,0);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + iVar1 * 2;
  return param_1;
}


