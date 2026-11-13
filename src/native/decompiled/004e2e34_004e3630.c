#include "004e2e34_004e3630.h"



uint fn_004e3630(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint unaff_r5;
  
  if (*(char *)(*(int *)(param_1 + 0x40) + 0x10) != '\0') {
    if (**(char **)(param_1 + 0x44) == '\x01') {
      fn_004ed158();
    }
    *(code **)(param_1 + 0x24) = fn_004e3754;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0x2c) = "LocalHostMigrationJob::WaitForCancel";
    return unaff_r5 & 0xff00;
  }
  uVar1 = (**(code **)(**(int **)(DAT_008bf504 + 0x18) + 0x14))();
  iVar2 = fn_004dc794(DAT_008bf504,*(undefined4 *)(param_1 + 0x44),uVar1);
  if (iVar2 < 0) {
    return 5;
  }
  *(char **)(param_1 + 0x2c) = "LocalHostMigrationJob::WaitCreateNetwork";
  *(code **)(param_1 + 0x24) = fn_004e3c80;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return param_4 & 0xff00 | 5;
}



uint fn_004e3444(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  uint unaff_r5;
  uint uVar5;
  int iVar6;
  uint local_28;
  int iStack_24;
  
  if (*(char *)(*(int *)(param_1 + 0x40) + 0x10) != '\0') {
    if (**(char **)(param_1 + 0x44) == '\x01') {
      fn_004ed158();
    }
    *(char **)(param_1 + 0x2c) = "LocalHostMigrationJob::WaitForCancel";
    *(code **)(param_1 + 0x24) = fn_004e3754;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return unaff_r5 & 0xff00;
  }
  local_28 = 0;
  iStack_24 = 0;
  fn_004f01f4(&local_28);
  uVar5 = local_28 - *(uint *)(param_1 + 0x58);
  iVar6 = iStack_24 - (*(int *)(param_1 + 0x5c) + (uint)(local_28 < *(uint *)(param_1 + 0x58)));
  puVar1 = (undefined4 *)fn_004f0ce8();
  uVar2 = fn_0011c134(uVar5,iVar6,*puVar1,puVar1[1]);
  if (uVar2 < 0x2711) {
    piVar3 = *(int **)(DAT_008bf504 + 0x18);
    uVar2 = (**(code **)(*piVar3 + 0x1c))(piVar3);
    uVar4 = (**(code **)(*piVar3 + 0x20))(piVar3);
    iVar6 = fn_004dc3d0(DAT_008bf504,*(undefined4 *)(param_1 + 0x44),uVar4,uVar2);
    if (iVar6 < 0) {
      return 5;
    }
    *(char **)(param_1 + 0x2c) = "LocalHostMigrationJob::WaitScanNetwork";
    *(code **)(param_1 + 0x24) = fn_004e38dc;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return uVar2 & 0xff00 | 5;
  }
  if (**(char **)(param_1 + 0x44) == '\x01') {
    fn_004ed158();
    *(undefined1 *)(*(int *)(DAT_008bf504 + 0x38) + 0x30) = 1;
  }
  fn_004e4288(param_1);
  fn_004ed098(*(undefined4 *)(param_1 + 0x40),&DAT_d8814829);
  *(undefined4 *)(param_1 + 0x40) = 0;
  return uVar5 & 0xff00 | 1;
}



void fn_004e3408(undefined4 *param_1)

{
  *param_1 = &DAT_008567d8;
  if (param_1[0x11] != 0) {
    fn_00656b7c(param_1[0x11]);
  }
  fn_004ede4c(param_1);
  return;
}



undefined4 * fn_004e33c4(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)fn_004eddf4();
  puVar1[0x10] = 0;
  *puVar1 = &DAT_008567d8;
  uVar2 = fn_004ed2e8();
  iVar3 = fn_00656e14(0x14,uVar2);
  uVar2 = 0;
  if (iVar3 != 0) {
    uVar2 = fn_004ed164();
  }
  puVar1[0x11] = uVar2;
  return puVar1;
}



int fn_004e32fc(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(DAT_008bf504 + 0x38) + 0x18))
                    (*(int **)(DAT_008bf504 + 0x38),*(undefined4 *)(param_1 + 0x44));
  if (-1 < iVar1) {
    *(undefined4 *)(param_1 + 0x40) = param_2;
    fn_004ed13c(param_2);
    fn_004ed050(*(undefined4 *)(param_1 + 0x40));
    fn_004efcf4(*(undefined4 *)(DAT_008bf504 + 0x38),1);
    iVar1 = DAT_008bf504;
    *(undefined1 *)(DAT_008bf504 + 0x81) = 0;
    *(undefined1 *)(*(int *)(iVar1 + 0x14) + 0x1f15) = 1;
    *(code **)(param_1 + 0x24) = fn_004e3198;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0x2c) = "LocalCreateNetworkJob::WaitCreateNetwork";
    iVar1 = 0;
  }
  return iVar1;
}



void fn_004e32c0(int param_1)

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
  return;
}



uint fn_004e3198(int param_1,uint param_2)

