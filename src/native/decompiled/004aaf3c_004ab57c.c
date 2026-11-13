#include "004aaf3c_004ab57c.h"



int fn_004ab57c(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_10 [8];
  
  *param_1 = &PTR_FUN_0085557c;
  uVar1 = fn_0013d3e8(auStack_10,L"Protocol");
  iVar2 = fn_00489a74(param_1 + 1,uVar1);
  fn_00170f54(auStack_10);
  iVar2 = fn_0047eb04(iVar2 + 0x28);
  if (DAT_008bad3c == '\0') {
    DAT_008b63c4 = fn_004951b4;
    DAT_008b63c8 = fn_004951fc;
    DAT_008bad3c = '\x01';
  }
  return iVar2 + -0x2c;
}



undefined4 * fn_004ab464(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 auStack_18 [12];
  
  *param_1 = &DAT_008557ec;
  *(undefined1 *)(param_1 + 1) = 3;
  fn_0013d40c(auStack_18);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  iVar1 = fn_0015ece0(0x100);
  param_1[2] = iVar1;
  param_1[3] = iVar1;
  param_1[4] = iVar1 + 0x100;
  fn_00170f54(auStack_18);
  iVar1 = fn_0013d40c(param_1 + 5);
  iVar1 = fn_0013d40c(iVar1 + 8);
  iVar1 = fn_0013d40c(iVar1 + 8);
  iVar1 = fn_0013d40c(iVar1 + 8);
  iVar1 = fn_0046f01c(iVar1 + 0x14);
  puVar2 = (undefined4 *)(iVar1 + -0x40);
  *puVar2 = &DAT_0085556c;
  fn_004ab118(puVar2);
  return puVar2;
}



