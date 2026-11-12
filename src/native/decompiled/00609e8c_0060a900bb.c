#include "00609e8c_0060a900bb.h"



void fn_0060a900(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_0060e880();
  fn_0022f584(*(undefined4 *)(&UNK_007d4778 + (uint)*(byte *)(iVar1 + 0xd) * 4 + param_2 * 0x10),0)
  ;
  return;
}



void fn_0060a8c4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00397a0c();
  puVar1[0x39] = 0;
  *puVar1 = &DAT_0084fc00;
  puVar1[0x3a] = 0;
  puVar1[0x3b] = 0;
  return;
}



void fn_0060a6b0(int param_1)

{
  int iVar1;
  short *psVar2;
  undefined4 uVar3;
  short *psVar4;
  short *psVar5;
  uint uVar6;
  bool bVar7;
  short asStack_28 [12];
  
  *(undefined4 *)(param_1 + 0xec) = 3;
  iVar1 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),*(undefined4 *)(param_1 + 0xe8));
  uVar6 = 0;
  psVar2 = (short *)(iVar1 + 4);
  psVar4 = asStack_28;
  do {
    uVar6 = uVar6 + 1;
    psVar5 = psVar4 + 1;
    *psVar4 = *psVar2;
    bVar7 = psVar2[1] == 0;
    psVar2 = psVar2 + 1;
    psVar4 = psVar5;
  } while ((bVar7 || uVar6 < 0xc) && (!bVar7 && uVar6 != 0xb));
  *psVar5 = 0;
  fn_0015b0dc(asStack_28);
  fn_0028a68c(*(undefined4 *)(DAT_00897804 + 0xc),*(undefined4 *)(param_1 + 0xe8),1);
  uVar3 = fn_0022f584((char *)&DAT_0060a78c,0);
  fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar3,1,0,1,1,0,0,1);
  *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x38) = 0;
  fn_00689bd0(param_1,0x48,0);
  return;
}



void fn_0060a5f0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0xec) = 1;
    uVar1 = fn_0022f584((char *)&DAT_0060a338,0);
    fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar1,1,1,1,1,0,0,1);
    *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x38) = 0;
    fn_00689bd0(param_1,0x48,0);
  }
  else if (param_2 == 1) {
    fn_006899f4(param_1,0x53,0);
    *(undefined4 *)(param_1 + 0xec) = 4;
  }
  fn_0068ab44(param_1,0x100094b);
  return;
}


