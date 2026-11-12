#include "00683780_006840f4.h"



void fn_006840f4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  uVar1 = fn_006f7a9c(DAT_008977e0);
  iVar2 = fn_006f7358(DAT_008977e0);
  bVar5 = iVar2 == 0;
  if (bVar5) {
    iVar2 = *(int *)(param_1 + 4);
  }
  if (bVar5 && iVar2 == -1) {
    uVar3 = fn_006f7a9c(DAT_008977e0);
    uVar3 = fn_002798b8(uVar3,param_2,0);
    *(undefined4 *)(param_1 + 4) = uVar3;
  }
  iVar2 = fn_006afdf4(*(undefined4 *)(DAT_008977e0 + 0x1c),param_2);
  if (iVar2 != -1) {
    uVar3 = fn_00279a38(uVar1,iVar2);
    *(undefined4 *)(param_1 + 8) = uVar3;
  }
  uVar3 = fn_006af820(*(undefined4 *)(DAT_008977e0 + 0x1c),param_2);
  uVar4 = fn_006af978(*(undefined4 *)(DAT_008977e0 + 0x1c),param_2);
  fn_00277e84(&local_28,uVar1,uVar4,uVar3);
  *(undefined4 *)(param_1 + 0xc) = local_28;
  *(undefined4 *)(param_1 + 0x10) = uStack_24;
  *(undefined4 *)(param_1 + 0x14) = uStack_20;
  uVar3 = fn_00278880(uVar1,param_2,0);
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  uVar3 = fn_00278180(uVar1,param_2,*(undefined1 *)(param_1 + 0x68));
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  uVar3 = fn_00277c48(uVar1,param_2,*(undefined1 *)(param_1 + 0x68));
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  uVar3 = fn_002786b0(uVar1,param_2);
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  iVar2 = fn_002798a0(uVar1,uVar3);
  if (iVar2 != 0) {
    fn_00279ae4(uVar1,*(undefined4 *)(param_1 + 0x24));
    *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  }
  uVar3 = fn_0027911c(uVar1,param_2);
  *(undefined4 *)(param_1 + 0x28) = uVar3;
  iVar2 = fn_002798a0(uVar1,uVar3);
  if (iVar2 != 0) {
    fn_00279ae4(uVar1,*(undefined4 *)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  }
  return;
}



void fn_006840b0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(DAT_008977e0 + 0xa8);
  if (*(int *)(param_1 + 4) == -1) {
    uVar1 = fn_006f7a9c();
    uVar2 = fn_002798b8(uVar1,uVar2,0);
    *(undefined4 *)(param_1 + 4) = uVar2;
  }
  fn_00683cb4(param_1);
  return;
}



void fn_00683ffc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    uVar1 = fn_0017fde4();
    iVar2 = fn_006ebf84(*(undefined4 *)(*(int *)(DAT_008977e0 + 8) + 0x24),uVar1);
    if (iVar2 != 0) {
      uVar1 = fn_0017fde4(*(undefined4 *)(param_1 + 0x2c));
      fn_00162d54(*(undefined4 *)(*(int *)(DAT_008977e0 + 8) + 0x24),uVar1);
      fn_00162d44(*(undefined4 *)(*(int *)(DAT_008977e0 + 8) + 0x24));
    }
    if (*(int **)(param_1 + 0x2c) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x2c) + 4))();
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
  }
  if (*(int *)(param_1 + 4) != -1) {
    uVar1 = fn_006f7a9c(DAT_008977e0);
    fn_00279ae4(uVar1,*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
  }
  return;
}



void fn_00683fe8(int param_1)

{
  if (*(int *)(param_1 + 0x58) == 0) {
    return;
  }
  fn_00343558();
  return;
}



void fn_00683fd8(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00683fe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x4c) + 0x1c))();
  return;
}



undefined4 fn_00683dec(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if (*(byte *)(param_1 + 0x68) == param_2) {
    uVar1 = 0;
  }
  else {
    uVar1 = fn_006f7a9c(DAT_008977e0);
    *(char *)(param_1 + 0x68) = (char)param_2;
    if (*(int *)(param_1 + 0x70) != -1) {
      fn_00257de0(*(undefined4 *)(param_1 + 0x40),0);
      *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
    }
    if (*(int *)(param_1 + 0x6c) != -1) {
      fn_00257de0(*(undefined4 *)(param_1 + 0x40),1);
      *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
    }
    if (*(int *)(param_1 + 0x1c) != -1) {
      fn_00279ae4(uVar1);
      *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
    }
    if (*(int *)(param_1 + 0x18) != -1) {
      fn_00279ae4(uVar1);
      *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
    }
    uVar2 = fn_00278180(uVar1,*(undefined4 *)(DAT_008977e0 + 0xa8),*(undefined1 *)(param_1 + 0x68))
    ;
    *(undefined4 *)(param_1 + 0x18) = uVar2;
    uVar1 = fn_00277c48(uVar1,*(undefined4 *)(DAT_008977e0 + 0xa8),*(undefined1 *)(param_1 + 0x68))
    ;
    *(undefined4 *)(param_1 + 0x1c) = uVar1;
    uVar1 = fn_006f7a9c(DAT_008977e0);
    iVar3 = fn_006b7664(uVar1,*(undefined4 *)(param_1 + 0x18));
    uVar1 = 0;
    if (iVar3 != 0) {
      if ((((byte)DAT_008c62fc & 1) == 0) && (iVar4 = fn_00303afc(&DAT_008c62fc), iVar4 != 0)) {
        DAT_008f9e2c = uVar1;
        DAT_008f9e30 = uVar1;
        DAT_008f9e34 = uVar1;
      }
      uVar2 = fn_00257da8(*(undefined4 *)(param_1 + 0x40),1,iVar3,&DAT_008f9e2c);
      *(undefined4 *)(param_1 + 0x6c) = uVar2;
    }
    uVar2 = fn_006f7a9c(DAT_008977e0);
    iVar3 = fn_006b7664(uVar2,*(undefined4 *)(param_1 + 0x1c));
    if (iVar3 != 0) {
      if ((((byte)DAT_008c62fc & 1) == 0) && (iVar4 = fn_00303afc(&DAT_008c62fc), iVar4 != 0)) {
        DAT_008f9e2c = uVar1;
        DAT_008f9e30 = uVar1;
        DAT_008f9e34 = uVar1;
      }
      uVar1 = fn_00257da8(*(undefined4 *)(param_1 + 0x40),0,iVar3,&DAT_008f9e2c);
      *(undefined4 *)(param_1 + 0x70) = uVar1;
    }
    if (*(int *)(param_1 + 0x58) != 0) {
      fn_00343480(*(int *)(param_1 + 0x58),param_2,param_3);
    }
    uVar1 = 1;
  }
  return uVar1;
}



