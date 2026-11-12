#include "003954c8_00395b30a.h"



void fn_003956ec(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xc,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0039571c(iVar1,param_1);
  return;
}



undefined4 * fn_00395634(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_0082b81c;
  if (*(char *)(param_1 + 0xb) != '\0') {
    if (param_1[10] != 0) {
      fn_00289c54();
      if (param_1[10] != 0) {
        fn_00289ca8();
        fn_002feef8();
        param_1[10] = 0;
      }
    }
    fn_004104b4();
    fn_001218d4(DAT_00897800,L"rom:/data/Message/LocationMessage.mes");
    fn_001218d4(DAT_00897800,L"rom:/data/Message/AreaMessage.mes");
    *(undefined1 *)(param_1 + 0xb) = 0;
  }
  if (param_1[10] != 0) {
    fn_00289ca8();
    fn_002feef8();
  }
  return param_1;
}



void fn_00395580(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_0082b81c;
  if (*(char *)(param_1 + 0xb) != '\0') {
    if (param_1[10] != 0) {
      fn_00289c54();
      if (param_1[10] != 0) {
        fn_00289ca8();
        fn_002feef8();
        param_1[10] = 0;
      }
    }
    fn_004104b4();
    fn_001218d4(DAT_00897800,L"rom:/data/Message/LocationMessage.mes");
    fn_001218d4(DAT_00897800,L"rom:/data/Message/AreaMessage.mes");
    *(undefined1 *)(param_1 + 0xb) = 0;
  }
  if (param_1[10] != 0) {
    fn_00289ca8();
    fn_002feef8();
  }
  fn_002feef8(param_1);
  return;
}



void fn_003954c8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x2c) == '\0') {
    uVar1 = fn_00121838(DAT_00897800,L"rom:/data/Message/LocationMessage.mes",1);
    *(undefined4 *)(param_1 + 0x1c) = uVar1;
    uVar1 = fn_00121838(DAT_00897800,L"rom:/data/Message/AreaMessage.mes",1);
    *(undefined4 *)(param_1 + 0x18) = uVar1;
    fn_0041044c();
    if (*(int *)(param_1 + 0x28) == 0) {
      iVar2 = fn_00145b00(4,&DAT_00812c8c);
      iVar3 = 0;
      if (iVar2 != 0) {
        iVar3 = fn_00289c84();
      }
      iVar2 = *(int *)(param_1 + 0x28);
      if (iVar2 != iVar3) {
        if (iVar2 != 0) {
          fn_00289ca8(iVar2);
          fn_002feef8();
        }
        *(int *)(param_1 + 0x28) = iVar3;
      }
      fn_00289bac(*(undefined4 *)(param_1 + 0x28),param_2);
    }
    *(undefined1 *)(param_1 + 0x2c) = 1;
  }
  return;
}


