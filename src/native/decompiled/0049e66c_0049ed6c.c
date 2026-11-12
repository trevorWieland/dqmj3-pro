#include "0049e66c_0049ed6c.h"



void fn_0049ed6c(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  undefined1 auStack_88 [108];
  
  piVar5 = (int *)**(int **)(param_1 + 0x1b8);
  while (piVar5 != (int *)*(int *)(param_1 + 0x1b8)) {
    fn_0013cd7c(auStack_88,piVar5 + 4);
    fn_00455424(auStack_88,piVar5[0x1e]);
    piVar3 = (int *)param_2[1];
    iVar6 = param_2[4];
    if (piVar3 == (int *)0x0) {
      if (param_2[2] == param_2[3]) {
        if (*param_2 == 0) {
          uVar4 = 0x20;
        }
        else {
          uVar1 = *(uint *)(*param_2 + 4);
          uVar4 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
          if (uVar4 < uVar1 + 0x20) {
            uVar4 = uVar1 + 0x20;
          }
        }
        piVar3 = (int *)fn_0015ece0(0xc);
        iVar2 = fn_0015ece0(uVar4 * 0x70);
        piVar3[2] = iVar2;
        *piVar3 = *param_2;
        piVar3[1] = uVar4;
        *param_2 = (int)piVar3;
        iVar2 = piVar3[2];
        param_2[2] = iVar2;
        param_2[3] = iVar2 + uVar4 * 0x70;
      }
      piVar3 = (int *)param_2[2];
      param_2[2] = (int)(piVar3 + 0x1c);
    }
    else {
      param_2[1] = *piVar3;
    }
    if (piVar3 + 2 != (int *)0x0) {
      fn_0013cd7c(piVar3 + 2,auStack_88);
    }
    *piVar3 = iVar6;
    piVar3[1] = *(int *)(iVar6 + 4);
    **(undefined4 **)(iVar6 + 4) = piVar3;
    *(int **)(iVar6 + 4) = piVar3;
    param_2[5] = param_2[5] + 1;
    piVar5 = (int *)*piVar5;
    fn_0013ce98(auStack_88);
  }
  return;
}



void fn_0049ec54(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined *local_20;
  code *local_1c;
  undefined4 uStack_18;
  undefined *local_14;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x6c) + 0x78);
  if (*(int *)(iVar1 + 0x2c) == 0) {
    local_1c = fn_0049e8a0;
  }
  else {
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 0x24);
    }
    iVar1 = fn_00481410(*(undefined4 *)(iVar2 + 0x18),param_1 + 0x78);
    if (iVar1 != 0) {
      fn_004b2f0c(param_1);
      puVar3 = (undefined4 *)fn_0015ecdc(0x10);
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = &DAT_00853500;
        puVar3[1] = fn_0049ebb8;
        puVar3[2] = 0;
        puVar3[3] = &DAT_0049ed3c;
      }
      fn_00479b1c(param_1,param_1 + 0x78,puVar3);
      return;
    }
    local_1c = fn_0049ebb8;
  }
  uStack_18 = 0;
  local_14 = &DAT_0049ed3c;
  local_20 = &DAT_00853500;
  fn_00479c98(param_1,&local_20);
  return;
}



void fn_0049ebb8(int param_1)

{
  int *piVar1;
  undefined1 auStack_80 [104];
  undefined *local_18;
  code *local_14;
  undefined4 uStack_10;
  undefined *local_c;
  
  piVar1 = (int *)fn_006d1a3c(*(undefined4 *)(param_1 + 0x6c));
  (**(code **)(*piVar1 + 0x10))();
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x6c) + 0x78) + 0x2c) = 0;
  (**(code **)(**(int **)(param_1 + 0x6c) + 0x10))();
  fn_0013ce04(auStack_80);
  fn_00455cf0(*(int *)(param_1 + 0x6c) + 0xb0,auStack_80);
  local_14 = fn_0049e8a0;
  uStack_10 = 0;
  local_c = &DAT_0049ec4c;
  local_18 = &DAT_00853500;
  fn_00479c98(param_1,&local_18);
  fn_0013ce98(auStack_80);
  return;
}



void fn_0049e8a0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  undefined *local_30;
  code *pcStack_2c;
  undefined4 uStack_28;
  undefined *puStack_24;
  
  iVar6 = *(int *)(*(int *)(param_1 + 0x70) + 0x10);
  if ((iVar6 != 0) && (iVar1 = fn_004b7748(), iVar1 != 0)) {
    iVar1 = fn_004b7748();
    piVar2 = (int *)(iVar1 + 0x50);
    (**(code **)(*piVar2 + 8))();
    piVar5 = (int *)**(undefined4 **)(iVar1 + 0x88);
LAB_0049e8f0:
    do {
      if (piVar5 == *(int **)(iVar1 + 0x88)) goto LAB_0049e978;
      iVar3 = fn_006d0ae4(piVar5 + 2);
      if (iVar3 == iVar6) {
        uVar4 = fn_006d0c04(piVar5 + 2);
        if ((uVar4 & 2) != 0) {
          piVar7 = *(int **)(iVar1 + 0x88);
          if (piVar5 != *(int **)(iVar1 + 0x88)) {
            piVar7 = (int *)*piVar5;
            *(int **)piVar5[1] = piVar7;
            *(int *)(*piVar5 + 4) = piVar5[1];
            *(int *)(iVar1 + 0x8c) = *(int *)(iVar1 + 0x8c) + -1;
            (**(code **)piVar5[2])(piVar5 + 2);
            *piVar5 = *(int *)(iVar1 + 0x7c);
            *(int **)(iVar1 + 0x7c) = piVar5;
          }
          piVar5 = piVar7;
          goto LAB_0049e8f0;
        }
        fn_004554c4(piVar5 + 2,0);
      }
      piVar5 = (int *)*piVar5;
    } while( true );
  }
