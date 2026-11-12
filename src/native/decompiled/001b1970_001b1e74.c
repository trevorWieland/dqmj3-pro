#include "001b1970_001b1e74.h"



void fn_001b1e74(undefined4 param_1,undefined4 param_2)

{
  fn_00526a84(param_1,param_2,0x70,0xc,10);
  return;
}



void fn_001b1e58(undefined4 param_1,undefined4 param_2)

{
  fn_00526a38(param_1,param_2,0x70,0xc,10);
  return;
}



bool fn_001b1970(undefined4 *param_1,ushort *param_2,undefined4 *param_3)

{
  ushort uVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  
  *param_1 = 3;
  param_1[1] = (uint)(param_2[0x10] >> 0xd);
  param_1[2] = (param_2[0x10] & 0x1fff) >> 10;
  param_1[3] = (uint)(byte)(&DAT_0080e128)[param_2[0x10] >> 5 & 0x1e];
  param_1[4] = (uint)(byte)(&DAT_0080e129)[param_2[0x10] >> 5 & 0x1e];
  param_1[5] = (uint)(param_2[0x11] >> 9);
  param_1[6] = (param_2[0x11] & 0x1ff) >> 6;
  param_1[7] = (param_2[0x11] & 0x3f) >> 5;
  param_1[8] = (uint)(param_2[0x14] >> 10);
  param_1[9] = (uint)(param_2[0x15] >> 0xd);
  uVar1 = param_2[0x15];
  param_1[0xb] = 3;
  param_1[10] = (uVar1 & 0x1fff) >> 9;
  param_1[0xc] = (param_2[0x14] & 0x3ff) >> 5;
  param_1[0xd] = (param_2[0x15] & 0x1ff) >> 5;
  param_1[0xe] = param_2[0x14] & 0x1f;
  param_1[0xf] = (uint)(param_2[0x12] >> 0xb);
  param_1[0x10] = (uint)(param_2[0x13] >> 0xd);
  uVar1 = param_2[0x13];
  param_1[0x12] = 3;
  param_1[0x11] = (uVar1 & 0x1fff) >> 9;
  param_1[0x13] = (param_2[0x12] & 0x7ff) >> 6;
  param_1[0x14] = param_2[0x13] & 0xf;
  param_1[0x15] = (param_2[0x13] & 0x1ff) >> 4;
  param_1[0x16] = (uint)(param_2[0x16] >> 0xc);
  param_1[0x17] = (param_2[0x16] & 0xfff) >> 8;
  param_1[0x18] = (param_2[0x16] & 0xff) >> 3;
  param_1[0x19] = (uint)(param_2[0x17] >> 0xb);
  param_1[0x1a] = (param_2[0x17] & 0x7ff) >> 9;
  param_1[0x1b] = (param_2[0x17] & 0x1ff) >> 5;
  param_1[0x1c] = 3;
  param_1[0x1d] = param_2[0x17] & 0x1f;
  param_1[0x1e] = (uint)(param_2[0x19] >> 0xe);
  param_1[0x1f] = (param_2[0x19] & 0x3fff) >> 0xc;
  param_1[0x20] = (param_2[0x19] & 0xfff) >> 9;
  param_1[0x21] = (param_2[0x19] & 0x1ff) >> 5;
  param_1[0x22] = param_2[0x19] & 0x1f;
  param_1[0x23] = (uint)(param_2[0x18] >> 0xc);
  param_1[0x24] = (param_2[0x18] & 0xfff) >> 9;
  param_1[0x25] = (param_2[0x18] & 0x1ff) >> 5;
  param_1[0x26] = param_2[0x18] & 0x1f;
  param_1[0x27] = (uint)(param_2[0x1a] >> 0xf);
  param_1[0x28] = (param_2[0x1a] & 0x7fff) >> 0xb;
  param_1[0x29] = (param_2[0x1a] & 0x3f) >> 1;
  iVar8 = 0;
  param_1[0x2a] = (param_2[0x1a] & 0x7ff) >> 6;
  iVar7 = 0;
  param_1[0x2b] = (uint)(byte)param_2[0xb];
  param_1[0x2c] = (uint)*(byte *)((int)param_2 + 0x17);
  param_1[0x38] = (*param_2 & 0x7fff) >> 0xe;
  param_1[0x3b] = (*param_2 & 0x1f) >> 1;
  *(byte *)(param_1 + 0x3c) = (byte)*param_2 & 1;
  *(undefined1 *)((int)param_1 + 0xf1) = 0;
  *(undefined1 *)((int)param_1 + 0xf2) = 0;
  *(char *)((int)param_1 + 0xf3) = (char)((param_2[0x10] & 4) >> 2);
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x2d] = *(undefined4 *)(param_2 + 1);
  param_1[0x2e] = *(undefined4 *)(param_2 + 3);
  param_1[0x2f] = *(undefined4 *)(param_2 + 5);
  param_1[0x30] = *(undefined4 *)(param_2 + 7);
  param_1[0x31] = *(undefined4 *)(param_2 + 9);
  *(undefined2 *)(param_1 + 0x32) = 0;
  do {
    uVar4 = (uint)*(ushort *)((int)(param_1 + 0x2d) + iVar7 * 2);
    if (uVar4 == 0) break;
    if ((((uVar4 == 0x25 || uVar4 == 0x5c) || (uVar4 == 0x40 || uVar4 == 0xff20)) ||
        (uVar4 - 0xe000 < 0x1900)) ||
       ((iVar5 = fn_001be5ac(), iVar5 != 0 && (iVar8 = iVar8 + 1, 5 < iVar8)))) {
      fn_001b97f0(param_1 + 0x2d,&DAT_0080e140,10);
      bVar2 = true;
      goto LAB_001b1d00;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 10);
  bVar2 = false;
LAB_001b1d00:
  fn_001ad020();
  fn_00166824(param_1 + 0x42,param_2 + 0xc);
  param_1[0x39] = (*param_2 & 0x3fff) >> 10;
  param_1[0x3a] = (*param_2 & 0x3ff) >> 5;
  if (param_3 == (undefined4 *)0x0) {
    *(undefined4 *)((int)param_1 + 0xca) = 0;
    *(undefined4 *)((int)param_1 + 0xce) = 0;
    *(undefined4 *)((int)param_1 + 0xd2) = 0;
    *(undefined4 *)((int)param_1 + 0xd6) = 0;
    *(undefined4 *)((int)param_1 + 0xda) = 0;
  }
  else {
    *(undefined4 *)((int)param_1 + 0xca) = *param_3;
    *(undefined4 *)((int)param_1 + 0xce) = param_3[1];
    *(undefined4 *)((int)param_1 + 0xd2) = param_3[2];
    *(undefined4 *)((int)param_1 + 0xd6) = param_3[3];
    *(undefined4 *)((int)param_1 + 0xda) = param_3[4];
  }
  *(undefined2 *)((int)param_1 + 0xde) = 0;
  iVar7 = 0;
  do {
    uVar4 = (uint)*(ushort *)((int)param_1 + 0xca + iVar7 * 2);
    if (uVar4 == 0) break;
    if (((uVar4 == 0x25 || uVar4 == 0x5c) || (uVar4 == 0x40 || uVar4 == 0xff20)) ||
       ((uVar4 - 0xe000 < 0x1900 || (iVar8 = fn_001be5ac(), iVar8 != 0)))) {
      fn_001b97f0((int)param_1 + 0xca,&DAT_0080e140,10);
      bVar3 = true;
      goto LAB_001b1e20;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 10);
  bVar3 = false;
LAB_001b1e20:
  iVar7 = fn_001aff00(param_1 + 0x42);
  if (iVar7 == 0) {
    uVar6 = 1;
  }
  else {
    uVar6 = 2;
  }
  param_1[0x41] = uVar6;
  return bVar2 || bVar3;
}


