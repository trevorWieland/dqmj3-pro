#include "0013cc98_0013d40c.h"

static void svc_0x32(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x32 }
#endif
}


undefined4 * fn_0013d40c(undefined4 *param_1)

{
  *param_1 = &DAT_00855a94;
  fn_0015e6f0(param_1 + 1,&DAT_007db524);
  return param_1;
}



undefined4 * fn_0013d3e8(undefined4 *param_1)

{
  *param_1 = &DAT_00855a94;
  fn_0015e6f0(param_1 + 1);
  return param_1;
}



undefined1 * fn_0013d29c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined1 auStack_88 [12];
  int local_7c;
  undefined4 uStack_78;
  int local_70;
  undefined4 local_64;
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [24];
  
  iVar1 = fn_00156284();
  puVar5 = (undefined1 *)0x0;
  if (iVar1 != 0) {
    if (DAT_008a6470 == 0) {
      iVar2 = fn_0015ecdc(0xb0);
      iVar1 = 0;
      if (iVar2 != 0) {
        iVar1 = fn_0014ee88();
      }
      DAT_008a6470 = iVar1;
    }
    fn_0014ecf0(auStack_40);
    puVar3 = (undefined4 *)fn_0014f1e0(auStack_60);
    *puVar3 = &DAT_00855a18;
    uVar4 = fn_0014f470();
    fn_0014f440(puVar3,uVar4,0);
    puVar3 = (undefined4 *)fn_0014f1e0(auStack_88);
    *puVar3 = &DAT_00855a18;
    fn_0014f440(puVar3,0x10,0);
    fn_00156234(param_1,&local_64);
    uVar4 = fn_00156284(param_1);
    fn_0015ef58(auStack_60,local_64,uVar4,0xffffffff);
    fn_0014f4d8(local_64);
    fn_0014ec64(auStack_40,auStack_60,auStack_88);
    iVar1 = DAT_008a6470;
    uVar4 = fn_0014f24c(auStack_30,local_70 + local_7c,uStack_78);
    fn_0014f200(iVar1,uVar4);
    fn_0014f2b0(auStack_30);
    DAT_008a646c = 1;
    fn_0014f480(auStack_88);
    fn_0014f480(auStack_60);
    puVar5 = auStack_40;
  }
  return puVar5;
}



void fn_0013d1d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_18;
  
  *(undefined4 *)(param_1 + 0x34) = 0;
  local_18 = param_4;
  fn_0013d438(param_1 + 0x38,&DAT_007d96e0);
  iVar1 = *(int *)(param_1 + 0x44);
  if (*(int *)(param_1 + 0x40) != iVar1) {
    *(uint *)(param_1 + 0x44) = iVar1 - (iVar1 - *(int *)(param_1 + 0x40) & 0xfffffffcU);
  }
  local_18 = 0;
  fn_00158c6c((undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x40),6,&local_18);
  if (*(int *)(param_1 + 0x4c) != *(int *)(param_1 + 0x50)) {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x4c);
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  fn_0014f510(param_1 + 0x58,DAT_008b64f8);
  fn_0014f510(param_1 + 0x60,DAT_008b64f8);
  fn_0014f55c(param_1);
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 1;
  fn_0014f550(param_1,0x61,0,local_18);
  return;
}



undefined4 fn_0013d1a8(void)

{
  int iVar1;
  undefined4 in_r3;
  undefined4 local_8 [2];
  
  local_8[0] = in_r3;
  iVar1 = fn_00169c08(local_8,0xffff8000);
  if (iVar1 < 0) {
    fn_0015e294();
  }
  return local_8[0];
}



void fn_0013d0fc(int *param_1)

{
  uint local_20;
  int local_1c;
  int local_18;
  int iStack_14;
  
  if (DAT_008b6382 == '\0') {
    if (DAT_008b6381 == '\0') {
      DAT_008b6381 = '\x01';
      fn_0015eb44(&local_20);
      DAT_008b6518 = 1 - local_20;
      DAT_008b651c = -(local_1c + (uint)(1 < local_20));
      local_18 = 1;
      iStack_14 = 0;
    }
    else {
      fn_0015eb44(&local_20);
      local_18 = DAT_008b6518 + local_20;
      iStack_14 = DAT_008b651c + local_1c + (uint)CARRY4(DAT_008b6518,local_20);
    }
  }
  else {
    fn_0014ed0c(&local_18,0);
  }
  DAT_008b6510 = local_18;
  DAT_008b6514 = iStack_14;
  *param_1 = local_18;
  param_1[1] = iStack_14;
  return;
}



