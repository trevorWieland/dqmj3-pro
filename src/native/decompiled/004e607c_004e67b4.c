#include "004e607c_004e67b4.h"



uint fn_004e67b4(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint unaff_r5;
  int local_18;
  
  local_18 = param_4;
  local_18 = fn_004dfb68(*(undefined4 *)(DAT_008bf504 + 0x14));
  if (local_18 < 0) {
    fn_004ed098(*(undefined4 *)(param_1 + 0x40),local_18);
    *(undefined4 *)(param_1 + 0x40) = 0;
    return unaff_r5 & 0xff00 | 1;
  }
  local_18 = fn_0051f07c(*(int *)(param_1 + 0x23c) + 4,1,param_1 + 0x240,
                          *(undefined1 *)(param_1 + 0x33f));
  if (local_18 < 0) {
    if (local_18 == -0x375eec16) {
      local_18 = -0x275eb795;
    }
    else if (local_18 == -0x377eec06) {
      local_18 = -0x275eb794;
    }
    else if (local_18 == -0x379eefff) {
      local_18 = -0x275eb793;
    }
    else if (local_18 == -0x36deec05) {
      local_18 = -0x275eb720;
    }
    else {
      local_18 = fn_006d5dec(*(undefined4 *)(DAT_008bf504 + 0x14),&local_18);
    }
    fn_004ed098(*(undefined4 *)(param_1 + 0x40),local_18);
    *(undefined4 *)(param_1 + 0x40) = 0;
    return unaff_r5 & 0xff00 | 1;
  }
  if (*(char *)(*(int *)(param_1 + 0x40) + 0x10) != '\0') {
    fn_004ed068();
    *(undefined4 *)(param_1 + 0x40) = 0;
    return unaff_r5 & 0xff00 | 1;
  }
  iVar1 = fn_006d58dc(DAT_008bf504);
  if ((iVar1 == 0) ||
     (local_18 = (**(code **)(**(int **)(DAT_008bf504 + 0x18) + 0xc))
                           (*(int **)(DAT_008bf504 + 0x18),param_1 + 0x23c), -1 < local_18)) {
    *(undefined4 *)(param_1 + 0x340) = 0;
    *(char **)(param_1 + 0x2c) = "UdsBackgroundProcessJob::WaitConnectNetworkEvent";
    *(code **)(param_1 + 0x24) = fn_004e7588;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return unaff_r5 & 0xff00 | 0xf0004;
  }
  fn_004ed098(*(undefined4 *)(param_1 + 0x40),local_18);
  *(undefined4 *)(param_1 + 0x40) = 0;
  return unaff_r5 & 0xff00 | 1;
}



uint fn_004e6648(int param_1)

{
  uint unaff_r5;
  int local_18 [2];
  
  local_18[0] = fn_004dfb68(*(undefined4 *)(DAT_008bf504 + 0x14));
  if (local_18[0] < 0) {
    fn_004ed098(*(undefined4 *)(param_1 + 0x40),local_18[0]);
    *(undefined4 *)(param_1 + 0x40) = 0;
    return unaff_r5 & 0xff00 | 1;
  }
  local_18[0] = fn_0051efd8(*(undefined1 *)(param_1 + 0x48),*(undefined1 *)(param_1 + 0x49),
                             *(undefined4 *)(param_1 + 0x4c),param_1 + 0x50,
                             *(undefined4 *)(param_1 + 0x150),*(undefined1 *)(param_1 + 0x154),
                             param_1 + 0x155,*(undefined4 *)(param_1 + 0x220));
  if (-1 < local_18[0]) {
    if (*(char *)(*(int *)(param_1 + 0x40) + 0x10) == '\0') {
      *(undefined4 *)(param_1 + 0x340) = 0;
      *(code **)(param_1 + 0x24) = fn_004e74cc;
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(char **)(param_1 + 0x2c) = "UdsBackgroundProcessJob::WaitCreateNetworkEvent";
      return unaff_r5 & 0xff00 | 0xf0004;
    }
    fn_004ed068();
    *(undefined4 *)(param_1 + 0x40) = 0;
    return unaff_r5 & 0xff00 | 1;
  }
  if (local_18[0] == -0x375eec16) {
    local_18[0] = -0x275eb795;
  }
  else {
    local_18[0] = fn_006d5dec(*(undefined4 *)(DAT_008bf504 + 0x14),local_18);
  }
  fn_004ed098(*(undefined4 *)(param_1 + 0x40),local_18[0]);
  *(undefined4 *)(param_1 + 0x40) = 0;
  return unaff_r5 & 0xff00 | 1;
}



