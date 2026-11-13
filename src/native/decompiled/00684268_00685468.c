#include "00684268_00685468.h"



undefined4 * fn_00685468(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_00850e48;
  uVar1 = param_1[0x17];
  uVar2 = uVar1;
  if ((uint)param_1[0x18] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[0x18]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x19] - uVar1) >> 2,0);
  if ((int *)param_1[0x16] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x16] + 4))();
  }
  if ((int *)param_1[0x15] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x15] + 4))();
  }
  if ((int *)param_1[0x14] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x14] + 4))();
  }
  if ((int *)param_1[0x13] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x13] + 4))();
  }
  if (param_1[0x12] != 0) {
    fn_0033e8d4();
    fn_002feef8();
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x11] + 4))();
  }
  if ((int *)param_1[0x10] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x10] + 4))();
  }
  if ((int *)param_1[0xf] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xf] + 4))();
  }
  if (param_1[0xe] != 0) {
    fn_002feef8(param_1[0xe]);
  }
  if ((int *)param_1[0xd] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xd] + 4))();
  }
  if ((int *)param_1[0xc] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xc] + 4))();
  }
  if ((int *)param_1[0xb] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xb] + 4))();
  }
  return param_1;
}



undefined4 * fn_00685390(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  
  puVar1 = (undefined4 *)fn_0069c2c8();
  *puVar1 = &PTR_FUN_00850e48;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(undefined1 *)(puVar1 + 0x1a) = 0;
  puVar1[0x1b] = 0xffffffff;
  puVar1[0x1c] = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1[2] = 0xffffffff;
  puVar1[3] = 0xffffffff;
  puVar1[4] = 0xffffffff;
  puVar1[5] = 0xffffffff;
  puVar1[6] = 0xffffffff;
  puVar1[7] = 0xffffffff;
  puVar1[8] = 0xffffffff;
  puVar1[9] = 0xffffffff;
  puVar1[10] = 0xffffffff;
  piVar2 = (int *)fn_001b55a4();
  piVar3 = (int *)puVar1[0x14];
  if (piVar3 != piVar2) {
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))();
    }
    puVar1[0x14] = piVar2;
  }
  return puVar1;
}



void fn_00685320(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    return;
  }
  if (param_2 == 0) {
    uVar1 = fn_0017fde4();
    fn_00162d54(*(undefined4 *)(*(int *)(DAT_008977e0 + 8) + 0x24),uVar1);
  }
  else {
    uVar1 = fn_0017fde4();
    fn_001969a4(*(undefined4 *)(*(int *)(DAT_008977e0 + 8) + 0x24),uVar1);
  }
  fn_00162d44(*(undefined4 *)(*(int *)(DAT_008977e0 + 8) + 0x24));
  return;
}



undefined4 fn_00685304(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x50) + 0x54))();
  return 1;
}



void fn_00684394(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  if (*(int *)(param_1 + 0x48) != 0) {
    fn_0033e6c8();
    if (*(int *)(param_1 + 0x48) != 0) {
      fn_0033e8d4();
      fn_002feef8();
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
  }
  iVar1 = fn_006f72c8(DAT_008977e0);
  if (iVar1 != 0) {
    fn_006f72c8(DAT_008977e0);
    fn_00225ebc();
  }
  fn_006f7a84(DAT_008977e0);
  fn_001e9b24();
  uVar5 = 0;
  if (*(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x5c) >> 2 != 0) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x5c) + uVar5 * 4);
      if (iVar1 != 0) {
        fn_002feef8(iVar1);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uint)(*(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x5c) >> 2));
  }
  uVar5 = *(uint *)(param_1 + 0x5c);
  uVar4 = *(uint *)(param_1 + 0x60);
  if (uVar5 != uVar4) {
    uVar2 = uVar5;
    if (uVar4 <= uVar5) {
      do {
        uVar2 = uVar2 + 4;
      } while (uVar2 != uVar4);
    }
    *(uint *)(param_1 + 0x60) = uVar4 - (uVar4 - uVar5 & 0xfffffffc);
  }
  if (*(int *)(param_1 + 0x54) != 0) {
    fn_00258f10();
    if (*(int **)(param_1 + 0x54) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x54) + 4))();
      *(undefined4 *)(param_1 + 0x54) = 0;
    }
  }
  if (*(int **)(param_1 + 0x40) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x40) + 4))();
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  }
  if (*(int **)(param_1 + 0x30) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x30) + 4))();
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (*(int **)(param_1 + 0x3c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x3c) + 4))();
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    fn_002feef8(*(int *)(param_1 + 0x38));
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  if (*(int **)(param_1 + 0x34) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x34) + 4))();
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    uVar3 = fn_0017fde4();
    iVar1 = fn_006ebf84(*(undefined4 *)(*(int *)(DAT_008977e0 + 8) + 0x24),uVar3);
    if (iVar1 != 0) {
      uVar3 = fn_0017fde4(*(undefined4 *)(param_1 + 0x2c));
      fn_00162d54(*(undefined4 *)(*(int *)(DAT_008977e0 + 8) + 0x24),uVar3);
      fn_00162d44(*(undefined4 *)(*(int *)(DAT_008977e0 + 8) + 0x24));
    }
    if (*(int **)(param_1 + 0x2c) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x2c) + 4))();
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
  }
  if (*(int **)(param_1 + 0x4c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x4c) + 4))();
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  (**(code **)(**(int **)(param_1 + 0x50) + 0xc))();
  fn_006f7a9c(DAT_008977e0);
  fn_00278aac();
  uVar5 = 9;
  do {
    iVar1 = param_1 + (uVar5 & 0xff) * 4;
    if (*(int *)(iVar1 + 4) != -1) {
      uVar3 = fn_006f7a9c(DAT_008977e0);
      fn_00279ae4(uVar3,*(undefined4 *)(iVar1 + 4));
      *(undefined4 *)(iVar1 + 4) = 0xffffffff;
    }
    uVar5 = uVar5 - 1;
  } while (-1 < (int)uVar5);
  return;
}



void fn_0068427c(int param_1)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  if (*(int **)(param_1 + 0x2c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x10))();
  }
  if (*(int *)(param_1 + 0x54) != 0) {
    fn_0025868c();
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    fn_0033e798();
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    iVar1 = fn_006f7a5c(DAT_008977e0);
    iVar1 = fn_00176d68(*(undefined4 *)(iVar1 + 4));
    local_18 = *(undefined4 *)(iVar1 + 0x58);
    local_14 = *(undefined4 *)(iVar1 + 0x68);
    local_10 = *(undefined4 *)(iVar1 + 0x78);
    fn_0026f7c8(*(undefined4 *)(param_1 + 0x44),&local_18);
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    fn_00258120();
  }
  if (*(int **)(param_1 + 0x30) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x30) + 0xc))();
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    (**(code **)(**(int **)(*(int *)(param_1 + 0x30) + 0x24) + 0x24))();
    fn_006882e4(*(undefined4 *)(param_1 + 0x34));
  }
  if (*(int **)(param_1 + 0x4c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x4c) + 0xc))();
  }
  if (*(int **)(param_1 + 0x58) == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00684384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x58) + 0x18))();
  return;
}



void fn_00684268(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x34) == 0) {
    return;
  }
  if (*(int *)(*(int *)(param_1 + 0x34) + 4) == 0) {
    return;
  }
  if (param_2 == 0) {
    fn_001747e8();
    return;
  }
  fn_001747e8();
  return;
}


