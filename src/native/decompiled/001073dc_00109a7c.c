#include "001073dc_00109a7c.h"

static void svc_0x2(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x2 }
#endif
}

static void svc_0x21(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x21 }
#endif
}


void fn_00109a7c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00117720(param_1,param_3);
  *puVar1 = &DAT_0081df88;
  puVar1[8] = param_2;
  return;
}



void fn_00109124(undefined4 *param_1)

{
  *param_1 = &DAT_0081c3ac;
  *(undefined1 *)((int)param_1 + 0x35) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 1;
  *(undefined1 *)((int)param_1 + 0x36) = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



void fn_00108e28(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = &DAT_0081c1c4;
  param_1[2] = 0;
  param_1[4] = 0xffffffff;
  param_1[3] = 0;
  param_1[5] = 0xffffffff;
  param_1[6] = 0xffffffff;
  return;
}



void fn_001089a4(undefined4 *param_1)

{
  *param_1 = &DAT_0081c1a4;
  param_1[2] = param_1 + 2;
  param_1[1] = 0;
  param_1[3] = param_1 + 2;
  return;
}



void fn_0010887c(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 == -1) {
    return;
  }
  iVar1 = fn_00167500(param_1,*(undefined4 *)(param_1 + 8),param_1 + 8,param_2,param_4);
  uVar3 = *(undefined4 *)(iVar1 + 0xc);
  uVar2 = fn_00183970(param_1,*(undefined4 *)(param_1 + 0x38),param_1 + 0x38,param_4);
  fn_0011030c(param_1,uVar3,param_3,uVar2,0);
  return;
}



void fn_00108588(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  
  svc_0x2();
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = unaff_r4;
  *param_2 = unaff_r5;
  return;
}



void fn_00108558(undefined4 *param_1,undefined4 param_2)

{
  svc_0x21();
  *param_1 = param_2;
  return;
}



void fn_00107abc(void)

{
  if (DAT_0089784c != 0) {
    fn_00109510();
    fn_002feef8();
  }
  DAT_0089784c = 0;
  if (DAT_00897840 != (int *)0x0) {
    (**(code **)(*DAT_00897840 + 4))();
  }
  DAT_00897840 = (int *)0x0;
  if (DAT_0089783c != 0) {
    fn_00109d60();
    fn_002feef8();
  }
  DAT_0089783c = 0;
  if (DAT_00897834 != (int *)0x0) {
    (**(code **)(*DAT_00897834 + 4))();
  }
  DAT_00897834 = (int *)0x0;
  (**(code **)(*DAT_00897830 + 0x18))();
  if (DAT_00897830 != (int *)0x0) {
    (**(code **)(*DAT_00897830 + 8))();
  }
  DAT_00897830 = (int *)0x0;
  if (DAT_0089782c != 0) {
    fn_0010afe0();
    fn_002feef8();
  }
  DAT_0089782c = 0;
  (**(code **)(*DAT_00897828 + 0x18))();
  if (DAT_00897828 != (int *)0x0) {
    (**(code **)(*DAT_00897828 + 8))();
  }
  DAT_00897828 = (int *)0x0;
  if (DAT_00897820 != (int *)0x0) {
    (**(code **)(*DAT_00897820 + 4))();
  }
  DAT_00897820 = (int *)0x0;
  if (DAT_008977ec != 0) {
    fn_0010ace4();
    fn_002feef8();
  }
  DAT_008977ec = 0;
  if (DAT_008977e8 != 0) {
    fn_0010edfc();
    fn_002feef8();
  }
  DAT_008977e8 = 0;
  if (DAT_008977e0 != (int *)0x0) {
    (**(code **)(*DAT_008977e0 + 4))();
  }
  DAT_008977e0 = (int *)0x0;
  fn_001085b8(DAT_008977e4);
  if (DAT_008977e4 != 0) {
    fn_00108748();
    fn_002feef8();
  }
  DAT_008977e4 = 0;
  if (DAT_00897848 != (int *)0x0) {
    (**(code **)(*DAT_00897848 + 4))();
  }
  DAT_00897848 = (int *)0x0;
  if (DAT_00897844 != (int *)0x0) {
    (**(code **)(*DAT_00897844 + 4))();
  }
  DAT_00897844 = (int *)0x0;
  fn_0010f2a0();
  fn_001093e0();
  fn_00108e84();
  if (DAT_0089781c != (int *)0x0) {
    (**(code **)(*DAT_0089781c + 4))();
  }
  DAT_0089781c = (int *)0x0;
  if (DAT_00897818 != 0) {
    fn_00109b68();
    fn_002feef8();
  }
  DAT_00897818 = 0;
  if (DAT_00897814 != 0) {
    fn_00109478();
    fn_002feef8();
  }
  DAT_00897814 = 0;
  if (DAT_00897810 != (int *)0x0) {
    (**(code **)(*DAT_00897810 + 4))();
  }
  DAT_00897810 = (int *)0x0;
  if (DAT_0089780c != (int *)0x0) {
    (**(code **)(*DAT_0089780c + 4))();
  }
  DAT_0089780c = (int *)0x0;
  if (DAT_00897808 != (int *)0x0) {
    (**(code **)(*DAT_00897808 + 4))();
  }
  DAT_00897808 = (int *)0x0;
  fn_0010e15c(DAT_00897804);
  if (DAT_00897804 != (int *)0x0) {
    (**(code **)(*DAT_00897804 + 4))();
  }
  DAT_00897804 = (int *)0x0;
  fn_00108c94(DAT_00897838);
  if (DAT_00897838 != (int *)0x0) {
    (**(code **)(*DAT_00897838 + 4))();
  }
  DAT_00897838 = (int *)0x0;
  fn_0010da54(DAT_00897850);
  if (DAT_00897850 != (int *)0x0) {
    (**(code **)(*DAT_00897850 + 4))();
  }
  DAT_00897850 = (int *)0x0;
  fn_001097d4(DAT_00897800);
  if (DAT_00897800 != (int *)0x0) {
    (**(code **)(*DAT_00897800 + 4))();
  }
  DAT_00897800 = (int *)0x0;
  fn_00108948();
  fn_0010f57c();
  if (DAT_008977fc != (int *)0x0) {
    (**(code **)(*DAT_008977fc + 4))();
  }
  DAT_008977fc = (int *)0x0;
  fn_00108bd8(DAT_008977f4);
  if (DAT_008977f4 != (int *)0x0) {
    (**(code **)(*DAT_008977f4 + 4))();
  }
  DAT_008977f4 = (int *)0x0;
  if (DAT_008977f0 != (int *)0x0) {
    (**(code **)(*DAT_008977f0 + 4))();
  }
  DAT_008977f0 = (int *)0x0;
  if (DAT_008977f8 != 0) {
    fn_00109204();
    fn_002feef8();
  }
  DAT_008977f8 = 0;
  if (DAT_008977dc != 0) {
    fn_0010c7e8();
    fn_002feef8();
  }
  DAT_008977dc = 0;
  if (DAT_00897824 != 0) {
    fn_0010b134();
    fn_002feef8();
  }
  DAT_00897824 = 0;
  if (DAT_008977d8 != (int *)0x0) {
    (**(code **)(*DAT_008977d8 + 4))();
  }
  DAT_008977d8 = (int *)0x0;
  if (DAT_008977d4 != (int *)0x0) {
    (**(code **)(*DAT_008977d4 + 4))();
  }
  DAT_008977d4 = (int *)0x0;
  if (DAT_008977d0 != (int *)0x0) {
    (**(code **)(*DAT_008977d0 + 4))();
  }
  DAT_008977d0 = (int *)0x0;
  if (DAT_008977cc != (int *)0x0) {
    (**(code **)(*DAT_008977cc + 4))();
  }
  DAT_008977cc = (int *)0x0;
  return;
}



