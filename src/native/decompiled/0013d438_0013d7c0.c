#include "0013d438_0013d7c0.h"

static void svc_0x23(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x23 }
#endif
}


int fn_0013d7c0(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int local_20;
  int local_1c;
  
  fn_00193374();
  piVar2 = param_1 + 2;
  fn_00170704(piVar2);
  iVar1 = fn_00189e18();
  if (iVar1 == 0) {
    fn_001707b4(piVar2);
    fn_00193380();
    return -0x375f57ff;
  }
  if ((char)param_1[0x4c7] == '\0') {
    local_1c = 0;
    if (*param_1 == 0) {
      iVar1 = fn_00158ef8(&local_1c,1);
      if (-1 < iVar1) {
        iVar1 = 0;
        *param_1 = local_1c;
      }
    }
    else {
      iVar1 = -0x1f5fe7c5;
    }
    if (iVar1 < 0) {
      fn_0015e294();
    }
    iVar1 = fn_0014e5b8(*param_1,2);
    if (iVar1 < 0) {
      if (*param_1 != 0) {
        svc_0x23();
        *param_1 = 0;
      }
      fn_001707b4(piVar2);
      fn_00193380();
      return iVar1;
    }
    local_20 = 0;
    iVar1 = fn_0014e58c(&local_20);
    if ((iVar1 < 0) || (local_20 == 0)) {
      fn_001707b4(piVar2);
      fn_00193380();
      return iVar1;
    }
    param_1[1] = local_20;
    fn_0014e560(0x2000);
    fn_0014fbe4(param_1,param_2);
    if (param_2 == 0) {
      *(undefined1 *)(param_1 + 0x56c) = 1;
      param_1[6] = 0;
    }
    else {
      fn_0014f5b4(&DAT_008f0bc0);
      fn_0014fa6c(&DAT_008f34bc);
      fn_00189e28();
      fn_00171504();
      fn_0014f7bc();
    }
  }
  fn_001707b4(piVar2);
  fn_00193380();
  return 0;
}



void fn_0013d778(void)

{
  if ((DAT_008c034c & ~DAT_008c034d) != 0) {
    fn_0014ddb8(&DAT_008c0354,1);
    DAT_008c034e = 1;
    fn_0013d9b4(&DAT_008ef5bc,1);
    DAT_008c034d = 1;
  }
  return;
}



void fn_0013d71c(char *param_1)

{
  if (*param_1 != '\0') {
    param_1[0x3c] = -1;
    param_1[0x3d] = -1;
    param_1[0x3e] = -1;
    param_1[0x3f] = -1;
    *param_1 = '\0';
  }
  return;
}



undefined4 fn_0013d708(void)

{
  undefined4 uVar1;
  
  uVar1 = fn_00171504();
  return uVar1;
}



void fn_0013d6fc(undefined4 param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  
  if (param_2 < 2) {
    param_2 = 2;
  }
  else if (3 < param_2) {
    param_2 = 3;
  }
  uRam008f34ee = (short)param_2;
  fn_00193374();
  iVar1 = fn_00189e18();
  if (iVar1 == 0) {
    fn_00193380();
    return;
  }
  puVar2 = *(uint **)(&DAT_008f0660 + (uint)DAT_008f08de * 4);
  *(short *)(puVar2 + 4) = (short)param_2;
  *puVar2 = *puVar2 | 0x8000;
  fn_00193380();
  return;
}



void fn_0013d6ec(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 3) = param_2;
  fn_0014fb58(&DAT_008f34bc);
  return;
}



