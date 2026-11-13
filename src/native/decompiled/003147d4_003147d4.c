#include "003147d4_003147d4.h"



/* WARNING: Removing unreachable block (ram,0x0031497c) */

void fn_003147d4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  int iVar5;
  undefined4 in_lr;
  
  *(short *)(param_1 + 7) = (short)param_2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  uVar1 = fn_0020b2bc(param_2);
  *(undefined2 *)((int)param_1 + 0x22) = uVar1;
  *(undefined2 *)((int)param_1 + 0x1e) = uVar1;
  uVar1 = fn_0020b2d8(param_2);
  *(undefined2 *)(param_1 + 9) = uVar1;
  *(undefined2 *)(param_1 + 8) = uVar1;
  uVar1 = fn_0020b058(param_2);
  *(undefined2 *)((int)param_1 + 0x26) = uVar1;
  uVar1 = fn_0020b108(param_2);
  *(undefined2 *)(param_1 + 10) = uVar1;
  uVar1 = fn_0020afdc(param_2);
  *(undefined2 *)((int)param_1 + 0x2a) = uVar1;
  uVar1 = fn_0020ae1c(param_2);
  *(undefined2 *)(param_1 + 0xb) = uVar1;
  *(undefined1 *)((int)param_1 + 0x2e) = 1;
  *(undefined1 *)((int)param_1 + 0x2f) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined2 *)((int)param_1 + 0x3a) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined1 *)((int)param_1 + 0x3d) = 0;
  param_1[0x10] = param_1[0x10] & 0xff0003fc;
  do {
    uVar1 = fn_0020aff8(param_2);
    iVar5 = 1;
    *(undefined2 *)(param_1 + 0x11) = uVar1;
    do {
      iVar2 = fn_0020b248(param_2);
      if (iVar2 < iVar5 + -1) {
        *(undefined2 *)((int)param_1 + iVar5 * 2 + 0x44) = 0;
      }
      else {
        uVar1 = fn_0020b20c(param_2);
        *(undefined2 *)((int)param_1 + iVar5 * 2 + 0x44) = uVar1;
      }
      iVar5 = iVar5 + 1;
      if (8 < iVar5) {
        do {
          uVar1 = fn_0020b2f4(param_2);
          *(undefined2 *)((int)param_1 + 0x56) = uVar1;
          *(undefined2 *)(param_1 + 0x16) = 0;
          iVar5 = 1;
          do {
            iVar2 = iVar5 + 1;
            *(undefined2 *)((int)param_1 + iVar5 * 4 + 0x56) = 0;
            *(undefined2 *)(param_1 + iVar5 + 0x16) = 0;
            if (5 < iVar2) {
              *(undefined2 *)(param_1 + 0x20) = 0;
              *(undefined2 *)((int)param_1 + 0x82) = 0;
              *(undefined2 *)(param_1 + 0x21) = 0;
              *(undefined2 *)((int)param_1 + 0x86) = 0;
              *(undefined2 *)(param_1 + 0x22) = 0;
              *(undefined2 *)((int)param_1 + 0x8a) = 0;
              iVar5 = 0;
              do {
                iVar2 = iVar5 + 1;
                *(undefined2 *)(param_1 + iVar5 * 8 + 0x23) = 0;
                *(undefined4 *)((int)param_1 + iVar5 * 0x20 + 0x8e) = 0;
                *(undefined4 *)((int)param_1 + iVar5 * 0x20 + 0x92) = 0;
                *(undefined4 *)((int)param_1 + iVar5 * 0x20 + 0x96) = 0;
                *(undefined4 *)((int)param_1 + iVar5 * 0x20 + 0x9a) = 0;
                *(undefined4 *)((int)param_1 + iVar5 * 0x20 + 0x9e) = 0;
                *(undefined4 *)((int)param_1 + iVar5 * 0x20 + 0xa2) = 0;
                *(undefined2 *)((int)param_1 + iVar5 * 0x20 + 0xa6) = 0;
                *(undefined2 *)(param_1 + iVar5 * 8 + 0x2a) = 0;
                iVar5 = iVar2;
              } while (iVar2 < 2);
              uVar3 = *(uint *)(DAT_008923b4 + *(short *)(param_1 + 7) * 4);
              if (uVar3 == 0) {
                uVar3 = fn_00339f84(*(undefined4 *)(DAT_00892460 + 0xc));
              }
              if ((uVar3 == 0) ||
                 (iVar5 = fn_003153ac((int)*(short *)(param_1 + 7),uVar3,
                                       *(undefined4 *)(DAT_008923b8 + *(short *)(param_1 + 7) * 4),
                                       param_4,unaff_r4,unaff_r5,unaff_r6,in_lr), iVar5 == 0)) {
                return;
              }
              uVar4 = fn_00314450(param_1);
              fn_003152c8(param_1,uVar4 ^ uVar3);
              return;
            }
            iVar5 = iVar2;
          } while (iVar2 != 0);
        } while( true );
      }
    } while (iVar5 != 0);
  } while( true );
}


