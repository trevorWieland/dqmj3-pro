#include "00607210_00607ae4aab.h"



undefined4 * fn_006075d8(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)fn_003953b0();
  puVar1[5] = 0;
  *puVar1 = &PTR_LAB_0084f67c;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  piVar2 = (int *)fn_0015ece0(0xc);
  iVar3 = fn_0015ece0(0x78);
  piVar2[2] = iVar3;
  *piVar2 = puVar1[5];
  piVar2[1] = 1;
  puVar1[5] = piVar2;
  iVar3 = piVar2[2];
  puVar1[7] = iVar3;
  puVar1[8] = iVar3 + 0x78;
  puVar1[9] = iVar3;
  puVar1[7] = iVar3 + 0x78;
  *(int *)iVar3 = iVar3;
  *(undefined4 *)(puVar1[9] + 4) = puVar1[9];
  return puVar1;
}


