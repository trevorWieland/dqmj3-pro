#include "006e2f80_006e35a0.h"



int fn_006e35a0(int param_1,uint param_2)

{
  uint *puVar1;
  
  if (param_2 >> 0x18 == 6) {
    puVar1 = (uint *)(param_1 + *(int *)(param_1 + 0x24));
    if ((param_2 & 0xffffff) < *puVar1) {
      return (int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2];
    }
  }
  return 0;
}



int fn_006e34f0(uint *param_1,uint param_2)

{
  int iVar1;
  
  if ((param_2 < *param_1) && ((short)param_1[param_2 * 2 + 1] == 0x4101)) {
    iVar1 = (int)param_1 + param_1[param_2 * 2 + 2];
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



int fn_006e34d4(int param_1)

{
  if (*(short *)(param_1 + 8) == 0x101) {
    param_1 = param_1 + *(int *)(param_1 + 0xc);
  }
  else {
    param_1 = 0;
  }
  return param_1;
}



undefined4 fn_006e34bc(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_006e3388(param_1,0x4003);
  return *(undefined4 *)(iVar1 + 4);
}



undefined4 fn_006e34a4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_006e3388(param_1,0x4001);
  return *(undefined4 *)(iVar1 + 4);
}



undefined4 fn_006e3490(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_006e3388(param_1,0x4000);
  return *(undefined4 *)(iVar1 + 4);
}



undefined4 fn_006e3478(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_006e3388(param_1,0x4002);
  return *(undefined4 *)(iVar1 + 4);
}



undefined4 fn_006e3464(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_006e3388(param_1,0x4000);
  return *(undefined4 *)(iVar1 + 8);
}



bool fn_006e3448(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_006e3388(param_1,0x4003);
  return iVar1 != 0;
}



bool fn_006e336c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_006e3388(param_1,0x4001);
  return iVar1 != 0;
}



int fn_006e3388(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (uint)*(ushort *)(param_1 + 0x10);
  if (uVar3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar3 & 1;
    iVar2 = 0;
    if ((*(ushort *)(param_1 + 0x10) & 1) != 0) {
      do {
        if (*(ushort *)(param_1 + iVar2 * 0xc + 0x14) == param_2) {
          return param_1 + iVar2 * 0xc + 0x14;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)uVar1);
    }
  }
  if (uVar1 < uVar3) {
    do {
      iVar2 = param_1 + uVar1 * 0xc;
      if (*(ushort *)(iVar2 + 0x14) == param_2) {
        return param_1 + uVar1 * 0xc + 0x14;
      }
      if (*(ushort *)(iVar2 + 0x20) == param_2) {
        return param_1 + uVar1 * 0xc + 0x20;
      }
      uVar1 = uVar1 + 2;
    } while ((int)uVar1 < (int)uVar3);
  }
  return 0;
}



