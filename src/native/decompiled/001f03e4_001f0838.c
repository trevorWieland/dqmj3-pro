#include "001f03e4_001f0838.h"



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_001f0838(undefined4 param_1,int param_2)

{
  undefined4 local_10;
  
  if (param_2 != 0) {
    local_10 = _DAT_008912d0;
    fn_0036a800(DAT_00897824,&local_10);
  }
  *(char *)(DAT_00897824 + 0x40) = (char)param_2;
  return;
}



void fn_001f07e0(int param_1,uint param_2)

{
  int iVar1;
  
  if (((-1 < (int)param_2) && (param_2 < 0x50)) &&
     (iVar1 = *(int *)(param_1 + param_2 * 0x2c + 0x8c), iVar1 != 0)) {
    if (*(char *)(iVar1 + 0xdc) == '\x02') {
      fn_00211070(iVar1,*(undefined4 *)(param_1 + 0x80));
      return;
    }
    if (*(char *)(iVar1 + 0xdc) == '\x03') {
      fn_0068655c(iVar1,*(undefined4 *)(param_1 + 0x80));
      return;
    }
  }
  return;
}



void fn_001f07b4(void)

{
  int iVar1;
  undefined4 in_s0;
  
  iVar1 = fn_006f7a0c(DAT_008977e0);
  *(undefined4 *)(*(int *)(iVar1 + 0x30) + 0x8c) = in_s0;
  return;
}



void fn_001f0788(void)

{
  int iVar1;
  undefined4 in_s0;
  
  iVar1 = fn_006f7a0c(DAT_008977e0);
  *(undefined4 *)(*(int *)(iVar1 + 0x30) + 0x88) = in_s0;
  return;
}



void fn_001f075c(void)

{
  int iVar1;
  undefined4 in_s0;
  
  iVar1 = fn_006f7a0c(DAT_008977e0);
  *(undefined4 *)(*(int *)(iVar1 + 0x30) + 0x84) = in_s0;
  return;
}



void fn_001f0704(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006abd58(param_1,param_3);
  if ((((iVar1 == 0) || ((int)param_2 < 0)) || (0x4f < param_2)) ||
     (iVar2 = *(int *)(param_1 + param_2 * 0x2c + 0x8c), iVar2 == 0)) {
    return;
  }
  fn_001c72c0(iVar2,iVar1 + 0x20);
  return;
}



undefined4 fn_001f06a8(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((-1 < (int)param_3) && (param_3 < 0x50)) {
    iVar1 = *(int *)(param_1 + param_3 * 0x2c + 0x8c);
    if ((iVar1 != 0) && (iVar1 = fn_0017fde4(*(undefined4 *)(iVar1 + 0xe4)), iVar1 != 0)) {
      uVar2 = fn_00159fa4(param_1,param_2);
      return uVar2;
    }
  }
  return 0xffffffff;
}



void fn_001f068c(int param_1)

{
  fn_002dbe90(*(undefined4 *)(param_1 + 0xe80));
  *(undefined1 *)(param_1 + 0xf98) = 1;
  return;
}



void fn_001f0650(int param_1,uint param_2)

{
  if (param_2 < 6) {
    fn_006941e8(DAT_008977e0,(int)(char)(&DAT_007c124c)[param_2],1);
  }
  *(undefined1 *)(param_1 + 0xf94) = 0;
  return;
}



void fn_001f063c(void)

{
  fn_002b0af8(*(undefined4 *)(DAT_00897804 + 100));
  return;
}



void fn_001f060c(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = fn_006f72b4(DAT_008977e0);
  fn_0021a84c(uVar1,param_2,0);
  return;
}



void fn_001f05f0(void)

{
  fn_006f7a70(DAT_008977e0);
  fn_002fee00();
  return;
}



void fn_001f05cc(int param_1)

{
  fn_006962dc(DAT_008977e0);
  *(undefined1 *)(param_1 + 0xf94) = 0;
  return;
}



void fn_001f0558(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  undefined4 local_20;
  
  uVar2 = *(undefined4 *)(DAT_00897804 + 0x28);
  uVar1 = fn_00229714(uVar2,3);
  local_28 = (undefined1)param_2;
  local_27 = (undefined1)param_3;
  local_26 = (undefined1)param_4;
  local_25 = param_5;
  local_20 = fn_003454c8(param_2,param_3,param_4);
  fn_00228db8(uVar2,uVar1,&local_28);
  return;
}



void fn_001f0504(int param_1,uint param_2,undefined1 param_3)

{
  int iVar1;
  
  iVar1 = fn_006f7a20(DAT_008977e0);
  if ((((iVar1 != 0) && (-1 < (int)param_2)) && (param_2 < 0x50)) &&
     (iVar1 = *(int *)(param_1 + param_2 * 0x2c + 0x8c), iVar1 != 0)) {
    *(undefined1 *)(iVar1 + 0x2f4) = param_3;
  }
  return;
}



void fn_001f04c8(int param_1,uint param_2,int param_3)

{
  int iVar1;
  
  if (((-1 < (int)param_2) && (param_2 < 0x50)) &&
     (iVar1 = *(int *)(param_1 + param_2 * 0x2c + 0x8c), iVar1 != 0)) {
    *(uint *)(iVar1 + 0x138) = *(uint *)(iVar1 + 0x138) & 0xfffffff7 | param_3 << 3;
  }
  return;
}



void fn_001f04a8(undefined4 param_1,uint param_2)

{
  if (param_2 < 6) {
    fn_0025b21c(*(undefined4 *)(DAT_00897804 + 8));
    return;
  }
  return;
}



void fn_001f0474(void)

{
  int iVar1;
  
  iVar1 = fn_006f7a5c(DAT_008977e0);
  *(undefined1 *)(iVar1 + 0xc) = 2;
  fn_006f7a5c(DAT_008977e0);
  fn_001d92ac();
  return;
}



void fn_001f0444(void)

{
  fn_0017fe34();
  fn_006f7a5c(DAT_008977e0);
  fn_001d91ec();
  return;
}



void fn_001f03e4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = fn_006f7a20(DAT_008977e0);
  if (iVar1 == 0) {
    fn_00682c6c(*(undefined4 *)(DAT_008977e0 + 0x3c),param_2);
    return;
  }
  fn_001ce8ec(param_1,param_2);
  return;
}