void fn_004ab118(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStack_30 [12];
  
  uVar1 = fn_0013d3e8(auStack_30,&DAT_004ab460);
  puVar8 = *(undefined4 **)(param_1 + 0xc);
  puVar11 = *(undefined4 **)(param_1 + 8);
  puVar7 = puVar11;
  if (puVar11 != puVar8) {
    do {
      (**(code **)*puVar7)(puVar7);
      puVar7 = puVar7 + 2;
    } while (puVar7 != puVar8);
    *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) - ((int)puVar8 - (int)puVar11 & 0xfffffff8U);
  }
  uVar13 = *(uint *)(param_1 + 8);
  uVar12 = *(uint *)(param_1 + 0xc);
  uVar3 = ((int)(uVar12 - uVar13) >> 3) + 6;
  if ((uint)((int)(*(int *)(param_1 + 0x10) - uVar13) >> 3) < uVar3) {
    uVar12 = (int)(uVar12 - *(int *)(param_1 + 8)) >> 3;
    uVar9 = uVar12 + (uVar12 >> 1) + (uVar12 >> 3);
    if (uVar9 < uVar12 + 0x20) {
      uVar9 = uVar12 + 0x20;
    }
    if (uVar9 <= uVar3) {
      uVar9 = uVar3;
    }
    iVar2 = fn_0015ece0(uVar9 << 3);
    iVar6 = iVar2;
    for (uVar12 = *(uint *)(param_1 + 8); uVar12 != uVar13; uVar12 = uVar12 + 8) {
      if (iVar6 != 0) {
        fn_004b637c(iVar6,uVar12);
      }
      iVar6 = iVar6 + 8;
    }
    iVar10 = 6;
    iVar6 = (uVar13 - *(int *)(param_1 + 8) & 0xfffffff8) + iVar2;
    do {
      if (iVar6 != 0) {
        fn_004b637c(iVar6,uVar1);
      }
      iVar10 = iVar10 + -1;
      iVar6 = iVar6 + 8;
    } while (iVar10 != 0);
    uVar12 = *(uint *)(param_1 + 0xc);
    iVar6 = iVar2 + (((int)(uVar13 - *(int *)(param_1 + 8)) >> 3) + 6) * 8;
    for (; uVar13 != uVar12; uVar13 = uVar13 + 8) {
      if (iVar6 != 0) {
        fn_004b637c(iVar6,uVar13);
      }
      iVar6 = iVar6 + 8;
    }
    puVar7 = *(undefined4 **)(param_1 + 8);
    puVar8 = *(undefined4 **)(param_1 + 0xc);
    iVar6 = (int)puVar8 - (int)puVar7;
    for (; puVar7 != puVar8; puVar7 = puVar7 + 2) {
      (**(code **)*puVar7)(puVar7);
    }
    fn_0014f1bc(*(undefined4 *)(param_1 + 8));
    *(uint *)(param_1 + 0x10) = iVar2 + uVar9 * 8;
    *(int *)(param_1 + 0xc) = iVar2 + (iVar6 >> 3) * 8 + 0x30;
    *(int *)(param_1 + 8) = iVar2;
  }
  else {
    uVar3 = uVar13 + 0x30;
    *(uint *)(param_1 + 0xc) = uVar12 + 0x30;
    if (uVar3 < uVar12) {
      uVar4 = uVar12 - 0x30;
      uVar9 = uVar12;
      for (uVar5 = uVar4; uVar5 != uVar12; uVar5 = uVar5 + 8) {
        if (uVar9 != 0) {
          fn_004b637c(uVar9,uVar5);
        }
        uVar9 = uVar9 + 8;
      }
      for (; uVar13 != uVar4; uVar4 = uVar4 - 8) {
        uVar12 = uVar12 - 8;
        fn_00170fa4(uVar12);
      }
      for (; uVar13 != uVar3; uVar13 = uVar13 + 8) {
        fn_00170fa4(uVar13,uVar1);
      }
    }
    else {
      uVar9 = uVar12;
      for (iVar6 = 6 - ((int)(uVar12 - uVar13) >> 3); uVar5 = uVar13, iVar6 != 0; iVar6 = iVar6 + -1
          ) {
        if (uVar9 != 0) {
          fn_004b637c(uVar9,uVar1);
        }
        uVar9 = uVar9 + 8;
      }
      for (; uVar5 != uVar12; uVar5 = uVar5 + 8) {
        if (uVar3 != 0) {
          fn_004b637c(uVar3,uVar5);
        }
        uVar3 = uVar3 + 8;
      }
      for (; uVar13 != uVar12; uVar13 = uVar13 + 8) {
        fn_00170fa4(uVar13,uVar1);
      }
    }
  }
  fn_00170f54(auStack_30);
  fn_0013d438(param_1 + 0x14,&DAT_004ab460);
  fn_0013d438(param_1 + 0x1c,&DAT_004ab460);
  fn_0013d438(param_1 + 0x24,&DAT_004ab460);
  fn_0013d438(param_1 + 0x2c,&DAT_004ab460);
  *(undefined1 *)(param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 0x35) = 1;
  *(undefined1 *)(param_1 + 0x36) = 1;
  *(undefined1 *)(param_1 + 100) = 1;
  *(undefined1 *)(param_1 + 0x65) = 1;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined2 *)(param_1 + 0x3c) = 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  return;
}



void fn_004ab104(int param_1,undefined4 param_2)

{
  fn_004b6230(param_1 + 0x2c,&DAT_007d96a4,param_2);
  return;
}



void fn_004ab0e8(int param_1,int param_2)

{
  fn_004b6230(*(int *)(param_1 + 8) + param_2 * 8,L"%u,%u");
  return;
}



void fn_004ab0d0(int param_1,undefined4 param_2)

{
  fn_004b6230(param_1 + 0x24,&DAT_004ab0e0,param_2);
  return;
}



void fn_004ab0c0(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x34) = param_2;
  *(undefined2 *)(param_1 + 0x3c) = 1;
  return;
}



void fn_004ab0ac(int param_1,undefined4 param_2)

{
  fn_004b6230(param_1 + 0x14,&DAT_007d96a4,param_2);
  return;
}



void fn_004aaf3c(void)

{
  fn_004aaf4c();
  fn_00455018();
  return;
}



