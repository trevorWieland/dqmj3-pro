#include "003dcea4_003ddd18bab.h"



void fn_003dd7e0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xc,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003dd810(iVar1,param_1);
  return;
}



void fn_003dd7a8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003492e4();
  puVar1[7] = 0;
  *puVar1 = &DAT_00831dac;
  *(undefined1 *)(puVar1 + 8) = 0;
  *(undefined1 *)((int)puVar1 + 0x21) = 0;
  return;
}



int fn_003dd794(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x21);
  *(undefined1 *)(param_1 + 0x21) = 0;
  return (int)cVar1;
}


