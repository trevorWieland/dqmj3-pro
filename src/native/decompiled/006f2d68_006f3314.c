#include "006f2d68_006f3314.h"



int fn_006f3314(int param_1)

{
  short *psVar1;
  short local_10 [2];
  short local_c [4];
  short local_4 [2];
  
  local_4[0] = *(short *)(param_1 + 0x4c) + *(short *)(param_1 + 0x34) + *(short *)(param_1 + 0x40);
  psVar1 = local_10;
  if (0 < local_4[0]) {
    psVar1 = local_4;
  }
  local_10[0] = 1;
  local_c[0] = 9999;
  if (9999 < *psVar1) {
    psVar1 = local_c;
  }
  return (int)*psVar1;
}



int fn_006f3278(int param_1,undefined4 param_2,char param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 1;
  iVar2 = fn_00163a00(param_2);
  if ((iVar2 == 1) && (iVar2 = fn_00163cbc(param_2), iVar2 == 7)) {
    uVar3 = 0;
    do {
      iVar2 = uVar3 * 4;
      iVar1 = uVar3 * 2;
      uVar3 = uVar3 + 1;
      if ((*(byte *)(param_1 + ((int)(short)(&DAT_007d5db4)[iVar1] >> 3) + 0x31c) >>
           ((int)(short)(&DAT_007d5db4)[iVar1] & 7U) & 1) != 0) {
        iVar4 = (int)(char)(&DAT_007d5db6)[iVar2];
      }
    } while (uVar3 < 5);
    iVar2 = fn_00691a3c((int)param_3,param_2,param_4,param_1);
    if (iVar2 != 0) {
      iVar4 = (int)(short)((short)iVar4 + 1);
    }
  }
  return iVar4;
}



undefined4 fn_006f3220(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  while( true ) {
    iVar2 = (int)*(short *)(param_1 + iVar1 * 2 + 0x284);
    if (0x21e < iVar2 - 1U) {
      return 0;
    }
    if ((iVar2 == 0x4b || iVar2 == 0x4c) || (iVar2 == 0x4d || iVar2 == 0x4e)) break;
    iVar1 = iVar1 + 1;
    if (0x4b < iVar1) {
      return 0;
    }
  }
  return 1;
}



undefined4 fn_006f3218(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  while( true ) {
    iVar2 = (int)*(short *)(param_2 + iVar1 * 2 + 0x284);
    if (0x21e < iVar2 - 1U) {
      return 0;
    }
    if ((iVar2 == 0x4b || iVar2 == 0x4c) || (iVar2 == 0x4d || iVar2 == 0x4e)) break;
    iVar1 = iVar1 + 1;
    if (0x4b < iVar1) {
      return 0;
    }
  }
  return 1;
}



