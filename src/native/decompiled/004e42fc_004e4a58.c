#include "004e42fc_004e4a58.h"



undefined4
fn_004e4a58(int param_1,uint param_2,uint param_3,undefined4 param_4,int param_5,int param_6)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar4 = param_2 * 0x10 + -0x10;
  iVar5 = param_2 * 0x10 + -0xf;
  iVar6 = param_2 * 0x10 + -0xe;
  iVar7 = param_2 * 0x10 + -8;
  if (*(ushort *)(*(int *)(DAT_008bf504 + 0x14) + 0x42) == param_3) {
    if ((param_2 != 0) && (param_2 < 0xd)) {
      *(undefined1 *)(*(int *)(param_1 + 4) + iVar4) = 0;
      *(undefined1 *)(*(int *)(param_1 + 4) + iVar5) = 0xff;
      *(undefined2 *)(*(int *)(param_1 + 4) + iVar6) =
           *(undefined2 *)(*(int *)(DAT_008bf504 + 0x14) + 0x42);
      puVar1 = (undefined4 *)(*(int *)(param_1 + 4) + iVar7);
      *puVar1 = *(undefined4 *)(param_1 + 0x48);
      puVar1[1] = 0;
    }
    uVar2 = 1;
  }
  else {
    if (*(int *)(param_1 + 0x48) != param_5 || param_6 != 0) {
      *(undefined1 *)(*(int *)(param_1 + 4) + iVar4) = 2;
      *(char *)(*(int *)(param_1 + 4) + iVar5) = (char)param_2;
      *(short *)(*(int *)(param_1 + 4) + iVar6) = (short)param_3;
      piVar3 = (int *)(*(int *)(param_1 + 4) + iVar7);
      *piVar3 = param_5;
      piVar3[1] = param_6;
      return 1;
    }
    uVar2 = 0;
  }
  return uVar2;
}



void fn_004e49c4(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  uVar2 = 0;
  do {
    uVar1 = uVar2 + 1 & 0xff;
    if ((uVar1 != 0) && (uVar1 < 0xd)) {
      *(undefined1 *)(*(int *)(param_1 + 4) + uVar1 * 0x10 + -0x10) = 0;
      *(undefined1 *)(*(int *)(param_1 + 4) + uVar1 * 0x10 + -0xf) = 0xff;
      *(undefined2 *)(*(int *)(param_1 + 4) + uVar1 * 0x10 + -0xe) =
           *(undefined2 *)(*(int *)(DAT_008bf504 + 0x14) + 0x42);
      puVar3 = (undefined4 *)(*(int *)(param_1 + 4) + uVar1 * 0x10 + -8);
      *puVar3 = *(undefined4 *)(param_1 + 0x48);
      puVar3[1] = 0;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0xc);
  return;
}



undefined4 fn_004e47b0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  undefined2 *puVar7;
  uint uVar8;
  
  (**(code **)(*param_1 + 8))(param_1);
  if (param_1[7] == 0) {
    uVar8 = param_1[0xe] + param_1[0xf];
    uVar1 = fn_004ed2e8();
    iVar2 = fn_00656e14(uVar8,uVar1);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      uVar4 = 0;
      if (uVar8 != 0) {
        do {
          puVar5 = (undefined1 *)(iVar2 + uVar4);
          uVar4 = uVar4 + 1;
          if (puVar5 != (undefined1 *)0x0) {
            *puVar5 = 0;
          }
        } while (uVar4 < uVar8);
      }
    }
    param_1[7] = iVar2;
  }
  if (param_1[9] == 0) {
    uVar8 = param_1[0x11];
    uVar1 = fn_004ed2e8();
    iVar2 = fn_00656e14(uVar8,uVar1);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      uVar4 = 0;
      if (uVar8 != 0) {
        do {
          puVar5 = (undefined1 *)(iVar2 + uVar4);
          uVar4 = uVar4 + 1;
          if (puVar5 != (undefined1 *)0x0) {
            *puVar5 = 0;
          }
        } while (uVar4 < uVar8);
      }
    }
    param_1[9] = iVar2;
  }
  if (param_1[3] == 0) {
    uVar1 = fn_004ed2e8();
    iVar3 = fn_00656e14(0x60,uVar1);
    iVar2 = 0;
    if (iVar3 != 0) {
      iVar2 = fn_004e46c8();
    }
    param_1[3] = iVar2;
  }
  if (param_1[1] == 0) {
    uVar1 = fn_004ed2e8();
    iVar2 = fn_00656e14(0xc0,uVar1);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      uVar8 = 0;
      do {
        puVar6 = (undefined4 *)(iVar2 + uVar8 * 0x10);
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = 0;
          puVar6[1] = 0;
          puVar6[2] = 0;
          puVar6[3] = 0;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0xc);
    }
    param_1[1] = iVar2;
  }
  if (param_1[2] == 0) {
    uVar1 = fn_004ed2e8();
    iVar2 = fn_00656e14(0x18,uVar1);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      uVar8 = 0;
      do {
        puVar7 = (undefined2 *)(iVar2 + uVar8 * 2);
        uVar8 = uVar8 + 1;
        if (puVar7 != (undefined2 *)0x0) {
          *puVar7 = 0;
        }
      } while (uVar8 < 0xc);
    }
    param_1[2] = iVar2;
  }
  return 0;
}



