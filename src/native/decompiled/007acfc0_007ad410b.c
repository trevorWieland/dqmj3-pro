#include "007acfc0_007ad410b.h"



/* WARNING: Removing unreachable block (ram,0x007ad4cc) */

void fn_007ad410(undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 local_78 [4];
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 *puStack_30;
  undefined4 *puStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uVar4 = (int)param_2 - (int)param_1;
  if (0x1c0 < (int)uVar4) {
    if (param_3 != 0) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    iVar1 = (int)((longlong)(int)uVar4 * -0x6db6db6d + ((ulonglong)uVar4 << 0x20) >> 0x20);
    iVar3 = (iVar1 >> 4) - (iVar1 >> 0x1f);
    iVar1 = (iVar3 + -2) / 2;
    uStack_28 = 0;
    puStack_30 = param_1;
    puStack_2c = param_2;
    uStack_24 = param_4;
    while( true ) {
      puVar2 = param_1 + iVar1 * 7;
      local_70 = CONCAT31(((unsigned int)(local_70) >> 8) & 0xffffff,*(undefined1 *)puVar2);
      local_6c = puVar2[1];
      uStack_68 = puVar2[2];
      local_64 = puVar2[3];
      local_60 = puVar2[4];
      local_5c = puVar2[5];
      local_58 = puVar2[6];
      fn_007a0ea8(param_1,iVar1,iVar3,&local_70);
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
    }
    while (0x1c < (int)uVar4) {
      if (param_1 != param_2) {
        uVar5 = param_1[1];
        uVar6 = param_1[2];
        uVar7 = param_1[3];
        uVar8 = param_1[4];
        uVar9 = param_1[5];
        uVar10 = param_1[6];
        local_78[0] = *(undefined1 *)(param_2 + -7);
        local_74 = param_2[-6];
        local_70 = param_2[-5];
        local_6c = param_2[-4];
        uStack_68 = param_2[-3];
        local_64 = param_2[-2];
        local_60 = param_2[-1];
        param_2[-7] = *param_1;
        param_2[-6] = uVar5;
        param_2[-5] = uVar6;
        param_2[-4] = uVar7;
        param_2[-3] = uVar8;
        param_2[-2] = uVar9;
        param_2[-1] = uVar10;
        uVar4 = (int)(param_2 + -7) - (int)param_1;
        iVar1 = (int)((longlong)(int)uVar4 * -0x6db6db6d + ((ulonglong)uVar4 << 0x20) >> 0x20);
        fn_007a0ea8(param_1,0,(iVar1 >> 4) - (iVar1 >> 0x1f),local_78);
      }
      param_2 = param_2 + -7;
      uVar4 = (int)param_2 - (int)param_1;
    }
  }
  return;
}


