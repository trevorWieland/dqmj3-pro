#include "003896bc_0038c04cb.h"



void fn_0038c04c(int param_1,int param_2)

{
  int iVar1;
  
  fn_0040f564(*(undefined4 *)(param_2 + 0x3c),5);
  iVar1 = fn_006ce5b8(*(undefined4 *)(*(int *)(param_2 + 0x3c) + 4),1);
  if (iVar1 != 0) {
    fn_0036c340(*(undefined4 *)(param_1 + 0x5c));
    fn_00689824(param_1,1);
    fn_006899f4(param_1,0xf9,0);
    *(undefined1 *)(param_1 + 0x11c) = 8;
  }
  return;
}



void fn_0038bf0c(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  iVar1 = fn_00689b18();
  fn_0028eac8(*(undefined4 *)(iVar1 + 0xc),0x48);
  uVar2 = fn_006f6a38();
  if ((uVar2 & 0x20000) != 0) {
    iVar1 = param_1[0x17];
    *(undefined4 *)(iVar1 + 0x38) = 0;
    *(undefined1 *)(iVar1 + 0x5f) = 1;
    uVar3 = fn_0022f584(*(undefined4 *)(param_2 + 0x18));
    fn_00748808(param_1,uVar3,0,1,0,0);
    *(undefined1 *)(param_1[0x17] + 0x51) = 1;
    fn_0068ab44(param_1,0x100094c);
    (**(code **)(*param_1 + 0x16c))(param_1);
    *(undefined1 *)(param_1 + 0x47) = 5;
  }
  return;
}



void fn_0038bda8(undefined4 *param_1)

{
  *param_1 = &DAT_0082aa48;
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 4))();
    param_1[1] = 0;
  }
  fn_002feef8(param_1);
  return;
}



void fn_0038bcec(int *param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*param_1 + 0xc))(param_1);
  if (iVar2 == 0) {
    if ((char)param_1[2] == '\0') {
      fn_002fb87c(param_1[1],*(undefined1 *)((int)param_1 + 10));
      uVar1 = 1;
    }
    else {
      if ((char)param_1[2] != '\x01') {
        return;
      }
      fn_002fba48(param_1[1]);
      if (*(char *)(param_1[1] + 0x30) == '\0') {
        return;
      }
      uVar1 = 2;
    }
    *(undefined1 *)(param_1 + 2) = uVar1;
  }
  return;
}



void fn_0038bc80(int param_1)

{
  undefined4 uVar1;
  
  fn_00234690();
  uVar1 = fn_00182994(DAT_008977e4);
  fn_0015aabc(uVar1,*(undefined4 *)(param_1 + 0x40));
  uVar1 = fn_00182994(DAT_008977e4);
  fn_0017554c(uVar1,*(undefined4 *)(param_1 + 0x40));
  return;
}



void fn_0038bc38(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_00182994(DAT_008977e4);
  fn_00182c40(uVar1,*(undefined1 *)(param_1 + 9),*(undefined4 *)(param_1 + 0xc),
               (int)*(float *)(param_1 + 0x10));
  return;
}



void fn_0038bb7c(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0082a9fc;
  fn_00129004();
  fn_00120f74();
  if ((int *)param_1[7] != (int *)0x0) {
    (**(code **)(*(int *)param_1[7] + 8))();
  }
  if ((int *)param_1[6] != (int *)0x0) {
    (**(code **)(*(int *)param_1[6] + 4))();
  }
  if ((int *)param_1[5] != (int *)0x0) {
    (**(code **)(*(int *)param_1[5] + 4))();
  }
  if ((int *)param_1[4] != (int *)0x0) {
    (**(code **)(*(int *)param_1[4] + 4))();
  }
  if ((int *)param_1[3] != (int *)0x0) {
    (**(code **)(*(int *)param_1[3] + 4))();
  }
  if ((int *)param_1[2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[2] + 4))();
  }
  fn_005f6f1c(param_1);
  return;
}



void fn_0038b9f8(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_48;
  undefined1 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_20;
  undefined4 local_18;
  
  (**(code **)(**(int **)(param_1 + 0x18) + 0x18))();
  (**(code **)(**(int **)(param_1 + 0x10) + 0x10))();
  puVar1 = (undefined4 *)fn_001f74e4(*(undefined4 *)(param_1 + 0x18),0x5e);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00895b24) goto LAB_0038ba68;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_0038ba68:
  if (*(char *)(puVar1 + 2) != '\0') {
    uVar3 = fn_00129d4c(*(undefined4 *)(DAT_008977e0 + 0x1c),(char *)&DAT_0038bb14);
    fn_005f3c7c(fn_0038b9a4);
    fn_0011a24c(&local_48);
    local_30 = 0xffffffff;
    local_44 = 3;
    local_40 = 0xbf2c0831;
    uStack_3c = 0x4108c8b4;
    uStack_38 = 0xc335178d;
    uVar4 = 0x43340000;
    local_48 = uVar3;
    fn_0017fe34();
    local_18 = 0;
    local_20 = 0;
    local_34 = uVar4;
    fn_006949f8(DAT_008977e0,&local_48);
    uVar3 = fn_00615ee4();
    fn_0010706c(uVar3,DAT_008972dc,2);
    DAT_008972dc = 0;
  }
  return;
}