void fn_004e4724(undefined4 *param_1)

{
  *param_1 = &DAT_008567f8;
  if (param_1[0x11] != 0) {
    fn_00656b7c(param_1[0x11]);
  }
  fn_004ede4c(param_1);
  return;
}



undefined4 * fn_004e46c8(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)fn_004eddf4();
  *puVar1 = &DAT_008567f8;
  puVar1[0x10] = 0;
  *(undefined1 *)(puVar1 + 0x12) = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  uVar2 = fn_004ed2e8();
  iVar3 = fn_00656e14(0x14,uVar2);
  uVar2 = 0;
  if (iVar3 != 0) {
    uVar2 = fn_004ed164();
  }
  puVar1[0x11] = uVar2;
  return puVar1;
}



undefined4 fn_004e4624(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined1 uVar2;
  
  *(undefined4 *)(param_1 + 0x40) = param_2;
  fn_004ed13c(param_2);
  fn_004ed050(*(undefined4 *)(param_1 + 0x40));
  *(char *)(param_1 + 0x48) = (char)param_3;
  if (param_3 == 0) {
    iVar1 = *(int *)(DAT_008bf504 + 0x18);
    uVar2 = 3;
  }
  else {
    iVar1 = *(int *)(DAT_008bf504 + 0x18);
    uVar2 = 2;
  }
  *(undefined1 *)(iVar1 + 0x10) = uVar2;
  *(code **)(param_1 + 0x24) = fn_004e3a4c;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(char **)(param_1 + 0x2c) = "LocalHostMigrationJob::DisconnectNetwork";
  return 0;
}



void fn_004e45d0(int param_1)

