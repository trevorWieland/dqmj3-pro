#include "006f447c_006f4938.h"



bool fn_006f4938(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  param_1 = param_1 + ((int)param_2 >> 6) * 8;
  uVar1 = *(uint *)(param_1 + 0x150);
  uVar2 = *(uint *)(param_1 + 0x154);
  uVar3 = fn_00301bb0(1,0,param_2 & 0x3f);
  return ((uint)uVar3 & uVar1) != 0 || ((uint)((ulonglong)uVar3 >> 0x20) & uVar2) != 0;
}



uint fn_006f489c(byte *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)*param_1;
  if (uVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = uVar3 & 1;
    uVar1 = 0;
    if ((*param_1 & 1) != 0) {
      do {
        if (*(short *)(param_1 + uVar1 * 2 + 4) == param_2) {
          return uVar1;
        }
        uVar1 = (uint)(short)((short)uVar1 + 1);
      } while ((int)uVar1 < (int)uVar2);
    }
  }
  if (uVar2 < uVar3) {
    do {
      if (*(short *)(param_1 + uVar2 * 2 + 4) == param_2) {
        return uVar2;
      }
      if (*(short *)(param_1 + uVar2 * 2 + 6) == param_2) {
        return (int)(short)((short)uVar2 + 1);
      }
      uVar2 = (uint)(short)((short)uVar2 + 2);
    } while ((int)uVar2 < (int)uVar3);
  }
  return 0xffffffff;
}



byte fn_006f4888(byte *param_1,uint param_2)

{
  return *param_1 >> (param_2 & 7) & 1;
}



bool fn_006f4868(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  return (*(uint *)(param_1 + 8) & param_3) != 0 || (*(uint *)(param_1 + 0xc) & param_4) != 0;
}



bool fn_006f4850(byte *param_1)

{
  return *param_1 - 3 < 7;
}



