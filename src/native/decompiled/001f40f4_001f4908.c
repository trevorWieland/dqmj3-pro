#include "001f40f4_001f4908.h"



void fn_001f4908(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar4 = 0;
  uVar6 = *(undefined4 *)(DAT_00897804 + 0xc);
  uVar5 = *(undefined4 *)(DAT_00897804 + 0x1c);
  iVar1 = fn_006b8478(uVar6);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    puVar2 = (undefined4 *)fn_0028b074(uVar6,iVar1);
    if ((*(short *)(puVar2 + 7) == 0xbc) && (iVar3 = fn_0068b2a8(*puVar2), 1 < iVar3)) {
      uVar4 = *puVar2;
    }
  }
  fn_002426b4(uVar5,3,uVar4);
  return;
}



void fn_001f462c(void)

{
  int iVar1;
  int iVar2;
  int unaff_r5;
  longlong lVar3;
  undefined1 auStack_20 [16];
  
  lVar3 = fn_00453de4(0x1acb);
  if (lVar3 != 0) {
    unaff_r5 = -999999;
  }
  iVar2 = 1;
  if (lVar3 != 0) {
    do {
      iVar1 = 10;
      lVar3 = fn_00169c20();
      if (iVar1 == 0) {
        iVar1 = 1;
      }
      iVar2 = iVar2 * iVar1;
      do {
        if (iVar2 <= -unaff_r5) goto LAB_001f468c;
        iVar2 = iVar2 + unaff_r5;
      } while (0 < iVar2);
      iVar2 = 1;
LAB_001f468c:
    } while (lVar3 != 0);
  }
  fn_00101a50(auStack_20,7,L"%06d",iVar2);
  fn_0015b0dc(auStack_20);
  return;
}



undefined4 fn_001f455c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((*(char *)(param_1 + param_2 * 0x2c + 0x9c) != '\0') &&
     (iVar1 = fn_00145b00(0x28,&DAT_00812c8c), iVar1 != 0)) {
    fn_0017fe34();
    iVar2 = fn_006f7a84(DAT_008977e0);
    iVar1 = fn_003cd4f4(iVar1,param_2,iVar2 + 0x20,param_3,param_4);
    if (iVar1 != 0) {
      uVar3 = fn_0015a130(param_1);
      return uVar3;
    }
  }
  return 0xffffffff;
}



void fn_001f453c(void)

{
  fn_001f46d0();
  return;
}



undefined4
fn_001f46d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  int local_2c;
  int local_28;
  undefined4 local_24;
  
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  fn_00163edc(param_1,*(undefined4 *)(param_1 + 0x78),param_3,&local_2c);
  iVar1 = local_28 - local_2c >> 0x1f;
  if (((local_28 - local_2c) / 0xc + iVar1 != iVar1) &&
     (iVar1 = fn_00145b00(0x34,&DAT_00812c8c), iVar1 != 0)) {
    iVar1 = fn_004209dc(iVar1,param_2,&local_2c,0,param_4,param_5,param_6);
    if (iVar1 != 0) {
      fn_001f25d4(param_1,param_2,local_2c,param_4);
      uVar2 = fn_0015a130(param_1,iVar1);
      fn_00168b28(&local_2c);
      return uVar2;
    }
  }
  fn_00168b28(&local_2c);
  return 0xffffffff;
}



undefined4
fn_001f44b8(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((-1 < (int)param_3) && (param_3 < 0x50)) {
    iVar1 = *(int *)(param_1 + param_3 * 0x2c + 0x8c);
    if ((iVar1 != 0) && (iVar1 = fn_0017fde4(*(undefined4 *)(iVar1 + 0xe4)), iVar1 != 0)) {
      uVar2 = fn_001ceba8(param_1,param_2,iVar1,param_4,param_5);
      return uVar2;
    }
  }
  return 0xffffffff;
}