void fn_00108e84(void)

{
  if (DAT_008987bc != (int *)0x0) {
    (**(code **)(*DAT_008987bc + 4))();
  }
  DAT_008987bc = (int *)0x0;
  return;
}



void fn_0010768c(void)

{
  if (DAT_0089a504 != (int *)0x0) {
    (**(code **)(*DAT_0089a504 + 4))();
    DAT_0089a504 = (int *)0x0;
  }
  return;
}



void fn_00107558(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 4);
  if (*(char *)(iVar4 + 0x7d) == '\0') {
    fn_0010d5fc();
    fn_0010d5b8(1);
    fn_00117590(*(undefined4 *)(iVar4 + 0x60));
    uVar1 = fn_0015e218();
    uVar2 = fn_0015e284();
    fn_0014ff08(uVar2,uVar1);
    if (*(char *)(iVar4 + 0x7d) == '\0') {
      fn_0010d83c(iVar4 + 100);
    }
    fn_0010d8dc(iVar4 + 0x6c);
    iVar3 = fn_0011838c(1);
    fn_0012bc84(0x203,iVar4 + iVar3 * 4 + 0x98);
    fn_0010fa70(0xffffffff);
    fn_0010d590();
    fn_0010d5b8(0);
  }
  fn_0010d5b8(1);
  if (*(char *)(iVar4 + 0x7d) != '\0') {
    fn_0010d83c(iVar4 + 100);
  }
  fn_0012b560();
  fn_0010d90c(iVar4 + 100);
  fn_0010d5b8(0);
  fn_001177a4(*(undefined4 *)(iVar4 + 0x38));
  fn_001177a4(*(undefined4 *)(iVar4 + 0x3c));
  if (*(char *)(iVar4 + 0x8c) != '\0') {
    fn_001177a4(*(undefined4 *)(iVar4 + 0x40));
  }
  *(undefined1 *)(iVar4 + 0x94) = 1;
  return;
}



void fn_001073dc(void)

{
  int *piVar1;
  int *piVar2;
  
  if (DAT_0089a514 != (int *)0x0) {
    fn_0010fa38(*DAT_0089a514);
    fn_0010fa38(DAT_0089a514[1]);
  }
  piVar1 = DAT_0089a514;
  if (DAT_0089a514 != (int *)0x0) {
    if ((int *)DAT_0089a514[1] != (int *)0x0) {
      (**(code **)(*(int *)DAT_0089a514[1] + 4))();
    }
    piVar2 = (int *)*piVar1;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    fn_002feef8(piVar1);
    DAT_0089a514 = (int *)0x0;
  }
  return;
}


