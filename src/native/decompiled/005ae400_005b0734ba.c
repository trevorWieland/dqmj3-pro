#include "005ae400_005b0734ba.h"



undefined4 fn_005af614(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_1c [2];
  
  uVar3 = 0;
  do {
    uVar1 = *(int *)(param_1 + 0xd4) - *(int *)(param_1 + 0xd0) >> 2;
    if (uVar1 <= uVar3) {
      fn_002ff628(9,&DAT_008c7667,&DAT_008c7667,uVar3,uVar1);
    }
    iVar2 = *(int *)(*(int *)(param_1 + 0xd0) + uVar3 * 4);
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe | 1;
    local_1c[0] = DAT_00892bec;
    uVar1 = *(int *)(param_1 + 0xd4) - *(int *)(param_1 + 0xd0) >> 2;
    if (uVar1 <= uVar3) {
      fn_002ff628(9,&DAT_008c7667,&DAT_008c7667,uVar3,uVar1);
    }
    fn_00688d44(*(undefined4 *)(*(int *)(param_1 + 0xd0) + uVar3 * 4),local_1c);
    uVar1 = *(int *)(param_1 + 0xd4) - *(int *)(param_1 + 0xd0) >> 2;
    if (uVar1 <= uVar3) {
      fn_002ff628(9,&DAT_008c7667,&DAT_008c7667,uVar3,uVar1);
    }
    fn_005ca88c(param_1,*(undefined4 *)(*(int *)(param_1 + 0xd0) + uVar3 * 4),8);
    uVar1 = *(int *)(param_1 + 0xe0) - *(int *)(param_1 + 0xdc) >> 2;
    if (uVar1 <= uVar3) {
      fn_002ff628(9,&DAT_008c7667,&DAT_008c7667,uVar3,uVar1);
    }
    iVar2 = *(int *)(*(int *)(param_1 + 0xdc) + uVar3 * 4);
    uVar3 = uVar3 + 1;
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe;
  } while ((int)uVar3 < 9);
  return 9;
}



void fn_005aebc0(undefined4 param_1)

{
  fn_005ca640();
  fn_0022ccb4(param_1);
  return;
}



void fn_005aeb84(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  *puVar1 = &DAT_00847960;
  *(undefined1 *)(puVar1 + 2) = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  return;
}


