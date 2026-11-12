#include "0066c6cc_00735248.h"



void fn_00735248(uint param_1)

{
  uint *puVar1;
  
  puVar1 = DAT_008bfab0;
  param_1 = param_1 & ~DAT_008bfab0[2];
  if ((param_1 & 1) != 0) {
    *DAT_008bfab0 = *DAT_008bfab0 | 0x100000;
  }
  if ((param_1 & 2) != 0) {
    *puVar1 = *puVar1 | 0x10000;
  }
  if ((param_1 & 4) != 0) {
    *puVar1 = *puVar1 | 0x1800000;
  }
  if ((param_1 & 8) != 0) {
    *puVar1 = *puVar1 | 0x600000;
  }
  if ((param_1 & 0x10) != 0) {
    *puVar1 = *puVar1 | 0x10000;
  }
  if ((param_1 & 0x20) != 0) {
    *puVar1 = *puVar1 | 0x80000;
  }
  if ((param_1 & 0x40) != 0) {
    *puVar1 = *puVar1 | 0x2004038;
    fn_00301f50(puVar1 + 0x43,0x84);
    fn_00301f50(puVar1 + 100,0x84);
  }
  if ((param_1 & 0x80) != 0) {
    *puVar1 = *puVar1 | 0x1c00;
  }
  if ((param_1 & 0x100) != 0) {
    *puVar1 = *puVar1 | 1;
  }
  if ((param_1 & 0x200) != 0) {
    *puVar1 = *puVar1 | 0x80c2;
  }
  if ((param_1 & 0x400) != 0) {
    *puVar1 = *puVar1 | 4;
  }
  if ((param_1 & 0x800) != 0) {
    *puVar1 = *puVar1 | 0x100;
  }
  if ((param_1 & 0x1000) != 0) {
    *puVar1 = *puVar1 | 0x200;
  }
  puVar1[1] = puVar1[1] | param_1;
  return;
}



void fn_006f7358(void)

{
  fn_006af880(*(undefined4 *)(DAT_008977e0 + 0x1c),*(undefined4 *)(DAT_008977e0 + 0xa8));
  return;
}



void fn_006f637c(void)

{
  fn_006afa24(*(undefined4 *)(DAT_008977e0 + 0x1c),*(undefined4 *)(DAT_008977e0 + 0xa8));
  return;
}



void fn_006ba4ec(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x006ba4f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0xc) + 0x5c))();
  return;
}



void fn_006899f4(int param_1)

{
  fn_001f748c(*(undefined4 *)(*(int *)(param_1 + 4) + 0x18));
  return;
}



void fn_006896fc(int param_1)

{
  fn_0028eac0(*(undefined4 *)(*(int *)(param_1 + 4) + 0x18));
  return;
}



void fn_00689210(int *param_1,undefined4 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0068921c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2c))(param_1,param_2,1);
  return;
}



undefined4 fn_0066c6cc(int param_1)

{
  int iVar1;
  int *piVar2;
  int local_50 [3];
  undefined1 local_44 [4];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 auStack_38 [3];
  undefined1 auStack_2c [12];
  undefined1 auStack_20 [12];
  undefined4 local_14;
  
  if (*(char *)(*(int *)(param_1 + 0x9c) + 0x10) != '\x01') {
    fn_00456400();
  }
  fn_00147be0(param_1 + 0x590);
  *(undefined4 *)(param_1 + 0x544) = 0;
  *(undefined4 *)(param_1 + 0x4ac) = 0;
  fn_0013d1d0(param_1 + 0x4b0);
  (**(code **)(**(int **)(param_1 + 0x8c) + 0x10))();
  (**(code **)**(undefined4 **)(param_1 + 0x8c))();
  fn_002feca8(*(undefined4 *)(param_1 + 0x88));
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  (**(code **)(**(int **)(param_1 + 0x94) + 0x10))();
  (**(code **)**(undefined4 **)(param_1 + 0x94))();
  fn_002feca8(*(undefined4 *)(param_1 + 0x90));
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  (**(code **)(**(int **)(param_1 + 0xa4) + 0x10))();
  (**(code **)**(undefined4 **)(param_1 + 0xa4))();
  fn_002feca8(*(undefined4 *)(param_1 + 0xa0));
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  if (DAT_008bf4f4 != (int *)0x0) {
    (**(code **)(*DAT_008bf4f4 + 4))();
  }
  fn_004bbbf0(local_50,*(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x9c));
  local_44[0] = 1;
  iVar1 = fn_006d3b54(local_50,local_44);
  if (iVar1 == 0) {
    local_40 = 0x10001;
    piVar2 = (int *)fn_004b8d4c(auStack_38,&local_40);
    if (local_50[0] != *piVar2) {
      local_3c = 0x80010004;
      piVar2 = (int *)fn_004b8d4c(auStack_2c,&local_3c);
      if (local_50[0] != *piVar2) {
        local_14 = 0x8001000d;
        fn_004b8d4c(auStack_20,&local_14);
      }
    }
  }
  else {
    fn_004562e0(*(undefined4 *)(param_1 + 0x9c),0xffffffff);
    iVar1 = *(int *)(param_1 + 0x9c);
    if (*(char *)(iVar1 + 0x10) == '\x02') {
      return 0;
    }
    local_40 = *(undefined4 *)(iVar1 + 0x38);
    local_3c = *(undefined4 *)(iVar1 + 0x3c);
    auStack_38[0] = *(undefined4 *)(iVar1 + 0x40);
    fn_004b8d90(local_50,&local_40);
  }
  fn_006688a0(param_1,param_1 + 0x74,local_50,0);
  return 0xffffffff;
}


