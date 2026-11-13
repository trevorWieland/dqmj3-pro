#include "006f3374_006f37f0bbb.h"



undefined4 fn_006f37f0(short *param_1)

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
            cVar1 = *(char *)((int)param_1 + 0x73);
            if (cVar1 < '\x01') {
              cVar1 = (char)param_1[0x5b];
            }
            if (cVar1 < '\x01') {
              cVar1 = *(char *)((int)param_1 + 0xa3);
              if (cVar1 < '\x01') {
                cVar1 = (char)param_1[0x52];
              }
              if (cVar1 < '\x01') {
                cVar1 = *(char *)((int)param_1 + 0xa5);
                if (cVar1 < '\x01') {
                  cVar1 = (char)param_1[0x53];
                }
                if (cVar1 < '\x01') {
                  cVar1 = *(char *)((int)param_1 + 0xa7);
                  if (cVar1 < '\x01') {
                    cVar1 = (char)param_1[0x54];
                  }
                  if ((cVar1 < '\x01') && (param_1[0x140] == 0)) {
                    return 1;
                  }
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



int fn_006f37a0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  do {
    if (0x21e < (int)*(short *)(param_1 + iVar2 * 2 + 0x284) - 1U) {
      return iVar3;
    }
    iVar1 = fn_00660ba0();
    if (0 < iVar1) {
      iVar3 = iVar3 + 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x4c);
  return iVar3;
}


