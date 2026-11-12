#include "0020b310_0020b9c4.h"



void fn_0020b9c4(int param_1)

{
  int *piVar1;
  uint in_fpscr;
  float in_s0;
  float fVar2;
  int local_28;
  int local_24 [2];
  int local_1c [5];
  
  piVar1 = &local_28;
  if (*(short *)(*(int *)(param_1 + 4) + 0x22) != 0) {
    local_24[0] = fn_006c0028(param_1 + 4);
    fVar2 = (float)VectorSignedToFloat(local_24[0],(byte)(in_fpscr >> 0x16) & 3);
    local_28 = 1;
    local_1c[0] = (int)(fVar2 * in_s0);
    if (local_1c[0] < 1) {
      local_1c[0] = 1;
    }
    local_1c[0] = *(short *)(*(int *)(param_1 + 4) + 0x22) - local_1c[0];
    if (local_24[0] < 1) {
                    /* WARNING: Subroutine does not return */
      fn_00146590();
    }
    if (0 < local_1c[0]) {
      piVar1 = local_1c;
    }
    if (local_24[0] < *piVar1) {
      piVar1 = local_24;
    }
    *(short *)(*(int *)(param_1 + 4) + 0x22) = (short)*piVar1;
  }
  return;
}



void fn_0020b914(int param_1,int param_2,undefined2 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  short *psVar5;
  undefined4 local_40 [7];
  
  iVar4 = 0;
  uVar3 = 0;
  do {
    psVar5 = (short *)(*(int *)(param_1 + 4) + uVar3 * 4 + 0x56);
    iVar1 = fn_0068f818((int)*psVar5);
    if (iVar1 != 0) {
      if (6 < iVar4) break;
      puVar2 = local_40 + iVar4;
      iVar4 = iVar4 + 1;
      *puVar2 = *(undefined4 *)psVar5;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 7);
  *(undefined2 *)(*(int *)(param_1 + 4) + param_2 * 4 + 0x56) = param_3;
  *(undefined2 *)(*(int *)(param_1 + 4) + param_2 * 4 + 0x58) = 0;
  return;
}



void fn_0020b8b8(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = fn_0022f584((char *)&DAT_0020b8f4,0);
    fn_001003e0(*(int *)(param_1 + 4) + uVar2 * 0x20 + 0x92,uVar1);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 2);
  return;
}



void fn_0020b82c(int param_1,undefined2 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  fn_00301f50(param_1,0xf0);
  *(undefined2 *)(param_1 + 0x1c) = *param_2;
  uVar1 = *(undefined4 *)(param_2 + 4);
  uVar2 = *(undefined4 *)(param_2 + 6);
  uVar3 = *(undefined4 *)(param_2 + 8);
  uVar4 = *(undefined4 *)(param_2 + 10);
  uVar5 = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  *(undefined4 *)(param_1 + 0x18) = uVar5;
  *(undefined2 *)(param_1 + 0x22) = param_2[0xe];
  *(undefined2 *)(param_1 + 0x24) = param_2[0xf];
  *(undefined2 *)(param_1 + 0x1e) = param_2[0x16];
  *(undefined2 *)(param_1 + 0x20) = param_2[0x17];
  *(undefined2 *)(param_1 + 0x26) = param_2[0x18];
  *(undefined2 *)(param_1 + 0x28) = param_2[0x19];
  *(undefined2 *)(param_1 + 0x2a) = param_2[0x1a];
  *(undefined2 *)(param_1 + 0x2c) = param_2[0x1b];
  *(undefined1 *)(param_1 + 0x2e) = *(undefined1 *)(param_2 + 0x2c);
  *(undefined1 *)(param_1 + 0x2f) = *(undefined1 *)(param_2 + 0x2d);
  fn_0017821c(param_1 + 0x44,param_2 + 0x142,0x12);
  return;
}



