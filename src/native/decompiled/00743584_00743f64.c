#include "00743584_00743f64.h"



void fn_00743b5c(int param_1,int *param_2,int param_3,undefined4 param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  int local_4c;
  undefined1 auStack_48 [4];
  int local_44;
  int local_40;
  uint local_3c;
  int iStack_34;
  int *piStack_30;
  int local_2c;
  undefined4 local_28;
  
  iVar2 = DAT_008bfab0;
  iStack_34 = param_1;
  piStack_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  if (*(char *)(DAT_008bfab0 + 0x694) == '\0') {
    piVar1 = (int *)fn_006f9688();
  }
  else {
    piVar1 = (int *)fn_006f96a0();
  }
  fn_00743f64(local_28,&local_4c,auStack_48);
  iVar8 = 0x1401;
  if (*(char *)(iVar2 + 0x694) == '\0') {
    iVar2 = piVar1[7];
    if (iVar2 == 0) {
      if (local_4c == 0x6050) {
        iVar8 = 0x1403;
      }
    }
    else if (iVar2 == 2) {
      iVar8 = 0x8034;
    }
    else if (iVar2 == 3) {
      iVar8 = 0x8363;
    }
    else {
      if (iVar2 != 4) {
        return;
      }
      iVar8 = 0x8033;
    }
  }
  if (*param_2 != 0) {
    iVar2 = param_2[3];
    bVar11 = iVar2 == param_7;
    if (bVar11) {
      iVar2 = param_2[4];
    }
    if (((bVar11 && iVar2 == param_8) && (param_2[5] == local_4c)) &&
       (*(int *)(param_1 + 0x2c) == param_9)) {
      iVar2 = local_2c;
      if (param_2[0xd] == local_2c) {
        iVar2 = param_2[6];
      }
      if (param_2[0xd] == local_2c && iVar2 == iVar8) goto LAB_00743cbc;
    }
    fn_00158318(*(undefined4 *)(param_1 + 0x2c),param_2);
    if (*param_2 != 0) goto LAB_00743cbc;
  }
  fn_006fec98(param_7,param_8,local_4c,iVar8,local_2c,0,param_2);
  iVar2 = fn_007439cc(param_9,param_2);
  if (iVar2 == 0) {
    return;
  }
LAB_00743cbc:
  iVar8 = piVar1[3];
  bVar12 = SBORROW4(iVar8,param_5);
  iVar2 = iVar8 - param_5;
  bVar11 = iVar8 == param_5;
  if (param_5 < iVar8) {
    iVar8 = piVar1[4];
    bVar12 = SBORROW4(iVar8,param_6);
    iVar2 = iVar8 - param_6;
    bVar11 = iVar8 == param_6;
  }
  if (((!bVar11 && iVar2 < 0 == bVar12) && (iVar2 = param_5 + param_7, 0 < iVar2)) &&
     (iVar8 = param_6 + param_8, 0 < iVar8)) {
    fn_001467fc();
    iVar5 = piVar1[3];
    bVar10 = param_5 < 0;
    iVar3 = piVar1[4];
    if (iVar5 < iVar2) {
      bVar10 = bVar10 | 2;
    }
    if (param_6 < 0) {
      bVar10 = bVar10 | 4;
    }
    if (iVar3 < iVar8) {
      bVar10 = bVar10 | 8;
    }
    if (bVar10 == 0) {
      iVar2 = param_2[0xe];
      iVar8 = (((iVar3 - param_6) - param_8) * iVar5 + param_5 * 8) * iVar2;
      uVar14 = iVar2 * param_7 >> 4;
      uVar13 = 0;
      iVar3 = iVar2 * param_7 * param_8;
      iVar5 = iVar5 - param_7;
      param_7 = iVar8 + ((uint)(iVar8 >> 0x1f) >> 0x1d);
      uVar7 = iVar5 * iVar2 >> 4;
      iVar2 = *param_2;
      uVar6 = (int)(iVar3 + ((uint)(iVar3 >> 0x1f) >> 0x1d)) >> 3;
      iVar8 = *piVar1 + (param_7 >> 3);
    }
    else {
      if ((bVar10 & 1) == 0) {
        local_40 = 0;
        local_44 = param_5;
        iVar4 = param_7;
      }
      else {
        local_44 = 0;
        local_40 = -param_5;
        iVar4 = param_7 + param_5;
      }
      if ((bVar10 & 2) != 0) {
        iVar4 = iVar4 - (iVar2 - iVar5);
      }
      iVar2 = param_8;
      if ((bVar10 & 4) != 0) {
        iVar2 = param_8 + param_6;
      }
      if ((bVar10 & 8) == 0) {
        param_6 = param_8;
      }
      else {
        param_6 = iVar3 - param_6;
        iVar2 = iVar2 - (iVar8 - iVar3);
        iVar8 = iVar3;
      }
      iVar9 = param_2[0xe];
      uVar6 = (uint)(iVar9 * iVar4 * iVar2) >> 3;
      uVar13 = (uint)((param_7 - iVar4) * iVar9) >> 4;
      uVar14 = (uint)(iVar9 * iVar4) >> 4;
      uVar7 = (uint)((iVar5 - iVar4) * iVar9) >> 4;
      iVar8 = *piVar1 + ((uint)(((iVar3 - iVar8) * iVar5 + local_44 * 8) * iVar9) >> 3);
      iVar2 = *param_2 + ((uint)(((param_8 - param_6) * param_7 + local_40 * 8) * iVar9) >> 3);
      local_3c = uVar6;
    }
    fn_0072923c(iVar2,iVar8,uVar6,uVar7,uVar14,uVar13,uVar14);
    if (*(char *)(param_1 + 0x30) != '\0') {
      iVar8 = param_2[4];
      iVar2 = param_2[3];
      switch(param_2[7]) {
      case 0:
        param_7 = 0;
        break;
      case 1:
        param_7 = 1;
        break;
      case 2:
        param_7 = 3;
        break;
      case 3:
        param_7 = 2;
        break;
      case 4:
        param_7 = 4;
      }
      iVar5 = 1;
      iVar3 = *param_2;
      if (1 < param_2[0xd]) {
        do {
          iVar4 = param_2[0xe] * iVar2 * iVar8;
          iVar4 = iVar3 + ((int)(iVar4 + ((uint)(iVar4 >> 0x1f) >> 0x1d)) >> 3);
          fn_0072917c(iVar3,iVar4,iVar2,iVar8,param_7);
          iVar5 = iVar5 + 1;
          iVar2 = iVar2 >> 1;
          iVar8 = iVar8 >> 1;
          iVar3 = iVar4;
        } while (iVar5 < param_2[0xd]);
      }
    }
  }
  *(int *)(param_1 + 0x2c) = param_9;
  return;
}



