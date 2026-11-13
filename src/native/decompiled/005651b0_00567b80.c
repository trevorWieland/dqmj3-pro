#include "005651b0_00567b80.h"



void fn_00567b80(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00390794(param_1,param_2,9);
  *puVar1 = &DAT_0083ffb8;
  return;
}



int fn_005675a8(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0x3a;
  do {
    iVar1 = fn_00163d44(iVar2);
    if (iVar1 == 6) {
      return iVar2 + -0x33;
    }
    iVar2 = iVar2 + -1;
  } while (0x34 < iVar2);
  return 1;
}



void fn_00566c30(int param_1,int param_2)

{
  if (param_2 == 0) {
    param_2 = -1;
  }
  *(int *)(param_1 + 0x1a0) = param_2;
  return;
}



undefined4 fn_005667e8(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_001481c8(*(undefined4 *)(param_1 + 100),DAT_00890fd4,&DAT_005668b8,1,1);
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  uVar1 = fn_001480d0(*(undefined4 *)(param_1 + 100),uVar1,DAT_00890fd8,&DAT_005668c0,0,1,0);
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  uVar1 = fn_001c804c(*(undefined4 *)(param_1 + 100),DAT_00890fdc,uVar1);
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  uVar1 = fn_001088e0(*(undefined4 *)(param_1 + 100),uVar1);
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  fn_002a4648(*(undefined4 *)(param_1 + 0x78),0xc74e);
  fn_002a4648(*(undefined4 *)(param_1 + 0x78),0xc74f);
  fn_002a4648(*(undefined4 *)(param_1 + 0x78),0xc750);
  fn_002a4648(*(undefined4 *)(param_1 + 0x78),0xc751);
  fn_002a4648(*(undefined4 *)(param_1 + 0x78),0xc752);
  fn_002a4648(*(undefined4 *)(param_1 + 0x78),0xc753);
  return 1;
}



undefined4 fn_005660d0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  wchar16 *pwStack_44;
  char *pcStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  undefined1 local_18;
  undefined1 local_17;
  
  fn_005ab63c();
  fn_002c330c(&pwStack_44);
  pwStack_44 = L"rom:/data/Layout/common/common_0100.arc";
  pcStack_40 = (char *)&DAT_0056632c;
  uStack_3c = 4;
  local_38 = *(undefined4 *)(*(int *)(param_1 + 0xe4) + 0x40);
  uVar1 = fn_005ab7a4(param_1);
  fn_00147974(&local_28,uVar1);
  local_18 = 0;
  local_17 = 1;
  uVar1 = fn_0022f750((char *)&DAT_00566340);
  fn_00147974(&local_1c,uVar1);
  fn_002c29a0(param_1,&pwStack_44);
  fn_0031f8fc(*(undefined4 *)(param_1 + 0x74),0,0,0,0xffffffff);
  iVar2 = *(int *)(param_1 + 0x74);
  *(undefined1 *)(iVar2 + 0x81) = 1;
  fn_0031f3f4(iVar2,0);
  if (local_1c != &DAT_008f9cf4) {
    piVar3 = local_1c + -3;
    iVar2 = *piVar3;
    if (iVar2 == -1) {
LAB_005661b0:
      fn_001008c4(local_1c + -3,local_1c[-2] + 8,0);
    }
    else if (piVar3 != &DAT_008f9ce8) {
      *piVar3 = iVar2 + -1;
      if (iVar2 == 0) goto LAB_005661b0;
    }
  }
  if (local_20 != &DAT_008f9cf4) {
    piVar3 = local_20 + -3;
    iVar2 = *piVar3;
    if (iVar2 == -1) {
LAB_005661f4:
      fn_001008c4(local_20 + -3,local_20[-2] + 8,0);
    }
    else if (piVar3 != &DAT_008f9ce8) {
      *piVar3 = iVar2 + -1;
      if (iVar2 == 0) goto LAB_005661f4;
    }
  }
  if (local_24 != &DAT_008f9cf4) {
    piVar3 = local_24 + -3;
    iVar2 = *piVar3;
    if (iVar2 == -1) {
LAB_00566238:
      fn_001008c4(local_24 + -3,local_24[-2] + 8,0);
    }
    else if (piVar3 != &DAT_008f9ce8) {
      *piVar3 = iVar2 + -1;
      if (iVar2 == 0) goto LAB_00566238;
    }
  }
  if (local_28 == &DAT_008f9cf4) goto LAB_00566294;
  piVar3 = local_28 + -3;
  iVar2 = *piVar3;
  if (iVar2 != -1) {
    if (piVar3 == &DAT_008f9ce8) goto LAB_00566294;
    *piVar3 = iVar2 + -1;
    if (iVar2 != 0) goto LAB_00566294;
  }
  fn_001008c4(local_28 + -3,local_28[-2] + 8,0);
