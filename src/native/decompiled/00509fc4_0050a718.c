#include "00509fc4_0050a718.h"



void fn_0050a6a8(undefined1 *param_1)

{
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}



void fn_0050a678(char *param_1)

{
  if (*param_1 != '\0') {
    *param_1 = '\0';
    param_1[0x14] = '\0';
    param_1[0x15] = '\0';
    param_1[0x16] = '\0';
    param_1[0x17] = '\0';
    param_1[4] = -1;
    param_1[5] = -1;
    param_1[6] = -1;
    param_1[7] = -1;
    param_1[0x18] = '\0';
    param_1[0x19] = '\0';
    param_1[0x1a] = '\0';
    param_1[0x1b] = '\0';
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
  }
  return;
}



void fn_0050a63c(int param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  
  *(uint *)(param_1 + 4) = param_2;
  puVar1 = (uint *)(param_1 + 0x14);
  puVar1[(*(int *)(param_1 + 0x18) + *puVar1 & 0xf) + 2] = param_2;
  uVar2 = *puVar1;
  bVar3 = uVar2 == 0x10;
  if (bVar3) {
    uVar2 = *(uint *)(param_1 + 0x18);
  }
  if (bVar3) {
    *(uint *)(param_1 + 0x18) = uVar2 + 1 & 0xf;
  }
  else {
    *puVar1 = uVar2 + 1;
  }
  return;
}



void fn_0050a62c(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = param_2[1];
  *(undefined4 *)(param_1 + 8) = *param_2;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  return;
}



int fn_0050a608(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &DAT_00856ffc;
  iVar1 = fn_00516dd8(param_1 + 0x37);
  return iVar1 + -0xdc;
}



int fn_0050a594(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &DAT_00856ffc;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar1 = fn_0051702c(param_1 + 3);
  iVar1 = fn_00516db8(iVar1 + 0xd0);
  *(undefined4 *)(iVar1 + 0x30) = 0;
  *(int *)(iVar1 + 0x44) = iVar1 + -0xdc;
  *(undefined4 *)(iVar1 + 0x48) = 0;
  *(undefined4 *)(iVar1 + 0x4c) = 0;
  iVar1 = fn_004ed584(iVar1 + 0x50);
  return iVar1 + -300;
}



undefined1 * fn_0050a490(int param_1)

{
  if (*(int *)(param_1 + 0x10c) == 0) {
    return &DAT_e0a14827;
  }
  fn_00516e6c();
  *(undefined4 *)(param_1 + 0x10c) = 0;
  return (undefined1 *)0x0;
}



void fn_0050a454(int param_1)

{
  if (*(int *)(param_1 + 0x124) - 0x100000U < 0x3ff00000) {
    fn_0050a718();
  }
  if (*(int *)(param_1 + 0x128) - 0x100000U < 0x3ff00000) {
    fn_0050a718();
    return;
  }
  return;
}



void fn_0050a718(int param_1)

{
  fn_004edc34(param_1 + 0x340);
  fn_00513f10(param_1);
  fn_004edc70(param_1 + 0x340);
  return;
}



int * fn_0050a2bc(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *unaff_r5;
  int iVar4;
  uint uVar5;
  int *piVar6;
  
  piVar6 = (int *)0x0;
  iVar1 = fn_006d6e30(param_3);
  if (iVar1 != 0) {
    unaff_r5 = (int *)param_1[1];
  }
  if (((iVar1 != 0 && unaff_r5 != (int *)0x0) && (param_1[0x43] == 0)) &&
     (uVar5 = (param_4 + 0x13U & 0xfffffffc) + 4, uVar5 <= (uint)param_1[0x41])) {
    iVar1 = param_1[0x42];
    if ((param_5 == 0) && (uVar3 = unaff_r5[1], uVar3 != unaff_r5[2])) {
      do {
        if (uVar3 < *(uint *)*unaff_r5) {
          iVar4 = ((uint *)*unaff_r5)[1] + uVar3 * 0x5ec;
        }
        else {
          iVar4 = 0;
        }
        if (((*(char *)(iVar4 + 0x5d5) == '\0') &&
            (iVar2 = fn_006d70ac(iVar4 + 0x5c4,param_3), iVar2 != 0)) &&
           (*(uint *)(iVar4 + 0x5b8) <= iVar1 - uVar5)) {
          if (iVar4 != 0) goto LAB_0050a3e8;
          break;
        }
        uVar3 = uVar3 + 1;
        if (*(int *)*unaff_r5 <= (int)uVar3) {
          uVar3 = 0;
        }
      } while (uVar3 != unaff_r5[2]);
    }
    iVar4 = (**(code **)(*param_1 + 0x20))(param_1,0xfd,0,param_3,param_5);
    if (iVar4 != 0) {
LAB_0050a3e8:
      iVar1 = fn_004f0430(iVar4,uVar5);
      *(undefined4 *)(uVar5 + iVar1 + -4) = 0;
      fn_00516e40(param_1 + 3,param_2,param_4,0,param_5);
      fn_00516e0c(param_1 + 3,iVar4,iVar1,0,0,0);
      piVar6 = param_1 + 3;
      param_1[0x43] = (int)piVar6;
    }
  }
  return piVar6;
}



