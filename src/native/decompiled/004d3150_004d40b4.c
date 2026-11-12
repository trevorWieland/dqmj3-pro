#include "004d3150_004d40b4.h"



void fn_004d40b4(int param_1,int param_2,undefined4 param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint local_18;
  int iStack_14;
  
  if ((param_1 < 0) && (DAT_008c0630 != 0)) {
    param_3 = 0;
  }
  *(undefined1 *)(param_2 + 0x4c3) = 1;
  *(undefined4 *)(param_2 + 0x4b0) = 0;
  *(undefined4 *)(param_2 + 0x4b4) = 0;
  if (*(char *)(param_2 + 0x4c2) != '\0') {
    puVar1 = (uint *)fn_004f0ce8(*(char *)(param_2 + 0x4c2),0,param_3);
    uVar3 = *puVar1;
    uVar2 = puVar1[1];
    uVar4 = (uint)((ulonglong)uVar3 * 5000);
    local_18 = 0;
    iStack_14 = 0;
    fn_004f01f4(&local_18);
    *(uint *)(param_2 + 0x4b8) = local_18 + uVar4;
    *(uint *)(param_2 + 0x4bc) =
         iStack_14 + uVar2 * 5000 + (int)((ulonglong)uVar3 * 5000 >> 0x20) +
         (uint)CARRY4(local_18,uVar4);
  }
  return;
}



undefined1 * fn_004d4010(int param_1)

{
  if (((param_1 == -0xf || param_1 == -0x26) || (param_1 == -0x38 || param_1 == -0x4c)) ||
     (param_1 == -0xe || param_1 == -0x28)) {
    return (undefined1 *)0xd8a14825;
  }
  if (((param_1 == -8 || param_1 == -0x1c) || (param_1 == -0x3f || param_1 == -0x11)) ||
     ((param_1 == -0x23 || param_1 == -0x45) || param_1 == -5)) {
    return (undefined1 *)0xe0e14826;
  }
  if ((param_1 == -0x27) ||
     ((param_1 != -6 && param_1 != -10 &&
      ((param_1 != -0x1b && param_1 != -0x31) && param_1 != -0x2a)))) {
    return &DAT_e0a14827;
  }
  return (undefined1 *)0xd861482c;
}



uint fn_004d3f80(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  uVar3 = (uint)*(byte *)(DAT_008bf4e0 + 99);
  bVar4 = uVar3 == 0xb;
  if (uVar3 < 0xc) {
    bVar4 = *(byte *)(DAT_008bf4e0 + 0x62) == uVar3;
  }
  if (bVar4) {
    uVar2 = 0;
    do {
      if (((uVar2 & 0xff) != uVar3) && (iVar1 = fn_006d92e4(DAT_008bf4e0,uVar2 & 0xff), iVar1 != 0)
         ) {
        return uVar2 & 0xff;
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < 0xc);
  }
  return 0xfd;
}



void fn_004d3da0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  puVar2 = (undefined4 *)param_1[0x2a];
  *param_1 = &PTR_FUN_008562a0;
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    fn_00656b7c(puVar2);
    param_1[0x2a] = 0;
  }
  iVar3 = param_1[0x33];
  if (iVar3 != 0) {
    piVar4 = *(int **)(iVar3 + 0x10);
    piVar5 = (int *)*piVar4;
    while (piVar6 = piVar5, piVar6 != piVar4) {
      piVar5 = *(int **)(iVar3 + 0x10);
      if (piVar6 != *(int **)(iVar3 + 0x10)) {
        piVar5 = (int *)*piVar6;
        *(int **)piVar6[1] = piVar5;
        *(int *)(*piVar6 + 4) = piVar6[1];
        *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + -1;
        (**(code **)piVar6[2])(piVar6 + 2);
        *piVar6 = *(undefined4 *)(iVar3 + 4);
        *(int **)(iVar3 + 4) = piVar6;
      }
    }
    piVar5 = (int *)param_1[0x33];
    if (piVar5 != (int *)0x0) {
      piVar4 = (int *)piVar5[4];
      if (piVar4 != (int *)0x0) {
        piVar6 = (int *)*piVar4;
        while (piVar1 = piVar6, piVar1 != piVar4) {
          piVar6 = (int *)piVar5[4];
          if (piVar1 != (int *)piVar5[4]) {
            piVar6 = (int *)*piVar1;
            *(int **)piVar1[1] = piVar6;
            *(int *)(*piVar1 + 4) = piVar1[1];
            piVar5[5] = piVar5[5] + -1;
            (**(code **)piVar1[2])(piVar1 + 2);
            *piVar1 = piVar5[1];
            piVar5[1] = (int)piVar1;
          }
        }
        piVar4 = (int *)piVar5[4];
        *piVar4 = piVar5[1];
        piVar5[1] = (int)piVar4;
        iVar3 = *piVar5;
        while (iVar3 != 0) {
          piVar4 = (int *)*piVar5;
          *piVar5 = *piVar4;
          fn_0014f1bc(piVar4[2]);
          fn_0014f1bc(piVar4);
          iVar3 = *piVar5;
        }
        piVar5[1] = 0;
        piVar5[2] = 0;
        piVar5[3] = 0;
      }
      fn_00656b7c(piVar5);
    }
    param_1[0x33] = 0;
  }
  if (param_1[0x41] != 0) {
    fn_004d5734(DAT_008bf4f4);
    puVar2 = (undefined4 *)param_1[0x41];
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(puVar2);
      fn_00656b7c(puVar2);
    }
    param_1[0x41] = 0;
  }
  fn_00502b60(param_1);
  return;
}