void fn_00683dc0(int param_1)

{
  if (*(int **)(param_1 + 0x58) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x58) + 4))();
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  return;
}



void fn_00683dac(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x34) == 0) {
    return;
  }
  if (*(int *)(*(int *)(param_1 + 0x34) + 4) == 0) {
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



bool fn_00683cb4(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  
  iVar1 = fn_00145b00(8,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_005efdbc();
  }
  piVar5 = *(int **)(param_1 + 0x2c);
  if (piVar5 != piVar2) {
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
    *(int **)(param_1 + 0x2c) = piVar2;
  }
  iVar1 = fn_006f7a9c(DAT_008977e0);
  uVar3 = *(uint *)(param_1 + 4);
  if (((int)uVar3 < 0) || ((uint)((*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4)) / 0x34) <= uVar3)) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + 4) + uVar3 * 0x34;
  }
  iVar1 = fn_0069ee40(*(undefined4 *)(param_1 + 0x2c),iVar1,0);
  if (iVar1 != 0) {
    uVar4 = fn_0017fde4(*(undefined4 *)(param_1 + 0x2c));
    fn_001969a4(*(undefined4 *)(*(int *)(DAT_008977e0 + 8) + 0x24),uVar4);
    fn_00162d44(*(undefined4 *)(*(int *)(DAT_008977e0 + 8) + 0x24));
  }
  return iVar1 != 0;
}



void fn_00683918(int param_1)

{
  int iVar1;
  
  iVar1 = fn_006f72c8(DAT_008977e0);
  if (iVar1 != 0) {
    fn_006f72c8(DAT_008977e0);
  }
  fn_006f7a84(DAT_008977e0);
  if (*(int *)(param_1 + 0x44) != 0) {
    fn_0026f040();
    if (*(int **)(param_1 + 0x44) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x44) + 4))();
      *(undefined4 *)(param_1 + 0x44) = 0;
    }
  }
  if (*(int **)(param_1 + 0x30) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x30) + 8))();
  }
  if (*(int **)(param_1 + 0x58) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x58) + 4))();
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  return;
}



undefined4 * fn_00683780(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint *puVar8;
  uint uVar9;
  uint local_20;
  uint local_1c [2];
  
  *param_1 = &DAT_00850e30;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)((int)param_1 + 5) = 0;
  *(undefined1 *)((int)param_1 + 6) = 0;
  param_1[2] = 0xffffffff;
  param_1[3] = 0xffffffff;
  param_1[5] = 0;
  param_1[4] = 0xffffffff;
  param_1[6] = 0;
  param_1[7] = 0;
  local_20 = 4;
  puVar8 = param_1 + 5;
  if ((uint)((int)(param_1[7] - param_1[5]) >> 3) < 4) {
    uVar9 = (int)(param_1[6] - param_1[5]) >> 3;
    local_1c[0] = uVar9 + (uVar9 >> 1) + (uVar9 >> 3);
    if (local_1c[0] < uVar9 + 0x20) {
      local_1c[0] = uVar9 + 0x20;
    }
    puVar5 = local_1c;
    if (local_1c[0] < 5) {
      puVar5 = &local_20;
    }
    uVar9 = *puVar5;
    puVar1 = (undefined4 *)fn_00100fc6(uVar9 << 3,0);
    puVar7 = (undefined4 *)param_1[6];
    puVar2 = puVar1;
    for (puVar6 = (undefined4 *)*puVar8; puVar6 != puVar7; puVar6 = puVar6 + 2) {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = *puVar6;
        puVar2[1] = puVar6[1];
      }
      puVar2 = puVar2 + 2;
    }
    uVar3 = *puVar8;
    uVar4 = uVar3;
    if ((uint)param_1[6] < uVar3) {
      do {
        uVar4 = uVar4 + 8;
      } while (uVar4 != param_1[6]);
    }
    fn_001008c4(uVar3,(int)(param_1[7] - uVar3) >> 3,0);
    uVar4 = *puVar8;
    param_1[5] = puVar1;
    param_1[6] = (param_1[6] - uVar4 & 0xfffffff8) + (int)puVar1;
    param_1[7] = puVar1 + uVar9 * 2;
  }
  return param_1;
}


