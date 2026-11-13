#include "00116e60_00117590.h"

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

static void svc_0xa(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0xa }
#endif
}


void fn_00117590(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 0xc) + 0xdc);
  uVar2 = *(int *)(iVar1 + 0x48) + 1;
  *(uint *)(iVar1 + 0x48) = uVar2;
  if (1 < uVar2) {
    *(undefined4 *)(iVar1 + 0x48) = 0;
  }
  *(undefined1 *)(iVar1 + *(int *)(iVar1 + 0x48) * 0x20 + 0x24) = 0;
  *(undefined4 *)(iVar1 + *(int *)(iVar1 + 0x48) * 0x20 + 0x18) = 0;
  *(undefined4 *)(iVar1 + *(int *)(iVar1 + 0x48) * 0x20 + 0x1c) = 0;
  *(undefined4 *)(iVar1 + *(int *)(iVar1 + 0x48) * 0x20 + 0x20) = 0xffffffff;
  return;
}



int * fn_001173f8(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  *(undefined1 *)(param_1 + 0x402) = 0;
  svc_0x24();
  if (*param_1 < 0) {
    fn_0015e294();
  }
  *(undefined1 *)(param_1 + 1) = 1;
  fn_0015e304(param_1);
  if (*param_1 != 0) {
    svc_0x23();
    *param_1 = 0;
  }
  if (param_1[0x406] != 0) {
    iVar2 = **(int **)(param_1[0x406] + 0x10);
    while (iVar2 != *(int *)(param_1[0x406] + 0x10)) {
      if (*(int **)(iVar2 + 8) != (int *)0x0) {
        (**(code **)(**(int **)(iVar2 + 8) + 4))();
      }
      iVar2 = param_1[0x406];
      piVar1 = (int *)**(int **)(iVar2 + 0x10);
      if (piVar1 != *(int **)(iVar2 + 0x10)) {
        *(int *)piVar1[1] = *piVar1;
        *(int *)(*piVar1 + 4) = piVar1[1];
        *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + -1;
        *piVar1 = *(undefined4 *)(iVar2 + 4);
        *(int **)(iVar2 + 4) = piVar1;
      }
      iVar2 = **(int **)(param_1[0x406] + 0x10);
    }
    fn_00147090(param_1 + 0x406);
  }
  if ((int *)param_1[0x407] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x407] + 4))();
  }
  fn_0015e304(param_1);
  if (*param_1 != 0) {
    svc_0x23();
    *param_1 = 0;
  }
  return param_1;
}



void fn_00117274(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint extraout_r1;
  int iVar4;
  int *piVar5;
  
  uVar2 = (uint)*(byte *)(param_1 + 0x1008);
  if (uVar2 != 0) {
    iVar4 = param_1 + 0x100c;
    do {
      fn_00170704(iVar4,uVar2);
      if (*(int *)(param_1 + 0x1018) == 0) {
        fn_001707b4(iVar4);
LAB_00117358:
        fn_0012d6a4(10000000,0);
        uVar2 = extraout_r1;
      }
      else {
        piVar5 = *(int **)(**(int **)(*(int *)(param_1 + 0x1018) + 0x10) + 8);
        *(int **)(param_1 + 0x1020) = piVar5;
        iVar3 = *(int *)(param_1 + 0x1018);
        piVar1 = (int *)**(int **)(iVar3 + 0x10);
        if (piVar1 != *(int **)(iVar3 + 0x10)) {
          *(int *)piVar1[1] = *piVar1;
          *(int *)(*piVar1 + 4) = piVar1[1];
          *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + -1;
          *piVar1 = *(undefined4 *)(iVar3 + 4);
          *(int **)(iVar3 + 4) = piVar1;
        }
        if (*(int *)(*(int *)(param_1 + 0x1018) + 0x14) == 0) {
          fn_00147090(param_1 + 0x1018);
        }
        fn_001707b4(iVar4);
        if (piVar5 == (int *)0x0) goto LAB_00117358;
        (**(code **)(*piVar5 + 8))();
        uVar2 = 0;
        *(undefined4 *)(param_1 + 0x1020) = 0;
        svc_0xa();
      }
    } while (*(char *)(param_1 + 0x1008) != '\0');
  }
  return;
}



