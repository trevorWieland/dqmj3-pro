#include "0025e920_0025f0ec.h"



void fn_0025f0ec(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int extraout_r1;
  int iVar4;
  bool bVar5;
  
  iVar4 = *(int *)(param_1 + 200);
  if (iVar4 < 2) {
    if (*(int *)(param_1 + 0xe4) < 1) {
      iVar1 = *(int *)(param_1 + 0x3c);
    }
    else {
      iVar1 = fn_00300f74(*(int *)(param_1 + 0xe4),*(undefined4 *)(param_1 + 0x40));
    }
    if (iVar1 < 2) {
      return;
    }
  }
  iVar2 = *(int *)(param_1 + 0xcc);
  iVar3 = *(int *)(param_1 + 0x30);
  bVar5 = iVar2 == 0;
  iVar1 = iVar2;
  if (0 < iVar2) {
    iVar1 = iVar4 + -1;
    bVar5 = iVar4 == 1;
  }
  if (bVar5 || iVar1 < 0 != (0 < iVar2 && SBORROW4(iVar4,1))) {
    if (iVar3 < 1) {
      if (1 < iVar4) {
        *(undefined1 *)(param_1 + 0x49) = 1;
        if (*(char *)(param_1 + 0x45) == '\0') {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(param_1 + 0x40) + -1;
          iVar1 = *(int *)(param_1 + 0xe4);
          *(int *)(param_1 + 0xcc) = iVar4 + -1;
          if ((0 < iVar1) && (iVar1 <= (iVar4 + -1) * *(int *)(param_1 + 0x40) + iVar3)) {
            fn_00300f74(iVar1 + -1,*(int *)(param_1 + 0x40));
            iVar3 = extraout_r1;
          }
        }
      }
    }
    else if (1 < iVar4) {
      iVar3 = 0;
    }
  }
  else {
    *(int *)(param_1 + 0xcc) = iVar2 + -1;
    *(undefined1 *)(param_1 + 0x49) = 1;
  }
  *(int *)(param_1 + 0x30) = iVar3;
  fn_001c9ba0(param_1);
  if ((*(int *)(param_1 + 0xd0) == *(int *)(param_1 + 0xcc)) ||
     (*(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xcc), *(int *)(param_1 + 0x1c) == 0)) {
    return;
  }
  fn_0069e8c8(*(undefined4 *)(param_1 + 0xc));
  return;
}



void fn_0025ef8c(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  uint local_18;
  
  local_18 = param_4;
  if (*(int *)(param_1 + 200) < 2) {
    if (*(int *)(param_1 + 0xe4) < 1) {
      iVar2 = *(int *)(param_1 + 0x40);
    }
    else {
      iVar2 = fn_00300f74(*(int *)(param_1 + 0xe4),*(undefined4 *)(param_1 + 0x3c));
    }
    if (iVar2 < 2) {
      return;
    }
  }
  do {
    iVar2 = *(int *)(param_1 + 0x30);
    iVar3 = iVar2 + 1;
    if ((*(int *)(param_1 + 0xe4) < 1) ||
       (*(int *)(param_1 + 0xcc) * *(int *)(param_1 + 0x40) + iVar3 < *(int *)(param_1 + 0xe4))) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    iVar4 = *(int *)(param_1 + 0x40);
    if ((iVar4 <= iVar3) || (bVar6)) {
      *(undefined1 *)(param_1 + 0x4a) = 1;
      if ((iVar4 <= iVar3) || (bVar6)) {
        if (*(char *)(param_1 + 0x45) == '\0') {
          iVar3 = iVar2;
          if (!bVar6) {
            iVar3 = iVar4 + -1;
          }
        }
        else {
          iVar3 = 0;
        }
      }
      bVar6 = *(char *)(param_1 + 0x45) != '\0';
      if (bVar6) {
        iVar2 = *(int *)(param_1 + 200);
      }
      if ((bVar6 && 1 < iVar2) &&
         (iVar4 = *(int *)(param_1 + 0xcc) + 1, *(int *)(param_1 + 0xcc) = iVar4, iVar2 <= iVar4)) {
        *(undefined4 *)(param_1 + 0xcc) = 0;
      }
    }
    *(int *)(param_1 + 0x30) = iVar3;
    uVar5 = iVar3 * *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x2c);
    uVar1 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x50) >> 2;
    if (uVar1 <= uVar5) {
      fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,uVar5);
      local_18 = uVar1;
    }
    iVar2 = fn_00689c48(*(undefined4 *)(param_1 + 8),
                         *(undefined4 *)(*(int *)(param_1 + 0x50) + uVar5 * 4));
  } while (iVar2 != 0);
  fn_001c9ba0(param_1);
  if (*(int *)(param_1 + 0xd0) != *(int *)(param_1 + 0xcc)) {
    *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xcc);
    if (*(int *)(param_1 + 0x1c) != 0) {
      fn_0069e8c8(*(undefined4 *)(param_1 + 0xc),*(int *)(param_1 + 0x1c),0,local_18);
      return;
    }
  }
  return;
}