uint fn_004e645c(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  uint unaff_r4;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint unaff_r8;
  int local_38;
  undefined *local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined1 auStack_28 [12];
  
  iVar5 = DAT_008bf504 + 0x50;
  fn_004edc34(iVar5);
  local_38 = fn_0051fce4(*(undefined4 *)(param_1 + 0x234),*(undefined4 *)(param_1 + 0x238),
                          *(undefined1 *)(param_1 + 0x22c),*(undefined4 *)(param_1 + 0x230));
  if (local_38 < 0) {
    if (local_38 == -0x375eec16) {
      local_38 = -0x275eb795;
    }
    else {
      local_38 = fn_006d5dec(*(undefined4 *)(DAT_008bf504 + 0x14),&local_38);
    }
    fn_004ed098(*(undefined4 *)(param_1 + 0x40),local_38);
    *(undefined4 *)(param_1 + 0x40) = 0;
    fn_004edc70(iVar5);
    return unaff_r4 & 0xff00 | 1;
  }
  local_30 = *(undefined4 *)(param_1 + 0x234);
  local_34 = &DAT_00857370;
  iVar6 = 0;
  uStack_2c = 0;
  uVar4 = 0;
  while( true ) {
    uVar1 = fn_006dc1e8(&local_34);
    if (uVar1 <= uVar4 || 0xf < uVar4) {
      **(int **)(param_1 + 0x228) = iVar6;
      iVar6 = *(int *)(param_1 + 0x40);
      if (*(char *)(iVar6 + 0x10) == '\0') {
        fn_004ed0e4(iVar6,local_38);
        *(undefined4 *)(param_1 + 0x40) = 0;
        fn_004edc70(iVar5);
        return unaff_r8 & 0xff00 | 1;
      }
      fn_004ed098(iVar6,0xd0a14867);
      *(undefined4 *)(param_1 + 0x40) = 0;
      fn_004edc70(iVar5);
      return uVar4 & 0xff00 | 1;
    }
    fn_0051f45c(auStack_28,&local_34);
    local_38 = fn_0051f868(auStack_28,*(int *)(param_1 + 0x224) + uVar4 * 0x10c + 4);
    if (local_38 < 0) break;
    iVar6 = iVar6 + 1;
    uVar4 = uVar4 + 1;
  }
  if (local_38 == -0x1edeeffb) {
    puVar3 = &DAT_e0a14827;
    uVar2 = *(undefined4 *)(param_1 + 0x40);
  }
  else {
    puVar3 = (undefined1 *)fn_006d5dec(*(undefined4 *)(DAT_008bf504 + 0x14),&local_38);
    uVar2 = *(undefined4 *)(param_1 + 0x40);
  }
  fn_004ed098(uVar2,puVar3);
  *(undefined4 *)(param_1 + 0x40) = 0;
  fn_004edc70(iVar5);
  return uVar4 & 0xff00 | 1;
}



void fn_004e63fc(undefined4 *param_1)

{
  *param_1 = &DAT_008568d8;
  if (param_1[6] != 0) {
    fn_00656b7c();
    param_1[6] = 0;
  }
  if (param_1[0xb] != 0) {
    fn_00656b7c();
    param_1[0xb] = 0;
  }
  if (param_1[0xc] != 0) {
    fn_00656b7c();
    param_1[0xc] = 0;
  }
  fn_004e50b4(param_1);
  return;
}



undefined4 * fn_004e6320(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  
  puVar1 = (undefined4 *)fn_004e5044();
  *puVar1 = &DAT_008568d8;
  uVar2 = fn_004ed2e8();
  puVar3 = (undefined4 *)fn_00656e14(0x10c,uVar2);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = &DAT_00856874;
  }
  puVar1[6] = puVar3;
  uVar2 = fn_004ed2e8();
  puVar4 = (undefined1 *)fn_00656e14(0x1dc,uVar2);
  if (puVar4 == (undefined1 *)0x0) {
    puVar4 = (undefined1 *)0x0;
  }
  else {
    *puVar4 = 0;
    puVar4[1] = 0;
    *(undefined4 *)(puVar4 + 4) = 0;
    *(undefined4 *)(puVar4 + 0x108) = 0;
    puVar4[0x10c] = 0;
    *(undefined4 *)(puVar4 + 0x1d8) = 0;
    fn_00301f50(puVar4 + 8,0xff);
    fn_00158f6c(puVar4 + 0x10d,200);
  }
  puVar1[0xb] = puVar4;
  uVar2 = fn_004ed2e8();
  puVar3 = (undefined4 *)fn_00656e14(0x104,uVar2);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = 0;
    *(undefined1 *)((int)puVar3 + 0x103) = 0;
    fn_00301f50(puVar3 + 1,0xff);
  }
  puVar1[0xc] = puVar3;
  return puVar1;
}



