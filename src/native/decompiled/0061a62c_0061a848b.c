#include "0061a62c_0061a848b.h"



void fn_0061a848(int param_1,int param_2)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  bVar1 = false;
  iVar3 = 0x4c;
  psVar4 = (short *)(param_1 + 0x284);
  do {
    if (*psVar4 == 0x1ef) {
      bVar1 = true;
    }
    iVar3 = iVar3 + -1;
    psVar4 = psVar4 + 1;
  } while (iVar3 != 0);
  iVar3 = 0;
  do {
    if (bVar1) {
      psVar4 = (short *)(param_2 + iVar3 * 2);
      sVar2 = *psVar4;
      if (sVar2 == 0x61) {
        sVar2 = 0x62;
      }
      *psVar4 = sVar2;
      if (sVar2 == 0x60) {
        sVar2 = 0x61;
      }
      *psVar4 = sVar2;
      if (sVar2 == 0x5f) {
        sVar2 = 0x60;
      }
      *psVar4 = sVar2;
      if (sVar2 == 7) {
        sVar2 = 0x5f;
      }
      *psVar4 = sVar2;
      if (sVar2 == 5) {
        sVar2 = 7;
      }
      *psVar4 = sVar2;
      if (sVar2 == 3) {
        sVar2 = 5;
      }
      *psVar4 = sVar2;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x4c);
  return;
}



void fn_0061a80c(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_006f2f88(param_2 + 0x284,0x1f2);
  if (iVar1 == 0) {
    return;
  }
  fn_00654c58(param_1 + 0x284,0x1f2);
  return;
}


