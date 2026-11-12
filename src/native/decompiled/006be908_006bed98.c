#include "006be908_006bed98.h"



int fn_006bed98(int *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  short local_b8 [78];
  
  sVar1 = *(short *)(*param_1 + 0x28);
  sVar2 = *(short *)(*param_1 + 0x8a);
  fn_00301f50(local_b8,0x98);
  iVar4 = fn_006bf5ec(param_1,local_b8,0x4c,1,1,1,1,1);
  sVar6 = 0;
  iVar7 = 0;
  if (0 < iVar4) {
    do {
      iVar5 = 0;
      do {
        if (((&DAT_007c41f6)[iVar5] & 0xffff) == (int)local_b8[iVar7]) {
          sVar6 = sVar6 + (short)((uint)(&DAT_007c41f6)[iVar5] >> 0x10);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 10);
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar4);
  }
  if (*(int *)(*param_1 + 0xe0) == 0) {
    sVar3 = 0;
  }
  else {
    sVar3 = fn_00203d1c();
  }
  return (int)(short)(sVar3 + sVar6 + sVar2 + sVar1);
}



bool fn_006becc4(int param_1)

{
  bool bVar1;
  
  bVar1 = *(int *)(param_1 + 0x28) != 0;
  if (bVar1) {
    param_1 = *(int *)(param_1 + 0x2c);
  }
  return bVar1 && param_1 != 0;
}



bool fn_006bec78(int param_1,int param_2)

{
  return (*(uint *)(param_1 + 0x48) & (&DAT_007c68f8)[param_2]) != 0;
}



int fn_006bec1c(int *param_1)

{
  return *param_1 + 0x10;
}



ushort * fn_006bebbc(int param_1,int param_2)

{
  ushort *puVar1;
  ushort uVar2;
  bool bVar3;
  bool bVar4;
  
  if (param_2 == 0) {
    puVar1 = (ushort *)(*(int *)(param_1 + 4) + 8);
  }
  else if (param_2 == 1) {
    puVar1 = (ushort *)(*(int *)(param_1 + 4) + 0xc);
  }
  else {
    puVar1 = (ushort *)0x0;
  }
  uVar2 = *puVar1;
  bVar3 = uVar2 == 0;
  if (bVar3) {
    uVar2 = (ushort)(byte)puVar1[1];
  }
  bVar4 = bVar3 && uVar2 == 0;
  if (bVar3 && uVar2 == 0) {
    puVar1 = (ushort *)(uint)*(byte *)((int)puVar1 + 3);
    bVar4 = puVar1 == (ushort *)0x0;
  }
  if (!bVar4) {
    puVar1 = (ushort *)&DAT_00000001;
  }
  return puVar1;
}



undefined1 fn_006beb70(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 4);
  puVar2 = (ushort *)(iVar3 + 8);
  uVar1 = *(ushort *)(iVar3 + 0xc);
  if ((*puVar2 < uVar1) ||
     ((*puVar2 == uVar1 &&
      ((*(byte *)(iVar3 + 10) < *(byte *)(iVar3 + 0xe) ||
       ((*(byte *)(iVar3 + 10) == *(byte *)(iVar3 + 0xe) &&
        (*(byte *)(iVar3 + 0xb) < *(byte *)(iVar3 + 0xf))))))))) {
    puVar2 = (ushort *)(iVar3 + 0xc);
  }
  return (char)puVar2[1];
}



ushort fn_006beb18(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 4);
  puVar2 = (ushort *)(iVar3 + 8);
  uVar1 = *(ushort *)(iVar3 + 0xc);
  if ((*puVar2 < uVar1) ||
     ((*puVar2 == uVar1 &&
      ((*(byte *)(iVar3 + 10) < *(byte *)(iVar3 + 0xe) ||
       ((*(byte *)(iVar3 + 10) == *(byte *)(iVar3 + 0xe) &&
        (*(byte *)(iVar3 + 0xb) < *(byte *)(iVar3 + 0xf))))))))) {
    puVar2 = (ushort *)(iVar3 + 0xc);
  }
  return *puVar2;
}



undefined1 fn_006beac0(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 4);
  puVar2 = (ushort *)(iVar3 + 8);
  uVar1 = *(ushort *)(iVar3 + 0xc);
  if ((*puVar2 < uVar1) ||
     ((*puVar2 == uVar1 &&
      ((*(byte *)(iVar3 + 10) < *(byte *)(iVar3 + 0xe) ||
       ((*(byte *)(iVar3 + 10) == *(byte *)(iVar3 + 0xe) &&
        (*(byte *)(iVar3 + 0xb) < *(byte *)(iVar3 + 0xf))))))))) {
    puVar2 = (ushort *)(iVar3 + 0xc);
  }
  return *(undefined1 *)((int)puVar2 + 3);
}