undefined4 * fn_004e62f0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x30);
  *puVar1 = param_2;
  fn_001694e4(puVar1 + 1,*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28));
  *(char *)((int)puVar1 + 0x103) = (char)*(undefined4 *)(param_1 + 0x28);
  return puVar1;
}



undefined1 * fn_004e6254(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  
  iVar2 = *(int *)(param_1 + 0x18);
  puVar4 = *(undefined1 **)(param_1 + 0x2c);
  uVar1 = 0;
  if (*(char *)(iVar2 + 0xc) != '\0') {
    uVar1 = *(undefined1 *)(iVar2 + 0x18);
  }
  *puVar4 = uVar1;
  uVar1 = 0;
  if (*(char *)(iVar2 + 0xc) != '\0') {
    uVar1 = *(undefined1 *)(iVar2 + 0x21);
  }
  puVar4[1] = uVar1;
  uVar3 = 0;
  if (*(char *)(iVar2 + 0xc) != '\0') {
    uVar3 = *(uint *)(iVar2 + 0x14);
    uVar3 = uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
            uVar3 >> 0x18;
  }
  *(uint *)(puVar4 + 4) = uVar3;
  fn_001694e4(puVar4 + 8,*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28));
  *(undefined4 *)(puVar4 + 0x108) = *(undefined4 *)(param_1 + 0x28);
  uVar1 = 0;
  if (*(char *)(iVar2 + 0xc) != '\0') {
    uVar1 = (undefined1)*(undefined2 *)(iVar2 + 10);
  }
  puVar4[0x10c] = uVar1;
  fn_001694e4(puVar4 + 0x10d,*(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x1c),
               *(undefined4 *)(param_1 + 0x20));
  *(undefined4 *)(puVar4 + 0x1d8) = *(undefined4 *)(param_1 + 0x20);
  return puVar4;
}



void fn_004e61ac(int param_1,undefined4 param_2)

{
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 auStack_26 [6];
  undefined4 local_20;
  undefined2 local_1c;
  undefined1 auStack_1a [6];
  
  local_28 = 1;
  local_30 = 0;
  local_2c = 0;
  local_27 = 0;
  fn_006f94d0(auStack_26);
  local_20 = 0;
  local_1c = 0;
  fn_006f94d0(auStack_1a);
  local_30 = *(undefined4 *)(*(int *)(DAT_008bf504 + 0x14) + 0x1238);
  local_2c = *(undefined4 *)(*(int *)(DAT_008bf504 + 0x14) + 0x1240);
  local_27 = fn_006d6604(*(undefined4 *)(DAT_008bf504 + 0x14));
  fn_001694e4(&local_20,*(int *)(param_1 + 0x18) + 4,6);
  fn_001694e4(param_2,&local_30,0x1c);
  return;
}



undefined4 fn_004e6130(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  iVar1 = *param_2;
  uVar2 = fn_006dc220(iVar1 + 4,*(undefined4 *)(param_1 + 0x1c),
                       *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x38));
  if (uVar2 < *(uint *)(param_1 + 0x38)) {
    uVar3 = 0xd1614828;
  }
  else {
    *(uint *)(param_1 + 0x20) = uVar2 - *(uint *)(param_1 + 0x38);
    fn_0017821c(*(int *)(param_1 + 0x18) + 4,iVar1 + 4,0x108);
    *(uint *)(param_1 + 0x28) = (uint)*(byte *)((int)param_2 + 0x103);
    fn_0016986c(*(undefined4 *)(param_1 + 0x24),param_2 + 1,*(undefined1 *)((int)param_2 + 0x103));
    uVar3 = 0;
  }
  return uVar3;
}



undefined4 fn_004e607c(int param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(DAT_008bf504 + 0x14) + 0x1228;
  fn_004edc34(iVar3);
  piVar1 = (int *)(**(code **)(**(int **)(DAT_008bf504 + 0x14) + 0x3c))
                            (*(int **)(DAT_008bf504 + 0x14),param_2);
  if ((piVar1 != (int *)0x0) && (*piVar1 == *(int *)(*(int *)(DAT_008bf504 + 0x14) + 0x123c))) {
    uVar2 = 0;
    while (*(char *)(*(int *)(param_1 + 0x18) + 4 + uVar2) == *(char *)((int)piVar1 + uVar2 + 0x10))
    {
      uVar2 = uVar2 + 1;
      if (5 < uVar2) {
        fn_004edc70(iVar3);
        return 1;
      }
    }
  }
  fn_004edc70(iVar3);
  return 0;
}


