#include "0015c37c_0015cd34aa.h"



int * fn_0015c8b8(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_00174840(DAT_008977e4);
  if (param_1[1] != -1) {
    fn_0016a43c();
    param_1[1] = -1;
  }
  if (*param_1 != -1) {
    fn_00192f50(uVar1);
    *param_1 = -1;
  }
  return param_1;
}



undefined4 * fn_0015c37c(undefined4 *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28 [2];
  
  uVar2 = fn_00174840(DAT_008977e4);
  uVar3 = fn_0016dd18(uVar2,4);
  *param_1 = uVar3;
  local_6c = 0;
  uVar3 = fn_0016dcdc(uVar2,uVar3,4,0,1);
  param_1[1] = uVar3;
  iVar4 = fn_00178f9c(uVar2,uVar3);
  piVar5 = *(int **)(iVar4 + 0x10);
  param_1[2] = piVar5;
  uVar2 = (**(code **)(*piVar5 + 0x2c))(piVar5,(char *)&DAT_0015c79c,1);
  bVar1 = 0;
  param_1[3] = uVar2;
  do {
    local_68 = 0;
    local_5c = 0;
    local_64 = 0;
    local_60 = 0;
    local_58 = 0;
    local_54 = 0;
    local_48 = 0;
    local_50 = 0;
    local_4c = 0;
    local_44 = 0;
    local_40 = 0;
    local_34 = 0;
    local_3c = 0;
    local_38 = 0;
    local_30 = 0;
    local_2c = 0;
    fn_0017d96c(&local_68,0x40,0x3f,(char *)&DAT_0015c7ac,bVar1);
    uVar2 = (**(code **)(*(int *)param_1[3] + 0x2c))((int *)param_1[3],&local_68,1);
    local_6c = 0xff3250ff;
    fn_0017a8a4(param_1,uVar2,&local_6c);
    bVar1 = bVar1 + 1;
  } while (bVar1 < 3);
  uVar2 = (**(code **)(*(int *)param_1[3] + 0x2c))((int *)param_1[3],(char *)&DAT_0015c7bc,1);
  local_28[0] = 0xff3250ff;
  fn_0017a8a4(param_1,uVar2,local_28);
  uVar2 = (**(code **)(*(int *)param_1[2] + 0x2c))((int *)param_1[2],(char *)&DAT_0015c7c8,1);
  bVar1 = 0;
  param_1[0x3d] = uVar2;
  do {
    local_68 = 0;
    local_5c = 0;
    local_64 = 0;
    local_60 = 0;
    local_58 = 0;
    local_54 = 0;
    local_48 = 0;
    local_50 = 0;
    local_4c = 0;
    local_44 = 0;
    local_40 = 0;
    local_34 = 0;
    local_3c = 0;
    local_38 = 0;
    local_30 = 0;
    local_2c = 0;
    fn_0017d96c(&local_68,0x40,0x3f,(char *)&DAT_0015c7d8,bVar1);
    uVar2 = (**(code **)(*(int *)param_1[0x3d] + 0x2c))((int *)param_1[0x3d],&local_68,1);
    local_6c = 0xff607fff;
    fn_0017a8a4(param_1,uVar2,&local_6c);
    bVar1 = bVar1 + 1;
  } while (bVar1 < 0x20);
  uVar2 = (**(code **)(*(int *)param_1[2] + 0x2c))((int *)param_1[2],(char *)&DAT_0015c7e8,1);
  local_28[0] = 0xff3250ff;
  fn_0017a8a4(param_1,uVar2,local_28);
  uVar2 = (**(code **)(*(int *)param_1[2] + 0x2c))((int *)param_1[2],(char *)&DAT_0015c7f4,1);
  param_1[4] = uVar2;
  uVar8 = 0;
  do {
    local_68 = 0;
    local_5c = 0;
    local_64 = 0;
    local_60 = 0;
    local_58 = 0;
    local_54 = 0;
    local_48 = 0;
    local_50 = 0;
    local_4c = 0;
    local_44 = 0;
    local_40 = 0;
    local_34 = 0;
    local_3c = 0;
    local_38 = 0;
    local_30 = 0;
    local_2c = 0;
    fn_0017d96c(&local_68,0x40,0x3f,(char *)&DAT_0015c800,uVar8);
    uVar2 = (**(code **)(*(int *)param_1[4] + 0x2c))((int *)param_1[4],&local_68,1);
    param_1[uVar8 + 5] = uVar2;
    fn_0017d96c(&local_68,0x40,0x3f,(char *)&DAT_0015c814,uVar8);
    uVar2 = (**(code **)(*(int *)param_1[4] + 0x2c))((int *)param_1[4],&local_68,1);
    param_1[uVar8 + 0xf] = uVar2;
    fn_0017d96c(&local_68,0x40,0x3f,(char *)&DAT_0015c828,uVar8);
    uVar2 = (**(code **)(*(int *)param_1[4] + 0x2c))((int *)param_1[4],&local_68,1);
    uVar7 = uVar8 + 1;
    param_1[uVar8 + 0x19] = uVar2;
    uVar8 = uVar7;
  } while (uVar7 < 10);
  uVar2 = (**(code **)(*(int *)param_1[4] + 0x2c))((int *)param_1[4],&DAT_0015c83c,1);
  param_1[0x23] = uVar2;
  uVar2 = (**(code **)(*(int *)param_1[4] + 0x2c))((int *)param_1[4],(char *)&DAT_0015c840,1);
  param_1[0x24] = uVar2;
  uVar8 = 0;
  do {
    local_68 = 0;
    local_5c = 0;
    local_64 = 0;
    local_60 = 0;
    local_58 = 0;
    local_54 = 0;
    local_48 = 0;
    local_50 = 0;
    local_4c = 0;
    local_44 = 0;
    local_40 = 0;
    local_34 = 0;
    local_3c = 0;
    local_38 = 0;
    local_30 = 0;
    local_2c = 0;
    fn_0017d96c(&local_68,0x40,0x3f,(char *)&DAT_0015c84c,uVar8);
    uVar2 = (**(code **)(*(int *)param_1[2] + 0x2c))((int *)param_1[2],&local_68,1);
    uVar7 = uVar8 + 1;
    param_1[uVar8 + 0x25] = uVar2;
    uVar8 = uVar7;
  } while (uVar7 < 0x18);
  iVar9 = 0;
  param_1[0x47] = 0;
  do {
    iVar6 = fn_002febd8((&DAT_008902b0)[iVar9]);
    if (iVar6 == 0) {
      param_1[iVar9 + 0x3e] = 0;
    }
    else {
      uVar2 = fn_0017dd54(iVar4,(&DAT_008902b0)[iVar9],0);
      param_1[iVar9 + 0x3e] = uVar2;
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 < 4);
  *(undefined1 *)(param_1 + 0x48) = 1;
  param_1[0x44] = 0;
  *(undefined1 *)(param_1 + 0x42) = 0;
  param_1[0x43] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  return param_1;
}


