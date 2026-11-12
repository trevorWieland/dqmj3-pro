#include "00518e24_005193c8.h"



undefined4 fn_005193c8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  *(undefined4 *)(param_1 + 0x5c4) = param_2;
  uVar6 = *(uint *)(param_1 + 0x5c4);
  uVar1 = fn_004ed2e8();
  iVar2 = fn_00656e14(uVar6 << 3,uVar1);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    uVar3 = 0;
    if (uVar6 != 0) {
      do {
        puVar4 = (undefined4 *)(iVar2 + uVar3 * 8);
        if (puVar4 != (undefined4 *)0x0) {
          param_4 = (undefined4 *)0x0;
          *puVar4 = 0;
          puVar4[1] = 0;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar6);
    }
  }
  *(int *)(param_1 + 4) = iVar2;
  uVar6 = *(uint *)(param_1 + 0x5c4);
  uVar1 = fn_004ed2e8();
  iVar2 = fn_00656e14(uVar6 << 3,uVar1);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    uVar3 = 0;
    if (uVar6 != 0) {
      do {
        puVar4 = (undefined4 *)(iVar2 + uVar3 * 8);
        if (puVar4 != (undefined4 *)0x0) {
          param_4 = (undefined4 *)0x0;
          *puVar4 = 0;
          puVar4[1] = 0;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar6);
    }
  }
  *(int *)(param_1 + 8) = iVar2;
  uVar6 = *(uint *)(param_1 + 0x5c4);
  uVar1 = fn_004ed2e8();
  iVar2 = fn_00656e14(uVar6 << 2,uVar1);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    uVar3 = 0;
    if (uVar6 != 0) {
      do {
        puVar4 = (undefined4 *)(iVar2 + uVar3 * 4);
        uVar3 = uVar3 + 1;
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = 0;
        }
      } while (uVar3 < uVar6);
    }
  }
  *(int *)(param_1 + 0xc) = iVar2;
  uVar6 = *(uint *)(param_1 + 0x5c4);
  uVar1 = fn_004ed2e8();
  iVar2 = fn_00656e14(uVar6 << 2,uVar1);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    uVar3 = 0;
    if (uVar6 != 0) {
      do {
        puVar4 = (undefined4 *)(iVar2 + uVar3 * 4);
        uVar3 = uVar3 + 1;
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = 0;
        }
      } while (uVar3 < uVar6);
    }
  }
  *(int *)(param_1 + 0x10) = iVar2;
  uVar3 = 0;
  uVar6 = 0;
  if (*(int *)(param_1 + 0x5c4) != 0) {
    do {
      uVar1 = fn_004ed2e8();
      iVar2 = fn_00656e58(0x596,uVar1,4);
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        uVar6 = 0;
        do {
          puVar5 = (undefined1 *)(iVar2 + uVar6);
          uVar6 = uVar6 + 1;
          if (puVar5 != (undefined1 *)0x0) {
            *puVar5 = 0;
          }
        } while (uVar6 < 0x596);
      }
      *(int *)(*(int *)(param_1 + 0x10) + uVar3 * 4) = iVar2;
      uVar6 = *(uint *)(param_1 + 0x5c4);
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar6);
  }
  uVar1 = fn_004ed2e8();
  iVar2 = fn_00656e14(uVar6 << 2,uVar1);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    uVar3 = 0;
    if (uVar6 != 0) {
      do {
        puVar4 = (undefined4 *)(iVar2 + uVar3 * 4);
        uVar3 = uVar3 + 1;
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = 0;
        }
      } while (uVar3 < uVar6);
    }
  }
  *(int *)(param_1 + 0x14) = iVar2;
  uVar6 = *(uint *)(param_1 + 0x5c4);
  uVar1 = fn_004ed2e8();
  iVar2 = fn_00656e14(uVar6,uVar1);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    uVar3 = 0;
    if (uVar6 != 0) {
      do {
        puVar5 = (undefined1 *)(iVar2 + uVar3);
        uVar3 = uVar3 + 1;
        if (puVar5 != (undefined1 *)0x0) {
          *puVar5 = 0;
        }
      } while (uVar3 < uVar6);
    }
  }
  *(int *)(param_1 + 0x18) = iVar2;
  puVar7 = *(undefined4 **)(param_1 + 0x5c4);
  puVar4 = (undefined4 *)fn_00656df8((int)puVar7 * 0x10 + 8);
  uVar1 = 0;
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0x10;
    puVar4[1] = puVar7;
    uVar1 = fn_00101a1c(puVar4 + 2,fn_0014f590,0x10);
    param_4 = puVar7;
  }
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  uVar6 = *(uint *)(param_1 + 0x5c4);
  uVar1 = fn_004ed2e8();
  iVar2 = fn_00656e14(uVar6 << 2,uVar1);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    if (uVar6 != 0) {
      param_4 = &DAT_008c067c;
    }
    uVar3 = 0;
    if (uVar6 != 0) {
      do {
        puVar4 = (undefined4 *)(iVar2 + uVar3 * 4);
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = *param_4;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar6);
    }
  }
  *(int *)(param_1 + 0x20) = iVar2;
  **(undefined4 **)(param_1 + 0xc) = 0;
  return 0;
}



