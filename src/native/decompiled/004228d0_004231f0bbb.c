#include "004228d0_004231f0bbb.h"



void fn_004231f0(int param_1,int param_2,byte param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + param_2 * 8 + 4);
  *(byte *)(iVar1 + 0x44) = param_3 | *(byte *)(iVar1 + 0x44) & 0xfe;
  return;
}



undefined4 * fn_00423144(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)fn_0038f004();
  *puVar1 = &DAT_0083aec0;
  iVar2 = fn_00145b00(0x10,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_003d35c0();
  }
  puVar1[0xd] = uVar3;
  iVar2 = fn_00145b00(0x10,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_003d35c0();
  }
  puVar1[0xe] = uVar3;
  return puVar1;
}


