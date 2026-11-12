#include "001fa3ac_001fb390a.h"



undefined1 * fn_001faa10(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  
  fn_002d66fc(*(undefined4 *)(param_1 + 0x40));
  fn_00112f6c(auStack_20,*(undefined4 *)(*(int *)(param_1 + 0x3c) + 4));
  uVar6 = *(undefined4 *)(DAT_00897804 + 0xc);
  iVar1 = fn_006b8478(uVar6);
  iVar7 = 0;
  iVar2 = fn_006b8478(auStack_20);
  if (0 < iVar2) {
    do {
      iVar2 = fn_006b85d0(auStack_20,iVar7);
      iVar5 = 0;
      if (0 < iVar1) {
        do {
          iVar3 = fn_006b85d0(uVar6,iVar5);
          if (iVar2 == iVar3) goto LAB_001faac4;
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar1);
      }
      fn_0028a68c(auStack_20,iVar2,1);
LAB_001faac4:
      iVar7 = iVar7 + 1;
      iVar2 = fn_006b8478(auStack_20);
    } while (iVar7 < iVar2);
  }
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      iVar7 = fn_006b85d0(uVar6,iVar2);
      iVar3 = 0;
      iVar5 = fn_006b8478(auStack_20);
      if (0 < iVar5) {
        do {
          iVar5 = fn_006b85d0(auStack_20,iVar3);
          if (iVar7 == iVar5) goto LAB_001fab58;
          iVar3 = iVar3 + 1;
          iVar5 = fn_006b8478(auStack_20);
        } while (iVar3 < iVar5);
      }
      uVar4 = fn_0028aad0(uVar6,iVar7);
      fn_0028a284(auStack_20,uVar4);
LAB_001fab58:
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  fn_001221d4(uVar6,uStack_1c,1);
  return auStack_20;
}



void fn_001faa00(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x38) = param_2;
  *(undefined1 *)(param_1 + 0x34) = 0;
  return;
}



void fn_001fa5a0(int param_1)

{
  if (*(char *)(param_1 + 0x35) == '\0') {
                    /* WARNING: Subroutine does not return */
    fn_0011dda8();
  }
  return;
}



void fn_001fa3ac(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *(char *)(param_1 + 0x35);
  *(undefined1 *)(param_1 + 0x35) = 0;
  fn_0051e26c(*(undefined4 *)(param_1 + 0x50));
  fn_00231e10(*(undefined4 *)(param_1 + 0x4c));
  fn_0030cca8(*(undefined4 *)(param_1 + 0x48));
  fn_002eaabc(*(undefined4 *)(param_1 + 0x44));
  *(undefined4 *)(param_1 + 0x38) = 0;
  iVar2 = fn_00662ae8();
  if (iVar2 != 0) {
    fn_00662bd0();
    fn_00662be4();
    fn_00663ce4();
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    fn_00122320();
    if (*(int **)(param_1 + 0xc) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xc) + 4))();
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
  }
  if (*(int **)(param_1 + 0x2c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 4))();
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (*(int **)(param_1 + 0x28) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x28) + 8))();
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x24) + 4))();
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(int **)(param_1 + 0x20) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x20) + 4))();
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  if (*(int **)(param_1 + 0x1c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x18) + 4))();
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (*(int **)(param_1 + 0x14) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x14) + 4))();
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 4))();
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 8) + 4))();
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 4) + 4))();
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (cVar1 != '\0') {
    fn_0011ddb8();
  }
  fn_002d691c(*(undefined4 *)(param_1 + 0x3c));
                    /* WARNING: Subroutine does not return */
  fn_0011dda8();
}


