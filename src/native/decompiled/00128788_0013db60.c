#include "00128788_0013db60.h"



uint fn_0013db60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 unaff_r4;
  bool bVar3;
  
  fn_00106914();
  if (DAT_008c0370 == '\0') {
    DAT_008ec120 = 0;
    fn_0013c500();
    DAT_008ec12c = 0;
    DAT_008ec130 = 0;
    DAT_008ec134 = 1;
    DAT_008ec138 = 0;
    DAT_008ec13c = 0;
    fn_0013c500(&DAT_008ec13c);
    DAT_008c0370 = '\x01';
  }
  fn_00170704();
  if (0 < DAT_008c0374) {
    DAT_008c0374 = DAT_008c0374 + 1;
    fn_001707b4(&DAT_008ec120);
    return 0x82067f9;
  }
  while( true ) {
    uVar1 = fn_0011c0d0(&DAT_008c0378,&DAT_007e4334,param_3,param_4,unaff_r4);
    uVar2 = uVar1 >> 0x1b;
    if ((uVar1 & 0x80000000) != 0) {
      uVar2 = uVar2 - 0x20;
    }
    if (uVar2 != 0xfffffffb) break;
    uVar2 = (uVar1 & 0x7e00000) >> 0x15;
    bVar3 = uVar2 == 4;
    if (bVar3) {
      uVar2 = uVar1 & 0x3ff;
    }
    if (!bVar3 || uVar2 != 0x3fa) break;
    fn_0012d6a4(500000,0);
  }
  if (-1 < (int)uVar1) {
    uVar1 = fn_00106b64();
    DAT_008c0374 = DAT_008c0374 + 1;
  }
  fn_001707b4(&DAT_008ec120);
  return uVar1;
}



void fn_0013d5c4(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &DAT_00857074;
  iVar1 = fn_0014f590(param_1 + 1);
  *(undefined1 *)(iVar1 + 0x1c) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(undefined1 *)(iVar1 + 0x1d) = 0;
  *(undefined1 *)(iVar1 + 0x1e) = 0;
  *(undefined1 *)(iVar1 + 0x21) = 0;
  *(undefined1 *)(iVar1 + 0x1f) = 0;
  *(undefined1 *)(iVar1 + 0x20) = 0;
  *(undefined1 *)(iVar1 + 0x22) = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_0013bfec(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  
  _DAT_008eefec = CONCAT11((char)param_1,DAT_008eefec);
  cVar5 = fn_00169f1c(1000,param_1);
  uVar4 = DAT_008eeff8;
  uVar3 = DAT_008eeff4;
  uVar2 = DAT_008eeff0;
  cVar5 = cVar5 + DAT_008eefee;
  _DAT_008eefec = CONCAT31(_DAT_008eefed,cVar5);
  uVar1 = _DAT_008eefec;
  if (param_2 != (undefined4 *)0x0) {
    param_2[4] = DAT_008eeffc;
    *param_2 = uVar1;
    param_2[1] = uVar2;
    param_2[2] = uVar3;
    param_2[3] = uVar4;
  }
  return;
}



void fn_0013be38(int param_1)

{
  short sVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  short *psVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  iVar9 = 0;
  if (*(char *)(param_1 + 8) != '\0') {
    do {
      iVar12 = param_1 + iVar9 * 4;
      uVar5 = 0x2c0;
      iVar11 = 0x2b1;
      puVar10 = (uint *)(param_1 + 0x29c);
      iVar2 = param_1 + iVar9 * 0x928;
      iVar13 = *(int *)(iVar12 + 0xc);
      puVar3 = (uint *)(iVar2 + 0x368);
      if (*(char *)(iVar13 + 6) != '\0') {
        uVar5 = 0x290;
        iVar11 = 0x281;
        puVar10 = (uint *)(param_1 + 0x2a0);
      }
      iVar6 = *(int *)(iVar13 + 0x18);
      uVar8 = 0;
      if (*(int *)(iVar13 + 0x1c) != 0) {
        do {
          psVar7 = (short *)(iVar6 + iVar13 + uVar8 * 0x14);
          sVar1 = *psVar7;
          if (sVar1 == 0) {
            *puVar10 = *puVar10 | (*(uint *)(psVar7 + 2) & 1) << ((ushort)psVar7[1] & 0xff);
          }
          else {
            if (sVar1 == 1) {
              puVar4 = puVar3 + 1;
              *puVar3 = *(int *)(psVar7 + 6) << 0x10 | *(int *)(psVar7 + 8) << 0x18 |
                        *(uint *)(psVar7 + 2) | *(int *)(psVar7 + 4) << 8;
              *puVar4 = (uint)(ushort)psVar7[1] + iVar11 | 0xf0000;
            }
            else {
              if (sVar1 != 2) goto LAB_0013bf90;
              *puVar3 = (uint)(ushort)psVar7[1];
              puVar3[1] = uVar5 | 0x803f0000;
              puVar3[2] = (*(uint *)(psVar7 + 6) & 0xffffff) >> 0x10 | *(int *)(psVar7 + 8) << 8;
              puVar3[3] = (*(uint *)(psVar7 + 4) >> 8 & 0xffff) + *(int *)(psVar7 + 6) * 0x10000;
              puVar3[4] = *(uint *)(psVar7 + 2) & 0xffffff | *(int *)(psVar7 + 4) << 0x18;
              puVar3[5] = 0xead0fead;
              puVar4 = puVar3 + 5;
            }
            puVar3 = puVar4 + 1;
          }
LAB_0013bf90:
          uVar8 = uVar8 + 1;
        } while (uVar8 < *(uint *)(iVar13 + 0x1c));
      }
      iVar9 = iVar9 + 1;
      *(int *)(iVar12 + 0x12868) = (int)puVar3 + (-0x368 - iVar2) >> 2;
    } while (iVar9 < (int)(uint)*(byte *)(param_1 + 8));
  }
  return;
}



void fn_0012f254(int param_1,undefined4 param_2)

{
  fn_0014ccb4(param_1,param_2,*(undefined4 *)(DAT_0088fcdc + param_1 * 4));
  return;
}



void fn_0012f128(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[8] = 0;
  return;
}



undefined4 fn_0012db88(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  
  local_10 = param_4;
  iVar1 = fn_00157f58(param_1,0xffffffff,&local_10);
  if (iVar1 < 0) {
    uVar2 = fn_001581d0(param_1,&DAT_00148920);
    return uVar2;
  }
  (**(code **)(*DAT_00898898 + 0x30))(DAT_00898898,local_10);
  return 0;
}



void fn_0012b274(int param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  
  bVar1 = param_1 == 0x400;
  if (!bVar1) {
    param_3 = param_1 + -0x401;
    bVar1 = param_3 == 0;
  }
  if (bVar1) {
    DAT_008e318c = param_1 + -0x400;
  }
  else {
    if (param_3 != 0xf) {
      return;
    }
    DAT_008e318c = 2;
  }
  return;
}



void fn_00129e04(int param_1,uint param_2)

{
  if ((param_2 < 0x38) && (*(int *)(*(int *)(param_1 + 4) + param_2 * 4) != 0)) {
    fn_0012a26c();
    return;
  }
  return;
}



void fn_0012a26c(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0012a278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x38) + 0x14))();
  return;
}



