#include "single_00423218_r.h"


extern undefined4 _local_1c;

/* WARNING: Removing unreachable block (ram,0x00423358) */
/* WARNING: Removing unreachable block (ram,0x004232ec) */

void fn_00423218(int param_1,char *param_2)

{
  int iVar1;
  undefined1 ***pppuVar2;
  undefined1 ***pppuVar3;
  uint uVar4;
  undefined1 ***pppuVar5;
  undefined1 ***pppuVar6;
  uint in_fpscr;
  float fVar7;
  undefined1 **local_28;
  undefined1 *local_24 [2];
  undefined1 local_1c [2];
  undefined1 uStack_1a;
  undefined1 uStack_19;
  undefined1 *local_18;
  undefined1 *local_14 [2];
  
  pppuVar2 = &local_28;
  if (*param_2 != '\0') {
    iVar1 = (int)param_2[1];
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xf0;
    }
    local_18 = (undefined1 *)0x0;
    local_28 = (undefined1 **)0xff;
    fVar7 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
    local_24[0] = (undefined1 *)(int)(fVar7 * 255.0 * 0.004166667);
    if ((int)local_24[0] < 0) {
      pppuVar5 = (undefined1 ***)&local_18;
    }
    else {
      pppuVar5 = (undefined1 ***)local_24;
    }
    if (0xff < (int)*pppuVar5) {
      pppuVar5 = &local_28;
    }
    local_24[0] = (undefined1 *)0x0;
    local_18 = (undefined1 *)0xff;
    local_28 = (undefined1 **)((*(short *)(param_2 + 2) + 0xff) / 2);
    pppuVar6 = (undefined1 ***)local_28;
    if ((int)local_28 < 0) {
      pppuVar6 = (undefined1 ***)local_24;
    }
    if (local_28 < (undefined1 **)0x80000000) {
      pppuVar6 = &local_28;
    }
    if (0xff < (int)*pppuVar6) {
      pppuVar6 = (undefined1 ***)&local_18;
    }
    local_28 = (undefined1 **)((uint)*(byte *)pppuVar6 << 1);
    pppuVar6 = (undefined1 ***)local_28;
    if (local_28 < (undefined1 **)0x80000000) {
      pppuVar6 = &local_28;
    }
    if (0xff < (int)*pppuVar6) {
      pppuVar6 = (undefined1 ***)&local_18;
    }
    local_28 = (undefined1 **)((*(short *)(param_2 + 4) + 0xff) / 2);
    local_14[0] = (undefined1 *)0xff;
    pppuVar3 = (undefined1 ***)local_28;
    if ((int)local_28 < 0) {
      pppuVar3 = (undefined1 ***)local_24;
    }
    if (local_28 < (undefined1 **)0x80000000) {
      pppuVar3 = &local_28;
    }
    if (0xff < (int)*pppuVar3) {
      pppuVar3 = (undefined1 ***)local_14;
    }
    uVar4 = (uint)*(byte *)pppuVar3;
    local_28 = (undefined1 **)(uVar4 * 2);
    if (!(uVar4 * -2 == 0 || uVar4 != 0)) {
      pppuVar2 = (undefined1 ***)local_24;
    }
    local_28 = (undefined1 **)(local_1c + 1);
    if (0xff < (int)*pppuVar2) {
      pppuVar2 = (undefined1 ***)local_14;
    }
    _local_1c = (undefined1 *)0xffffffff;
    local_24[0] = local_1c + 2;
    fn_001c15a8((uint)*pppuVar5 & 0xff,*(ushort *)pppuVar6 & 0xff,*(undefined1 *)pppuVar2,local_1c)
    ;
    _local_1c = (undefined1 *)CONCAT13(0xff,_local_1c);
    iVar1 = 0;
    do {
      local_24[0] = _local_1c;
      (**(code **)(**(int **)(param_1 + 4) + 0x10))(*(int **)(param_1 + 4),iVar1,local_24);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 4);
  }
  return;
}