void fn_001f448c(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  
  fn_001f38e8(param_1,param_2,0);
  piVar1 = (int *)fn_006f72e0(DAT_008977e0);
                    /* WARNING: Could not recover jumptable at 0x001f44b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x94))();
  return;
}



int fn_001f4418(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = fn_00227398();
  if (iVar1 != 0) {
    iVar1 = fn_00227ca8(DAT_00897894,4,0xffffffff,0);
    iVar2 = fn_00228c2c(*(undefined4 *)(DAT_00897804 + 0x34));
    if ((iVar2 != iVar1 && iVar1 != 0) && (iVar2 = fn_002283ec(iVar1), iVar2 != 0)) {
      iVar3 = iVar1;
    }
    fn_00682a8c();
  }
  return iVar3;
}



void fn_001f43b0(int param_1,uint param_2)

{
  byte bVar1;
  int *piVar2;
  float in_s0;
  float in_s1;
  int iVar3;
  int iVar4;
  
  if ((int)param_2 < 0) {
    return;
  }
  if (0x4f < param_2) {
    return;
  }
  piVar2 = *(int **)(param_1 + param_2 * 0x2c + 0x8c);
  if (piVar2 == (int *)0x0) {
    return;
  }
  fn_006f74f4(DAT_008977e0);
  iVar3 = (int)in_s0;
  iVar4 = (int)in_s1;
  bVar1 = *(byte *)(piVar2 + 0x5f);
  if (bVar1 == 0xb) {
switchD_00566dbc_caseD_a:
    piVar2[0x68] = (int)in_s0;
  }
  else {
    if (bVar1 < 0xc) {
      switch(bVar1) {
      case 2:
        fn_003d76c0(piVar2,iVar3);
        return;
      default:
        goto switchD_00566dbc_caseD_3;
      case 6:
        piVar2[0x68] = iVar3;
        return;
      case 7:
        fn_003ae894(piVar2,iVar3);
        fn_003ae8a4(piVar2,iVar4);
        return;
      case 8:
      case 9:
        fn_00361e1c(piVar2,iVar3);
        fn_00361e2c(piVar2,iVar4);
        return;
      case 10:
        goto switchD_00566dbc_caseD_a;
      }
    }
    if (bVar1 == 0x1d) {
LAB_00566ed8:
      fn_00566c30(piVar2,iVar3);
      piVar2[0x6a] = iVar4;
      piVar2[0x69] = iVar4;
      return;
    }
    if (bVar1 < 0x1e) {
      if (bVar1 == 0xc) {
        fn_003af024(piVar2);
        return;
      }
      if (bVar1 == 0x12) {
        piVar2[0x69] = (int)in_s0;
        return;
      }
      if (bVar1 == 0x15) {
                    /* WARNING: Could not recover jumptable at 0x00566e20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*piVar2 + 0x138))(piVar2);
        return;
      }
    }
    else {
      if (bVar1 == 0x1e) goto LAB_00566ed8;
      if (bVar1 == 0x1f) {
        piVar2[0x69] = (int)in_s0;
        return;
      }
    }
  }
switchD_00566dbc_caseD_3:
  return;
}



void fn_001f4358(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = fn_0028b0a0(*(undefined4 *)(DAT_00897804 + 0xc),param_3);
  }
  else {
    if (param_2 != 1) {
      return;
    }
    iVar1 = fn_0028b348(*(undefined4 *)(DAT_00897804 + 0xc),param_3);
  }
  if (iVar1 == 0) {
    return;
  }
  fn_0015b0dc(iVar1 + 4);
  return;
}



void fn_001f4300(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_50 [68];
  
  fn_001d421c(auStack_50);
  fn_003173cc(auStack_50,param_2,param_3);
  uVar1 = fn_00154ae0(DAT_008977e4);
  fn_001d45c0(uVar1,auStack_50);
  fn_006952bc(DAT_008977e0);
  return;
}



void fn_001f41a0(void)

{
  short *psVar1;
  
  psVar1 = (short *)fn_002283d0();
  if (psVar1 == (short *)0x0) {
    return;
  }
  fn_002ea524((int)*psVar1);
  fn_00242bd4();
  return;
}



int fn_001f4184(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0xf9a);
  *(undefined1 *)(param_1 + 0xf9a) = 0;
  return (int)cVar1;
}



void fn_001f417c(undefined4 param_1,undefined4 param_2)

{
  fn_001f38e8(param_1,param_2,1);
  return;
}



undefined4
fn_001f40f4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00145b00(0x28,&DAT_00812c8c);
  if (iVar1 != 0) {
    fn_0017fe34();
    iVar1 = fn_003cd4f4(iVar1,param_2,param_3,param_4,param_5);
    if (iVar1 != 0) {
      uVar2 = fn_0015a130(param_1);
      return uVar2;
    }
  }
  return 0xffffffff;
}


