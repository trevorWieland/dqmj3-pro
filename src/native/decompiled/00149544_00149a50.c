#include "00149544_00149a50.h"



void fn_00149a50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00145b00(0x28,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_0015ccb8(iVar1,param_2,param_3,param_4,param_5);
  }
  fn_0015a130(param_1,uVar2);
  return;
}



void fn_00149a3c(int param_1)

{
  fn_0016db28(*(undefined4 *)(param_1 + 0xfc),3);
  return;
}



void fn_001499f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00145b00(0x18,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_0015cc5c(iVar1,param_2,param_3,param_4);
  }
  fn_0015a130(param_1,uVar2);
  return;
}



void fn_001499c8(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  puVar1 = (undefined4 *)fn_00164a68();
  if (puVar1 != (undefined4 *)0x0) {
    iVar4 = *(int *)(param_1 + 0xa0);
    uVar2 = puVar1[1];
    uVar3 = puVar1[2];
    *(undefined4 *)(iVar4 + 0xc) = *puVar1;
    *(undefined4 *)(iVar4 + 0x10) = uVar2;
    *(undefined4 *)(iVar4 + 0x14) = uVar3;
  }
  return;
}



undefined4 fn_001498e8(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  if (param_2 == (int *)0x0) {
    return 0xffffffff;
  }
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  iVar1 = fn_00145b00(0x40,&DAT_00812c8c);
  if ((iVar1 == 0) || (iVar1 = fn_0016278c(iVar1,param_2,&local_24), iVar1 == 0)) {
    return 0xffffffff;
  }
  if ((param_2[1] - *param_2) / 0xc == 0) {
    fn_002ff628(9,&DAT_008c7630,&DAT_008c7630,0,0);
  }
  puVar3 = (undefined4 *)*param_2;
  iVar5 = *(int *)(param_1 + 0xa0);
  uVar2 = puVar3[1];
  uVar4 = puVar3[2];
  *(undefined4 *)(iVar5 + 0xc) = *puVar3;
  *(undefined4 *)(iVar5 + 0x10) = uVar2;
  *(undefined4 *)(iVar5 + 0x14) = uVar4;
  uVar2 = fn_0015a130(param_1,iVar1);
  return uVar2;
}



void fn_0014989c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00145b00(0x30,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_0015cbec(iVar1,param_2,param_3,param_4);
  }
  fn_0015a130(param_1,uVar2);
  return;
}



void fn_00149880(int param_1,uint param_2)

{
  if (param_2 < (uint)(*(int *)(param_1 + 0x98) - *(int *)(param_1 + 0x94) >> 2)) {
    *(uint *)(param_1 + 0xbc) = param_2;
  }
  return;
}



undefined4 fn_00149844(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00164a68(param_1,param_3);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x00149878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*param_1 + 0x4c))(param_1,param_2);
  return uVar2;
}



void fn_00149820(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)fn_00164a68();
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = puVar1[1];
    uVar3 = puVar1[2];
    puVar4 = *(undefined4 **)(param_1 + 0xa0);
    *puVar4 = *puVar1;
    puVar4[1] = uVar2;
    puVar4[2] = uVar3;
  }
  return;
}



undefined4 fn_0014971c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar1 = fn_00164a34();
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  fn_00163edc(param_1,*(undefined4 *)(*(int *)(param_1 + 0x94) + *(int *)(param_1 + 0xbc) * 4));
  iVar1 = local_2c - local_30 >> 0x1f;
  if ((local_2c - local_30) / 0xc + iVar1 != iVar1) {
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    iVar1 = fn_00145b00(0x44,&DAT_00812c8c);
    if ((iVar1 != 0) && (iVar1 = fn_0015cac0(iVar1,param_2,&local_30,&local_24), iVar1 != 0)) {
      fn_0015aabc(param_1,param_2);
      uVar2 = fn_0015a130(param_1,iVar1);
      fn_00168b28(&local_30);
      return uVar2;
    }
  }
  fn_00168b28(&local_30);
  return 0xffffffff;
}



undefined4 fn_00149640(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  if (param_2 == (int *)0x0) {
    return 0xffffffff;
  }
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  iVar1 = fn_00145b00(0x40,&DAT_00812c8c);
  if ((iVar1 == 0) || (iVar1 = fn_0015ce4c(iVar1,param_2,&local_24), iVar1 == 0)) {
    return 0xffffffff;
  }
  if ((param_2[1] - *param_2) / 0xc == 0) {
    fn_002ff628(9,&DAT_008c7630,&DAT_008c7630,0,0);
  }
  puVar2 = (undefined4 *)*param_2;
  puVar5 = *(undefined4 **)(param_1 + 0xa0);
  uVar3 = puVar2[1];
  uVar4 = puVar2[2];
  *puVar5 = *puVar2;
  puVar5[1] = uVar3;
  puVar5[2] = uVar4;
  uVar3 = fn_0015a130(param_1,iVar1);
  return uVar3;
}



void fn_00149628(int param_1)

{
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  return;
}



void fn_001495c4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00145b00(0x28,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_0015ca08(iVar1,param_2,param_3,param_4,param_5);
  }
  fn_0015a130(param_1,uVar2);
  return;
}



void fn_0014959c(int param_1)

{
  if (*(int *)(param_1 + 0xfc) != 0) {
    fn_0015c8b8();
    fn_002feef8();
    *(undefined4 *)(param_1 + 0xfc) = 0;
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x0015c254) */
/* WARNING: Removing unreachable block (ram,0x0016d4ec) */
/* WARNING: Removing unreachable block (ram,0x0016d4f8) */
/* WARNING: Removing unreachable block (ram,0x0016d508) */
/* WARNING: Removing unreachable block (ram,0x0016d50c) */
/* WARNING: Removing unreachable block (ram,0x0016d510) */
/* WARNING: Removing unreachable block (ram,0x0016d514) */
/* WARNING: Removing unreachable block (ram,0x0016d52c) */
/* WARNING: Removing unreachable block (ram,0x0016d550) */
/* WARNING: Removing unreachable block (ram,0x0016d554) */
/* WARNING: Removing unreachable block (ram,0x0016d580) */
/* WARNING: Removing unreachable block (ram,0x0016d58c) */
/* WARNING: Removing unreachable block (ram,0x0016d5c0) */
/* WARNING: Removing unreachable block (ram,0x0016d5c4) */
/* WARNING: Removing unreachable block (ram,0x0016d5c8) */
/* WARNING: Removing unreachable block (ram,0x0016d5cc) */
/* WARNING: Removing unreachable block (ram,0x0016d5ec) */
/* WARNING: Removing unreachable block (ram,0x0016d5f0) */
/* WARNING: Removing unreachable block (ram,0x0016d5f8) */
/* WARNING: Removing unreachable block (ram,0x0016d600) */
/* WARNING: Removing unreachable block (ram,0x0016d628) */
/* WARNING: Removing unreachable block (ram,0x0016d62c) */
/* WARNING: Removing unreachable block (ram,0x0016d630) */
/* WARNING: Removing unreachable block (ram,0x0016d634) */
/* WARNING: Removing unreachable block (ram,0x0016d654) */
/* WARNING: Removing unreachable block (ram,0x0016d65c) */

void fn_00149544(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_00145b00(0x128,&DAT_00812c8c);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = fn_0015c37c();
  }
  iVar1 = *(int *)(param_1 + 0xfc);
  if (iVar1 != iVar2) {
    if (iVar1 != 0) {
      fn_0015c8b8(iVar1);
      fn_002feef8();
    }
    *(int *)(param_1 + 0xfc) = iVar2;
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0xfc) + 8);
  *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe;
  return;
}


