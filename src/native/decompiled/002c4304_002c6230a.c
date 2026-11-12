#include "002c4304_002c6230a.h"



void fn_002c573c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xc4,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_002c6180(iVar1,param_1);
  return;
}



void fn_002c56a8(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = fn_006c5138(*(undefined4 *)(param_1 + 0xb0));
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    fn_002c3de4(param_1,param_2);
  }
  return;
}



void fn_002c471c(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_0081f238;
  if ((int *)param_1[0x29] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x29] + 4))();
  }
  if ((int *)param_1[0x28] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x28] + 4))();
  }
  if ((int *)param_1[0x27] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x27] + 4))();
  }
  if ((int *)param_1[0x26] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x26] + 4))();
  }
  if ((int *)param_1[0x25] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x25] + 4))();
  }
  if ((int *)param_1[0x24] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x24] + 4))();
  }
  uVar1 = param_1[0x21];
  uVar2 = uVar1;
  if ((uint)param_1[0x22] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[0x22]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x23] - uVar1) >> 2,0);
  uVar1 = param_1[0x1e];
  uVar2 = uVar1;
  if ((uint)param_1[0x1f] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[0x1f]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x20] - uVar1) >> 2,0);
  if ((int *)param_1[0x1d] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x1d] + 4))();
  }
  fn_0068ad5c(param_1);
  return;
}



void fn_002c4694(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  *puVar1 = &PTR_FUN_0081f238;
  puVar1[0x19] = *(undefined4 *)(param_2 + 8);
  puVar1[0x1a] = 0xffffffff;
  puVar1[0x1c] = 0;
  puVar1[0x1b] = 0xffffffff;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  puVar1[0x22] = 0;
  puVar1[0x23] = 0;
  puVar1[0x24] = 0;
  puVar1[0x25] = 0;
  puVar1[0x26] = 0;
  puVar1[0x27] = 0;
  puVar1[0x28] = 0;
  puVar1[0x29] = 0;
  puVar1[0x2a] = 3;
  puVar1[0x2b] = 0xffffffff;
  return;
}



void fn_002c4304(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (**(code **)(*(int *)param_1[0x27] + 0x90))();
  if (iVar1 < 0) {
    iVar1 = (**(code **)(*(int *)param_1[0x27] + 0xa8))();
    if (iVar1 < 0) {
      iVar1 = (**(code **)(*(int *)param_1[0x27] + 0xb0))();
      if (iVar1 < 0) {
        iVar1 = (**(code **)(*(int *)param_1[0x27] + 0xb8))();
        if (iVar1 < 0) {
          iVar1 = (**(code **)(*(int *)param_1[0x27] + 0xc0))();
          if (-1 < iVar1) {
            (**(code **)(*param_1 + 0x11c))(param_1,iVar1);
          }
        }
        else {
          (**(code **)(*param_1 + 0x118))(param_1,iVar1);
        }
      }
      else {
        (**(code **)(*param_1 + 0x114))(param_1,iVar1);
      }
    }
    else {
      (**(code **)(*param_1 + 0x110))(param_1);
    }
  }
  else {
    (**(code **)(*param_1 + 0x10c))(param_1,iVar1);
  }
  iVar1 = (**(code **)(*(int *)param_1[0x27] + 0x6c))();
  if (-1 < iVar1) {
    if (param_1[0x2b] ==
        (param_1[0x1f] - param_1[0x1e] >> 2) * *(int *)(param_1[0x27] + 0xcc) + iVar1) {
      fn_002b20a4(param_1[0x25],0);
    }
    else {
      fn_0031b3c4(*(undefined4 *)(param_1[0x1e] + iVar1 * 4),1);
    }
  }
  iVar1 = (**(code **)(*(int *)param_1[0x27] + 100))();
  if (-1 < iVar1) {
    (**(code **)(*param_1 + 0x120))(param_1,iVar1);
  }
  iVar1 = (**(code **)(*(int *)param_1[0x27] + 0x34))();
  if ((iVar1 != 0) || (iVar1 = (**(code **)(*(int *)param_1[0x27] + 0x38))(), iVar1 != 0)) {
    (**(code **)(*param_1 + 0x124))(param_1);
    if (param_1[0x24] != 0) {
      if (*(int *)(param_1[0x24] + 0x34) < 2) {
        fn_0068ab44(param_1,0x100094e);
      }
      else {
        fn_0068ab44(param_1,0x100094f);
        *(undefined4 *)(param_1[0x24] + 0x3c) = *(undefined4 *)(param_1[0x27] + 0xcc);
      }
    }
  }
  if ((int *)param_1[0x1d] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x1d] + 0x14))();
  }
  iVar1 = param_1[0x1e];
  uVar2 = 0;
  if (param_1[0x1f] - iVar1 >> 2 != 0) {
    do {
      (**(code **)(**(int **)(iVar1 + uVar2 * 4) + 0x14))();
      iVar1 = param_1[0x1e];
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)(param_1[0x1f] - iVar1 >> 2));
  }
  if ((int *)param_1[0x24] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x24] + 0x14))();
  }
  if ((int *)param_1[0x25] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x25] + 0x14))();
  }
  if ((int *)param_1[0x28] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x28] + 0x14))();
  }
  if ((int *)param_1[0x29] == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x002c45c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)param_1[0x29] + 0x14))();
  return;
}


