#include "00527164_00527870a.h"



void fn_00527488(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined *puStack_124;
  undefined4 auStack_120 [14];
  undefined *local_e8;
  undefined1 auStack_e4 [196];
  
  local_e8 = &DAT_008575a0;
  fn_00158f6c(param_1,0x20);
  iVar1 = fn_0051e634();
  if (iVar1 < 0) {
    fn_00146594();
  }
  iVar1 = fn_0051e7ac(param_1,0xc);
  if (iVar1 < 0) {
    fn_00146594();
  }
  iVar1 = fn_0051e7dc();
  if (iVar1 < 0) {
    fn_00146594();
  }
  fn_00755a98(auStack_e4,param_4,0x10);
  puStack_124 = &DAT_00857518;
  auStack_120[0] = 0;
  fn_00527600(auStack_120,&local_e8,param_1,0xc,0,param_3,0x10);
  fn_00527310(&puStack_124,param_1 + 0x10,param_1 + 0x20,param_3,0,0,param_2,param_3,0x10);
  fn_00527ca8(auStack_120);
  return;
}



undefined4 fn_005273d8(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined *puStack_134;
  undefined4 auStack_130 [14];
  undefined *local_f8;
  undefined1 auStack_f4 [212];
  
  param_3 = param_3 + -0x20;
  local_f8 = &DAT_008575a0;
  fn_00755a98(auStack_f4,param_4,0x10);
  puStack_134 = &DAT_008574e4;
  auStack_130[0] = 0;
  fn_00527600(auStack_130,&local_f8,param_2,0xc,0,param_3,0x10);
  uVar1 = fn_0052720c(&puStack_134,param_1,param_3,0,0,param_2 + 0x20,param_3,param_2 + 0x10,0x10);
  fn_00527ca8(auStack_130);
  return uVar1;
}



void fn_00527310(int *param_1,undefined4 param_2,int param_3,uint param_4,undefined4 param_5,
                 int param_6,undefined4 param_7,int param_8,undefined4 param_9)

{
  uint uVar1;
  int iVar2;
  
  if (param_6 != 0) {
    (**(code **)(*param_1 + 0x18))(param_1,param_5,param_6,*(code **)(*param_1 + 0x18),param_4);
    (**(code **)(*param_1 + 0x1c))(param_1);
  }
  if (param_8 != 0) {
    uVar1 = (**(code **)(*param_1 + 0x20))(param_1,param_3,param_4,param_7,param_8);
    if ((param_4 < uVar1) ||
       (iVar2 = (**(code **)(*param_1 + 0x24))(param_1,param_3 + uVar1,param_4 - uVar1),
       param_4 < iVar2 + uVar1)) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x005273d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))(param_1,param_2,param_9);
  return;
}



undefined4
fn_0052720c(int *param_1,int param_2,uint param_3,undefined4 param_4,int param_5,undefined4 param_6
            ,int param_7,undefined4 param_8,int param_9)

{
  uint uVar1;
  int iVar2;
  undefined4 uStack_28;
  
  uStack_28 = param_4;
  if (param_5 != 0) {
    (**(code **)(*param_1 + 0x18))(param_1,param_4);
    (**(code **)(*param_1 + 0x1c))(param_1);
  }
  if ((param_7 == 0) ||
     ((uVar1 = (**(code **)(*param_1 + 0x20))(param_1,param_2,param_3,param_6,param_7),
      uVar1 <= param_3 &&
      (iVar2 = (**(code **)(*param_1 + 0x24))(param_1,param_2 + uVar1,param_3 - uVar1),
      iVar2 + uVar1 <= param_3)))) {
    iVar2 = -(param_9 + 7U & 0xfffffff8);
    (**(code **)(*param_1 + 0x28))(param_1,(int)&uStack_28 + iVar2,param_9);
    iVar2 = fn_001010c8((int)&uStack_28 + iVar2,param_8,param_9);
    if (iVar2 == 0) {
      return 1;
    }
  }
  return 0;
}



void fn_00527164(uint *param_1)

{
  undefined *local_78 [17];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  
  local_78[0] = &DAT_008574b8;
  local_30 = 0;
  local_2c = 0;
  local_34 = 0;
  local_28 = 0x67452301;
  local_24 = 0xefcdab89;
  local_20 = 0x98badcfe;
  local_1c = 0x10325476;
  local_18 = 0xc3d2e1f0;
  fn_00125e98(local_78);
  fn_00125e10(local_78);
  *param_1 = local_28 << 0x18 | (local_28 >> 8 & 0xff) << 0x10 | (local_28 >> 0x10 & 0xff) << 8 |
             local_28 >> 0x18;
  param_1[1] = local_24 << 0x18 | (local_24 >> 8 & 0xff) << 0x10 | (local_24 >> 0x10 & 0xff) << 8 |
               local_24 >> 0x18;
  param_1[2] = local_20 << 0x18 | (local_20 >> 8 & 0xff) << 0x10 | (local_20 >> 0x10 & 0xff) << 8 |
               local_20 >> 0x18;
  param_1[3] = local_1c << 0x18 | (local_1c >> 8 & 0xff) << 0x10 | (local_1c >> 0x10 & 0xff) << 8 |
               local_1c >> 0x18;
  param_1[4] = local_18 << 0x18 | (local_18 >> 8 & 0xff) << 0x10 | (local_18 >> 0x10 & 0xff) << 8 |
               local_18 >> 0x18;
  return;
}


