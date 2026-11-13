#include "005f9c7c_005fad40b.h"



void fn_005fad40(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x168,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005faf48(iVar1,param_1);
  return;
}



void fn_005fac70(void)

{
                    /* WARNING: Subroutine does not return */
  fn_006ba250();
}



undefined4 fn_005fa9ec(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_005baef4();
  fn_005bcf78(param_1,(char *)&DAT_005faa28,(char *)&DAT_005faa14);
  return uVar1;
}



void fn_005fa9b8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  puVar1[0x19] = 0;
  *(undefined1 *)(puVar1 + 0x1a) = 0;
  *puVar1 = &DAT_0084e2b8;
  return;
}



void fn_005fa92c(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0066e158(DAT_00898840);
  if (iVar1 == 0) {
    fn_00321598(*(undefined4 *)(param_1 + 100));
    fn_006899f4(param_1,0xe0,0,1);
    return;
  }
  return;
}



undefined4 * fn_005fa714(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0xe7);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008951c0) {
        return puVar1;
      }
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  return (undefined4 *)0x0;
}


