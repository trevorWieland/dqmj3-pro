#include "002c4304_002c6230b.h"



void fn_002c6230(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_28;
  int local_24 [2];
  int local_1c;
  
  fn_0042fb68();
  if ((char)param_1[0x1f] == '\0') {
    iVar1 = (**(code **)(*(int *)param_1[0x40] + 0x90))();
    if (-1 < iVar1) {
      fn_002c07c0(local_24);
      local_24[0] = 7;
      local_1c = iVar1;
      iVar1 = (**(code **)(*(int *)param_1[0x40] + 0xa0))();
      if (iVar1 < 0) {
        (**(code **)(*param_1 + 0x154))(param_1,local_24[0],local_1c);
        if (param_1[0x19] != local_24[0]) {
          local_28 = 1;
          (**(code **)(*param_1 + 0x110))(param_1,local_24[0],local_1c,0);
        }
      }
      else {
        (**(code **)(*param_1 + 0x130))(param_1,local_24);
      }
    }
    iVar1 = (**(code **)(*(int *)param_1[0x40] + 0x6c))();
    if (-1 < iVar1) {
      if (param_1[0x19] == 7) {
        fn_002c6f28(param_1,iVar1,0);
      }
      else {
        local_28 = 1;
        (**(code **)(*param_1 + 0x110))(param_1,7,0);
      }
    }
    iVar1 = (**(code **)(*(int *)param_1[0x40] + 100))();
    if (-1 < iVar1) {
      if (param_1[0x19] == 7) {
        fn_002c6f28(param_1,iVar1,1);
      }
      else {
        local_28 = 1;
        (**(code **)(*param_1 + 0x110))(param_1,7,iVar1,0);
      }
    }
  }
  if (param_1[0x19] == 7) {
    iVar1 = (**(code **)(*(int *)param_1[0x40] + 0xa8))();
    if (-1 < iVar1) {
                    /* WARNING: Could not recover jumptable at 0x002c63b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x158))(param_1);
      return;
    }
    iVar1 = (**(code **)(*(int *)param_1[0x40] + 0xc0))();
    if (iVar1 < 0) {
      iVar1 = (**(code **)(*(int *)param_1[0x40] + 0x6c))();
      if (-1 < iVar1) {
        fn_002c6f28(param_1,iVar1,0);
      }
      iVar1 = (**(code **)(*(int *)param_1[0x40] + 100))();
      if (-1 < iVar1) {
        fn_002c6f28(param_1,iVar1,1);
      }
      iVar1 = (**(code **)(*(int *)param_1[0x40] + 0x34))();
      if (iVar1 != 0) {
        uVar2 = (**(code **)(*(int *)param_1[0x40] + 0x5c))();
        (**(code **)(*param_1 + 0x144))(param_1,param_1[0x19],uVar2);
      }
      iVar1 = (**(code **)(*(int *)param_1[0x40] + 0x38))();
      if (iVar1 != 0) {
        uVar2 = (**(code **)(*(int *)param_1[0x40] + 0x5c))();
                    /* WARNING: Could not recover jumptable at 0x002c64fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x148))(param_1,param_1[0x19],uVar2);
        return;
      }
    }
    else {
      fn_002c07c0(&local_28);
      (**(code **)(*param_1 + 0x140))(param_1,&local_28);
    }
  }
  return;
}



void fn_002c61e0(undefined4 *param_1)

{
  *param_1 = &DAT_0081f378;
  if (*(char *)(param_1 + 0x2e) != '\x03') {
    fn_001218d4(DAT_00897800,DAT_008987a8);
  }
  fn_002c471c(param_1);
  fn_002feef8();
  return;
}



undefined4 * fn_002c6180(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002c4694();
  puVar1[0x2c] = 0;
  *puVar1 = &DAT_0081f378;
  puVar1[0x2d] = 0;
  *(undefined1 *)(puVar1 + 0x2e) = 0;
  puVar1[0x2f] = 0xffffffff;
  *(undefined1 *)(puVar1 + 0x30) = 0;
  *(undefined1 *)((int)puVar1 + 0xc1) = 0;
  fn_00121838(DAT_00897800,DAT_008987a8,1);
  return puVar1;
}



void fn_002c5f78(int *param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  fn_002c4304();
  if ((char)param_1[0x2e] == '\x02') {
    iVar1 = fn_00689b18(param_1);
    uVar2 = fn_0028eb38(*(undefined4 *)(iVar1 + 0xc));
    bVar3 = uVar2 == 0;
    if (bVar3) {
      uVar2 = (uint)*(byte *)(param_1 + 0x30);
    }
    if (bVar3 && uVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x002c5fc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x110))(param_1);
      return;
    }
  }
  return;
}



void fn_002c5bec(int *param_1)

{
  uint uVar1;
  
  uVar1 = fn_006f6a5c();
  if ((uVar1 & 0x20000) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x002c5c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x110))(param_1);
  return;
}


