#include "004f32d4_004f3eb4.h"



undefined4 fn_004f3eb4(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x50) == 0) {
    *(undefined4 *)(param_1 + 0x50) = param_2;
    fn_004ed050(param_2);
    return 1;
  }
  return 0;
}



uint fn_004f3c30(int param_1)

{
  uint unaff_r5;
  
  fn_004f5854(*(undefined4 *)(DAT_008bf4e0 + 0x4c));
  *(int *)(*(int *)(DAT_008bf4e0 + 0x4c) + 0x20) = param_1;
  *(undefined1 *)(param_1 + 0x54) = 1;
  *(undefined1 **)(param_1 + 0x24) = &LAB_004f3cb4;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(char **)(param_1 + 0x2c) = "LeaveMeshJob::WaitLeaveResponse";
  return unaff_r5 & 0xff00 | 5;
}



void fn_004f3970(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  *param_1 = &PTR_FUN_00856d88;
  fn_004ed068(param_1[0x11]);
  fn_004ed13c(param_1[0x11]);
  if (param_1[0x11] != 0) {
    fn_00656b7c(param_1[0x11]);
  }
  iVar3 = param_1[0x15];
  if (iVar3 != 0) {
    uVar1 = fn_00656b0c(iVar3);
    uVar2 = 0;
    uVar1 = (uint)((ulonglong)uVar1 * 0xc30c30c3 + 0xc30c30c3 >> 0x26);
    if (uVar1 != 0) {
      do {
        (*(code *)**(undefined4 **)(iVar3 + uVar2 * 0x54))(iVar3 + uVar2 * 0x54);
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar1);
    }
    fn_00656b7c(iVar3);
  }
  iVar3 = param_1[0x16];
  if (iVar3 != 0) {
    fn_00656b0c(iVar3);
    fn_00656b7c(iVar3);
  }
  iVar3 = param_1[0x1b];
  if (iVar3 != 0) {
    fn_00656b0c(iVar3);
    fn_00656b7c(iVar3);
  }
  fn_004ede4c(param_1);
  fn_004ecfd0();
  return;
}



int fn_004f37a4(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  
  puVar1 = (undefined4 *)fn_004eddf4();
  *puVar1 = &PTR_FUN_00856d88;
  puVar1[0x10] = 0;
  puVar1[0x12] = 0;
  *(undefined1 *)(puVar1 + 0x17) = 0;
  *(undefined1 *)(puVar1 + 0x18) = 3;
  *(undefined1 *)(puVar1 + 0x1c) = 0;
  puVar1[0x1d] = 0xe7e3ffff;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  iVar2 = fn_004ed164(puVar1 + 0x22);
  *(undefined1 *)(iVar2 + -0x2b) = 0;
  *(undefined1 *)(iVar2 + -0x2a) = 0;
  *(undefined1 *)(iVar2 + -0x29) = 0;
  *(undefined4 *)(iVar2 + -0x20) = 0;
  uVar3 = fn_004ed2e8();
  iVar4 = fn_00656e14(0x14,uVar3);
  uVar3 = 0;
  if (iVar4 != 0) {
    uVar3 = fn_004ed164();
  }
  *(undefined4 *)(iVar2 + -0x44) = uVar3;
  uVar8 = (uint)*(ushort *)(DAT_008bf4e0 + 0x5e);
  *(uint *)(iVar2 + -0x38) = uVar8;
  uVar3 = fn_004ed2e8();
  iVar4 = fn_00656e14(uVar8 * 0x54,uVar3);
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    uVar7 = 0;
    if (uVar8 != 0) {
      do {
        if (iVar4 + uVar7 * 0x54 != 0) {
          fn_00124e48();
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar8);
    }
  }
  *(int *)(iVar2 + -0x34) = iVar4;
  uVar8 = *(uint *)(iVar2 + -0x38);
  uVar3 = fn_004ed2e8();
  iVar4 = fn_00656e14(uVar8,uVar3);
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    uVar7 = 0;
    if (uVar8 != 0) {
      do {
        puVar5 = (undefined1 *)(iVar4 + uVar7);
        uVar7 = uVar7 + 1;
        if (puVar5 != (undefined1 *)0x0) {
          *puVar5 = 0;
        }
      } while (uVar7 < uVar8);
    }
  }
  *(int *)(iVar2 + -0x30) = iVar4;
  uVar8 = *(uint *)(iVar2 + -0x38);
  uVar3 = fn_004ed2e8();
  puVar5 = (undefined1 *)fn_00656e14(uVar8,uVar3);
  if (puVar5 == (undefined1 *)0x0) {
    puVar5 = (undefined1 *)0x0;
  }
  else {
    uVar7 = 0;
    if (uVar8 != 0) {
      do {
        puVar6 = puVar5 + uVar7;
        uVar7 = uVar7 + 1;
        if (puVar6 != (undefined1 *)0x0) {
          *puVar6 = 0;
        }
      } while (uVar7 < uVar8);
    }
  }
  *(undefined1 **)(iVar2 + -0x1c) = puVar5;
  if (*(uint *)(iVar2 + -0x38) != 0) {
    uVar8 = *(uint *)(iVar2 + -0x38) & 1;
    if (uVar8 == 1) {
      *puVar5 = 0;
    }
    uVar7 = (uint)(uVar8 == 1);
    if (uVar8 < *(uint *)(iVar2 + -0x38)) {
      do {
        uVar8 = uVar8 + 2;
        *(undefined1 *)(*(int *)(iVar2 + -0x1c) + uVar7) = 0;
        *(undefined1 *)(*(int *)(iVar2 + -0x1c) + uVar7 + 1) = 0;
        uVar7 = uVar7 + 2;
      } while (uVar8 < *(uint *)(iVar2 + -0x38));
    }
  }
  return iVar2 + -0x88;
}



