#include "005b73f8_005b8428bb.h"



void fn_005b8428(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x20,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005b8458(iVar1,param_1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x005b83d8) */
/* WARNING: Removing unreachable block (ram,0x005b83a0) */
/* WARNING: Removing unreachable block (ram,0x005b8408) */

void fn_005b8364(int param_1)

{
  undefined1 local_14 [8];
  
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 2;
  local_14[0] = 0;
  fn_0010217c(param_1 + 0x14,0,*(undefined4 *)(*(int *)(param_1 + 0x14) + -4),local_14,0,0,0);
  local_14[0] = 0;
  fn_0010217c(param_1 + 0x18,0,*(undefined4 *)(*(int *)(param_1 + 0x18) + -4),local_14,0,0,0);
  local_14[0] = 0;
  fn_0010217c(param_1 + 0x1c,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + -4),local_14,0,0,0);
  return;
}



void fn_005b8354(int param_1)

{
  fn_001008cc(param_1 + 0x1c);
  return;
}



void fn_005b8344(int param_1)

{
  fn_001008cc(param_1 + 0x14);
  return;
}



void fn_005b8334(int param_1)

{
  fn_001008cc(param_1 + 0x18);
  return;
}



void fn_005b82f4(undefined4 *param_1)

{
  *param_1 = &DAT_00848ea0;
  if ((int *)param_1[3] != (int *)0x0) {
    (**(code **)(*(int *)param_1[3] + 4))();
  }
  fn_002feef8(param_1);
  return;
}


