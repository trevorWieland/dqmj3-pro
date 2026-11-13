#include "005b8458_005b92d4abab.h"



int fn_005b8878(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_0043f144();
  *puVar1 = &DAT_00848ec8;
  *(undefined1 *)(puVar1 + 4) = 0;
  iVar2 = fn_00101a1c(puVar1 + 5,&LAB_005b86cc,0x18,10);
  *(undefined4 *)(iVar2 + 0xf0) = 0xffffffff;
  *(undefined1 *)(iVar2 + 0xf4) = 0;
  fn_005b8744(iVar2 + -0x14);
  return iVar2 + -0x14;
}


