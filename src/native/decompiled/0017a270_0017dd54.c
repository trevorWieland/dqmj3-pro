#include "0017a270_0017dd54.h"

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

static void svc_0x28(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x28 }
#endif
}


int * fn_0017dd54(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined1 auStack_b8 [136];
  undefined1 auStack_30 [4];
  int local_2c;
  
  fn_0017d96c(auStack_b8,0x88,0x87,(char *)&DAT_007d8878,*(undefined4 *)(param_1 + 0x20),param_2);
  uVar1 = (**(code **)(**(int **)(param_1 + 0x24) + 0xc))
                    (*(int **)(param_1 + 0x24),0x616e696d,auStack_b8,0);
  fn_0017dcb0(auStack_30,uVar1);
  uVar2 = fn_0019bbb0(auStack_30);
  if (1 < uVar2) {
    piVar3 = (int *)fn_0018a794(param_1,auStack_30,param_3);
    return piVar3;
  }
  if (local_2c == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    iVar4 = (**(code **)(*DAT_0089a918 + 8))(DAT_0089a918,0x34,4);
    if (iVar4 == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)fn_0019530c();
      *piVar3 = (int)&DAT_008579c8;
      piVar3[0xc] = 0;
      fn_0017d948(param_1 + 4,param_1 + 8,piVar3 + 1);
    }
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x20))(piVar3,local_2c,*(undefined4 *)(param_1 + 0x24));
    }
  }
  fn_00194c04(piVar3,auStack_30,*(undefined4 *)(param_1 + 0x14),0,param_3);
  return piVar3;
}