{
  char cVar1;
  char *pcVar2;
  uint unaff_r5;
  
  pcVar2 = *(char **)(param_1 + 0x44);
  if (*(char *)(*(int *)(param_1 + 0x40) + 0x10) != '\0') {
    if (*pcVar2 == '\x01') {
      fn_004ed158();
    }
    *(code **)(param_1 + 0x24) = fn_004e3148;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0x2c) = "LocalCreateNetworkJob::WaitForCancel";
    return unaff_r5 & 0xff00;
  }
  cVar1 = *pcVar2;
  if (cVar1 == '\x01') {
    return (uint)pcVar2 & 0xff00 | 5;
  }
  if (cVar1 == '\x02') {
    (**(code **)(**(int **)(DAT_008bf504 + 0x14) + 0x10))();
    fn_004ed0e4(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(*(int *)(param_1 + 0x44) + 4));
    *(undefined4 *)(param_1 + 0x40) = 0;
    return unaff_r5 & 0xff00 | 1;
  }
  if (cVar1 == '\x03' || cVar1 == '\x04') {
    fn_004ed098(*(int *)(param_1 + 0x40),*(undefined4 *)(pcVar2 + 4));
    *(undefined4 *)(param_1 + 0x40) = 0;
    return unaff_r5 & 0xff00 | 1;
  }
  return param_2 & 0xff00 | 1;
}



uint fn_004e3148(int param_1)

{
  char cVar1;
  uint unaff_r5;
  
  cVar1 = **(char **)(param_1 + 0x44);
  if ((cVar1 == '\x02' || cVar1 == '\x03') || cVar1 == '\x04') {
    fn_004ed068(*(undefined4 *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 0x40) = 0;
    return unaff_r5 & 0xff00 | 1;
  }
  return 5;
}



void fn_004e30fc(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0x17];
  *param_1 = &DAT_008567b8;
  if (iVar1 != 0) {
    fn_00656b0c(iVar1);
    fn_00656b7c(iVar1);
    param_1[0x17] = 0;
  }
  fn_004ede4c(param_1);
  return;
}



int fn_004e3064(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  puVar1 = (undefined4 *)fn_004eddf4();
  *puVar1 = &DAT_008567b8;
  puVar1[0x10] = 0;
  *(undefined1 *)(puVar1 + 0x11) = 0;
  puVar1[0x12] = 0;
  iVar2 = fn_004edc74(puVar1 + 0x13,0xffffffff);
  *(undefined1 *)(iVar2 + 0xc) = 1;
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  *(undefined4 *)(iVar2 + 0x14) = 0;
  *(undefined4 *)(iVar2 + 0x24) = 500;
  *(undefined4 *)(iVar2 + 0x20) = 0;
  uVar3 = fn_004ed2e8();
  iVar4 = fn_00656e14(0x5dc,uVar3);
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    uVar5 = 0;
    do {
      puVar1 = (undefined4 *)(iVar4 + uVar5 * 4);
      uVar5 = uVar5 + 1;
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 0;
      }
    } while (uVar5 < 0x177);
  }
  *(int *)(iVar2 + 0x10) = iVar4;
  return iVar2 + -0x4c;
}



undefined4
fn_004e2ffc(int param_1,undefined1 param_2,undefined4 param_3,uint param_4,undefined4 param_5,
            undefined4 param_6,undefined1 param_7)

{
  undefined4 uVar1;
  
  if (param_4 < 0x5dd) {
    fn_001694e4(*(undefined4 *)(param_1 + 0x5c),param_3,param_4);
    *(undefined1 *)(param_1 + 0x58) = param_2;
    *(undefined4 *)(param_1 + 0x48) = param_5;
    *(undefined4 *)(param_1 + 0x40) = param_6;
    *(undefined1 *)(param_1 + 0x44) = param_7;
    uVar1 = 0;
    *(uint *)(param_1 + 0x60) = param_4;
  }
  else {
    uVar1 = 0xe0e14826;
  }
  return uVar1;
}



undefined4 fn_004e2fb8(int param_1)

{
  *(char **)(param_1 + 0x2c) = "LocalSendMessageJob::SendMessage";
  *(code **)(param_1 + 0x24) = fn_004e2e34;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return 0;
}



void fn_004e2f94(int param_1)

{
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  return;
}



uint fn_004e2e34(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint unaff_r7;
  uint local_20;
  int local_1c;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x40) != 0) {
    local_20 = 0;
    local_1c = 0;
    fn_004f01f4(&local_20);
    iVar3 = local_20 - *(uint *)(param_1 + 0x68);
    iVar4 = local_1c - (*(int *)(param_1 + 0x6c) + (uint)(local_20 < *(uint *)(param_1 + 0x68)));
    puVar1 = (undefined4 *)fn_004f0ce8();
    uVar2 = fn_0011c134(iVar3,iVar4,*puVar1,puVar1[1]);
    if (*(int *)(param_1 + 0x70) <= (int)uVar2) {
      local_20 = 0;
      local_1c = 0;
      fn_004f01f4(&local_20);
      *(uint *)(param_1 + 0x68) = local_20;
      *(int *)(param_1 + 0x6c) = local_1c;
      if (*(char *)(param_1 + 0x44) == '\0') {
        uVar2 = 0;
        do {
          if ((*(uint *)(param_1 + 0x40) & 1 << (uVar2 & 0xff)) != 0) {
            fn_004e137c(*(undefined4 *)(DAT_008bf504 + 0x14),*(undefined4 *)(param_1 + 0x5c),
                         *(undefined1 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60),
                         uVar2 + 1 & 0xff);
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < 0xc);
      }
      else {
        fn_004e137c(*(undefined4 *)(DAT_008bf504 + 0x14),*(undefined4 *)(param_1 + 0x5c),
                     *(undefined1 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60),0xfe);
      }
      return unaff_r7 & 0xff00 | 4 | *(int *)(param_1 + 0x70) << 0x10;
    }
  }
  return uVar2 & 0xff00 | 5;
}


