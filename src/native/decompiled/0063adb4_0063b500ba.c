#include "0063adb4_0063b500ba.h"



uint fn_0063b21c(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_1 + 0x10) + 0x50;
  uVar4 = *(uint *)(*(int *)(param_1 + 0x10) + 0x68);
  if ((int)uVar4 < 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = uVar4 & 1;
    uVar3 = 0;
    if (uVar2 != 0) {
      do {
        if (*(char *)(iVar1 + uVar3 * 3) == param_2) {
          return uVar3;
        }
        uVar3 = (uint)(char)((char)uVar3 + '\x01');
      } while ((int)uVar3 < (int)uVar2);
    }
  }
  while( true ) {
    if ((int)uVar4 <= (int)uVar2) {
      return 0xffffffff;
    }
    if (*(char *)(iVar1 + uVar2 * 3) == param_2) break;
    if (*(char *)(uVar2 * 3 + iVar1 + 3) == param_2) {
      return (int)(char)((char)uVar2 + '\x01');
    }
    uVar2 = (uint)(char)((char)uVar2 + '\x02');
  }
  return uVar2;
}



undefined4 fn_0063b188(undefined4 param_1,int param_2,uint param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint unaff_r5;
  uint uVar4;
  bool bVar5;
  
  iVar1 = (param_4[1] - *param_4) / 0x34;
  if (0 < iVar1) {
    unaff_r5 = 699;
  }
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = *param_4 + iVar3 * 0x34;
      uVar4 = (uint)*(char *)(iVar2 + 5);
      bVar5 = uVar4 == param_3;
      if (bVar5) {
        uVar4 = (uint)*(byte *)(iVar2 + 4);
      }
      if (((bVar5 && uVar4 == 1) && ((int)*(short *)(iVar2 + 0xc) - 1U < unaff_r5)) &&
         (*(short *)(iVar2 + 0xc) == param_2)) {
        return 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return 0;
}


