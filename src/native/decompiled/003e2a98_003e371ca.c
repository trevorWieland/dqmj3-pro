#include "003e2a98_003e371ca.h"



undefined4 fn_003e2fd8(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_1c = 1;
  local_18 = 0;
  uVar1 = fn_00154ac8(0x792);
  local_1c = (local_1c & ~((unsigned int)0xffff << 0)) | ((unsigned int)(CONCAT11(uVar1,(undefined1)local_1c)) & 0xffff);
  uVar1 = fn_00154ac8(0x311);
  local_1c = (local_1c & ~((unsigned int)0xffffff << 0)) | ((unsigned int)(CONCAT12(uVar1,(undefined2)local_1c)) & 0xffffff);
  iVar2 = fn_006b2aa0(*(undefined4 *)(DAT_00897804 + 0x14),0x3ec);
  local_1c = CONCAT13(0 < iVar2,(undefined3)local_1c);
  iVar2 = fn_006b2aa0(*(undefined4 *)(DAT_00897804 + 0x14),0x3ed);
  uVar4 = 0;
  local_18 = CONCAT31(((unsigned int)(local_18) >> 8) & 0xffffff,0 < iVar2);
  while ((*(char *)((int)&local_1c + uVar4) == '\0' ||
         (iVar2 = fn_00154ac8((&DAT_00894c34)[uVar4 * 2]), iVar2 != 0))) {
    uVar4 = uVar4 + 1;
    if (4 < uVar4) {
      return 0;
    }
  }
  fn_00144834((&DAT_00894c34)[uVar4 * 2],1);
  uVar3 = fn_0022f584((&DAT_00894c38)[uVar4 * 2],0);
  fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar3,1,0,1,1,0,0,1);
  return 1;
}



void fn_003e2ce4(undefined4 *param_1)

{
  *param_1 = &DAT_0081cd10;
  if ((int *)param_1[0x25] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x25] + 4))();
  }
  if ((int *)param_1[0x1e] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x1e] + 4))();
  }
  fn_0068ad5c(param_1);
  return;
}



void fn_003e2cbc(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00385b88();
  *puVar1 = &PTR_FUN_008329cc;
  return;
}



void fn_003e2adc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  code *pcVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  bool bVar9;
  uint in_fpscr;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_44;
  char *local_3c;
  
  iVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x6c));
  local_44 = *(undefined4 *)(iVar1 + 0x10);
  iVar1 = 0;
  iVar8 = 0;
  do {
    iVar6 = 0;
    do {
      pcVar7 = &DAT_0089589c + iVar6 * 0x14 + iVar8 * 100;
      if (*pcVar7 != '\0') {
        local_3c = (char *)&DAT_003e2c90;
        local_70 = 0;
        local_6c = 0;
        local_68 = 0;
        local_64 = 0;
        local_60 = 0;
        local_5c = 0;
        local_58 = 0;
        local_54 = 0;
        fn_0017d96c(&local_70,0x20,0x1f,(char *)&DAT_003e2c90,iVar6,iVar8 * 5 + 1);
        uVar2 = fn_0068897c(local_44,&local_70);
        pcVar5 = *(code **)(pcVar7 + 4);
        if ((*(uint *)(pcVar7 + 8) & 1) != 0) {
          pcVar5 = *(code **)(pcVar5 + *(int *)(param_1 + ((int)*(uint *)(pcVar7 + 8) >> 1)));
        }
        uVar3 = (*pcVar5)();
        fn_00688c04(uVar2,uVar3,0);
        pcVar5 = (code *)&DAT_0000001f;
        fn_0017d96c(&local_70,0x20,0x1f,local_3c,iVar6,iVar8 * 5 + 3);
        uVar2 = fn_0068897c(local_44,&local_70);
        bVar9 = (*(uint *)(pcVar7 + 0x10) & 1) == 0;
        if (bVar9) {
          pcVar5 = *(code **)(pcVar7 + 0xc);
        }
        piVar4 = (int *)(param_1 + ((int)*(uint *)(pcVar7 + 0x10) >> 1));
        if (!bVar9) {
          pcVar5 = *(code **)(*(int *)(pcVar7 + 0xc) + *piVar4);
        }
        (*pcVar5)(piVar4,uVar3);
        fn_00688d5c(uVar2,1);
        iVar1 = iVar1 + 1;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 5);
    iVar8 = iVar8 + 1;
  } while (iVar8 < 2);
  uVar2 = fn_0068897c(local_44,(char *)&DAT_003e2ca8);
  if (iVar1 != 0) {
    VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
  }
  fn_00688d5c(uVar2,1);
  return;
}



undefined4 fn_003e2a98(int *param_1)

{
  param_1[0x1f] = 4;
  (**(code **)(*param_1 + 0x118))(param_1,DAT_00895888,DAT_0089588c,DAT_00895890);
  (**(code **)(*param_1 + 0x11c))(param_1);
  return 1;
}


