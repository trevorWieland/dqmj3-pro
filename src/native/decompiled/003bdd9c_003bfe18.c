#include "003bdd9c_003bfe18.h"



void fn_003bfe18(int *param_1)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  int iStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  uint uStack_34;
  int iStack_30;
  uint uStack_2c;
  int iStack_28;
  
  fn_0039c400();
  fn_003bfd60(param_1);
  uVar3 = param_1[0x27];
  bVar10 = *(int *)(*(int *)(uVar3 + 0x8f8) + -4) == 0;
  uVar4 = uVar3;
  if (bVar10) {
    uVar4 = (uint)*(byte *)(uVar3 + 0x901);
  }
  if (bVar10 && uVar4 == 0) {
    if (*(int *)(*(int *)(uVar3 + 0x8fc) + -4) == 0) {
      fn_0039c438(param_1);
    }
    else {
      fn_0039bf58();
    }
  }
  else {
    iVar5 = fn_00689210(*(undefined4 *)(param_1[0x1d] + 0x10),DAT_00894e24);
    *(byte *)(iVar5 + 0x44) = *(byte *)(iVar5 + 0x44) & 0xfe | 1;
    fn_0039bdb0(param_1,*(undefined4 *)(uVar3 + 0x8f8));
    if (*(char *)(param_1[0x27] + 0x901) == '\0') {
      fn_0039c39c(param_1,DAT_00894e28,0);
    }
    else {
      fn_0039c39c(param_1,DAT_00894e28,1);
      fn_0039bcf8(param_1,*(undefined2 *)(uVar3 + 0x74),DAT_00894e28);
    }
  }
  fn_0031c7bc(param_1);
  fn_0031ca48(param_1);
  fn_0031c02c(param_1);
  uVar2 = (**(code **)(*param_1 + 0x120))(param_1);
  fn_0036e8fc(*(undefined4 *)(param_1[0x1d] + 0x10),uVar2);
  uVar7 = *(undefined4 *)(param_1[0x1d] + 0x10);
  iVar5 = 0;
  do {
    iVar8 = param_1[0x2a];
    uVar6 = fn_0036e9e4(uVar7,iVar5,param_1[1],param_1[0x12]);
    *(undefined4 *)(iVar8 + iVar5 * 4) = uVar6;
    iStack_40 = param_1[0x1a];
    uStack_3c = param_1[0x1b];
    iVar9 = param_1[0x2d];
    uVar6 = fn_0036eaa8(uVar7,iVar5,param_1[1],param_1[0x12]);
    iVar8 = iVar5 + 1;
    *(undefined4 *)(iVar9 + iVar5 * 4) = uVar6;
    iVar5 = iVar8;
  } while (iVar8 < 4);
  uVar4 = 0;
  iVar5 = 0;
  iStack_28 = (int)*(char *)(param_1[0x27] + 0x903);
  cVar1 = *(char *)(param_1[0x27] + 0x904);
  do {
    uStack_2c = (uint)(*(char *)(uVar3 + 0x52c) == iVar5);
    bVar10 = *(char *)(uVar3 + 0x52d) == iVar5;
    if (bVar10) {
      uStack_2c = 1;
    }
    uStack_34 = (uint)(*(char *)(param_1[0x27] + 0x900) != '\0');
    iStack_30 = iStack_28;
    iVar8 = uVar3 + iVar5 * 0xf0;
    iVar9 = iVar8 + 0x16c;
    if (((iVar9 == 0) || (iVar8 = fn_001a46f4((int)*(short *)(iVar8 + 0x188)), iVar8 == 0)) ||
       ((uint)(param_1[0x2b] - param_1[0x2a] >> 2) <= uVar4)) {
      iVar8 = 1;
    }
    else {
      uStack_38 = 0;
      iStack_40 = 1;
      uStack_3c = (uint)bVar10;
      fn_002b415c(*(undefined4 *)(param_1[0x2a] + uVar4 * 4),iVar9,uStack_2c);
      iStack_40 = (int)cVar1;
      fn_0036e68c(*(undefined4 *)(param_1[0x2d] + uVar4 * 4),iVar9,uStack_34,iStack_30);
      iVar8 = fn_0020bbc4(&iStack_40,iVar9);
      if (iVar8 != 0) {
        iVar8 = iVar8 + 4;
      }
      uVar7 = fn_006bfe90(iVar8);
      iVar8 = fn_001cab7c(uVar7);
    }
    uVar4 = iVar8 + uVar4 & 0xff;
  } while ((uVar4 < 4) && (iVar5 = iVar5 + 1, iVar5 < 4));
  return;
}



