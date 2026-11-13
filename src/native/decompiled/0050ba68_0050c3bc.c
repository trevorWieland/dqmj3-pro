#include "0050ba68_0050c3bc.h"



undefined4 fn_0050c3bc(int *param_1,undefined4 param_2)

{
  longlong lVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_620 [1528];
  uint local_28;
  int iStack_24;
  
  local_28 = 0;
  iStack_24 = 0;
  fn_004f01f4(&local_28);
  fn_004edc34(param_1 + 9);
  iVar5 = param_1[7];
  iVar7 = param_1[8];
  fn_004edc70(param_1 + 9);
  uVar2 = fn_006575c0(param_1 + 0xc);
  lVar1 = (ulonglong)(uint)(iVar7 - iVar5) * (ulonglong)uVar2;
  iVar7 = (int)((ulonglong)lVar1 >> 0x20);
  uVar6 = iVar5 + iVar7;
  puVar3 = (uint *)fn_004f0ce8(iVar7,(int)lVar1);
  lVar1 = (ulonglong)uVar6 * (ulonglong)*puVar3;
  uVar2 = (uint)lVar1;
  bVar9 = CARRY4(local_28,uVar2);
  iVar8 = local_28 + uVar2;
  iVar7 = iStack_24 +
          *puVar3 * ((int)uVar6 >> 0x1f) + puVar3[1] * uVar6 + (int)((ulonglong)lVar1 >> 0x20);
  iVar5 = fn_004f0700(auStack_620);
  *(int *)(iVar5 + 0x5f0) = iVar8;
  *(uint *)(iVar5 + 0x5f4) = iVar7 + (uint)bVar9;
  bVar9 = false;
  fn_004f06f4(iVar5,param_2);
  iVar7 = param_1[3];
  iVar8 = param_1[1];
  if (iVar7 < iVar8) {
    param_1[3] = iVar7 + 1;
    iVar7 = iVar7 + param_1[2];
    if (iVar8 <= iVar7) {
      iVar7 = iVar7 - iVar8;
    }
    iVar7 = *param_1 + iVar7 * 0x5f8;
    fn_004f06f4(iVar7,iVar5);
    uVar4 = *(undefined4 *)(iVar5 + 0x5f4);
    bVar9 = true;
    *(undefined4 *)(iVar7 + 0x5f0) = *(undefined4 *)(iVar5 + 0x5f0);
    *(undefined4 *)(iVar7 + 0x5f4) = uVar4;
  }
  fn_004f0788(auStack_620);
  if (bVar9) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0xd861482c;
  }
  return uVar4;
}



void fn_0050c2e8(int *param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  if (param_2 != 0) {
    uVar1 = fn_004ed2e8();
    iVar2 = fn_00656e14(param_2 * 0x5f8,uVar1);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      uVar4 = 0;
      if (param_2 != 0) {
        do {
          if (iVar2 + uVar4 * 0x5f8 != 0) {
            iVar3 = fn_004f0700();
            *(undefined4 *)(iVar3 + 0x5f0) = 0;
            *(undefined4 *)(iVar3 + 0x5f4) = 0;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < param_2);
      }
    }
    param_1[4] = iVar2;
    if (((iVar2 - 0x100000U < 0x3ff00000) && (0 < (int)param_2)) && (iVar2 != 0)) {
      *param_1 = iVar2;
      param_1[3] = 0;
      param_1[1] = param_2;
      param_1[2] = 0;
    }
  }
  return;
}



longlong fn_0050c0f4(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint extraout_r1;
  int iVar4;
  uint local_20;
  uint uStack_1c;
  
  puVar2 = &DAT_008c0630;
  if (0x3fefffff < param_2 - 0x100000U) {
    if (DAT_008c0630 != 0) {
      puVar2 = (undefined4 *)0x8;
    }
    return CONCAT44(puVar2,0xe0e14826);
  }
  uVar3 = param_1[5] - 0x100000;
  if (0x3fefffff < uVar3) {
    if (DAT_008c0630 != 0) {
      uVar3 = 8;
    }
    return CONCAT44(uVar3,&DAT_e0a14827);
  }
  if (param_1[3] != 0) {
    local_20 = 0;
    uStack_1c = 0;
    fn_004f01f4(&local_20);
    uVar3 = param_1[3];
    if ((int)uVar3 < 1) {
      iVar1 = *param_1;
    }
    else {
      iVar1 = param_1[2];
      if (param_1[1] <= iVar1) {
        iVar1 = iVar1 - param_1[1];
      }
      iVar1 = *param_1 + iVar1 * 0x5f8;
    }
    iVar4 = *(uint *)(iVar1 + 0x5f0) - local_20;
    if (*(uint *)(iVar1 + 0x5f4) <= uStack_1c &&
        (uint)(local_20 <= *(uint *)(iVar1 + 0x5f0)) <= *(uint *)(iVar1 + 0x5f4) - uStack_1c) {
      if ((int)uVar3 < 1) {
        iVar1 = *param_1;
      }
      else {
        iVar1 = param_1[2];
        if (param_1[1] <= iVar1) {
          iVar1 = iVar1 - param_1[1];
        }
        iVar4 = iVar1 * 0x3f;
        iVar1 = *param_1 + iVar1 * 0x5f8;
      }
      fn_004f06f4(param_2,iVar1,iVar4);
      uVar3 = extraout_r1;
      if (0 < param_1[3]) {
        uVar3 = param_1[2] + 1;
        param_1[2] = uVar3;
        if (param_1[1] <= (int)uVar3) {
          param_1[2] = 0;
        }
        param_1[3] = param_1[3] + -1;
      }
      return (ulonglong)uVar3 << 0x20;
    }
  }
  return CONCAT44(uVar3,0xd1614828);
}



