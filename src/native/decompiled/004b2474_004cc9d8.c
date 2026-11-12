#include "004b2474_004cc9d8.h"



uint fn_004cc9d8(int param_1)

{
  longlong lVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint unaff_r7;
  uint local_58;
  int local_54;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  undefined4 local_20;
  undefined2 local_1c;
  
  uVar6 = *(uint *)(DAT_008bf4f4 + 0x34);
  if (*(char *)(param_1 + 0x58) != '\0') {
    iVar2 = fn_004d4edc(DAT_008c06a0 + 8);
    if (iVar2 != 0) {
      uVar6 = uVar6 + *(int *)(DAT_008bf4f4 + 0x38);
    }
    iVar2 = fn_004d4edc(param_1 + 0x88);
    if (iVar2 != 0) {
      uVar6 = uVar6 + *(int *)(DAT_008bf4f4 + 0x38);
    }
  }
  local_58 = (uint)*(char *)(param_1 + 0x58);
  iVar2 = fn_004cfaf8(*(undefined4 *)(DAT_008bf4f4 + 0x20),param_1 + 0x5c,param_1 + 0x84,
                       param_1 + 0xe0);
  if (iVar2 == 0) {
    iVar2 = fn_004cc270(*(int *)(*(int *)(DAT_008bf4f4 + 0x20) + 0xa0) + 0x120,param_1 + 0x5c);
    if (iVar2 == 0) {
      iVar2 = fn_0013d5c4(&local_58);
      *(undefined4 *)(iVar2 + 0x28) = 0;
      *(undefined4 *)(iVar2 + 0x2c) = 0;
      *(undefined4 *)(iVar2 + 0x30) = 0;
      *(undefined4 *)(iVar2 + 0x34) = 0;
      fn_0050d1a0(&local_58,param_1 + 0x5c);
      fn_004f01f4(auStack_30);
      fn_004f01f4(auStack_28);
      local_20 = 0;
      local_1c = 0;
      fn_004cc15c(*(int *)(*(int *)(DAT_008bf4f4 + 0x20) + 0xa0) + 0x120,&local_58);
      fn_0050d178(&local_58);
    }
    else {
      fn_004f01f4(iVar2 + 0x28);
      fn_004f01f4(iVar2 + 0x30);
      *(undefined4 *)(iVar2 + 0x38) = 0;
      *(undefined2 *)(iVar2 + 0x3c) = 0;
    }
    *(char **)(param_1 + 0x2c) = "NexConnectStationJob::resolveCurrentAddress";
    *(code **)(param_1 + 0x24) = fn_004cccd0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  else if (*(char *)(param_1 + 0x58) == '\0') {
    puVar3 = (uint *)fn_004f0ce8();
    uVar4 = *puVar3;
    uVar6 = puVar3[1];
    uVar5 = (uint)((ulonglong)uVar4 * 15000);
    local_58 = 0;
    local_54 = 0;
    fn_004f01f4(&local_58);
    *(uint *)(param_1 + 0xd8) = local_58 + uVar5;
    *(uint *)(param_1 + 0xdc) =
         local_54 + uVar6 * 15000 + (int)((ulonglong)uVar4 * 15000 >> 0x20) +
         (uint)CARRY4(local_58,uVar5);
    *(code **)(param_1 + 0x24) = fn_004ccd94;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0x2c) = "NexConnectStationJob::waitForNatTraversalStarted";
  }
  else {
    puVar3 = (uint *)fn_004f0ce8();
    uVar5 = *puVar3;
    uVar4 = puVar3[1];
    lVar1 = (ulonglong)uVar6 * (ulonglong)uVar5;
    uVar7 = (uint)lVar1;
    local_58 = 0;
    local_54 = 0;
    fn_004f01f4(&local_58);
    *(uint *)(param_1 + 0xdc) =
         local_54 + uVar5 * ((int)uVar6 >> 0x1f) + uVar4 * uVar6 + (int)((ulonglong)lVar1 >> 0x20) +
         (uint)CARRY4(local_58,uVar7);
    *(uint *)(param_1 + 0xd8) = local_58 + uVar7;
    *(code **)(param_1 + 0x24) = fn_004cd128;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0x2c) = "NexConnectStationJob::waitForNatTraversalCompleted";
  }
  return unaff_r7 & 0xff00;
}



void fn_004ba724(undefined4 param_1)