void fn_001287dc(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  if (DAT_0089a508 == '\0') {
    return;
  }
  puVar1 = (undefined4 *)fn_00124ffc();
                    /* WARNING: Could not recover jumptable at 0x00128810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar1)(puVar1,param_1,param_2);
  return;
}



void fn_001287d4(undefined4 param_1)

{
  undefined4 *puVar1;
  
  if (DAT_0089a508 == '\0') {
    return;
  }
  puVar1 = (undefined4 *)fn_00124ffc();
                    /* WARNING: Could not recover jumptable at 0x00128810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar1)(puVar1,param_1,4);
  return;
}



void fn_00128788(int param_1,int param_2,int param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint in_fpscr;
  int iVar4;
  float in_s0;
  float fVar5;
  undefined4 uVar6;
  
  iVar2 = **(int **)(*(int *)(*(int *)(param_1 + 4) + 0x360) + param_2 * 4);
  if (iVar2 == 0) {
    return;
  }
  bVar1 = *(byte *)(iVar2 + 0xa1);
  if (param_3 == 0) {
    if ((bVar1 != 0) && ((bVar1 == 1 || bVar1 == 2) || bVar1 == 3)) {
      fn_00168948(iVar2 + 0x78);
      uVar6 = 0x3f800000;
      fVar5 = (float)VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x16) & 3);
      iVar4 = (int)((1.0 - in_s0) * fVar5);
      iVar3 = iVar4;
      if (iVar4 < 1) {
        iVar3 = 1;
      }
      fn_00168948((int *)(iVar2 + 0x78));
      *(int *)(iVar2 + 0x78) = iVar4;
      *(undefined4 *)(iVar2 + 0x7c) = uVar6;
      *(int *)(iVar2 + 0x80) = iVar3;
      *(undefined4 *)(iVar2 + 0x84) = 0;
      *(undefined1 *)(iVar2 + 0xa1) = 3;
      *(undefined1 *)(iVar2 + 0xa3) = 1;
      return;
    }
  }
  else if ((bVar1 < 2) || ((bVar1 != 2 && (bVar1 == 3)))) {
    fn_00168948(iVar2 + 0x78);
    uVar6 = 0;
    fVar5 = (float)VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x16) & 3);
    iVar4 = (int)(in_s0 * fVar5);
    iVar3 = iVar4;
    if (iVar4 < 1) {
      iVar3 = 1;
    }
    fn_00168948((int *)(iVar2 + 0x78));
    *(int *)(iVar2 + 0x78) = iVar4;
    *(undefined4 *)(iVar2 + 0x7c) = uVar6;
    *(int *)(iVar2 + 0x80) = iVar3;
    *(undefined4 *)(iVar2 + 0x84) = 0;
    *(undefined1 *)(iVar2 + 0xa1) = 1;
    *(undefined1 *)(iVar2 + 0xa3) = 0;
  }
  return;
}


