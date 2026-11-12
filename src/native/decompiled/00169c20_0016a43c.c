#include "00169c20_0016a43c.h"



undefined4 fn_0016a43c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00183970(param_1,*(undefined4 *)(param_1 + 0x38),param_1 + 0x38,param_2);
  if (*(int *)(iVar1 + 0x18) != 0) {
    if (*(int *)(iVar1 + 0xc) == 0) {
      uVar2 = fn_0017a088(*(undefined4 *)(param_1 + 0x78));
      *(undefined4 *)(iVar1 + 0x18) = uVar2;
    }
    else {
      uVar2 = fn_0017a088(*(undefined4 *)(param_1 + 0x7c));
      *(undefined4 *)(iVar1 + 0x18) = uVar2;
    }
  }
  fn_0017d90c(param_1 + 0x34,iVar1 + 0x1c);
  if (*(char *)(iVar1 + 4) == '\x01') {
    if (*(int **)(iVar1 + 0x10) != (int *)0x0) {
      (**(code **)(**(int **)(iVar1 + 0x10) + 8))();
    }
    *(undefined4 *)(iVar1 + 0x10) = 0;
  }
  if (iVar1 != 0) {
    iVar1 = fn_002fedf4(iVar1 + 0x14);
    fn_002feef8(iVar1 + -0x14);
  }
  return 1;
}



int fn_0016a318(int param_1,int *param_2,undefined4 param_3,int param_4,int param_5,int param_6,
                undefined1 param_7)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  (**(code **)(*param_2 + 0x34))(param_2,*(undefined4 *)(param_1 + 0x70));
  iVar3 = 0;
  piVar1 = *(int **)(param_1 + 0x38);
  while (piVar1 != (int *)(param_1 + 0x38)) {
    if (piVar1[-7] == iVar3) {
      iVar3 = iVar3 + 1;
      piVar1 = *(int **)(param_1 + 0x38);
    }
    else {
      piVar1 = (int *)*piVar1;
    }
  }
  piVar1 = (int *)fn_00145b00(0x24,&DAT_00812c8c);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1[5] = (int)&DAT_008f9d04;
    piVar1[7] = 0;
    piVar1[8] = 0;
  }
  *piVar1 = iVar3;
  *(undefined1 *)(piVar1 + 1) = param_7;
  piVar1[3] = param_4;
  piVar1[2] = param_6;
  piVar1[4] = (int)param_2;
  *(char *)((int)piVar1 + 5) = (char)param_5;
  fn_001008cc(piVar1 + 5,param_3);
  if (param_5 == 0) {
    piVar1[6] = 0;
  }
  else if (param_4 == 0) {
    iVar2 = fn_0016aae0(*(undefined4 *)(param_1 + 0x78),piVar1[4],piVar1[2]);
    piVar1[6] = iVar2;
  }
  else {
    iVar2 = fn_0016aae0(*(undefined4 *)(param_1 + 0x7c),piVar1[4],piVar1[2]);
    piVar1[6] = iVar2;
  }
  fn_0017d948(param_1 + 0x34,param_1 + 0x38,piVar1 + 7);
  return iVar3;
}



undefined4 *
fn_0016a2c0(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int *param_7)

{
  param_1[6] = 0;
  *param_1 = param_2;
  param_1[7] = 0;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = param_6;
  param_1[5] = param_7;
  if (param_3 != 0) {
    (**(code **)(*param_7 + 0x10))(param_7);
  }
  return param_1;
}



