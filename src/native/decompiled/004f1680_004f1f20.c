#include "004f1680_004f1f20.h"



uint fn_004f1c48(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  uint unaff_r5;
  uint unaff_r10;
  undefined1 auStack_5e8 [1456];
  undefined1 local_38 [24];
  
  iVar2 = fn_004f2ff8();
  if (iVar2 != 0) {
    fn_004ed068(*(undefined4 *)(param_1 + 0x44));
    fn_004ed13c(*(undefined4 *)(param_1 + 0x44));
    *(undefined4 *)(param_1 + 0x40) = 0;
    return unaff_r5 & 0xff00 | 1;
  }
  if (*(int *)(DAT_008bf4cc + 0xa4) == 0) {
    fn_006d8a94(param_1);
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
    return 0xf401;
  }
  fn_00301f50(auStack_5e8,0x5ac);
  fn_004f5db4(*(undefined4 *)(DAT_008bf4e0 + 0x4c),auStack_5e8);
  fn_0014f590(local_38);
  iVar2 = fn_006d9ef0(DAT_008bf4cc,local_38,*(undefined1 *)(DAT_008bf4e0 + 0x62));
  if (-1 < iVar2) {
    fn_004f0ce8();
    uVar3 = fn_006d8d50(*(undefined4 *)(DAT_008bf4e0 + 0x4c));
    iVar2 = fn_00519798(DAT_008c0690,param_1 + 0x48,auStack_5e8,uVar3,0xfd,local_38,
                         *(undefined4 *)(*(int *)(DAT_008bf4e0 + 0x4c) + 0xc));
    if (-1 < iVar2) {
      *(int *)(*(int *)(DAT_008bf4e0 + 0x4c) + 0x18) = param_1;
      *(undefined1 *)(param_1 + 0x5c) = 1;
      *(undefined1 *)(param_1 + 0x5d) = 1;
      *(undefined1 *)(param_1 + 0x5e) = 1;
      *(undefined1 *)(param_1 + 0x5f) = 1;
      *(code **)(param_1 + 0x24) = fn_004f19f8;
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(char **)(param_1 + 0x2c) = "JoinMeshJob::WaitRequestAck";
      return unaff_r10 & 0xff00 | 5;
    }
  }
  fn_006d8a94(param_1);
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
  return (uint)local_38 & 0xff00 | 1;
}



uint fn_004f1b88(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint unaff_r5;
  
  if (*(int *)(param_1 + 0x40) != 0) {
    fn_004ed0e4(*(int *)(param_1 + 0x40),0);
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  *(undefined1 *)(param_1 + 0x70) = 4;
  iVar1 = DAT_008bf4e0;
  uVar2 = *(undefined4 *)(DAT_008bf49c + 0x34);
  *(undefined4 *)(DAT_008bf4e0 + 0x78) = *(undefined4 *)(DAT_008bf49c + 0x30);
  *(undefined4 *)(iVar1 + 0x7c) = uVar2;
  *(undefined1 *)(iVar1 + 0x80) = 1;
  fn_006d8a94(param_1);
  fn_006d8aec(param_1);
  DAT_008ed96c = 0;
  DAT_008edb18 = 0xffffffff;
  DAT_008edb24 = 0xff;
  fn_0051da64(DAT_008bf4d4,1);
  fn_00505c70(DAT_008bf4e0);
  return unaff_r5 & 0xff00 | 1;
}



uint fn_004f19f8(int param_1)

{
  int iVar1;
  uint unaff_r5;
  
  iVar1 = fn_006db318(DAT_008c0690,*(undefined4 *)(param_1 + 0x48));
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(char **)(param_1 + 0x2c) = "JoinMeshJob::WaitJoinResponse";
    *(code **)(param_1 + 0x24) = fn_004f1f20;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return unaff_r5 & 0xff00;
  }
  iVar1 = fn_004f2ff8(param_1);
  if (iVar1 != 0) {
    fn_005196a0(DAT_008c0690,*(undefined4 *)(param_1 + 0x48));
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined1 *)(param_1 + 0x5c) = 0;
    *(undefined1 *)(param_1 + 0x5d) = 0;
    *(undefined1 *)(param_1 + 0x5e) = 0;
    *(undefined1 *)(param_1 + 0x5f) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    return unaff_r5 & 0xff00 | 1;
  }
  iVar1 = fn_004f32d4(param_1);
  if ((iVar1 != 0) || (iVar1 = fn_004f33d4(param_1), iVar1 != 0)) {
    fn_005196a0(DAT_008c0690,*(undefined4 *)(param_1 + 0x48));
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined1 *)(param_1 + 0x5c) = 0;
    *(undefined1 *)(param_1 + 0x5d) = 0;
    *(undefined1 *)(param_1 + 0x5e) = 0;
    *(undefined1 *)(param_1 + 0x5f) = 0;
    return unaff_r5 & 0xff00 | 1;
  }
  if (*(char *)(param_1 + 0x5c) == '\0') {
    fn_005196a0(DAT_008c0690,*(undefined4 *)(param_1 + 0x48));
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(code **)(param_1 + 0x24) = fn_004f2800;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0x2c) = "JoinMeshJob::AnalyzeJoinResponse";
    return unaff_r5 & 0xff00;
  }
  return unaff_r5 & 0xff00 | 5;
}



uint fn_004f1f20(uint param_1,uint param_2)

{
  uint uVar1;
  
  if (*(char *)(param_1 + 0x5c) == '\0') {
    *(code **)(param_1 + 0x24) = fn_004f2800;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0x2c) = "JoinMeshJob::AnalyzeJoinResponse";
    return param_2 & 0xff00;
  }
  uVar1 = fn_004f2ff8(param_1);
  if (uVar1 != 0) {
    *(undefined1 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    return uVar1 & 0xff00 | 1;
  }
  uVar1 = fn_004f32d4(param_1);
  if ((uVar1 == 0) && (uVar1 = fn_004f33d4(param_1), uVar1 == 0)) {
    return param_1 & 0xff00 | 5;
  }
  *(undefined1 *)(param_1 + 0x5c) = 0;
  return uVar1 & 0xff00 | 1;
}



undefined4 fn_004f1910(int *param_1)

{
  (**(code **)(*param_1 + 8))(param_1,1);
  param_1[9] = (int)fn_004f2a08;
  param_1[10] = 0;
  param_1[0xb] = (int)"JoinMeshJob::StartConnectingToHost";
  return 1;
}



undefined1 * fn_004f17ac(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined *local_18;
  char *local_14;
  
  iVar1 = fn_004ed5b0(0,0x4000134);
  if (iVar1 == 0) {
    return &DAT_e0a14827;
  }
  if (DAT_008bf4d8 == '\0') {
    local_14 = "pia session heap";
    local_18 = &DAT_00859700;
    fn_004ed230(7,0,&local_18);
    puVar2 = (undefined1 *)0x0;
    DAT_008bf4d8 = '\x01';
  }
  else {
    puVar2 = &DAT_e0a14821;
  }
  return puVar2;
}



longlong fn_004f1680(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  uint extraout_r1;
  
  if (DAT_008bf4d8 == '\0') {
    puVar1 = &DAT_e0a1482b;
  }
  else {
    if (DAT_008bf4d9 == '\0') {
      fn_004ed204(7);
      DAT_008bf4d9 = 1;
      return (ulonglong)extraout_r1 << 0x20;
    }
    if (DAT_008c0630 != 0) {
      param_2 = 8;
    }
    puVar1 = &DAT_e0a14827;
  }
  return CONCAT44(param_2,puVar1);
}


