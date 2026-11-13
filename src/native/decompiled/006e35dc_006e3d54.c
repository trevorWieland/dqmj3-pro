#include "006e35dc_006e3d54.h"



undefined4 fn_006e3d54(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 in_s0;
  
  fn_00156454(param_1[1],param_3);
  uVar2 = fn_006e2db4();
  fn_006e2fa4();
  *param_2 = in_s0;
  uVar1 = fn_006e2f80(uVar2);
  *(undefined1 *)((int)param_2 + 9) = uVar1;
  uVar1 = fn_006e2f58(uVar2);
  *(undefined1 *)((int)param_2 + 10) = uVar1;
  fn_006e2de4(uVar2,(int)param_2 + 0xb,param_2 + 3,2);
  uVar3 = fn_006e2ed0(uVar2);
  fn_00176fb0(param_2 + 1,uVar3);
  if (*(uint *)(*param_1 + 8) < 0x1000100) {
    *(undefined1 *)((int)param_2 + 0xe) = 0x40;
    uVar1 = 0;
    *(undefined1 *)((int)param_2 + 0xf) = 0;
  }
  else {
    uVar1 = fn_006e2dc0(uVar2);
    *(undefined1 *)((int)param_2 + 0xe) = uVar1;
    uVar1 = fn_006e2f08(uVar2);
    *(undefined1 *)((int)param_2 + 0xf) = uVar1;
    uVar1 = fn_006e2f30(uVar2);
  }
  *(undefined1 *)(param_2 + 4) = uVar1;
  return 1;
}



undefined4 fn_006e3b8c(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int local_28 [2];
  undefined1 local_20;
  
  iVar2 = param_1[1];
  if (iVar2 == 0) {
    return 0;
  }
  uVar1 = param_2 >> 0x18;
  uVar3 = 0;
  if (uVar1 == 1) {
    fn_0014565c(iVar2,param_2,local_28);
  }
  else if (uVar1 == 3) {
    local_28[0] = -1;
    fn_00145604(iVar2,param_2,local_28);
  }
  else if (uVar1 == 5) {
    local_20 = 0;
    local_28[0] = -1;
    fn_00156328(param_1[1],param_2,local_28);
  }
  else {
    if (uVar1 != 6) {
      return 0;
    }
    local_28[0] = -1;
    local_28[1] = 0;
    fn_006e2b84(param_1[1],param_2,local_28);
  }
  if (local_28[0] != -1) {
    uVar3 = (**(code **)(*param_1 + 0x10))(param_1);
  }
  return uVar3;
}



undefined4 fn_006e3974(int param_1,undefined4 param_2,undefined4 *param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  puVar1 = *(uint **)(param_1 + 8);
  uVar2 = fn_002febd8(param_2);
  uVar3 = *puVar1;
  uVar5 = 0;
  if (0 < (int)uVar3) {
    do {
      if (uVar5 < uVar3) {
        iVar6 = puVar1[uVar5 * 2 + 2] + (int)puVar1;
      }
      else {
        iVar6 = 0;
      }
      iVar4 = fn_00147e6c(param_2,iVar6 + 0xc,uVar2);
      if (iVar4 == 0) {
        *param_3 = *(undefined4 *)(iVar6 + 4);
        return 1;
      }
      uVar3 = *puVar1;
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < (int)uVar3);
  }
  return 0;
}



int fn_006e3968(int param_1)

{
  return param_1 + *(int *)(param_1 + 0x10);
}



int fn_006e395c(int param_1)

{
  return param_1 + *(int *)(param_1 + 0x10);
}



undefined4 fn_006e3928(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint local_8 [2];
  
  local_8[0] = param_4;
  iVar1 = fn_00176c24(param_1 + 0x18,local_8,0);
  uVar2 = 0;
  if ((iVar1 != 0) && (uVar2 = 1, (local_8[0] & 0xffff) >> 8 != 1)) {
    uVar2 = 0;
  }
  return uVar2;
}



int fn_006e390c(int param_1)

{
  if (*(short *)(param_1 + 4) == 0x101) {
    param_1 = param_1 + *(int *)(param_1 + 8);
  }
  else {
    param_1 = 0;
  }
  return param_1;
}



uint fn_006e38e4(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint local_8 [2];
  
  local_8[0] = param_4;
  iVar1 = fn_00176c24(param_1 + 0x18,local_8,0);
  if (iVar1 == 0) {
    local_8[0] = 1;
  }
  else {
    local_8[0] = local_8[0] & 0xff;
  }
  return local_8[0];
}



