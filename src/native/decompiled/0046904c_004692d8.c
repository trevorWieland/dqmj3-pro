#include "0046904c_004692d8.h"



undefined4 fn_004692d8(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  
  if (*(char *)(param_1 + 0xfc) == '\0') {
    iVar2 = fn_0046904c(param_1,DAT_008b64c4,0x2729,0x278d);
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = fn_00469190(param_1,DAT_008b64c8,0x2729,0x278d);
    if (iVar2 == 0) {
      return 0;
    }
    piVar3 = *(int **)(param_1 + 0x104);
    if ((((*(int *)(*piVar3 + 0xc) - *(int *)(*piVar3 + 4) >> 1 == 0) ||
         (*(int *)(piVar3[1] + 0xc) - *(int *)(piVar3[1] + 4) >> 1 == 0)) ||
        (*(int *)(piVar3[2] + 0xc) - *(int *)(piVar3[2] + 4) >> 1 == 0)) ||
       (*(int *)(piVar3[3] + 0xc) - *(int *)(piVar3[3] + 4) >> 1 == 0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
    *(undefined1 *)(param_1 + 0xfc) = uVar1;
  }
  return 1;
}



bool fn_00469190(int param_1,undefined4 param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  bool bVar2;
  undefined *local_150;
  undefined4 local_14c;
  uint local_148 [6];
  undefined2 local_130 [128];
  undefined1 auStack_30 [20];
  
  if (param_3 == 0 || param_4 == 0) {
    return false;
  }
  local_150 = &DAT_008528bc;
  local_148[0] = 0;
  local_14c = 0x200;
  fn_00170c9c(&local_150);
  local_14c = local_14c & 0xffff;
  bVar2 = (((local_148[0] & 0xff) != 0 || (local_148[0] >> 8 & 0xff) != 0) ||
          (local_148[0] >> 0x10 & 0xff) != 0) || local_148[0] >> 0x18 != 0;
  if (bVar2) {
    local_130[0] = 0;
    fn_0017d82c(2,local_148,auStack_30,0x14);
    fn_0017fe44(auStack_30,local_130,0x100);
    fn_0045f228(*(undefined4 *)(*(int *)(param_1 + 0x104) + 8));
    uVar1 = fn_0045f3dc(*(undefined4 *)(*(int *)(param_1 + 0x104) + 8),L"prudp:/address=");
    uVar1 = fn_0045f3dc(uVar1,local_130);
    uVar1 = fn_0045f3dc(uVar1,L";port=");
    fn_0045f058(uVar1,param_3);
    local_14c = CONCAT22((ushort)((param_4 & 0xff) << 8) | (ushort)(param_4 >> 8) & 0xff,
                         (undefined2)local_14c);
    local_130[0] = 0;
    fn_0017d82c(2,local_148,auStack_30,0x14);
    fn_0017fe44(auStack_30,local_130,0x100);
    fn_0045f228(*(undefined4 *)(*(int *)(param_1 + 0x104) + 0xc));
    uVar1 = fn_0045f3dc(*(undefined4 *)(*(int *)(param_1 + 0x104) + 0xc),L"prudp:/address=");
    uVar1 = fn_0045f3dc(uVar1,local_130);
    uVar1 = fn_0045f3dc(uVar1,L";port=");
    fn_0045f058(uVar1,param_4);
  }
  return bVar2;
}



bool fn_0046904c(int param_1,undefined4 param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  bool bVar2;
  undefined *local_150;
  undefined4 local_14c;
  uint local_148 [6];
  undefined2 local_130 [128];
  undefined1 auStack_30 [20];
  
  if (param_3 == 0 || param_4 == 0) {
    return false;
  }
  local_150 = &DAT_008528bc;
  local_148[0] = 0;
  local_14c = 0x200;
  fn_00170c9c(&local_150);
  local_14c = local_14c & 0xffff;
  bVar2 = (((local_148[0] & 0xff) != 0 || (local_148[0] >> 8 & 0xff) != 0) ||
          (local_148[0] >> 0x10 & 0xff) != 0) || local_148[0] >> 0x18 != 0;
  if (bVar2) {
    local_130[0] = 0;
    fn_0017d82c(2,local_148,auStack_30,0x14);
    fn_0017fe44(auStack_30,local_130,0x100);
    fn_0045f228(**(undefined4 **)(param_1 + 0x104));
    uVar1 = fn_0045f3dc(**(undefined4 **)(param_1 + 0x104),L"prudp:/address=");
    uVar1 = fn_0045f3dc(uVar1,local_130);
    uVar1 = fn_0045f3dc(uVar1,L";port=");
    fn_0045f058(uVar1,param_3);
    local_14c = CONCAT22((ushort)((param_4 & 0xff) << 8) | (ushort)(param_4 >> 8) & 0xff,
                         (undefined2)local_14c);
    local_130[0] = 0;
    fn_0017d82c(2,local_148,auStack_30,0x14);
    fn_0017fe44(auStack_30,local_130,0x100);
    fn_0045f228(*(undefined4 *)(*(int *)(param_1 + 0x104) + 4));
    uVar1 = fn_0045f3dc(*(undefined4 *)(*(int *)(param_1 + 0x104) + 4),L"prudp:/address=");
    uVar1 = fn_0045f3dc(uVar1,local_130);
    uVar1 = fn_0045f3dc(uVar1,L";port=");
    fn_0045f058(uVar1,param_4);
  }
  return bVar2;
}


