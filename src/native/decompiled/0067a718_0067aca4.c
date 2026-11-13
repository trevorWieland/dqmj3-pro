#include "0067a718_0067aca4.h"



void fn_0067aca4(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_00145b00(0x88,&DAT_00812c8c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = &DAT_00859b90;
    fn_00129688(puVar1);
    fn_002fec40(puVar1 + 1,s_NexCommandRankingUploadScoreData_008c718e);
    *puVar1 = &DAT_00859be4;
    iVar2 = fn_00119b40(puVar1 + 0x13);
    puVar1 = (undefined4 *)(iVar2 + -0x4c);
    fn_00119b60();
    *puVar1 = &DAT_00859ab8;
    *puVar1 = &DAT_0085a6dc;
    *(undefined4 *)(iVar2 + 0x1c) = 0;
    *(undefined4 *)(iVar2 + 0x20) = 0;
    *(undefined4 *)(iVar2 + 0x24) = 0;
    *(undefined4 *)(iVar2 + 0x28) = 0;
    *(undefined4 *)(iVar2 + 0x34) = 0;
    *(undefined4 *)(iVar2 + 0x38) = 0;
    *(undefined1 *)(iVar2 + 0x2c) = 0;
    *(undefined1 *)(iVar2 + 0x2d) = 0;
    fn_0067b328(puVar1);
  }
  *(undefined4 **)(param_1 + 0x98) = puVar1;
  return;
}



void fn_0067ac20(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined1 local_30;
  undefined1 local_2f;
  undefined4 local_28;
  undefined4 uStack_24;
  
  fn_0066e458(DAT_00898840,2,0);
  local_30 = 0;
  local_2f = 0;
  local_40 = param_2;
  uStack_3c = param_3;
  local_38 = param_7;
  uStack_34 = param_8;
  local_28 = param_5;
  uStack_24 = param_6;
  fn_0067b350(param_1[0x26],&local_40);
  (**(code **)(*param_1 + 0x18))(param_1,2);
  return;
}



void fn_0067aba0(undefined4 *param_1)

{
  *param_1 = &DAT_00859ab8;
  *param_1 = &DAT_00859be4;
  fn_0066ec54(param_1);
  *param_1 = &DAT_00859b90;
  fn_002feef8(param_1);
  return;
}



undefined4 fn_0067ab78(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_r4;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  piVar1 = (int *)fn_0066eb80(DAT_00898840,3);
  iVar3 = *(int *)(param_1 + 0x68);
  iVar4 = *(int *)(param_1 + 0x6c);
  iVar5 = *(int *)(param_1 + 0x70);
  iVar6 = *(int *)(param_1 + 0x74);
  iVar7 = *(int *)(param_1 + 0x78);
  iVar8 = *(int *)(param_1 + 0x7c);
  iVar9 = *(int *)(param_1 + 0x80);
  piVar1[0x116] = *(int *)(param_1 + 100);
  piVar1[0x117] = iVar3;
  piVar1[0x118] = iVar4;
  piVar1[0x119] = iVar5;
  piVar1[0x11a] = iVar6;
  piVar1[0x11b] = iVar7;
  piVar1[0x11c] = iVar8;
  piVar1[0x11d] = iVar9;
  piVar1[0x1d] = 0;
  piVar1[0x1e] = 0;
  *(undefined1 *)(piVar1 + 0x1f) = 0;
  if ((*(byte *)(piVar1 + 0x13) & 0x10) != 0) {
    (**(code **)(*piVar1 + 0x30))(piVar1);
    return 1;
  }
  fn_00673ce8(piVar1,0xe,iVar3,iVar4,unaff_r4);
  piVar1[0x1d] = 0;
  piVar1[0x1e] = 0;
  *(undefined1 *)(piVar1 + 0x1f) = 0;
  if ((*(byte *)(piVar1 + 0x13) & 1) == 0) {
    fn_00673ce8(piVar1,2);
    piVar1[0x1d] = 0;
    piVar1[0x1e] = 0;
    *(undefined1 *)(piVar1 + 0x1f) = 0;
    uVar2 = 0;
    if ((*(byte *)(piVar1 + 0x13) & 1) == 0) {
      (**(code **)(*piVar1 + 0x30))(piVar1,1);
      uVar2 = 1;
    }
  }
  else {
    (**(code **)(*piVar1 + 0x30))(piVar1,2);
    uVar2 = 1;
  }
  return uVar2;
}



void fn_0067ab3c(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 10;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 2;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x80) = 0;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_2[4];
  uVar5 = param_2[5];
  uVar6 = param_2[6];
  uVar7 = param_2[7];
  *(undefined4 *)(param_1 + 100) = *param_2;
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  *(undefined4 *)(param_1 + 0x6c) = uVar2;
  *(undefined4 *)(param_1 + 0x70) = uVar3;
  *(undefined4 *)(param_1 + 0x74) = uVar4;
  *(undefined4 *)(param_1 + 0x78) = uVar5;
  *(undefined4 *)(param_1 + 0x7c) = uVar6;
  *(undefined4 *)(param_1 + 0x80) = uVar7;
  return;
}



void fn_0067ab10(int param_1)

{
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 10;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 2;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x80) = 0;
  return;
}



