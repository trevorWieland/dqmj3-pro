#include "single_00435fa0_r.h"


extern undefined4 DAT_008cbef4_2;
extern undefined4 DAT_008cbee8_2;
extern undefined4 DAT_008cbedc_2;
extern undefined4 DAT_008cbed0_2;
extern undefined4 DAT_008cbec4_2;

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_00435fa0(int *param_1)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint unaff_r9;
  
  param_1[0x12e] = 0;
  param_1[0x12f] = 0;
  param_1[0x130] = 0;
  param_1[0x131] = 0;
  param_1[0x132] = 0;
  iVar8 = *param_1;
  uVar7 = 1;
  do {
    uVar6 = uVar7 & 0xff;
    uVar3 = fn_006f4a50(iVar8,uVar6);
    if (((uVar3 != 0) || (*(char *)(iVar8 + uVar6) != '\0')) &&
       (iVar4 = fn_0036fc38(uVar6), iVar4 != 0)) {
      cVar1 = *(char *)(iVar8 + uVar6);
      uVar5 = param_1[0x12e];
      cVar2 = *(char *)(iVar8 + uVar6 + 0x61);
      if (uVar5 < 100) {
        param_1[uVar5 * 3 + 2] = uVar6 << 8 | (uint)(uVar3 < 2) | unaff_r9 & 0xffff0000;
        param_1[uVar5 * 3 + 3] = (int)cVar1;
        param_1[uVar5 * 3 + 4] = (int)cVar2;
        param_1[0x12e] = param_1[0x12e] + 1;
      }
    }
    uVar7 = uVar7 + 1;
  } while ((int)uVar7 < 0x61);
  iVar4 = fn_006f4a50(iVar8,0x18);
  if ((iVar4 != 0) && (iVar8 = fn_006f4a50(iVar8,0x5b), iVar8 != 0)) {
    fn_00435b78(param_1,0x5b);
  }
  if (param_1[1] != 0) {
    iVar8 = fn_006f2f70(param_1[1],0x9f);
    if (iVar8 != 0) {
      fn_00435b78(param_1,0x1e);
      fn_00435b78(param_1,0x20);
      if (((DAT_008954dc & 1) == 0) && (iVar8 = fn_00303afc(&DAT_008954dc), iVar8 != 0)) {
        _DAT_008cbec4 = CONCAT22(DAT_008cbec4_2,0x1e01);
        DAT_008cbec8 = 1;
        DAT_008cbecc = 0;
      }
      iVar4 = DAT_008cbecc;
      iVar8 = DAT_008cbec8;
      uVar7 = param_1[0x12e];
      if (uVar7 < 100) {
        param_1[uVar7 * 3 + 2] = _DAT_008cbec4;
        param_1[uVar7 * 3 + 3] = iVar8;
        param_1[uVar7 * 3 + 4] = iVar4;
        param_1[0x12e] = param_1[0x12e] + 1;
      }
    }
    iVar8 = fn_006f2f70(param_1[1],0x9e);
    if (iVar8 != 0) {
      fn_00435b78(param_1,0x1f);
      fn_00435b78(param_1,0x21);
      if (((DAT_008954e0 & 1) == 0) && (iVar8 = fn_00303afc(&DAT_008954e0), iVar8 != 0)) {
        _DAT_008cbed0 = CONCAT22(DAT_008cbed0_2,0x1f01);
        DAT_008cbed4 = 1;
        DAT_008cbed8 = 0;
      }
      iVar4 = DAT_008cbed8;
      iVar8 = DAT_008cbed4;
      uVar7 = param_1[0x12e];
      if (uVar7 < 100) {
        param_1[uVar7 * 3 + 2] = _DAT_008cbed0;
        param_1[uVar7 * 3 + 3] = iVar8;
        param_1[uVar7 * 3 + 4] = iVar4;
        param_1[0x12e] = param_1[0x12e] + 1;
      }
    }
    iVar8 = fn_006f2f70(param_1[1],0x1bd);
    if (iVar8 != 0) {
      fn_00435b78(param_1,0x23);
      if (((DAT_008954e4 & 1) == 0) && (iVar8 = fn_00303afc(&DAT_008954e4), iVar8 != 0)) {
        _DAT_008cbedc = CONCAT22(DAT_008cbedc_2,0x5c01);
        DAT_008cbee0 = 1;
        DAT_008cbee4 = 0;
      }
      iVar4 = DAT_008cbee4;
      iVar8 = DAT_008cbee0;
      uVar7 = param_1[0x12e];
      if (uVar7 < 100) {
        param_1[uVar7 * 3 + 2] = _DAT_008cbedc;
        param_1[uVar7 * 3 + 3] = iVar8;
        param_1[uVar7 * 3 + 4] = iVar4;
        param_1[0x12e] = param_1[0x12e] + 1;
      }
    }
    iVar8 = fn_006f2f70(param_1[1],0x1be);
    if (iVar8 != 0) {
      fn_00435b78(param_1,0x24);
      if (((DAT_008954e8 & 1) == 0) && (iVar8 = fn_00303afc(&DAT_008954e8), iVar8 != 0)) {
        _DAT_008cbee8 = CONCAT22(DAT_008cbee8_2,0x5d01);
        DAT_008cbeec = 1;
        DAT_008cbef0 = 0;
      }
      iVar4 = DAT_008cbef0;
      iVar8 = DAT_008cbeec;
      uVar7 = param_1[0x12e];
      if (uVar7 < 100) {
        param_1[uVar7 * 3 + 2] = _DAT_008cbee8;
        param_1[uVar7 * 3 + 3] = iVar8;
        param_1[uVar7 * 3 + 4] = iVar4;
        param_1[0x12e] = param_1[0x12e] + 1;
      }
    }
    iVar8 = fn_006f2f70(param_1[1],0x1bf);
    if (iVar8 != 0) {
      fn_00435b78(param_1,0x22);
      if (((DAT_008954ec & 1) == 0) && (iVar8 = fn_00303afc(&DAT_008954ec), iVar8 != 0)) {
        _DAT_008cbef4 = CONCAT22(DAT_008cbef4_2,0x5e01);
        DAT_008cbef8 = 1;
        DAT_008cbefc = 0;
      }
      iVar4 = DAT_008cbefc;
      iVar8 = DAT_008cbef8;
      uVar7 = param_1[0x12e];
      if (uVar7 < 100) {
        param_1[uVar7 * 3 + 2] = _DAT_008cbef4;
        param_1[uVar7 * 3 + 3] = iVar8;
        param_1[uVar7 * 3 + 4] = iVar4;
        param_1[0x12e] = param_1[0x12e] + 1;
      }
    }
  }
  uVar7 = param_1[0x12e];
  if ((int)uVar7 < 1) {
    uVar3 = 0;
  }
  else {
    uVar3 = uVar7 & 1;
    uVar6 = 0;
    if (uVar3 != 0) {
      do {
        if (*(char *)((int)param_1 + uVar6 * 0xc + 9) == '\r') goto LAB_00436468;
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < (int)uVar3);
    }
  }
  while( true ) {
    uVar6 = uVar3;
    if ((int)uVar7 <= (int)uVar6) goto LAB_00436470;
    if (*(char *)((int)param_1 + uVar6 * 0xc + 9) == '\r') goto LAB_00436468;
    if (*(char *)((int)param_1 + uVar6 * 0xc + 0x15) == '\r') break;
    uVar3 = uVar6 + 2;
  }
  uVar6 = uVar6 + 1;
LAB_00436468:
  if ((int)uVar6 < 0) {
LAB_00436470:
    if ((int)uVar7 < 1) {
      uVar3 = 0;
    }
    else {
      uVar3 = uVar7 & 1;
      uVar6 = 0;
      if (uVar3 != 0) {
        do {
          if (*(char *)((int)param_1 + uVar6 * 0xc + 9) == '\x1b') goto LAB_004364f8;
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < (int)uVar3);
      }
    }
    while( true ) {
      uVar6 = uVar3;
      if ((int)uVar7 <= (int)uVar6) {
        return;
      }
      if (*(char *)((int)param_1 + uVar6 * 0xc + 9) == '\x1b') goto LAB_004364f8;
      if (*(char *)((int)param_1 + uVar6 * 0xc + 0x15) == '\x1b') break;
      uVar3 = uVar6 + 2;
    }
    uVar6 = uVar6 + 1;
LAB_004364f8:
    if ((int)uVar6 < 0) {
      return;
    }
  }
  fn_00435b78(param_1,0xc);
  return;
}