undefined4 fn_006f4830(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    uVar1 = 5;
  }
  else if (*(char *)(param_1 + 0x10) == '\x02') {
    uVar1 = 10;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



uint fn_006f4820(int param_1)

{
  return (*(ushort *)(param_1 + 8) & 0x7fff) >> 0xe;
}



void fn_006f4684(int param_1,int param_2,int param_3,int param_4,int param_5,byte *param_6,
                 byte *param_7,undefined1 *param_8,undefined1 *param_9)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  
  iVar5 = 0;
  bVar7 = 1;
  iVar4 = 0;
  bVar6 = 1;
  bVar8 = 1;
  if (param_2 == 0) goto LAB_006f47d8;
  bVar1 = *(byte *)(param_1 + param_2);
  if (param_3 != 0) {
    bVar8 = *(byte *)(param_1 + param_3);
  }
  iVar3 = fn_0069180c(param_2);
  if (iVar3 == 0) {
    iVar4 = fn_0069180c(param_3);
    iVar3 = fn_0069180c(param_2);
    if ((iVar3 == 0) && (iVar3 = fn_0069180c(param_3), iVar3 == 0)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if ((iVar4 == 1 || param_3 == 0) ||
       ((bVar1 <= bVar8 && ((bVar1 != bVar8 || (param_5 <= param_4)))))) {
      iVar4 = param_2;
      bVar6 = bVar1;
      if ((bVar2) || (param_3 == 0)) goto LAB_006f47d8;
      goto LAB_006f47d0;
    }
  }
  else {
    iVar5 = fn_0069180c(param_3);
    iVar3 = fn_0069180c(param_2);
    if ((iVar3 == 0) && (iVar3 = fn_0069180c(param_3), iVar3 == 0)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if ((iVar5 != 0 && param_3 != 0) &&
       ((bVar8 < bVar1 || ((bVar1 == bVar8 && (param_4 < param_5)))))) {
LAB_006f47d0:
      iVar5 = param_3;
      bVar7 = bVar8;
      goto LAB_006f47d8;
    }
    iVar5 = param_2;
    bVar7 = bVar1;
    if ((bVar2) || (param_3 == 0)) goto LAB_006f47d8;
  }
  iVar4 = param_3;
  bVar6 = bVar8;
LAB_006f47d8:
  if (param_6 != (byte *)0x0) {
    *param_6 = bVar7;
  }
  if (param_7 != (byte *)0x0) {
    *param_7 = bVar6;
  }
  if (param_8 != (undefined1 *)0x0) {
    *param_8 = (char)iVar5;
  }
  if (param_9 != (undefined1 *)0x0) {
    *param_9 = (char)iVar4;
  }
  return;
}



int fn_006f4520(int param_1)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  short local_38 [2];
  short local_34 [12];
  
  local_34[4] = *(short *)(param_1 + 0x30) + *(short *)(param_1 + 0x3c) + *(short *)(param_1 + 0x48)
  ;
  psVar3 = local_38;
  if (0 < local_34[4]) {
    psVar3 = local_34 + 4;
  }
  local_38[0] = 1;
  local_34[0] = 9999;
  if (9999 < *psVar3) {
    psVar3 = local_34;
  }
  sVar1 = *psVar3;
  iVar4 = (int)sVar1;
  if ('\0' < *(char *)(param_1 + 0xa9)) {
    iVar4 = fn_00169f1c(iVar4 + 9,10);
    iVar4 = iVar4 * 10;
    local_34[2] = 0;
    local_34[4] = 100;
    local_34[0] = (((short)(iVar4 / 10) + (short)(iVar4 >> 0x1f)) -
                  (short)((longlong)iVar4 * 0x66666667 >> 0x3f)) + 4;
    psVar3 = local_34;
    if (0x7fffffff < (uint)(int)local_34[0]) {
      psVar3 = local_34 + 2;
    }
    if (100 < *psVar3) {
      psVar3 = local_34 + 4;
    }
    iVar4 = (int)(short)(*psVar3 + sVar1);
  }
  if ((int)((uint)*(byte *)(param_1 + 0x406) << 0x1d) < 0) {
    iVar4 = iVar4 * 0x82;
    iVar4 = (int)(short)(((short)(iVar4 / 100) + (short)(iVar4 >> 0x1f)) -
                        (short)((longlong)iVar4 * 0x51eb851f >> 0x3f));
  }
  else if ((int)((uint)*(byte *)(param_1 + 0x406) << 0x1e) < 0) {
    iVar2 = (short)iVar4 * 0x6e;
    iVar4 = (int)(short)(((short)(iVar2 / 100) + ((short)iVar4 >> 0xf)) -
                        (short)((longlong)iVar2 * 0x51eb851f >> 0x3f));
  }
  psVar3 = local_38;
  if (0 < iVar4) {
    psVar3 = local_34 + 4;
  }
  local_34[4] = (short)iVar4;
  local_38[0] = 1;
  local_34[0] = 9999;
  if (9999 < *psVar3) {
    psVar3 = local_34;
  }
  return (int)*psVar3;
}



int fn_006f4518(undefined4 param_1,int param_2)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  short asStack_38 [2];
  short asStack_34 [12];
  
  asStack_34[4] =
       *(short *)(param_2 + 0x30) + *(short *)(param_2 + 0x3c) + *(short *)(param_2 + 0x48);
  psVar3 = asStack_38;
  if (0 < asStack_34[4]) {
    psVar3 = asStack_34 + 4;
  }
  asStack_38[0] = 1;
  asStack_34[0] = 9999;
  if (9999 < *psVar3) {
    psVar3 = asStack_34;
  }
  sVar1 = *psVar3;
  iVar4 = (int)sVar1;
  if ('\0' < *(char *)(param_2 + 0xa9)) {
    iVar4 = fn_00169f1c(iVar4 + 9,10);
    iVar4 = iVar4 * 10;
    asStack_34[2] = 0;
    asStack_34[4] = 100;
    asStack_34[0] =
         (((short)(iVar4 / 10) + (short)(iVar4 >> 0x1f)) -
         (short)((longlong)iVar4 * 0x66666667 >> 0x3f)) + 4;
    psVar3 = asStack_34;
    if (0x7fffffff < (uint)(int)asStack_34[0]) {
      psVar3 = asStack_34 + 2;
    }
    if (100 < *psVar3) {
      psVar3 = asStack_34 + 4;
    }
    iVar4 = (int)(short)(*psVar3 + sVar1);
  }
  if ((int)((uint)*(byte *)(param_2 + 0x406) << 0x1d) < 0) {
    iVar4 = iVar4 * 0x82;
    iVar4 = (int)(short)(((short)(iVar4 / 100) + (short)(iVar4 >> 0x1f)) -
                        (short)((longlong)iVar4 * 0x51eb851f >> 0x3f));
  }
  else if ((int)((uint)*(byte *)(param_2 + 0x406) << 0x1e) < 0) {
    iVar2 = (short)iVar4 * 0x6e;
    iVar4 = (int)(short)(((short)(iVar2 / 100) + ((short)iVar4 >> 0xf)) -
                        (short)((longlong)iVar2 * 0x51eb851f >> 0x3f));
  }
  psVar3 = asStack_38;
  if (0 < iVar4) {
    psVar3 = asStack_34 + 4;
  }
  asStack_34[4] = (short)iVar4;
  asStack_38[0] = 1;
  asStack_34[0] = 9999;
  if (9999 < *psVar3) {
    psVar3 = asStack_34;
  }
  return (int)*psVar3;
}



byte fn_006f44fc(int param_1,uint param_2)

{
  return *(byte *)(param_1 + ((int)param_2 >> 3) + 0x31c) >> (param_2 & 7) & 1;
}



byte fn_006f44ec(short *param_1,int param_2)

{
  return *(byte *)(param_2 + ((int)*param_1 >> 3) + 0x31c) >> ((int)*param_1 & 7U) & 1;
}



undefined4 fn_006f447c(short *param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  
  if (0 < *param_1) {
    cVar1 = *(char *)((int)param_1 + 0x67);
    bVar2 = cVar1 == '\0';
    if (bVar2) {
      cVar1 = (char)param_1[0x3b];
    }
    bVar3 = bVar2 && cVar1 == '\0';
    if (bVar2 && cVar1 == '\0') {
      bVar3 = (char)param_1[0x34] == '\0';
    }
    if (bVar3) {
      cVar1 = *(char *)((int)param_1 + 99);
      if (cVar1 < '\x01') {
        cVar1 = (char)param_1[0x32];
      }
      if (cVar1 < '\x01') {
        cVar1 = (char)param_1[0x31];
        if (cVar1 < '\x01') {
          cVar1 = *(char *)((int)param_1 + 0x61);
        }
        if (cVar1 < '\x01') {
          cVar1 = *(char *)((int)param_1 + 0x75);
          if (cVar1 < '\x01') {
            cVar1 = *(char *)((int)param_1 + 0x87);
          }
          if (cVar1 < '\x01') {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}


