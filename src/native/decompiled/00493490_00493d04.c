#include "00493490_00493d04.h"



void fn_00493d04(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 local_48 [2];
  undefined *local_40;
  code *local_3c;
  undefined4 uStack_38;
  undefined *local_34;
  undefined1 local_30 [20];
  
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  *(undefined4 *)(param_2 + 0x6c) = param_3;
  fn_00170fa4(param_2 + 0x70,param_4);
  *(undefined1 *)(param_2 + 0x78) = param_5;
  *(undefined4 *)(param_2 + 0x7c) = param_6;
  *(undefined4 *)(param_2 + 0x104) = param_7;
  piVar4 = (int *)fn_0015ecdc(8);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    *(undefined1 *)(piVar4 + 1) = 1;
    *piVar4 = (int)&DAT_00852c28;
  }
  iVar1 = fn_0045db00(piVar4,param_2 + 0x108,&PTR_s_CACERT_PUBLIC_CA_5_der_0089a988,4);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))(piVar4);
  }
  if (iVar1 == 0) {
    local_48[0] = 0x80690009;
    fn_004b8d4c(param_1,local_48);
    (**(code **)(*piVar3 + 0xc))(piVar3);
    return;
  }
  local_3c = fn_004941c4;
  uStack_38 = 0;
  local_34 = &DAT_00493e60;
  local_40 = &DAT_00853500;
  fn_00479c98(param_2,&local_40);
  local_30[0] = 1;
  fn_004b8d18(param_1,local_30);
  (**(code **)(*piVar3 + 0xc))(piVar3);
  return;
}



void fn_00493be8(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined4 local_28;
  undefined *puStack_24;
  undefined4 uStack_20;
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68));
  if (iVar1 == 0) {
    local_28 = 0x80010004;
    puStack_24 = &DAT_007dba44;
    uStack_20 = 0x71;
    fn_00493b28(param_1,&local_28);
    return;
  }
  if (*(char *)(*(int *)(param_1 + 0x70) + 0x10) != '\x01') {
    puVar3 = &LAB_00493cf8;
    uVar4 = 0;
    fn_0013d0fc(&local_28);
    *(undefined4 *)(param_1 + 0x40) = local_28;
    *(undefined **)(param_1 + 0x44) = puStack_24;
    *(undefined1 **)(param_1 + 0x50) = puVar3;
    *(undefined4 *)(param_1 + 0x54) = uVar4;
    *(undefined **)(param_1 + 0x58) = &DAT_00493cec;
    return;
  }
  fn_004b301c(param_1,2);
  puVar2 = (undefined4 *)fn_0015ece0(0x10);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &DAT_00853500;
    puVar2[1] = &LAB_00493cf8;
    puVar2[2] = 0;
    puVar2[3] = &DAT_00493cec;
  }
  fn_00479b1c(param_1,*(undefined4 *)(param_1 + 0x70),puVar2);
  return;
}



void fn_00493aa4(int param_1)

{
  int iVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined *puStack_10;
  undefined4 uStack_c;
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68));
  if (iVar1 == 0) {
    local_14 = 0x80010004;
    puStack_10 = &DAT_007dba44;
    uStack_c = 0x71;
    fn_00493b28(param_1,&local_14);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x70);
  local_18 = *(undefined4 *)(iVar1 + 0x40);
  local_20 = *(undefined4 *)(iVar1 + 0x38);
  uStack_1c = *(undefined4 *)(iVar1 + 0x3c);
  fn_00493b28(param_1,&local_20);
  return;
}



void fn_00493b28(int *param_1,int *param_2)

{
  int iVar1;
  int local_20;
  int iStack_1c;
  int iStack_18;
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),param_1[0x1a]);
  if (iVar1 == 0) {
    fn_00456510(param_1[0x1c],4);
    (**(code **)(*param_1 + 0x44))(param_1);
  }
  else {
    local_20 = *param_2;
    iStack_1c = param_2[1];
    iStack_18 = param_2[2];
    if (local_20 < 0) {
      fn_00455e8c(iVar1,3,&local_20,1);
      (**(code **)(*param_1 + 0x40))(param_1,iVar1);
    }
    else {
      fn_00455e8c(iVar1,2,&local_20,1);
      (**(code **)(*param_1 + 0x3c))(param_1,iVar1);
    }
  }
  fn_004b301c(param_1,5);
  return;
}