uint fn_004f373c(int param_1)

{
  uint unaff_r5;
  
  fn_0050697c(DAT_008bf4e0,param_1 + 0x88);
  *(undefined1 **)(param_1 + 0x24) = &LAB_004f1970;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(char **)(param_1 + 0x2c) = "JoinMeshJob::WaitLeaveMesh";
  return unaff_r5 & 0xff00 | 5;
}



undefined4 fn_004f3610(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int local_18;
  int iStack_14;
  
  if (param_3 != 0) {
    param_1[0x10] = param_3;
    fn_004ed050(param_3);
  }
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  uVar2 = 0;
  if (iVar1 != 0) {
    fn_00518140(param_1[0x15],param_2);
    param_1[0x1d] = 0;
    *(undefined1 *)(param_1 + 0x17) = 0;
    *(undefined1 *)((int)param_1 + 0x5d) = 0;
    *(undefined1 *)((int)param_1 + 0x5e) = 0;
    *(undefined1 *)((int)param_1 + 0x5f) = 0;
    param_1[0x12] = 0;
    param_1[0x1a] = 0;
    if (param_1[0x14] != 0) {
      uVar3 = param_1[0x14] & 1;
      if (uVar3 == 1) {
        *(undefined1 *)param_1[0x1b] = 0;
      }
      uVar4 = (uint)(uVar3 == 1);
      if (uVar3 < (uint)param_1[0x14]) {
        do {
          uVar3 = uVar3 + 2;
          *(undefined1 *)(param_1[0x1b] + uVar4) = 0;
          *(undefined1 *)(param_1[0x1b] + uVar4 + 1) = 0;
          uVar4 = uVar4 + 2;
        } while (uVar3 < (uint)param_1[0x14]);
      }
    }
    fn_00505d54(DAT_008bf4e0);
    (**(code **)(*param_1 + 0x20))(param_1,param_2);
    param_1[0x1e] = *(int *)(param_2 + 0x18);
    *(undefined1 *)(*(int *)(DAT_008bf4e0 + 0x14) + 0xa6) = 1;
    local_18 = 0;
    iStack_14 = 0;
    fn_004f01f4(&local_18);
    param_1[0x20] = local_18;
    param_1[0x21] = iStack_14;
    uVar2 = 1;
  }
  return uVar2;
}



