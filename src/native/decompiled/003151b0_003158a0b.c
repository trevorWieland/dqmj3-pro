#include "003151b0_003158a0b.h"



undefined4 * fn_003158a0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *unaff_r4;
  
  *param_1 = 0;
  puVar1 = (undefined4 *)fn_00145b00(4,&DAT_00812c8c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    unaff_r4 = puVar1;
  }
  puVar2 = (undefined4 *)*param_1;
  if (puVar1 == (undefined4 *)0x0) {
    unaff_r4 = (undefined4 *)0x0;
  }
  if (puVar2 != unaff_r4) {
    if (puVar2 != (undefined4 *)0x0) {
      fn_002feef8(*puVar2);
      *puVar2 = 0;
      fn_002feef8(puVar2);
    }
    *param_1 = unaff_r4;
  }
  uVar3 = fn_00145b00(0x361e8,&DAT_00812c8c);
  param_1[1] = uVar3;
  return param_1;
}



undefined4 fn_00315764(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  
  uVar1 = fn_005e0a1c(0x16ad);
  if ((uVar1 & 0x80000000) == 0) {
    piVar5 = (int *)*param_1;
    if (*piVar5 == 0) {
      iVar2 = fn_00145b00(0x362f8,&DAT_00812c8c);
      if (iVar2 != 0) {
        fn_00301f50(iVar2,0x362f8);
      }
      *piVar5 = iVar2;
    }
    uVar4 = fn_00118290();
    DAT_00897864 = fn_0012d6b0(DAT_0089785c,uVar4,4,1);
    return 0;
  }
  if ((((uVar1 & 0x3fc00) == 0x4400) && (uVar3 = uVar1 & 0x3ff, 0x153 < uVar3)) && (uVar3 < 0x168))
  {
    uVar4 = 4;
  }
  else {
    if (((((uVar1 & 0x3fc00) != 0x4400) || (uVar3 = uVar1 & 0x3ff, uVar3 < 0x168)) ||
        (0x185 < uVar3)) &&
       ((((uVar1 & 0x3fc00) != 0x4400 || (uVar3 = uVar1 & 0x3ff, uVar3 < 0x186)) || (399 < uVar3))))
    {
      uVar3 = (uVar1 & 0x3fc00) >> 10;
    }
    uVar4 = 5;
  }
  fn_005e0784(uVar1,uVar3);
  return uVar4;
}



longlong fn_0031559c(void)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 extraout_r1;
  
  uVar1 = fn_005e0a1c(0x16ad);
  if ((uVar1 & 0x80000000) == 0) {
    uVar2 = fn_00147fd4(DAT_0089785c,1);
    fn_005e0784();
    return CONCAT44(extraout_r1,uVar2);
  }
  if (((((uVar1 & 0x3fc00) != 0x4400) || (uVar3 = uVar1 & 0x3ff, uVar3 < 0x154)) || (0x167 < uVar3))
     && (uVar3 = (uVar1 & 0x3fc00) >> 10, uVar3 == 0x11)) {
    uVar3 = uVar1 & 0x3ff;
  }
  return (ulonglong)uVar3 << 0x20;
}



undefined4 fn_00315518(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  iVar1 = *piVar2;
  if ((iVar1 != 0) && (*(int *)(iVar1 + 4) == 1)) {
    if (*(int *)(iVar1 + 8) == 0x362f8) {
      fn_0017821c(param_1[1],iVar1 + 0xf0,0x361e8);
      piVar2 = (int *)*param_1;
      if (*piVar2 != 0) {
        fn_002feef8();
        *piVar2 = 0;
      }
      return 0;
    }
  }
  if (iVar1 != 0) {
    fn_002feef8();
    *piVar2 = 0;
  }
  return 2;
}



undefined4 fn_00315450(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  if (DAT_00897864 == 0) {
    fn_005e0784();
    piVar3 = (int *)*param_1;
    iVar1 = *piVar3;
  }
  else {
    iVar1 = fn_00145aac();
    if (iVar1 != 2) {
      iVar1 = fn_00145aac();
      if (iVar1 == 1) {
        uVar2 = fn_00145ac0(DAT_00897864);
        fn_00315620(*param_1,uVar2);
        fn_0012d73c(DAT_00897864);
        DAT_00897864 = 0;
        fn_005e0784();
        uVar2 = 0;
      }
      else {
        uVar2 = 6;
      }
      return uVar2;
    }
    fn_0012d73c(DAT_00897864);
    DAT_00897864 = 0;
    fn_005e0784();
    piVar3 = (int *)*param_1;
    iVar1 = *piVar3;
  }
  if (iVar1 != 0) {
    fn_002feef8();
    *piVar3 = 0;
  }
  return 2;
}



void fn_00315620(int *param_1,int param_2)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  byte *pbVar8;
  undefined1 auStack_38 [32];
  
  iVar7 = *param_1;
  puVar1 = (undefined4 *)fn_001287d4(0x10,&DAT_00812c8c);
  pbVar2 = (byte *)((int)&DAT_007cc4c0 + 3);
  bVar6 = 0xe7;
  pbVar8 = (byte *)((int)puVar1 + -1);
  iVar4 = 8;
  do {
    iVar4 = iVar4 + -1;
    bVar5 = bVar6 + (pbVar2[1] ^ bVar6);
    pbVar8[1] = pbVar2[1] ^ bVar6;
    pbVar2 = pbVar2 + 2;
    pbVar8 = pbVar8 + 2;
    *pbVar8 = *pbVar2 ^ bVar5;
    bVar6 = bVar5 + *pbVar8;
  } while (iVar4 != 0);
  iVar3 = fn_005273d8(iVar7,param_2,0xf0,puVar1);
  iVar4 = 0;
  if (iVar3 != 0) {
    bVar6 = *(byte *)(iVar7 + 0xcc);
    pbVar2 = &UNK_007cc4d3;
    pbVar8 = (byte *)((int)puVar1 + -1);
    iVar4 = 8;
    do {
      iVar4 = iVar4 + -1;
      bVar5 = bVar6 + (pbVar2[1] ^ bVar6);
      pbVar8[1] = pbVar2[1] ^ bVar6;
      pbVar2 = pbVar2 + 2;
      pbVar8 = pbVar8 + 2;
      *pbVar8 = *pbVar2 ^ bVar5;
      bVar6 = bVar5 + *pbVar8;
    } while (iVar4 != 0);
    iVar4 = fn_005273d8(iVar7 + 0xf0,param_2 + 0xf0,0x36208,puVar1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  fn_002feca8(puVar1);
  if (iVar4 == 0) {
    fn_00301f50(iVar7,0x362f8);
    return;
  }
  fn_0013ef80(auStack_38,iVar7 + 0xf0,0x361e8);
  return;
}