void fn_0025ee60(int param_1,undefined4 param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int extraout_r1;
  undefined *puVar4;
  bool bVar5;
  undefined *local_18;
  
  local_18 = param_4;
  if (*(int *)(param_1 + 200) < 2) {
    if (*(int *)(param_1 + 0xe4) < 1) {
      iVar2 = *(int *)(param_1 + 0x40);
    }
    else {
      iVar2 = fn_00300f74(*(int *)(param_1 + 0xe4),*(undefined4 *)(param_1 + 0x3c));
    }
    if (iVar2 < 2) {
      return;
    }
  }
  do {
    iVar2 = *(int *)(param_1 + 0x30) + -1;
    if (iVar2 < 0) {
      *(undefined1 *)(param_1 + 0x49) = 1;
      bVar5 = *(char *)(param_1 + 0x45) != '\0';
      if (bVar5) {
        param_3 = *(undefined **)(param_1 + 200);
        iVar2 = *(int *)(param_1 + 0x40) + -1;
        puVar1 = param_3 + -1;
      }
      else {
        iVar2 = 0;
        puVar1 = (undefined *)0x0;
      }
      if (((bVar5 && param_3 != (undefined *)0x1) &&
           (int)puVar1 < 0 == (bVar5 && SBORROW4((int)param_3,1))) &&
         (iVar3 = *(int *)(param_1 + 0xcc) + -1, *(int *)(param_1 + 0xcc) = iVar3, iVar3 < 0)) {
        *(undefined **)(param_1 + 0xcc) = param_3 + -1;
      }
      iVar3 = *(int *)(param_1 + 0xe4);
      if ((0 < iVar3) && (iVar3 <= *(int *)(param_1 + 0xcc) * *(int *)(param_1 + 0x40) + iVar2)) {
        fn_00300f74(iVar3 + -1,*(int *)(param_1 + 0x40));
        iVar2 = extraout_r1;
      }
    }
    *(int *)(param_1 + 0x30) = iVar2;
    param_3 = *(undefined **)(param_1 + 0x2c);
    puVar4 = param_3 + iVar2 * *(int *)(param_1 + 0x3c);
    puVar1 = (undefined *)(*(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x50) >> 2);
    if (puVar1 <= puVar4) {
      param_3 = &DAT_008c7663;
      fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,puVar4);
      local_18 = puVar1;
    }
    iVar2 = fn_00689c48(*(undefined4 *)(param_1 + 8),
                         *(undefined4 *)(*(int *)(param_1 + 0x50) + (int)puVar4 * 4));
  } while (iVar2 != 0);
  fn_001c9ba0(param_1);
  if (*(int *)(param_1 + 0xd0) != *(int *)(param_1 + 0xcc)) {
    *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xcc);
    if (*(int *)(param_1 + 0x1c) != 0) {
      fn_0069e8c8(*(undefined4 *)(param_1 + 0xc),*(int *)(param_1 + 0x1c),0,local_18);
      return;
    }
  }
  return;
}



void fn_0025ecd0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_001caa80();
  *puVar1 = &DAT_0081dc08;
  *(undefined1 *)(puVar1 + 0x39) = 0xff;
  *(undefined1 *)((int)puVar1 + 0xe5) = 0;
  *(undefined1 *)((int)puVar1 + 0xe6) = 0;
  *(undefined1 *)((int)puVar1 + 0xe7) = 0;
  return;
}



