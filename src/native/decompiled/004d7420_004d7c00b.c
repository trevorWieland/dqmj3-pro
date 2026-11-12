#include "004d7420_004d7c00b.h"



undefined4 fn_004d7c00(int param_1,undefined4 param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 unaff_r5;
  undefined4 local_30;
  uint local_2c;
  uint local_28;
  ushort local_24;
  undefined2 local_22;
  undefined4 local_20;
  
  if (param_3 == 1) {
    unaff_r5 = 0x10;
  }
  else if (param_3 == 2 || param_3 == 3) {
    unaff_r5 = 4;
  }
  else if (param_3 == 4) {
    unaff_r5 = 8;
  }
  local_20 = *(undefined4 *)(param_1 + 0xc);
  local_30 = 0;
  iVar2 = (**(code **)(**(int **)(param_1 + 0x10) + 0x14))
                    (*(int **)(param_1 + 0x10),&local_20,param_2,unaff_r5);
  if (0x3fefffff < iVar2 - 0x100000U) {
    return 0;
  }
  if (param_3 == 1) {
    iVar5 = *(int *)(param_1 + 0x5b4) + (uint)*(byte *)(param_1 + 0x18) * 0x20;
    uVar1 = *(ushort *)(iVar5 + 2);
    local_30 = CONCAT22(uVar1 << 8 | uVar1 >> 8,1);
    uVar3 = *(uint *)(iVar5 + 4);
    local_2c = ((uVar3 >> 0x10) << 0x18 | (uVar3 >> 0x18) << 0x10) >> 0x10 |
               ((uVar3 & 0xff) << 8 | uVar3 >> 8 & 0xff) << 0x10;
    uVar3 = *(uint *)(*(int *)(param_1 + 0x5c4) + (uint)*(byte *)(param_1 + 0x18) * 4);
    local_28 = ((uVar3 >> 0x10) << 0x18 | (uVar3 >> 0x18) << 0x10) >> 0x10 |
               ((uVar3 & 0xff) << 8 | uVar3 >> 8 & 0xff) << 0x10;
    uVar3 = 0;
    uVar4 = 0;
    if (*(uint *)(param_1 + 0x14) != 0) {
      do {
        if (*(char *)(*(int *)(param_1 + 0x5b4) + (uVar4 & 0xff) * 0x20) != '\0') {
          uVar3 = uVar3 | 1 << (uVar4 & 0xff) & 0xffffU;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(param_1 + 0x14));
    }
    local_24 = (ushort)(uVar3 << 8) | (ushort)(uVar3 >> 8);
    local_22 = 0;
    fn_001694d4(iVar2,&local_30);
  }
  else if (param_3 == 2) {
    uVar1 = *(ushort *)(*(int *)(param_1 + 0x5b4) + (uint)*(byte *)(param_1 + 0x18) * 0x20 + 2);
    local_30 = CONCAT22(uVar1 << 8 | uVar1 >> 8,2);
    fn_001694d4(iVar2,&local_30);
  }
  else if (param_3 == 3) {
    uVar1 = *(ushort *)(*(int *)(param_1 + 0x5b4) + (uint)*(byte *)(param_1 + 0x18) * 0x20 + 2);
    local_30 = CONCAT22(uVar1 << 8 | uVar1 >> 8,3);
    fn_001694d4(iVar2,&local_30);
  }
  else {
    if (param_3 != 4) {
      return 0;
    }
    iVar5 = *(int *)(param_1 + 0x5b4) + (uint)*(byte *)(param_1 + 0x18) * 0x20;
    uVar1 = *(ushort *)(iVar5 + 2);
    local_30 = CONCAT22(uVar1 << 8 | uVar1 >> 8,4);
    uVar3 = *(uint *)(iVar5 + 0x18);
    local_2c = ((uVar3 >> 0x10) << 0x18 | (uVar3 >> 0x18) << 0x10) >> 0x10 |
               ((uVar3 & 0xff) << 8 | uVar3 >> 8 & 0xff) << 0x10;
    fn_001694d4(iVar2,&local_30);
  }
  fn_0050a490(*(undefined4 *)(param_1 + 0x10));
  return 1;
}



int fn_004d7bc8(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x65c);
  iVar1 = (param_3 - *(int *)(param_1 + 0x668)) + *(int *)(param_1 + 0x678);
  if (iVar1 < 0) {
    iVar1 = iVar1 + iVar2;
  }
  else if (iVar2 <= iVar1) {
    iVar1 = iVar1 - iVar2;
  }
  return *(int *)(param_1 + 0x5b8) + (param_2 * iVar2 + iVar1) * 4;
}


