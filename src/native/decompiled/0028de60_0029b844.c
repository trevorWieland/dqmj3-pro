#include "0028de60_0029b844.h"



void fn_0029b844(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  float in_s0;
  float in_s1;
  float in_s2;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_48;
  float fStack_44;
  float fStack_40;
  float local_3c [3];
  uint local_30;
  uint local_2c;
  int local_28;
  
  uVar1 = fn_00182994(DAT_008977e4);
  iVar2 = fn_00175518(uVar1,param_2);
  if (iVar2 != 0) {
    uVar1 = fn_00182994(DAT_008977e4);
    fn_00175430(uVar1,param_2 & 0xff);
    fVar6 = in_s0;
    fVar7 = in_s1;
    fVar8 = in_s2;
    uVar1 = fn_00182994(DAT_008977e4);
    fn_00174900(uVar1,param_2 & 0xff);
    fStack_40 = in_s2 + fVar8;
    local_48 = in_s0 + fVar6;
    fStack_44 = in_s1 + fVar7;
    local_3c[1] = 0.0;
    local_3c[0] = local_48;
    local_3c[2] = fStack_40;
    iVar2 = fn_0061be08(param_2);
    if (iVar2 == 0) {
      uVar1 = 0x21;
    }
    else {
      uVar1 = 0x20;
    }
    uVar3 = fn_00182994(DAT_008977e4);
    fn_0016a51c(uVar3,uVar1);
    uVar3 = fn_00182994(DAT_008977e4);
    fn_0016a798(uVar3,uVar1);
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    fn_00191638(&local_30,&local_48);
    fn_00191638(&local_30,local_3c);
    uVar3 = fn_00182994(DAT_008977e4);
    fn_0016a5e4(uVar3,uVar1,&local_30);
    uVar3 = fn_00182994(DAT_008977e4);
    fn_00182c40(uVar3,uVar1,7,0);
    uVar3 = fn_00182994(DAT_008977e4);
    fn_0016a6d0(uVar3,uVar1,8);
    uVar3 = fn_00182994(DAT_008977e4);
    fn_00179a14(uVar3,uVar1);
    uVar5 = local_30;
    if (local_2c < local_30) {
      do {
        uVar5 = uVar5 + 0xc;
      } while (uVar5 != local_2c);
    }
    fn_001008c4(local_30,(int)(local_28 - local_30) / 0xc,0);
  }
  fn_0029a8a8(param_1,0xc,param_2 & 0xff);
  uVar1 = fn_00182994(DAT_008977e4);
  fn_001752d8(uVar1,param_2 & 0xff);
  piVar4 = (int *)fn_00182994(DAT_008977e4);
  (**(code **)(*piVar4 + 0xc))(piVar4,s_SE_BTL_009_008c513b);
  uVar1 = fn_00182994(DAT_008977e4);
  fn_00179a14(uVar1,param_2 & 0xff);
  uVar1 = fn_00182994(DAT_008977e4);
  fn_00174c60(uVar1,param_2 & 0xff);
  return;
}



void fn_00294440(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  undefined1 local_54 [2];
  undefined2 local_52 [15];
  char local_34;
  undefined1 local_33;
  undefined2 local_32;
  undefined2 local_30;
  char local_2e;
  undefined1 local_2d;
  undefined2 local_2c;
  undefined2 local_2a;
  char local_28;
  undefined1 local_27;
  undefined2 local_26;
  undefined2 local_24;
  char local_22;
  undefined1 local_21;
  undefined2 local_20;
  undefined2 local_1e;
  char local_1c;
  undefined1 local_1b;
  undefined2 local_1a;
  undefined2 local_18;
  
  fn_00301a9c(&local_34,param_4,0x1e);
  if (local_34 != '\0') {
    local_54[0] = 4;
    local_54[1] = local_33;
    local_52[0] = local_32;
    local_52[1] = local_30;
  }
  uVar2 = (uint)(local_34 != '\0');
  uVar1 = uVar2;
  if (local_2e != '\0') {
    uVar1 = uVar2 + 1;
    local_54[uVar2 * 6] = 0xd;
    local_54[uVar2 * 6 + 1] = local_2d;
    local_52[uVar2 * 3] = local_2c;
    local_52[uVar2 * 3 + 1] = local_2a;
  }
  uVar2 = uVar1;
  if (local_28 != '\0') {
    uVar2 = uVar1 + 1;
    local_54[uVar1 * 6] = 10;
    local_54[uVar1 * 6 + 1] = local_27;
    local_52[uVar1 * 3] = local_26;
    local_52[uVar1 * 3 + 1] = local_24;
  }
  uVar1 = uVar2;
  if (local_22 != '\0') {
    uVar1 = uVar2 + 1;
    local_54[uVar2 * 6] = 0xf;
    local_54[uVar2 * 6 + 1] = local_21;
    local_52[uVar2 * 3] = local_20;
    local_52[uVar2 * 3 + 1] = local_1e;
  }
  uVar2 = uVar1;
  if (local_1c != '\0') {
    uVar2 = uVar1 + 1;
    local_54[uVar1 * 6] = 8;
    local_54[uVar1 * 6 + 1] = local_1b;
    local_52[uVar1 * 3] = local_1a;
    local_52[uVar1 * 3 + 1] = local_18;
  }
  fn_003119e0(param_1,param_2,param_3,local_54,uVar2);
  return;
}



