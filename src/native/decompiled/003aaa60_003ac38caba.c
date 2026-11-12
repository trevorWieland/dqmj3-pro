#include "003aaa60_003ac38caba.h"



undefined4 fn_003ab0a0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = fn_0011c1b4(L"rom:/data/ExtSaveData/break.icn",0,0,0,0,0,0,0,5);
  *(undefined4 *)(param_1 + 0x90) = uVar1;
  while (iVar2 = fn_00145aac(uVar1), iVar2 == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x90);
  }
  fn_003ab988(param_1,DAT_00898b08,0,1,0x1000950,0x1000950);
  fn_0026d2e8(*(undefined4 *)(param_1 + 0x70),1);
  uVar1 = fn_006ba838(*(undefined4 *)(param_1 + 0x98));
  iVar2 = fn_0026d960(*(undefined4 *)(param_1 + 0x70),uVar1);
  uVar1 = fn_006ba860(*(undefined4 *)(param_1 + 0x98));
  iVar3 = fn_0026d960(*(undefined4 *)(param_1 + 0x70),uVar1);
  uVar1 = DAT_00898b0c;
  if (iVar2 == -8 && iVar3 == -8) {
    *(undefined1 *)(param_1 + 0x79) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x3c) = 0x100094b;
    uVar1 = fn_0022f584(uVar1,0);
    fn_0036c140(*(undefined4 *)(param_1 + 0x5c),uVar1);
  }
  else {
    *(undefined1 *)(param_1 + 0x79) = 2;
  }
  fn_0026d6bc(*(undefined4 *)(param_1 + 0x70));
  fn_001d4bc0();
  fn_00692c1c();
  fn_00313ca4();
  return 1;
}