void fn_00743f64(uint param_1,uint *param_2,undefined1 *param_3)

{
  uint uVar1;
  
  *param_3 = 1;
  switch(param_1 & 0xffff) {
  case 0x6752:
    uVar1 = 0x1908;
    break;
  default:
    *param_2 = param_1;
    *param_3 = 0;
    return;
  case 0x6754:
    uVar1 = 0x1907;
    break;
  case 0x6756:
    uVar1 = 0x1906;
    break;
  case 0x6757:
    uVar1 = 0x1909;
    break;
  case 0x6758:
    uVar1 = 0x190a;
    break;
  case 0x6759:
    uVar1 = 0x6700;
    break;
  case 0x675a:
    uVar1 = 0x675a;
    break;
  case 0x675b:
    uVar1 = 0x675b;
    break;
  case 0x675c:
    uVar1 = 0x6040;
    break;
  case 0x675d:
    uVar1 = 0x6050;
  }
  *param_2 = uVar1;
  return;
}



float fn_0074397c(float param_1)

{
  float fVar1;
  
  fVar1 = SQRT(param_1);
  if ((0x7f800000 - (int)ABS(fVar1) < 0) && (-1 < 0x7f800000 - (int)ABS(param_1))) {
    fn_0074397c(1);
  }
  return fVar1;
}