void fn_00519360(int param_1,int param_2)

{
  if (param_2 - 0x100000U < 0x3ff00000) {
    fn_0017821c(param_1 + 4,param_2,0x4c);
    return;
  }
  return;
}



undefined4 fn_00519324(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 - 0x100000U < 0x3ff00000) {
    fn_0017821c(param_2,param_1 + 4,0x4c);
    uVar1 = 0;
  }
  else {
    uVar1 = 0xe0e14826;
  }
  return uVar1;
}



undefined4 fn_00519260(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  uVar2 = param_2 - 0x100000;
  bVar5 = uVar2 < 0x3ff00000;
  if (bVar5) {
    uVar2 = param_3 - 0x100000;
  }
  if (bVar5 && uVar2 < 0x3ff00000) {
    iVar4 = param_1 + 0x88;
    fn_004edc34(iVar4);
    uVar2 = 0;
    if (*(uint *)(param_1 + 0x84) != 0) {
      do {
        if (*(int *)(param_1 + uVar2 * 4 + 0x54) == param_2) {
          iVar3 = *(int *)(param_1 + 0x50) + uVar2 * 0x4c;
          fn_004edc70(iVar4);
          goto LAB_005192f8;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_1 + 0x84));
    }
    fn_004edc70(iVar4);
    iVar3 = 0;
LAB_005192f8:
    if (iVar3 == 0) {
      uVar1 = 0xd1614828;
    }
    else {
      fn_0017821c(param_3,iVar3,0x4c);
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0xe0e14826;
  }
  return uVar1;
}



void fn_005191c0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return;
  }
  iVar2 = param_1 + 0x88;
  fn_004edc34(iVar2);
  uVar1 = 0;
  if (*(uint *)(param_1 + 0x84) != 0) {
    do {
      if (*(int *)(param_1 + uVar1 * 4 + 0x54) == param_2) {
        *(undefined4 *)(param_1 + uVar1 * 4 + 0x54) = 0;
        fn_004edc70(iVar2);
        return;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x84));
  }
  fn_004edc70(iVar2);
  return;
}



undefined1 * fn_00519124(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar1 = fn_00509470();
  if (iVar1 == 0) {
    puVar2 = &DAT_e0a1482b;
  }
  else {
    iVar1 = fn_00509460(iVar1);
    if (iVar1 == 0) {
      puVar2 = &DAT_e0a14827;
    }
    else if (DAT_008c0674 == 0) {
      puVar3 = (undefined4 *)fn_004ecfe0(0x94);
      iVar1 = 0;
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = &DAT_0085724c;
        puVar3[0x14] = 0;
        puVar3[0x21] = 0;
        iVar4 = fn_004edc74(puVar3 + 0x22,0xffffffff);
        iVar1 = iVar4 + -0x88;
        fn_00301f50(iVar4 + -0x84,0x4c);
      }
      puVar2 = (undefined1 *)0x0;
      DAT_008c0674 = iVar1;
    }
    else {
      puVar2 = &DAT_d8a1482e;
    }
  }
  return puVar2;
}



undefined4 fn_00518e24(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (param_2 < 0xd) {
    *(uint *)(param_1 + 0x84) = param_2;
    uVar1 = fn_004ed2e8(param_1);
    iVar2 = fn_00656e14(param_2 * 0x4c,uVar1);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      uVar4 = 0;
      if (param_2 != 0) {
        do {
          iVar3 = iVar2 + uVar4 * 0x4c;
          if (iVar3 != 0) {
            fn_00301f50(iVar3,0x4c);
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < param_2);
      }
    }
    *(int *)(param_1 + 0x50) = iVar2;
    fn_00301f50(iVar2,*(int *)(param_1 + 0x84) * 0x4c);
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x74) = 0;
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x7c) = 0;
    uVar1 = 0;
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  else {
    uVar1 = 0xe0e14826;
  }
  return uVar1;
}


