#include "006db45c_006dbaec.h"



uint fn_006dbaec(uint param_1)

{
  bool bVar1;
  
  bVar1 = *(char *)(param_1 + 0x20) == '\x05';
  if (bVar1) {
    param_1 = (uint)*(byte *)(param_1 + 0x52);
  }
  if (!bVar1 || param_1 != 1) {
    param_1 = 0;
  }
  return param_1;
}



bool fn_006dbad0(uint param_1)

{
  bool bVar1;
  
  bVar1 = *(char *)(param_1 + 0x20) == '\x05';
  if (bVar1) {
    param_1 = (uint)*(byte *)(param_1 + 0x52);
  }
  return bVar1 && param_1 == 0;
}



undefined4 fn_006dba50(int param_1,ushort *param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(param_1 + 0x40);
  if (uVar5 != 0) {
    uVar2 = uVar5 & 1;
    uVar3 = 0;
    if (uVar2 != 0) {
      do {
        if ((ushort *)(uint)*(ushort *)(param_1 + uVar3 * 2) == param_2) {
          return 0;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar2);
    }
    for (; uVar2 < uVar5; uVar2 = uVar2 + 2) {
      puVar4 = (ushort *)(param_1 + uVar2 * 2);
      uVar1 = *puVar4;
      if ((ushort *)(uint)uVar1 != param_2) {
        puVar4 = (ushort *)(uint)puVar4[1];
      }
      if ((ushort *)(uint)uVar1 == param_2 || puVar4 == param_2) {
        return 0;
      }
    }
  }
  return 1;
}



byte fn_006db9c4(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  
  fn_004edc34();
  uVar1 = 0;
  bVar3 = 0xfd;
  if (*(uint *)(param_1 + 0xf0) != 0) {
    do {
      if (((*(int *)(*(int *)(param_1 + 0xbc) + uVar1 * 0x54 + 0x18) == param_2) &&
          (iVar2 = *(int *)(param_1 + uVar1 * 4 + 0xc0), iVar2 != 0)) &&
         (bVar3 = *(byte *)(iVar2 + 0x14), bVar3 < 0xc)) break;
      uVar1 = uVar1 + 1;
      bVar3 = 0xfd;
    } while (uVar1 < *(uint *)(param_1 + 0xf0));
  }
  fn_004edc70(param_1 + 0xf4);
  return bVar3;
}



undefined4 fn_006db908(int param_1,undefined4 *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == (undefined4 *)0x0 || param_3 == 0) {
    return 0xe0e14826;
  }
  iVar2 = param_1 + 0xf4;
  fn_004edc34(iVar2);
  uVar1 = 0;
  if (*(uint *)(param_1 + 0xf0) != 0) {
    do {
      if (*(undefined4 **)(param_1 + uVar1 * 4 + 0xc0) == param_2) {
        fn_00518140(param_3,*(int *)(param_1 + 0xbc) + uVar1 * 0x54);
        fn_004edc70(iVar2);
        return 0;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0xf0));
  }
  (**(code **)*param_2)(param_2,*(code **)*param_2,0x40080000,0);
  fn_004edc70(iVar2);
  return 0xd1614828;
}



undefined4 fn_006db878(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (0x3fefffff < param_2 - 0x100000U) {
    return 0;
  }
  iVar3 = param_1 + 0xf4;
  fn_004edc34(iVar3);
  uVar1 = 0;
  if (*(uint *)(param_1 + 0xf0) != 0) {
    do {
      if (*(int *)(param_1 + uVar1 * 4 + 0xc0) == param_2) {
        uVar2 = *(undefined4 *)(*(int *)(param_1 + 0xbc) + uVar1 * 0x54 + 0x18);
        fn_004edc70(iVar3);
        return uVar2;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0xf0));
  }
  fn_004edc70(iVar3);
  return 0;
}



