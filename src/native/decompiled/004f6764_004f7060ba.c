#include "004f6764_004f7060ba.h"



undefined4 fn_004f6d58(int param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30 [2];
  int local_28;
  
  if (*(int *)(DAT_008bf4cc + 0xa4) != 0) {
    bVar1 = *(byte *)(DAT_008bf4e0 + 99);
    uVar7 = (uint)bVar1;
    if ((uVar7 < 0xc) && (*(byte *)(*(int *)(DAT_008bf4cc + 0xa4) + 0x14) == uVar7)) {
      local_48 = 0;
      local_44 = 0;
      local_40 = 0;
      local_3c = 0;
      local_38 = 0;
      local_34 = 0;
      local_28 = *(ushort *)(DAT_008bf4e0 + 0x5e) + 0xc;
      iVar3 = fn_00502254(*(undefined4 *)(DAT_008bf4e0 + 0x20),uVar7,&local_3c,&local_4c,local_30,1
                          );
      uVar2 = local_48;
      if (-1 < iVar3) {
        local_48 = (local_48 & ~((unsigned int)0xff << 24)) | (((unsigned int)(SUB41(uVar2,3)) & 0xff) << 24);
        local_48 = (local_48 & ~((unsigned int)0xffffff << 0)) | ((unsigned int)(CONCAT12((char)*(undefined2 *)(DAT_008bf4e0 + 0x5c),CONCAT11(bVar1,0x49))) & 0xffffff);
        fn_004ed514(&local_44,local_4c);
        fn_004ed514(&local_40,local_30[0]);
        uVar4 = 0;
        do {
          uVar5 = uVar4 & 0xff;
          *(undefined1 *)(param_2 + uVar4) = 0;
          if ((uVar5 != uVar7) && (iVar3 = fn_006d92e4(DAT_008bf4e0,uVar5), iVar3 != 0)) {
            if (uVar7 <= uVar5) {
              uVar5 = uVar5 - 1;
            }
            iVar6 = *(int *)(param_1 + 0x40) + uVar5 * 0x68;
            iVar3 = fn_006db038(iVar6);
            if ((iVar3 != 0) && (iVar3 = fn_00517cf0(iVar6,&local_48,local_28), -1 < iVar3)) {
              if (DAT_008bf4a0 != 0) {
                uVar8 = fn_004eea84(DAT_008bf4a0,7);
                fn_004f15b4((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),
                             *(undefined4 *)(iVar6 + 0x1c),0);
              }
              *(undefined1 *)(param_2 + uVar4) = 1;
            }
          }
          uVar4 = uVar4 + 1;
        } while ((int)uVar4 < 0xc);
        return 1;
      }
    }
  }
  return 0;
}



void fn_004f6c28(int param_1,undefined4 *param_2,undefined1 param_3)

{
  int iVar1;
  undefined4 uStack_24;
  undefined4 local_20 [2];
  
  if (*(int *)(DAT_008bf4cc + 0xa4) - 0x100000U < 0x3ff00000) {
    local_20[0] = *(undefined4 *)(param_1 + 0xc);
    iVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0x18))
                      (*(int **)(param_1 + 0x10),local_20,param_2,5,0);
    if (iVar1 - 0x100000U < 0x3ff00000) {
      **(undefined1 **)(param_1 + 0x4c) = 2;
      *(undefined1 *)(*(int *)(param_1 + 0x4c) + 1) = 0;
      *(undefined1 *)(*(int *)(param_1 + 0x4c) + 2) = 0xff;
      *(undefined1 *)(*(int *)(param_1 + 0x4c) + 3) = 0xff;
      *(undefined1 *)(*(int *)(param_1 + 0x4c) + 4) = param_3;
      fn_001694d4(iVar1,*(undefined4 *)(param_1 + 0x4c));
      iVar1 = fn_0050a490(*(undefined4 *)(param_1 + 0x10));
      if (-1 < iVar1) {
        uStack_24 = *(undefined4 *)(param_1 + 0xc);
        iVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0x18))
                          (*(int **)(param_1 + 0x10),&uStack_24,param_2,5,1);
        if (iVar1 - 0x100000U < 0x3ff00000) {
          fn_001694d4(iVar1,*(undefined4 *)(param_1 + 0x4c));
          fn_0050a490(*(undefined4 *)(param_1 + 0x10));
          return;
        }
      }
    }
    else {
      (**(code **)*param_2)(param_2,*(code **)*param_2,0x80000000,0);
    }
  }
  return;
}