void fn_00493830(int param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_28;
  undefined1 local_24 [4];
  undefined4 local_20;
  
  cVar1 = *(char *)(param_1 + 0x3b);
  iVar5 = 0;
  if (cVar1 == '\0') {
    local_24[0] = 0;
    piVar2 = &local_28;
    if (*(char *)(param_2 + 4) != '\0') {
      piVar2 = (int *)local_24;
    }
    local_28 = CONCAT31(((unsigned int)(local_28) >> 8) & 0xffffff,*(char *)(param_2 + 4));
    fn_0015ef4c(param_1,piVar2,1);
    iVar5 = *(int *)(*(int *)(param_1 + 8) + 0x10);
    local_20 = 0;
    fn_0015ef4c(param_1,&local_20,4);
  }
  fn_0015ef4c(param_1,param_2 + 8,4);
  fn_0015ef4c(param_1,param_2 + 0xc,4);
  fn_0015ef4c(param_1,param_2 + 0x10,1);
  fn_0015ef4c(param_1,param_2 + 0x11,1);
  local_28 = *(int *)(param_2 + 0x18) - *(int *)(param_2 + 0x14);
  fn_0015ef4c(param_1,&local_28,4);
  iVar4 = *(int *)(param_2 + 0x18);
  for (iVar3 = *(int *)(param_2 + 0x14); iVar3 != iVar4; iVar3 = iVar3 + 1) {
    fn_0015ef4c(param_1,iVar3,1);
  }
  fn_0015ef4c(param_1,param_2 + 0x20,8);
  if (cVar1 == '\0') {
    iVar3 = *(int *)(*(int *)(param_1 + 8) + 0x10);
    fn_00454cbc(param_1,iVar5);
    local_28 = (iVar3 - iVar5) + -4;
    fn_0015ef4c(param_1,&local_28,4);
    fn_00454cbc(param_1,iVar3);
  }
  return;
}



int fn_00493750(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  
  *param_1 = &DAT_0085435c;
  iVar2 = fn_0013ce98(param_1 + 0x22);
  piVar5 = *(int **)(iVar2 + -8);
  piVar6 = (int *)(iVar2 + -0x18);
  if (piVar5 != (int *)0x0) {
    piVar3 = (int *)*piVar5;
    while (piVar1 = piVar3, piVar1 != piVar5) {
      piVar3 = *(int **)(iVar2 + -8);
      if (piVar1 != *(int **)(iVar2 + -8)) {
        piVar3 = (int *)*piVar1;
        *(int *)piVar1[1] = *piVar1;
        *(int *)(*piVar1 + 4) = piVar1[1];
        *(int *)(iVar2 + -4) = *(int *)(iVar2 + -4) + -1;
        *piVar1 = *(undefined4 *)(iVar2 + -0x14);
        *(int **)(iVar2 + -0x14) = piVar1;
      }
    }
    puVar4 = *(undefined4 **)(iVar2 + -8);
    *puVar4 = *(undefined4 *)(iVar2 + -0x14);
    *(undefined4 **)(iVar2 + -0x14) = puVar4;
    piVar5 = (int *)*piVar6;
    while (piVar5 != (int *)0x0) {
      *piVar6 = *piVar5;
      fn_0014f1bc(piVar5[2]);
      fn_0014f1bc(piVar5);
      piVar5 = (int *)*piVar6;
    }
    *(undefined4 *)(iVar2 + -0x14) = 0;
    *(undefined4 *)(iVar2 + -0x10) = 0;
    *(undefined4 *)(iVar2 + -0xc) = 0;
  }
  iVar2 = fn_0013ce98(iVar2 + -0x80);
  return iVar2 + -8;
}



