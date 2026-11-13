#include "00435fa0_00437134b.h"



void fn_00437134(int param_1)

{
  uint uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)*(short *)(*(int *)(param_1 + 0x98) + 0x1c);
  uVar1 = *(int *)(param_1 + 0x130) - *(int *)(param_1 + 300) >> 2;
  if (uVar1 < 7) {
    fn_002ff628(9,&DAT_008c7651,&DAT_008c7651,6,uVar1);
  }
  iVar3 = *(int *)(*(int *)(param_1 + 300) + 0x18);
  if (iVar4 == 0) {
    fn_002b427c(iVar3,1);
    *(undefined1 *)(iVar3 + 0x3b) = 1;
    *(undefined1 *)(iVar3 + 0x3d) = 0;
    *(undefined1 *)(iVar3 + 0x43) = 0;
    *(undefined1 *)(iVar3 + 0x3f) = 0;
    *(undefined1 *)(iVar3 + 0x41) = 0;
    return;
  }
  fn_002b427c(iVar3,iVar4);
  *(undefined1 *)(iVar3 + 0x3b) = 0;
  *(bool *)(iVar3 + 0x3d) = *(char *)(*(int *)(param_1 + 0x98) + 0x26) == 'd';
  *(undefined1 *)(iVar3 + 0x43) = *(undefined1 *)(*(int *)(param_1 + 0x98) + 0x28);
  uVar2 = fn_001f84ac(*(int *)(param_1 + 0x98) + 0xac);
  *(undefined1 *)(iVar3 + 0x3f) = uVar2;
  *(undefined1 *)(iVar3 + 0x41) = *(undefined1 *)(*(int *)(param_1 + 0x98) + 0x45a);
  return;
}



void fn_00436834(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 300);
  if (*(int **)(param_1 + 0x130) != piVar1) {
    do {
      (**(code **)(*(int *)*piVar1 + 0x18))();
      if ((int *)*piVar1 != (int *)0x0) {
        (**(code **)(*(int *)*piVar1 + 4))();
      }
      piVar2 = piVar1 + 1;
      *piVar1 = 0;
      piVar1 = piVar2;
    } while (*(int **)(param_1 + 0x130) != piVar2);
  }
  fn_0022ccb4(param_1);
  return;
}



int fn_00436798(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_003bc118();
  *puVar1 = &DAT_0083c244;
  *(undefined2 *)(puVar1 + 0x2a) = 0;
  iVar2 = fn_00101a1c(puVar1 + 0x2b,&LAB_004365c8,0xc,10);
  iVar2 = fn_00101a1c(iVar2 + 0x78,&LAB_004365c8,0xc,10);
  *(undefined4 *)(iVar2 + 0x78) = 0;
  *(undefined4 *)(iVar2 + 0x7c) = 0;
  iVar2 = fn_00101a1c(iVar2 + 0x80,&LAB_004358b4,0xc,100);
  *(undefined4 *)(iVar2 + 0x4b0) = 0;
  *(undefined4 *)(iVar2 + 0x4b4) = 0;
  *(undefined4 *)(iVar2 + 0x4b8) = 0;
  *(undefined4 *)(iVar2 + 0x4bc) = 0;
  *(undefined4 *)(iVar2 + 0x4c0) = 0;
  return iVar2 + -0x1a4;
}



void fn_004365dc(int param_1)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int local_18;
  int local_14;
  
  iVar2 = fn_0022cdf0();
  if (iVar2 == 0) {
    return;
  }
  fn_003bbdc0(param_1);
  sVar1 = *(short *)(*(int *)(param_1 + 0x98) + 0x1c);
  if (*(short *)(param_1 + 0xa8) != sVar1) {
    fn_0022cdb4(param_1,sVar1 != 0);
    *(short *)(param_1 + 0xa8) = sVar1;
  }
  iVar2 = fn_003492bc(*(undefined4 *)(param_1 + 0x98));
  if (iVar2 == 1) {
    *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + -1;
    fn_0022cecc(param_1);
  }
  else if (iVar2 == 2) {
    *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
    fn_0022cecc(param_1);
  }
  *(int *)(param_1 + 0x1a0) = *(int *)(param_1 + 0x98) + 0x180;
  iVar5 = param_1 + 0x19c;
  *(int *)(param_1 + 0x19c) = *(int *)(param_1 + 0x98) + 0xbe;
  fn_00435fa0(iVar5);
  fn_00435cf4(iVar5);
  *(undefined4 *)(param_1 + 0x658) = 0;
  iVar4 = *(int *)(param_1 + 0x654);
  iVar2 = 0;
  *(int *)(param_1 + 0x660) = iVar4;
  if (0 < iVar4) {
    do {
      if (*(char *)(iVar5 + iVar2 * 0xc + 8) == '\0') {
        *(int *)(param_1 + 0x660) = iVar2;
        break;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar4);
  }
  iVar2 = *(int *)(param_1 + 0x660);
  *(int *)(param_1 + 0x664) = iVar4 - iVar2;
  if (iVar4 - iVar2 == 0) {
    iVar2 = 0;
  }
  *(int *)(param_1 + 0x65c) = iVar2;
  fn_004358cc(param_1,param_1 + 0x19c);
  local_18 = *(int *)(param_1 + 0x660);
  local_14 = *(int *)(param_1 + 0x664);
  piVar3 = &local_14;
  if (*(int *)(param_1 + 0x664) <= *(int *)(param_1 + 0x660)) {
    piVar3 = &local_18;
  }
  if (*piVar3 + 9 < 10) {
    iVar2 = 1;
  }
  else {
    iVar2 = (*piVar3 + 9) / 10;
  }
  if (*(int *)(param_1 + 0x80) != iVar2) {
    *(int *)(param_1 + 0x80) = iVar2;
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  fn_003bbde0(param_1);
  return;
}