void fn_0050be34(undefined4 *param_1)

{
  *param_1 = 1000;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



uint fn_0050bd40(uint *param_1,uint param_2,uint *param_3)

{
  longlong lVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  iVar2 = DAT_008bf4cc;
  if ((char)param_1[1] != '\0') {
    iVar8 = *(int *)(DAT_008bf4cc + 0xa4);
    if (iVar8 - 0x100000U < 0x3ff00000) {
      uVar9 = *param_1;
      puVar3 = (uint *)fn_004f0ce8();
      lVar1 = (ulonglong)uVar9 * (ulonglong)*puVar3;
      uVar4 = (uint)lVar1;
      uVar6 = *param_3;
      uVar11 = param_3[1] -
               (*puVar3 * ((int)uVar9 >> 0x1f) + puVar3[1] * uVar9 + (int)((ulonglong)lVar1 >> 0x20)
               + (uint)(uVar6 < uVar4));
      uVar9 = 0;
      for (piVar5 = (int *)(iVar2 + 0x3c);
          piVar5 != (int *)(iVar2 + *(int *)(iVar2 + 0x38) * 4 + 0x3c); piVar5 = piVar5 + 1) {
        iVar7 = *piVar5;
        if (((iVar7 != iVar8) && (*(char *)(iVar7 + 0x20) == '\x05')) &&
           (*(byte *)(iVar7 + 0x14) < 0xc)) {
          uVar10 = 1 << (uint)*(byte *)(iVar7 + 0x14);
          if ((param_2 & uVar10) == 0) {
            if (*(uint *)(iVar7 + 0x5c) <= uVar11 &&
                (uint)(uVar6 - uVar4 <= *(uint *)(iVar7 + 0x58)) <= *(uint *)(iVar7 + 0x5c) - uVar11
               ) {
              uVar9 = uVar9 | uVar10;
            }
          }
          else {
            uVar10 = param_3[1];
            *(uint *)(iVar7 + 0x58) = *param_3;
            *(uint *)(iVar7 + 0x5c) = uVar10;
          }
        }
      }
      return uVar9;
    }
  }
  return 0;
}



undefined4 fn_0050bd1c(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 < 0) {
    uVar1 = 0xe0e14826;
  }
  else {
    *(int *)(*(int *)(param_1 + 0x2c) + 0x15c) = param_2;
    uVar1 = 0;
  }
  return uVar1;
}



undefined1 * fn_0050bcd0(int param_1)

{
  undefined1 *puVar1;
  
  if (*(char *)(param_1 + 8) == '\0') {
    puVar1 = &DAT_e0a1482b;
  }
  else if (*(char *)(param_1 + 9) == '\0') {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined1 *)(param_1 + 9) = 1;
    puVar1 = (undefined1 *)0x0;
  }
  else {
    puVar1 = &DAT_e0a14827;
  }
  return puVar1;
}



undefined1 * fn_0050bc68(int param_1,int param_2,uint param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  
  if (param_3 < 0xc) {
    if (*(char *)(param_1 + 8) == '\0') {
      puVar1 = &DAT_e0a1482b;
    }
    else if (*(char *)(param_1 + 9) == '\0') {
      puVar1 = &DAT_e0a14827;
    }
    else {
      uVar2 = 1 << (param_3 & 0xff);
      if (param_2 == 0) {
        uVar2 = *(uint *)(param_1 + 4) & ~uVar2;
      }
      else {
        uVar2 = uVar2 | *(uint *)(param_1 + 4);
      }
      *(uint *)(param_1 + 4) = uVar2;
      puVar1 = (undefined1 *)0x0;
    }
  }
  else {
    puVar1 = (undefined1 *)0xe0e14826;
  }
  return puVar1;
}



void fn_0050bc40(void)

{
  if (DAT_008c0670 != 0) {
    fn_004ecfd0();
    DAT_008c0670 = 0;
  }
  return;
}



undefined8 fn_0050baa4(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(char *)(param_1 + 8) == '\0') {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined1 *)(param_1 + 8) = 1;
    *(undefined1 *)(param_1 + 9) = 0;
    return 0;
  }
  if (DAT_008c0630 != 0) {
    uVar1 = 8;
  }
  return CONCAT44(uVar1,&DAT_e0a14821);
}



void fn_0050ba68(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  fn_00102cc8(&DAT_008f2b30,param_1,&uStack_c);
  if (DAT_008c3610 != (code *)0x0) {
    (*DAT_008c3610)(&DAT_008f2b30);
  }
  return;
}