undefined4
fn_0016a054(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined1 param_6,undefined1 param_7)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_230 [8];
  uint local_228;
  int *local_224;
  undefined1 auStack_220 [84];
  undefined4 uStack_1cc;
  uint local_1c8;
  int local_1c4;
  uint local_30;
  int *local_2c;
  
  local_228 = 0x1000001;
  local_224 = (int *)0x0;
  iVar1 = fn_00182750(auStack_220);
  *(undefined4 *)(iVar1 + 0x54) = 0;
  *(undefined4 *)(iVar1 + 0x58) = 0;
  *(int *)(iVar1 + 0x1e8) = param_1;
  *(undefined4 *)(iVar1 + 0x5c) = 0;
  fn_001808e4(iVar1,*(undefined4 *)(param_1 + 0x8c),param_2,param_3,&LAB_001854dc,iVar1 + -0x10);
  local_2c = (int *)fn_0019ba68(*(undefined4 *)(param_1 + 0x8c),param_4,0xffffffff);
  local_30 = 0x8000010;
  if (local_2c == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    fn_00146590();
  }
  local_2c[1] = local_2c[1] + 1;
  fn_0019e864(iVar1 + -8,&local_30);
  if (((local_30 & 0x8000000) != 0) &&
     (iVar4 = local_2c[1], local_2c[1] = iVar4 + -1, iVar4 + -1 == 0)) {
    (**(code **)(*local_2c + 8))();
  }
  *(undefined1 *)(iVar1 + 0x48) = param_7;
  *(undefined1 *)(iVar1 + 0x49) = param_6;
  *(undefined4 *)(iVar1 + 0x60) = 0;
  uVar2 = fn_00178fb8(auStack_230,param_5);
  if (local_1c4 != 0) {
    for (uVar3 = 0; uVar3 < local_1c8; uVar3 = uVar3 + 1) {
    }
    fn_0019d680(uStack_1cc,local_1c4 << 3);
  }
  fn_00182764(auStack_220);
  if (((local_228 & 0x8000000) != 0) &&
     (iVar1 = local_224[1], local_224[1] = iVar1 + -1, iVar1 + -1 == 0)) {
    (**(code **)(*local_224 + 8))();
  }
  return uVar2;
}



void fn_00169f4c(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint *puVar3;
  undefined4 uVar4;
  
  if (DAT_008bf604 != (undefined4 *)0x0) {
LAB_00169f6c:
    do {
      iVar2 = DAT_008bf5f8;
      if (DAT_008bf604 != (undefined4 *)0x0) {
        iVar2 = fn_00184c50();
        if (iVar2 != 0) goto LAB_00169f6c;
        if (DAT_008bf604 == (undefined4 *)0x0) {
          puVar3 = &DAT_008bf600;
        }
        else {
          puVar3 = DAT_008bf604 + 0x31;
        }
        if ((*puVar3 & 4) != 0) break;
        if (DAT_008bf604 == (undefined4 *)0x0) {
          puVar3 = &DAT_008bf600;
        }
        else {
          puVar3 = DAT_008bf604 + 0x31;
        }
        if ((*puVar3 & 8) != 0) break;
        iVar2 = DAT_008bf604[0x32];
      }
    } while (iVar2 == 10);
    puVar1 = DAT_008bf604;
    DAT_008bf5f8 = fn_001851bc();
    if (DAT_008bf604 != (undefined4 *)0x0) {
      DAT_008bf5fc = DAT_008bf604[0x33];
    }
    DAT_008bf600 = puVar1[0x31];
    iVar2 = fn_00178410();
    if (iVar2 != 0) {
      fn_001783bc();
    }
    fn_001785e4();
    fn_00178444(0);
    fn_00178604();
    uVar4 = *puVar1;
    fn_0017cb50(uVar4);
    fn_0014e6e4(uVar4);
    DAT_008bf604 = (undefined4 *)0x0;
  }
  return;
}



