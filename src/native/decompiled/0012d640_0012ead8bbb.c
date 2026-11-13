#include "0012d640_0012ead8bbb.h"



bool fn_0012ead8(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 8);
  do {
    if (puVar2 == (undefined4 *)(param_1 + 8)) {
      puVar2 = (undefined4 *)0x0;
LAB_0012eb04:
      iVar1 = fn_00145aac(puVar2[2]);
      return iVar1 == 1;
    }
    if (puVar2[-4] == param_2) {
      puVar2 = puVar2 + -4;
      goto LAB_0012eb04;
    }
    puVar2 = (undefined4 *)*puVar2;
  } while( true );
}



undefined4 * fn_0012ea60(undefined4 param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  puVar4 = *(undefined4 **)(param_2 + 4);
  while( true ) {
    if (puVar4 == (undefined4 *)(param_2 + 4)) {
      return (undefined4 *)0x0;
    }
    uVar5 = *(uint *)(puVar4[-3] + -4);
    uVar1 = fn_00100b58(param_3);
    uVar2 = *(uint *)(puVar4[-3] + -4);
    if (uVar2 < uVar5) {
      uVar5 = uVar2;
    }
    iVar3 = fn_001006de(puVar4[-3],param_3);
    if (iVar3 == 0 && uVar5 == uVar1) break;
    puVar4 = (undefined4 *)*puVar4;
  }
  return puVar4 + -4;
}


