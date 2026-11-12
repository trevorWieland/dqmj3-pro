#include "0032b0e0_0032b758.h"



void fn_0032b758(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  undefined4 local_40;
  undefined4 uStack_3c;
  uint local_38;
  uint local_34 [2];
  uint local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  uint local_20 [2];
  
  fn_006c4a90(&local_28);
  local_40 = local_28;
  uStack_3c = uStack_24;
  uVar1 = fn_0011a314(param_1 + 0x70);
  uVar2 = fn_0011a3c4(param_1 + 0x70);
  uVar3 = fn_0011a36c(param_1 + 0x70);
  iVar4 = fn_00114150(uVar3,uVar2,uVar1);
  uVar1 = fn_0011a314(&local_40);
  uVar2 = fn_0011a3c4(&local_40);
  uVar3 = fn_0011a36c(&local_40);
  iVar5 = fn_00114150(uVar3,uVar2,uVar1);
  puVar7 = &local_2c;
  if (iVar4 - iVar5 < 0) {
    puVar7 = local_20;
  }
  local_2c = iVar4 - iVar5;
  local_20[0] = 0;
  uVar6 = *puVar7;
  iVar5 = (int)((longlong)(int)uVar6 * -0x6db6db6d + ((ulonglong)uVar6 << 0x20) >> 0x20);
  iVar4 = fn_00163868(2);
  local_2c = iVar4 + (uVar6 + ((iVar5 >> 2) - (iVar5 >> 0x1f)) * -7) * 2;
  local_38 = 0;
  iVar4 = fn_006c4a64(param_2);
  local_34[0] = iVar4 - 1;
  if ((int)local_34[0] < (int)local_38) {
                    /* WARNING: Subroutine does not return */
    fn_00146590();
  }
  puVar7 = &local_2c;
  if ((int)local_2c < (int)local_38) {
    puVar7 = &local_38;
  }
  if ((int)local_34[0] < (int)*puVar7) {
    puVar7 = local_34;
  }
  fn_006c4a7c(param_2,*puVar7);
  return;
}



void fn_0032b420(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  
  fn_002c3e78();
  iVar4 = 0;
  do {
    if ((iVar4 == 5) && (iVar1 = fn_00292f20(), *(char *)(iVar1 + 0xad1) != '\0')) {
      pcVar2 = (char *)&DAT_006c0af4;
    }
    else {
      pcVar2 = (char *)(&DAT_008967f0)[iVar4];
    }
    uVar3 = fn_0022f584(pcVar2,0);
    fn_0031b78c(param_1,iVar4,0,uVar3);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 6);
  return;
}



void fn_0032b0e0(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((char)param_1[0x2e] == '\0') {
    iVar1 = fn_006ada74(DAT_00897820);
    if ((iVar1 != 0 && param_2 != 5) ||
       (iVar1 = fn_00292f20(), *(char *)(iVar1 + 0xad2) != '\0' && param_2 != 2)) {
      fn_0068ab44(param_1,0x100094d);
      return;
    }
    *(int *)(param_1[0x2c] + 8) = param_2;
    switch(param_2) {
    case 0:
      iVar1 = fn_0032a8e8(param_1);
      if (iVar1 < 1) {
        uVar2 = fn_0022f584((char *)&DAT_0032b370,0);
        fn_0068974c(param_1,uVar2,0,1);
        param_1[0x2f] = 0;
        *(undefined1 *)(param_1 + 0x2e) = 4;
        return;
      }
      fn_0068ab44(param_1,0x100094b);
      fn_006899f4(param_1,0xe4,1);
      *(undefined1 *)(param_1[0x2c] + 0x15) = 1;
      return;
    case 1:
      iVar1 = fn_006b876c(*(undefined4 *)(DAT_00897804 + 0x38));
      if (iVar1 < 1) {
        uVar2 = fn_0022f584((char *)&DAT_0032b394,0);
        fn_0068974c(param_1,uVar2,0,1);
        param_1[0x2f] = 0;
        *(undefined1 *)(param_1 + 0x2e) = 4;
        return;
      }
      fn_0068ab44(param_1,0x100094b);
      fn_006899f4(param_1,0xdc,1);
      *(undefined1 *)(param_1[0x2c] + 0x15) = 1;
      return;
    case 2:
      fn_0068ab44(param_1,0x100094b);
      fn_006899f4(param_1,0xdf,1);
      return;
    case 3:
      iVar1 = fn_002920b8();
      if (iVar1 == 0) {
        uVar2 = fn_0022f584((char *)&DAT_0032b3f8,0);
        fn_0068974c(param_1,uVar2,1);
        param_1[0x2f] = 0;
        *(undefined1 *)(param_1 + 0x2e) = 5;
        return;
      }
      iVar1 = fn_00291e30(0);
      if (iVar1 == 0) {
        uVar2 = fn_0022f584((char *)&DAT_0032b3d8,0);
        fn_0068974c(param_1,uVar2,1);
        param_1[0x2f] = 0;
        *(undefined1 *)(param_1 + 0x2e) = 5;
        return;
      }
      uVar2 = fn_0022f584((char *)&DAT_0032b3b4,0);
      fn_0068974c(param_1,uVar2,0,1);
      param_1[0x2f] = 0;
      *(undefined1 *)(param_1 + 0x2e) = 4;
      return;
    case 4:
      fn_0068ab44(param_1,0x100094b);
      fn_006899f4(param_1,0xee,1);
      return;
    case 5:
                    /* WARNING: Could not recover jumptable at 0x0032b360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x110))(param_1);
      return;
    }
  }
  return;
}