undefined4 * fn_004d3c6c(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)fn_00502a78();
  *puVar1 = &PTR_FUN_008562a0;
  puVar1[0x2c] = 0;
  puVar1[0x2d] = 0;
  puVar1[0x30] = 0;
  puVar1[0x31] = 0;
  puVar1[0x32] = 60000;
  puVar1[0x42] = 0;
  puVar1[0x43] = 0;
  puVar1[0x44] = 0;
  puVar1[0x45] = 0;
  uVar2 = fn_004ed2e8();
  iVar3 = fn_00656e14(0x78,uVar2);
  uVar2 = 0;
  if (iVar3 != 0) {
    uVar2 = fn_0048cc04(iVar3,0);
  }
  puVar1[0x2a] = uVar2;
  if (*(char *)(puVar1 + 0x21) == '\0') {
    if (*(int *)(DAT_008bf4d4 + 100) == 0) {
      puVar1[0x33] = 0;
    }
    else {
      uVar2 = fn_00755860();
      puVar1[0x33] = uVar2;
    }
    puVar1[0x41] = 0;
  }
  else {
    uVar2 = fn_00755860();
    puVar1[0x33] = uVar2;
    puVar1[0x34] = 0;
    puVar1[0x35] = 0;
    puVar1[0x36] = 0;
    puVar1[0x37] = 0;
    puVar1[0x38] = 0;
    puVar1[0x39] = 0;
    puVar1[0x3a] = 0;
    puVar1[0x3b] = 0;
    puVar1[0x3c] = 0;
    puVar1[0x3d] = 0;
    puVar1[0x3e] = 0;
    puVar1[0x12] = 15000;
    puVar1[0x3f] = 0;
    uVar2 = fn_004ed2e8();
    puVar4 = (undefined4 *)fn_00656e14(8,uVar2);
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = &DAT_007ed5bc;
      puVar4[1] = puVar1;
    }
    puVar1[0x41] = puVar4;
  }
  *(undefined1 *)((int)puVar1 + 0x101) = 0;
  return puVar1;
}



uint fn_004d3578(int *param_1)

{
  int iVar1;
  uint unaff_r5;
  uint in_r12;
  
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  if (iVar1 == 0) {
    param_1[9] = (int)fn_00501dd4;
    param_1[10] = 0;
    param_1[0xb] = (int)"NexProcessHostMigrationJob::HostMigrationFailure";
    return in_r12 & 0xff00 | 5;
  }
  param_1[9] = (int)fn_004d1844;
  param_1[10] = 0;
  param_1[0xb] = (int)"NexProcessHostMigrationJob::InetSendRankDecision";
  return unaff_r5 & 0xff00 | 5;
}



