#include "00551a90_00551a90.h"



int * fn_00551a90(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_a8 [136];
  undefined1 auStack_20 [4];
  int local_1c;
  
  fn_0017d96c(auStack_a8,0x88,0x87,(char *)&DAT_007d8878,*(undefined4 *)(param_1 + 0x20),param_2);
  uVar1 = (**(code **)(**(int **)(param_1 + 0x24) + 0xc))
                    (*(int **)(param_1 + 0x24),0x616e696d,auStack_a8,0);
  fn_0017dcb0(auStack_20,uVar1);
  if (local_1c == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    iVar2 = (**(code **)(*DAT_0089a918 + 8))(DAT_0089a918,0x24,4);
    if (iVar2 == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)fn_0018a644();
      if (piVar3 == (int *)0x0) {
        return (int *)0x0;
      }
      fn_0017d948(param_1 + 4,param_1 + 8,piVar3 + 1);
    }
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x20))(piVar3,local_1c,*(undefined4 *)(param_1 + 0x24));
    }
  }
  return piVar3;
}