void fn_004f3498(int *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  (**(code **)(*param_1 + 0x1c))(param_1);
  fn_004ed068(param_1[0x11]);
  fn_004ed13c(param_1[0x11]);
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined1 *)((int)param_1 + 0x5d) = 0;
  *(undefined1 *)((int)param_1 + 0x5e) = 0;
  *(undefined1 *)((int)param_1 + 0x5f) = 0;
  if (param_1[0x12] != 0) {
    if (DAT_008c0690 != 0) {
      fn_005196a0();
    }
    param_1[0x12] = 0;
  }
  param_1[0x1a] = 0;
  if (param_1[0x14] != 0) {
    uVar2 = param_1[0x14] & 1;
    if (uVar2 == 1) {
      *(undefined1 *)param_1[0x1b] = 0;
    }
    uVar3 = (uint)(uVar2 == 1);
    if (uVar2 < (uint)param_1[0x14]) {
      do {
        uVar2 = uVar2 + 2;
        *(undefined1 *)(param_1[0x1b] + uVar3) = 0;
        *(undefined1 *)(param_1[0x1b] + uVar3 + 1) = 0;
        uVar3 = uVar3 + 2;
      } while (uVar2 < (uint)param_1[0x14]);
    }
  }
  if ((char)param_1[0x22] == '\x01') {
    fn_004ed158(param_1 + 0x22);
  }
  if ((char *)param_1[0x10] == (char *)0x0) goto LAB_004f35e0;
  if (*(char *)param_1[0x10] == '\x01') {
    fn_006d8a94(param_1);
    fn_006d8aec(param_1);
    cVar1 = *(char *)param_1[0x10];
    if (param_2 < 0) {
      if ((cVar1 != '\x02' && cVar1 != '\x03') && cVar1 != '\x04') {
LAB_004f35c0:
        fn_004ed098((char *)param_1[0x10],param_2);
      }
    }
    else {
      param_2 = -0x26deb7dc;
      if ((cVar1 != '\x02' && cVar1 != '\x03') && cVar1 != '\x04') goto LAB_004f35c0;
    }
    DAT_008edb18 = param_1[0x1e];
    DAT_008ed96c = param_2;
    fn_00505c70(DAT_008bf4e0);
  }
  param_1[0x10] = 0;
LAB_004f35e0:
  *(undefined1 *)(param_1 + 0x1c) = 0;
  return;
}



undefined4 fn_004f33d4(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  iVar2 = fn_0050b080(DAT_008bf4cc,*(undefined1 *)(DAT_008bf4e0 + 0x62));
  if ((iVar2 == 0) || (*(char *)(iVar2 + 0x20) != '\x05')) {
    fn_006d8a94(param_1);
    fn_006d8aec(param_1);
    pcVar4 = *(char **)(param_1 + 0x40);
    if (pcVar4 != (char *)0x0) {
      cVar1 = *pcVar4;
      if ((cVar1 != '\x02' && cVar1 != '\x03') && (cVar1 != '\x04')) {
        fn_004ed098(pcVar4,0xd8a148e1);
      }
      DAT_008ed96c = 0xd8a148e1;
      DAT_008edb18 = *(undefined4 *)(param_1 + 0x78);
      fn_00505c70(DAT_008bf4e0);
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
    fn_004ed068(*(undefined4 *)(param_1 + 0x44));
    fn_004ed13c(*(undefined4 *)(param_1 + 0x44));
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



undefined4 fn_004f32d4(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if (*(int *)(DAT_008bf4d4 + 0x38) < 0) {
    fn_006d8a94(param_1);
    fn_006d8aec(param_1);
    pcVar2 = *(char **)(param_1 + 0x40);
    if (pcVar2 != (char *)0x0) {
      cVar1 = *pcVar2;
      if ((cVar1 != '\x02' && cVar1 != '\x03') && (cVar1 != '\x04')) {
        fn_004ed098(pcVar2,0xd8a148e1);
      }
      DAT_008ed96c = 0xd8a148e1;
      DAT_008edb18 = *(undefined4 *)(param_1 + 0x78);
      fn_00505c70(DAT_008bf4e0);
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
    fn_004ed068(*(undefined4 *)(param_1 + 0x44));
    fn_004ed13c(*(undefined4 *)(param_1 + 0x44));
    uVar3 = 1;
  }
  return uVar3;
}