uint fn_004d3150(int param_1)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *unaff_r5;
  uint *puVar8;
  uint unaff_r6;
  bool bVar9;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  
  iVar2 = fn_006d9250(DAT_008bf4e0);
  if ((iVar2 == -0x275eb708) ||
     (unaff_r5 = &DAT_008bf49c,
     *(uint *)(param_1 + 0x44) < *(uint *)(DAT_008bf49c + 0x34) ||
     *(uint *)(DAT_008bf49c + 0x34) - *(uint *)(param_1 + 0x44) <
     (uint)(*(uint *)(param_1 + 0x40) <= *(uint *)(DAT_008bf49c + 0x30)))) {
    if (*(char *)(*(int *)(param_1 + 0xa8) + 0x10) == '\x01') {
      fn_00456510(*(int *)(param_1 + 0xa8),4);
    }
    *(code **)(param_1 + 0x24) = fn_00501dd4;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0x2c) = "NexProcessHostMigrationJob::HostMigrationFailure";
    return (uint)unaff_r5 & 0xff00;
  }
  if (*(char *)(param_1 + 0x84) != '\0') {
    if (*(char *)(param_1 + 0x80) != -3) {
      if (*(char *)(*(int *)(param_1 + 0xa8) + 0x10) == '\x01') {
        fn_00456510(*(int *)(param_1 + 0xa8),4);
      }
      *(char **)(param_1 + 0x2c) = "NexProcessHostMigrationJob::WaitNewHostGreeting";
      *(code **)(param_1 + 0x24) = fn_00501adc;
      *(undefined4 *)(param_1 + 0x28) = 0;
      return 0xf400;
    }
    uVar4 = 0;
    uVar5 = uVar4;
    do {
      cVar1 = *(char *)(param_1 + uVar4 + 0x9c);
      if (cVar1 == '\x01') {
        if (*(char *)(*(int *)(param_1 + 0xa8) + 0x10) == '\x01') {
          fn_00456510(*(int *)(param_1 + 0xa8),4);
        }
        *(char **)(param_1 + 0x2c) = "NexProcessHostMigrationJob::WaitNewHostGreeting";
        *(code **)(param_1 + 0x24) = fn_00501adc;
        *(undefined4 *)(param_1 + 0x28) = 0;
        return 0xf400;
      }
      if (cVar1 == '\x02') {
        uVar5 = 1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0xc);
    if (uVar5 != 0) {
      if (*(char *)(*(int *)(param_1 + 0xa8) + 0x10) == '\x01') {
        fn_00456510(*(int *)(param_1 + 0xa8),4);
      }
      *(code **)(param_1 + 0x24) = fn_004d2fac;
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(char **)(param_1 + 0x2c) = "NexProcessHostMigrationJob::InetPrepareForBecomingHostMulti";
      return 0xf400;
    }
  }
  uVar5 = *(uint *)(param_1 + 0xa8);
  if (*(char *)(uVar5 + 0x10) == '\x01') {
    return uVar5 & 0xff00 | 5;
  }
  local_20 = *(undefined4 *)(uVar5 + 0x40);
  local_28 = *(undefined4 *)(uVar5 + 0x38);
  uStack_24 = *(undefined4 *)(uVar5 + 0x3c);
  iVar2 = fn_006d3b8c(&local_28);
  if (iVar2 == 0) {
    if (*(char *)(param_1 + 0x84) == '\0') {
      *(char **)(param_1 + 0x2c) = "NexProcessHostMigrationJob::InetPrepareForBecomingHost";
      *(code **)(param_1 + 0x24) = fn_004d1efc;
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    else {
      *(code **)(param_1 + 0x24) = fn_004d2fac;
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(char **)(param_1 + 0x2c) = "NexProcessHostMigrationJob::InetPrepareForBecomingHostMulti";
    }
  }
  else {
    iVar2 = fn_006d09d4(**(int **)(*(int *)(param_1 + 0xcc) + 0x10) + 8);
    if (((iVar2 != 0) && (uVar5 = fn_00502718(param_1,iVar2), iVar2 = DAT_008bf49c, uVar5 < 0xc))
       && (*(byte *)(param_1 + 0x70) == uVar5)) {
      uVar5 = *(uint *)(param_1 + 0x114);
      uVar4 = *(uint *)(DAT_008bf49c + 0x34);
      bVar9 = *(uint *)(param_1 + 0x110) <= *(uint *)(DAT_008bf49c + 0x30);
      if (uVar4 <= uVar5 && (uint)bVar9 <= uVar4 - uVar5) {
        puVar8 = (uint *)(DAT_008bf49c + 0x30);
        puVar3 = (uint *)fn_004f0ce8(DAT_008bf49c,uVar4 - (uVar5 + !bVar9));
        uVar4 = *puVar3;
        uVar7 = puVar3[1];
        uVar5 = (uint)((ulonglong)uVar4 * 6000);
        uVar6 = *puVar8;
        iVar2 = *(int *)(iVar2 + 0x34);
        *(uint *)(param_1 + 0x108) = uVar5 + uVar6;
        *(uint *)(param_1 + 0x10c) =
             uVar7 * 6000 + (int)((ulonglong)uVar4 * 6000 >> 0x20) + iVar2 +
             (uint)CARRY4(uVar5,uVar6);
        *(code **)(param_1 + 0x24) = fn_004d2570;
        *(undefined4 *)(param_1 + 0x28) = 0;
        *(char **)(param_1 + 0x2c) = "NexProcessHostMigrationJob::InetCheckOldHostDisconnection";
        goto LAB_004d3564;
      }
    }
    *(code **)(param_1 + 0x24) = fn_00501dd4;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0x2c) = "NexProcessHostMigrationJob::HostMigrationFailure";
  }
LAB_004d3564:
  return unaff_r6 & 0xff00;
}


