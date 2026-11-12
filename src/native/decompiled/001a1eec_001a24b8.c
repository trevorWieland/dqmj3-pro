#include "001a1eec_001a24b8.h"



void fn_001a24b8(void)

{
  return;
}



int fn_001a2394(int param_1)

{
  return *(int *)(*(int *)(param_1 + 100) + 4) + 4;
}



int fn_001a2388(int *param_1)

{
  return *param_1 + 0xc;
}



bool fn_001a2338(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = fn_001a2168(*(undefined4 *)(param_1 + 4));
  fn_001a49c8(uVar1,param_4);
  iVar2 = fn_001a49b0();
  if (iVar2 != 0) {
    fn_00301a9c(param_2,iVar2,0x26);
    fn_0019bc50(param_3,iVar2 + 0x26);
  }
  return iVar2 != 0;
}



int fn_001a232c(int param_1)

{
  return param_1 + *(int *)(param_1 + 0x10);
}



int fn_001a22c4(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (*(ushort *)(param_1 + 0x10) != 0) {
    do {
      if (*(short *)(param_1 + 0x14 + iVar1 * 0xc) == 0x4004) {
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



int fn_001a2258(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar2 = 0;
  if (*(ushort *)(param_1 + 0x10) != 0) {
    while (*(short *)(param_1 + 0x14 + iVar2 * 0xc) != 0x4000) {
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



int fn_001a21f0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (*(ushort *)(param_1 + 0x10) != 0) {
    do {
      if (*(short *)(param_1 + 0x14 + iVar1 * 0xc) == 0x5001) {
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



int fn_001a2184(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar2 = 0;
  if (*(ushort *)(param_1 + 0x10) != 0) {
    while (*(short *)(param_1 + 0x14 + iVar2 * 0xc) != 0x5000) {
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



int fn_001a2168(int param_1)

{
  if (*(short *)(param_1 + 0x10) == 0x101) {
    param_1 = param_1 + *(int *)(param_1 + 0x14);
  }
  else {
    param_1 = 0;
  }
  return param_1;
}



int fn_001a2150(short *param_1)

{
  int iVar1;
  
  if (*param_1 == 0x4100) {
    iVar1 = (int)param_1 + *(int *)(param_1 + 2);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



int fn_001a213c(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != 0) {
    iVar1 = iVar1 + *(int *)(iVar1 + 0x10);
  }
  return iVar1;
}



undefined4 fn_001a1fb8(undefined4 param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  char cVar9;
  byte local_28 [4];
  
  uVar5 = 0x14;
  uVar8 = 0x18;
  bVar1 = false;
  local_28[0] = 0xff;
  local_28[1] = 0xff;
  local_28[2] = 0xff;
  local_28[3] = 0xff;
  if (param_2 != 0) {
    uVar5 = 0x10;
    uVar8 = 0x14;
  }
  iVar7 = 0;
  iVar2 = fn_00174828(DAT_008977e4);
  if (uVar5 < uVar8) {
    do {
      iVar6 = iVar2 + uVar5 * 0x418;
      iVar3 = fn_001a46f4((int)*(short *)(iVar6 + -0x4080));
      if (iVar3 != 0) {
        local_28[iVar7] = *(byte *)(iVar6 + -0x4027);
      }
      uVar5 = (uint)(char)((char)uVar5 + '\x01');
      iVar7 = (int)(char)((char)iVar7 + '\x01');
    } while ((int)uVar5 < (int)uVar8);
  }
  if ((local_28[0] != 3) && (local_28[0] == 4)) {
    bVar1 = true;
  }
  cVar9 = local_28[0] != 0xff;
  if ((local_28[1] != '\x03') && (local_28[1] == '\x04')) {
    bVar1 = true;
  }
  if (local_28[1] != -1) {
    cVar9 = cVar9 + '\x01';
  }
  if ((local_28[2] != '\x03') && (local_28[2] == '\x04')) {
    bVar1 = true;
  }
  if (local_28[2] != -1) {
    cVar9 = cVar9 + '\x01';
  }
  if ((local_28[3] != '\x03') && (local_28[3] == '\x04')) {
    bVar1 = true;
  }
  if (local_28[3] != -1) {
    cVar9 = cVar9 + '\x01';
  }
  if (bVar1) {
    uVar4 = 7;
  }
  else if (local_28[3] != '\x03' &&
           (local_28[2] != '\x03' && (local_28[1] != '\x03' && local_28[0] != 3))) {
    if (cVar9 == '\x01') {
      uVar4 = 5;
    }
    else if (cVar9 == '\x02') {
      uVar4 = 2;
    }
    else {
      if (cVar9 != '\x03') {
        return 0;
      }
      uVar4 = 1;
    }
  }
  else if (cVar9 == '\x01') {
    uVar4 = 6;
  }
  else {
    if (cVar9 != '\x02') {
      return 0;
    }
    if (local_28[0] < 2) {
      uVar4 = 3;
    }
    else {
      uVar4 = 4;
    }
  }
  return uVar4;
}



int fn_001a1eec(int param_1,int *param_2,uint *param_3,uint *param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_2 == 0x1000001) {
    uVar3 = 0;
  }
  else {
    if (*param_2 != 0x5000002) {
                    /* WARNING: Subroutine does not return */
      fn_00146590();
    }
    uVar3 = param_2[1];
  }
  if ((int)uVar3 < *(int *)(param_1 + 0x14)) {
    if (((*param_3 & 0x8000000) != 0) &&
       (iVar2 = *(int *)(param_3[1] + 4) + -1, *(int *)(param_3[1] + 4) = iVar2, iVar2 == 0)) {
      (**(code **)(*(int *)param_3[1] + 8))();
    }
    param_3[1] = uVar3;
    *param_3 = 0x5000002;
    cVar1 = *(char *)(param_1 + uVar3 + 0x1c);
    if (((*param_4 & 0x8000000) != 0) &&
       (iVar2 = *(int *)(param_4[1] + 4) + -1, *(int *)(param_4[1] + 4) = iVar2, iVar2 == 0)) {
      (**(code **)(*(int *)param_4[1] + 8))();
    }
    param_4[1] = (int)cVar1;
    iVar2 = uVar3 + 1;
    *param_4 = 0x5000002;
  }
  else {
    iVar2 = -1;
  }
  return iVar2;
}


