#include "005f8170_005f90ccba.h"



void fn_005f8f18(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x10,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005f8f48(iVar1,param_1);
  return;
}



void fn_005f8e20(int param_1)

{
  int iVar1;
  undefined1 local_20 [4];
  undefined4 local_1c;
  undefined1 auStack_14 [4];
  float local_10;
  
  iVar1 = fn_006b0d10(*(undefined4 *)(param_1 + 0x14),1);
  if (iVar1 == 0) {
    fn_0021718c(param_1,1,0x3c);
    return;
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    fn_005ae5a4(*(undefined4 *)(param_1 + 0x14));
    local_1c = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x24);
    iVar1 = fn_005ae400(auStack_14,local_20);
    if (iVar1 != 0) {
      local_10 = local_10 + 50.0;
      iVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 0x28))(*(int **)(param_1 + 0x14),auStack_14)
      ;
      if (iVar1 != 0) {
        *(undefined4 *)(param_1 + 0xc) = 1;
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
    }
  }
  return;
}



undefined4 * fn_005f8d44(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0057a7f0();
  *puVar1 = &DAT_0084dda0;
  puVar1[0x39] = &DAT_0084deec;
  *(undefined2 *)((int)puVar1 + 0x126) = 0;
  fn_001ad020(puVar1 + 0x47);
  return puVar1;
}



void fn_005f8cc0(int param_1)

{
  char cVar1;
  int iVar2;
  
  fn_0057a7ec();
  cVar1 = *(char *)(param_1 + 0x10c);
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      iVar2 = fn_00163cbc((int)*(short *)(*(int *)(param_1 + 0x104) + 0x14));
      if (iVar2 == 2) {
        fn_006899f4(param_1,0xde,0);
        return;
      }
      fn_006899f4(param_1,0xdd,0);
      return;
    }
    if (cVar1 == '\x02') {
      fn_006899f4(param_1,0xdb,0);
      return;
    }
  }
  return;
}


