#include "00516cec_00517050.h"



undefined1 * fn_00517050(int param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  int unaff_r8;
  undefined8 uVar6;
  
  puVar4 = &DAT_e0a14821;
  if ((*(int *)(param_1 + 0xc) == 0) && (puVar4 = (undefined1 *)0xe0e14826, param_2 != 0)) {
    uVar1 = fn_004ed2e8();
    unaff_r8 = fn_00656e14(param_2 * 0x5a0,uVar1);
    if (unaff_r8 == 0) {
      unaff_r8 = 0;
    }
    else {
      uVar5 = 0;
      if (param_2 != 0) {
        do {
          iVar2 = unaff_r8 + uVar5 * 0x5a0;
          if (iVar2 != 0) {
            fn_00301f50(iVar2,0x5a0);
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < param_2);
      }
    }
    *(uint *)(param_1 + 0x10) = param_2;
    *(int *)(param_1 + 0xc) = unaff_r8;
    puVar4 = (undefined1 *)0x0;
  }
  if (-1 < (int)puVar4) {
    puVar4 = &DAT_e0a14821;
    if ((*(int *)(param_1 + 0x20) == 0) && (puVar4 = (undefined1 *)0xe0e14826, param_3 != 0)) {
      uVar1 = fn_004ed2e8();
      iVar2 = fn_00656e14(param_3 * 0x57c,uVar1);
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        if (param_3 != 0) {
          unaff_r8 = 0x57c;
        }
        uVar5 = 0;
        if (param_3 != 0) {
          do {
            iVar3 = iVar2 + uVar5 * 0x57c;
            if (iVar3 != 0) {
              fn_00158f6c(iVar3,unaff_r8);
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < param_3);
        }
      }
      *(int *)(param_1 + 0x20) = iVar2;
      *(uint *)(param_1 + 0x24) = param_3;
      puVar4 = (undefined1 *)0x0;
    }
    if (-1 < (int)puVar4) {
      uVar6 = fn_0011c134((int)((ulonglong)DAT_008c3640 * 500),
                           DAT_008c3644 * 500 + (int)((ulonglong)DAT_008c3640 * 500 >> 0x20),1000,0)
      ;
      *(undefined8 *)(param_1 + 0x40) = uVar6;
      return (undefined1 *)0x0;
    }
    iVar2 = *(int *)(param_1 + 0xc);
    if (iVar2 != 0) {
      fn_00656b0c(iVar2);
      fn_00656b7c(iVar2);
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return puVar4;
}



void fn_00517020(int param_1,undefined1 param_2,undefined4 param_3)

{
  *(undefined1 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 8) = param_3;
  return;
}



void fn_00516e6c(int *param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  
  uVar7 = 1;
  bVar3 = 0;
  if (*(char *)((int)param_1 + 0x25) != '\0') {
    bVar3 = 2;
  }
  if ((char)param_1[5] == '\0') {
    bVar4 = 0;
  }
  else {
    bVar4 = 4;
  }
  if (*(char *)((int)param_1 + 0x15) == '\0') {
    bVar6 = 0;
  }
  else {
    bVar6 = 8;
  }
  *(byte *)param_1[7] = (char)param_1[9] != '\0' | bVar3 | bVar4 | bVar6;
  *(char *)(param_1[7] + 1) = (char)param_1[1];
  *(ushort *)(param_1[7] + 2) = (ushort)(*param_1 << 8) | (ushort)((uint)*param_1 >> 8) & 0xff;
  uVar5 = param_1[8];
  *(uint *)(param_1[7] + 4) =
       ((uVar5 >> 0x10) << 0x18 | (uVar5 >> 0x18) << 0x10) >> 0x10 |
       ((uVar5 & 0xff) << 8 | uVar5 >> 8 & 0xff) << 0x10;
  uVar5 = param_1[2];
  *(uint *)(param_1[7] + 8) =
       ((uVar5 >> 0x10) << 0x18 | (uVar5 >> 0x18) << 0x10) >> 0x10 |
       ((uVar5 & 0xff) << 8 | uVar5 >> 8 & 0xff) << 0x10;
  uVar5 = param_1[3];
  *(uint *)(param_1[7] + 0xc) =
       ((uVar5 >> 0x10) << 0x18 | (uVar5 >> 0x18) << 0x10) >> 0x10 |
       ((uVar5 & 0xff) << 8 | uVar5 >> 8 & 0xff) << 0x10;
  uVar5 = param_1[4];
  *(uint *)(param_1[7] + 0x10) =
       ((uVar5 >> 0x10) << 0x18 | (uVar5 >> 0x18) << 0x10) >> 0x10 |
       ((uVar5 & 0xff) << 8 | uVar5 >> 8 & 0xff) << 0x10;
  iVar2 = *param_1;
  if (1 < (uint)param_1[0x32]) {
    do {
      fn_001694e4(param_1[uVar7 * 4 + 7],param_1[7],(iVar2 + 0x13U & 0xfffffffc) + 4);
      bVar3 = 0;
      if (*(char *)((int)param_1 + uVar7 * 0x10 + 0x25) != '\0') {
        bVar3 = 2;
      }
      if ((char)param_1[5] == '\0') {
        bVar4 = 0;
      }
      else {
        bVar4 = 4;
      }
      bVar6 = 0;
      if (*(char *)((int)param_1 + 0x15) != '\0') {
        bVar6 = 8;
      }
      *(byte *)param_1[uVar7 * 4 + 7] = (char)param_1[uVar7 * 4 + 9] != '\0' | bVar3 | bVar4 | bVar6
      ;
      iVar1 = uVar7 * 4;
      uVar5 = param_1[uVar7 * 4 + 8];
      uVar7 = uVar7 + 1;
      *(uint *)(param_1[iVar1 + 7] + 4) =
           ((uVar5 >> 0x10) << 0x18 | (uVar5 >> 0x18) << 0x10) >> 0x10 |
           ((uVar5 & 0xff) << 8 | uVar5 >> 8 & 0xff) << 0x10;
    } while (uVar7 < (uint)param_1[0x32]);
  }
  if (((char)param_1[0x33] != '\0') && (uVar7 = 0, param_1[0x32] != 0)) {
    do {
      iVar2 = uVar7 * 4;
      uVar7 = uVar7 + 1;
      if (*(byte *)(param_1[iVar2 + 6] + 0x5d4) < *(byte *)(param_1 + 0x33)) {
        *(byte *)(param_1[iVar2 + 6] + 0x5d4) = *(byte *)(param_1 + 0x33);
      }
    } while (uVar7 < (uint)param_1[0x32]);
  }
  return;
}



void fn_00516e40(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined1 param_4,
                 undefined1 param_5)

{
  *param_1 = param_3;
  param_1[3] = *param_2;
  *(undefined1 *)(param_1 + 5) = param_4;
  *(undefined1 *)((int)param_1 + 0x15) = param_5;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  param_1[0x32] = 0;
  return;
}



void fn_00516e0c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5,undefined1 param_6)

{
  int iVar1;
  
  iVar1 = param_1 + *(int *)(param_1 + 200) * 0x10;
  *(undefined4 *)(iVar1 + 0x18) = param_2;
  *(undefined4 *)(iVar1 + 0x1c) = param_3;
  *(undefined4 *)(iVar1 + 0x20) = param_4;
  *(undefined1 *)(iVar1 + 0x24) = param_5;
  *(undefined1 *)(iVar1 + 0x25) = param_6;
  *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 1;
  return;
}



void fn_00516df8(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  fn_001694e4(*(int *)(param_1 + 0x1c) + param_3 + 0x14,param_2,param_4);
  return;
}



int fn_00516dd8(int param_1)

{
  *(undefined **)(param_1 + 0xc) = &DAT_00856c94;
  return param_1;
}



void fn_00516cec(uint *param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(int *)(param_2 + 0x5b8) - 0xc;
  if (param_3 < uVar2) {
    iVar1 = param_2 + param_3;
    if (*(char *)(iVar1 + 0xc) == -1) {
      param_1[1] = 0;
      *(undefined1 *)(param_1 + 2) = 1;
      return;
    }
    *(undefined1 *)(param_1 + 2) = 0;
    if (param_3 + 0x14 <= uVar2) {
      uVar3 = (*(ushort *)(iVar1 + 0xe) & 0xff) << 8 | (uint)(*(ushort *)(iVar1 + 0xe) >> 8);
      *param_1 = uVar3;
      if (param_3 + 0x14 + uVar3 <= uVar2) {
        param_1[1] = (uint)(iVar1 + 0xc);
        if ((*(byte *)(iVar1 + 0xc) & 4) == 0) {
          fn_004ed810(param_1 + 3,param_2 + 0x5d8);
          *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 5);
          *(undefined1 *)((int)param_1 + 0x1d) = *(undefined1 *)(param_2 + 0x5d4);
          return;
        }
        fn_004ed714(param_1 + 3);
        *(undefined1 *)(param_1 + 7) = 0;
        *(undefined1 *)((int)param_1 + 0x1d) = 0;
        return;
      }
    }
    param_1[1] = 0;
  }
  else {
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}


