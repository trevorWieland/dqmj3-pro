#include "004166e0_00416e5c.h"



void fn_00416e5c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00397f10();
  *puVar1 = &PTR_LAB_008392e8;
  *(undefined1 *)(puVar1 + 0x36) = 0;
  return;
}



void fn_00416e58(int param_1)

{
  if (*(int **)(param_1 + 0xb0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xb0) + 0x14))();
  }
  if (*(int **)(param_1 + 0xb4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xb4) + 0x14))();
  }
  fn_002c4304(param_1);
  return;
}



void fn_00416e54(int *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int extraout_r1;
  undefined4 uVar5;
  int extraout_r1_00;
  uint uVar6;
  int iVar7;
  uint auStack_24 [2];
  
  (**(code **)(*(int *)param_1[0x27] + 0x30))((int *)param_1[0x27],0,auStack_24);
  uVar6 = 0;
  iVar4 = param_1[0x1f] - param_1[0x1e] >> 2;
  iVar7 = *(int *)(param_1[0x27] + 0xe4);
  if (0 < iVar4) {
    do {
      uVar1 = param_1[0x1f] - param_1[0x1e] >> 2;
      if (uVar1 <= uVar6) {
        fn_002ff628(9,&DAT_008c7653,&DAT_008c7653,uVar6,uVar1);
      }
      piVar2 = *(int **)(param_1[0x1e] + uVar6 * 4);
      if (param_1[0x2b] ==
          (param_1[0x1f] - param_1[0x1e] >> 2) * *(int *)(param_1[0x27] + 0xcc) + uVar6) {
        fn_002b20a4(param_1[0x25]);
      }
      else {
        if (uVar6 == auStack_24[0]) {
          uVar5 = 2;
        }
        else {
          uVar5 = 1;
        }
        fn_0031b3c4(piVar2,uVar5);
      }
      iVar3 = iVar4 * *(int *)(param_1[0x27] + 0xcc) + uVar6;
      if ((param_1[0x2b] == iVar3) || ((0 < iVar7 && (iVar7 <= iVar3)))) {
        if (piVar2[0xd] != 0) {
          fn_0031b474(piVar2,0);
        }
        (**(code **)(*piVar2 + 0x20))(piVar2,0);
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < iVar4);
  }
  iVar4 = param_1[0x2b];
  if (*(int *)(param_1[0x27] + 0xcc) == *(int *)(param_1[0x27] + 200) + -1) {
    if (iVar4 != -1) {
      fn_00169f1c(iVar4,param_1[0x1f] - param_1[0x1e] >> 2);
      (**(code **)(*(int *)param_1[0x25] + 0x20))((int *)param_1[0x25],1);
      iVar4 = (**(code **)(*(int *)param_1[0x25] + 0x1c))();
      if (iVar4 != 0) {
        *(float *)(iVar4 + 0x20) =
             *(float *)(*(int *)(param_1[0x21] + extraout_r1 * 4) + 0x20) + 9.0;
        *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xef | 0x10;
      }
      fn_001c9d80(param_1[0x27],extraout_r1);
      fn_001c9d44(param_1[0x27],extraout_r1,*(undefined4 *)(param_1[0x25] + 0x1c),0);
    }
  }
  else if (iVar4 != -1) {
    fn_00169f1c(iVar4,param_1[0x1f] - param_1[0x1e] >> 2);
    (**(code **)(*(int *)param_1[0x25] + 0x20))((int *)param_1[0x25],0);
    fn_001c9d80(param_1[0x27],extraout_r1_00);
    fn_001c9d44(param_1[0x27],extraout_r1_00,
                 *(undefined4 *)(*(int *)(param_1[0x1e] + extraout_r1_00 * 4) + 0x14),0);
  }
  (**(code **)(*param_1 + 0x134))(param_1);
  return;
}



void fn_00416e48(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x002c3dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x130))();
  return;
}



void fn_00416e44(void)

{
  return;
}



void fn_00416e40(undefined4 param_1)

{
  fn_0068ab44(param_1,0x100094c);
  return;
}



void fn_00416d24(void)

{
  fn_0022f750((char *)&DAT_00416d2c);
  return;
}



undefined4 fn_00416c80(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)fn_001f74ec(param_1,199);
  puVar3 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00895de0) goto LAB_00416cc8;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_00416cc8:
  *(undefined4 **)(param_1 + 0xd0) = puVar1;
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0xc9);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008951cc) {
        puVar3 = puVar1;
        break;
      }
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  *(undefined4 **)(param_1 + 0xd4) = puVar3;
  return 1;
}



void fn_00416c40(int param_1)

{
  uint uVar1;
  
  uVar1 = fn_006f6a38();
  if ((uVar1 & 0x100000) == 0) {
    if ((uVar1 & 0x200000) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0xd4) + 0x18) = 2;
      return;
    }
  }
  else {
    *(undefined1 *)(*(int *)(param_1 + 0xd4) + 0x18) = 1;
  }
  return;
}



void fn_00416bec(int param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4)

{
  fn_0036c648(*(undefined4 *)(param_1 + 0x5c),param_4);
  *(undefined1 *)(*(int *)(param_1 + 0x5c) + 10) = 1;
  fn_0036c140(*(undefined4 *)(param_1 + 0x5c),param_2);
  *(undefined1 *)(*(int *)(param_1 + 0x5c) + 8) = param_3;
  fn_00689bd0(param_1,0x48,0);
  return;
}



