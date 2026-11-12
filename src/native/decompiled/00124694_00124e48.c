#include "00124694_00124e48.h"

static void svc_0x32(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x32 }
#endif
}


int fn_00124e48(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &DAT_00857210;
  iVar1 = fn_0013d5c4(param_1 + 1);
  iVar1 = fn_0013d5c4(iVar1 + 0x28);
  return iVar1 + -0x2c;
}



undefined4 * fn_00124dec(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0013d584();
  *puVar1 = &DAT_00856940;
  *(undefined1 *)(puVar1 + 0xb) = 0;
  *(undefined1 *)((int)puVar1 + 0x2d) = 0;
  puVar1[0xc] = 0;
  puVar1[0x4d] = 0;
  *(undefined1 *)(puVar1 + 0x4e) = 0;
  puVar1[0x81] = 0;
  fn_00301f50(puVar1 + 0xd,0xff);
  fn_00158f6c((int)puVar1 + 0x139,200);
  return puVar1;
}



undefined4 * fn_00124cd8(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[3] = 0x14;
  param_1[2] = 0;
  *param_1 = &DAT_0085626c;
  *(undefined2 *)(param_1 + 4) = 0xffff;
  *(undefined2 *)((int)param_1 + 0x12) = 0xffff;
  *(undefined2 *)(param_1 + 5) = 0xffff;
  *(undefined2 *)((int)param_1 + 0x16) = 0xffff;
  *(undefined1 *)(param_1 + 6) = 1;
  *(undefined1 *)((int)param_1 + 0x19) = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)((int)param_1 + 0x9d2) = 1;
  *(undefined1 *)((int)param_1 + 0x9d3) = 1;
  *(undefined1 *)(param_1 + 0x275) = 0;
  param_1[0x276] = 0;
  param_1[0x277] = 0;
  param_1[0x278] = 0;
  param_1[0x279] = 0;
  param_1[0x27a] = 0;
  *(undefined1 *)(param_1 + 0x27b) = 0;
  param_1[0x284] = 0;
  param_1[0x285] = 0;
  fn_00158f6c((int)param_1 + 0x9ee,0x20);
  iVar1 = 0;
  do {
    fn_00301f50(param_1 + iVar1 * 100 + 9,400);
    param_1[iVar1 + 0x261] = 0;
    param_1[iVar1 + 0x267] = 0;
    iVar2 = iVar1 + 1;
    param_1[iVar1 + 0x26d] = 0;
    *(undefined1 *)((int)param_1 + iVar1 + 0x9cc) = 0;
    iVar1 = iVar2;
  } while (iVar2 < 6);
  param_1[3] = 100;
  return param_1;
}



undefined4 * fn_00124c10(undefined4 *param_1)

{
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined2 *)((int)param_1 + 6) = 0;
  param_1[2] = 0;
  *param_1 = &DAT_008561e8;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[0x10a] = 0;
  param_1[0x10b] = 0x80;
  *(undefined1 *)(param_1 + 0x10c) = 0;
  *(undefined1 *)((int)param_1 + 0x431) = 0;
  param_1[0x10d] = 0;
  *(undefined1 *)(param_1 + 0x10e) = 0;
  param_1[0x10f] = 0;
  *(undefined1 *)(param_1 + 0x110) = 0;
  param_1[0x111] = 0;
  *(undefined1 *)(param_1 + 0x112) = 0;
  *(undefined1 *)((int)param_1 + 0x449) = 0;
  *(undefined1 *)((int)param_1 + 0x44a) = 0;
  param_1[0x113] = 0;
  *(undefined1 *)(param_1 + 0x114) = 0;
  *(undefined1 *)((int)param_1 + 0x472) = 0;
  *(undefined2 *)(param_1 + 0x11d) = 0;
  param_1[0x11e] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  fn_00158f6c((int)param_1 + 0xe,0x202);
  fn_00301f50(param_1 + 0x11f,0x42);
  fn_00158f6c((int)param_1 + 0x452,0x20);
  return param_1;
}



