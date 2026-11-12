#include "004f8e14_004f956c.h"



uint fn_004f956c(int *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  uint unaff_r7;
  undefined1 auStack_68 [84];
  
  iVar1 = fn_006d96e0(DAT_008bf4e8);
  if (iVar1 == 5) {
    fn_004ed098(param_1[0x10],0xd8a14825);
    param_1[0x10] = 0;
    return 0xf401;
  }
  uVar2 = (uint)*(byte *)(DAT_008bf4e8 + 0xb5);
  if (*(int *)(DAT_008bf4e8 + (uint)(uVar2 == 0) * 4 + 0xc4) == 0) {
    iVar1 = DAT_008bf4e8 + uVar2 * 4;
    piVar3 = *(int **)(iVar1 + 0xb8);
  }
  else {
    piVar3 = *(int **)(DAT_008bf4e8 + (uint)(uVar2 == 0) * 4 + 0xb8);
    iVar1 = DAT_008bf4e8 + (uint)(uVar2 == 0) * 4;
  }
  uVar4 = *(undefined4 *)(iVar1 + 0xc4);
  fn_00124e48(auStack_68);
  fn_0050d068(param_1 + 0x18,auStack_68);
  iVar1 = (**(code **)(*piVar3 + 0x50))(piVar3,param_1 + 0x2d,uVar4);
  if (iVar1 < 0) {
    uVar2 = (**(code **)(*param_1 + 0x38))(param_1,iVar1);
    fn_0051811c(auStack_68);
    return uVar2;
  }
  param_1[9] = (int)fn_004f96d4;
  param_1[10] = 0;
  param_1[0xb] = (int)(char *)&DAT_004f96a8;
  fn_0051811c(auStack_68);
  return unaff_r7 & 0xff00 | 5;
}



uint fn_004f9190(int *param_1,undefined4 param_2,uint param_3)

{
  uint unaff_r4;
  
  if ((char)param_1[0x2d] == '\x01') {
    return param_3 & 0xff00 | 5;
  }
  (**(code **)(*param_1 + 0x3c))();
  return unaff_r4 & 0xff00;
}