void fn_004166e0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  float fVar7;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  
  if (*(char *)(param_1 + 100) == '\0') {
    iVar2 = fn_0041697c(param_1);
    if (iVar2 == 0) {
      return;
    }
    if (*(char *)(param_1 + 0x65) == '\0') {
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
    *(undefined1 *)(param_1 + 100) = 1;
  }
  fn_001088e0(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x80));
  fVar7 = 1.0;
  iVar2 = fn_00154a6c();
  if ((iVar2 != 0) && (*(char *)(param_1 + 100) == '\x01')) {
    fn_00159f34(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x80));
    *(undefined1 *)(param_1 + 100) = 2;
    uVar3 = fn_0010887c(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x78));
    *(undefined4 *)(param_1 + 0x80) = uVar3;
  }
  cVar1 = *(char *)(*(int *)(param_1 + 0x70) + 9);
  bVar6 = cVar1 == '\0';
  if (bVar6) {
    cVar1 = *(char *)(param_1 + 100);
  }
  if (bVar6 && cVar1 == '\x02') {
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  uVar5 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x24) + 8);
  iVar2 = fn_00176d68(uVar5);
  uVar3 = *(undefined4 *)(param_1 + 0x9c);
  uVar4 = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(iVar2 + 0x58) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(iVar2 + 0x68) = uVar3;
  *(undefined4 *)(iVar2 + 0x78) = uVar4;
  *(uint *)(iVar2 + 0x88) = *(uint *)(iVar2 + 0x88) | 0x800;
  uVar3 = fn_00176d68(uVar5);
  fn_005456f4(uVar3,param_1 + 0x8c);
  local_38 = *(float *)(*(int *)(param_1 + 0x74) + 0x20);
  local_34 = -*(float *)(*(int *)(param_1 + 0x74) + 0x1c);
  if (*(char *)(param_1 + 0x65) == '\0') {
    local_38 = local_38 - 10.0;
  }
  local_30 = 0.0;
  iVar2 = fn_00176d68(uVar5);
  fn_0016947c(&local_2c,iVar2 + 0x148,&local_38);
  local_38 = local_2c;
  local_34 = local_28;
  local_30 = local_24;
  iVar2 = fn_00176d68(uVar5);
  fVar7 = fVar7 / (*(float *)(iVar2 + 0x1dc) * local_34 + *(float *)(iVar2 + 0x1e0) * local_30 +
                  *(float *)(iVar2 + 0x1e4) + *(float *)(iVar2 + 0x1d8) * local_38);
  local_2c = (*(float *)(iVar2 + 0x1ac) * local_34 + *(float *)(iVar2 + 0x1b0) * local_30 +
             *(float *)(iVar2 + 0x1b4) + *(float *)(iVar2 + 0x1a8) * local_38) * fVar7;
  local_28 = (*(float *)(iVar2 + 0x1bc) * local_34 + *(float *)(iVar2 + 0x1c0) * local_30 +
             *(float *)(iVar2 + 0x1c4) + *(float *)(iVar2 + 0x1b8) * local_38) * fVar7;
  local_24 = (*(float *)(iVar2 + 0x1cc) * local_34 + *(float *)(iVar2 + 0x1d0) * local_30 +
             *(float *)(iVar2 + 0x1d4) + *(float *)(iVar2 + 0x1c8) * local_38) * fVar7;
  fn_002b18e8(*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x84),&local_2c);
  fn_002b1a28(*(undefined4 *)(param_1 + 0x6c));
  return;
}



undefined4 fn_0041697c(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  iVar2 = fn_002b1588(*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x84));
  iVar3 = fn_006f7d68();
  uVar6 = 0;
  if (iVar3 != 0) {
    uVar6 = 0x40490fdb;
    if (*(char *)(param_1 + 0x65) == '\x02') {
      uVar6 = 0x3f32b8c3;
    }
    local_38 = 0x3f800000;
    local_34 = 0x3f800000;
    local_30 = 0x3f800000;
    fn_002b1b20(*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x84),&local_38);
    uVar5 = 0;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    fn_002b18e8(*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x84),&local_38);
    local_38 = uVar5;
    local_34 = uVar6;
    local_30 = uVar5;
    fn_002b1b78(*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x84),&local_38);
    piVar4 = (int *)fn_002b1588(*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x84));
    (**(code **)(*piVar4 + 0x1c))(piVar4,1);
    fn_0069e2d0(*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x84));
    uVar6 = *(undefined4 *)(DAT_00897804 + 8);
    if (*(char *)(param_1 + 0x65) == '\x01') {
      iVar3 = fn_006b64bc(uVar6);
      if (iVar3 == 0) {
        iVar3 = fn_005ef148(*(undefined4 *)(iVar2 + 0x14));
        iVar3 = iVar3 + -1;
      }
      else {
        iVar3 = 0;
      }
      *(int *)(param_1 + 0x88) = iVar3;
    }
    cVar1 = *(char *)(param_1 + 0x65);
    if (cVar1 == '\0') {
      uVar5 = 0xd;
    }
    else if (cVar1 == '\x01') {
      uVar5 = *(undefined4 *)(param_1 + 0x88);
    }
    else if (cVar1 == '\x02') {
      uVar5 = 0xe;
    }
    else {
      uVar5 = 0;
    }
    fn_0018d060(*(undefined4 *)(iVar2 + 0x14),uVar5,0);
    iVar3 = fn_006b64bc(uVar6);
    if (iVar3 != 0) {
      if (*(char *)(param_1 + 0x65) == '\0') {
        fn_0069decc(iVar2,1);
      }
      else if (*(char *)(param_1 + 0x65) == '\x02') {
        fn_0069decc(iVar2,3);
      }
    }
    uVar6 = 1;
  }
  return uVar6;
}


