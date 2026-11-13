#include "0040ffc4_00410b58.h"



void fn_00410b58(void)

{
                    /* WARNING: Subroutine does not return */
  fn_002c3de4();
}



void fn_00410ac0(int param_1)

{
  fn_002c3d68();
  fn_006899f4(param_1,0x81,0);
                    /* WARNING: Could not recover jumptable at 0x00410af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0xb0) + 0xc))();
  return;
}



undefined4 fn_00410868(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined1 local_22;
  undefined1 local_21;
  undefined1 local_20;
  undefined1 local_1e;
  undefined1 local_1d;
  
  puVar6 = (undefined4 *)param_1[6];
  if (puVar6 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar6)(puVar6);
    do {
      if (puVar1 == &DAT_008939cc) goto LAB_004108b4;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar6 = (undefined4 *)0x0;
LAB_004108b4:
  param_1[0x2c] = (int)puVar6;
  uVar2 = (**(code **)(*param_1 + 0x138))(param_1);
  fn_002c330c(&local_50);
  local_50 = DAT_00893924;
  local_4c = DAT_00893928;
  uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
  fn_00147974(&local_34,uVar3);
  local_48 = 6;
  local_44 = *(undefined4 *)(param_1[0x2c] + 8);
  local_40 = *(undefined4 *)(param_1[0x2c] + 0xc);
  local_21 = 1;
  uStack_3c = uVar2;
  (**(code **)(*param_1 + 0x14c))(param_1);
  iVar4 = (**(code **)(*param_1 + 0x150))(param_1);
  if (iVar4 != 0) {
    local_22 = 1;
    fn_00147974(&local_30);
  }
  local_20 = 0;
  local_1e = 1;
  local_1d = 0;
  fn_002c29a0(param_1,&local_50);
  (**(code **)(*param_1 + 0x13c))(param_1);
  if (local_28 != &DAT_008f9cf4) {
    piVar5 = local_28 + -3;
    iVar4 = *piVar5;
    if ((iVar4 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar4 + -1, iVar4 == 0)))) {
      fn_001008c4(local_28 + -3,local_28[-2] + 8,0);
    }
  }
  if (local_2c != &DAT_008f9cf4) {
    piVar5 = local_2c + -3;
    iVar4 = *piVar5;
    if ((iVar4 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar4 + -1, iVar4 == 0)))) {
      fn_001008c4(local_2c + -3,local_2c[-2] + 8,0);
    }
  }
  if (local_30 != &DAT_008f9cf4) {
    piVar5 = local_30 + -3;
    iVar4 = *piVar5;
    if ((iVar4 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar4 + -1, iVar4 == 0)))) {
      fn_001008c4(local_30 + -3,local_30[-2] + 8,0);
    }
  }
  if (local_34 != &DAT_008f9cf4) {
    piVar5 = local_34 + -3;
    iVar4 = *piVar5;
    if ((iVar4 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar4 + -1, iVar4 == 0)))) {
      fn_001008c4(local_34 + -3,local_34[-2] + 8,0);
    }
  }
  return 1;
}



void fn_004104d8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 auStack_30 [32];
  
  iVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x6c));
  uVar4 = *(undefined4 *)(iVar1 + 0x10);
  uVar3 = 0;
  if (*(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0xb4) >> 4 != 0) {
    do {
      fn_001028d4(auStack_30,(char *)&DAT_004105cc,uVar3);
      uVar2 = fn_0068897c(uVar4,auStack_30);
      *(undefined4 *)(*(int *)(param_1 + 0xb4) + uVar3 * 0x10) = uVar2;
      fn_001028d4(auStack_30,(char *)&DAT_004105d8,uVar3);
      uVar2 = fn_0068897c(uVar4,auStack_30);
      *(undefined4 *)(*(int *)(param_1 + 0xb4) + uVar3 * 0x10 + 4) = uVar2;
      fn_001028d4(auStack_30,(char *)&DAT_004105e8,uVar3);
      uVar2 = fn_0068897c(uVar4,auStack_30);
      *(undefined4 *)(*(int *)(param_1 + 0xb4) + uVar3 * 0x10 + 8) = uVar2;
      fn_001028d4(auStack_30,(char *)&DAT_004105f8,uVar3);
      uVar2 = fn_0068897c(uVar4,auStack_30);
      iVar1 = uVar3 * 0x10;
      uVar3 = uVar3 + 1;
      *(undefined4 *)(*(int *)(param_1 + 0xb4) + iVar1 + 0xc) = uVar2;
    } while (uVar3 < (uint)(*(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0xb4) >> 4));
  }
  return;
}



void fn_004104b4(void)

{
  fn_0012d73c(DAT_00894c68);
  DAT_00894c68 = 0;
  return;
}



undefined4 fn_0041044c(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = fn_00118290();
  DAT_00894c68 = fn_0011c184(L"rom:/data/Parameter/LocationParam.tp",uVar1,4,5);
  iVar2 = fn_00145ac0();
  if (iVar2 != 0) {
    uVar1 = fn_00145ac0(DAT_00894c68);
    iVar2 = fn_00147e6c(uVar1,&DAT_004104ac,4);
    if (iVar2 == 0) {
      return 1;
    }
  }
  return 0;
}



undefined1 fn_00410428(int param_1)

{
  int iVar1;
  
  iVar1 = fn_00145ac0(DAT_00894c68);
  return *(undefined1 *)(iVar1 + 4 + param_1 * 4);
}



undefined1 fn_00410400(int param_1)

{
  int iVar1;
  
  iVar1 = fn_00145ac0(DAT_00894c68);
  return *(undefined1 *)(iVar1 + param_1 * 4 + 7);
}



undefined1 fn_004103d8(int param_1)

{
  int iVar1;
  
  iVar1 = fn_00145ac0(DAT_00894c68);
  return *(undefined1 *)(iVar1 + param_1 * 4 + 5);
}



undefined1 fn_004103b0(int param_1)

{
  int iVar1;
  
  iVar1 = fn_00145ac0(DAT_00894c68);
  return *(undefined1 *)(iVar1 + param_1 * 4 + 6);
}



void fn_00410384(void)

{
  undefined8 uVar1;
  
  uVar1 = fn_0012a26c(DAT_00894c68);
  fn_0011c134((uint)uVar1 - 4,(int)((ulonglong)uVar1 >> 0x20) - (uint)((uint)uVar1 < 4),4,0);
  return;
}



undefined4 *
fn_004101f4(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)fn_0069e7cc(param_1,param_2,param_3,param_4,param_5);
  *puVar1 = &DAT_0083854c;
  uVar2 = *(undefined4 *)(param_2 + 8);
  puVar1[6] = 0xffffffff;
  puVar1[5] = uVar2;
  puVar1[7] = 0xffffffff;
  puVar1[8] = &DAT_008f9d04;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  *(undefined1 *)(puVar1 + 0xc) = 1;
  *(undefined1 *)((int)puVar1 + 0x31) = 1;
  *(undefined1 *)((int)puVar1 + 0x32) = 0;
  *(undefined1 *)((int)puVar1 + 0x33) = 0;
  *(undefined1 *)(puVar1 + 0xd) = 0;
  *(undefined1 *)((int)puVar1 + 0x35) = 0;
  *(undefined1 *)((int)puVar1 + 0x36) = 0;
  *(undefined1 *)((int)puVar1 + 0x37) = 0;
  uVar3 = *(undefined4 *)(*(int *)(param_3 + 0xac) + 0x10);
  uVar2 = fn_0068897c(uVar3,(char *)&DAT_004102d8);
  puVar1[9] = uVar2;
  uVar2 = fn_0068897c(uVar3,(char *)&DAT_004102e8);
  puVar1[10] = uVar2;
  uVar2 = fn_0068897c(uVar3,(char *)&DAT_004102f4);
  puVar1[0xb] = uVar2;
  fn_0040ffc4(puVar1,param_6,param_7,param_8);
  return puVar1;
}



void fn_0040ffc4(int param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  uint local_2c;
  uint local_28;
  
  piVar7 = (int *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  uVar1 = fn_002febd8(param_4);
  puVar8 = &DAT_008f9cf8;
  puVar2 = (undefined1 *)*piVar7;
  if (uVar1 == 0) {
    piVar3 = (int *)(puVar2 + -0xc);
    iVar4 = *piVar3;
    if (iVar4 != 0) {
      if ((puVar2 != &DAT_008f9d04) &&
         ((iVar4 == -1 || ((piVar3 != &DAT_008f9cf8 && (*piVar3 = iVar4 + -1, iVar4 == 0)))))) {
        fn_001008c4(*piVar7 + -0xc,*(int *)(*piVar7 + -8) + 0xe,0);
      }
      *piVar7 = (int)&DAT_008f9d04;
      return;
    }
    *(undefined4 *)(puVar2 + -4) = 0;
    puVar2 = (undefined1 *)*piVar7;
  }
  else {
    if (((1 < *(int *)(puVar2 + -0xc) + 1U) || (*(uint *)(puVar2 + -8) < uVar1)) ||
       ((param_4 != (undefined1 *)0x0 &&
        ((puVar2 <= param_4 && (param_4 < puVar2 + *(int *)(puVar2 + -4))))))) {
      uVar5 = *(uint *)(puVar2 + -4);
      local_2c = uVar5 + (uVar5 >> 1) + (uVar5 >> 3);
      if (local_2c < uVar5 + 0x80) {
        local_2c = uVar5 + 0x80;
      }
      local_28 = uVar1;
      puVar6 = &local_2c;
      if (local_2c < uVar1) {
        puVar6 = &local_28;
      }
      uVar5 = *puVar6;
      if (0xfffffff1 < uVar5) {
        fn_002ff628(8,&DAT_008c7615,&DAT_008c7615,uVar5,0xfffffff1);
      }
      if (uVar5 < uVar1) {
        fn_002ff628(8,&DAT_008c7615,&DAT_008c7615,uVar1,uVar5);
      }
      if (uVar5 != 0) {
        puVar8 = (undefined4 *)fn_00100fc6(uVar5 + 0xe,0);
        if (puVar8 != (undefined4 *)0x0) {
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8[2] = 0;
        }
        puVar2 = (undefined1 *)((int)puVar8 + uVar1 + 0xc);
        *puVar8 = 0;
        puVar8[1] = uVar5;
        puVar8[2] = uVar1;
        if (puVar2 != (undefined1 *)0x0) {
          *puVar2 = 0;
        }
      }
      fn_00301a9c(puVar8 + 3,param_4,uVar1);
      if ((undefined1 *)*piVar7 != &DAT_008f9d04) {
        piVar3 = (int *)((undefined1 *)*piVar7 + -0xc);
        iVar4 = *piVar3;
        if ((iVar4 == -1) || ((piVar3 != &DAT_008f9cf8 && (*piVar3 = iVar4 + -1, iVar4 == 0)))) {
          fn_001008c4(*piVar7 + -0xc,*(int *)(*piVar7 + -8) + 0xe,0);
        }
      }
      *piVar7 = (int)(puVar8 + 3);
      return;
    }
    fn_00301b24(puVar2,param_4,uVar1);
    *(uint *)(*piVar7 + -4) = uVar1;
    puVar2 = (undefined1 *)(*piVar7 + uVar1);
  }
  *puVar2 = 0;
  return;
}