void fn_0029388c(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_110 [4];
  undefined1 auStack_10c [24];
  short local_f4;
  
  *(undefined1 *)(param_2 + 0xa70) = 6;
  *(undefined2 *)(param_2 + 0xa72) = *(undefined2 *)(param_1 + 10);
  fn_002ea524();
  *(undefined4 *)(param_2 + 0xa84) = param_1[7];
  *(undefined4 *)(param_2 + 0xa80) = *param_1;
  fn_00101144(param_2 + 4,param_1 + 1,0xc);
  fn_00101144(param_2 + 0x38,param_1 + 0xb,0x12);
  *(undefined1 *)(param_2 + 0x5e) = 0x2a;
  *(undefined2 *)(param_2 + 0x5c) = 0xf2;
  *(undefined2 *)(param_2 + 0x120) = 2;
  *(undefined1 *)(param_2 + 0x514) = *(undefined1 *)((int)param_1 + 0x2a);
  *(undefined1 *)(param_2 + 0x515) = 0xff;
  iVar4 = 0;
  *(undefined1 *)(param_2 + 0xa71) = 3;
  do {
    iVar2 = fn_0013add0((int)*(short *)((int)param_1 + iVar4 * 2 + 0x20));
    if (iVar2 == 0) {
      return;
    }
    fn_00237c74(auStack_110,(int)*(short *)((int)param_1 + iVar4 * 2 + 0x20),0xff,0);
    uVar3 = fn_0015b064((int)local_f4);
    fn_00101a50(auStack_10c,0x18,uVar3);
    fn_0017821c(param_2 + 4 + iVar4 * 0xf0 + 0x150,auStack_110,0xf0);
    iVar2 = iVar4 * 2;
    iVar1 = iVar4 * 2;
    iVar4 = iVar4 + 1;
    *(undefined2 *)(param_2 + iVar2 + 0xa78) = *(undefined2 *)((int)param_1 + iVar1 + 0x20);
  } while (iVar4 < 4);
  return;
}



void fn_0028f944(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x18);
  for (piVar1 = (int *)*piVar2; piVar1 != piVar2; piVar1 = (int *)*piVar1) {
    (**(code **)(*(int *)piVar1[2] + 0x20))();
  }
  return;
}



void fn_0028f59c(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    if (*(char *)(*(int *)(param_1 + 0xb0) + 0xd) == '\0') {
      uVar1 = fn_0022eed8((char *)&DAT_0028f708);
      uVar2 = fn_0022f750((char *)&DAT_00866ec0);
      fn_00321118(*(undefined4 *)(param_1 + 0x58),uVar2,uVar1);
    }
    else {
      uVar1 = fn_0022eed8((char *)&DAT_0028f6f8);
      uVar2 = fn_0022f750((char *)&DAT_00866ec0);
      fn_00321118(*(undefined4 *)(param_1 + 0x58),uVar2,uVar1);
    }
  }
  else if (param_2 == 1) {
    if (*(char *)(*(int *)(param_1 + 0xb0) + 0xd) == '\0') {
      uVar1 = fn_0022eed8((char *)&DAT_0028f728);
      uVar2 = fn_0022f750((char *)&DAT_00866eb4);
      fn_00321118(*(undefined4 *)(param_1 + 0x58),uVar2,uVar1);
    }
    else {
      uVar1 = fn_0022eed8((char *)&DAT_0028f718);
      uVar2 = fn_0022f750((char *)&DAT_00866eb4);
      fn_00321118(*(undefined4 *)(param_1 + 0x58),uVar2,uVar1);
    }
  }
  else if (param_2 == 2) {
    uVar1 = fn_0022eed8((char *)&DAT_0028f738);
    uVar2 = fn_0022f750((char *)&DAT_00866ed0);
    fn_00321118(*(undefined4 *)(param_1 + 0x58),uVar2,uVar1);
  }
  fn_00689bd0(param_1,0x49,0);
  return;
}



