#include "004e23bc_004e2dcc.h"

static void svc_0x28(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x28 }
#endif
}


void fn_004e2dcc(undefined4 *param_1)

{
  *param_1 = &DAT_00856798;
  if (param_1[0x11] != 0) {
    fn_00656b7c(param_1[0x11]);
  }
  fn_004ede4c(param_1);
  return;
}



undefined4 * fn_004e2d88(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)fn_004eddf4();
  puVar1[0x10] = 0;
  *puVar1 = &DAT_00856798;
  uVar2 = fn_004ed2e8();
  iVar3 = fn_00656e14(0x14,uVar2);
  uVar2 = 0;
  if (iVar3 != 0) {
    uVar2 = fn_004ed164();
  }
  puVar1[0x11] = uVar2;
  return puVar1;
}



int fn_004e2cd8(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(DAT_008bf504 + 0x38) + 0x20))
                    (*(int **)(DAT_008bf504 + 0x38),*(undefined4 *)(param_1 + 0x44));
  if (-1 < iVar1) {
    *(undefined4 *)(param_1 + 0x40) = param_2;
    fn_004ed13c(param_2);
    fn_004ed050(*(undefined4 *)(param_1 + 0x40));
    fn_004efcf4(*(undefined4 *)(DAT_008bf504 + 0x38),1);
    *(undefined1 *)(DAT_008bf504 + 0x81) = 0;
    *(code **)(param_1 + 0x24) = fn_004e2b84;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0x2c) = "LocalScanNetworkJob::WaitScanNetwork";
    iVar1 = 0;
  }
  return iVar1;
}



void fn_004e2c9c(int param_1)

{
  char *pcVar1;
  
  fn_004ed158(*(undefined4 *)(param_1 + 0x44));
  pcVar1 = *(char **)(param_1 + 0x40);
  if (pcVar1 != (char *)0x0) {
    if (*pcVar1 == '\x01') {
      fn_004ed098(pcVar1,0xd0a14867);
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  return;
}



uint fn_004e2b84(int param_1,uint param_2)

{
  char cVar1;
  char *pcVar2;
  uint unaff_r5;
  
  pcVar2 = *(char **)(param_1 + 0x44);
  if (*(char *)(*(int *)(param_1 + 0x40) + 0x10) != '\0') {
    if (*pcVar2 == '\x01') {
      fn_004ed158();
    }
    *(code **)(param_1 + 0x24) = fn_004e2b2c;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0x2c) = "LocalScanNetworkJob::WaitForCancel";
    return unaff_r5 & 0xff00;
  }
  cVar1 = *pcVar2;
  if (cVar1 == '\x01') {
    return (uint)pcVar2 & 0xff00 | 5;
  }
  if (cVar1 == '\x02') {
    *(undefined1 *)(DAT_008bf504 + 0x81) = 1;
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



uint fn_004e2b2c(int param_1)

{
  char cVar1;
  uint unaff_r5;
  
  cVar1 = **(char **)(param_1 + 0x44);
  if ((cVar1 == '\x02' || cVar1 == '\x03') || cVar1 == '\x04') {
    fn_004ed098(*(undefined4 *)(param_1 + 0x40),0xd0a14867);
    *(undefined4 *)(param_1 + 0x40) = 0;
    return unaff_r5 & 0xff00 | 1;
  }
  return 5;
}



void fn_004e2b10(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_004eddf4();
  *puVar1 = &DAT_00856774;
  return;
}



void fn_004e2740(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &DAT_008566cc;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined1 *)((int)param_1 + 0xe) = 0xff;
  *(undefined1 *)((int)param_1 + 0xf) = 0xff;
  iVar1 = fn_004edc74(param_1 + 0x12,0xffffffff);
  iVar1 = fn_004edc74(iVar1 + 0xc,0xffffffff);
  iVar1 = fn_004edc74(iVar1 + 0xc,0xffffffff);
  *(undefined4 *)(iVar1 + 0x11a0) = 0;
  iVar1 = fn_004edc74(iVar1 + 0x11a4,0xffffffff);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  iVar1 = fn_004edc74(iVar1 + 0x10,0xffffffff);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  iVar1 = fn_004edc74(iVar1 + 0x14,0xffffffff);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  *(undefined4 *)(iVar1 + 0x30) = 0;
  *(undefined4 *)(iVar1 + 0x34) = 0;
  iVar1 = fn_004edc74(iVar1 + 0x38,0xffffffff);
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined1 *)(iVar1 + 0x18) = 1;
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  iVar1 = fn_004edc74(iVar1 + 0x20,0xffffffff);
  *(undefined4 *)(iVar1 + 0x84c) = 0;
  *(undefined1 *)(iVar1 + 0x850) = 0;
  iVar1 = fn_004edc74(iVar1 + 0x854,0xffffffff);
  *(undefined4 *)(iVar1 + 0x42c) = 0;
  *(undefined1 *)(iVar1 + 0x430) = 0;
  iVar1 = fn_004edc74(iVar1 + 0x434,0xffffffff);
  *(undefined1 *)(iVar1 + 0xc) = 0;
  *(undefined1 *)(iVar1 + 0xd) = 0;
  return;
}



void fn_004e2594(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)(param_1 + 0x125c);
  if (iVar1 - 0x100000U < 0x3ff00000) {
    if (iVar1 != 0) {
      fn_00656b7c(iVar1);
    }
    *(undefined4 *)(param_1 + 0x125c) = 0;
  }
  puVar2 = *(undefined4 **)(param_1 + 0x1258);
  if (puVar2 + -0x40000 < (undefined4 *)0x3ff00000) {
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(puVar2);
      fn_00656b7c(puVar2);
    }
    *(undefined4 *)(param_1 + 0x1258) = 0;
  }
  puVar2 = *(undefined4 **)(param_1 + 0x1250);
  if (puVar2 + -0x40000 < (undefined4 *)0x3ff00000) {
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(puVar2);
      fn_00656b7c(puVar2);
    }
    *(undefined4 *)(param_1 + 0x1250) = 0;
  }
  puVar2 = *(undefined4 **)(param_1 + 0x124c);
  if (puVar2 + -0x40000 < (undefined4 *)0x3ff00000) {
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(puVar2);
      fn_00656b7c(puVar2);
    }
    *(undefined4 *)(param_1 + 0x124c) = 0;
  }
  puVar2 = *(undefined4 **)(param_1 + 0x1248);
  if (puVar2 + -0x40000 < (undefined4 *)0x3ff00000) {
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(puVar2);
      fn_00656b7c(puVar2);
    }
    *(undefined4 *)(param_1 + 0x1248) = 0;
  }
  puVar2 = *(undefined4 **)(param_1 + 0x1200);
  if (puVar2 + -0x40000 < (undefined4 *)0x3ff00000) {
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(puVar2);
      fn_00656b7c(puVar2);
    }
    *(undefined4 *)(param_1 + 0x1200) = 0;
  }
  puVar2 = *(undefined4 **)(param_1 + 0x1254);
  if (puVar2 + -0x40000 < (undefined4 *)0x3ff00000) {
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(puVar2);
      fn_00656b7c(puVar2);
    }
    *(undefined4 *)(param_1 + 0x1254) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x1220);
  if (iVar1 - 0x100000U < 0x3ff00000) {
    if (iVar1 != 0) {
      fn_00656b0c(iVar1);
      fn_00656b7c(iVar1);
    }
    *(undefined4 *)(param_1 + 0x1220) = 0;
  }
  return;
}