void fn_007437c8(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  uint local_20;
  int *local_1c;
  uint local_18;
  int *local_14;
  
  if (param_2 < 0) {
    puVar1 = (uint *)fn_00173d4c();
  }
  else {
    puVar1 = (uint *)fn_00173d40(param_1,param_2 + -1 + *(int *)(param_1 + 0x34));
  }
  local_20 = *puVar1;
  if ((local_20 & 0x8000000) == 0) {
    local_1c = (int *)puVar1[1];
    if ((local_20 & 0x8000000) != 0) {
      local_1c[1] = local_1c[1] + 1;
    }
    fn_00173d1c(param_1,&local_20);
    if (((local_20 & 0x8000000) != 0) &&
       (iVar2 = local_1c[1], local_1c[1] = iVar2 + -1, iVar2 + -1 == 0)) {
      (**(code **)(*local_1c + 8))();
      return;
    }
  }
  else {
    local_14 = (int *)fn_00233b7c(puVar1[1]);
    local_18 = 0x8010000;
    if (local_14 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      fn_00146590();
    }
    local_14[1] = local_14[1] + 1;
    fn_00173d1c(param_1,&local_18);
    if (((local_18 & 0x8000000) != 0) &&
       (iVar2 = local_14[1], local_14[1] = iVar2 + -1, iVar2 + -1 == 0)) {
      (**(code **)(*local_14 + 8))();
    }
  }
  return;
}



undefined4 fn_00743584(int param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint local_20;
  int *local_1c;
  
  local_20 = 0x1000001;
  local_1c = (int *)0x0;
  if (*(int *)(param_1 + 0x94) == 0) {
    uVar1 = fn_001581d0(param_1,(char *)&DAT_00743794);
    if (((local_20 & 0x8000000) != 0) &&
       (iVar3 = local_1c[1], local_1c[1] = iVar3 + -1, iVar3 + -1 == 0)) {
      (**(code **)(*local_1c + 8))();
    }
    return uVar1;
  }
  if (param_2 == 0) {
    uVar1 = fn_00173d40(param_1,*(int *)(param_1 + 0x9c) + *(int *)(param_1 + 0x34));
    fn_0019e864(uVar1,&DAT_008c06e8);
  }
  else {
    uVar1 = fn_00173d4c(param_1,0xffffffff);
    uVar2 = fn_00173d40(param_1,*(int *)(param_1 + 0x9c) + *(int *)(param_1 + 0x34));
    fn_0019e864(uVar2,uVar1);
    fn_0017ff68(param_1);
  }
  if (param_5 == 0) {
    uVar1 = 2;
  }
  else {
    uVar1 = 3;
  }
  iVar3 = fn_0018d65c(param_1,&DAT_008c06e8,*(undefined4 *)(param_1 + 0x30),0xffffffff,0xffffffff,
                       &local_20,param_4,uVar1);
  if (iVar3 == 0) {
    if (((local_20 & 0x8000000) != 0) &&
       (iVar3 = local_1c[1], local_1c[1] = iVar3 + -1, iVar3 + -1 == 0)) {
      (**(code **)(*local_1c + 8))();
    }
    return 0xffffffff;
  }
  if ((*(int *)(param_1 + 0x94) == 0) && (*(int *)(param_1 + 100) == 0)) {
    iVar3 = *(int *)(param_1 + 0x30);
    while (1 < iVar3) {
      *(int *)(param_1 + 0x30) = iVar3 + -1;
      fn_0019e864(*(int *)(param_1 + 0x18) + (iVar3 + -1) * 8,&DAT_008c06e8);
      iVar3 = *(int *)(param_1 + 0x30);
    }
  }
  if (param_3 != 0) {
    fn_00173d1c(param_1,&local_20);
  }
  if (((local_20 & 0x8000000) != 0) &&
     (iVar3 = local_1c[1], local_1c[1] = iVar3 + -1, iVar3 + -1 == 0)) {
    (**(code **)(*local_1c + 8))();
  }
  return 0;
}