void fn_003be148(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  
  iVar1 = fn_0022cdf0();
  if (iVar1 != 0) {
    fn_003bbdc0(param_1);
    fn_0022cdb4(param_1,*(short *)(*(int *)(param_1 + 0x98) + 0x1c) != 0);
    uVar2 = fn_0022f584(*(undefined4 *)
                          (&DAT_008942b0 + (uint)*(byte *)(*(int *)(param_1 + 0x98) + 0x544) * 4),0)
    ;
    fn_0022cd58(param_1,uVar2);
    fn_00688c04(*(undefined4 *)(param_1 + 0xac),(int)*(short *)(*(int *)(param_1 + 0x98) + 0x2c),0)
    ;
    fn_00688c04(*(undefined4 *)(param_1 + 0xb0),(int)*(short *)(*(int *)(param_1 + 0x98) + 0x32),0)
    ;
    fn_00688c04(*(undefined4 *)(param_1 + 0xb4),(int)*(short *)(*(int *)(param_1 + 0x98) + 0x36),0)
    ;
    fn_00688c04(*(undefined4 *)(param_1 + 0xb8),(int)*(short *)(*(int *)(param_1 + 0x98) + 0x3a),0)
    ;
    fn_00688c04(*(undefined4 *)(param_1 + 0xbc),(int)*(short *)(*(int *)(param_1 + 0x98) + 0x3e),0)
    ;
    fn_00688c04(*(undefined4 *)(param_1 + 0xc0),(int)*(short *)(*(int *)(param_1 + 0x98) + 0x42),0)
    ;
    pcVar4 = "";
    if (*(char *)(*(int *)(param_1 + 0x98) + 0x544) == '\x01') {
      pcVar4 = (char *)fn_00231ca0(0x9e,0);
    }
    fn_00190d50(*(undefined4 *)(param_1 + 0xc4),pcVar4);
    fn_00190d50(*(undefined4 *)(param_1 + 200),pcVar4);
    fn_00190d50(*(undefined4 *)(param_1 + 0xcc),pcVar4);
    fn_00190d50(*(undefined4 *)(param_1 + 0xd0),pcVar4);
    fn_00190d50(*(undefined4 *)(param_1 + 0xd4),pcVar4);
    fn_00190d50(*(undefined4 *)(param_1 + 0xd8),pcVar4);
    fn_003bdd9c(param_1);
    fn_003be34c(param_1);
    uVar2 = fn_0022f60c((int)*(short *)(*(int *)(param_1 + 0x98) + 0x558));
    fn_00190d50(*(undefined4 *)(param_1 + 0x114),uVar2);
    iVar1 = *(int *)(param_1 + 0x98);
    uVar5 = 0;
    do {
      iVar3 = *(int *)(param_1 + 0x118);
      if (uVar5 < *(byte *)(iVar1 + 0x55a)) {
        uVar2 = fn_0022f60c((int)*(short *)(iVar1 + uVar5 * 2 + 0x55c));
        fn_00190d50(*(undefined4 *)(iVar3 + uVar5 * 4),uVar2);
      }
      else {
        fn_00688a74(*(undefined4 *)(iVar3 + uVar5 * 4));
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 3);
    if (*(int **)(param_1 + 0xa8) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003be33c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(int **)(param_1 + 0xa8) + 0x14))();
      return;
    }
  }
  return;
}