void fn_004aaf4c(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int local_20;
  int local_1c;
  undefined1 auStack_18 [4];
  
  piVar4 = param_1 + 0x21;
  *param_1 = &DAT_00855500;
  iVar8 = param_1[0x25];
  if (iVar8 != 0) {
    iVar5 = *(int *)(iVar8 + 8);
    iVar2 = local_20;
    if (param_1[0x26] == 0) {
      while (local_20 = iVar5, local_20 != iVar8) {
        iVar2 = *(int *)(local_20 + 0xc);
        if (*(int *)(local_20 + 0xc) == 0) {
          iVar2 = *(int *)(local_20 + 4);
          iVar5 = local_20;
          if (local_20 == *(int *)(iVar2 + 0xc)) {
            do {
              iVar5 = iVar2;
              iVar2 = *(int *)(iVar5 + 4);
            } while (iVar5 == *(int *)(iVar2 + 0xc));
          }
          if (*(int *)(iVar5 + 0xc) != iVar2) {
            iVar5 = iVar2;
          }
        }
        else {
          do {
            iVar5 = iVar2;
            iVar2 = *(int *)(iVar5 + 8);
          } while (*(int *)(iVar5 + 8) != 0);
        }
        fn_0076d89c(&local_1c,piVar4,&local_20);
        iVar2 = local_20;
      }
    }
    else {
      iVar8 = *(int *)(iVar8 + 4);
      while (iVar8 != 0) {
        fn_0076def8(piVar4,*(undefined4 *)(iVar8 + 0xc));
        iVar2 = *(int *)(iVar8 + 8);
        *(undefined4 *)(iVar8 + 0xc) = param_1[0x22];
        param_1[0x22] = iVar8;
        iVar8 = iVar2;
      }
      *(undefined4 *)(param_1[0x25] + 8) = param_1[0x25];
      *(undefined4 *)(param_1[0x25] + 4) = 0;
      *(undefined4 *)(param_1[0x25] + 0xc) = param_1[0x25];
      param_1[0x26] = 0;
      iVar2 = local_20;
    }
    local_20 = iVar2;
    iVar8 = param_1[0x25];
    *(undefined4 *)(iVar8 + 0xc) = param_1[0x22];
    param_1[0x22] = iVar8;
    piVar3 = (int *)*piVar4;
    while (piVar3 != (int *)0x0) {
      *piVar4 = *piVar3;
      fn_0014f1bc(piVar3[2]);
      fn_0014f1bc(piVar3);
      piVar3 = (int *)*piVar4;
    }
  }
  *param_1 = &DAT_00854b1c;
  local_1c = param_1[0x14];
  local_20 = *(int *)(local_1c + 8);
  fn_0076d3a0(auStack_18,param_1 + 0x10,&local_20,&local_1c);
  piVar4 = param_1 + 0x18;
  piVar3 = (int *)param_1[0x1c];
  if (piVar3 != (int *)0x0) {
    piVar6 = (int *)*piVar3;
    while (piVar6 != piVar3) {
      piVar7 = (int *)param_1[0x1c];
      if (piVar6 != (int *)param_1[0x1c]) {
        piVar7 = (int *)*piVar6;
        *(int **)piVar6[1] = piVar7;
        *(int *)(*piVar6 + 4) = piVar6[1];
        param_1[0x1d] = param_1[0x1d] + -1;
        (**(code **)piVar6[2])(piVar6 + 2);
        *piVar6 = param_1[0x19];
        param_1[0x19] = piVar6;
      }
      piVar6 = piVar7;
    }
    puVar1 = (undefined4 *)param_1[0x1c];
    *puVar1 = param_1[0x19];
    param_1[0x19] = puVar1;
    piVar3 = (int *)*piVar4;
    while (piVar3 != (int *)0x0) {
      *piVar4 = *piVar3;
      fn_0014f1bc(piVar3[2]);
      fn_0014f1bc(piVar3);
      piVar3 = (int *)*piVar4;
    }
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
  }
  piVar4 = param_1 + 0x10;
  iVar8 = param_1[0x14];
  if (iVar8 != 0) {
    local_20 = *(int *)(iVar8 + 8);
    local_1c = iVar8;
    fn_0076d3a0(auStack_18,piVar4,&local_20,&local_1c);
    iVar8 = param_1[0x14];
    *(undefined4 *)(iVar8 + 0xc) = param_1[0x11];
    param_1[0x11] = iVar8;
    piVar3 = (int *)*piVar4;
    while (piVar3 != (int *)0x0) {
      *piVar4 = *piVar3;
      fn_0014f1bc(piVar3[2]);
      fn_0014f1bc(piVar3);
      piVar3 = (int *)*piVar4;
    }
  }
  *param_1 = &DAT_0085355c;
  if (param_1[7] != 0) {
    param_1[7] = 0;
  }
  iVar8 = fn_00170f54(param_1 + 3);
  *(undefined **)(iVar8 + -0xc) = &DAT_00853740;
  *(undefined4 *)(iVar8 + -8) = 0;
  return;
}


