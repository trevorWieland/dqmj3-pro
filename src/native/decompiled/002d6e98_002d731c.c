#include "002d6e98_002d731c.h"



undefined4 fn_002d731c(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 auStack_10 [4];
  undefined1 auStack_c [4];
  
  fn_002d7624(auStack_10,param_1);
  uVar1 = fn_006c6130(auStack_c,0);
  switch(uVar1) {
  case 0x46:
  case 0x47:
    uVar1 = 0x1e;
    break;
  case 0x48:
    uVar1 = 0x28;
    break;
  case 0x49:
    uVar1 = 0x2d;
    break;
  case 0x4a:
    uVar1 = 0x32;
    break;
  default:
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0060c974) */
/* WARNING: Removing unreachable block (ram,0x0060c700) */
/* WARNING: Removing unreachable block (ram,0x0060ca64) */
/* WARNING: Removing unreachable block (ram,0x0060caa0) */
/* WARNING: Removing unreachable block (ram,0x0060cab8) */
/* WARNING: Removing unreachable block (ram,0x0060cac4) */
/* WARNING: Removing unreachable block (ram,0x0060cac8) */
/* WARNING: Removing unreachable block (ram,0x0060cacc) */
/* WARNING: Removing unreachable block (ram,0x0060cb34) */
/* WARNING: Removing unreachable block (ram,0x0060cb38) */
/* WARNING: Removing unreachable block (ram,0x0060cb3c) */
/* WARNING: Removing unreachable block (ram,0x0060cb40) */
/* WARNING: Removing unreachable block (ram,0x0060cb44) */
/* WARNING: Removing unreachable block (ram,0x0060cad0) */
/* WARNING: Removing unreachable block (ram,0x0060cad4) */
/* WARNING: Removing unreachable block (ram,0x0060cad8) */
/* WARNING: Removing unreachable block (ram,0x0060cadc) */
/* WARNING: Removing unreachable block (ram,0x0060cae0) */
/* WARNING: Removing unreachable block (ram,0x0060cae4) */
/* WARNING: Removing unreachable block (ram,0x0060cae8) */
/* WARNING: Removing unreachable block (ram,0x0060caec) */
/* WARNING: Removing unreachable block (ram,0x0060caf0) */
/* WARNING: Removing unreachable block (ram,0x0060cb48) */
/* WARNING: Removing unreachable block (ram,0x0060cb54) */

int fn_002d7314(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint in_fpscr;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  short asStack_d0 [76];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [28];
  
  iVar5 = fn_0020b2d8((int)*(short *)(param_1 + 0x1c));
  fn_002d7624(&uStack_e0,param_1);
  iVar2 = fn_006c6a38(&uStack_dc);
  iVar2 = *(int *)(&UNK_007c342c + iVar2 * 4);
  fVar7 = 1.0;
  fVar8 = 0.75;
  if (99 < *(byte *)(param_1 + 0x3c)) {
    fVar8 = 1.0;
  }
  fn_002d7624(auStack_38,param_1);
  uStack_e0 = 1;
  uStack_dc = 1;
  uStack_d8 = 1;
  uStack_d4 = 1;
  iVar3 = fn_006c61c4(auStack_34,asStack_d0,0x4c,1);
  iVar4 = 0;
  if (0 < iVar3) {
    do {
      switch(asStack_d0[iVar4]) {
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
        fVar9 = 2.0;
        switch(asStack_d0[iVar4]) {
        case 0:
          goto switchD_0060c870_caseD_0;
        default:
          fVar9 = fVar7;
        case 2:
        case 3:
          goto switchD_0060c870_caseD_2;
        case 4:
          fVar9 = 3.0;
          goto switchD_0060c870_caseD_2;
        case 5:
          fVar9 = 3.5;
          goto switchD_0060c870_caseD_2;
        case 6:
          fVar9 = 3.75;
          goto switchD_0060c870_caseD_2;
        case 7:
          fVar9 = 4.0;
          goto switchD_0060c870_caseD_2;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
switchD_0060c870_caseD_0:
  fVar9 = 0.0;
switchD_0060c870_caseD_2:
  fn_002d7624(auStack_38,param_1);
  uStack_e0 = 1;
  uStack_dc = 1;
  uStack_d8 = 1;
  uStack_d4 = 1;
  iVar3 = fn_006c61c4(auStack_34,asStack_d0,0x4c,1);
  iVar4 = 0;
  if (0 < iVar3) {
    do {
      sVar1 = asStack_d0[iVar4];
      if ((sVar1 == 0x4c || sVar1 == 0x4d) || sVar1 == 0x4e) {
        fVar6 = (float)VectorSignedToFloat(iVar5 * iVar2,(byte)(in_fpscr >> 0x16) & 3);
        fVar7 = fVar6 * fVar8 * (fVar7 - fVar9 * 0.15);
        goto LAB_0060ca5c;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  fVar6 = (float)VectorSignedToFloat(iVar5 * iVar2,(byte)(in_fpscr >> 0x16) & 3);
  fVar7 = fVar6 * fVar8 * (fVar7 - fVar9 * 0.1);
LAB_0060ca5c:
  iVar5 = (int)fVar7;
  sVar1 = ((short)(iVar5 / 1000) + (short)(iVar5 >> 0x1f)) -
          (short)((longlong)iVar5 * 0x10624dd3 >> 0x3f);
  if (iVar5 % 1000 != 0) {
    sVar1 = sVar1 + 1;
  }
  return (int)sVar1;
}



bool fn_002d7124(int *param_1,undefined4 param_2)

{
  byte bVar1;
  short sVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  short local_24 [2];
  
  local_24[0] = 0;
  local_24[1] = 0;
  uVar8 = param_1[2];
  for (uVar4 = 0; (uVar4 < uVar8 && ((int)uVar4 < 2)); uVar4 = uVar4 + 1) {
    sVar2 = *(short *)((int)param_1 + uVar4 * 4 + 0xe);
    if (sVar2 != 0) {
      local_24[uVar4] = sVar2;
    }
  }
  iVar11 = *param_1;
  iVar10 = (int)local_24[0];
  iVar9 = (int)local_24[1];
  bVar1 = *(byte *)(iVar11 + 0x3c);
  iVar5 = fn_0020b22c((int)*(short *)(iVar11 + 0x1c));
  uVar4 = iVar5 - 1;
  if (((uVar4 < 3) && (0x18 < bVar1)) && (bVar1 < 0x32)) {
    uVar6 = fn_0020b188();
  }
  else if (((uVar4 < 5) && (0x31 < bVar1)) && (bVar1 < 100)) {
    uVar6 = fn_0020b178();
  }
  else if ((uVar4 < 7) && (99 < bVar1)) {
    uVar6 = fn_0020b1fc();
  }
  else {
    uVar6 = fn_0020b074((int)*(short *)(iVar11 + 0x1c));
  }
  iVar11 = param_1[1];
  bVar1 = *(byte *)(iVar11 + 0x3c);
  iVar5 = fn_0020b22c((int)*(short *)(iVar11 + 0x1c));
  uVar4 = iVar5 - 1;
  if (((uVar4 < 3) && (0x18 < bVar1)) && (bVar1 < 0x32)) {
    uVar7 = fn_0020b188();
  }
  else if (((uVar4 < 5) && (0x31 < bVar1)) && (bVar1 < 100)) {
    uVar7 = fn_0020b178();
  }
  else if ((uVar4 < 7) && (99 < bVar1)) {
    uVar7 = fn_0020b1fc();
  }
  else {
    uVar7 = fn_0020b074((int)*(short *)(iVar11 + 0x1c));
  }
  uVar3 = fn_0060c4b4(uVar6,uVar7,param_2,iVar10,iVar9);
  iVar5 = fn_0020b264();
  if (iVar5 != 0) {
    *(undefined1 *)(param_1 + param_1[2] + 3) = 1;
    *(char *)((int)param_1 + param_1[2] * 4 + 0xd) = (char)param_2;
    *(undefined2 *)((int)param_1 + param_1[2] * 4 + 0xe) = uVar3;
    param_1[2] = param_1[2] + 1;
  }
  return iVar5 != 0;
}



bool fn_002d6fb0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  short local_30 [2];
  char local_2c [4];
  int *local_28;
  
  local_30[0] = *(short *)(*param_1 + 0x1c);
  local_30[1] = *(undefined2 *)(param_1[1] + 0x1c);
  local_28 = param_1;
  iVar2 = fn_00405990();
  iVar7 = 0;
  uVar8 = 0;
  if (iVar2 < 1) {
LAB_002d70b4:
    piVar1 = local_28;
    iVar2 = fn_0020b264(uVar8);
    if (iVar2 != 0) {
      *(undefined1 *)(piVar1 + piVar1[2] + 3) = 4;
      *(undefined1 *)((int)piVar1 + piVar1[2] * 4 + 0xd) = 3;
      *(short *)((int)piVar1 + piVar1[2] * 4 + 0xe) = (short)uVar8;
      piVar1[2] = piVar1[2] + 1;
    }
    return iVar2 != 0;
  }
LAB_002d6ff4:
  iVar6 = 0;
  local_2c[0] = '\0';
  local_2c[1] = '\0';
  local_2c[2] = '\0';
  local_2c[3] = '\0';
  do {
    if ((local_2c[iVar6] == '\0') && (iVar3 = fn_004059a4(iVar7), iVar3 == local_30[iVar6])) {
      local_2c[iVar6] = '\x01';
      iVar3 = 1;
      iVar6 = 0;
      goto LAB_002d704c;
    }
    iVar6 = (int)(short)((short)iVar6 + 1);
  } while (iVar6 < 2);
  goto LAB_002d70a4;
LAB_002d704c:
  do {
    if (local_2c[iVar6] == '\0') {
      iVar4 = fn_004058e4(iVar7);
      iVar5 = fn_0020ae00((int)local_30[iVar6]);
      if (iVar4 == iVar5) {
        iVar3 = 2;
        local_2c[iVar6] = '\x01';
        break;
      }
    }
    iVar6 = (int)(short)((short)iVar6 + 1);
  } while (iVar6 < 2);
  if (iVar3 == 2) {
    uVar8 = fn_004059d8(iVar7);
    goto LAB_002d70b4;
  }
LAB_002d70a4:
  iVar7 = (int)(short)((short)iVar7 + 1);
  if (iVar2 <= iVar7) goto LAB_002d70b4;
  goto LAB_002d6ff4;
}



bool fn_002d6e98(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined4 local_28;
  
  sVar1 = *(short *)(*param_1 + 0x1c);
  sVar2 = *(short *)(param_1[1] + 0x1c);
  local_28 = param_4;
  iVar3 = fn_00339edc();
  iVar6 = 0;
  uVar7 = 0;
  if (0 < iVar3) {
    do {
      fn_00339f24(iVar6,&local_28,2);
      if ((short)local_28 == sVar1) {
        iVar4 = 1;
LAB_002d6f10:
        iVar5 = (int)(char)iVar4;
        bVar8 = iVar5 == 0;
        if (bVar8) {
          iVar5 = (int)(short)local_28;
        }
        if (!bVar8 || iVar5 != sVar2) {
          iVar4 = (iVar4 << 0x10) >> 0x18;
          bVar8 = iVar4 != 0;
          if (!bVar8) {
            iVar4 = (int)((unsigned int)(local_28) >> 16) & 0xffff;
          }
          if (bVar8 || iVar4 != sVar2) goto LAB_002d6f4c;
        }
        uVar7 = fn_00339f08(iVar6);
        break;
      }
      if (((unsigned int)(local_28) >> 16) & 0xffff == sVar1) {
        iVar4 = 0x100;
        goto LAB_002d6f10;
      }
LAB_002d6f4c:
      iVar6 = (int)(short)((short)iVar6 + 1);
    } while (iVar6 < iVar3);
  }
  iVar3 = fn_0020b264(uVar7);
  if (iVar3 != 0) {
    *(undefined1 *)(param_1 + param_1[2] + 3) = 3;
    *(undefined1 *)((int)param_1 + param_1[2] * 4 + 0xd) = 3;
    *(short *)((int)param_1 + param_1[2] * 4 + 0xe) = (short)uVar7;
    param_1[2] = param_1[2] + 1;
  }
  return iVar3 != 0;
}