LAB_00566294:
  fn_005ab5a0(param_1);
  iVar2 = 0;
  do {
    uVar1 = fn_005ab794(param_1,iVar2);
    fn_0031b78c(param_1,iVar2,0,uVar1);
    uVar1 = fn_005ab530(param_1,iVar2);
    uVar1 = fn_005ab8b0(param_1,iVar2,uVar1);
    fn_0031b78c(param_1,iVar2,4,uVar1);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  fn_0025f3f4(*(undefined4 *)(param_1 + 0xe8),0);
  fn_00689930(param_1,0xe1,0);
  return 1;
}



void fn_00565728(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  uVar1 = fn_00311508(*(undefined4 *)(*(int *)(param_1 + 0x100) + 0x2c));
  uVar2 = fn_0022f750(DAT_00898a4c);
  uVar3 = fn_0022f750(DAT_00898a50);
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  fn_00101a50(&local_20,10,L"%ls%d%ls",uVar2,uVar1,uVar3);
  fn_00182810(*(undefined4 *)(param_1 + 0x108),&local_20);
  return;
}



void fn_00565590(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar10;
  int *piVar9;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  iVar1 = fn_005828a4();
  uVar8 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = fn_002e3e9c(*(undefined4 *)(param_1 + 0xb4),*(undefined4 *)(iVar1 + 0x10),uVar8);
  piVar5 = *(int **)(param_1 + 0x10c);
  if (*(int **)(param_1 + 0x110) != piVar5) {
    do {
      if (*piVar5 == iVar1) {
        piVar6 = *(int **)(param_1 + 0x110);
        if (*(int **)(param_1 + 0x10c) != piVar6) {
          piVar9 = piVar5 + 1;
          if (piVar6 != piVar9) {
            piVar2 = piVar5;
            if (piVar6 < piVar9) {
              do {
                piVar10 = piVar9 + 1;
                *piVar2 = *piVar9;
                piVar2 = piVar2 + 1;
                piVar9 = piVar10;
              } while (piVar10 != piVar6);
            }
            else {
              iVar7 = (int)piVar6 - (int)piVar9;
              if (0 < iVar7) {
                piVar6 = piVar5;
                piVar2 = piVar5 + -1;
                if (iVar7 * 0x20000000 < 0) {
                  *piVar5 = *piVar9;
                  piVar6 = piVar9;
                  piVar2 = piVar5;
                }
                for (iVar7 = iVar7 >> 3; iVar7 != 0; iVar7 = iVar7 + -1) {
                  piVar2[1] = piVar6[1];
                  piVar6 = piVar6 + 2;
                  piVar2 = piVar2 + 2;
                  *piVar2 = *piVar6;
                }
              }
            }
          }
          *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x110) + -4;
        }
        piVar5 = piVar5 + -1;
      }
      piVar5 = piVar5 + 1;
    } while (*(int **)(param_1 + 0x110) != piVar5);
  }
  uVar8 = fn_00346ed0(*(undefined4 *)(param_1 + 0xb4),uVar8);
  fn_002b325c(uVar8,0xffffffff);
  fn_002b0bcc(*(undefined4 *)(*(int *)(param_1 + 0x100) + 0x2c),0xffffffff);
  uVar8 = fn_00311508(*(undefined4 *)(*(int *)(param_1 + 0x100) + 0x2c));
  uVar3 = fn_0022f750(DAT_00898a4c);
  uVar4 = fn_0022f750(DAT_00898a50);
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  fn_00101a50(&local_28,10,L"%ls%d%ls",uVar3,uVar8,uVar4);
  fn_00182810(*(undefined4 *)(param_1 + 0x108),&local_28);
  fn_00582f2c(param_1);
  return;
}