undefined4 fn_006e31a0(int *param_1,byte *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((char)param_1[3] == '\0') {
    iVar5 = 0;
    bVar1 = *(byte *)param_1[1];
    if (1 < bVar1) {
      bVar1 = 3;
    }
    *param_2 = bVar1;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1[1] + 0x14);
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1[1] + 4);
    param_2[1] = *(char *)(param_1[1] + 1) == '\x01';
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1[1] + 8);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_1[1] + 0xc);
    if (*(uint *)(*param_1 + 8) < 0x2010100) {
      uVar2 = *(undefined4 *)(param_1[1] + 8);
    }
    else {
      uVar2 = *(undefined4 *)(param_1[1] + 0x10);
    }
    *(undefined4 *)(param_2 + 0x14) = uVar2;
    for (; iVar5 < *(int *)(param_1[1] + 0x14); iVar5 = iVar5 + 1) {
      if (iVar5 < 2) {
        iVar3 = fn_006e6044(param_1[1],iVar5);
        if (*(int *)(iVar3 + 0xc) != 0) {
          iVar4 = fn_006e602c(iVar3);
          fn_00301a9c(param_2 + iVar5 * 0x30 + 0x1c,iVar4,0x26);
          fn_0019bc50(param_2 + iVar5 * 0x30 + 0x42,iVar4 + 0x26);
        }
        uVar2 = fn_006e6038(iVar3,param_1[2]);
        *(undefined4 *)(param_2 + iVar5 * 0x30 + 0x18) = uVar2;
      }
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 fn_006e3014(int param_1,uint *param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint in_s0;
  
  if (*(char *)(param_1 + 8) == '\0') {
    return 0;
  }
  if ((-1 < param_3) &&
     (piVar2 = (int *)fn_006e5ca4(*(undefined4 *)(param_1 + 4)), param_3 < *piVar2)) {
    iVar3 = fn_006e5c60(*(undefined4 *)(param_1 + 4),param_3);
    if (iVar3 == 0) {
      return 0;
    }
    iVar3 = fn_006e5bac(iVar3,param_4);
    if (iVar3 == 0) {
      return 0;
    }
    puVar4 = (uint *)fn_006e5e74(iVar3,param_5);
    if (puVar4 == (uint *)0x0) {
      return 0;
    }
    uVar10 = *puVar4;
    puVar5 = (uint *)fn_001666c4(*(undefined4 *)(param_1 + 4));
    uVar9 = *puVar5;
    if (uVar10 < uVar9) {
      puVar6 = puVar5 + uVar10 * 2 + 1;
      if (puVar6 != (uint *)0x0) {
        uVar9 = puVar5[uVar10 * 2 + 2];
      }
      if (puVar6 != (uint *)0x0 && uVar9 != 0xffffffff) {
        *param_2 = *puVar6;
        param_2[1] = puVar5[uVar10 * 2 + 2];
        puVar7 = (undefined1 *)fn_006e5d6c(puVar4);
        if (puVar7 == (undefined1 *)0x0) {
          uVar1 = fn_006e5d18(puVar4);
          *(undefined1 *)((int)param_2 + 0x11) = uVar1;
          uVar1 = fn_006e5e4c(puVar4);
          *(undefined1 *)((int)param_2 + 0x12) = uVar1;
          uVar1 = fn_006e5db0(puVar4);
          *(undefined1 *)((int)param_2 + 0x13) = uVar1;
          fn_006e5dd8(puVar4);
          param_2[2] = in_s0;
          uVar1 = fn_006e5d40(puVar4);
          *(undefined1 *)(param_2 + 5) = uVar1;
          uVar1 = fn_006e5cb0(puVar4);
          *(undefined1 *)((int)param_2 + 0x15) = uVar1;
          uVar1 = fn_006e5d84(puVar4);
          *(undefined1 *)((int)param_2 + 0x16) = uVar1;
          uVar8 = fn_006e5cdc(puVar4);
          fn_00176fb0(param_2 + 3,uVar8);
        }
        else {
          *(undefined1 *)((int)param_2 + 0x11) = *puVar7;
          *(undefined1 *)((int)param_2 + 0x12) = puVar7[4];
          *(undefined1 *)((int)param_2 + 0x13) = puVar7[8];
          param_2[2] = *(uint *)(puVar7 + 0xc);
          *(undefined1 *)(param_2 + 5) = puVar7[0x10];
          *(undefined1 *)((int)param_2 + 0x15) = puVar7[0x11];
          *(undefined1 *)((int)param_2 + 0x16) = puVar7[0x12];
          fn_00176fb0(param_2 + 3,puVar7 + 0x20);
        }
        return 1;
      }
    }
  }
  return 0;
}



void fn_006e2fa4(uint *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  bVar1 = false;
  iVar2 = 0;
  uVar3 = 0;
  iVar4 = 2;
  do {
    if (((*param_1 & 1 << (uVar3 & 0xff)) != 0) && (iVar2 = iVar2 + 1, uVar3 == 1)) {
      bVar1 = true;
    }
    iVar4 = iVar4 + -1;
    uVar3 = uVar3 + 1;
  } while (iVar4 != 0);
  if ((bVar1) && (iVar2 != 0)) {
    return;
  }
  return;
}



uint fn_006e2f80(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint local_8 [2];
  
  local_8[0] = param_4;
  iVar1 = fn_00176c24(param_1,local_8,0);
  if (iVar1 == 0) {
    local_8[0] = 0x40;
  }
  else {
    local_8[0] = local_8[0] & 0xff;
  }
  return local_8[0];
}