undefined4 fn_006db790(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = param_1 + 0xf4;
  fn_004edc34(iVar4);
  if (param_3 == 0) {
    uVar1 = 0;
    if (*(uint *)(param_1 + 0xf0) != 0) {
      do {
        iVar2 = *(int *)(param_1 + 0xbc) + uVar1 * 0x54;
        if ((*(int *)(param_2 + 0x1c) == *(int *)(iVar2 + 0x20)) &&
           (*(short *)(param_2 + 0x10) == *(short *)(iVar2 + 0x14))) goto LAB_006db844;
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)(param_1 + 0xf0));
    }
  }
  else if (param_3 == 1) {
    uVar1 = 0;
    if (*(uint *)(param_1 + 0xf0) != 0) {
      do {
        if (*(int *)(param_2 + 8) == *(int *)(*(int *)(param_1 + 0xbc) + uVar1 * 0x54 + 0xc)) {
LAB_006db844:
          uVar3 = *(undefined4 *)(param_1 + uVar1 * 4 + 0xc0);
          fn_004edc70(iVar4);
          return uVar3;
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)(param_1 + 0xf0));
    }
  }
  fn_004edc70(iVar4);
  return 0;
}



undefined4 fn_006db768(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (param_2 + -0x40000 < (undefined4 *)0x3ff00000) {
    *param_2 = *(undefined4 *)(param_1 + 0x24);
    uVar1 = 0;
  }
  else {
    uVar1 = 0xe0e14826;
  }
  return uVar1;
}



undefined4 fn_006db6b8(int param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  bool bVar3;
  
  puVar2 = (undefined4 *)(param_2 + -0x100000);
  bVar3 = puVar2 < (undefined4 *)0x3ff00000;
  if (bVar3) {
    puVar2 = param_3 + -0x40000;
  }
  if (!bVar3 || (undefined4 *)0x3fefffff < puVar2) {
    return 0xe0e14826;
  }
  fn_004edc34();
  uVar1 = 0;
  if (*(uint *)(param_1 + 0xf0) != 0) {
    do {
      if (*(int *)(param_1 + uVar1 * 4 + 0xc0) == param_2) {
        *param_3 = *(undefined4 *)(*(int *)(param_1 + 0xbc) + uVar1 * 0x54 + 0x20);
        fn_004edc70(param_1 + 0xf4);
        return 0;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0xf0));
  }
  fn_004edc70(param_1 + 0xf4);
  return 0xd1614828;
}



undefined4 fn_006db5f8(int param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if ((0xb < param_2) || ((undefined4 *)0x3fefffff < param_3 + -0x40000)) {
    return 0xe0e14826;
  }
  iVar3 = param_1 + 0xf4;
  fn_004edc34(iVar3);
  uVar1 = 0;
  if (*(uint *)(param_1 + 0xf0) != 0) {
    do {
      iVar2 = *(int *)(param_1 + uVar1 * 4 + 0xc0);
      if ((iVar2 != 0) && (*(byte *)(iVar2 + 0x14) == param_2)) {
        *param_3 = *(undefined4 *)(*(int *)(param_1 + 0xbc) + uVar1 * 0x54 + 0x20);
        fn_004edc70(iVar3);
        return 0;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0xf0));
  }
  fn_004edc70(iVar3);
  return 0xd1614828;
}



undefined4 fn_006db530(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined *local_30 [5];
  
  fn_004edc34();
  fn_004ed7b8(local_30,param_2 + 8);
  uVar2 = 0;
  if (*(int *)(param_1 + 0xf0) != 0) {
    do {
      iVar1 = fn_006db160(param_2,*(int *)(param_1 + 0xbc) + uVar2 * 0x54);
      if (iVar1 != 0) {
        uVar3 = *(undefined4 *)(param_1 + uVar2 * 4 + 0xc0);
        local_30[0] = &DAT_00856c94;
        fn_004edc70(param_1 + 0xf4);
        return uVar3;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0xf0));
  }
  local_30[0] = &DAT_00856c94;
  fn_004edc70(param_1 + 0xf4);
  return 0;
}



undefined8 fn_006db45c(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar3 = &DAT_008c0630;
  if (*(char *)(param_1 + 0x14) == '\0') {
    if (DAT_008c0630 != 0) {
      puVar3 = (undefined4 *)0x8;
    }
  }
  else {
    puVar3 = (undefined4 *)(uint)*(byte *)(param_1 + 0x15);
    if (puVar3 == (undefined4 *)0x0) {
      if (DAT_008c0630 != 0) {
        puVar3 = (undefined4 *)0x8;
      }
    }
    else {
      cVar1 = *(char *)(param_1 + 0x2c);
      if ((cVar1 == '\0' || cVar1 == '\x04') || cVar1 == '\x05') {
        uVar2 = 1;
        goto LAB_006db51c;
      }
    }
  }
  uVar2 = 0;
LAB_006db51c:
  return CONCAT44(puVar3,uVar2);
}


