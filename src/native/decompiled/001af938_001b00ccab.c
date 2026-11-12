#include "001af938_001b00ccab.h"



undefined1 fn_001afe88(void)

{
  return DAT_008bf50d;
}



void fn_001afe3c(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = fn_001af8e0();
  DAT_008bf5f0 = fn_001afd98(param_1,param_2,(char *)&DAT_001afe6c,uVar1);
  return;
}



void fn_001afddc(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  
  iVar1 = fn_00191f08();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = fn_00192114();
    iVar1 = iVar1 + 4;
  }
  iVar2 = 0;
  iVar3 = 0x14;
  do {
    puVar4 = (undefined2 *)(iVar1 + iVar2 * 8);
    iVar3 = iVar3 + -1;
    *puVar4 = 0;
    puVar4[1] = 0;
    iVar2 = iVar2 + 1;
    *(undefined4 *)(puVar4 + 2) = 0;
  } while (iVar3 != 0);
  *(undefined2 *)(iVar1 + 0xac) = 0;
  *(undefined4 *)(iVar1 + 0xb0) = 0;
  *(undefined4 *)(iVar1 + 0xb4) = 0;
  *(undefined1 *)(iVar1 + 0xa8) = 0;
  *(undefined4 *)(iVar1 + 0xa4) = 0;
  *(undefined4 *)(iVar1 + 0xa0) = 0;
  return;
}