void fn_0020b760(int param_1,undefined2 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  short *psVar4;
  short local_40 [14];
  
  local_40[0] = 0;
  local_40[1] = 0;
  local_40[2] = 0;
  local_40[3] = 0;
  iVar3 = 0;
  uVar2 = 0;
  local_40[4] = 0;
  local_40[5] = 0;
  local_40[6] = 0;
  local_40[7] = 0;
  local_40[8] = 0;
  local_40[9] = 0;
  local_40[10] = 0;
  local_40[0xb] = 0;
  local_40[0xc] = 0;
  local_40[0xd] = 0;
  do {
    psVar4 = (short *)(*(int *)(param_1 + 4) + uVar2 * 4 + 0x56);
    iVar1 = fn_0068f818((int)*psVar4);
    if (iVar1 != 0) {
      if (6 < iVar3) break;
      iVar1 = iVar3 * 2;
      iVar3 = iVar3 + 1;
      *(undefined4 *)(local_40 + iVar1) = *(undefined4 *)psVar4;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 7);
  iVar3 = 0;
  do {
    if (local_40[iVar3 * 2] == 0) {
      *(undefined2 *)(*(int *)(param_1 + 4) + iVar3 * 4 + 0x56) = param_2;
      *(undefined2 *)(*(int *)(param_1 + 4) + iVar3 * 4 + 0x58) = 0;
      return;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 7);
  return;
}



void fn_0020b55c(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = (param_2 & 0xf) << 1;
  iVar1 = *(int *)(param_1 + 4) + (param_2 >> 4) * 4;
  uVar3 = *(uint *)(iVar1 + 0xd0) & ~(3 << iVar2);
  *(uint *)(iVar1 + 0xd0) = uVar3;
  *(uint *)(*(int *)(param_1 + 4) + (param_2 >> 4) * 4 + 0xd0) = uVar3 | param_3 << iVar2;
  return;
}



void fn_0020b310(int param_1,undefined4 param_2,int param_3,undefined1 param_4,int param_5,
                 undefined4 param_6)

{
  undefined1 uVar1;
  undefined2 uVar2;
  short *psVar3;
  undefined4 uVar4;
  short *psVar5;
  short *psVar6;
  uint uVar7;
  bool bVar8;
  uint in_fpscr;
  float fVar9;
  
  fn_00301f50(*(undefined4 *)(param_1 + 4),0xf0);
  *(short *)(*(int *)(param_1 + 4) + 0x1c) = (short)param_2;
  *(char *)(*(int *)(param_1 + 4) + 0x2e) = (char)param_3;
  *(undefined1 *)(*(int *)(param_1 + 4) + 0x3c) = param_4;
  if (param_5 == -1) {
    uVar2 = fn_0066128c(param_2);
  }
  else {
    uVar2 = fn_00660a50(param_5);
  }
  *(undefined2 *)(*(int *)(param_1 + 4) + 0x44) = uVar2;
  psVar3 = (short *)fn_0015b064(param_2);
  uVar7 = 0;
  psVar5 = (short *)(*(int *)(param_1 + 4) + 4);
  do {
    uVar7 = uVar7 + 1;
    psVar6 = psVar5 + 1;
    *psVar5 = *psVar3;
    bVar8 = psVar3[1] == 0;
    psVar3 = psVar3 + 1;
    psVar5 = psVar6;
  } while ((bVar8 || uVar7 < 0xc) && (!bVar8 && uVar7 != 0xb));
  *psVar6 = 0;
  *(undefined1 *)(*(int *)(param_1 + 4) + 0x2f) = 0;
  uVar1 = fn_00661570(param_2);
  uVar4 = fn_002467b4(param_3,uVar1);
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x30) = uVar4;
  uVar4 = fn_002467b4(param_3 + 1U & 0xff,uVar1);
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x34) = uVar4;
  fn_0020b59c(param_1);
  uVar2 = fn_006617a8(param_2);
  *(undefined2 *)(*(int *)(param_1 + 4) + 0x56) = uVar2;
  uVar2 = fn_00388784(param_3,*(undefined4 *)(param_1 + 4));
  *(undefined2 *)(*(int *)(param_1 + 4) + 0x3a) = uVar2;
  uVar4 = fn_005fe128(*(undefined4 *)(param_1 + 4),0);
  fVar9 = (float)VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
  fn_00246880(param_3,param_6);
  *(short *)(*(int *)(param_1 + 4) + 0x1e) = (short)(int)fVar9;
  uVar4 = fn_0020ddfc(*(undefined4 *)(param_1 + 4),0);
  fVar9 = (float)VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
  fn_00246880(param_3,param_6);
  *(short *)(*(int *)(param_1 + 4) + 0x20) = (short)(int)fVar9;
  *(undefined2 *)(*(int *)(param_1 + 4) + 0x22) = *(undefined2 *)(*(int *)(param_1 + 4) + 0x1e);
  *(undefined2 *)(*(int *)(param_1 + 4) + 0x24) = *(undefined2 *)(*(int *)(param_1 + 4) + 0x20);
  uVar4 = fn_0020fd10(*(undefined4 *)(param_1 + 4),0);
  fVar9 = (float)VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
  fn_00246880(param_3,param_6);
  *(short *)(*(int *)(param_1 + 4) + 0x26) = (short)(int)fVar9;
  uVar4 = fn_00210174(*(undefined4 *)(param_1 + 4),0);
  fVar9 = (float)VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
  fn_00246880(param_3,param_6);
  *(short *)(*(int *)(param_1 + 4) + 0x28) = (short)(int)fVar9;
  uVar4 = fn_0020e628(*(undefined4 *)(param_1 + 4),0);
  fVar9 = (float)VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
  fn_00246880(param_3,param_6);
  *(short *)(*(int *)(param_1 + 4) + 0x2a) = (short)(int)fVar9;
  uVar4 = fn_0020e3a4(*(undefined4 *)(param_1 + 4),0);
  fVar9 = (float)VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
  fn_00246880(param_3,param_6);
  *(short *)(*(int *)(param_1 + 4) + 0x2c) = (short)(int)fVar9;
  return;
}