undefined4 fn_006f3120(short *param_1)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  
  if ((0 < *param_1) && (*(char *)((int)param_1 + 0x67) == '\0')) {
    cVar2 = (char)param_1[0x3b];
    bVar3 = cVar2 == '\0';
    if (bVar3) {
      cVar2 = (char)param_1[0x34];
    }
    if (bVar3 && cVar2 == '\0') {
      cVar2 = *(char *)((int)param_1 + 99);
      if (cVar2 < '\x01') {
        cVar2 = (char)param_1[0x32];
      }
      if (cVar2 < '\x01') {
        cVar2 = (char)param_1[0x31];
        if (cVar2 < '\x01') {
          cVar2 = *(char *)((int)param_1 + 0x61);
        }
        if (cVar2 < '\x01') {
          cVar2 = *(char *)((int)param_1 + 0x75);
          if (cVar2 < '\x01') {
            cVar2 = *(char *)((int)param_1 + 0x87);
          }
          if (cVar2 < '\x01') {
            uVar1 = 1;
            if (param_1[0x140] != 0) {
              uVar1 = fn_00691e94((int)param_1[0x140]);
            }
            cVar2 = *(char *)((int)param_1 + 0xa3);
            if (cVar2 < '\x01') {
              cVar2 = (char)param_1[0x52];
            }
            if (cVar2 < '\x01') {
              cVar2 = *(char *)((int)param_1 + 0xa5);
              if (cVar2 < '\x01') {
                cVar2 = (char)param_1[0x53];
              }
              if (cVar2 < '\x01') {
                cVar2 = *(char *)((int)param_1 + 0xa7);
                if (cVar2 < '\x01') {
                  cVar2 = (char)param_1[0x54];
                }
                if (cVar2 < '\x01') {
                  return uVar1;
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}



int fn_006f30c0(int param_1)

{
  short *psVar1;
  short local_10 [2];
  short local_c [4];
  short local_4 [2];
  
  local_4[0] = *(short *)(param_1 + 0x4e) + *(short *)(param_1 + 0x36) + *(short *)(param_1 + 0x42);
  psVar1 = local_10;
  if (0 < local_4[0]) {
    psVar1 = local_4;
  }
  local_10[0] = 1;
  local_c[0] = 9999;
  if (9999 < *psVar1) {
    psVar1 = local_c;
  }
  return (int)*psVar1;
}



int fn_006f3068(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0;
  do {
    if (0x21e < (int)*(short *)(param_1 + iVar2 * 2 + 0x284) - 1U) {
      return iVar1;
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 1;
  } while (iVar2 < 0x4c);
  return iVar1;
}



byte fn_006f2f88(int param_1,uint param_2)

{
  return *(byte *)(param_1 + ((int)param_2 >> 3) + 0xdc) >> (param_2 & 7) & 1;
}



byte fn_006f2f70(int param_1,uint param_2)

{
  return *(byte *)(param_1 + ((int)param_2 >> 3) + 0x98) >> (param_2 & 7) & 1;
}



undefined4 fn_006f2e14(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  
  if ('\0' < *(char *)(param_3 + 0x5c)) {
    return 0;
  }
  iVar2 = fn_006921f4(param_2);
  if (iVar2 == 0) {
    iVar2 = fn_006923ac(param_2);
    if (iVar2 == 0) {
      iVar2 = fn_00692158(param_2);
      if (iVar2 == 0) {
        iVar2 = fn_006924a0(param_2);
        if (iVar2 == 0) {
          iVar2 = fn_00692474(param_2);
          if (iVar2 == 0) goto LAB_006f2f40;
          iVar2 = fn_006f34d4(param_4);
          if (iVar2 != 0) {
            return 1;
          }
          cVar1 = *(char *)(param_4 + 0x7f);
        }
        else {
          iVar2 = fn_006f3500(param_4);
          if (iVar2 != 0) {
            return 1;
          }
          cVar1 = *(char *)(param_4 + 0x7e);
        }
      }
      else {
        iVar2 = fn_006f34b4(param_4);
        if (iVar2 != 0) {
          return 1;
        }
        cVar1 = *(char *)(param_4 + 0x7d);
      }
    }
    else {
      iVar2 = fn_006f31f4(param_4);
      if (iVar2 != 0) {
        return 1;
      }
      cVar1 = *(char *)(param_4 + 0x7c);
    }
  }
  else {
    iVar2 = fn_006f30a8(param_4);
    if (iVar2 != 0) {
      return 1;
    }
    cVar1 = *(char *)(param_4 + 0x7b);
  }
  if ('\0' < cVar1) {
    return 1;
  }
LAB_006f2f40:
  iVar2 = fn_006f1710(param_1,param_2,param_3,param_4);
  if (iVar2 == 7) {
    return 1;
  }
  return 0;
}



byte fn_006f31f4(int param_1)

{
  byte bVar1;
  byte bVar2;
  
  if ((*(char *)(param_1 + 0x7a) != '\0') ||
     (bVar1 = *(byte *)(param_1 + 0x32f) >> 6, bVar2 = bVar1 & 1, (bVar1 & 1) != 0)) {
    bVar2 = 1;
  }
  return bVar2;
}



uint fn_006f30a8(uint param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (*(char *)(param_1 + 0x79) == '\0') {
    param_1 = (uint)(*(byte *)(param_1 + 0x32f) >> 7);
    bVar1 = param_1 == 0;
  }
  if (!bVar1) {
    param_1 = 1;
  }
  return param_1;
}



undefined4 fn_006f2df8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_0061be08((int)*(char *)(param_1 + 4));
  if (iVar1 == 0) {
    uVar2 = 0x18;
  }
  else {
    uVar2 = 0x14;
  }
  return uVar2;
}



int fn_006f2d68(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar4 = 0;
  do {
    if (param_3 <= param_2) {
      return iVar5;
    }
    iVar1 = fn_006f14a4(param_1,param_2);
    if ((iVar1 != 0) && (iVar2 = fn_006f3f24(), iVar2 == 0)) {
      if (iVar4 != 0) {
        iVar2 = fn_006f4044(iVar4);
        iVar3 = fn_006f4044(iVar1);
        if (iVar3 <= iVar2) goto LAB_006f2de0;
      }
      iVar4 = iVar1;
      iVar5 = param_2;
    }
LAB_006f2de0:
    param_2 = (int)(char)((char)param_2 + '\x01');
  } while( true );
}


