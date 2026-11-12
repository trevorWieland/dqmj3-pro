#include "004b569c_004b5ebcbba.h"



undefined4 * fn_004b5c8c(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int *piVar5;
  undefined4 local_20;
  int local_1c;
  undefined1 auStack_18 [8];
  
  *param_1 = &DAT_00855a48;
  if (*(char *)((int)param_1 + 5) != '\0') {
    iVar1 = *(int *)(param_1[3] + 0xa8);
    if (iVar1 != 0) {
      iVar1 = fn_0049599c(iVar1 + 0x94,*(undefined1 *)(param_1[3] + 4),1);
      *(bool *)((int)param_1 + 5) = iVar1 == 0;
    }
  }
  iVar1 = param_1[2];
  if (iVar1 != 0) {
    piVar5 = (int *)(iVar1 + 0x20);
    iVar2 = *(int *)(iVar1 + 0x30);
    if (iVar2 != 0) {
      local_20 = *(undefined4 *)(iVar2 + 8);
      local_1c = iVar2;
      fn_00766828(auStack_18,piVar5,&local_20,&local_1c);
      iVar2 = *(int *)(iVar1 + 0x30);
      *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + 0x24);
      *(int *)(iVar1 + 0x24) = iVar2;
      piVar3 = (int *)*piVar5;
      while (piVar3 != (int *)0x0) {
        *piVar5 = *piVar3;
        if (piVar3[2] != 0) {
          pcVar4 = *(code **)(piVar3[2] + -8);
          if (pcVar4 == (code *)0x0) {
            fn_0030233c();
          }
          else {
            (*pcVar4)();
          }
        }
        if (piVar3 != (int *)0x0) {
          if ((code *)piVar3[-2] == (code *)0x0) {
            fn_0030233c(piVar3 + -2);
          }
          else {
            (*(code *)piVar3[-2])();
          }
        }
        piVar3 = (int *)*piVar5;
      }
    }
    piVar5 = (int *)(iVar1 + 4);
    iVar2 = *(int *)(iVar1 + 0x14);
    if (iVar2 != 0) {
      local_20 = *(undefined4 *)(iVar2 + 8);
      local_1c = iVar2;
      fn_0077d8fc(auStack_18,piVar5,&local_20,&local_1c);
      iVar2 = *(int *)(iVar1 + 0x14);
      *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + 8);
      *(int *)(iVar1 + 8) = iVar2;
      piVar3 = (int *)*piVar5;
      while (piVar3 != (int *)0x0) {
        *piVar5 = *piVar3;
        if (piVar3[2] != 0) {
          pcVar4 = *(code **)(piVar3[2] + -8);
          if (pcVar4 == (code *)0x0) {
            fn_0030233c();
          }
          else {
            (*pcVar4)();
          }
        }
        if (piVar3 != (int *)0x0) {
          if ((code *)piVar3[-2] == (code *)0x0) {
            fn_0030233c(piVar3 + -2);
          }
          else {
            (*(code *)piVar3[-2])();
          }
        }
        piVar3 = (int *)*piVar5;
      }
    }
    if (iVar1 != 0) {
      if (*(code **)(iVar1 + -8) == (code *)0x0) {
        fn_0030233c();
      }
      else {
        (**(code **)(iVar1 + -8))();
      }
    }
  }
  if ((int *)param_1[3] != (int *)0x0) {
    (**(code **)(*(int *)param_1[3] + 4))();
  }
  return param_1;
}


