#include "0025e2b8_0025e8dcaa.h"



void fn_0025e31c(int param_1,byte param_2)

{
  *(byte *)(param_1 + 0x48) = param_2;
  *(byte *)(*(int *)(param_1 + 0x4c) + 0x44) =
       param_2 | *(byte *)(*(int *)(param_1 + 0x4c) + 0x44) & 0xfe;
  return;
}



void fn_0025e314(int param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x24);
  *(byte *)(iVar1 + 0x48) = param_2;
  iVar1 = *(int *)(iVar1 + 0x4c);
  *(byte *)(iVar1 + 0x44) = param_2 | *(byte *)(iVar1 + 0x44) & 0xfe;
  return;
}



void fn_0025e2b8(int param_1)

{
  int *piVar1;
  int iVar2;
  
  fn_0068ae98();
  iVar2 = 0;
  do {
    if (*(int *)(*(int *)(param_1 + 0x20) + iVar2 * 4) != -1) {
      piVar1 = (int *)fn_001854ac(*(undefined4 *)(param_1 + 0x14));
      (**(code **)(*piVar1 + 0x58))(piVar1,1);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  return;
}


