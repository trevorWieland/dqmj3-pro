#include "00380d4c_00380ef8.h"



undefined4 * fn_00380ef8(void)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)fn_0043148c();
  puVar2[0x3c] = 0;
  *puVar2 = &PTR_FUN_00829520;
  puVar2[0x3d] = 0;
  puVar2[0x3e] = 0;
  uVar1 = fn_00154ac8(0x3c);
  *(undefined1 *)(puVar2 + 0x3f) = uVar1;
  uVar1 = fn_00154ac8(0x33f);
  *(undefined1 *)((int)puVar2 + 0xfd) = uVar1;
  puVar2[0x40] = &DAT_008f9cf4;
  puVar2[0x41] = &DAT_008f9cf4;
  *(undefined1 *)(puVar2 + 0x42) = 1;
  *(undefined1 *)((int)puVar2 + 0x109) = 1;
  *(undefined1 *)((int)puVar2 + 0x10a) = 0;
  return puVar2;
}



undefined4 fn_00380e70(int param_1,int param_2)

{
  int in_stack_00000004;
  
  if ((*(char *)(param_1 + 0x108) == '\0') || (param_2 != 1 || in_stack_00000004 != 0)) {
    return 0;
  }
  fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x100),1,0,1,1,0,0,1);
  fn_00689bd0(param_1,0x48,0);
  return 1;
}



void fn_00380e50(int param_1)

{
  fn_00430fb0();
                    /* WARNING: Could not recover jumptable at 0x00380e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0xf0) + 0x14))();
  return;
}



void fn_00380e04(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 unaff_r4;
  uint uVar4;
  undefined4 unaff_r5;
  int *piVar5;
  undefined4 unaff_r6;
  
  if (*(int **)(param_1 + 0xf0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xf0) + 0x18))();
    if (*(int **)(param_1 + 0xf0) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xf0) + 4))();
      *(undefined4 *)(param_1 + 0xf0) = 0;
    }
  }
  if (*(int **)(param_1 + 0xd0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xd0) + 0x18))();
    if (*(int **)(param_1 + 0xd0) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xd0) + 4))();
      *(undefined4 *)(param_1 + 0xd0) = 0;
    }
  }
  if (*(int **)(param_1 + 0xd4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xd4) + 0x18))();
    if (*(int **)(param_1 + 0xd4) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xd4) + 4))();
      *(undefined4 *)(param_1 + 0xd4) = 0;
    }
  }
  if (*(int *)(param_1 + 0xd8) != 0) {
    fn_002454a4(param_1);
    if (*(int **)(param_1 + 0xd8) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xd8) + 4))();
      *(undefined4 *)(param_1 + 0xd8) = 0;
    }
  }
  if (*(int **)(param_1 + 0xdc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xdc) + 0x18))();
    if (*(int **)(param_1 + 0xdc) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xdc) + 4))();
      *(undefined4 *)(param_1 + 0xdc) = 0;
    }
  }
  if (*(int *)(param_1 + 0xe0) != 0) {
    fn_002454a4(param_1);
    if (*(int **)(param_1 + 0xe0) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xe0) + 4))();
      *(undefined4 *)(param_1 + 0xe0) = 0;
    }
  }
  if (*(int **)(param_1 + 0x8c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x8c) + 4))();
    *(undefined4 *)(param_1 + 0x8c) = 0;
  }
  if (*(int **)(param_1 + 0x98) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x98) + 0x14))();
    if (*(int **)(param_1 + 0x98) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x98) + 4))();
      *(undefined4 *)(param_1 + 0x98) = 0;
    }
  }
  uVar4 = 0;
  if (*(int *)(param_1 + 0xa4) - *(int *)(param_1 + 0xa0) >> 2 != 0) {
    do {
      uVar2 = *(int *)(param_1 + 0xa4) - *(int *)(param_1 + 0xa0) >> 2;
      if (uVar2 <= uVar4) {
        fn_002ff628(9,&DAT_008c7655,&DAT_008c7655,uVar4,uVar2,unaff_r4,unaff_r5,unaff_r6);
        param_4 = uVar2;
      }
      piVar5 = *(int **)(*(int *)(param_1 + 0xa0) + uVar4 * 4);
      (**(code **)(*piVar5 + 0x24))(piVar5);
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 0x20))(piVar5);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)(*(int *)(param_1 + 0xa4) - *(int *)(param_1 + 0xa0) >> 2));
  }
  uVar4 = *(uint *)(param_1 + 0xa4);
  uVar2 = *(uint *)(param_1 + 0xa0);
  if (uVar2 != uVar4) {
    uVar1 = uVar2;
    if (uVar4 <= uVar2) {
      do {
        uVar1 = uVar1 + 4;
      } while (uVar1 != uVar4);
    }
    *(uint *)(param_1 + 0xa4) = uVar4 - (uVar4 - uVar2 & 0xfffffffc);
  }
  uVar1 = *(uint *)(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0xa0) = 0;
  uVar2 = *(uint *)(param_1 + 0xa4);
  *(undefined4 *)(param_1 + 0xa4) = 0;
  iVar3 = *(int *)(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  uVar4 = uVar1;
  if (uVar2 < uVar1) {
    do {
      uVar4 = uVar4 + 4;
    } while (uVar4 != uVar2);
  }
  fn_001008c4(uVar1,(int)(iVar3 - uVar1) >> 2,0,iVar3,param_4);
  if (*(int **)(param_1 + 0x9c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x9c) + 0x24))();
    if (*(int **)(param_1 + 0x9c) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x9c) + 0x20))();
      *(undefined4 *)(param_1 + 0x9c) = 0;
    }
  }
  if (*(int **)(param_1 + 0xac) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xac) + 0x24))();
    if (*(int **)(param_1 + 0xac) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xac) + 0x20))();
      *(undefined4 *)(param_1 + 0xac) = 0;
    }
  }
  if (*(int **)(param_1 + 0xb0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xb0) + 0x24))();
    if (*(int **)(param_1 + 0xb0) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xb0) + 0x20))();
      *(undefined4 *)(param_1 + 0xb0) = 0;
    }
  }
  if (*(int **)(param_1 + 0xb4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xb4) + 0x24))();
    if (*(int **)(param_1 + 0xb4) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xb4) + 0x20))();
      *(undefined4 *)(param_1 + 0xb4) = 0;
    }
  }
  if (*(int **)(param_1 + 0xb8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xb8) + 0x24))();
    if (*(int **)(param_1 + 0xb8) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xb8) + 0x20))();
      *(undefined4 *)(param_1 + 0xb8) = 0;
    }
  }
  if (*(int **)(param_1 + 0xbc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xbc) + 0x24))();
    if (*(int **)(param_1 + 0xbc) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xbc) + 0x20))();
      *(undefined4 *)(param_1 + 0xbc) = 0;
    }
  }
  if (*(int **)(param_1 + 0x94) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x94) + 0x18))();
    if (*(int **)(param_1 + 0x94) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x94) + 4))();
      *(undefined4 *)(param_1 + 0x94) = 0;
    }
  }
  if (*(int *)(param_1 + 0x88) != -1) {
    fn_0016a43c(*(undefined4 *)(param_1 + 0x80));
    *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x84) != -1) {
                    /* WARNING: Subroutine does not return */
    fn_001482f4(*(undefined4 *)(param_1 + 0x80));
  }
  return;
}



