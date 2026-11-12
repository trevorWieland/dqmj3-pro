#include "00486100_004895c0.h"



int fn_004895c0(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  (**(code **)(DAT_008e69b0 + 8))();
  DAT_008aec74 = DAT_008aec74 + -1;
  if (DAT_008aec74 == 0) {
    fn_004899e0(&DAT_008aec70);
    piVar1 = DAT_008aec6c;
    DAT_008c3dd0 = 0;
    if (DAT_008aec6c != (int *)0x0) {
      piVar5 = (int *)DAT_008aec6c[4];
      if (piVar5 != (int *)0x0) {
        piVar4 = (int *)*piVar5;
        while (piVar3 = piVar4, piVar3 != piVar5) {
          piVar4 = (int *)piVar1[4];
          if (piVar3 != (int *)piVar1[4]) {
            piVar4 = (int *)*piVar3;
            *(int *)piVar3[1] = *piVar3;
            *(int *)(*piVar3 + 4) = piVar3[1];
            piVar1[5] = piVar1[5] + -1;
            *piVar3 = piVar1[1];
            piVar1[1] = (int)piVar3;
          }
        }
        piVar5 = (int *)piVar1[4];
        *piVar5 = piVar1[1];
        piVar1[1] = (int)piVar5;
        piVar5 = (int *)*piVar1;
        while (piVar5 != (int *)0x0) {
          *piVar1 = *piVar5;
          fn_0014f1bc(piVar5[2]);
          fn_0014f1bc(piVar5);
          piVar5 = (int *)*piVar1;
        }
        piVar1[1] = 0;
        piVar1[2] = 0;
        piVar1[3] = 0;
      }
      fn_00455018(piVar1);
    }
    DAT_008aec6c = (int *)0x0;
  }
  iVar2 = DAT_008aec74;
  (**(code **)(DAT_008e69b0 + 0xc))(&DAT_008e69b0);
  return iVar2;
}



int fn_00488150(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined1 *puVar4;
  int *piVar5;
  
  *param_1 = &DAT_008539c4;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  iVar1 = fn_004b4c44(param_1 + 7);
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  *(undefined4 *)(iVar1 + 0x30) = 0;
  fn_00786f00(iVar1 + 0x1c,1);
  iVar2 = *(int *)(iVar1 + 0x24);
  *(int *)(iVar1 + 0x2c) = iVar2;
  *(int *)(iVar1 + 0x24) = iVar2 + 0xa0;
  *(int *)iVar2 = iVar2;
  *(int *)(*(int *)(iVar1 + 0x2c) + 4) = *(int *)(iVar1 + 0x2c);
  *(undefined **)(iVar1 + 0x18) = &DAT_00852d3c;
  *(undefined4 *)(iVar1 + 0x38) = 0;
  *(undefined4 *)(iVar1 + 0x3c) = 0;
  *(undefined4 *)(iVar1 + 0x40) = 0;
  *(undefined4 *)(iVar1 + 0x44) = 0;
  *(undefined4 *)(iVar1 + 0x48) = 0;
  *(undefined4 *)(iVar1 + 0x4c) = 0;
  fn_00786f00((undefined4 *)(iVar1 + 0x38),1);
  iVar2 = *(int *)(iVar1 + 0x40);
  *(int *)(iVar1 + 0x48) = iVar2;
  *(int *)(iVar1 + 0x40) = iVar2 + 0xa0;
  *(int *)iVar2 = iVar2;
  *(int *)(*(int *)(iVar1 + 0x48) + 4) = *(int *)(iVar1 + 0x48);
  *(undefined **)(iVar1 + 0x34) = &DAT_00852d3c;
  *(undefined4 *)(iVar1 + 0x54) = 0;
  *(undefined4 *)(iVar1 + 0x58) = 0;
  *(undefined4 *)(iVar1 + 0x5c) = 0;
  iVar1 = fn_004565fc(iVar1 + 100);
  *(undefined1 *)(iVar1 + 0x60) = 0;
  *(undefined4 *)(iVar1 + 0x68) = 0;
  *(undefined4 *)(iVar1 + 0x6c) = 0;
  *(undefined4 *)(iVar1 + 0x70) = 0;
  piVar5 = (int *)(iVar1 + 0x74);
  *piVar5 = 0;
  *(undefined4 *)(iVar1 + 0x84) = 0;
  *(undefined4 *)(iVar1 + 0x88) = 0;
  *(undefined1 *)(iVar1 + 0x8c) = 0;
  *(char *)(iVar1 + 0x8d) = (char)(undefined4 *)(iVar1 + 0x68);
  *(undefined4 *)(iVar1 + 0x80) = 0;
  *(undefined4 *)(iVar1 + 0x7c) = 0;
  *(undefined4 *)(iVar1 + 0x78) = 0;
  piVar3 = (int *)fn_0015ece0(0xc);
  iVar2 = fn_0015ece0(0x1100);
  piVar3[2] = iVar2;
  *piVar3 = *piVar5;
  piVar3[1] = 0x20;
  *piVar5 = (int)piVar3;
  iVar2 = piVar3[2];
  *(int *)(iVar1 + 0x7c) = iVar2;
  *(int *)(iVar1 + 0x80) = iVar2 + 0x1100;
  puVar4 = *(undefined1 **)(iVar1 + 0x7c);
  *(undefined1 **)(iVar1 + 0x7c) = puVar4 + 0x88;
  *(undefined4 *)(puVar4 + 8) = 0;
  *(undefined4 *)(puVar4 + 0xc) = 0;
  *puVar4 = 0;
  *(undefined1 **)(iVar1 + 0x84) = puVar4;
  *(undefined4 *)(puVar4 + 4) = 0;
  *(int *)(*(int *)(iVar1 + 0x84) + 8) = *(int *)(iVar1 + 0x84);
  *(int *)(*(int *)(iVar1 + 0x84) + 0xc) = *(int *)(iVar1 + 0x84);
  *(undefined **)(iVar1 + 0x90) = &DAT_00855a94;
  fn_0015e6f0(iVar1 + 0x94,&DAT_00488304);
  *(undefined2 *)(iVar1 + 0x98) = 0;
  *(undefined1 *)(iVar1 + 0x9a) = 0;
  return iVar1 + -0x80;
}



