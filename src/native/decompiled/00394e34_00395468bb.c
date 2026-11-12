#include "00394e34_00395468bb.h"



void fn_00395468(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = fn_00145b00(0x30,&DAT_00812c8c);
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)fn_0028e264(iVar1,param_1);
    puVar2[3] = 0;
    puVar2[2] = 0x95;
    *puVar2 = &PTR_LAB_0082b81c;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    *(undefined1 *)(puVar2 + 0xb) = 0;
  }
  return;
}



void fn_003953ec(int param_1)

{
  if (*(char *)(param_1 + 0x2c) != '\0') {
    if (*(int *)(param_1 + 0x28) != 0) {
      fn_00289c54();
      if (*(int *)(param_1 + 0x28) != 0) {
        fn_00289ca8();
        fn_002feef8();
        *(undefined4 *)(param_1 + 0x28) = 0;
      }
    }
    fn_004104b4();
    fn_001218d4(DAT_00897800,L"rom:/data/Message/LocationMessage.mes");
    fn_001218d4(DAT_00897800,L"rom:/data/Message/AreaMessage.mes");
    *(undefined1 *)(param_1 + 0x2c) = 0;
  }
  return;
}



void fn_003953e8(void)

{
  return;
}



void fn_003953b0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  puVar1[2] = 0;
  *puVar1 = &PTR_LAB_0082b804;
  puVar1[3] = 0;
  puVar1[4] = 0;
  return;
}