uint fn_006bea90(int param_1)

{
  uint uVar1;
  ushort uVar2;
  bool bVar3;
  bool bVar4;
  
  uVar1 = *(uint *)(param_1 + 4);
  uVar2 = *(ushort *)(uVar1 + 0x10);
  bVar3 = uVar2 == 0;
  if (bVar3) {
    uVar2 = (ushort)*(byte *)(uVar1 + 0x12);
  }
  bVar4 = bVar3 && uVar2 == 0;
  if (bVar3 && uVar2 == 0) {
    uVar1 = (uint)*(byte *)(uVar1 + 0x13);
    bVar4 = uVar1 == 0;
  }
  if (!bVar4) {
    uVar1 = 1;
  }
  return uVar1;
}



undefined1 fn_006bea6c(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = *(int *)(param_1 + 4) + 8;
  }
  else if (param_2 == 1) {
    iVar1 = *(int *)(param_1 + 4) + 0xc;
  }
  else {
    iVar1 = 0;
  }
  return *(undefined1 *)(iVar1 + 2);
}



undefined2 fn_006bea48(int param_1,int param_2)

{
  undefined2 *puVar1;
  
  if (param_2 == 0) {
    puVar1 = (undefined2 *)(*(int *)(param_1 + 4) + 8);
  }
  else if (param_2 == 1) {
    puVar1 = (undefined2 *)(*(int *)(param_1 + 4) + 0xc);
  }
  else {
    puVar1 = (undefined2 *)0x0;
  }
  return *puVar1;
}



undefined1 fn_006bea24(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = *(int *)(param_1 + 4) + 8;
  }
  else if (param_2 == 1) {
    iVar1 = *(int *)(param_1 + 4) + 0xc;
  }
  else {
    iVar1 = 0;
  }
  return *(undefined1 *)(iVar1 + 3);
}



undefined4 fn_006be9cc(int param_1)

{
  uint uVar1;
  ushort *puVar2;
  ushort uVar3;
  bool bVar4;
  bool bVar5;
  
  uVar1 = 0;
  while( true ) {
    if ((uVar1 & 0xff) == 0) {
      puVar2 = (ushort *)(*(int *)(param_1 + 4) + 8);
    }
    else if ((uVar1 & 0xff) == 1) {
      puVar2 = (ushort *)(*(int *)(param_1 + 4) + 0xc);
    }
    else {
      puVar2 = (ushort *)0x0;
    }
    uVar3 = *puVar2;
    bVar4 = uVar3 == 0;
    if (bVar4) {
      uVar3 = (ushort)(byte)puVar2[1];
    }
    bVar5 = bVar4 && uVar3 == 0;
    if (bVar4 && uVar3 == 0) {
      bVar5 = *(char *)((int)puVar2 + 3) == '\0';
    }
    if (!bVar5) break;
    uVar1 = uVar1 + 1;
    if (1 < (int)uVar1) {
      return 0;
    }
  }
  return 1;
}



undefined8 fn_006be9c0(int param_1)

{
  return **(undefined8 **)(param_1 + 4);
}



undefined4 fn_006be96c(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar4 = *(undefined4 *)(DAT_00897804 + 0x1c);
  iVar1 = fn_00113ca8();
  if (iVar1 != 0) {
    uVar2 = fn_006b52b0(uVar4);
    uVar3 = fn_00391d58();
    if ((uVar3 <= uVar2) && (uVar2 = fn_006b52c0(uVar4), 4 < uVar2)) {
      return 1;
    }
  }
  return 0;
}



undefined4 fn_006be908(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar4 = 0;
  uVar5 = *(undefined4 *)(DAT_00897804 + 0x1c);
  iVar1 = fn_00113ce4();
  if (iVar1 != 0) {
    uVar2 = fn_006b52b0(uVar5);
    uVar3 = fn_00391d58();
    if ((uVar3 <= uVar2) && (iVar1 = fn_006b52c0(uVar5), iVar1 != 0)) {
      uVar4 = fn_006bc024(*(undefined4 *)(param_1 + 4));
    }
  }
  return uVar4;
}


