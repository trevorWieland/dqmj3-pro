#include "0010ac90_00112e7c.h"

static void svc_0x13(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x13 }
#endif
}

static void svc_0x2b(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x2b }
#endif
}


void fn_00112e7c(undefined4 *param_1,undefined4 param_2)

{
  param_1[1] = param_2;
  *param_1 = &DAT_0081d840;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 9) = 0;
  *(undefined1 *)((int)param_1 + 10) = 0;
  return;
}



void fn_00112df8(undefined4 *param_1,undefined4 param_2)

{
  param_1[1] = param_2;
  *param_1 = &DAT_0081d360;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



void fn_00112de4(undefined4 *param_1,undefined4 param_2)

{
  param_1[1] = param_2;
  *param_1 = &DAT_0081d350;
  return;
}



void fn_00111f48(undefined4 *param_1,undefined4 param_2)

{
  param_1[1] = param_2;
  *param_1 = &DAT_0081caa8;
  return;
}



void fn_00111db8(undefined4 *param_1)

{
  *param_1 = &DAT_0081c694;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  return;
}



void fn_0010fec4(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  svc_0x2b();
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



void fn_0010fe88(undefined4 *param_1,undefined4 param_2)

{
  svc_0x13();
  *param_1 = param_2;
  return;
}



void fn_0010f57c(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_20;
  int local_1c;
  undefined1 auStack_18 [4];
  
  if (DAT_00890f34 != 0) {
    fn_0012d73c();
    DAT_00890f34 = 0;
  }
  piVar1 = DAT_00890f38;
  if (DAT_00890f38 != (int *)0x0) {
    iVar2 = DAT_00890f38[4];
    if (iVar2 != 0) {
      local_20 = *(undefined4 *)(iVar2 + 8);
      local_1c = iVar2;
      fn_0011b908(auStack_18,DAT_00890f38,&local_20,&local_1c);
      iVar2 = piVar1[4];
      *(int *)(iVar2 + 0xc) = piVar1[1];
      piVar1[1] = iVar2;
      piVar3 = (int *)*piVar1;
      while (piVar3 != (int *)0x0) {
        *piVar1 = *piVar3;
        fn_001008c4(piVar3[2],piVar3[1],0);
        fn_001008c4(piVar3,1,0);
        piVar3 = (int *)*piVar1;
      }
    }
    fn_002feef8(piVar1);
  }
  DAT_00890f38 = (int *)0x0;
  return;
}



void fn_0010f2a0(void)

{
  if (DAT_008988a0 != (int *)0x0) {
    (**(code **)(*DAT_008988a0 + 4))();
    DAT_008988a0 = (int *)0x0;
    fn_0012d73c(DAT_0089889c);
    DAT_0089889c = 0;
  }
  return;
}



void fn_0010ebe0(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = &DAT_00850fc8;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  return;
}



void fn_0010d5fc(void)

{
  int iVar1;
  
  iVar1 = *DAT_008bf77c;
  *DAT_008bf77c = -iVar1 + 1;
  fn_0012b2f0(DAT_008bf77c[-iVar1 + 2]);
  return;
}



void fn_0010d5b8(int param_1)

{
  if (param_1 == 0) {
    fn_0012b2f0(DAT_008bf77c[*DAT_008bf77c + 1]);
    return;
  }
  if (param_1 == 1) {
    fn_0012b2f0(DAT_008bf77c[2 - *DAT_008bf77c]);
    return;
  }
  return;
}



void fn_0010c900(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00117720(param_1,param_3);
  *puVar1 = &DAT_00858c34;
  puVar1[8] = param_2;
  return;
}



void fn_0010c8e8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00117720();
  *puVar1 = &DAT_00858bd8;
  return;
}



void fn_0010c8b0(undefined4 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00117720(param_1,param_4);
  *puVar1 = &DAT_00858bc0;
  puVar1[8] = param_2;
  *(undefined1 *)(puVar1 + 9) = param_3;
  puVar1[10] = 1;
  puVar1[0xb] = 1;
  return;
}



void fn_0010c880(undefined4 param_1,undefined1 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00117720(param_1,param_3);
  *(undefined1 *)(puVar1 + 8) = param_2;
  *puVar1 = &DAT_00858b1c;
  return;
}



void fn_0010c3ec(undefined4 *param_1)

{
  *param_1 = &DAT_008585f4;
  if (*(char *)(param_1 + 0xb) != '\0') {
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 0xb) = 0;
  }
  return;
}



void fn_0010bb9c(void)

{
  char cVar1;
  int iVar2;
  
  cVar1 = DAT_0089a584;
  if (DAT_0089a584 != '\0') {
    DAT_0089a584 = '\0';
    fn_00125220(3);
    fn_00125818(0);
  }
  iVar2 = fn_00114858();
  if ((iVar2 != 0) || (iVar2 = fn_00114828(), iVar2 != 0)) {
    fn_00114d20(0);
    iVar2 = fn_001147b8();
    if ((iVar2 == 0) || (iVar2 = fn_001147b8(), iVar2 == 2)) {
      fn_00115e64(0);
      if (DAT_0089a5bc != (code *)0x0) {
        (*DAT_0089a5bc)(DAT_0089a5fc);
      }
    }
    fn_00115be0();
    fn_00115128(0,0,DAT_0089a54c);
  }
  fn_001152bc(0,0,0,0,0);
  if (cVar1 == '\0') {
    return;
  }
  DAT_0089a584 = 1;
  fn_00115a18();
  return;
}



void fn_0010b240(undefined4 *param_1)

{
  bool bVar1;
  
  *param_1 = 0;
  do {
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = 0;
  return;
}



void fn_0010ac90(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)((int)param_1 + 0x39) = 0xff;
  *(undefined1 *)((int)param_1 + 0x3a) = 0;
  *(undefined1 *)((int)param_1 + 0x3b) = 0;
  return;
}