uint fn_004f9024(int *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint unaff_r5;
  bool bVar4;
  undefined8 uVar5;
  
  iVar2 = fn_006d96e0(DAT_008bf4e8);
  if (iVar2 == 5) {
    fn_004ed098(param_1[0x10],0xd8a14825);
    param_1[0x10] = 0;
    return unaff_r5 & 0xff00 | 1;
  }
  iVar2 = fn_005059d4(DAT_008bf4e0);
  if (iVar2 != 0) {
    iVar2 = fn_00505b1c(DAT_008bf4e0);
    if (iVar2 < 0) {
      if (iVar2 == -0x26deb7dc) {
        if (*(char *)((int)param_1 + 0x57) != '\0') {
          iVar2 = -0x275eb71f;
        }
        if ((char)param_1[0x16] != '\0') {
          iVar2 = -0x275eb71f;
        }
      }
    }
    else {
      uVar5 = fn_006d9250(DAT_008bf4e0);
      if (-1 < (int)uVar5) {
        param_1[9] = (int)fn_004f92e0;
        param_1[10] = 0;
        param_1[0xb] = (int)"AutoMatchmakeJob::CompleteProcess";
        return (uint)((ulonglong)uVar5 >> 0x20) & 0xff00;
      }
      iVar2 = -0x275eb708;
      param_1[0x14] = -0x275eb71f;
    }
                    /* WARNING: Could not recover jumptable at 0x004f90a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*param_1 + 0x38))(param_1,iVar2);
    return uVar3;
  }
  cVar1 = *(char *)((int)param_1 + 0x57);
  bVar4 = cVar1 == '\0';
  if (bVar4) {
    cVar1 = (char)param_1[0x16];
  }
  if (bVar4 && cVar1 == '\0') {
    iVar2 = param_1[0x10];
    cVar1 = '\0';
    if (iVar2 != 0) {
      cVar1 = *(char *)(iVar2 + 0x10);
    }
    if (iVar2 == 0 || cVar1 == '\0') goto LAB_004f9128;
  }
  fn_005058c4(DAT_008bf4e0);
LAB_004f9128:
  return unaff_r5 & 0xff00 | 5;
}



uint fn_004f92e0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  uint unaff_r7;
  bool bVar7;
  
  iVar2 = *(int *)(param_1 + 0x40);
  cVar1 = '\0';
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + 0x10);
  }
  if (iVar2 != 0 && cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0x50) = 0xd9214824;
    *(char **)(param_1 + 0x2c) = "AutoMatchmakeJob::LeaveMesh";
    *(code **)(param_1 + 0x24) = fn_004f9b84;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return param_4 & 0xff00;
  }
  cVar1 = *(char *)(param_1 + 0x57);
  bVar7 = cVar1 == '\0';
  if (bVar7) {
    cVar1 = *(char *)(param_1 + 0x58);
  }
  if (!bVar7 || cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0x50) = 0xd8a148e1;
    *(char **)(param_1 + 0x2c) = "AutoMatchmakeJob::LeaveMesh";
    *(code **)(param_1 + 0x24) = fn_004f9b84;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return param_4 & 0xff00;
  }
  *(undefined1 *)(param_1 + 0x4d) = 1;
  uVar3 = DAT_008bf4e8;
  if (*(int *)(DAT_008bf4e8 + (uint)(*(char *)(DAT_008bf4e8 + 0xb5) == '\0') * 4 + 0xc4) == 0) {
    *(undefined1 *)(DAT_008bf4e8 + 0x71) = 2;
    iVar2 = fn_006d9588(uVar3);
    if (iVar2 == 0) goto LAB_004f9424;
    uVar5 = (uint)*(byte *)(DAT_008bf4e8 + 0xb5);
  }
  else {
    *(undefined1 *)(DAT_008bf4e8 + 0x71) = 4;
    iVar2 = fn_006d9588(uVar3);
    if (iVar2 == 0) goto LAB_004f9424;
    if (*(char *)(DAT_008bf4e8 + 0xb5) == '\0') {
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
    }
  }
  fn_0050aef0(*(undefined4 *)(DAT_008bf4d4 + 0x7c),*(undefined1 *)(DAT_008bf4e8 + uVar5 + 0xb3));
LAB_004f9424:
  *(undefined1 *)(uVar3 + 0x72) = 1;
  iVar2 = fn_00507a50(uVar3);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x50) = 0xd8a148e1;
    DAT_008edb24 = fn_005075d8(DAT_008bf4e8);
    *(char **)(param_1 + 0x2c) = "AutoMatchmakeJob::LeaveMesh";
    *(code **)(param_1 + 0x24) = fn_004f9b84;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return uVar3 & 0xff00 | 5;
  }
  iVar2 = fn_006d9588(uVar3);
  if (iVar2 != 0) {
    *(undefined1 *)(uVar3 + 0xb2) = 0;
    fn_004ff3d0(*(undefined4 *)(uVar3 + 100));
    fn_004ff550(*(undefined4 *)(uVar3 + 100));
  }
  uVar5 = *(uint *)(DAT_008bf49c + 0x30);
  iVar6 = *(int *)(DAT_008bf49c + 0x34);
  uVar3 = *(uint *)(param_1 + 0xe0);
  iVar2 = *(int *)(param_1 + 0xe4);
  puVar4 = (undefined4 *)fn_004f0ce8();
  iVar2 = fn_0011c134(uVar5 - uVar3,iVar6 - (iVar2 + (uint)(uVar5 < uVar3)),*puVar4,puVar4[1]);
  if (-1 < iVar2) {
    DAT_008eda44 = iVar2;
  }
  DAT_008edb24 = 0xff;
  if (*(char *)(param_1 + 0x4c) == '\0') {
    DAT_008ed96c = 0;
  }
  else {
    DAT_008ed96c = 0xffffffff;
  }
  DAT_008edb18 = 0xffffffff;
  *(undefined1 *)(DAT_008bf4e0 + 0xa4) = 0;
  fn_00503c80(DAT_008bf4e0,0);
  fn_004ed0e4(*(undefined4 *)(param_1 + 0x40),0);
  *(undefined4 *)(param_1 + 0x40) = 0;
  return unaff_r7 & 0xff00 | 1;
}



uint fn_004f8f6c(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint unaff_r5;
  
  iVar1 = fn_00505148(DAT_008bf4e0);
  if (iVar1 < 0) {
    (**(code **)(**(int **)(DAT_008bf4e8 + 8) + 0x14))();
                    /* WARNING: Could not recover jumptable at 0x004f8fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*param_1 + 0x34))(param_1,iVar1);
    return uVar2;
  }
  *(undefined1 *)(DAT_008bf4e0 + 0xa4) = 1;
  param_1[9] = (int)fn_004f91d4;
  param_1[10] = 0;
  param_1[0xb] = (int)"AutoMatchmakeJob::WaitCreateMesh";
  return unaff_r5 & 0xff00 | 5;
}



uint fn_004f91d4(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint unaff_r4;
  uint unaff_r6;
  
  iVar1 = fn_006d96e0(DAT_008bf4e8);
  if (iVar1 == 5) {
    fn_004ed098(param_1[0x10],0xd8a14825);
    param_1[0x10] = 0;
    return unaff_r4 & 0xff00 | 1;
  }
  iVar2 = fn_00505c40(DAT_008bf4e0);
  iVar1 = DAT_008bf4e8;
  if (iVar2 == 0) {
    return unaff_r4 & 0xff00 | 5;
  }
  iVar2 = fn_005059b8(DAT_008bf4e0);
  if (iVar2 < 0) {
    (**(code **)(**(int **)(iVar1 + 8) + 0x14))();
                    /* WARNING: Could not recover jumptable at 0x004f9244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*param_1 + 0x34))(param_1,iVar2);
    return uVar3;
  }
  *(undefined1 *)(iVar1 + 0x71) = 2;
  *(undefined1 *)(iVar1 + 0x72) = 1;
  fn_005079c8(iVar1);
  iVar2 = fn_006d9588(iVar1);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar1 + 0xb2) = 0;
    fn_004ff550(*(undefined4 *)(iVar1 + 100));
  }
  (**(code **)(*param_1 + 0x30))(param_1);
  return unaff_r6 & 0xff00;
}



void fn_004f8f10(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_004eddf4();
  puVar1[0x10] = 0;
  *puVar1 = &DAT_00856e30;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x15] = 0;
  puVar1[0x14] = 5000;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  *(undefined1 *)(puVar1 + 0x18) = 0;
  *(undefined1 *)((int)puVar1 + 0x61) = 0;
  *(undefined1 *)((int)puVar1 + 0x62) = 0;
  return;
}



undefined4 fn_004f8e14(int *param_1,int param_2,int param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint uVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint local_18;
  int iStack_14;
  
  if (*(char *)((int)param_1 + 0x61) == '\0') {
    if (param_2 != 0) {
      param_1[0x10] = param_2;
      fn_004ed050(param_2);
    }
    local_18 = 0;
    iStack_14 = 0;
    fn_004f01f4(&local_18);
    uVar8 = param_1[0x14];
    puVar3 = (uint *)fn_004f0ce8();
    uVar6 = *puVar3;
    uVar7 = puVar3[1];
    lVar1 = (ulonglong)uVar8 * (ulonglong)uVar6;
    uVar4 = (uint)lVar1;
    param_1[0x12] = uVar4 + local_18;
    param_1[0x13] =
         uVar6 * ((int)uVar8 >> 0x1f) + uVar7 * uVar8 + (int)((ulonglong)lVar1 >> 0x20) + iStack_14
         + (uint)CARRY4(uVar4,local_18);
    *(undefined1 *)((int)param_1 + 0x61) = 1;
    *(char *)((int)param_1 + 0x62) = (char)param_3;
    if (param_3 == 0) {
      uVar5 = 2;
    }
    else {
      uVar5 = *(undefined1 *)(DAT_008bf4e0 + 0x65);
    }
    fn_00505a04(DAT_008bf4e0,uVar5);
    (**(code **)(*param_1 + 8))(param_1,1);
    param_1[9] = (int)fn_004f8b84;
    param_1[10] = 0;
    param_1[0xb] = (int)"DestroyMeshJob::SendDestroyMesh";
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