void fn_003bdd9c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_r6;
  undefined4 local_18;
  
  iVar1 = *(int *)(param_1 + 0x98);
  iVar4 = *(int *)(param_1 + 0xdc);
  local_18 = param_4;
  if (*(char *)(iVar1 + 0x544) != '\x01') {
    fn_00190d50(iVar4,&DAT_003be130);
    fn_00190d50(*(undefined4 *)(param_1 + 0xe0),&DAT_003be130);
    fn_00190d50(*(undefined4 *)(param_1 + 0xe4),&DAT_003be130);
    fn_00190d50(*(undefined4 *)(param_1 + 0xe8),&DAT_003be130);
    fn_00190d50(*(undefined4 *)(param_1 + 0xec),&DAT_003be130);
    fn_00190d50(*(undefined4 *)(param_1 + 0xf0),&DAT_003be130);
    fn_00190d50(*(undefined4 *)(param_1 + 0xf4),&DAT_003be130);
    fn_00190d50(*(undefined4 *)(param_1 + 0xf8),&DAT_003be130);
    fn_00190d50(*(undefined4 *)(param_1 + 0xfc),&DAT_003be130);
    fn_00190d50(*(undefined4 *)(param_1 + 0x100),&DAT_003be130);
    fn_00190d50(*(undefined4 *)(param_1 + 0x104),&DAT_003be130);
    fn_00190d50(*(undefined4 *)(param_1 + 0x108),&DAT_003be130);
    return;
  }
  iVar3 = (int)*(short *)(iVar1 + 0x546);
  iVar1 = (int)*(short *)(iVar1 + 0x2c);
  if (iVar1 != iVar3 && iVar3 <= iVar1) {
    unaff_r6 = 2;
  }
  if (iVar1 < iVar3) {
    unaff_r6 = 1;
  }
  if (iVar1 == iVar3) {
    unaff_r6 = 0;
  }
  fn_00688c04(iVar4,iVar3,0);
  fn_0068b174(&local_18,unaff_r6);
  *(undefined4 *)(iVar4 + 0xac) = local_18;
  *(undefined4 *)(iVar4 + 0xb0) = local_18;
  iVar3 = *(int *)(param_1 + 0xe0);
  iVar4 = (int)*(short *)(*(int *)(param_1 + 0x98) + 0x548);
  iVar1 = (int)*(short *)(*(int *)(param_1 + 0x98) + 0x32);
  if (iVar1 != iVar4 && iVar4 <= iVar1) {
    unaff_r6 = 2;
  }
  if (iVar1 < iVar4) {
    unaff_r6 = 1;
  }
  if (iVar1 == iVar4) {
    unaff_r6 = 0;
  }
  fn_00688c04(iVar3,iVar4,0);
  fn_0068b174(&local_18,unaff_r6);
  *(undefined4 *)(iVar3 + 0xac) = local_18;
  *(undefined4 *)(iVar3 + 0xb0) = local_18;
  iVar3 = *(int *)(param_1 + 0xe4);
  iVar4 = (int)*(short *)(*(int *)(param_1 + 0x98) + 0x54a);
  iVar1 = (int)*(short *)(*(int *)(param_1 + 0x98) + 0x36);
  if (iVar1 != iVar4 && iVar4 <= iVar1) {
    unaff_r6 = 2;
  }
  if (iVar1 < iVar4) {
    unaff_r6 = 1;
  }
  if (iVar1 == iVar4) {
    unaff_r6 = 0;
  }
  fn_00688c04(iVar3,iVar4,0);
  fn_0068b174(&local_18,unaff_r6);
  *(undefined4 *)(iVar3 + 0xac) = local_18;
  *(undefined4 *)(iVar3 + 0xb0) = local_18;
  iVar3 = *(int *)(param_1 + 0xe8);
  iVar4 = (int)*(short *)(*(int *)(param_1 + 0x98) + 0x54c);
  iVar1 = (int)*(short *)(*(int *)(param_1 + 0x98) + 0x3a);
  if (iVar1 != iVar4 && iVar4 <= iVar1) {
    unaff_r6 = 2;
  }
  if (iVar1 < iVar4) {
    unaff_r6 = 1;
  }
  if (iVar1 == iVar4) {
    unaff_r6 = 0;
  }
  fn_00688c04(iVar3,iVar4,0);
  fn_0068b174(&local_18,unaff_r6);
  *(undefined4 *)(iVar3 + 0xac) = local_18;
  *(undefined4 *)(iVar3 + 0xb0) = local_18;
  iVar3 = *(int *)(param_1 + 0xec);
  iVar4 = (int)*(short *)(*(int *)(param_1 + 0x98) + 0x54e);
  iVar1 = (int)*(short *)(*(int *)(param_1 + 0x98) + 0x3e);
  if (iVar1 != iVar4 && iVar4 <= iVar1) {
    unaff_r6 = 2;
  }
  if (iVar1 < iVar4) {
    unaff_r6 = 1;
  }
  if (iVar1 == iVar4) {
    unaff_r6 = 0;
  }
  fn_00688c04(iVar3,iVar4,0);
  fn_0068b174(&local_18,unaff_r6);
  *(undefined4 *)(iVar3 + 0xac) = local_18;
  *(undefined4 *)(iVar3 + 0xb0) = local_18;
  iVar3 = *(int *)(param_1 + 0xf0);
  iVar4 = (int)*(short *)(*(int *)(param_1 + 0x98) + 0x550);
  iVar1 = (int)*(short *)(*(int *)(param_1 + 0x98) + 0x42);
  if (iVar1 != iVar4 && iVar4 <= iVar1) {
    unaff_r6 = 2;
  }
  if (iVar1 < iVar4) {
    unaff_r6 = 1;
  }
  if (iVar1 == iVar4) {
    unaff_r6 = 0;
  }
  fn_00688c04(iVar3,iVar4,0);
  fn_0068b174(&local_18,unaff_r6);
  *(undefined4 *)(iVar3 + 0xac) = local_18;
  *(undefined4 *)(iVar3 + 0xb0) = local_18;
  iVar3 = (int)*(short *)(*(int *)(param_1 + 0x98) + 0x2c);
  iVar4 = (int)*(short *)(*(int *)(param_1 + 0x98) + 0x546);
  iVar1 = iVar4;
  if (iVar3 != iVar4 && iVar4 <= iVar3) {
    iVar1 = 2;
  }
  if (iVar3 < iVar4) {
    iVar1 = 1;
  }
  if (iVar3 == iVar4) {
    iVar1 = 0;
  }
  uVar2 = fn_00230bcc(iVar1,0);
  fn_00190d50(*(undefined4 *)(param_1 + 0xf4),uVar2);
  iVar3 = (int)*(short *)(*(int *)(param_1 + 0x98) + 0x32);
  iVar4 = (int)*(short *)(*(int *)(param_1 + 0x98) + 0x548);
  iVar1 = iVar4;
  if (iVar3 != iVar4 && iVar4 <= iVar3) {
    iVar1 = 2;
  }
  if (iVar3 < iVar4) {
    iVar1 = 1;
  }
  if (iVar3 == iVar4) {
    iVar1 = 0;
  }
  uVar2 = fn_00230bcc(iVar1,0);
  fn_00190d50(*(undefined4 *)(param_1 + 0xf8),uVar2);
  iVar3 = (int)*(short *)(*(int *)(param_1 + 0x98) + 0x36);
  iVar4 = (int)*(short *)(*(int *)(param_1 + 0x98) + 0x54a);
  iVar1 = iVar4;
  if (iVar3 != iVar4 && iVar4 <= iVar3) {
    iVar1 = 2;
  }
  if (iVar3 < iVar4) {
    iVar1 = 1;
  }
  if (iVar3 == iVar4) {
    iVar1 = 0;
  }
  uVar2 = fn_00230bcc(iVar1,0);
  fn_00190d50(*(undefined4 *)(param_1 + 0xfc),uVar2);
  iVar3 = (int)*(short *)(*(int *)(param_1 + 0x98) + 0x3a);
  iVar4 = (int)*(short *)(*(int *)(param_1 + 0x98) + 0x54c);
  iVar1 = iVar4;
  if (iVar3 != iVar4 && iVar4 <= iVar3) {
    iVar1 = 2;
  }
  if (iVar3 < iVar4) {
    iVar1 = 1;
  }
  if (iVar3 == iVar4) {
    iVar1 = 0;
  }
  uVar2 = fn_00230bcc(iVar1,0);
  fn_00190d50(*(undefined4 *)(param_1 + 0x100),uVar2);
  iVar3 = (int)*(short *)(*(int *)(param_1 + 0x98) + 0x3e);
  iVar4 = (int)*(short *)(*(int *)(param_1 + 0x98) + 0x54e);
  iVar1 = iVar4;
  if (iVar3 != iVar4 && iVar4 <= iVar3) {
    iVar1 = 2;
  }
  if (iVar3 < iVar4) {
    iVar1 = 1;
  }
  if (iVar3 == iVar4) {
    iVar1 = 0;
  }
  uVar2 = fn_00230bcc(iVar1,0);
  fn_00190d50(*(undefined4 *)(param_1 + 0x104),uVar2);
  iVar3 = (int)*(short *)(*(int *)(param_1 + 0x98) + 0x42);
  iVar4 = (int)*(short *)(*(int *)(param_1 + 0x98) + 0x550);
  iVar1 = iVar4;
  if (iVar3 != iVar4 && iVar4 <= iVar3) {
    iVar1 = 2;
  }
  if (iVar3 < iVar4) {
    iVar1 = 1;
  }
  if (iVar3 == iVar4) {
    iVar1 = 0;
  }
  uVar2 = fn_00230bcc(iVar1,0);
  fn_00190d50(*(undefined4 *)(param_1 + 0x108),uVar2);
  return;
}


