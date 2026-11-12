#include "0017cbdc_0017d1acbab.h"



undefined4 fn_0017d024(int param_1,int param_2,undefined2 param_3)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  
  fn_00193374();
  iVar1 = fn_00189e18();
  if (iVar1 == 0) {
    fn_00193380();
    return 0;
  }
  puVar2 = *(uint **)(param_1 + (uint)*(ushort *)(param_1 + 0x1322) * 4 + 0x10a4);
  *(undefined2 *)((int)puVar2 + param_2 * 2 + 0x28) = param_3;
  if (param_2 == 0) {
    uVar3 = *puVar2 | 0x100;
  }
  else {
    if (param_2 != 1) goto code_r0x0017d0a0;
    uVar3 = *puVar2 | 0x200;
  }
  *puVar2 = uVar3;
code_r0x0017d0a0:
  fn_00193380();
  return 1;
}



void fn_0017cf6c(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_001711b4();
  *(undefined1 *)(iVar1 + 0xf) = 1;
  do {
    fn_0015def0(iVar1 + 0x40);
    if (*(code **)(iVar1 + 0x28) != (code *)0x0) {
      (**(code **)(iVar1 + 0x28))(*(undefined4 *)(iVar1 + 0x2c));
    }
    fn_00193374();
    iVar2 = fn_00189e18();
    if (iVar2 != 0) {
      fn_0019ea78(&DAT_008ef56c,0,*(undefined4 *)(&DAT_008f08b0 + (uint)DAT_008f08dc * 8));
      fn_0019ea78(&DAT_008ef56c,1,*(undefined4 *)(&DAT_008f08b4 + (uint)DAT_008f08dc * 8));
    }
    fn_00193380();
    coproc_moveto_Data_Synchronization(0);
    fn_0015dfc0(iVar1 + 0x48);
  } while (*(char *)(iVar1 + 0xf) != '\0');
  return;
}


