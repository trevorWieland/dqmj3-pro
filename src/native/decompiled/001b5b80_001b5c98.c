#include "001b5b80_001b5c98.h"



undefined4 fn_001b5c98(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  uint local_20;
  int *local_1c;
  
  iVar2 = fn_00173d40(param_1,*(undefined4 *)(param_1 + 0x34));
  pcVar5 = (char *)(*(int *)(iVar2 + 4) + 0x1c);
  uVar6 = *(uint *)(*(int *)(iVar2 + 4) + 0x14);
  puVar3 = (undefined1 *)fn_001a36d4(*(undefined4 *)(param_1 + 0x8c),uVar6);
  if ((int)uVar6 < 1) {
    uVar4 = 0;
  }
  else {
    uVar4 = uVar6 & 1;
    if (uVar4 == 1) {
      uVar1 = fn_00102b04((int)*pcVar5);
      *puVar3 = uVar1;
    }
  }
  for (; (int)uVar4 < (int)uVar6; uVar4 = uVar4 + 2) {
    uVar1 = fn_00102b04((int)pcVar5[uVar4]);
    puVar3[uVar4] = uVar1;
    uVar1 = fn_00102b04((int)pcVar5[uVar4 + 1]);
    puVar3[uVar4 + 1] = uVar1;
  }
  local_1c = (int *)fn_0019ba68(*(undefined4 *)(param_1 + 0x8c),puVar3,uVar6);
  local_20 = 0x8000010;
  if (local_1c == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    fn_00146590();
  }
  local_1c[1] = local_1c[1] + 1;
  fn_00173d1c(param_1,&local_20);
  if (((local_20 & 0x8000000) != 0) &&
     (iVar2 = local_1c[1], local_1c[1] = iVar2 + -1, iVar2 + -1 == 0)) {
    (**(code **)(*local_1c + 8))();
  }
  return 1;
}



undefined4 fn_001b5b80(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  uint local_20;
  int *local_1c;
  
  iVar2 = fn_00173d40(param_1,*(undefined4 *)(param_1 + 0x34));
  pcVar5 = (char *)(*(int *)(iVar2 + 4) + 0x1c);
  uVar6 = *(uint *)(*(int *)(iVar2 + 4) + 0x14);
  puVar3 = (undefined1 *)fn_001a36d4(*(undefined4 *)(param_1 + 0x8c),uVar6);
  if ((int)uVar6 < 1) {
    uVar4 = 0;
  }
  else {
    uVar4 = uVar6 & 1;
    if (uVar4 == 1) {
      uVar1 = fn_00302340((int)*pcVar5);
      *puVar3 = uVar1;
    }
  }
  for (; (int)uVar4 < (int)uVar6; uVar4 = uVar4 + 2) {
    uVar1 = fn_00302340((int)pcVar5[uVar4]);
    puVar3[uVar4] = uVar1;
    uVar1 = fn_00302340((int)pcVar5[uVar4 + 1]);
    puVar3[uVar4 + 1] = uVar1;
  }
  local_1c = (int *)fn_0019ba68(*(undefined4 *)(param_1 + 0x8c),puVar3,uVar6);
  local_20 = 0x8000010;
  if (local_1c == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    fn_00146590();
  }
  local_1c[1] = local_1c[1] + 1;
  fn_00173d1c(param_1,&local_20);
  if (((local_20 & 0x8000000) != 0) &&
     (iVar2 = local_1c[1], local_1c[1] = iVar2 + -1, iVar2 + -1 == 0)) {
    (**(code **)(*local_1c + 8))();
  }
  return 1;
}