void fn_00493490(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  undefined1 uVar9;
  uint uVar10;
  int local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  uint local_4c [3];
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  
  *(undefined1 *)(param_2 + 4) = 0;
  local_3c = (int)*(char *)(param_1 + 0x3b);
  local_5c = 0;
  if ((((local_3c != 0) ||
       ((fn_0074a4c8(param_1,param_2 + 4), *(char *)(param_1 + 4) == '\0' &&
        (fn_0074a528(param_1,&local_5c), *(char *)(param_1 + 4) == '\0')))) &&
      (local_40 = *(int *)(param_1 + 0xc), *(char *)(param_1 + 4) == '\0')) &&
     (fn_0047fba4(param_1,param_2 + 8), *(char *)(param_1 + 4) == '\0')) {
    piVar5 = *(int **)(param_2 + 0x80);
    piVar7 = (int *)(param_2 + 0x70);
    piVar2 = (int *)*piVar5;
    while (piVar1 = piVar2, piVar1 != piVar5) {
      piVar2 = *(int **)(param_2 + 0x80);
      if (piVar1 != *(int **)(param_2 + 0x80)) {
        piVar2 = (int *)*piVar1;
        *(int *)piVar1[1] = *piVar1;
        *(int *)(*piVar1 + 4) = piVar1[1];
        *(int *)(param_2 + 0x84) = *(int *)(param_2 + 0x84) + -1;
        *piVar1 = *(undefined4 *)(param_2 + 0x74);
        *(int **)(param_2 + 0x74) = piVar1;
      }
    }
    local_4c[0] = 0;
    fn_0074a528(param_1,local_4c);
    uVar8 = 0;
    if (local_4c[0] != 0) {
      do {
        iVar4 = *(int *)(param_1 + 8);
        iVar6 = *(int *)(param_1 + 0xc);
        if (*(int *)(iVar4 + 0x10) == iVar6) {
          uVar9 = 0;
          *(undefined1 *)(param_1 + 4) = 1;
        }
        else {
          uVar9 = *(undefined1 *)(*(int *)(iVar4 + 0xc) + *(int *)(iVar4 + 0x18) + iVar6);
          *(int *)(param_1 + 0xc) = iVar6 + 1;
        }
        piVar2 = *(int **)(param_2 + 0x74);
        iVar4 = *(int *)(param_2 + 0x80);
        if (piVar2 == (int *)0x0) {
          if (*(int *)(param_2 + 0x78) == *(int *)(param_2 + 0x7c)) {
            if (*piVar7 == 0) {
              uVar10 = 0x20;
            }
            else {
              uVar3 = *(uint *)(*piVar7 + 4);
              uVar10 = uVar3 + (uVar3 >> 1) + (uVar3 >> 3);
              if (uVar10 < uVar3 + 0x20) {
                uVar10 = uVar3 + 0x20;
              }
            }
            piVar2 = (int *)fn_0015ece0(0xc);
            iVar6 = fn_0015ece0(uVar10 * 0xc);
            piVar2[2] = iVar6;
            *piVar2 = *piVar7;
            piVar2[1] = uVar10;
            *piVar7 = (int)piVar2;
            iVar6 = piVar2[2];
            *(int *)(param_2 + 0x78) = iVar6;
            *(uint *)(param_2 + 0x7c) = iVar6 + uVar10 * 0xc;
          }
          piVar2 = *(int **)(param_2 + 0x78);
          *(int **)(param_2 + 0x78) = piVar2 + 3;
        }
        else {
          *(int *)(param_2 + 0x74) = *piVar2;
        }
        uVar8 = uVar8 + 1;
        if (piVar2 + 2 != (int *)0x0) {
          *(undefined1 *)(piVar2 + 2) = uVar9;
        }
        *piVar2 = iVar4;
        piVar2[1] = *(int *)(iVar4 + 4);
        **(int **)(iVar4 + 4) = (int)piVar2;
        *(int **)(iVar4 + 4) = piVar2;
        *(int *)(param_2 + 0x84) = *(int *)(param_2 + 0x84) + 1;
      } while (uVar8 < local_4c[0]);
    }
    if ((*(char *)(param_1 + 4) == '\0') &&
       (fn_0047fba4(param_1,param_2 + 0x88), *(char *)(param_1 + 4) == '\0')) {
      if (*(char *)(param_2 + 4) != '\0') {
        fn_0074a5fc(param_1,&local_38);
        local_58 = local_38;
        uStack_54 = uStack_34;
        fn_0014f510(param_2 + 0xf0,&local_58);
        if (*(char *)(param_1 + 4) != '\0') {
          return;
        }
      }
      if (local_3c == 0) {
        uVar8 = local_5c + local_40;
        if ((uVar8 < *(uint *)(param_1 + 0xc)) || (*(uint *)(*(int *)(param_1 + 8) + 0x10) < uVar8))
        {
          *(undefined1 *)(param_1 + 4) = 1;
        }
        else {
          *(uint *)(param_1 + 0xc) = uVar8;
        }
      }
    }
  }
  return;
}