undefined4 fn_0017d998(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  code *local_30;
  undefined1 auStack_2c [8];
  
  if (*(int *)(param_1 + 0xc) != 0) {
    fn_0017dbc0(*(int *)(param_1 + 0xc),0x102);
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if (*(int *)(param_1 + 0x954) != 0) {
    fn_0017dbc0(*(int *)(param_1 + 0x954),0x102);
    *(undefined4 *)(param_1 + 0x954) = 0;
  }
  iVar3 = *(int *)(param_1 + 8);
  fn_0015fa54(iVar3,0x2b0);
  if (param_3 == 1) {
    fn_00191540(&local_30,auStack_2c);
    uVar1 = 0x20000;
LAB_0017da3c:
    iVar2 = (*local_30)(uVar1,0x102,0,0x2b0);
    if (param_2 == 0) {
      fn_0019143c(iVar3,iVar2,0x2b0);
    }
    else {
      fn_001914c0(param_2,iVar3,iVar2,0x2b0);
    }
  }
  else {
    iVar2 = iVar3;
    if (param_3 == 2) {
      fn_00191540(&local_30,auStack_2c);
      uVar1 = 0x30000;
      goto LAB_0017da3c;
    }
  }
  *(int *)(param_1 + 0xc) = iVar2;
  if (iVar2 == 0) {
    return 0;
  }
  iVar3 = *(int *)(param_1 + 0x950);
  uVar1 = fn_0015fa54(iVar3,0x24);
  if (param_3 == 1) {
    fn_00191540(&local_30,auStack_2c);
    uVar1 = 0x20000;
  }
  else {
    if (param_3 != 2) goto LAB_0017dac8;
    fn_00191540(&local_30,auStack_2c);
    uVar1 = 0x30000;
  }
  iVar2 = (*local_30)(uVar1,0x102,0,0x24);
  if (param_2 == 0) {
    uVar1 = fn_0019143c(iVar3,iVar2,0x24);
    iVar3 = iVar2;
  }
  else {
    uVar1 = fn_001914c0(param_2,iVar3,iVar2,0x24);
    iVar3 = iVar2;
  }
LAB_0017dac8:
  if (iVar3 != 0) {
    uVar1 = 1;
  }
  *(int *)(param_1 + 0x954) = iVar3;
  if (iVar3 == 0) {
    if (*(int *)(param_1 + 0xc) != 0) {
      fn_0017dbc0(*(int *)(param_1 + 0xc),0x102);
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    return 0;
  }
  return uVar1;
}



undefined4 fn_0017c428(void)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined4 local_30;
  undefined4 uStack_2c;
  uint local_28;
  
  uVar1 = (ulonglong)DAT_008eeff4;
  iVar3 = (int)DAT_008eeff4 >> 0x1f;
  fn_0017ca80(&local_28,0);
  fn_00189bcc(&local_28);
  iVar5 = 0;
  DAT_008c07e8 = 2;
  if (0 < DAT_008eeff8) {
    do {
      svc_0x24();
      uVar6 = (ulonglong)local_28;
      if ((int)local_28 < 0) {
        uVar6 = fn_0015e294();
      }
      svc_0x28();
      fn_001897b4(DAT_008c0789);
      uVar2 = local_28;
      svc_0x24();
      if (-((int)local_28 >> 0x1f) != 0) {
        fn_0015e294(local_28,-((int)local_28 >> 0x1f),(int)(uVar1 * 1000000),
                     iVar3 * 1000000 + (int)(uVar1 * 1000000 >> 0x20));
      }
      if ((uVar2 & 0x3ff) != 0x3fe) break;
      fn_0017c164();
      if (DAT_008eeff8 + -1 == iVar5) {
        DAT_008c07e8 = 0;
        if (local_28 != 0) {
          svc_0x23();
        }
        return 0xc8810c11;
      }
      fn_00189804(&local_30,DAT_008eefed,(int)uVar6,(int)(uVar6 >> 0x20),DAT_008eeff4,DAT_008eefed)
      ;
      fn_0012d6a4(local_30,uStack_2c);
      iVar5 = iVar5 + 1;
    } while (iVar5 < DAT_008eeff8);
  }
  iVar3 = fn_00189a5c();
  if (iVar3 == 2) {
    uVar4 = 0;
    DAT_008c07e8 = 3;
    if (local_28 != 0) {
      svc_0x23();
    }
  }
  else {
    uVar4 = 0xc8a10c0d;
    DAT_008c07e8 = 0;
    if (local_28 != 0) {
      svc_0x23();
    }
  }
  return uVar4;
}



void fn_0017bae4(int param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  iVar1 = param_1 + param_4;
  if (param_2 == 0 || param_3 < 0x65) {
    if (*(char *)(iVar1 + 0xac) != '\0') {
      *(undefined1 *)(iVar1 + 0xac) = 0;
      fn_00190e00(*(undefined4 *)(param_1 + (param_4 * 2 + 3U & 0xff) * 4 + 0x68));
      return;
    }
  }
  else {
    *(char *)(iVar1 + 0xac) = (char)param_2;
    uVar2 = fn_00188010(param_2,1);
    fn_00190d50(*(undefined4 *)(param_1 + param_4 * 4 + 0x8c),uVar2);
    iVar1 = 0;
    do {
      param_3 = param_3 * 0xcccd >> 0x13;
      local_48 = 0;
      local_44 = 0;
      local_40 = 0;
      local_3c = 0;
      local_38 = 0;
      local_34 = 0;
      local_30 = 0;
      local_2c = 0;
      fn_00102908(&local_48,0x20,DAT_00890878,param_3 % 10);
      fn_0019ba04(*(undefined4 *)(param_1 + param_4 * 8 + (1 - iVar1) * 4 + 0x9c),
                   *(undefined4 *)(param_1 + 0xb4),&local_48,0,0);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 2);
  }
  return;
}



void fn_0017a37c(char param_1)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  byte bVar9;
  bool bVar10;
  bool bVar11;
  float in_s0;
  float in_s1;
  float in_s2;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_80;
  float local_7c;
  float local_78;
  byte local_68 [4];
  char local_64 [4];
  uint local_60;
  uint local_5c;
  int local_58;
  float local_4c [3];
  byte local_40 [4];
  char local_3c [24];
  
  bVar2 = 0;
  bVar4 = 0;
  cVar1 = '\0';
  cVar3 = '\0';
  uVar5 = fn_00182994(DAT_008977e4);
  iVar6 = fn_001754ac(uVar5,param_1);
  fn_00182994(DAT_008977e4);
  iVar7 = fn_00175518();
  if (iVar7 != 0) {
    uVar5 = fn_00182994(DAT_008977e4);
    cVar1 = fn_00174b04(uVar5,iVar6);
    if (iVar6 == 0) {
      uVar5 = fn_00182994(DAT_008977e4);
      bVar2 = fn_001648cc(uVar5,0);
    }
    else {
      uVar5 = fn_00182994(DAT_008977e4);
      bVar2 = fn_001648cc(uVar5,1);
    }
  }
  uVar5 = fn_00182994(DAT_008977e4);
  iVar7 = fn_00174b78(uVar5,(int)param_1);
  if (iVar7 != 0) {
    uVar5 = fn_00182994(DAT_008977e4);
    cVar3 = fn_00174bf8(uVar5,iVar6);
    if (iVar6 == 0) {
      uVar5 = fn_00182994(DAT_008977e4);
      bVar4 = fn_001649dc(uVar5,0);
    }
    else {
      uVar5 = fn_00182994(DAT_008977e4);
      bVar4 = fn_001649dc(uVar5,1);
    }
  }
  bVar10 = cVar1 != '\0';
  bVar11 = cVar3 != '\0';
  if (((((!bVar10 || !bVar11) && cVar1 == '\0') && (bVar9 = bVar4, cVar3 != '\0')) ||
      (cVar3 = cVar1, bVar9 = bVar2, cVar1 != '\0')) && (cVar3 != '\x1a')) {
    uVar5 = fn_00182994(DAT_008977e4);
    fn_00175430(uVar5,param_1);
    fVar12 = in_s2;
    fVar13 = in_s2;
    fVar14 = in_s0;
    uVar5 = fn_00182994(DAT_008977e4);
    fn_00174900(uVar5,param_1);
    local_7c = in_s1 + in_s2;
    local_80 = fVar14 + in_s0;
    local_78 = fVar13 + fVar12;
    local_4c[1] = 0.0;
    local_4c[0] = local_80;
    local_4c[2] = local_78;
    uVar5 = fn_00182994(DAT_008977e4);
    fn_0016a51c(uVar5,bVar9);
    if (bVar10 && bVar11) {
      uVar5 = fn_00182994(DAT_008977e4);
      fn_0016a51c(uVar5,bVar4);
    }
    local_60 = 0;
    local_5c = 0;
    local_58 = 0;
    fn_00191638(&local_60,&local_80);
    fn_00191638(&local_60,local_4c);
    uVar5 = fn_00182994(DAT_008977e4);
    fn_001753a4(uVar5,bVar9);
    uVar5 = fn_00182994(DAT_008977e4);
    fn_0016a798(uVar5,bVar9);
    uVar5 = fn_00182994(DAT_008977e4);
    fn_0016a5e4(uVar5,bVar9,&local_60);
    uVar5 = fn_00182994(DAT_008977e4);
    fn_0017554c(uVar5,bVar9);
    uVar5 = fn_00182994(DAT_008977e4);
    fn_00182c40(uVar5,bVar9,7,0);
    uVar5 = fn_00182994(DAT_008977e4);
    fn_0016a6d0(uVar5,bVar9,8);
    local_40[0] = bVar9;
    local_3c[0] = param_1;
    uVar5 = fn_00182994(DAT_008977e4);
    fn_001596c4(uVar5,local_40,local_3c);
    if (bVar10 && bVar11) {
      local_68[0] = bVar4;
      local_64[0] = param_1;
      uVar5 = fn_00182994(DAT_008977e4);
      fn_001596c4(uVar5,local_68,local_64);
    }
    uVar5 = fn_00182994(DAT_008977e4);
    fn_00179a14(uVar5,bVar9);
    if (bVar10 && bVar11) {
      uVar5 = fn_00182994(DAT_008977e4);
      fn_00179a14(uVar5,bVar4);
    }
    uVar8 = local_60;
    if (local_5c < local_60) {
      do {
        uVar8 = uVar8 + 0xc;
      } while (uVar8 != local_5c);
    }
    fn_001008c4(local_60,(int)(local_58 - local_60) / 0xc,0);
  }
  return;
}



void fn_0017a270(undefined1 param_1,int param_2)

{
  undefined4 uVar1;
  float in_s0;
  float in_s1;
  
  uVar1 = fn_00182994(DAT_008977e4);
  uVar1 = fn_00174bac(uVar1,param_1);
  fn_0017a7fc(uVar1,param_2 % 4);
  uVar1 = fn_00182994(DAT_008977e4);
  fn_001755cc(uVar1,param_1,7,0,1,(int)in_s0,(int)in_s1);
  return;
}


