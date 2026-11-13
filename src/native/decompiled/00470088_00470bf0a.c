#include "00470088_00470bf0a.h"



void fn_00470310(void)

{
  fn_00470774();
  return;
}



undefined4 fn_00470088(undefined4 param_1,int param_2,int param_3,uint param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  byte local_30 [4];
  byte local_2c [4];
  undefined2 local_28 [2];
  
  if (param_4 < 0x34) {
    uVar8 = *(uint *)(param_2 + 0xc);
    uVar7 = uVar8 + param_4;
    uVar3 = uVar8;
    if (uVar7 <= *(uint *)(*(int *)(param_2 + 8) + 0x10)) {
      do {
        if (uVar7 <= uVar3) {
          *(undefined4 *)(param_3 + 0x9c) = 0;
          *(undefined4 *)(param_3 + 0x94) = 0;
          *(undefined1 *)(param_3 + 0xd4) = 0;
          iVar6 = *(int *)(*(int *)(param_2 + 8) + 0xc);
          iVar2 = *(int *)(*(int *)(param_2 + 8) + 0x18);
          if (param_4 != 0) {
            if (0x34 < param_4) {
              fn_0015ebe4(&DAT_007dd004,0x4f,0xe0000019,0);
              return 0;
            }
            *(uint *)(param_3 + 0x9c) = param_4;
            fn_00301a9c(param_3 + 0xa0,iVar6 + iVar2 + uVar8,param_4);
          }
          return 1;
        }
        local_30[0] = 0;
        local_2c[0] = 0;
        iVar2 = fn_0074a4c8(param_2,local_30);
        if (iVar2 == 0) {
          return 0;
        }
        iVar2 = fn_0074a4c8(param_2,local_2c);
        if (iVar2 == 0) {
          return 0;
        }
        uVar5 = (uint)local_2c[0];
        iVar2 = *(int *)(param_2 + 0xc);
        uVar3 = iVar2 + uVar5;
        if (uVar7 < uVar3) {
          return 0;
        }
        if (local_30[0] == 3) {
          if (uVar5 != 2) {
            return 0;
          }
          iVar2 = fn_0074a598(param_2,local_28);
          if (iVar2 == 0) {
            return 0;
          }
          *(undefined2 *)(param_3 + 0x4c) = local_28[0];
        }
        else if (local_30[0] < 3) {
          if (local_30[0] == 0) {
            if (uVar5 != 4) {
              return 0;
            }
            iVar6 = *(int *)(param_2 + 8);
            if ((uint)(*(int *)(iVar6 + 0x10) - iVar2) < 4) {
              *(undefined1 *)(param_2 + 4) = 1;
              return 0;
            }
            puVar4 = (uint *)(*(int *)(iVar6 + 0x18) + *(int *)(iVar6 + 0xc) + iVar2);
            uVar3 = *puVar4;
            bVar1 = *(byte *)((int)puVar4 + 3);
            *(int *)(param_2 + 0xc) = iVar2 + 4;
            *(uint *)(param_3 + 0x8c) = uVar3 & 0xffffff | (uint)bVar1 << 0x18;
          }
          else if (local_30[0] == 1) {
            if (uVar5 != 0x10) {
              return 0;
            }
            iVar2 = fn_00454b8c(param_2,param_3 + 0x50,0x10);
            if (iVar2 == 0) {
              return 0;
            }
            *(undefined4 *)(param_3 + 0x60) = 0x10;
          }
          else {
            if (local_30[0] != 2) goto LAB_00470158;
            if (uVar5 != 1) {
              return 0;
            }
            iVar2 = fn_0074a4c8(param_2,local_28);
            if (iVar2 == 0) {
              return 0;
            }
            *(undefined1 *)(param_3 + 100) = (undefined1)local_28[0];
          }
        }
        else if (local_30[0] == 4) {
          if (uVar5 != 1) {
            return 0;
          }
          iVar2 = fn_0074a4c8(param_2,local_28);
          if (iVar2 == 0) {
            return 0;
          }
          *(undefined1 *)(param_3 + 0x67) = (undefined1)local_28[0];
        }
        else {
          if (local_30[0] == 0xff) {
            uVar5 = *(uint *)(*(int *)(param_2 + 8) + 0x10);
          }
          else {
LAB_00470158:
            uVar5 = *(uint *)(*(int *)(param_2 + 8) + 0x10);
          }
          if (uVar5 < uVar3) {
            return 0;
          }
          *(uint *)(param_2 + 0xc) = uVar3;
        }
        uVar3 = *(uint *)(param_2 + 0xc);
      } while( true );
    }
  }
  return 0;
}