undefined4 * fn_001171ac(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  *param_1 = &DAT_00858900;
  param_1[1] = 0;
  puVar1 = (undefined4 *)fn_00145b00(0x12980,&DAT_00812c8c);
  if (puVar1 == (undefined4 *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0;
    iVar2 = fn_0012361c(puVar1 + 2);
    *(undefined1 *)(iVar2 + 0x128e8) = 0;
    *(undefined1 *)(iVar2 + 0x128e9) = 2;
    *(undefined1 *)(iVar2 + 0x128ea) = 0xff;
    *(undefined1 *)(iVar2 + 0x128eb) = 0xff;
    *(undefined4 *)(iVar2 + 0x128ec) = 0;
    *(undefined1 *)(iVar2 + 0x128f0) = 0;
    *(undefined1 *)(iVar2 + 0x128f1) = 2;
    *(undefined1 *)(iVar2 + 0x128f2) = 0xff;
    *(undefined1 *)(iVar2 + 0x128f3) = 0xff;
    *(undefined4 *)(iVar2 + 0x128f4) = 0;
    piVar3 = (int *)(iVar2 + -8);
  }
  piVar4 = (int *)param_1[1];
  if (piVar4 != piVar3) {
    if (piVar4 != (int *)0x0) {
      if (*piVar4 != 0) {
        fn_00142b64(*piVar4,piVar4[1]);
      }
      fn_002feef8(piVar4);
    }
    param_1[1] = piVar3;
  }
  return param_1;
}



void fn_0011716c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  
  **(undefined4 **)(param_1 + 4) = param_2;
  uVar1 = fn_00127e6c(param_2,param_3,param_4,param_5,param_6);
  *(undefined4 *)(*(int *)(param_1 + 4) + 4) = uVar1;
  return;
}



void fn_00117114(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  uVar1 = fn_00145ac0(*(undefined4 *)(iVar2 + 4));
  fn_0013b36c(iVar2 + 8,uVar1,0,0xffffffff);
  fn_0014524c(iVar2 + 8,iVar2 + 0x128f0,(char *)&DAT_00127d14);
  fn_0014524c(iVar2 + 8,iVar2 + 0x128f8,(char *)&DAT_00127d20);
  return;
}



undefined4 * fn_00117074(undefined4 *param_1)

{
  *param_1 = &DAT_00858808;
  *(undefined1 *)(param_1 + 0x105) = 0;
  param_1[0x106] = 0xffffffff;
  param_1[1] = 0;
  param_1[0x107] = 0xffffffff;
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
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  param_1[0x10a] = 0;
  param_1[0x10b] = 0;
  param_1[0x10c] = 0;
  param_1[0x10d] = 0;
  fn_00127adc(param_1);
  return param_1;
}



undefined4 * fn_00117008(undefined4 *param_1)

{
  *param_1 = &DAT_0085861c;
  fn_001425d8(param_1 + 4,0,0,8,0,0,0,0,1);
  return param_1;
}



undefined4 fn_00116fdc(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return uVar1;
}



int fn_00116f44(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = 2;
  }
  return ((iVar1 * 4 + 0x4e) * param_1 + 0xfU & 0xfffffffc) << 2;
}



int fn_00116ea0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = param_1 + 1;
  *param_1 = &DAT_008584e4;
  fn_00170704(puVar4);
  if (param_1[4] == 0) {
    fn_001707b4(puVar4);
  }
  else {
    fn_00170704(param_1 + 1);
    fn_00141838(param_1 + 4);
    fn_001707b4(param_1 + 1);
    uVar1 = fn_00141104();
    uVar2 = fn_001271e8(uVar1,1);
    fn_00127334(uVar1,uVar2);
    fn_00127640(param_1 + 4);
    fn_001707b4(puVar4);
  }
  param_1[3] = 0xffffffff;
  iVar3 = fn_001277b8(param_1 + 4);
  return iVar3 + -0x10;
}



int fn_00116e60(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &DAT_008584e4;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xffffffff;
  iVar1 = fn_001277a0(param_1 + 4);
  fn_0013c500(iVar1 + -0xc);
  return iVar1 + -0x10;
}