undefined4 fn_006e38c4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_8 [2];
  
  local_8[0] = param_4;
  iVar1 = fn_00176c24(param_1 + 0x18,local_8,1);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = local_8[0];
  }
  return uVar2;
}



undefined4 fn_006e38a4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_8 [2];
  
  local_8[0] = param_4;
  iVar1 = fn_00176c24(param_1 + 0x18,local_8,2);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = local_8[0];
  }
  return uVar2;
}



int fn_006e3850(int param_1)

{
  if ((*(int *)(param_1 + 0x1c) == -1) || (*(short *)(param_1 + 0x18) != 0x2210)) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + *(int *)(param_1 + 0x1c);
  }
  return param_1;
}



int fn_006e3834(int param_1)

{
  if (*(short *)(param_1 + 4) == 0x101) {
    param_1 = param_1 + *(int *)(param_1 + 8);
  }
  else {
    param_1 = 0;
  }
  return param_1;
}



int fn_006e3828(int param_1)

{
  return param_1 + *(int *)(param_1 + 0x14);
}



int fn_006e381c(int param_1)

{
  return param_1 + *(int *)(param_1 + 0x1c);
}



undefined4 fn_006e35dc(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  int iVar2;
  undefined4 local_10;
  
  local_10 = 0xffffffff;
  switch(param_2 >> 0x18) {
  default:
    goto switchD_006e35f0_caseD_0;
  case 1:
    if (param_2 >> 0x18 != 1) {
      return 0xffffffff;
    }
    puVar1 = (uint *)(param_1 + *(int *)(param_1 + 4));
    if (*puVar1 <= (param_2 & 0xffffff)) {
      return 0xffffffff;
    }
    if ((int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2] == 0) {
      return 0xffffffff;
    }
    local_10 = param_4;
    iVar2 = fn_00176c24((int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2] + 0x14,&local_10,0);
    break;
  case 2:
    if (param_2 >> 0x18 != 2) {
      return 0xffffffff;
    }
    puVar1 = (uint *)(param_1 + *(int *)(param_1 + 0xc));
    if (*puVar1 <= (param_2 & 0xffffff)) {
      return 0xffffffff;
    }
    if ((int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2] == 0) {
      return 0xffffffff;
    }
    local_10 = param_4;
    iVar2 = fn_00176c24((int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2] + 0x18,&local_10,0);
    break;
  case 3:
    if (param_2 >> 0x18 != 3) {
      return 0xffffffff;
    }
    puVar1 = (uint *)(param_1 + *(int *)(param_1 + 0x14));
    if (*puVar1 <= (param_2 & 0xffffff)) {
      return 0xffffffff;
    }
    if ((int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2] == 0) {
      return 0xffffffff;
    }
    local_10 = param_4;
    iVar2 = fn_00176c24((int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2] + 0xc,&local_10,0);
    break;
  case 4:
    if (param_2 >> 0x18 != 4) {
      return 0xffffffff;
    }
    puVar1 = (uint *)(param_1 + *(int *)(param_1 + 0x2c));
    if (*puVar1 <= (param_2 & 0xffffff)) {
      return 0xffffffff;
    }
    if ((int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2] == 0) {
      return 0xffffffff;
    }
    local_10 = param_4;
    iVar2 = fn_00176c24((int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2] + 4,&local_10,0);
    break;
  case 5:
    if (param_2 >> 0x18 != 5) {
      return 0xffffffff;
    }
    puVar1 = (uint *)(param_1 + *(int *)(param_1 + 0x1c));
    if (*puVar1 <= (param_2 & 0xffffff)) {
      return 0xffffffff;
    }
    if ((int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2] == 0) {
      return 0xffffffff;
    }
    local_10 = param_4;
    iVar2 = fn_00176c24((int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2] + 8,&local_10,0);
    break;
  case 6:
    if (param_2 >> 0x18 != 6) {
      return 0xffffffff;
    }
    puVar1 = (uint *)(param_1 + *(int *)(param_1 + 0x24));
    if (*puVar1 <= (param_2 & 0xffffff)) {
      return 0xffffffff;
    }
    if ((int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2] == 0) {
      return 0xffffffff;
    }
    local_10 = param_4;
    iVar2 = fn_00176c24((int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2] + 4,&local_10,0);
  }
  if (iVar2 == 0) {
    local_10 = 0xffffffff;
  }
switchD_006e35f0_caseD_0:
  return local_10;
}