void fn_0025ec44(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0xe4) == -1) {
    fn_001c9f78();
    *(undefined1 *)(param_1 + 0xe6) = 1;
    return;
  }
  iVar1 = *(int *)(param_1 + 0x30) + 1;
  if (*(int *)(param_1 + 0x40) <= *(char *)(param_1 + 0xe4) + iVar1) {
    iVar1 = 0;
    *(undefined1 *)(param_1 + 0x4a) = 1;
    if (*(char *)(param_1 + 0x45) != '\0') {
      iVar2 = *(int *)(param_1 + 0xcc) + -1;
      *(int *)(param_1 + 0xcc) = iVar2;
      if (iVar2 < 1) {
        *(int *)(param_1 + 0xcc) = *(int *)(param_1 + 200) + -1;
      }
    }
  }
  *(int *)(param_1 + 0x30) = iVar1;
  fn_001c9ba0(param_1);
  if (*(int *)(param_1 + 0xd0) != *(int *)(param_1 + 0xcc)) {
    *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xcc);
    if (*(int *)(param_1 + 0x1c) != 0) {
      fn_0069e8c8(*(undefined4 *)(param_1 + 0xc));
      return;
    }
  }
  return;
}



void fn_0025ebbc(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0xe4) == -1) {
    fn_001c9dc0();
    *(undefined1 *)(param_1 + 0xe5) = 1;
    return;
  }
  iVar1 = *(int *)(param_1 + 0x30) + -1;
  if (iVar1 < 0) {
    *(undefined1 *)(param_1 + 0x49) = 1;
    iVar1 = (*(int *)(param_1 + 0x40) - (int)*(char *)(param_1 + 0xe4)) + -1;
    if (*(char *)(param_1 + 0x45) != '\0') {
      iVar2 = *(int *)(param_1 + 0xcc) + -1;
      *(int *)(param_1 + 0xcc) = iVar2;
      if (iVar2 < 1) {
        *(int *)(param_1 + 0xcc) = *(int *)(param_1 + 200) + -1;
      }
    }
  }
  *(int *)(param_1 + 0x30) = iVar1;
  fn_001c9ba0(param_1);
  if (*(int *)(param_1 + 0xd0) != *(int *)(param_1 + 0xcc)) {
    *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xcc);
    if (*(int *)(param_1 + 0x1c) != 0) {
      fn_0069e8c8(*(undefined4 *)(param_1 + 0xc));
      return;
    }
  }
  return;
}



/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffd0 : 0x0025eaa0 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 * fn_0025e920(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int local_30;
  
  puVar3 = (undefined4 *)fn_0068af70();
  *puVar3 = &DAT_0081dbdc;
  *(undefined1 *)(puVar3 + 4) = 0;
  puVar3[5] = *(undefined4 *)(param_2 + 8);
  puVar3[6] = 0xffffffff;
  puVar3[7] = 0xffffffff;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar4 = (undefined4 *)fn_00100fc6(0x80,0);
  iVar5 = 4;
  puVar3[8] = puVar4;
  do {
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = 0xffffffff;
    }
    iVar5 = iVar5 + -1;
    puVar4 = puVar4 + 1;
  } while (iVar5 != 0);
  iVar5 = puVar3[8];
  uVar7 = 0;
  puVar3[9] = iVar5 + 0x10;
  puVar3[10] = iVar5 + 0x80;
  puVar3[0xb] = param_3;
  *(undefined1 *)(puVar3 + 0xc) = 0xff;
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar5 = fn_00303afc(&DAT_008c62fc), iVar5 != 0)) {
    DAT_008f9e2c = uVar7;
    DAT_008f9e30 = uVar7;
    DAT_008f9e34 = uVar7;
  }
  uVar2 = DAT_008f9e34;
  uVar1 = DAT_008f9e30;
  puVar3[0xd] = DAT_008f9e2c;
  puVar3[0xe] = uVar1;
  puVar3[0xf] = uVar2;
  if ((((byte)DAT_008c62ec & 1) == 0) && (iVar5 = fn_00303afc(&DAT_008c62ec), iVar5 != 0)) {
    DAT_008c62f0 = uVar7;
    DAT_008c62f4 = uVar7;
  }
  uVar7 = DAT_008c62f4;
  puVar3[0x10] = DAT_008c62f0;
  puVar3[0x11] = uVar7;
  *(undefined1 *)(puVar3 + 0x12) = 1;
  *(undefined1 *)((int)puVar3 + 0x49) = 0;
  puVar3[0x13] = 0;
  piVar6 = puVar3 + 0x14;
  *piVar6 = 0;
  puVar3[0x15] = 0;
  puVar3[0x16] = 0;
  local_30 = 0x2a;
  puVar4 = (undefined4 *)fn_00100fc6(0xa8,0);
  *piVar6 = (int)puVar4;
  for (; local_30 != 0; local_30 = local_30 + -1) {
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = 0;
    }
    puVar4 = puVar4 + 1;
  }
  puVar3[0x16] = *piVar6 + 0xa8;
  puVar3[0x15] = *piVar6 + 0xa8;
  return puVar3;
}