LAB_0049e988:
  iVar6 = *(int *)(*(int *)(param_1 + 0x70) + 0x24);
  if (iVar6 == 0) {
    pcStack_2c = fn_0049e7c0;
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 0x70) + 0x24) = 0;
    *(int *)(param_1 + 0x74) = iVar6;
    pcStack_2c = fn_0049ea20;
  }
  uStack_28 = 0;
  puStack_24 = &DAT_0049ea18;
  local_30 = &DAT_00853500;
  fn_00479c98(param_1,&local_30);
  return;
LAB_0049e978:
  (**(code **)(*piVar2 + 0xc))(piVar2);
  goto LAB_0049e988;
}



void fn_0049ea20(int param_1)

{
  undefined *local_18;
  code *local_14;
  undefined4 local_10;
  undefined1 *local_c;
  
  fn_00481930(*(undefined4 *)(param_1 + 0x74));
  local_14 = fn_0049eb2c;
  local_10 = 0;
  local_c = &LAB_0049ea74;
  local_18 = &DAT_00853500;
  fn_00479c98(param_1,&local_18);
  return;
}



void fn_0049eb2c(int param_1)

{
  int iVar1;
  undefined *local_18;
  code *local_14;
  undefined4 uStack_10;
  undefined *local_c;
  
  iVar1 = fn_006d2030(*(undefined4 *)(param_1 + 0x74));
  if (iVar1 == 0) {
    fn_004b2e68(param_1,0x32);
    return;
  }
  if (*(int **)(param_1 + 0x74) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x74) + 4))();
  }
  *(undefined4 *)(param_1 + 0x74) = 0;
  local_14 = fn_0049e7c0;
  uStack_10 = 0;
  local_c = &DAT_0049ebb0;
  local_18 = &DAT_00853500;
  fn_00479c98(param_1,&local_18);
  return;
}



void fn_0049e830(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_18 [12];
  undefined1 *local_c;
  
  (**(code **)(**(int **)(param_1 + 0x6c) + 8))();
  fn_004b2f04(param_1);
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68));
  if (iVar1 != 0) {
    local_c = &DAT_80010001;
    uVar2 = fn_004b8d4c(auStack_18,&local_c);
    fn_00455e8c(iVar1,3,uVar2,0);
  }
  return;
}



void fn_0049e7c0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_18 [12];
  undefined4 local_c;
  
  (**(code **)(**(int **)(param_1 + 0x6c) + 8))();
  fn_004b2f04(param_1);
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68));
  if (iVar1 != 0) {
    local_c = 0x10001;
    uVar2 = fn_004b8d4c(auStack_18,&local_c);
    fn_00455e8c(iVar1,2,uVar2,1);
  }
  return;
}



undefined4 * fn_0049e6f4(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *param_1 = &DAT_008554c0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[5] = &DAT_00854fd4;
  param_1[7] = 0;
  *(undefined2 *)(param_1 + 8) = 0xffff;
  puVar1 = (undefined4 *)fn_0075546c(param_1 + 0xc,0);
  puVar1[-0xc] = &DAT_008549dc;
  puVar1[-10] = 0;
  puVar1[-9] = 0;
  *(undefined1 *)(puVar1 + -6) = 0;
  puVar1[-5] = 0;
  *(undefined2 *)(puVar1 + -4) = 0xffff;
  puVar1[-2] = 0;
  puVar1[-1] = 0;
  puVar1[-8] = 0;
  puVar3 = (undefined4 *)puVar1[1];
  puVar4 = (undefined4 *)*puVar1;
  puVar2 = puVar4;
  if (puVar4 != puVar3) {
    do {
      (**(code **)*puVar2)(puVar2);
      puVar2 = puVar2 + 2;
    } while (puVar2 != puVar3);
    puVar1[1] = puVar1[1] - ((int)puVar3 - (int)puVar4 & 0xfffffff8U);
  }
  return puVar1 + -0xc;
}



undefined4 * fn_0049e66c(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  bool bVar4;
  
  *param_1 = &PTR_FUN_00854940;
  piVar1 = (int *)fn_004b7748();
  puVar3 = (uint *)(piVar1 + 1);
  do {
    uVar2 = *puVar3 - 1;
    bVar4 = (bool)hasExclusiveAccess(puVar3);
  } while (!bVar4);
  *puVar3 = uVar2;
  bVar4 = uVar2 == 0;
  if (bVar4) {
    uVar2 = (uint)*(byte *)(piVar1 + 2);
  }
  if (bVar4 && uVar2 == 0) {
    *(undefined1 *)(piVar1 + 2) = 1;
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  return param_1;
}


