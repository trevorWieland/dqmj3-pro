#include "00364820_00364de4.h"



undefined4 fn_00364de4(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_00145b00(0x3c,&DAT_00812c8c);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = fn_003f2e18();
  }
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != iVar2) {
    if (iVar1 != 0) {
      fn_002feef8(iVar1);
    }
    *(int *)(param_1 + 8) = iVar2;
  }
  iVar1 = fn_00145b00(0x10,&DAT_00812c8c);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = fn_004285cc();
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != iVar2) {
    if (iVar1 != 0) {
      fn_004286f8(iVar1);
      fn_002feef8();
    }
    *(int *)(param_1 + 0xc) = iVar2;
  }
  return 1;
}



void fn_00364d98(int param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    fn_004286f8();
    fn_002feef8();
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if (*(int *)(param_1 + 8) != 0) {
    fn_002feef8(*(int *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}



void fn_00364d7c(int param_1)

{
  if (*(int **)(param_1 + 0x24) == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00364d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x24) + 0x5c))();
  return;
}



void fn_00364cf4(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  iVar2 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
  iVar1 = iVar2 >> 0x1f;
  if (iVar2 / 0x2c + iVar1 != iVar1) {
    do {
      uVar4 = uVar5 * 0xb;
      piVar3 = *(int **)(*(int *)(param_1 + 0x18) + uVar5 * 0x2c + 8);
      if (piVar3 != (int *)0x0) {
        uVar4 = (uint)*(byte *)(piVar3 + 0x16);
      }
      if (piVar3 != (int *)0x0 && uVar4 != 0) {
        (**(code **)(*piVar3 + 0xa8))();
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uint)((*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18)) / 0x2c));
  }
  return;
}



void fn_00364c14(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  bool bVar6;
  
  uVar5 = 0;
  iVar2 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
  iVar1 = iVar2 >> 0x1f;
  if (iVar2 / 0x2c + iVar1 != iVar1) {
    do {
      piVar4 = (int *)(*(int *)(param_1 + 0x18) + uVar5 * 0x2c);
      if (*piVar4 != -1) {
        uVar3 = (uint)*(byte *)((int)piVar4 + 0x17);
        bVar6 = uVar3 == 2;
        if (bVar6) {
          uVar3 = (uint)(char)piVar4[6];
        }
        if (bVar6 && uVar3 == param_2) {
          if (param_3 != 0) {
            fn_00364e7c(param_1,piVar4,0);
          }
          fn_002e0708(*(undefined4 *)(*(int *)(param_1 + 0x18) + uVar5 * 0x2c + 8));
          piVar4 = *(int **)(*(int *)(param_1 + 0x18) + uVar5 * 0x2c + 8);
          (**(code **)(*piVar4 + 0x54))(piVar4,1);
          *(undefined1 *)(*(int *)(param_1 + 0x18) + uVar5 * 0x2c + 0x17) = 4;
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uint)((*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18)) / 0x2c));
  }
  return;
}



void fn_00364a8c(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  iVar2 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
  iVar1 = iVar2 >> 0x1f;
  if (iVar2 / 0x2c + iVar1 != iVar1) {
    do {
      uVar4 = uVar5 * 0xb;
      piVar3 = *(int **)(*(int *)(param_1 + 0x18) + uVar5 * 0x2c + 8);
      if (piVar3 != (int *)0x0) {
        uVar4 = (uint)*(byte *)(piVar3 + 0x16);
      }
      if (piVar3 != (int *)0x0 && uVar4 != 0) {
        (**(code **)(*piVar3 + 0xb4))(piVar3,param_2);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uint)((*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18)) / 0x2c));
  }
  return;
}



undefined4 fn_003649e4(int *param_1)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = fn_006f7a20(DAT_008977e0);
  if (iVar2 == 0) {
    uVar1 = fn_00211f10(*(undefined4 *)(DAT_008977e0 + 0x1c),*(undefined4 *)(DAT_008977e0 + 0xa8));
    *(undefined1 *)(param_1 + 0x11) = uVar1;
    if ((param_1[1] & 4U) == 0 && (param_1[1] & 1U) == 0) {
      uVar3 = 0;
      do {
        fn_002a4d40(*(undefined4 *)(DAT_008977e0 + 0x2c),(&DAT_007be49c)[uVar3]);
        uVar3 = uVar3 + 1;
      } while (uVar3 < 0x15);
      param_1[1] = param_1[1] | 1;
    }
    (**(code **)(*param_1 + 0x48))(param_1);
    if ((int *)param_1[9] != (int *)0x0) {
      (**(code **)(*(int *)param_1[9] + 100))();
    }
  }
  return 1;
}



int fn_00364950(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = 0;
  iVar1 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
  uVar4 = 0;
  iVar2 = iVar1 >> 0x1f;
  if (iVar1 / 0x2c + iVar2 != iVar2) {
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x18) + uVar4 * 0x2c + 8);
      if ((iVar2 != 0) && (iVar3 = fn_006bb4d8(iVar2,param_2), iVar3 != 0)) {
        return iVar3;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)((*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18)) / 0x2c));
  }
  return iVar3;
}



undefined * fn_003648c0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = fn_006f7358(DAT_008977e0);
  if (iVar1 == 0) {
    fn_006f7a84(DAT_008977e0);
    iVar1 = fn_006aba74();
    if (iVar1 != 0) {
      fn_006f7a84(DAT_008977e0);
      iVar1 = fn_00259878();
      if (iVar1 == 3 || iVar1 == 4) {
        if (param_2 == 4) {
          puVar2 = &DAT_007be4fc;
        }
        else {
          puVar2 = &DAT_007be4f0;
        }
        return puVar2;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00364930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar2 = (undefined *)
           (**(code **)(**(int **)(param_1 + 0x24) + 0x24))
                     (*(int **)(param_1 + 0x24),param_2,param_3,param_4);
  return puVar2;
}



void fn_00364820(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = fn_006f7a20(DAT_008977e0);
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0x44))(param_1);
    fn_00366790(param_1);
    fn_00366790(param_1);
    if ((*(byte *)(param_1 + 1) & 1) != 0) {
      uVar2 = 0;
      do {
        fn_0023d3f4(*(undefined4 *)(DAT_008977e0 + 0x2c),(&DAT_007be49c)[uVar2]);
        uVar2 = uVar2 + 1;
      } while (uVar2 < 0x15);
      param_1[1] = param_1[1] & 0xfffffffe;
    }
    if ((int *)param_1[9] != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003648b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(int *)param_1[9] + 0x68))();
      return;
    }
  }
  return;
}


