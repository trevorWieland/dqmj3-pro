#include "004456a0_00445fc8aa.h"



void fn_00445714(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xa08,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00445780(iVar1,param_1);
  return;
}



void fn_004456d4(int param_1)

{
  if (*(char *)(param_1 + 0x9f4) != '\0') {
    fn_001218d4(DAT_00897800,L"rom:/data/Message/ProfileBgName.mes");
    *(undefined1 *)(param_1 + 0x9f4) = 0;
  }
  fn_003953ec(param_1);
  return;
}



void fn_004456a0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0056a508();
  puVar1[5] = 0;
  *puVar1 = &DAT_0083e5f4;
  puVar1[6] = 0;
  return;
}


