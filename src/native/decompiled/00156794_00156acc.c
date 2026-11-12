#include "00156794_00156acc.h"



int fn_00156acc(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (*(ushort *)(param_1 + 0x10) != 0) {
    do {
      if (*(short *)(param_1 + 0x14 + iVar1 * 0xc) == 0x7802) {
        iVar2 = param_1 + 0x14 + iVar1 * 0xc;
        iVar1 = 0;
        if (iVar2 != 0) {
          iVar1 = *(int *)(iVar2 + 4);
        }
        if (iVar2 != 0 && iVar1 != 0) {
          return iVar1 + param_1;
        }
        return 0;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)(uint)*(ushort *)(param_1 + 0x10));
  }
  return 0;
}



int fn_00156a60(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar2 = 0;
  if (*(ushort *)(param_1 + 0x10) != 0) {
    while (*(short *)(param_1 + 0x14 + iVar2 * 0xc) != 0x7800) {
      iVar2 = iVar2 + 1;
      if ((int)(uint)*(ushort *)(param_1 + 0x10) <= iVar2) {
        return 0;
      }
    }
    iVar3 = param_1 + 0x14 + iVar2 * 0xc;
    iVar2 = 0;
    if (iVar3 != 0) {
      iVar2 = *(int *)(iVar3 + 4);
    }
    if (iVar3 != 0 && iVar2 != 0) {
      iVar1 = iVar2 + param_1;
    }
  }
  return iVar1;
}



int fn_001569f8(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (*(ushort *)(param_1 + 0x10) != 0) {
    do {
      if (*(short *)(param_1 + 0x14 + iVar1 * 0xc) == 0x7801) {
        iVar2 = param_1 + 0x14 + iVar1 * 0xc;
        iVar1 = 0;
        if (iVar2 != 0) {
          iVar1 = *(int *)(iVar2 + 4);
        }
        if (iVar2 != 0 && iVar1 != 0) {
          return iVar1 + param_1;
        }
        return 0;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)(uint)*(ushort *)(param_1 + 0x10));
  }
  return 0;
}



undefined4 fn_0015697c(int param_1,uint *param_2)

{
  ushort *puVar1;
  undefined4 uVar2;
  uint uVar3;
  
  puVar1 = (ushort *)fn_00166258(*(undefined4 *)(param_1 + 0x3c));
  uVar2 = 0;
  if (puVar1 != (ushort *)0x0) {
    *param_2 = (uint)*puVar1;
    param_2[1] = (uint)puVar1[1];
    param_2[2] = (uint)puVar1[2];
    param_2[3] = (uint)puVar1[3];
    param_2[4] = (uint)puVar1[4];
    param_2[5] = (uint)puVar1[5];
    param_2[6] = (uint)puVar1[6];
    uVar3 = *(uint *)(param_1 + 8);
    if (0x20301ff < uVar3) {
      param_2[7] = (uint)(byte)puVar1[7];
    }
    uVar2 = 1;
    if (uVar3 < 0x2030200) {
      param_2[7] = 1;
    }
  }
  return uVar2;
}