void fn_0067aab4(undefined4 *param_1)

{
  *param_1 = &DAT_00859ab8;
  *param_1 = &DAT_00859be4;
  fn_0066ec54(param_1);
  *param_1 = &DAT_00859b90;
  fn_002feef8(param_1);
  return;
}



undefined4 fn_0067aa8c(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)fn_0066eb80(DAT_00898840,3);
  piVar1[0x150] = *(int *)(param_1 + 100);
  piVar1[0x1d] = 0;
  piVar1[0x1e] = 0;
  *(undefined1 *)(piVar1 + 0x1f) = 0;
  if ((*(byte *)(piVar1 + 0x13) & 0x10) != 0) {
    (**(code **)(*piVar1 + 0x30))(piVar1);
    return 1;
  }
  fn_00673ce8(piVar1,0x19);
  piVar1[0x1d] = 0;
  piVar1[0x1e] = 0;
  *(undefined1 *)(piVar1 + 0x1f) = 0;
  if ((*(byte *)(piVar1 + 0x13) & 1) == 0) {
    fn_00673ce8(piVar1,2);
    piVar1[0x1d] = 0;
    piVar1[0x1e] = 0;
    *(undefined1 *)(piVar1 + 0x1f) = 0;
    uVar2 = 0;
    if ((*(byte *)(piVar1 + 0x13) & 1) == 0) {
      (**(code **)(*piVar1 + 0x30))(piVar1,1);
      uVar2 = 1;
    }
  }
  else {
    (**(code **)(*piVar1 + 0x30))(piVar1,2);
    uVar2 = 1;
  }
  return uVar2;
}



void fn_0067aa80(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 100) = *param_2;
  return;
}



void fn_0067a930(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *local_28;
  undefined1 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  puVar1 = (undefined4 *)fn_00145b00(0x7c,&DAT_00812c8c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = &DAT_00859b90;
    fn_00129688(puVar1);
    fn_002fec40(puVar1 + 1,s_NexCommandGatheringFindOfficial_008c716e);
    *puVar1 = &DAT_00859be4;
    iVar2 = fn_00119b40(puVar1 + 0x13);
    puVar1 = (undefined4 *)(iVar2 + -0x4c);
    fn_00119b60();
    *puVar1 = &DAT_00859ab8;
    *puVar1 = &DAT_0085a69c;
    *(undefined1 *)(iVar2 + 0x20) = 0;
    *(undefined4 *)(iVar2 + 0x28) = 0x14;
    *(undefined **)(iVar2 + 0x1c) = &DAT_00852a4c;
    *(undefined4 *)(iVar2 + 0x24) = 0;
    *(undefined1 *)(iVar2 + 0x18) = 1;
    local_24 = 0;
    local_28 = &DAT_00852a4c;
    local_1c = 0x14;
    local_20 = 0;
    fn_00124914(iVar2 + 0x1c,&local_28);
    *(undefined4 *)(iVar2 + 0x2c) = 0;
    fn_0067b22c(puVar1);
  }
  *(undefined4 **)(param_1 + 0xb0) = puVar1;
  return;
}



void fn_0067a878(int *param_1,undefined1 param_2,undefined4 param_3)

{
  undefined *local_40;
  undefined1 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30 [4];
  undefined *local_2c;
  undefined1 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int *local_1c;
  
  fn_0066e458(DAT_00898840,2,0);
  local_20 = 0x14;
  local_28 = 0;
  local_2c = &DAT_00852a4c;
  local_24 = 0;
  local_30[0] = 1;
  local_3c = 0;
  local_40 = &DAT_00852a4c;
  local_34 = 0x14;
  local_38 = 0;
  fn_00124914(&local_2c,&local_40);
  local_1c = (int *)0x0;
  local_30[0] = param_2;
  fn_00124914(&local_2c,param_3);
  local_1c = param_1 + 0x26;
  fn_0067b278(param_1[0x2c],local_30);
  (**(code **)(*param_1 + 0x18))(param_1,2);
  return;
}



void fn_0067a718(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_00145b00(0x84,&DAT_00812c8c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = &DAT_00859b90;
    fn_00129688(puVar1);
    fn_002fec40(puVar1 + 1,s_NexCommandRankingDownloadStats_008c7130);
    *puVar1 = &DAT_00859be4;
    iVar2 = fn_00119b40(puVar1 + 0x13);
    puVar1 = (undefined4 *)(iVar2 + -0x4c);
    fn_00119b60();
    *puVar1 = &DAT_00859ab8;
    *puVar1 = &DAT_0085a630;
    *(undefined4 *)(iVar2 + 0x18) = 0;
    *(undefined4 *)(iVar2 + 0x1c) = 0;
    *(undefined4 *)(iVar2 + 0x20) = 10;
    *(undefined4 *)(iVar2 + 0x24) = 0;
    *(undefined4 *)(iVar2 + 0x28) = 2;
    *(undefined4 *)(iVar2 + 0x2c) = 0;
    *(undefined4 *)(iVar2 + 0x30) = 0xffffffff;
    *(undefined1 *)(iVar2 + 0x34) = 0;
    fn_0067af94(puVar1);
  }
  *(undefined4 **)(param_1 + 0x98) = puVar1;
  return;
}