void fn_0020b59c(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  uVar2 = 0;
  do {
    sVar6 = *(short *)(*(int *)(param_1 + 4) + uVar2 * 2 + 0x44);
    if ((int)sVar6 - 0x46U < 5) {
      switch(sVar6) {
      case 0x46:
        uVar3 = 0;
        goto LAB_0020b600;
      case 0x47:
        uVar3 = 1;
        goto LAB_0020b600;
      case 0x48:
        uVar3 = 2;
        goto LAB_0020b600;
      case 0x49:
        uVar3 = 3;
        goto LAB_0020b600;
      case 0x4a:
        uVar3 = 4;
        goto LAB_0020b600;
      }
      break;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 9);
  uVar3 = fn_0066173c((int)*(short *)(*(int *)(param_1 + 4) + 0x1c));
LAB_0020b600:
  uVar2 = 0;
  do {
    sVar6 = *(short *)(*(int *)(param_1 + 4) + uVar2 * 2 + 0x44);
    if ((int)sVar6 - 0x46U < 5) goto LAB_0020b62c;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 9);
  sVar6 = 0;
LAB_0020b62c:
  iVar7 = 1;
  *(short *)(*(int *)(param_1 + 4) + 0x44) = sVar6;
  iVar4 = fn_0066158c(uVar3);
  iVar8 = 0;
  iVar9 = 0;
  if (0 < iVar4) {
    do {
      iVar5 = fn_006613ec((int)*(short *)(*(int *)(param_1 + 4) + 0x1c),iVar9);
      if (iVar5 != 0) {
        iVar1 = iVar7 * 2;
        iVar7 = iVar7 + 1;
        *(short *)(*(int *)(param_1 + 4) + iVar1 + 0x44) = (short)iVar5;
      }
      iVar8 = iVar8 + 1;
      iVar9 = iVar9 + 1;
    } while (iVar8 < iVar4);
  }
  iVar4 = fn_006614d0(*(undefined1 *)(*(int *)(param_1 + 4) + 0x3c));
  iVar8 = 0;
  iVar9 = 0;
  if (0 < iVar4) {
    do {
      iVar5 = fn_00661248((int)*(short *)(*(int *)(param_1 + 4) + 0x1c),iVar9);
      if (iVar5 != 0) {
        iVar1 = iVar7 * 2;
        iVar7 = iVar7 + 1;
        *(short *)(*(int *)(param_1 + 4) + iVar1 + 0x44) = (short)iVar5;
      }
      iVar8 = iVar8 + 1;
      iVar9 = iVar9 + 1;
    } while (iVar8 < iVar4);
  }
  if (iVar7 < 9) {
    uVar2 = 9U - iVar7 & 1;
    if (uVar2 != 0) {
      *(undefined2 *)(*(int *)(param_1 + 4) + iVar7 * 2 + 0x44) = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  for (iVar7 = uVar2 + iVar7; iVar7 < 9; iVar7 = iVar7 + 2) {
    *(undefined2 *)(*(int *)(param_1 + 4) + iVar7 * 2 + 0x44) = 0;
    *(undefined2 *)(*(int *)(param_1 + 4) + iVar7 * 2 + 0x46) = 0;
  }
  return;
}


