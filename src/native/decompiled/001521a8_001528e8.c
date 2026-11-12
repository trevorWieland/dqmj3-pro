#include "001521a8_001528e8.h"

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


void fn_001528e8(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x8d0) == 0) {
    uVar3 = 0;
    do {
      uVar2 = 0;
      iVar1 = param_1 + uVar3 * 0x18;
      *(undefined1 *)(iVar1 + 0x8d4) = 0;
      *(undefined1 *)(iVar1 + 0x8dd) = 0;
      do {
        iVar4 = iVar1 + uVar2;
        if (uVar3 == 0 && uVar2 == 0) {
          *(undefined1 *)(iVar4 + 0x8d8) = 0;
          *(undefined1 *)(iVar4 + 0x8e1) = 0;
        }
        else {
          *(undefined1 *)(iVar4 + 0x8d8) = 0xf;
        }
        iVar5 = iVar1 + uVar2;
        if (uVar3 != 0 || uVar2 != 0) {
          *(undefined1 *)(iVar4 + 0x8e1) = 0xf;
        }
        uVar2 = uVar2 + 1;
        *(undefined1 *)(iVar5 + 0x8d5) = 0;
        *(undefined1 *)(iVar5 + 0x8de) = 0;
      } while (uVar2 < 3);
      uVar3 = uVar3 + 1;
      *(undefined1 *)(iVar1 + 0x8db) = 0;
      *(undefined1 *)(iVar1 + 0x8e4) = 0;
    } while (uVar3 < 6);
    return;
  }
  do {
    fn_0015d2dc(param_1 + 0x8d4);
    uVar3 = 1;
    do {
      fn_0015d280(param_1 + uVar3 * 0x18 + 0x8d4);
      uVar3 = uVar3 + 1;
      if (5 < uVar3) {
        return;
      }
    } while (uVar3 != 0);
  } while( true );
}



int fn_0015289c(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_1[1] - param_1[2];
  if (iVar1 < param_3) {
    param_3 = iVar1;
  }
  if (0 < param_3) {
    fn_00301a9c(*param_1 + param_1[2],param_2,param_3);
    param_1[2] = param_1[2] + param_3;
  }
  return param_3;
}



undefined4 fn_00152880(undefined4 param_1)

{
  return param_1;
}



undefined4 fn_00152780(int param_1,int param_2,int param_3)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  code *unaff_r6;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_30;
  undefined4 local_2c;
  
  local_30 = 0;
  local_2c = 0;
  iVar5 = *(int *)(param_1 + 4);
  iVar4 = 0;
  iVar6 = param_1 + 8;
  bVar1 = true;
  if (iVar6 != *(int *)(param_1 + 8)) {
    do {
      iVar6 = *(int *)(iVar6 + 4);
      iVar5 = iVar5 + -1;
      if ((iVar4 == 0) && (*(int *)(iVar6 + 8) != 0)) {
        iVar4 = *(int *)(iVar6 + 0x10);
        unaff_r6 = *(code **)(iVar4 + 0x10);
        param_3 = *(int *)(iVar4 + 0x14);
        iVar4 = *(int *)(iVar4 + 8) + *(int *)(iVar4 + 0xc);
      }
      piVar2 = *(int **)(iVar6 + 0xc);
      if (*(int **)(iVar6 + 0xc) != (int *)(iVar6 + 0xc)) {
        do {
          piVar3 = (int *)*piVar2;
          if (unaff_r6 != (code *)piVar2[4] || param_3 != piVar2[5]) {
            bVar1 = false;
            break;
          }
          piVar2 = piVar3;
        } while (piVar3 != (int *)(iVar6 + 0xc));
      }
      if (iVar5 == param_2) {
        local_30 = iVar6;
        break;
      }
    } while (iVar6 != *(int *)(param_1 + 8));
    if (iVar4 != 0 && bVar1) {
      if (unaff_r6 != (code *)0x0) {
        (*unaff_r6)(local_30,iVar4 - local_30);
      }
      local_2c = 1;
    }
  }
  return local_2c;
}



undefined4 * fn_00152724(void)

{
  int iVar1;
  
  if (((DAT_008c3574 & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008c3574), iVar1 != 0)) {
    DAT_008f250c = 0;
    DAT_008f2510 = 0;
    DAT_008f2514 = &DAT_008f2514;
    DAT_008f2518 = &DAT_008f2514;
    DAT_008f251c = 0;
    DAT_008f2520 = 0;
  }
  return &DAT_008f250c;
}



