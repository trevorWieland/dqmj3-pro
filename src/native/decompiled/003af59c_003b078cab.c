#include "003af59c_003b078cab.h"



void fn_003af8d4(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  byte bVar6;
  code *pcVar7;
  int iVar8;
  uint uVar9;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar3 = (**(code **)(**(int **)(param_1 + 0x9c) + 100))();
  if (((-1 < iVar3) || (iVar3 = (**(code **)(**(int **)(param_1 + 0x9c) + 0x34))(), iVar3 != 0)) ||
     (iVar3 = (**(code **)(**(int **)(param_1 + 0x9c) + 0x38))(), iVar3 != 0)) {
    iVar3 = (*(int **)(param_1 + 0x9c))[0x33];
    cVar1 = (**(code **)(**(int **)(param_1 + 0x9c) + 0x5c))();
    bVar6 = (char)iVar3 * '\n' + cVar1 + '\x01';
    if ((bVar6 == 0) || (0x59 < bVar6)) {
      bVar6 = 0;
    }
    local_48 = 0;
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    uVar4 = fn_006c75c8(param_1,DAT_00891a44,bVar6);
    fn_00101a50(&local_48,0x18,DAT_00891a50,bVar6,uVar4);
    fn_005ca27c(*(undefined4 *)(param_1 + 0xb0),0,&local_48);
    uVar4 = fn_006c75c8(param_1,DAT_00891a48,bVar6);
    fn_005ca27c(*(undefined4 *)(param_1 + 0xb0),1,uVar4);
    iVar3 = (**(code **)(**(int **)(param_1 + 0x9c) + 0x34))();
    if ((iVar3 == 0) && (iVar3 = (**(code **)(**(int **)(param_1 + 0x9c) + 0x38))(), iVar3 == 0)) {
      iVar3 = (**(code **)(**(int **)(param_1 + 0x9c) + 100))();
      if ((-1 < iVar3) && (iVar3 = (**(code **)(**(int **)(param_1 + 0x9c) + 0x6c))(), -1 < iVar3))
      {
        uVar2 = (**(code **)(**(int **)(param_1 + 0x9c) + 0x6c))();
        fn_003af740(param_1,*(undefined4 *)(*(int *)(param_1 + 0x9c) + 0xcc),10,uVar2);
        uVar4 = (**(code **)(**(int **)(param_1 + 0x9c) + 0x6c))();
        fn_002c32c4(param_1,uVar4,0);
      }
    }
    else {
      iVar8 = (*(int **)(param_1 + 0x9c))[0x33];
      iVar3 = (**(code **)(**(int **)(param_1 + 0x9c) + 0x34))();
      if (iVar3 == 0) {
        iVar3 = -1;
      }
      else {
        iVar3 = 1;
      }
      iVar8 = iVar8 + iVar3;
      iVar3 = *(int *)(*(int *)(param_1 + 0x9c) + 200);
      if (iVar8 < 0) {
        iVar8 = iVar3 + -1;
      }
      else if (iVar3 <= iVar8) {
        iVar8 = 0;
      }
      uVar5 = (**(code **)(**(int **)(param_1 + 0x9c) + 0x6c))();
      pcVar7 = (code *)**(int **)(param_1 + 0x9c);
      if (-1 < (int)uVar5) {
        pcVar7 = *(code **)(pcVar7 + 0x6c);
      }
      if (0x7fffffff < uVar5) {
        pcVar7 = *(code **)(pcVar7 + 0x5c);
      }
      uVar2 = (*pcVar7)();
      fn_003af740(param_1,iVar8,10,uVar2);
    }
  }
  uVar5 = (**(code **)(**(int **)(param_1 + 0x9c) + 0xa0))();
  if (((-1 < (int)uVar5) &&
      (uVar9 = (short)(ushort)*(byte *)(*(int *)(param_1 + 0x9c) + 0xcc) * 10 + (uVar5 & 0xff) + 1 &
               0xff, uVar9 != 0)) && (uVar9 < 0x5a)) {
    bVar6 = (&DAT_007c0d1c)[uVar9];
    if (0x59 < bVar6) {
      bVar6 = 0;
    }
    iVar3 = fn_002e2e44(*(undefined4 *)(DAT_00897804 + 0x20),bVar6);
    if (iVar3 == 0) {
      uVar9 = (uint)(byte)(&DAT_007c0d1c)[uVar9];
      if (0x59 < uVar9) {
        uVar9 = 0;
      }
      iVar3 = fn_00154ac8(uVar9 + 500);
      if (iVar3 != 0) {
        fn_0068ab44(param_1,0x100094b);
        fn_003af740(param_1,*(undefined4 *)(*(int *)(param_1 + 0x9c) + 0xcc),10,uVar5 & 0xff);
        fn_002c32c4(param_1,uVar5,0);
      }
    }
  }
  fn_002c4304(param_1);
  return;
}



void fn_003af8a4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xb8,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003afc00(iVar1,param_1);
  return;
}



void fn_003af7b0(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  fn_00689824(param_1,0);
  iVar2 = (**(code **)(**(int **)(param_1 + 0x9c) + 0x5c))();
  if (-1 < iVar2) {
    uVar1 = (**(code **)(**(int **)(param_1 + 0x9c) + 0x5c))();
    fn_003af740(param_1,*(undefined4 *)(*(int *)(param_1 + 0x9c) + 0xcc),10,uVar1);
  }
  puVar4 = *(undefined4 **)(param_1 + 4);
  if (puVar4 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar4)(puVar4);
    do {
      if (puVar3 == &DAT_00891a10) goto LAB_003af83c;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar4 = (undefined4 *)0x0;
LAB_003af83c:
  if (*(char *)(puVar4 + 0xb) == '\f') {
    fn_006899f4(param_1,0,0);
    fn_00689d04(param_1,0);
    fn_00689878(param_1,0);
    return;
  }
  fn_006899f4(param_1,0xd4,0,1);
  return;
}