{
  char *pcVar1;
  
  fn_004ed158(*(undefined4 *)(param_1 + 0x44));
  pcVar1 = *(char **)(param_1 + 0x40);
  if (pcVar1 != (char *)0x0) {
    if (*pcVar1 == '\x01') {
      fn_004ed098(pcVar1,0xd9214824);
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  *(undefined1 *)(*(int *)(DAT_008bf504 + 0x18) + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  return;
}



uint fn_004e42fc(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  uint unaff_r4;
  uint unaff_r5;
  int iVar6;
  uint local_28;
  int local_24;
  
  if (*(char *)(*(int *)(param_1 + 0x40) + 0x10) != '\0') {
    if (**(char **)(param_1 + 0x44) == '\x01') {
      fn_004ed158();
    }
    *(char **)(param_1 + 0x2c) = "LocalHostMigrationJob::WaitForCancel";
    *(code **)(param_1 + 0x24) = fn_004e3754;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return unaff_r4 & 0xff00;
  }
  iVar1 = fn_006d68c8(*(undefined4 *)(DAT_008bf504 + 0x18));
  if (iVar1 == 0) {
    iVar1 = *(int *)(DAT_008bf504 + 0x18);
    uVar5 = 1;
  }
  else {
    local_28 = 0;
    local_24 = 0;
    fn_004f01f4(&local_28);
    iVar1 = local_28 - *(uint *)(param_1 + 0x50);
    iVar6 = local_24 - (*(int *)(param_1 + 0x54) + (uint)(local_28 < *(uint *)(param_1 + 0x50)));
    puVar2 = (undefined4 *)fn_004f0ce8();
    uVar3 = fn_0011c134(iVar1,iVar6,*puVar2,puVar2[1]);
    if ((int)uVar3 < 0x1b59) {
      return uVar3 & 0xff00 | 5;
    }
    uVar3 = 0;
    do {
      unaff_r5 = uVar3 + 1 & 0xff;
      iVar1 = fn_006d689c(*(undefined4 *)(DAT_008bf504 + 0x18),unaff_r5);
      if (iVar1 == 1) {
        fn_004dedfc(DAT_008bf504,unaff_r5);
        uVar4 = fn_006d6aa8(*(undefined4 *)(DAT_008bf504 + 0x18),unaff_r5);
        fn_004e12fc(*(undefined4 *)(DAT_008bf504 + 0x14),uVar4);
        fn_004e4d9c(*(undefined4 *)(DAT_008bf504 + 0x18),unaff_r5);
        fn_004e4944(*(undefined4 *)(DAT_008bf504 + 0x18),unaff_r5);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0xc);
    iVar1 = *(int *)(DAT_008bf504 + 0x18);
    uVar5 = 2;
  }
  *(undefined1 *)(iVar1 + 0x11) = uVar5;
  uVar3 = 0xe7e3ffff;
  iVar1 = fn_006d591c(DAT_008bf504);
  if (iVar1 == 1) {
    uVar3 = fn_004de188(DAT_008bf504);
  }
  else if (iVar1 == 2) {
    uVar3 = fn_004de544(DAT_008bf504,1);
  }
  else if (iVar1 == 3) {
    uVar3 = fn_004de544(DAT_008bf504,0);
  }
  if ((int)uVar3 < 0) {
    fn_004ed098(*(undefined4 *)(param_1 + 0x40),uVar3);
    *(undefined4 *)(param_1 + 0x40) = 0;
    fn_004e4288(param_1);
    return uVar3 & 0xff00 | 1;
  }
  *(char **)(param_1 + 0x2c) = "LocalHostMigrationJob::WaitAllClientsAck";
  *(code **)(param_1 + 0x24) = fn_004e3ba4;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return unaff_r5 & 0xff00;
}



void fn_004e4944(int param_1,uint param_2)

{
  undefined4 *puVar1;
  
  if (param_2 == 0) {
    return;
  }
  if (param_2 < 0xd) {
    *(undefined1 *)(*(int *)(param_1 + 4) + param_2 * 0x10 + -0x10) = 0;
    *(undefined1 *)(*(int *)(param_1 + 4) + param_2 * 0x10 + -0xf) = 0xff;
    *(undefined2 *)(*(int *)(param_1 + 4) + param_2 * 0x10 + -0xe) =
         *(undefined2 *)(*(int *)(DAT_008bf504 + 0x14) + 0x42);
    puVar1 = (undefined4 *)(*(int *)(param_1 + 4) + param_2 * 0x10 + -8);
    *puVar1 = *(undefined4 *)(param_1 + 0x48);
    puVar1[1] = 0;
    return;
  }
  return;
}


