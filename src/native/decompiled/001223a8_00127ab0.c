#include "001223a8_00127ab0.h"

static void svc_0x23(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x23 }
#endif
}

static void svc_0x24(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x24 }
#endif
}


void fn_00127ab0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00127984();
  *puVar1 = &DAT_00858780;
  return;
}



void fn_001277a0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_1 + 2;
  param_1[3] = param_1 + 2;
  return;
}



void fn_001271d4(undefined4 *param_1)

{
  *param_1 = &DAT_0085820c;
  param_1[1] = 0;
  return;
}



void fn_0012659c(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00140688(param_1,0);
  *puVar1 = &DAT_00857f10;
  return;
}



void fn_00126190(undefined4 param_1,undefined1 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x001261ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_0089a91c + 8))(DAT_0089a91c,param_1,param_2);
  return;
}



void fn_0012573c(undefined1 param_1)

{
  DAT_0089a56b = param_1;
  return;
}



void fn_00125694(void)

{
  if (DAT_008bfb20 != 0) {
    svc_0x24();
    if (DAT_008bfb20 < 0) {
      fn_0015e294();
    }
  }
  fn_0010c208();
  return;
}



void fn_00125230(void)

{
  DAT_0089a56f = 1;
  return;
}



void fn_001251e8(void)

{
  DAT_0089a570 = 1;
  return;
}



void fn_001251a8(undefined4 param_1)

{
  DAT_0089a578 = param_1;
  return;
}



void fn_00124e88(void)

{
  int iVar1;
  
  if (((DAT_008c034c == '\0') && (iVar1 = fn_0013db70(0), -1 < iVar1)) &&
     (iVar1 = fn_0013d7c0(&DAT_008ef5bc,0), -1 < iVar1)) {
    DAT_008c0350 = DAT_1ff810c0;
    fn_0015f1d0(&DAT_008ef56c);
    fn_0013c4e0(&DAT_008f0bc0);
    fn_0013d60c(&DAT_008ef56c);
    fn_00189e28();
    fn_0014f60c();
    fn_0013c7b0(fn_0013d778,fn_0013daf8,&LAB_0013d73c);
    DAT_008c034d = 0;
    DAT_008c034e = 0;
    DAT_008c034f = 0;
    DAT_008c0351 = 1;
    DAT_008c034c = '\x01';
  }
  return;
}



void fn_00124dc4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0013d574();
  *puVar1 = &DAT_008564ac;
  return;
}



void fn_00124be8(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



void fn_00123b08(uint param_1,undefined4 param_2)

{
  uint uVar1;
  bool bVar2;
  int local_20 [2];
  
  uVar1 = param_1 >> 0x1b;
  if ((param_1 & 0x80000000) != 0) {
    uVar1 = uVar1 - 0x20;
  }
  if (uVar1 == 1 || uVar1 == 0xfffffff9) {
    return;
  }
  DAT_008e3261 = 0;
  DAT_008e3262 = 0xf251;
  DAT_008e3260 = 0;
  DAT_008e3264 = param_1;
  DAT_008e3268 = param_2;
  while( true ) {
    fn_00170704(&DAT_008e32e0);
    if ((DAT_0089a634 != 0) || (uVar1 = fn_0011c0d0(&DAT_0089a634,(char *)&DAT_0086e639), -1 < (int)uVar1)) {
      uVar1 = 0;
    }
    if (-1 < (int)uVar1) break;
    bVar2 = uVar1 == 0xd0401834;
    if (bVar2) {
      uVar1 = (uint)DAT_008e3260;
    }
    if (!bVar2 || uVar1 != 2) goto LAB_00123bf0;
    fn_0012d6a4(&DAT_004c4b40,0);
    fn_001707b4(&DAT_008e32e0);
  }
  fn_0012d68c(&DAT_008e326c,0xffff8001);
  local_20[0] = DAT_0089a634;
  fn_0013c8e8(local_20,&DAT_008e3260);
  if (DAT_0089a634 != 0) {
    svc_0x23();
    DAT_0089a634 = 0;
  }
LAB_00123bf0:
  fn_001707b4(&DAT_008e32e0);
  if (DAT_008e3260 != 2 && DAT_008e3260 != 5) {
    local_20[0] = 0;
    local_20[1] = 0;
    fn_0014ddb8(local_20,1);
    fn_0015def0(local_20);
  }
  return;
}



void fn_00123ad0(undefined4 param_1,byte param_2,undefined4 param_3)

{
  uint uVar1;
  bool bVar2;
  int aiStack_20 [4];
  
  DAT_008e3261 = 0;
  DAT_008e3262 = 0xf251;
  DAT_008e3260 = param_2;
  DAT_008e3264 = param_1;
  DAT_008e3268 = param_3;
  while( true ) {
    fn_00170704(&DAT_008e32e0);
    if ((DAT_0089a634 != 0) || (uVar1 = fn_0011c0d0(&DAT_0089a634,"err:f"), -1 < (int)uVar1)) {
      uVar1 = 0;
    }
    if (-1 < (int)uVar1) break;
    bVar2 = uVar1 == 0xd0401834;
    if (bVar2) {
      uVar1 = (uint)DAT_008e3260;
    }
    if (!bVar2 || uVar1 != 2) goto LAB_00123bf0;
    fn_0012d6a4(&DAT_004c4b40,0);
    fn_001707b4(&DAT_008e32e0);
  }
  fn_0012d68c(&DAT_008e326c,0xffff8001);
  aiStack_20[0] = DAT_0089a634;
  fn_0013c8e8(aiStack_20,&DAT_008e3260);
  if (DAT_0089a634 != 0) {
    svc_0x23();
    DAT_0089a634 = 0;
  }
LAB_00123bf0:
  fn_001707b4(&DAT_008e32e0);
  if (DAT_008e3260 != 2 && DAT_008e3260 != 5) {
    aiStack_20[0] = 0;
    aiStack_20[1] = 0;
    fn_0014ddb8(aiStack_20,1);
    fn_0015def0(aiStack_20);
  }
  return;
}



void fn_00123908(void)

{
  int iVar1;
  
  DAT_008bfbc8 = &DAT_0087a13c;
  DAT_008bfbcc = 0xc26c;
  DAT_008bfbb0 = 0xff;
  DAT_008bfbb2 = 0xff;
  iVar1 = fn_0013c6f8();
  if (-1 < iVar1) {
    DAT_008bfbaf = 1;
  }
  return;
}



void fn_00123600(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[3] = 0;
  param_1[1] = param_2;
  param_1[4] = 0;
  param_1[2] = param_2;
  return;
}



void fn_001223a8(undefined4 *param_1)

{
  *param_1 = &DAT_008201b8;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}


