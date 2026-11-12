#include "006f3374_006f37f0a.h"



uint fn_006f34b4(uint param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  
  cVar1 = *(char *)(param_1 + 0x7d);
  bVar2 = cVar1 == '\0';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0xb9);
  }
  bVar3 = bVar2 && cVar1 == '\0';
  if (bVar2 && cVar1 == '\0') {
    param_1 = (uint)(*(byte *)(param_1 + 0x353) >> 7);
    bVar3 = param_1 == 0;
  }
  if (!bVar3) {
    param_1 = 1;
  }
  return param_1;
}



undefined4 fn_006f3458(int param_1)

{
  char cVar1;
  
  if ((*(byte *)(param_1 + 0x339) >> 1 & 1) == 0) {
    return 0;
  }
  cVar1 = *(char *)(param_1 + 0xa3);
  if (cVar1 < '\x01') {
    cVar1 = *(char *)(param_1 + 0xa4);
  }
  if (cVar1 < '\x01') {
    cVar1 = *(char *)(param_1 + 0xa5);
    if (cVar1 < '\x01') {
      cVar1 = *(char *)(param_1 + 0xa6);
    }
    if (cVar1 < '\x01') {
      cVar1 = *(char *)(param_1 + 0xa7);
      if (cVar1 < '\x01') {
        cVar1 = *(char *)(param_1 + 0xa8);
      }
      if (cVar1 < '\x01') {
        return 0;
      }
    }
  }
  return 1;
}



int fn_006f33f0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  do {
    iVar1 = (int)*(short *)(param_1 + iVar2 * 2 + 0x284);
    if (0x21e < iVar1 - 1U) {
      return iVar3;
    }
    if (iVar1 == param_2) {
      iVar3 = iVar3 + 1;
      iVar1 = fn_00660d3c(param_2);
      if (iVar1 == 0) {
        return iVar3;
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x4c);
  return iVar3;
}



int fn_006f33d4(int param_1)

{
  return (int)*(short *)(&DAT_007d5e44 + *(char *)(param_1 + 0x5d) * 4);
}



int fn_006f3374(int param_1)

{
  short *psVar1;
  short local_10 [2];
  short local_c [4];
  short local_4 [2];
  
  local_4[0] = *(short *)(param_1 + 0x48) + *(short *)(param_1 + 0x30) + *(short *)(param_1 + 0x3c);
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


