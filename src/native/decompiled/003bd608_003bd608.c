#include "003bd608_003bd608.h"



undefined4 fn_003bd608(int *param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 uVar9;
  int local_40 [8];
  
  (**(code **)(*param_1 + 0x118))(param_1,DAT_008942a0,DAT_008942a4,DAT_008942a8);
  fn_0022cdb4(param_1,*(short *)(param_1[0x26] + 0x1c) != 0);
  iVar2 = fn_00178f9c(param_1[0x19],param_1[0x1b]);
  uVar9 = *(undefined4 *)(iVar2 + 0x10);
  uVar3 = fn_00689220(iVar2,(char *)&DAT_003bd9f0);
  iVar2 = fn_00145b00(0xd4,&DAT_00812c8c);
  piVar4 = (int *)0x0;
  if (iVar2 != 0) {
    local_40[0] = param_1[0x12];
    piVar4 = (int *)fn_002b44c0(iVar2,param_1[1],uVar3,1);
  }
  piVar6 = (int *)param_1[0x2a];
  if (piVar6 != piVar4) {
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 4))(piVar6);
    }
    param_1[0x2a] = (int)piVar4;
  }
  (**(code **)(*(int *)param_1[0x2a] + 0x10))();
  iVar2 = fn_0068897c(uVar9,(char *)&DAT_003bd9fc);
  param_1[0x2b] = iVar2;
  iVar2 = fn_0068897c(uVar9,(char *)&DAT_003bda08);
  param_1[0x2c] = iVar2;
  iVar2 = fn_0068897c(uVar9,(char *)&DAT_003bda14);
  param_1[0x2d] = iVar2;
  iVar2 = fn_0068897c(uVar9,(char *)&DAT_003bda28);
  param_1[0x2e] = iVar2;
  iVar2 = fn_0068897c(uVar9,(char *)&DAT_003bda3c);
  param_1[0x2f] = iVar2;
  iVar2 = fn_0068897c(uVar9,(char *)&DAT_003bda50);
  param_1[0x30] = iVar2;
  iVar2 = fn_0068897c(uVar9,(char *)&DAT_003bda60);
  param_1[0x31] = iVar2;
  iVar2 = fn_0068897c(uVar9,(char *)&DAT_003bda70);
  param_1[0x32] = iVar2;
  iVar2 = fn_0068897c(uVar9,(char *)&DAT_003bda80);
  param_1[0x33] = iVar2;
  iVar2 = fn_0068897c(uVar9,(char *)&DAT_003bda98);
  param_1[0x34] = iVar2;
  iVar2 = fn_0068897c(uVar9,(char *)&DAT_003bdab0);
  param_1[0x35] = iVar2;
  iVar2 = fn_0068897c(uVar9,(char *)&DAT_003bdac8);
  param_1[0x36] = iVar2;
  iVar2 = fn_0068897c(uVar9,(char *)&DAT_003bdadc);
  param_1[0x37] = iVar2;
  iVar2 = fn_0068897c(uVar9,(char *)&DAT_003bdaec);
  param_1[0x38] = iVar2;
  iVar2 = fn_0068897c(uVar9,(char *)&DAT_003bdafc);
  param_1[0x39] = iVar2;
  iVar2 = fn_0068897c(uVar9,(char *)&DAT_003bdb14);
  param_1[0x3a] = iVar2;
  iVar2 = fn_0068897c(uVar9,(char *)&DAT_003bdb2c);
  param_1[0x3b] = iVar2;
  iVar2 = fn_0068897c(uVar9,(char *)&DAT_003bdb44);
  param_1[0x3c] = iVar2;
  iVar2 = fn_0068897c(uVar9,(char *)&DAT_003bdb58);
  param_1[0x3d] = iVar2;
  iVar2 = fn_0068897c(uVar9,(char *)&DAT_003bdb68);
  param_1[0x3e] = iVar2;
  iVar2 = fn_0068897c(uVar9,(char *)&DAT_003bdb78);
  param_1[0x3f] = iVar2;
  iVar2 = fn_0068897c(uVar9,(char *)&DAT_003bdb90);
  param_1[0x40] = iVar2;
  iVar2 = fn_0068897c(uVar9,(char *)&DAT_003bdba8);
  param_1[0x41] = iVar2;
  iVar2 = fn_0068897c(uVar9,(char *)&DAT_003bdbc0);
  param_1[0x42] = iVar2;
  iVar2 = fn_0068897c(uVar9,(char *)&DAT_003bdbd4);
  param_1[0x43] = iVar2;
  iVar2 = fn_0068897c(uVar9,(char *)&DAT_003bdbe4);
  param_1[0x44] = iVar2;
  iVar2 = fn_0068897c(uVar9,(char *)&DAT_003bdbf4);
  param_1[0x45] = iVar2;
  uVar7 = 0;
  if (param_1[0x47] - param_1[0x46] >> 2 != 0) {
    do {
      fn_001028d4(local_40,(char *)&DAT_003bdc04,uVar7);
      uVar3 = fn_0068897c(uVar9,local_40);
      *(undefined4 *)(param_1[0x46] + uVar7 * 4) = uVar3;
      uVar7 = uVar7 + 1;
    } while (uVar7 < (uint)(param_1[0x47] - param_1[0x46] >> 2));
  }
  uVar3 = fn_0022f584(*(undefined4 *)(&DAT_008942b0 + (uint)*(byte *)(param_1[0x26] + 0x544) * 4),0
                      );
  fn_0022cd58(param_1,uVar3);
  fn_00688c04(param_1[0x2b],(int)*(short *)(param_1[0x26] + 0x2c),0);
  fn_00688c04(param_1[0x2c],(int)*(short *)(param_1[0x26] + 0x32),0);
  fn_00688c04(param_1[0x2d],(int)*(short *)(param_1[0x26] + 0x36),0);
  fn_00688c04(param_1[0x2e],(int)*(short *)(param_1[0x26] + 0x3a),0);
  fn_00688c04(param_1[0x2f],(int)*(short *)(param_1[0x26] + 0x3e),0);
  fn_00688c04(param_1[0x30],(int)*(short *)(param_1[0x26] + 0x42),0);
  pcVar8 = "";
  if (*(char *)(param_1[0x26] + 0x544) == '\x01') {
    pcVar8 = (char *)fn_00231ca0(0x9e,0);
  }
  fn_00190d50(param_1[0x31],pcVar8);
  fn_00190d50(param_1[0x32],pcVar8);
  fn_00190d50(param_1[0x33],pcVar8);
  fn_00190d50(param_1[0x34],pcVar8);
  fn_00190d50(param_1[0x35],pcVar8);
  fn_00190d50(param_1[0x36],pcVar8);
  fn_003bdd9c(param_1);
  fn_003be34c(param_1);
  uVar3 = fn_0022f60c((int)*(short *)(param_1[0x26] + 0x558));
  fn_00190d50(param_1[0x45],uVar3);
  iVar2 = param_1[0x26];
  uVar7 = 0;
  do {
    iVar5 = param_1[0x46];
    if (uVar7 < *(byte *)(iVar2 + 0x55a)) {
      uVar3 = fn_0022f60c((int)*(short *)(iVar2 + uVar7 * 2 + 0x55c));
      fn_00190d50(*(undefined4 *)(iVar5 + uVar7 * 4),uVar3);
    }
    else {
      fn_00688a74(*(undefined4 *)(iVar5 + uVar7 * 4));
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 3);
  fn_002b427c(param_1[0x2a],(int)*(short *)(param_1[0x26] + 0x1c));
  fn_002b4348(param_1[0x2a],(int)*(char *)(param_1[0x26] + 0x1e));
  *(bool *)(param_1[0x2a] + 0x3d) = *(char *)(param_1[0x26] + 0x26) == 'd';
  iVar2 = param_1[0x2a];
  uVar1 = fn_001f84ac(param_1[0x26] + 0xac);
  *(undefined1 *)(iVar2 + 0x3f) = uVar1;
  *(undefined1 *)(param_1[0x2a] + 0x43) = *(undefined1 *)(param_1[0x26] + 0x28);
  return 1;
}


