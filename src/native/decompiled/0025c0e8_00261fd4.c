#include "0025c0e8_00261fd4.h"



int fn_00261fd4(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *param_1;
  iVar1 = fn_00145b00(0x8c,&DAT_00812c8c);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = fn_00261c10();
    if (iVar1 != 0) {
      uVar2 = fn_00262ad0(iVar3,iVar1);
      *(int *)(iVar3 + 0x98) = *(int *)(iVar3 + 0x98) + 1;
      fn_002616fc(iVar1,param_2,param_3);
      *(undefined4 *)(iVar3 + 0x7c) = uVar2;
    }
  }
  return iVar1;
}



int fn_00261f68(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 local_18;
  
  iVar2 = *param_1;
  local_18 = param_4;
  fn_00262bfc(iVar2);
  iVar1 = fn_00145b00(0x84,&DAT_00812c8c);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = fn_00260b38();
    if (iVar1 != 0) {
      local_18 = fn_00262ad0(iVar2,iVar1);
      fn_002609ac(iVar1,param_2);
      fn_0079d450(iVar2 + 0x70,&local_18);
    }
  }
  return iVar1;
}



void fn_0025c218(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined1 auStack_118 [256];
  
  fn_001f7414(*(undefined4 *)(param_1 + 4),0xde,0);
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0x10);
  (**(code **)(*piVar1 + 0x30))(piVar1,0x59,0);
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0x14);
  (**(code **)(*piVar1 + 0x30))(piVar1,0x2f,0);
  fn_00353a48(*(undefined4 *)(*(int *)(param_1 + 4) + 0x54));
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0x10);
  (**(code **)(*piVar1 + 0x30))(piVar1,0xd5,0);
  puVar2 = (undefined4 *)fn_0028e658(*(undefined4 *)(*(int *)(param_1 + 4) + 0xc),0x48);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_008942d0) goto LAB_0025c2f0;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_0025c2f0:
  *(undefined4 **)(param_1 + 0x10) = puVar2;
  iVar4 = fn_00174834(DAT_008977e4);
  iVar5 = fn_00174834(DAT_008977e4);
  uVar6 = fn_0015b064((int)*(short *)(iVar4 + *(char *)(iVar5 + 0x180385) * 0x418 + 0x17c308));
  uVar7 = fn_0016ba34(DAT_00897800,DAT_0089820c,(char *)&DAT_0025c3ec,0);
  fn_00301f50(auStack_118,0x100);
  fn_0018a618(auStack_118,0x80,0x7f,L"%ls%ls",uVar6,uVar7);
  fn_0036c5f4(*(undefined4 *)(param_1 + 0x10),auStack_118,1,1,0,1,0,0,1);
  piVar1 = (int *)fn_0025bec8(param_1 + 8,0);
  piVar8 = *(int **)(param_1 + 0xc);
  if (piVar8 != piVar1) {
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 4))();
    }
    *(int **)(param_1 + 0xc) = piVar1;
  }
  return;
}



undefined4 fn_0025c0e8(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 auStack_110 [256];
  
  uVar2 = 4;
  cVar1 = *(char *)(*(int *)(*(int *)(param_1 + 4) + 0x10) + 0x31);
  if (cVar1 == '\x02') {
    uVar2 = fn_0016ba34(DAT_00897800,DAT_0089820c,(char *)&DAT_0025c1dc,0);
    iVar3 = fn_00174834(DAT_008977e4);
    iVar4 = fn_00174834(DAT_008977e4);
    uVar5 = fn_0015b064((int)*(short *)(iVar3 + *(char *)(iVar4 + 0x180385) * 0x418 + 0x17c308));
    fn_00301f50(auStack_110,0x100);
    fn_0018a618(auStack_110,0x80,0x7f,L"%ls%ls",uVar5,uVar2);
    fn_00174858(DAT_008977e4);
    uVar2 = fn_0015c948();
    fn_0017faa4(uVar2,auStack_110,1,0);
    return 3;
  }
  if (cVar1 == '\x03') {
    uVar2 = 3;
  }
  return uVar2;
}