{
  if (((unsigned int)(DAT_008b6378) >> 24) & 0xff == '\0') {
    DAT_008e6c94 = fn_004ba5ac();
    if (DAT_008e6c94 == 0) {
      DAT_008e6c94 = 0x1105;
    }
    DAT_008e7654 = 1;
    do {
      (&DAT_008e6c94)[DAT_008e7654] = (&DAT_008e6c90)[DAT_008e7654] * 0x10dcd;
      DAT_008e7654 = DAT_008e7654 + 1;
    } while (DAT_008e7654 < 0x270);
    DAT_008b6378 = (DAT_008b6378 & ~((unsigned int)0xff << 24)) | (((unsigned int)('\x01') & 0xff) << 24);
  }
  fn_00491a34(&DAT_008e6c94,param_1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x004b9f48) */

void fn_004b9f08(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &PTR_FUN_00855c84;
  if (DAT_008b68a8 != (int *)0x0) {
    (**(code **)(*DAT_008b68a8 + 4))();
  }
  DAT_008b68a8 = (int *)0x0;
  iVar1 = fn_00170f54(param_1 + 0x44);
  if (*(int **)(iVar1 + -4) != (int *)0x0) {
    (**(code **)(**(int **)(iVar1 + -4) + 4))();
  }
  iVar1 = fn_0048cc74(iVar1 + -0xa8);
  fn_00479d5c(iVar1 + -0x68);
  return;
}



void fn_004b9b4c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  return;
}



void fn_004b8d6c(undefined4 *param_1)

{
  *param_1 = &DAT_80010001;
  param_1[2] = 0x6a;
  param_1[1] = &DAT_007dba44;
  return;
}



void fn_004b719c(undefined4 *param_1)

{
  int iVar1;
  code *pcVar2;
  
  *param_1 = &DAT_00855b34;
  if ((int *)param_1[0x1b] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x1b] + 4))();
    DAT_008b6460 = DAT_008b6460 + -1;
    if (DAT_008b6464 != (int *)0x0) {
      (**(code **)(*DAT_008b6464 + 0xc))();
    }
    param_1[0x1b] = 0;
  }
  if (param_1[0x1f] != 0) {
    pcVar2 = *(code **)(param_1[0x1f] + -8);
    if (pcVar2 == (code *)0x0) {
      fn_0030233c();
    }
    else {
      (*pcVar2)();
    }
  }
  iVar1 = fn_00170f54(param_1 + 0x1c);
  *(undefined **)(iVar1 + -0x70) = &DAT_00853740;
  *(undefined4 *)(iVar1 + -0x6c) = 0;
  return;
}



void fn_004b3294(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[1] = 1;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &DAT_008558c4;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}