undefined4 fn_0015690c(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = fn_0016600c(*(undefined4 *)(param_1 + 0x3c));
  uVar4 = 0;
  if (iVar2 != 0) {
    iVar3 = fn_001663f0();
    if (iVar3 == 1) {
      iVar2 = fn_001664a4(iVar2);
      uVar4 = fn_00166324();
      *param_3 = uVar4;
      param_3[5] = *(undefined4 *)(iVar2 + 8);
      uVar1 = fn_00166344(iVar2);
      *(undefined1 *)(param_3 + 6) = uVar1;
      uVar1 = fn_0016636c(iVar2);
      *(undefined1 *)((int)param_3 + 0x19) = uVar1;
      fn_001662c4(iVar2,param_3 + 1);
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}



bool fn_001568d0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00166210(*(undefined4 *)(param_1 + 0x3c));
  if (puVar1 != (undefined4 *)0x0) {
    *param_3 = *puVar1;
    param_3[1] = puVar1[1];
    param_3[2] = (int)puVar1 + puVar1[3];
  }
  return puVar1 != (undefined4 *)0x0;
}



undefined4 fn_00156864(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  iVar2 = fn_0016600c(*(undefined4 *)(param_1 + 0x3c));
  uVar4 = 0;
  if (iVar2 != 0) {
    iVar3 = fn_001663f0();
    if (iVar3 == 3) {
      puVar5 = (undefined4 *)fn_00166470(iVar2);
      *param_3 = *puVar5;
      param_3[1] = puVar5[1];
      uVar1 = fn_00166270(puVar5);
      *(undefined1 *)(param_3 + 2) = uVar1;
      iVar2 = fn_00166298(puVar5);
      *(bool *)((int)param_3 + 9) = iVar2 != 0;
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}



bool fn_00156834(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)fn_001661d4(*(undefined4 *)(param_1 + 0x3c));
  if (puVar1 != (undefined4 *)0x0) {
    *param_3 = *puVar1;
    uVar2 = fn_00165fb0();
    param_3[1] = uVar2;
  }
  return puVar1 != (undefined4 *)0x0;
}



undefined4 fn_00156818(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00166264(*(undefined4 *)(*(int *)(param_1 + 4) + 0x3c));
  return *puVar1;
}



bool fn_001567a4(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar2 = (undefined4 *)fn_0016600c(*(undefined4 *)(param_1 + 0x3c));
  if (puVar2 != (undefined4 *)0x0) {
    *param_3 = *puVar2;
    param_3[1] = puVar2[1];
    param_3[4] = (uint)*(byte *)(puVar2 + 2);
    uVar1 = fn_001663a0(puVar2);
    *(undefined1 *)(param_3 + 5) = uVar1;
    uVar1 = fn_001663c4(puVar2);
    *(undefined1 *)((int)param_3 + 0x15) = uVar1;
    uVar3 = fn_0016647c(puVar2);
    param_3[3] = uVar3;
    uVar3 = fn_00166444(puVar2);
    param_3[2] = uVar3;
    uVar1 = fn_00166420(puVar2);
    *(undefined1 *)((int)param_3 + 0x16) = uVar1;
  }
  return puVar2 != (undefined4 *)0x0;
}



undefined4 fn_00156794(int param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x3c);
  uVar5 = 0xffffffff;
  switch(param_2 >> 0x18) {
  default:
    goto switchD_0016605c_caseD_0;
  case 1:
    if (param_2 >> 0x18 != 1) {
      return 0xffffffff;
    }
    puVar2 = (uint *)(iVar1 + *(int *)(iVar1 + 4));
    if (*puVar2 <= (param_2 & 0xffffff)) {
      return 0xffffffff;
    }
    puVar3 = (undefined4 *)((int)puVar2 + puVar2[(param_2 & 0xffffff) * 2 + 2]);
    goto joined_r0x00166160;
  case 2:
    if (param_2 >> 0x18 != 2) {
      return 0xffffffff;
    }
    puVar2 = (uint *)(*(int *)(iVar1 + 0xc) + iVar1);
    if (*puVar2 <= (param_2 & 0xffffff)) {
      return 0xffffffff;
    }
    if ((uint *)((int)puVar2 + puVar2[(param_2 & 0xffffff) * 2 + 2]) == (uint *)0x0) {
      return 0xffffffff;
    }
    uVar4 = *(uint *)((int)puVar2 + puVar2[(param_2 & 0xffffff) * 2 + 2]);
    if (uVar4 >> 0x18 != 1) {
      return 0xffffffff;
    }
    uVar4 = uVar4 & 0xffffff;
    puVar2 = (uint *)(iVar1 + *(int *)(iVar1 + 4));
    if (*puVar2 <= uVar4) {
      return 0xffffffff;
    }
    puVar3 = (undefined4 *)((int)puVar2 + puVar2[uVar4 * 2 + 2]);
    break;
  case 3:
    if (param_2 >> 0x18 != 3) {
      return 0xffffffff;
    }
    puVar2 = (uint *)(iVar1 + *(int *)(iVar1 + 0x14));
    if (*puVar2 <= (param_2 & 0xffffff)) {
      return 0xffffffff;
    }
    puVar3 = (undefined4 *)((int)puVar2 + puVar2[(param_2 & 0xffffff) * 2 + 2]);
    break;
  case 5:
    if (param_2 >> 0x18 != 5) {
      return 0xffffffff;
    }
    puVar2 = (uint *)(iVar1 + *(int *)(iVar1 + 0x1c));
    if (*puVar2 <= (param_2 & 0xffffff)) {
      return 0xffffffff;
    }
    puVar3 = (undefined4 *)((int)puVar2 + puVar2[(param_2 & 0xffffff) * 2 + 2]);
    break;
  case 6:
    if (param_2 >> 0x18 != 6) {
      return 0xffffffff;
    }
    puVar2 = (uint *)(iVar1 + *(int *)(iVar1 + 0x24));
    if (*puVar2 <= (param_2 & 0xffffff)) {
      return 0xffffffff;
    }
    puVar3 = (undefined4 *)((int)puVar2 + puVar2[(param_2 & 0xffffff) * 2 + 2]);
joined_r0x00166160:
    if (puVar3 == (undefined4 *)0x0) {
      return 0xffffffff;
    }
    goto LAB_001660b0;
  }
  if (puVar3 != (undefined4 *)0x0) {
LAB_001660b0:
    uVar5 = *puVar3;
  }
switchD_0016605c_caseD_0:
  return uVar5;
}


