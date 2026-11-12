#include "00266ed4_00271be0b.h"



void fn_00271be0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_38 [28];
  
  uVar6 = DAT_00897800;
  iVar1 = fn_006616a8(param_2);
  iVar2 = fn_0066161c(param_2);
  uVar3 = fn_0026fcd0(param_1,(char *)&DAT_00271d10);
  if ((iVar1 != 0) && (iVar4 = fn_006b7d34(*(undefined4 *)(DAT_00897804 + 0x24),iVar1), iVar4 != 0)
     ) {
    fn_00230854(auStack_38,0xc,iVar1,0);
    fn_0015b0dc(auStack_38);
  }
  uVar5 = fn_0016ba34(uVar6,DAT_008987a4);
  fn_00190d50(uVar3,uVar5);
  uVar3 = fn_0026fcd0(param_1,(char *)&DAT_00271d64);
  if ((iVar2 != 0) && (iVar1 = fn_006b7d34(*(undefined4 *)(DAT_00897804 + 0x24),iVar2), iVar1 != 0)
     ) {
    fn_00230854(auStack_38,0xc,iVar2,0);
    fn_0015b0dc(auStack_38);
  }
  uVar6 = fn_0016ba34(uVar6,DAT_008987a4);
  fn_00190d50(uVar3,uVar6);
  return;
}



void fn_00271a14(undefined4 param_1,short param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar6 = DAT_00897800;
  fn_0026fcd0(param_1,(char *)&DAT_00271b8c);
  iVar1 = fn_006613d0();
  iVar2 = fn_006614fc((int)param_2);
  if (iVar1 < 1) {
    pcVar3 = "";
    uVar4 = fn_0016ba34(uVar6,DAT_008987a4,(char *)&DAT_00271ba0,0);
  }
  else {
    uVar4 = fn_00661094(iVar1);
    pcVar3 = (char *)fn_00230e40(uVar4,0);
    uVar4 = fn_0015b064(iVar1);
  }
  fn_0015b0dc(pcVar3);
  fn_0015b0dc(uVar4);
  uVar4 = fn_0016ba34(uVar6,DAT_008987a4,(char *)&DAT_00271bb4,0);
  uVar5 = fn_0026fcd0(param_1,(char *)&DAT_00271b8c);
  fn_00190d50(uVar5,uVar4);
  if (iVar2 < 1) {
    pcVar3 = "";
    uVar4 = fn_0016ba34(uVar6,DAT_008987a4,(char *)&DAT_00271ba0,0);
  }
  else {
    uVar4 = fn_00661094(iVar2);
    pcVar3 = (char *)fn_00230e40(uVar4,0);
    uVar4 = fn_0015b064(iVar2);
  }
  fn_0015b0dc(pcVar3);
  fn_0015b0dc(uVar4);
  uVar6 = fn_0016ba34(uVar6,DAT_008987a4,(char *)&DAT_00271bc4,0);
  uVar4 = fn_0026fcd0(param_1,(char *)&DAT_00271bd4);
  fn_00190d50(uVar4,uVar6);
  return;
}