void fn_005651b0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  iVar1 = fn_005828a4();
  uVar12 = *(undefined4 *)(iVar1 + 0xc);
  uVar2 = fn_002e3e9c(*(undefined4 *)(param_1 + 0xb4),*(undefined4 *)(iVar1 + 0x10),uVar12);
  puVar10 = *(undefined4 **)(param_1 + 0x110);
  puVar11 = (uint *)(param_1 + 0x10c);
  if (puVar10 == *(undefined4 **)(param_1 + 0x114)) {
    uVar6 = (int)((int)puVar10 - *puVar11) >> 2;
    if (uVar6 < (uint)((int)((int)*(undefined4 **)(param_1 + 0x114) - *puVar11) >> 2)) {
      *(undefined4 **)(param_1 + 0x110) = puVar10 + 1;
      if (puVar10 != (undefined4 *)0x0) {
        *puVar10 = puVar10[-1];
      }
      puVar4 = puVar10 + -1;
      puVar8 = puVar10;
      if (puVar10 < puVar4) {
        iVar1 = (int)puVar4 - (int)puVar10;
        if (0 < iVar1) {
          if (iVar1 * 0x20000000 < 0) {
            puVar4 = puVar10 + -2;
            puVar8 = puVar10 + -1;
            *puVar8 = *puVar4;
          }
          for (iVar1 = iVar1 >> 3; iVar1 != 0; iVar1 = iVar1 + -1) {
            puVar8[-1] = puVar4[-1];
            puVar4 = puVar4 + -2;
            puVar8 = puVar8 + -2;
            *puVar8 = *puVar4;
          }
        }
      }
      else {
        while (puVar10 != puVar4) {
          puVar4 = puVar4 + -1;
          puVar8[-1] = *puVar4;
          puVar8 = puVar8 + -1;
        }
      }
      *puVar10 = uVar2;
    }
    else {
      uVar13 = uVar6 + (uVar6 >> 1) + (uVar6 >> 3);
      if (uVar13 < uVar6 + 0x20) {
        uVar13 = uVar6 + 0x20;
      }
      puVar3 = (undefined4 *)fn_00100fc6(uVar13 << 2,0);
      puVar8 = puVar3;
      for (puVar4 = (undefined4 *)*puVar11; puVar4 != puVar10; puVar4 = puVar4 + 1) {
        if (puVar8 != (undefined4 *)0x0) {
          *puVar8 = *puVar4;
        }
        puVar8 = puVar8 + 1;
      }
      puVar4 = (undefined4 *)(((int)puVar10 - *puVar11 & 0xfffffffc) + (int)puVar3);
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = uVar2;
      }
      puVar8 = *(undefined4 **)(param_1 + 0x110);
      puVar4 = (undefined4 *)(((int)puVar10 - *puVar11 & 0xfffffffc) + (int)puVar3);
      for (; puVar10 != puVar8; puVar10 = puVar10 + 1) {
        puVar4 = puVar4 + 1;
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = *puVar10;
        }
      }
      uVar5 = *puVar11;
      uVar9 = *(uint *)(param_1 + 0x110);
      uVar6 = uVar5;
      if (uVar9 < uVar5) {
        do {
          uVar6 = uVar6 + 4;
        } while (uVar6 != uVar9);
      }
      fn_001008c4(uVar5,(int)(*(int *)(param_1 + 0x114) - uVar5) >> 2,0);
      *(undefined4 **)(param_1 + 0x114) = puVar3 + uVar13;
      *(undefined4 **)(param_1 + 0x110) = puVar3 + ((int)(uVar9 - uVar5) >> 2) + 1;
      *puVar11 = (uint)puVar3;
    }
  }
  else {
    *(undefined4 **)(param_1 + 0x110) = puVar10 + 1;
    if (puVar10 != (undefined4 *)0x0) {
      *puVar10 = uVar2;
    }
  }
  uVar2 = fn_00346ed0(*(undefined4 *)(param_1 + 0xb4),uVar12);
  fn_002b325c(uVar2,2);
  fn_002b0bcc(*(undefined4 *)(*(int *)(param_1 + 0x100) + 0x2c),1);
  uVar2 = fn_00311508(*(undefined4 *)(*(int *)(param_1 + 0x100) + 0x2c));
  uVar12 = fn_0022f750(DAT_00898a4c);
  uVar7 = fn_0022f750(DAT_00898a50);
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  fn_00101a50(&local_30,10,L"%ls%d%ls",uVar12,uVar2,uVar7);
  fn_00182810(*(undefined4 *)(param_1 + 0x108),&local_30);
  fn_00582f2c(param_1);
  return;
}