void fn_0013d60c(char *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  uint local_18;
  
  if (*param_1 == '\0') {
    *param_1 = '\x01';
    local_18 = param_4;
    fn_0014f85c(&DAT_008f34bc);
    param_1[2] = '\x01';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = -0x80;
    param_1[7] = '?';
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = -0x80;
    param_1[0xb] = '?';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = -0x80;
    param_1[0xf] = '?';
    param_1[0x10] = '\0';
    param_1[0x11] = '\0';
    param_1[0x12] = -0x80;
    param_1[0x13] = '?';
    param_1[0x14] = '\0';
    param_1[0x15] = '\0';
    param_1[0x16] = '\0';
    param_1[0x17] = '\0';
    param_1[0x18] = '\0';
    param_1[0x19] = '\0';
    param_1[0x1a] = '\0';
    param_1[0x1b] = '\0';
    param_1[0x1c] = '\0';
    param_1[0x1d] = '\0';
    param_1[0x1e] = '\0';
    param_1[0x1f] = '\0';
    param_1[0x20] = '\0';
    param_1[0x21] = '\0';
    param_1[0x22] = '\0';
    param_1[0x23] = '\0';
    param_1[0x24] = '\0';
    param_1[0x25] = '\0';
    param_1[0x2c] = '\0';
    param_1[0x2d] = '\0';
    param_1[0x2e] = -0x80;
    param_1[0x2f] = '?';
    param_1[0x28] = '\0';
    param_1[0x29] = '\0';
    param_1[0x2a] = -0x80;
    param_1[0x2b] = '?';
    fn_0014f884(&DAT_008f34bc);
    fn_001237bc();
    iVar1 = fn_0014e494(&local_18,1,0x70001);
    fn_0013c674();
    cVar3 = '\x01';
    if (-1 < iVar1) {
      uVar2 = local_18 & 0xff;
      cVar3 = uVar2 != 0;
      if ((1 < uVar2) && (uVar2 == 2)) {
        cVar3 = '\x02';
      }
    }
    param_1[3] = cVar3;
    fn_0014fb58(&DAT_008f34bc);
    param_1[0x30] = '\0';
    param_1[0x31] = '\0';
    param_1[0x32] = '\0';
    param_1[0x33] = '\0';
    param_1[0x34] = '\0';
    param_1[0x35] = '\0';
    param_1[0x36] = '\0';
    param_1[0x37] = '\0';
    param_1[0x38] = '\0';
    param_1[0x39] = '\0';
    param_1[0x3a] = '\0';
    param_1[0x3b] = '\0';
    param_1[0x3c] = '\0';
    param_1[0x3d] = '\0';
    param_1[0x3e] = '\0';
    param_1[0x3f] = '\0';
    param_1[0x40] = '\0';
    param_1[0x41] = '\0';
    param_1[0x42] = '\0';
    param_1[0x43] = '\0';
    fn_0013c500(param_1 + 0x44);
  }
  return;
}



void fn_0013d584(undefined4 *param_1)

{
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined2 *)((int)param_1 + 6) = 0;
  param_1[10] = 0;
  *param_1 = &DAT_00856990;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  return;
}



void fn_0013d574(undefined4 *param_1)

{
  *param_1 = &DAT_00856614;
  return;
}



undefined4 * fn_0013d4ec(void)

{
  int iVar1;
  
  if (((DAT_008bf4a4 & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008bf4a4), iVar1 != 0)) {
    DAT_008bf4b0 = 0xfffffffd;
    DAT_008bf4b4 = 0xffffffff;
  }
  return &DAT_008bf4b0;
}



void fn_0013d490(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &DAT_00853388;
  *(undefined1 *)(param_1 + 1) = 0;
  iVar1 = fn_0013d40c(param_1 + 10);
  *(undefined ***)(iVar1 + -0x28) = &PTR_FUN_00855d30;
  *(undefined4 *)(iVar1 + -0x1c) = 0;
  *(undefined4 *)(iVar1 + -0x18) = 0;
  *(undefined2 *)(iVar1 + -0x14) = 0;
  *(undefined2 *)(iVar1 + -0x12) = 0;
  *(undefined4 *)(iVar1 + -0x10) = 1;
  *(undefined4 *)(iVar1 + -0xc) = 0;
  *(undefined4 *)(iVar1 + -8) = 0x200;
  *(undefined4 *)(iVar1 + -4) = 0;
  *(undefined4 *)(iVar1 + -0x20) = 0;
  return;
}



int fn_0013d438(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != param_2) {
    bVar2 = iVar1 == 0;
    if (!bVar2) {
      iVar1 = iVar1 + -4;
      bVar2 = iVar1 == 0;
    }
    if (!bVar2) {
      if (*(code **)(iVar1 + -8) == (code *)0x0) {
        fn_0030233c();
      }
      else {
        (**(code **)(iVar1 + -8))();
      }
    }
    fn_0015e6f0(param_1 + 4,param_2);
  }
  return param_1;
}