void fn_004b2474(int *param_1,int param_2,undefined4 param_3,undefined1 *param_4)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint *puVar4;
  undefined4 uVar5;
  undefined4 *local_b8;
  undefined1 *local_b4;
  undefined1 *local_b0;
  uint local_ac;
  undefined8 local_a8;
  undefined1 auStack_a0 [4];
  undefined4 uStack_9c;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [4];
  undefined4 uStack_8c;
  undefined1 auStack_88 [4];
  undefined1 auStack_84 [100];
  
  uVar1 = fn_004ba934(param_2);
  switch(uVar1) {
  default:
    local_ac = 0x80010002;
    uVar5 = fn_004b8d4c(&local_b8,&local_ac);
    fn_0047187c(param_1,uVar5);
    return;
  case 1:
    local_b8 = (undefined4 *)0x0;
    local_b4 = (undefined1 *)0x0;
    local_b0 = (undefined1 *)0x0;
    local_ac = 0;
    local_a8 = (local_a8 & ~((unsigned int)0xffffffff << 0)) | ((unsigned int)(0) & 0xffffffff);
    local_a8 = (local_a8 & ~((unsigned long long)0xffffffff << 32)) | (((unsigned long long)(0) & 0xffffffff) << 32);
    puVar2 = (undefined4 *)fn_0015ece0(0xc);
    uVar5 = fn_0015ece0(0x70);
    puVar2[2] = uVar5;
    *puVar2 = local_b8;
    puVar2[1] = 1;
    local_a8 = (local_a8 & ~((unsigned int)0xffffffff << 0)) | ((unsigned int)(puVar2[2]) & 0xffffffff);
    local_b0 = (undefined1 *)((int)local_a8 + 0x70);
    *(int *)(int)local_a8 = (int)local_a8;
    *(int *)((int)local_a8 + 4) = (int)local_a8;
    local_b8 = puVar2;
    local_ac = (uint)local_b0;
    fn_0074ab8c(param_2,&local_b8);
    if (*(char *)(param_2 + 4) == '\0') {
      (**(code **)(*param_1 + 0x5c))(param_1,&local_b8);
      fn_004ba7ac(param_3,0x8001);
      fn_00786480(&local_b8);
      goto LAB_004b2984;
    }
    break;
  case 2:
    fn_0013ce04(&local_b8);
    fn_0047fba4(param_2,&local_b8);
    if (*(char *)(param_2 + 4) == '\0') {
      (**(code **)(*param_1 + 0x60))(param_1,&local_b8);
      fn_004ba7ac(param_3,0x8002);
      fn_0013ce98(&local_b8);
    }
    else {
      fn_0013ce98(&local_b8);
    }
    goto LAB_004b2984;
  case 3:
    local_b8 = (undefined4 *)0x0;
    local_b4 = (undefined1 *)0x0;
    local_b0 = (undefined1 *)0x0;
    local_ac = 0;
    local_a8 = (local_a8 & ~((unsigned int)0xffffffff << 0)) | ((unsigned int)(0) & 0xffffffff);
    local_a8 = (local_a8 & ~((unsigned long long)0xffffffff << 32)) | (((unsigned long long)(0) & 0xffffffff) << 32);
    puVar2 = (undefined4 *)fn_0015ece0(0xc);
    uVar5 = fn_0015ece0(0x70);
    puVar2[2] = uVar5;
    *puVar2 = local_b8;
    puVar2[1] = 1;
    local_a8 = (local_a8 & ~((unsigned int)0xffffffff << 0)) | ((unsigned int)(puVar2[2]) & 0xffffffff);
    local_b0 = (undefined1 *)((int)local_a8 + 0x70);
    *(int *)(int)local_a8 = (int)local_a8;
    *(int *)((int)local_a8 + 4) = (int)local_a8;
    local_b8 = puVar2;
    local_ac = (uint)local_b0;
    fn_0074ab8c(param_2,&local_b8);
    if (*(char *)(param_2 + 4) == '\0') {
      fn_0013ce04(auStack_a0);
      fn_0047fba4(param_2,auStack_a0);
      if (*(char *)(param_2 + 4) == '\0') {
        (**(code **)(*param_1 + 100))(param_1,&local_b8,auStack_a0);
        fn_004ba7ac(param_3,0x8003);
      }
      fn_0013ce98(auStack_a0);
      fn_00786480(&local_b8);
      goto LAB_004b2984;
    }
    break;
  case 4:
    fn_0074a528(param_2,&local_ac);
    if (((*(char *)(param_2 + 4) != '\0') ||
        (fn_00454da8(param_2,&local_a8), *(char *)(param_2 + 4) != '\0')) ||
       (fn_0074a528(param_2,(int)&local_a8 + 4), *(char *)(param_2 + 4) != '\0'))
    goto LAB_004b2984;
    (**(code **)(*param_1 + 0x68))(param_1,&local_ac,&local_a8,(int)&local_a8 + 4);
    uVar5 = 0x8004;
    goto LAB_004b27d8;
  case 5:
    fn_0074a528(param_2,&local_ac);
    if (((*(char *)(param_2 + 4) != '\0') ||
        (fn_0074a528(param_2,&local_a8), *(char *)(param_2 + 4) != '\0')) ||
       (fn_0074a528(param_2,(int)&local_a8 + 4), *(char *)(param_2 + 4) != '\0'))
    goto LAB_004b2984;
    (**(code **)(*param_1 + 0x6c))(param_1,&local_ac,&local_a8,(int)&local_a8 + 4);
    uVar5 = 0x8005;
LAB_004b27d8:
    fn_004ba7ac(param_3,uVar5);
    goto LAB_004b2984;
  case 6:
    fn_00124be8(auStack_98);
    fn_0013d40c(auStack_a0);
    local_b0 = auStack_84;
    local_b4 = auStack_88;
    local_b8 = &uStack_8c;
    (**(code **)(*param_1 + 0x70))(param_1,auStack_90,auStack_98,auStack_a0);
    fn_004ba7ac(param_3,0x8006);
    fn_0015ef4c(param_3,auStack_90,4);
    local_a8 = fn_006d3e5c(auStack_98);
    fn_0015ef4c(param_3,&local_a8,8);
    fn_0045f6f0(param_3,auStack_a0);
    fn_0015ef4c(param_3,&uStack_8c,2);
    fn_0015ef4c(param_3,auStack_88,4);
    fn_0015ef4c(param_3,auStack_84,4);
    fn_00170f54(auStack_a0);
    *param_4 = 1;
    return;
  case 7:
    fn_0074a528(param_2,(int)&local_a8 + 4);
    if ((*(char *)(param_2 + 4) == '\0') &&
       (fn_00454da8(param_2,auStack_a0), *(char *)(param_2 + 4) == '\0')) {
      iVar3 = *(int *)(param_2 + 8);
      if ((uint)(*(int *)(iVar3 + 0x10) - *(int *)(param_2 + 0xc)) < 4) {
        *(undefined1 *)(param_2 + 4) = 1;
        local_ac = 0;
      }
      else {
        puVar4 = (uint *)(*(int *)(iVar3 + 0x18) + *(int *)(iVar3 + 0xc) + *(int *)(param_2 + 0xc));
        local_ac = *puVar4 & 0xffffff | (uint)*(byte *)((int)puVar4 + 3) << 0x18;
        *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 4;
      }
      if ((*(char *)(param_2 + 4) == '\0') &&
         (fn_0074a528(param_2,&uStack_9c), *(char *)(param_2 + 4) == '\0')) {
        local_b8 = &uStack_9c;
        (**(code **)(*param_1 + 0x74))(param_1,(int)&local_a8 + 4,auStack_a0,&local_ac);
        fn_004ba7ac(param_3,0x8007);
      }
    }
    goto LAB_004b2984;
  }
  fn_00786480(&local_b8);
LAB_004b2984:
  *param_4 = 1;
  return;
}