undefined4 fn_0050a29c(int param_1)

{
  if (*(int *)(param_1 + 0xd4) != 0) {
    *(int *)(param_1 + 0x10c) = param_1 + 0xc;
  }
  return *(undefined4 *)(param_1 + 0x10c);
}



void fn_0050a26c(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = fn_004f0430(param_2,param_3);
  *(undefined4 *)((param_3 & 0xfffffffc) + iVar1 + -4) = 0;
  return;
}



void fn_00509fc4(int *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  int *piVar8;
  bool bVar9;
  undefined1 local_30 [4];
  int local_2c;
  undefined4 local_28;
  
  fn_00509164(param_1[2]);
  local_30[0] = (char)param_1[0x4b] == '\x01';
  if ((bool)local_30[0]) {
    local_2c = (int)param_1 + 0x12d;
    local_28 = 0x10;
  }
  else {
    local_2c = 0;
    local_28 = 0;
  }
  piVar8 = (int *)param_1[2];
  uVar7 = piVar8[1];
  if (uVar7 != piVar8[2]) {
    do {
      if (uVar7 < *(uint *)*piVar8) {
        iVar4 = ((uint *)*piVar8)[1] + uVar7 * 0x5ec;
      }
      else {
        iVar4 = 0;
      }
      iVar2 = fn_006d8a04(iVar4);
      if ((iVar2 == 0) ||
         (((*(char *)(iVar4 + 4) != '\x01' &&
           ((iVar2 = fn_004f04c8(iVar4,local_30), iVar2 < 0 || (*(char *)(iVar4 + 4) != '\x01'))))
          || (uVar3 = (**(code **)(*param_1 + 0x34))(param_1,iVar4), uVar3 < 0xc)))) {
        *(undefined1 *)(iVar4 + 0x5e8) = 0;
      }
      else {
        bVar9 = false;
        bVar6 = 1;
        uVar5 = 0;
        *(uint *)(iVar4 + 0x5b8) = uVar3;
        while (uVar5 < *(int *)(iVar4 + 0x5b8) - 0xcU) {
          fn_00516cec(param_1 + 0x37,iVar4,uVar5);
          if (param_1[0x38] == 0) {
            if ((char)param_1[0x39] == '\0') {
              bVar6 = 0;
            }
            break;
          }
          uVar5 = (param_1[0x37] + 0x13U & 0xfffffffc) + uVar5 + 4;
          bVar1 = (**(code **)(*param_1 + 0x38))(param_1,param_1 + 0x37);
          bVar6 = bVar6 & bVar1;
          if (bVar6 == 0) break;
          bVar9 = bVar9 || (*(byte *)param_1[0x38] & 2) != 0;
        }
        if (bVar6 != 0 && bVar9) {
          uVar5 = 0;
        }
        *(byte *)(iVar4 + 0x5e8) = bVar6;
        if (bVar6 != 0 && bVar9) {
          for (; uVar5 < *(int *)(iVar4 + 0x5b8) - 0xcU;
              uVar5 = (param_1[0x37] + 0x13U & 0xfffffffc) + uVar5 + 4) {
            fn_00516cec(param_1 + 0x37,iVar4,uVar5);
            if ((byte *)param_1[0x38] == (byte *)0x0) break;
            if ((*(byte *)param_1[0x38] & 2) != 0) {
              (**(code **)(*param_1 + 0x24))(param_1,param_1 + 0x37);
            }
          }
        }
      }
      uVar7 = uVar7 + 1;
      if (*(int *)*piVar8 <= (int)uVar7) {
        uVar7 = 0;
      }
    } while (uVar7 != piVar8[2]);
  }
  if (param_1[0x4a] - 0x100000U < 0x3ff00000) {
    piVar8 = (int *)param_1[2];
    uVar7 = piVar8[1];
    if (uVar7 != piVar8[2]) {
      do {
        if (uVar7 < *(uint *)*piVar8) {
          iVar4 = ((uint *)*piVar8)[1] + uVar7 * 0x5ec;
        }
        else {
          iVar4 = 0;
        }
        fn_0050a73c(param_1[0x4a],iVar4,0);
        uVar7 = uVar7 + 1;
        if (*(int *)*piVar8 <= (int)uVar7) {
          uVar7 = 0;
        }
      } while (uVar7 != piVar8[2]);
    }
  }
  return;
}