void fn_00124b28(int param_1,int param_2)

{
  int *piVar1;
  code *pcVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar3;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  piVar1 = (int *)(param_1 + 0x4c);
  uVar3 = 0;
  (**(code **)(*piVar1 + 8))();
  if (*(char *)(param_1 + 0x30) == param_2) {
                    /* WARNING: Could not recover jumptable at 0x00124b74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 0xc))(piVar1);
    return;
  }
  *(char *)(param_1 + 0x30) = (char)param_2;
  UNRECOVERED_JUMPTABLE = (code *)0x0;
  if (param_2 != 0) {
    fn_0013d0fc(&local_20);
    pcVar2 = *(code **)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x38) = local_20;
    *(undefined4 *)(param_1 + 0x3c) = uStack_1c;
    if (pcVar2 != (code *)0x0) {
      uVar3 = *(undefined4 *)(param_1 + 0x44);
      *(undefined4 *)(param_1 + 0x40) = 0;
      UNRECOVERED_JUMPTABLE = pcVar2;
    }
  }
  (**(code **)(*piVar1 + 0xc))(piVar1);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00124bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar3);
  return;
}



undefined4 fn_001249d0(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  undefined4 in_r3;
  undefined4 local_10;
  
  iVar7 = DAT_008b63d8;
  uVar2 = 0;
  local_10 = in_r3;
  if (DAT_008b637e != '\0') {
    piVar1 = (int *)(DAT_008b63d8 + 0x10);
    (**(code **)(*(int *)(DAT_008b63d8 + 0x10) + 8))();
    uVar2 = fn_0013d1a8();
    iVar8 = *(int *)(iVar7 + 0x48);
    iVar4 = iVar8;
    iVar3 = *(int *)(iVar8 + 4);
    while (iVar3 != 0) {
      if (*(uint *)(iVar3 + 0x10) < uVar2) {
        iVar3 = *(int *)(iVar3 + 0xc);
      }
      else {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar3 + 8);
      }
    }
    if ((iVar4 == iVar8) || (uVar2 < *(uint *)(iVar4 + 0x10))) {
      iVar4 = iVar8;
    }
    if (iVar4 == *(int *)(iVar7 + 0x48)) {
      local_10 = fn_0013d1a8();
      puVar5 = (undefined4 *)fn_00147a40(iVar7 + 0x38,&local_10);
      *puVar5 = *(undefined4 *)(iVar7 + 0xc);
      local_10 = fn_0013d1a8();
      puVar6 = (uint *)fn_00147a40(iVar7 + 0x38,&local_10);
      (**(code **)(*piVar1 + 0xc))(piVar1);
    }
    else {
      puVar6 = (uint *)(iVar4 + 0x14);
      (**(code **)(*piVar1 + 0xc))(piVar1);
    }
    uVar2 = *puVar6;
  }
  if (uVar2 == 0) {
    puVar5 = &DAT_008e76a0;
  }
  else {
    if ((uint)(DAT_008e76e4[1] - *DAT_008e76e4 >> 2) <= uVar2) {
      fn_0015ebe4(L"D:\\home\\jenkins\\workspace\\Manual-Pack\\5129d543\\.\\OnlineCore/src/Core/InstanceTable.h"
                   ,0x48,0xe0000003,0);
      iVar7 = -1;
      goto LAB_00124b00;
    }
    puVar5 = *(undefined4 **)(*DAT_008e76e4 + uVar2 * 4);
  }
  iVar7 = puVar5[4];
  if (iVar7 == 0) {
    return 0;
  }
LAB_00124b00:
  return *(undefined4 *)(iVar7 + 0xc);
}



undefined4 * fn_00124930(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)fn_0013d490();
  *puVar1 = &PTR_FUN_00854c0c;
  *(undefined1 *)(puVar1 + 0xc) = 0;
  iVar2 = fn_0013d40c(puVar1 + 0xe);
  *(undefined4 *)(iVar2 + 8) = 0;
  *(undefined4 *)(iVar2 + 0xc) = 0;
  *(undefined4 *)(iVar2 + 0x10) = 0;
  iVar3 = fn_0015ece0(0x80);
  *(int *)(iVar2 + 8) = iVar3;
  *(int *)(iVar2 + 0xc) = iVar3;
  *(int *)(iVar2 + 0x10) = iVar3 + 0x80;
  *(int *)(iVar2 + 0x14) = 0;
  *(undefined4 *)(iVar2 + 0x18) = 0;
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  iVar3 = fn_0015ece0(0x20);
  *(int *)(iVar2 + 0x14) = iVar3;
  *(int *)(iVar2 + 0x18) = iVar3;
  *(int *)(iVar2 + 0x1c) = iVar3 + 0x20;
  iVar2 = fn_00124be8(iVar2 + 0x20);
  iVar2 = fn_00124be8(iVar2 + 8);
  puVar1 = (undefined4 *)(iVar2 + -0x60);
  *puVar1 = &PTR_FUN_00853b40;
  fn_0013d1d0(puVar1);
  return puVar1;
}



void fn_00124914(int param_1,int param_2)

{
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  return;
}



undefined4 fn_001247b0(int *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  int local_20 [4];
  
  local_20[2] = 0xffffffff;
  local_20[3] = 0xffffffff;
  local_20[1] = 0xffffffff;
  iVar1 = fn_0013cd64();
  if (iVar1 == 0) {
    fn_0013cb9c(param_1 + 3);
    fn_0015097c(*(undefined4 *)(*param_1 + 4),param_2,1,local_20,local_20 + 2,local_20 + 1);
    if (0 < local_20[0]) {
      fn_0013cbe8(param_1 + 3,param_2 + 3,(int)param_2 + 0xe,(int)(short)param_2[3],
                   (int)*(short *)((int)param_2 + 0xe));
      if ((char)param_1[0xc] != '\0') {
        param_1[2] = *param_2;
        *(undefined1 *)(param_1 + 0xc) = 0;
      }
      uVar2 = *param_2 & 0xffffdfff;
      *param_2 = uVar2;
      param_2[1] = (uVar2 ^ param_1[2]) & ~param_1[2];
      param_2[2] = param_1[2] & ~uVar2;
      iVar1 = fn_00125198();
      if ((iVar1 != 0) && (iVar1 = fn_00125d3c(), iVar1 == 0)) {
        *param_2 = 0;
        param_2[2] = 0;
        param_2[1] = 0;
        *(undefined2 *)(param_2 + 3) = 0;
        *(undefined2 *)((int)param_2 + 0xe) = 0;
      }
      param_1[2] = *param_2;
      if (DAT_008bfbff == '\0') {
        fn_0013f068(param_2);
      }
      return 1;
    }
  }
  return 0;
}



int fn_001246c4(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (0x18 < param_2 - 8) {
    return -0x1f1fb012;
  }
  if (DAT_008bfbfe == '\0') {
    return -0x1f5fb008;
  }
  fn_00170704(&DAT_008ebdf4);
  uVar1 = fn_0013bfdc();
  switch(uVar1) {
  default:
    iVar2 = fn_0013cd64();
    if (iVar2 == 0) goto LAB_00124764;
    break;
  case 5:
    break;
  }
  if (DAT_008bfbfe != '\0') {
    fn_00170704(&DAT_008ebdf4);
    fn_0013c07c();
    fn_001707b4(&DAT_008ebdf4);
  }
LAB_00124764:
  fn_0013bfec(param_2 & 0xff,0);
  iVar2 = fn_0013c170(param_1);
  fn_001707b4(&DAT_008ebdf4);
  if (iVar2 < 0) {
    iVar2 = -0x1f7fb006;
  }
  return iVar2;
}



int fn_00124694(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(char **)(iVar2 + 0x80) = "AndSupportAnim_";
  svc_0x32();
  iVar1 = DAT_008c0784;
  if (-1 < DAT_008c0784) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}


