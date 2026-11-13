#include "004f6764_004f7060bba.h"



undefined4 fn_004f6eec(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 local_28;
  
  if ((((*(int *)(DAT_008bf4cc + 0xa4) != 0) && (bVar1 = *(byte *)(DAT_008bf4e0 + 99), bVar1 < 0xc))
      && (*(byte *)(*(int *)(DAT_008bf4cc + 0xa4) + 0x14) == bVar1)) &&
     (iVar5 = *(int *)(DAT_008bf4d4 + 100), iVar5 - 0x100000U < 0x3ff00000)) {
    local_28 = param_4;
    iVar2 = fn_006da658(iVar5);
    puVar3 = *(undefined1 **)(param_1 + 0x4c);
    *puVar3 = 0x81;
    puVar3[1] = bVar1;
    puVar3[2] = (char)*(undefined2 *)(DAT_008bf4e0 + 0x5c);
    puVar3[3] = 0;
    fn_004ed514(puVar3 + 4,*(undefined4 *)(iVar5 + 0x24));
    fn_004ed514(puVar3 + 8,*(undefined4 *)(iVar5 + 0x20));
    local_28 = 0;
    iVar5 = fn_006da728(iVar5,puVar3 + 0xc,*(undefined4 *)(param_1 + 0x48),&local_28);
    if (-1 < iVar5) {
      uVar4 = 0;
      if (*(int *)(param_1 + 0x3c) != 0) {
        do {
          iVar5 = fn_006db038(*(int *)(param_1 + 0x40) + uVar4 * 0x68);
          if (((iVar5 != 0) &&
              (iVar5 = fn_00517cf0(*(int *)(param_1 + 0x40) + uVar4 * 0x68,
                                    *(undefined4 *)(param_1 + 0x4c),iVar2 + 0xc), -1 < iVar5)) &&
             (DAT_008bf4a0 != 0)) {
            iVar5 = *(int *)(param_1 + 0x40);
            uVar6 = fn_004eea84(DAT_008bf4a0,7);
            fn_004f15b4((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),
                         *(undefined4 *)(iVar5 + uVar4 * 0x68 + 0x1c),0);
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(uint *)(param_1 + 0x3c));
      }
      return 1;
    }
  }
  return 0;
}


