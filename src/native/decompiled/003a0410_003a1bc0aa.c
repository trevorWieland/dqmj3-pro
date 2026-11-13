#include "003a0410_003a1bc0aa.h"



void fn_003a069c(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x18);
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar1 == &DAT_00897040) goto LAB_003a06e0;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_003a06e0:
  if (*(char *)(puVar2 + 7) != '\0') {
    fn_003a0410(param_1);
    fn_003a04c4(param_1);
    *(undefined1 *)(puVar2 + 7) = 0;
  }
  return;
}



void fn_003a066c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x78,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003a0710(iVar1,param_1);
  return;
}



void fn_003a0410(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 8))(param_1);
  uVar2 = *(undefined4 *)(iVar1 + 8);
  if (param_1[0x1a] != -1) {
    fn_0016a43c(uVar2);
    param_1[0x1a] = -1;
  }
  if (param_1[0x19] != -1) {
                    /* WARNING: Subroutine does not return */
    fn_001482f4(uVar2);
  }
  if ((int *)param_1[0x1d] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x1d] + 8))();
  }
  param_1[0x1d] = 0;
  if (param_1[0x1c] != 0) {
    iVar1 = fn_0054a620(param_1[0x1c] + 8);
    fn_002feef8(iVar1 + -8);
  }
  param_1[0x1c] = 0;
  if ((int *)param_1[0x1b] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x1b] + 8))();
  }
  param_1[0x1b] = 0;
  return;
}