undefined4 * fn_0013ce98(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  int *piVar4;
  int local_18;
  int local_14;
  undefined1 auStack_10 [4];
  
  *param_1 = &DAT_008527ec;
  fn_0015e9d8(param_1,0);
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 4))();
  }
  piVar4 = param_1 + 0x11;
  local_14 = param_1[0x15];
  if (local_14 != 0) {
    local_18 = *(int *)(local_14 + 8);
    fn_00167740(auStack_10,piVar4,&local_18,&local_14);
    iVar1 = param_1[0x15];
    *(undefined4 *)(iVar1 + 0xc) = param_1[0x12];
    param_1[0x12] = iVar1;
    piVar2 = (int *)*piVar4;
    while (piVar2 != (int *)0x0) {
      *piVar4 = *piVar2;
      if (piVar2[2] != 0) {
        pcVar3 = *(code **)(piVar2[2] + -8);
        if (pcVar3 == (code *)0x0) {
          fn_0030233c();
        }
        else {
          (*pcVar3)();
        }
      }
      if (piVar2 != (int *)0x0) {
        if ((code *)piVar2[-2] == (code *)0x0) {
          fn_0030233c(piVar2 + -2);
        }
        else {
          (*(code *)piVar2[-2])();
        }
      }
      piVar2 = (int *)*piVar4;
    }
  }
  piVar4 = param_1 + 10;
  local_14 = param_1[0xe];
  if (local_14 != 0) {
    local_18 = *(int *)(local_14 + 8);
    fn_00167740(auStack_10,piVar4,&local_18,&local_14);
    iVar1 = param_1[0xe];
    *(undefined4 *)(iVar1 + 0xc) = param_1[0xb];
    param_1[0xb] = iVar1;
    piVar2 = (int *)*piVar4;
    while (piVar2 != (int *)0x0) {
      *piVar4 = *piVar2;
      if (piVar2[2] != 0) {
        pcVar3 = *(code **)(piVar2[2] + -8);
        if (pcVar3 == (code *)0x0) {
          fn_0030233c();
        }
        else {
          (*pcVar3)();
        }
      }
      if (piVar2 != (int *)0x0) {
        if ((code *)piVar2[-2] == (code *)0x0) {
          fn_0030233c(piVar2 + -2);
        }
        else {
          (*(code *)piVar2[-2])();
        }
      }
      piVar2 = (int *)*piVar4;
    }
  }
  piVar4 = param_1 + 3;
  local_18 = param_1[7];
  if (local_18 != 0) {
    local_14 = *(int *)(local_18 + 8);
    fn_00168014(auStack_10,piVar4,&local_14,&local_18);
    iVar1 = param_1[7];
    *(undefined4 *)(iVar1 + 0xc) = param_1[4];
    param_1[4] = iVar1;
    piVar2 = (int *)*piVar4;
    while (piVar2 != (int *)0x0) {
      *piVar4 = *piVar2;
      if (piVar2[2] != 0) {
        pcVar3 = *(code **)(piVar2[2] + -8);
        if (pcVar3 == (code *)0x0) {
          fn_0030233c();
        }
        else {
          (*pcVar3)();
        }
      }
      if (piVar2 != (int *)0x0) {
        if ((code *)piVar2[-2] == (code *)0x0) {
          fn_0030233c(piVar2 + -2);
        }
        else {
          (*(code *)piVar2[-2])();
        }
      }
      piVar2 = (int *)*piVar4;
    }
  }
  return param_1;
}



int fn_0013ce04(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = &DAT_008527ec;
  iVar1 = fn_0014f3a4(param_1 + 3);
  iVar1 = fn_0014f308(iVar1 + 0x1c);
  iVar1 = fn_0014f308(iVar1 + 0x1c);
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined1 *)(iVar1 + 0x20) = 1;
  *(undefined1 *)(iVar1 + 0x21) = 0;
  *(undefined1 *)(iVar1 + 0x22) = 1;
  puVar2 = (undefined4 *)fn_0015ece0(0x20);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &DAT_008528bc;
    puVar2[1] = 0;
    puVar2[2] = 0;
    *(undefined1 *)((int)puVar2 + 5) = 2;
  }
  *(undefined4 **)(iVar1 + -0x40) = puVar2;
  if (*(char *)(iVar1 + 0x20) == '\0') {
    fn_0014ea80(iVar1 + -0x44);
  }
  *(undefined1 *)(iVar1 + -0x3c) = 1;
  *(undefined1 *)(iVar1 + 0x21) = 0;
  return iVar1 + -0x44;
}



int fn_0013cd7c(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = &DAT_008527ec;
  iVar1 = fn_0014f3a4(param_1 + 3);
  iVar1 = fn_0014f308(iVar1 + 0x1c);
  iVar1 = fn_0014f308(iVar1 + 0x1c);
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined1 *)(iVar1 + 0x20) = 1;
  *(undefined1 *)(iVar1 + 0x21) = 0;
  *(undefined1 *)(iVar1 + 0x22) = 0;
  puVar2 = (undefined4 *)fn_0015ece0(0x20);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &DAT_008528bc;
    puVar2[1] = 0;
    puVar2[2] = 0;
    *(undefined1 *)((int)puVar2 + 5) = 2;
  }
  *(undefined4 **)(iVar1 + -0x40) = puVar2;
  fn_0014e7cc(iVar1 + -0x44,param_2);
  return iVar1 + -0x44;
}



bool fn_0013cd64(void)

{
  int iVar1;
  
  iVar1 = fn_0013bfdc();
  return iVar1 == 4;
}



int fn_0013ccec(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                undefined4 *param_5,undefined4 *param_6)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0xa0000;
  svc_0x32();
  iVar1 = DAT_008c0784;
  if (-1 < DAT_008c0784) {
    *param_1 = *(undefined4 *)(iVar2 + 0x8c);
    *param_2 = *(undefined4 *)(iVar2 + 0x90);
    *param_3 = *(undefined4 *)(iVar2 + 0x94);
    *param_4 = *(undefined4 *)(iVar2 + 0x98);
    *param_5 = *(undefined4 *)(iVar2 + 0x9c);
    *param_6 = *(undefined4 *)(iVar2 + 0xa0);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_0013cc98(int param_1,int param_2,int param_3,int param_4)

{
  param_1 = param_1 - param_2;
  if (param_1 < -param_3) {
    param_2 = (int)(short)((short)param_2 + (short)((param_1 + param_3) * param_4 >> 7));
  }
  else if (param_3 < param_1) {
    return (int)(short)((short)param_2 + (short)((param_1 - param_3) * param_4 >> 7));
  }
  return param_2;
}