void fn_0028de60(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  fn_00376bec(*(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x4c) + 0xc));
  fn_001f7414(*(undefined4 *)(param_1 + 4),0xd4,0);
  fn_001f7414(*(undefined4 *)(param_1 + 4),0xd5,0);
  fn_001f7414(*(undefined4 *)(param_1 + 4),0xd7,0);
  fn_001f7414(*(undefined4 *)(param_1 + 4),0xd8,0);
  fn_001f7414(*(undefined4 *)(param_1 + 4),0xd9,0);
  iVar1 = fn_00154ac8(0x32);
  if ((iVar1 == 0) && (iVar1 = fn_00154ac8(0x31), iVar1 == 0)) {
    iVar1 = fn_00174828(DAT_008977e4);
    iVar1 = fn_006f4850(iVar1 + 0xe8);
    if ((iVar1 != 0) || (iVar1 = fn_00174828(DAT_008977e4), *(char *)(iVar1 + 0xe8) == '\x02'))
    goto LAB_0028dfc4;
    fn_001f7390(*(undefined4 *)(param_1 + 4),0xde,0);
    piVar2 = (int *)fn_0028eac8(*(undefined4 *)(*(int *)(param_1 + 4) + 0x14),0xde);
    if (piVar2 != (int *)0x0) {
      puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0xc))(piVar2);
      do {
        if (puVar3 == &DAT_00890948) goto LAB_0028df88;
        puVar3 = (undefined4 *)*puVar3;
      } while (puVar3 != (undefined4 *)0x0);
    }
    piVar2 = (int *)0x0;
LAB_0028df88:
    *(int **)(*(int *)(param_1 + 4) + 0x80) = piVar2;
    piVar4 = (int *)fn_0028c944(param_1 + 8,0);
    piVar2 = *(int **)(param_1 + 0xc);
    if (piVar2 == piVar4) {
      return;
    }
joined_r0x0028e090:
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
  }
  else {
LAB_0028dfc4:
    fn_001f748c(*(undefined4 *)(param_1 + 4),0,0);
    iVar1 = fn_00182988(DAT_008977e4);
    if (*(char *)(iVar1 + 0x39e) == '\0') {
      iVar1 = fn_00174828(DAT_008977e4);
      if (*(char *)(iVar1 + 0xe8) != '\x02') {
        piVar4 = (int *)fn_0028c944(param_1 + 8,0xb);
        piVar2 = *(int **)(param_1 + 0xc);
        if (piVar2 == piVar4) {
          return;
        }
        goto joined_r0x0028e090;
      }
      iVar1 = fn_00174834(DAT_008977e4);
      if (*(char *)(iVar1 + 0x180384) == '\x01') {
        piVar4 = (int *)fn_0028c944(param_1 + 8,0xc);
        piVar2 = *(int **)(param_1 + 0xc);
        if (piVar2 == piVar4) {
          return;
        }
      }
      else {
        piVar4 = (int *)fn_0028c944(param_1 + 8,0xb);
        piVar2 = *(int **)(param_1 + 0xc);
        if (piVar2 == piVar4) {
          return;
        }
      }
    }
    else {
      iVar1 = fn_00174834();
      if (*(char *)(iVar1 + 0x180384) == '\x01') {
        piVar4 = (int *)fn_0028c944(param_1 + 8,0xc);
        piVar2 = *(int **)(param_1 + 0xc);
        if (piVar2 == piVar4) {
          return;
        }
      }
      else {
        piVar4 = (int *)fn_0028c944(param_1 + 8,0xb);
        piVar2 = *(int **)(param_1 + 0xc);
        if (piVar2 == piVar4) {
          return;
        }
      }
    }
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
  }
  *(int **)(param_1 + 0xc) = piVar4;
  return;
}