void fn_00380d4c(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 unaff_r4;
  uint uVar4;
  undefined4 unaff_r5;
  int *piVar5;
  undefined4 unaff_r6;
  
  if (*(int **)(param_1 + 0x114) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x114) + 0x18))();
    if (*(int **)(param_1 + 0x114) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x114) + 4))();
      *(undefined4 *)(param_1 + 0x114) = 0;
    }
  }
  if (*(int **)(param_1 + 0x118) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x118) + 0x18))();
    if (*(int **)(param_1 + 0x118) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x118) + 4))();
      *(undefined4 *)(param_1 + 0x118) = 0;
    }
  }
  if (*(int *)(param_1 + 0x11c) != 0) {
    fn_002454a4(param_1);
    if (*(int **)(param_1 + 0x11c) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x11c) + 4))();
      *(undefined4 *)(param_1 + 0x11c) = 0;
    }
  }
  if (*(int **)(param_1 + 0xf0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xf0) + 0x18))();
    if (*(int **)(param_1 + 0xf0) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xf0) + 4))();
      *(undefined4 *)(param_1 + 0xf0) = 0;
    }
  }
  if (*(int **)(param_1 + 0xd0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xd0) + 0x18))();
    if (*(int **)(param_1 + 0xd0) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xd0) + 4))();
      *(undefined4 *)(param_1 + 0xd0) = 0;
    }
  }
  if (*(int **)(param_1 + 0xd4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xd4) + 0x18))();
    if (*(int **)(param_1 + 0xd4) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xd4) + 4))();
      *(undefined4 *)(param_1 + 0xd4) = 0;
    }
  }
  if (*(int *)(param_1 + 0xd8) != 0) {
    fn_002454a4(param_1);
    if (*(int **)(param_1 + 0xd8) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xd8) + 4))();
      *(undefined4 *)(param_1 + 0xd8) = 0;
    }
  }
  if (*(int **)(param_1 + 0xdc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xdc) + 0x18))();
    if (*(int **)(param_1 + 0xdc) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xdc) + 4))();
      *(undefined4 *)(param_1 + 0xdc) = 0;
    }
  }
  if (*(int *)(param_1 + 0xe0) != 0) {
    fn_002454a4(param_1);
    if (*(int **)(param_1 + 0xe0) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xe0) + 4))();
      *(undefined4 *)(param_1 + 0xe0) = 0;
    }
  }
  if (*(int **)(param_1 + 0x8c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x8c) + 4))();
    *(undefined4 *)(param_1 + 0x8c) = 0;
  }
  if (*(int **)(param_1 + 0x98) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x98) + 0x14))();
    if (*(int **)(param_1 + 0x98) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x98) + 4))();
      *(undefined4 *)(param_1 + 0x98) = 0;
    }
  }
  uVar4 = 0;
  if (*(int *)(param_1 + 0xa4) - *(int *)(param_1 + 0xa0) >> 2 != 0) {
    do {
      uVar2 = *(int *)(param_1 + 0xa4) - *(int *)(param_1 + 0xa0) >> 2;
      if (uVar2 <= uVar4) {
        fn_002ff628(9,&DAT_008c7655,&DAT_008c7655,uVar4,uVar2,unaff_r4,unaff_r5,unaff_r6);
        param_4 = uVar2;
      }
      piVar5 = *(int **)(*(int *)(param_1 + 0xa0) + uVar4 * 4);
      (**(code **)(*piVar5 + 0x24))(piVar5);
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 0x20))(piVar5);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)(*(int *)(param_1 + 0xa4) - *(int *)(param_1 + 0xa0) >> 2));
  }
  uVar4 = *(uint *)(param_1 + 0xa4);
  uVar2 = *(uint *)(param_1 + 0xa0);
  if (uVar2 != uVar4) {
    uVar1 = uVar2;
    if (uVar4 <= uVar2) {
      do {
        uVar1 = uVar1 + 4;
      } while (uVar1 != uVar4);
    }
    *(uint *)(param_1 + 0xa4) = uVar4 - (uVar4 - uVar2 & 0xfffffffc);
  }
  uVar1 = *(uint *)(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0xa0) = 0;
  uVar2 = *(uint *)(param_1 + 0xa4);
  *(undefined4 *)(param_1 + 0xa4) = 0;
  iVar3 = *(int *)(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  uVar4 = uVar1;
  if (uVar2 < uVar1) {
    do {
      uVar4 = uVar4 + 4;
    } while (uVar4 != uVar2);
  }
  fn_001008c4(uVar1,(int)(iVar3 - uVar1) >> 2,0,iVar3,param_4);
  if (*(int **)(param_1 + 0x9c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x9c) + 0x24))();
    if (*(int **)(param_1 + 0x9c) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x9c) + 0x20))();
      *(undefined4 *)(param_1 + 0x9c) = 0;
    }
  }
  if (*(int **)(param_1 + 0xac) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xac) + 0x24))();
    if (*(int **)(param_1 + 0xac) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xac) + 0x20))();
      *(undefined4 *)(param_1 + 0xac) = 0;
    }
  }
  if (*(int **)(param_1 + 0xb0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xb0) + 0x24))();
    if (*(int **)(param_1 + 0xb0) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xb0) + 0x20))();
      *(undefined4 *)(param_1 + 0xb0) = 0;
    }
  }
  if (*(int **)(param_1 + 0xb4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xb4) + 0x24))();
    if (*(int **)(param_1 + 0xb4) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xb4) + 0x20))();
      *(undefined4 *)(param_1 + 0xb4) = 0;
    }
  }
  if (*(int **)(param_1 + 0xb8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xb8) + 0x24))();
    if (*(int **)(param_1 + 0xb8) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xb8) + 0x20))();
      *(undefined4 *)(param_1 + 0xb8) = 0;
    }
  }
  if (*(int **)(param_1 + 0xbc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xbc) + 0x24))();
    if (*(int **)(param_1 + 0xbc) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xbc) + 0x20))();
      *(undefined4 *)(param_1 + 0xbc) = 0;
    }
  }
  if (*(int **)(param_1 + 0x94) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x94) + 0x18))();
    if (*(int **)(param_1 + 0x94) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x94) + 4))();
      *(undefined4 *)(param_1 + 0x94) = 0;
    }
  }
  if (*(int *)(param_1 + 0x88) != -1) {
    fn_0016a43c(*(undefined4 *)(param_1 + 0x80));
    *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x84) != -1) {
                    /* WARNING: Subroutine does not return */
    fn_001482f4(*(undefined4 *)(param_1 + 0x80));
  }
  return;
}