void fn_00486f60(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  if (DAT_008bad44 == (int *)0x0) {
    DAT_008bad44 = &DAT_008e9404;
  }
                    /* WARNING: Could not recover jumptable at 0x00486f9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_008bad44 + 0x18))(DAT_008bad44,param_1,param_2,param_3);
  return;
}



void fn_00486100(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  uint uVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  bool bVar12;
  undefined1 *local_d4;
  undefined1 auStack_d0 [40];
  undefined *local_a8;
  code *local_a4;
  undefined4 local_a0;
  undefined *local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [36];
  
  iVar2 = fn_004b7748();
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0x90);
  }
  uVar10 = 0;
  if (iVar2 == 0 || iVar3 == 0) {
    iVar3 = fn_001249d0();
    iVar3 = fn_0048a058(*(undefined4 *)(iVar3 + 0x10),*(undefined4 *)(param_1 + 0x1e0));
    if (iVar3 != 0) {
      local_d4 = &DAT_80010001;
      uVar10 = fn_004b8d4c(auStack_90,&local_d4);
      fn_00455e8c(iVar3,3,uVar10,0);
    }
    fn_004b2f04(param_1);
    return;
  }
  uVar8 = 0;
  do {
    puVar4 = (undefined4 *)fn_0047687c(auStack_90);
    puVar4[4] = 0;
    uVar7 = *puVar4;
    uVar11 = puVar4[1];
    iVar3 = param_1 + uVar8 * 0x14;
    uVar5 = puVar4[3];
    *(undefined4 *)(iVar3 + 0x368) = puVar4[2];
    *(undefined4 *)(iVar3 + 0x36c) = uVar5;
    *(undefined4 *)(iVar3 + 0x370) = 0;
    *(undefined4 *)(iVar3 + 0x360) = uVar7;
    *(undefined4 *)(iVar3 + 0x364) = uVar11;
    uVar8 = uVar8 + 1;
  } while (uVar8 < 3);
  fn_004b41a8(&local_98,0x9c4);
  *(undefined4 *)(param_1 + 0x2d0) = local_98;
  *(undefined4 *)(param_1 + 0x2d4) = uStack_94;
  uVar8 = 0;
  do {
    uVar5 = fn_006d0c7c(**(int **)(param_1 + 0x120) + 8);
    fn_00456a48(auStack_90,uVar5,0x8236);
    uVar5 = fn_00456a28(auStack_40,auStack_90);
    iVar3 = fn_00456a28(auStack_70,uVar5);
    puVar4 = (undefined4 *)fn_0047687c(iVar3 + 0x20);
    *puVar4 = 0;
    fn_00476814();
    fn_00786cbc(param_1 + 0x324,puVar4 + -8);
    uVar8 = uVar8 + 1;
  } while (uVar8 < 5);
  piVar6 = *(int **)(param_1 + 0x120);
  bVar1 = false;
  piVar9 = (int *)*piVar6;
  bVar12 = piVar9 != piVar6;
  if (bVar12) {
    piVar9 = (int *)*piVar9;
  }
  if ((bVar12 && piVar9 != piVar6) && (*(char *)(param_1 + 0x188) == '\x03')) {
    iVar3 = fn_004b7748();
    if (iVar3 != 0) {
      uVar10 = *(undefined4 *)(iVar3 + 0x90);
    }
    fn_006d1198(auStack_d0,uVar10);
    bVar1 = true;
    iVar3 = fn_006d1138(auStack_d0);
    if (iVar3 == 2) {
      bVar12 = true;
      goto LAB_004862ec;
    }
  }
  bVar12 = false;
LAB_004862ec:
  if (bVar1) {
    fn_0045fbe8(auStack_d0);
  }
  uVar8 = 0;
  if (bVar12) {
    uVar8 = 0;
    do {
      uVar10 = fn_00456a28(auStack_60,piVar9 + 2);
      iVar3 = fn_00456a28(auStack_90,uVar10);
      puVar4 = (undefined4 *)fn_0047687c(iVar3 + 0x20);
      *puVar4 = 0x65;
      fn_00476814();
      fn_00786cbc(param_1 + 0x324,puVar4 + -8);
      uVar8 = uVar8 + 1;
    } while (uVar8 < 5);
  }
  else {
    do {
      uVar10 = fn_00456a28(auStack_60,**(int **)(param_1 + 0x120) + 8);
      iVar3 = fn_00456a28(auStack_90,uVar10);
      puVar4 = (undefined4 *)fn_0047687c(iVar3 + 0x20);
      *puVar4 = 0x65;
      fn_00476814();
      fn_00786cbc(param_1 + 0x324,puVar4 + -8);
      uVar8 = uVar8 + 1;
    } while (uVar8 < 5);
  }
  if (*(char *)(param_1 + 0x188) == '\x01') {
    uVar8 = 0;
    piVar9 = (int *)**(undefined4 **)(param_1 + 0x120);
    do {
      uVar10 = fn_00456a28(auStack_60,piVar9 + 2);
      iVar3 = fn_00456a28(auStack_90,uVar10);
      puVar4 = (undefined4 *)fn_0047687c(iVar3 + 0x20);
      *puVar4 = 0x66;
      fn_00476814();
      fn_00786cbc(param_1 + 0x324,puVar4 + -8);
      uVar8 = uVar8 + 1;
    } while (uVar8 < 5);
    piVar9 = (int *)*piVar9;
    if (piVar9 != *(int **)(param_1 + 0x120)) {
      do {
        iVar3 = fn_006d0c7c(piVar9 + 2);
        iVar2 = fn_006d0c7c(**(int **)(param_1 + 0x120) + 8);
        if (iVar3 != iVar2) {
          iVar3 = fn_006d0ce0(piVar9 + 2);
          iVar2 = fn_006d0ce0(**(int **)(param_1 + 0x120) + 8);
          if (iVar3 == iVar2) {
            uVar8 = 0;
            do {
              uVar10 = fn_00456a28(auStack_60,piVar9 + 2);
              iVar3 = fn_00456a28(auStack_90,uVar10);
              puVar4 = (undefined4 *)fn_0047687c(iVar3 + 0x20);
              *puVar4 = 0x67;
              fn_00476814();
              fn_00786cbc(param_1 + 0x324,puVar4 + -8);
              uVar8 = uVar8 + 1;
            } while (uVar8 < 5);
            break;
          }
        }
        piVar9 = (int *)*piVar9;
      } while (piVar9 != (int *)*(int *)(param_1 + 0x120));
    }
  }
  local_a4 = fn_00485c44;
  local_a0 = 0;
  local_9c = &DAT_004865b8;
  local_a8 = &DAT_00853500;
  fn_00479c98(param_1,&local_a8);
  return;
}