undefined4 * fn_00152680(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[0x6c] = 0;
  param_1[0x6b] = 0;
  fn_00301f50(param_1 + 6,0x194);
  *(undefined1 *)(param_1 + 0x6d) = 0;
  param_1[0x71] = 0;
  param_1[0x73] = 0xffffffff;
  param_1[0x72] = 0;
  param_1[0x75] = param_1 + 0x75;
  param_1[0x74] = 0;
  param_1[0x76] = param_1 + 0x75;
  param_1[0x78] = param_1 + 0x78;
  param_1[0x77] = 0;
  param_1[0x79] = param_1 + 0x78;
  param_1[0x7c] = 0;
  *(undefined1 *)(param_1 + 0x7d) = 0;
  *(undefined1 *)((int)param_1 + 0x1f5) = 0;
  *(undefined1 *)((int)param_1 + 0x1f6) = 0;
  *(undefined1 *)((int)param_1 + 0x1f7) = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  return param_1;
}



void fn_00152574(void)

{
  undefined4 uVar1;
  uint in_fpscr;
  
  uVar1 = fn_00172f98();
  VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
  return;
}



undefined * fn_001524d0(void)

{
  int iVar1;
  
  if (((DAT_008c05e4 & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008c05e4), iVar1 != 0)) {
    fn_00141274(&DAT_008eccc0);
  }
  return &DAT_008eccc0;
}



void fn_00152464(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  int *local_10;
  
  local_10 = param_4;
  while (iVar1 = fn_001585d4(param_1 + 0xb4,&local_10), iVar1 != 0) {
    *(int *)(param_1 + 0x178) = local_10[2];
    piVar2 = local_10;
    if (local_10 != (int *)0x0) {
      while ((int *)*piVar2 != (int *)0x0) {
        piVar2 = (int *)*piVar2;
      }
      iVar1 = piVar2[3];
      *(int *)(param_1 + 0x188) = iVar1;
      *(undefined1 *)(param_1 + 0x18c) = 0;
      if (*(int *)(param_1 + 0x184) == iVar1) {
        *(undefined4 *)(param_1 + 0x188) = 0;
        *(undefined4 *)(param_1 + 0x184) = 0;
      }
    }
  }
  return;
}



undefined4
fn_001522f0(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 auStack_58 [12];
  char local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  
  uVar1 = fn_00156794(param_1[1]);
  iVar2 = (**(code **)(*param_1 + 0x10))(param_1,uVar1);
  if ((iVar2 != 0) || (iVar2 = fn_00161d44(param_1,param_2,param_4,param_5), iVar2 != 0)) {
    fn_00162118(auStack_58,iVar2,1);
    if ((local_4c != '\0') && (iVar2 = fn_001566bc(auStack_58,param_3), iVar2 != 0)) {
      return 1;
    }
    iVar2 = fn_001664b0(auStack_58,param_3);
    uVar3 = (**(code **)(*param_4 + 8))(param_4,iVar2 + 0x20);
    if (uVar3 != 0) {
      uVar4 = fn_0015e284();
      iVar5 = fn_0015e218();
      if ((uVar4 <= uVar3) && (uVar3 + iVar2 + 0x20 <= iVar5 + uVar4)) {
        local_48 = 0x56574943;
        uStack_44 = uVar1;
        local_40 = param_3;
        fn_00301a9c(uVar3,&local_48,0x20);
        iVar7 = uVar3 + 0x20;
        uVar6 = fn_001664d8(auStack_58,param_3);
        iVar5 = fn_00161ecc(param_1,uVar1,iVar7,iVar2,uVar6,param_5);
        if (iVar5 == iVar2) {
          fn_0015252c(auStack_58,param_3,iVar7);
          fn_0017cad4(iVar7,iVar2);
          return 1;
        }
      }
    }
  }
  return 0;
}



undefined4 fn_0015252c(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = *(char *)(param_1 + 0xc) != '\0';
  iVar2 = 0;
  if (bVar3) {
    iVar2 = *(int *)(param_1 + 8);
  }
  if ((bVar3 && iVar2 != 0) && (param_2 < **(uint **)(param_1 + 4))) {
    uVar1 = *(undefined4 *)(iVar2 + param_2 * 4);
    *(undefined4 *)(iVar2 + param_2 * 4) = param_3;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



int * fn_00152218(int *param_1)

{
  if (*(char *)((int)param_1 + 0x15) != '\0') {
    fn_001521a8(param_1);
  }
  fn_0015e304(param_1);
  if (*param_1 != 0) {
    svc_0x23();
    *param_1 = 0;
  }
  return param_1;
}



void fn_001521a8(int *param_1)

{
  if (*(char *)((int)param_1 + 0x15) != '\0') {
    *(undefined1 *)(param_1 + 5) = 1;
    fn_00172e2c();
    fn_001675b0();
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
    param_1[4] = -1;
    *(undefined1 *)((int)param_1 + 0x15) = 0;
  }
  return;
}