ulonglong fn_00169c20(uint param_1,uint param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  ulonglong uVar13;
  
  bVar11 = param_4 == 0;
  if (bVar11) {
    uVar9 = param_3;
  }
  else {
    uVar9 = param_4;
  }
  uVar10 = LZCOUNT(uVar9);
  uVar9 = uVar9 << uVar10 + 1;
  uVar5 = 0;
  if (!bVar11) {
    uVar10 = 0x3f - uVar10;
    bVar11 = uVar10 == 0;
    uVar5 = uVar10;
  }
  if (bVar11) {
    uVar10 = 0x1f - uVar10;
    uVar5 = uVar10;
  }
  if ((int)uVar5 < 0) {
    uVar13 = fn_00166a94(0,0,param_1,param_2,param_1,param_2);
    return uVar13;
  }
  if (param_2 == 0) {
    iVar4 = LZCOUNT(param_1);
    bVar11 = true;
  }
  else {
    iVar4 = 0x3f - LZCOUNT(param_2);
    bVar11 = iVar4 == 0;
  }
  if (bVar11) {
    iVar4 = 0x1f - iVar4;
  }
  uVar5 = iVar4 - uVar10;
  if ((int)uVar5 < 0) {
    return 0;
  }
  if (-1 < (int)(4 - uVar5)) {
    uVar10 = 0;
    uVar9 = param_4 << (uVar5 & 0xff) | param_3 >> (0x20 - uVar5 & 0xff);
    param_3 = param_3 << (uVar5 & 0xff);
    while( true ) {
      bVar12 = param_3 <= param_1;
      bVar11 = param_2 - uVar9 < (uint)bVar12;
      uVar10 = uVar10 * 2 + (uint)(uVar9 < param_2 || bVar11);
      if (uVar9 < param_2 || bVar11) {
        param_1 = param_1 - param_3;
        param_2 = param_2 - (uVar9 + !bVar12);
      }
      bVar11 = uVar5 == 0;
      uVar5 = uVar5 - 1;
      if (bVar11) break;
      bVar2 = (byte)uVar9;
      uVar9 = uVar9 >> 1;
      param_3 = (uint)(bVar2 & 1) << 0x1f | param_3 >> 1;
    }
    return (ulonglong)uVar10;
  }
  if ((int)(uVar10 - 0x20) < 5) {
    uVar9 = uVar9 | param_3 >> (uVar10 - 0x20 & 0xff);
  }
  uVar5 = *(uint *)(&DAT_00169ed0 + (uVar9 >> 0x1c) * 4);
  uVar9 = uVar10;
  if (0x1f < uVar10) {
    uVar9 = uVar10 - 0x20;
  }
  uVar6 = 0x20 - uVar9;
  if (uVar10 < 0x20) {
    uVar10 = (uint)((ulonglong)param_3 * (ulonglong)uVar5);
    uVar5 = uVar5 + (int)((ulonglong)
                          -(((int)((ulonglong)param_3 * (ulonglong)uVar5 >> 0x20) << (uVar6 & 0xff)
                            | uVar10 >> (uVar9 & 0xff)) + (uint)(uVar10 << (uVar6 & 0xff) != 0)) *
                          (ulonglong)uVar5 >> 0x20);
    uVar10 = (uint)((ulonglong)param_3 * (ulonglong)uVar5);
    uVar5 = uVar5 + (int)((ulonglong)
                          -(((int)((ulonglong)param_3 * (ulonglong)uVar5 >> 0x20) << (uVar6 & 0xff)
                            | uVar10 >> (uVar9 & 0xff)) + (uint)(uVar10 << (uVar6 & 0xff) != 0)) *
                          (ulonglong)uVar5 >> 0x20);
    if (param_2 != 0) {
      uVar10 = (uint)((ulonglong)param_3 * (ulonglong)uVar5);
      uVar5 = uVar5 + (int)((ulonglong)
                            -(((int)((ulonglong)param_3 * (ulonglong)uVar5 >> 0x20) <<
                               (uVar6 & 0xff) | uVar10 >> (uVar9 & 0xff)) +
                             (uint)(uVar10 << (uVar6 & 0xff) != 0)) * (ulonglong)uVar5 >> 0x20);
    }
    lVar1 = (ulonglong)param_2 * (ulonglong)uVar5 + ((ulonglong)param_1 * (ulonglong)uVar5 >> 0x20);
    uVar10 = (uint)((ulonglong)lVar1 >> 0x20);
    uVar3 = (uint)lVar1 >> (uVar9 & 0xff) | uVar10 << (uVar6 & 0xff);
    uVar7 = (uint)((ulonglong)param_3 * (ulonglong)uVar3);
    uVar10 = uVar10 >> (uVar9 & 0xff);
    uVar6 = param_1 - uVar7;
    param_2 = param_2 - (uVar10 * param_3 + (int)((ulonglong)param_3 * (ulonglong)uVar3 >> 0x20) +
                        (uint)(param_1 < uVar7));
    if (param_2 == 0 && uVar6 < param_3) {
      return CONCAT44(uVar10,uVar3);
    }
    lVar1 = (ulonglong)param_2 * (ulonglong)uVar5 + ((ulonglong)uVar6 * (ulonglong)uVar5 >> 0x20);
    uVar7 = (uint)((ulonglong)lVar1 >> 0x20);
    uVar8 = (uint)lVar1 >> (uVar9 & 0xff) | uVar7 << (0x20 - uVar9 & 0xff);
    uVar5 = uVar3 + uVar8;
    iVar4 = uVar10 + (uVar7 >> (uVar9 & 0xff)) + (uint)CARRY4(uVar3,uVar8);
    uVar6 = uVar6 - param_3 * uVar8;
    if (uVar6 < param_3) {
      return CONCAT44(iVar4,uVar5);
    }
    uVar6 = uVar6 - param_3;
    bVar11 = param_3 <= uVar6;
    if (bVar11) {
      uVar6 = uVar6 - param_3;
    }
    uVar9 = uVar5 + 1 + (uint)bVar11;
    return CONCAT44(iVar4 + (uint)(0xfffffffe < uVar5) + (uint)CARRY4(uVar5 + 1,(uint)bVar11) +
                    (uint)CARRY4(uVar9,(uint)(param_3 <= uVar6)),uVar9 + (param_3 <= uVar6));
  }
  lVar1 = (ulonglong)param_4 * (ulonglong)uVar5 + ((ulonglong)param_3 * (ulonglong)uVar5 >> 0x20);
  uVar10 = (uint)lVar1;
  uVar5 = uVar5 + (int)((ulonglong)
                        -(((int)((ulonglong)lVar1 >> 0x20) << (uVar6 & 0xff) |
                          uVar10 >> (uVar9 & 0xff)) + (uint)(uVar10 << (uVar6 & 0xff) != 0)) *
                        (ulonglong)uVar5 >> 0x20);
  lVar1 = (ulonglong)param_4 * (ulonglong)uVar5 + ((ulonglong)param_3 * (ulonglong)uVar5 >> 0x20);
  uVar10 = (uint)lVar1;
  uVar3 = (uVar5 + (int)((ulonglong)
                         -(((int)((ulonglong)lVar1 >> 0x20) << (uVar6 & 0xff) |
                           uVar10 >> (uVar9 & 0xff)) + (uint)(uVar10 << (uVar6 & 0xff) != 0)) *
                         (ulonglong)uVar5 >> 0x20)) - 1;
  uVar5 = (uint)((ulonglong)param_2 * (ulonglong)uVar3 +
                 ((ulonglong)param_1 * (ulonglong)uVar3 >> 0x20) >> 0x20) >> (uVar9 & 0xff);
  uVar6 = (uint)((ulonglong)param_3 * (ulonglong)uVar5);
  uVar10 = param_1 - uVar6;
  param_2 = param_2 - (uVar5 * param_4 + (int)((ulonglong)param_3 * (ulonglong)uVar5 >> 0x20) +
                      (uint)(param_1 < uVar6));
  bVar11 = param_4 <= param_2;
  if (param_2 == param_4) {
    bVar11 = param_3 <= uVar10;
  }
  if (!bVar11) {
    return (ulonglong)uVar5;
  }
  uVar9 = (uint)((ulonglong)param_2 * (ulonglong)uVar3 +
                 ((ulonglong)uVar10 * (ulonglong)uVar3 >> 0x20) >> 0x20) >> (uVar9 & 0xff);
  uVar6 = (uint)((ulonglong)param_3 * (ulonglong)uVar9);
  param_2 = param_2 - (uVar9 * param_4 + (int)((ulonglong)param_3 * (ulonglong)uVar9 >> 0x20) +
                      (uint)(uVar10 < uVar6));
  bVar11 = param_4 <= param_2;
  if (param_2 == param_4) {
    bVar11 = param_3 <= uVar10 - uVar6;
  }
  if (bVar11) {
    return (ulonglong)(uVar5 + uVar9 + 1);
  }
  return (ulonglong)(uVar5 + uVar9);
}