void fn_004e2540(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  *(undefined1 *)(param_1 + 0xe) = 0xff;
  *(undefined1 *)(param_1 + 0xf) = 0xff;
  *(ushort *)(param_1 + 0x40) = *(ushort *)(param_1 + 0x42);
  fn_00158f40(param_1 + 0x10,0x18,*(ushort *)(param_1 + 0x42) & 0xff);
  iVar1 = fn_006d58dc(DAT_008bf504);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = *(int *)(DAT_008bf504 + 0x18);
  uVar2 = 1;
  do {
    uVar3 = uVar2 & 0xff;
    if ((uVar3 != 0) && (uVar3 < 0xd)) {
      *(undefined2 *)(*(int *)(iVar1 + 8) + uVar3 * 2 + -2) =
           *(undefined2 *)(*(int *)(DAT_008bf504 + 0x14) + 0x42);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0xd);
  return;
}



int fn_004e23bc(int *param_1)

{
  longlong lVar1;
  int iVar2;
  uint extraout_r1;
  code *pcVar3;
  
  iVar2 = (**(code **)(*param_1 + 0x88))(param_1);
  if (-1 < iVar2) {
    fn_00158f40(param_1 + 4,0x18,*(ushort *)((int)param_1 + 0x42) & 0xff);
    fn_00158f6c(param_1[0x488],param_1[0x489]);
    param_1[0x48e] = param_1[0x48f];
    svc_0x28();
    lVar1 = (ulonglong)(uint)param_1[0x48f] * 0xf46f6f;
    param_1[0x48f] = (int)((ulonglong)lVar1 >> 0x20) + (int)((ulonglong)extraout_r1 * 0xf46f6f);
    pcVar3 = *(code **)(*(int *)param_1[0x495] + 0x18);
    iVar2 = (*pcVar3)((int *)param_1[0x495],pcVar3,(int)((ulonglong)extraout_r1 * 0xf46f6f >> 0x20),
                      (int)lVar1);
    if (-1 < iVar2) {
      fn_004efcf4(param_1[0x495],1);
      iVar2 = fn_004e2fb8(param_1[0x480]);
      if (-1 < iVar2) {
        fn_004efcf4(param_1[0x480],0);
        *(undefined1 *)(param_1 + 0x7c5) = 0;
        iVar2 = fn_004df2c8(param_1[0x492]);
        if (-1 < iVar2) {
          fn_004efcf4(param_1[0x492],0);
          iVar2 = fn_004e99e0(param_1[0x493],param_1 + 1);
          if (-1 < iVar2) {
            fn_004efcf4(param_1[0x493],1);
            iVar2 = (**(code **)(*(int *)param_1[0x494] + 0x18))();
            if (-1 < iVar2) {
              fn_004efcf4(param_1[0x494],1);
              iVar2 = (**(code **)(*(int *)param_1[0x496] + 0x18))();
              if (-1 < iVar2) {
                fn_004efcf4(param_1[0x496],0);
                param_1[0x6b3] = 0;
                *(undefined1 *)(param_1 + 0x6b4) = 0;
                param_1[0x7c0] = 0;
                *(undefined1 *)(param_1 + 0x7c1) = 0;
                param_1[0x491] = 0;
                iVar2 = 0;
                *(undefined1 *)((int)param_1 + 0x1f15) = 0;
              }
            }
          }
        }
      }
    }
  }
  return iVar2;
}


