#include "003aaa60_003ac38cabb.h"



void fn_003ab988(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = fn_0022f584(param_2,0);
  fn_0068974c(param_1,uVar1,param_3,1);
  iVar2 = *(int *)(param_1 + 0x5c);
  *(undefined4 *)(iVar2 + 0x38) = param_5;
  *(undefined1 *)(iVar2 + 0x5f) = 1;
  iVar2 = *(int *)(param_1 + 0x5c);
  *(undefined4 *)(iVar2 + 0x3c) = param_6;
  *(undefined1 *)(iVar2 + 0x60) = 1;
  *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x51) = param_4;
  *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x5e) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x61) = 1;
  *(undefined1 *)(param_1 + 0x78) = 1;
  *(undefined4 *)(param_1 + 0x9c) = 1;
  return;
}



undefined4 fn_003ab710(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  
  uVar3 = fn_001287d4(30000,&DAT_00812c8c,param_3,param_4,param_4);
  *(undefined4 *)(param_1 + 0x8c) = uVar3;
  fn_00158f6c(uVar3,30000);
  iVar8 = 0;
  uVar3 = 0;
  do {
    iVar4 = iVar8 * 0xec + 0x2c0;
    if (*(int *)(*(int *)(param_1 + 0x68) + iVar4) == 0) {
      *(undefined2 *)(*(int *)(param_1 + 0x8c) + iVar8 * 0x3c + 0x18) = 0;
    }
    else {
      iVar4 = fn_00313ee8(*(int *)(param_1 + 0x68) + iVar4);
      if (iVar4 == 0) {
        *(undefined2 *)(*(int *)(param_1 + 0x8c) + iVar8 * 0x3c + 0x18) =
             *(undefined2 *)(*(int *)(param_1 + 0x68) + iVar8 * 0xec + 0x2dc);
        iVar5 = iVar8 * 0x3c + 0x1a;
        iVar4 = 0;
        *(undefined2 *)(*(int *)(param_1 + 0x8c) + iVar5) = 0;
        do {
          iVar1 = iVar4 * 2;
          iVar4 = iVar4 + 1;
          sVar2 = *(short *)(*(int *)(param_1 + 0x68) + iVar8 * 0xec + iVar1 + 0x304);
          if ((int)sVar2 - 0x46U < 5) {
            *(short *)(*(int *)(param_1 + 0x8c) + iVar5) = sVar2;
          }
        } while (iVar4 < 9);
        puVar7 = (undefined4 *)(*(int *)(param_1 + 0x68) + iVar8 * 0xec + 0x2c4);
        puVar6 = (undefined4 *)(*(int *)(param_1 + 0x8c) + iVar8 * 0x3c);
        *puVar6 = *puVar7;
        puVar6[1] = puVar7[1];
        puVar6[2] = puVar7[2];
        puVar6[3] = puVar7[3];
        puVar6[4] = puVar7[4];
        puVar6[5] = puVar7[5];
        *(undefined2 *)(*(int *)(param_1 + 0x8c) + iVar8 * 0x3c + 0x1c) =
             *(undefined2 *)(*(int *)(param_1 + 0x68) + iVar8 * 0xec + 0x316);
        *(undefined2 *)(*(int *)(param_1 + 0x8c) + iVar8 * 0x3c + 0x1e) =
             *(undefined2 *)(*(int *)(param_1 + 0x68) + iVar8 * 0xec + 0x31a);
        *(undefined2 *)(*(int *)(param_1 + 0x8c) + iVar8 * 0x3c + 0x20) =
             *(undefined2 *)(*(int *)(param_1 + 0x68) + iVar8 * 0xec + 0x31e);
        *(undefined2 *)(*(int *)(param_1 + 0x8c) + iVar8 * 0x3c + 0x22) =
             *(undefined2 *)(*(int *)(param_1 + 0x68) + iVar8 * 0xec + 0x322);
        *(undefined2 *)(*(int *)(param_1 + 0x8c) + iVar8 * 0x3c + 0x24) =
             *(undefined2 *)(*(int *)(param_1 + 0x68) + iVar8 * 0xec + 0x326);
        *(undefined2 *)(*(int *)(param_1 + 0x8c) + iVar8 * 0x3c + 0x26) =
             *(undefined2 *)(*(int *)(param_1 + 0x68) + iVar8 * 0xec + 0x32a);
        fn_0019bc50(*(int *)(param_1 + 0x8c) + iVar8 * 0x3c + 0x2a,
                     *(int *)(param_1 + 0x68) + iVar8 * 0xec + 0x32e);
        fn_0019bc50(*(int *)(param_1 + 0x8c) + iVar8 * 0x3c + 0x30,
                     *(int *)(param_1 + 0x68) + iVar8 * 0xec + 0x334);
        fn_0019bc50(*(int *)(param_1 + 0x8c) + iVar8 * 0x3c + 0x36,
                     *(int *)(param_1 + 0x68) + iVar8 * 0xec + 0x33a);
      }
      else {
        uVar3 = 1;
      }
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 500);
  return uVar3;
}


