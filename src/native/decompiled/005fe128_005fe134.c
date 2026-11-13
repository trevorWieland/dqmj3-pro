#include "005fe128_005fe134.h"



int fn_005fe134(int param_1,int param_2,int param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  bool bVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  short local_e8 [76];
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [48];
  
  iVar6 = (int)*(short *)(param_1 + 0x1c);
  iVar2 = 0;
  switch(param_2) {
  case 0:
    iVar2 = fn_00661770(iVar6);
    break;
  case 1:
    iVar2 = fn_0066178c(iVar6);
    break;
  case 2:
    iVar2 = fn_006612ec(iVar6);
    break;
  case 3:
    iVar2 = fn_006613b4(iVar6);
    break;
  case 4:
    iVar2 = fn_00661270(iVar6);
    break;
  case 5:
    iVar2 = fn_006610b0(iVar6);
  }
  fn_0020bbc4(&local_f8,param_1);
  iVar6 = fn_006bfe90(&local_f4);
  iVar6 = *(int *)(&DAT_007c42c0 + iVar6 * 4 + param_2 * 0x14);
  fVar8 = 1.0;
  fVar14 = 0.75;
  if (*(byte *)(param_1 + 0x3c) < 100) {
    fVar13 = 0.75;
  }
  else {
    fVar13 = 1.0;
  }
  fn_0020bbc4(auStack_50,param_1);
  local_f8 = 1;
  local_f4 = 1;
  local_f0 = 1;
  local_ec = 1;
  iVar3 = fn_006bf5ec(auStack_4c,local_e8,0x4c,1);
  fVar9 = 0.0;
  iVar4 = 0;
  if (0 < iVar3) {
    do {
      switch(local_e8[iVar4]) {
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
        fVar10 = 2.0;
        switch(local_e8[iVar4]) {
        case 0:
          goto switchD_005fe2cc_caseD_0;
        default:
          fVar10 = fVar8;
        case 2:
        case 3:
          goto switchD_005fe2cc_caseD_2;
        case 4:
          fVar10 = 3.0;
          goto switchD_005fe2cc_caseD_2;
        case 5:
          fVar10 = 3.5;
          goto switchD_005fe2cc_caseD_2;
        case 6:
          fVar10 = 4.0;
          goto switchD_005fe2cc_caseD_2;
        case 7:
          fVar10 = 4.5;
          goto switchD_005fe2cc_caseD_2;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
switchD_005fe2cc_caseD_0:
  fVar10 = fVar9;
switchD_005fe2cc_caseD_2:
  fn_0020bbc4(&local_f8,param_1);
  uVar5 = fn_006bfe90(&local_f4);
  fVar11 = 10.0;
  switch(uVar5) {
  default:
    break;
  case 2:
    fVar11 = 7.0;
    break;
  case 3:
    fVar11 = 6.0;
    break;
  case 4:
    fVar11 = 5.0;
  }
  if ((*(ushort *)(param_1 + 0x40) & 0x400) != 0) {
    bVar7 = *(byte *)(param_1 + 0x2e) == 100;
    if (*(byte *)(param_1 + 0x2e) < 0x65) {
      bVar7 = param_3 == 0;
    }
    if (!bVar7) {
      fVar12 = 1.1;
      goto LAB_005fe3d8;
    }
  }
  fVar12 = fVar8;
LAB_005fe3d8:
  fn_0020bbc4(auStack_50,param_1);
  local_f8 = 1;
  local_f4 = 1;
  local_f0 = 1;
  local_ec = 1;
  iVar3 = fn_006bf5ec(auStack_4c,local_e8,0x4c,1);
  iVar4 = 0;
  if (0 < iVar3) {
    do {
      sVar1 = local_e8[iVar4];
      if ((sVar1 == 0x4c || sVar1 == 0x4d) || sVar1 == 0x4e) {
        switch(param_2) {
        case 0:
        case 1:
        case 2:
        case 5:
          fVar9 = (float)VectorSignedToFloat(iVar2 * iVar6,(byte)(in_fpscr >> 0x16) & 3);
          fVar9 = fVar9 * fVar13 * (100.0 - fVar11 * fVar10 * 1.5) * 0.01 * fVar12;
          goto switchD_005fe474_default;
        case 3:
        case 4:
          iVar2 = (int)*(short *)(param_1 + 0x1c);
          sVar1 = 0;
          switch(param_2) {
          case 0:
            sVar1 = fn_00661770(iVar2);
            break;
          case 1:
            sVar1 = fn_0066178c(iVar2);
            break;
          case 2:
            sVar1 = fn_006612ec(iVar2);
            break;
          case 3:
            sVar1 = fn_006613b4(iVar2);
            break;
          case 4:
            sVar1 = fn_00661270(iVar2);
            break;
          case 5:
            sVar1 = fn_006610b0(iVar2);
          }
          fVar9 = (float)VectorSignedToFloat(sVar1 * 1000,(byte)(in_fpscr >> 0x16) & 3);
          fVar9 = fVar9 * fVar13;
          break;
        default:
          goto switchD_005fe474_default;
        }
        goto LAB_005fe5ac;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  fVar9 = (float)VectorSignedToFloat(iVar2 * iVar6,(byte)(in_fpscr >> 0x16) & 3);
  fVar9 = fVar9 * fVar13 * (100.0 - fVar11 * fVar10) * 0.01;
LAB_005fe5ac:
  fVar9 = fVar9 * fVar12;
switchD_005fe474_default:
  if (param_2 == 0) {
    fn_0020bbc4(auStack_50,param_1);
    local_f8 = 1;
    local_f4 = 1;
    local_f0 = 1;
    local_ec = 1;
    iVar2 = fn_006bf5ec(auStack_4c,local_e8,0x4c,1);
    iVar6 = 0;
    if (0 < iVar2) {
      do {
        sVar1 = local_e8[iVar6];
        if (sVar1 == 0x4e) {
          fVar8 = fVar8 * 0.2;
        }
        else if (sVar1 < 0x4e) {
          if (sVar1 == 0x4b) {
            fVar8 = fVar8 * 0.5;
          }
          else if (sVar1 == 0x4c) {
            fVar8 = fVar8 * 0.33333334;
          }
          else if (sVar1 == 0x4d) {
            fVar8 = fVar8 * 0.25;
          }
        }
        else if (sVar1 == 0x9e) {
          fVar8 = fVar8 * 0.875;
        }
        else if (sVar1 == 0x9f) {
          fVar8 = fVar8 * fVar14;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar2);
    }
    fVar9 = fVar9 * fVar8;
  }
  iVar2 = (int)fVar9;
  sVar1 = ((short)(iVar2 / 1000) + (short)(iVar2 >> 0x1f)) -
          (short)((longlong)iVar2 * 0x10624dd3 >> 0x3f);
  if (iVar2 % 1000 != 0) {
    sVar1 = sVar1 + 1;
  }
  return (int)sVar1;
}



/* WARNING: Removing unreachable block (ram,0x005fe15c) */
/* WARNING: Removing unreachable block (ram,0x005fe478) */

int fn_005fe128(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  bool bVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  short asStack_e8 [76];
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [48];
  
  iVar6 = fn_00661770((int)*(short *)(param_1 + 0x1c));
  fn_0020bbc4(&uStack_f8,param_1);
  iVar2 = fn_006bfe90(&uStack_f4);
  iVar2 = *(int *)(&DAT_007c42c0 + iVar2 * 4);
  fVar10 = 1.0;
  fVar14 = 0.75;
  if (*(byte *)(param_1 + 0x3c) < 100) {
    fVar9 = 0.75;
  }
  else {
    fVar9 = 1.0;
  }
  fn_0020bbc4(auStack_50,param_1);
  uStack_f8 = 1;
  uStack_f4 = 1;
  uStack_f0 = 1;
  uStack_ec = 1;
  iVar3 = fn_006bf5ec(auStack_4c,asStack_e8,0x4c,1);
  iVar4 = 0;
  if (0 < iVar3) {
    do {
      switch(asStack_e8[iVar4]) {
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
        fVar12 = 2.0;
        switch(asStack_e8[iVar4]) {
        case 0:
          goto switchD_005fe2cc_caseD_0;
        default:
          fVar12 = fVar10;
        case 2:
        case 3:
          goto switchD_005fe2cc_caseD_2;
        case 4:
          fVar12 = 3.0;
          goto switchD_005fe2cc_caseD_2;
        case 5:
          fVar12 = 3.5;
          goto switchD_005fe2cc_caseD_2;
        case 6:
          fVar12 = 4.0;
          goto switchD_005fe2cc_caseD_2;
        case 7:
          fVar12 = 4.5;
          goto switchD_005fe2cc_caseD_2;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
switchD_005fe2cc_caseD_0:
  fVar12 = 0.0;
switchD_005fe2cc_caseD_2:
  fn_0020bbc4(&uStack_f8,param_1);
  uVar5 = fn_006bfe90(&uStack_f4);
  fVar13 = 10.0;
  switch(uVar5) {
  default:
    break;
  case 2:
    fVar13 = 7.0;
    break;
  case 3:
    fVar13 = 6.0;
    break;
  case 4:
    fVar13 = 5.0;
  }
  if ((*(ushort *)(param_1 + 0x40) & 0x400) != 0) {
    bVar7 = *(byte *)(param_1 + 0x2e) == 100;
    if (*(byte *)(param_1 + 0x2e) < 0x65) {
      bVar7 = param_2 == 0;
    }
    if (!bVar7) {
      fVar11 = 1.1;
      goto LAB_005fe3d8;
    }
  }
  fVar11 = fVar10;
LAB_005fe3d8:
  fn_0020bbc4(auStack_50,param_1);
  uStack_f8 = 1;
  uStack_f4 = 1;
  uStack_f0 = 1;
  uStack_ec = 1;
  iVar3 = fn_006bf5ec(auStack_4c,asStack_e8,0x4c,1);
  iVar4 = 0;
  if (0 < iVar3) {
    do {
      sVar1 = asStack_e8[iVar4];
      if ((sVar1 == 0x4c || sVar1 == 0x4d) || sVar1 == 0x4e) {
        fVar8 = (float)VectorSignedToFloat(iVar6 * iVar2,(byte)(in_fpscr >> 0x16) & 3);
        fVar9 = fVar8 * fVar9 * (100.0 - fVar13 * fVar12 * 1.5);
        goto switchD_005fe474_default;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  fVar8 = (float)VectorSignedToFloat(iVar6 * iVar2,(byte)(in_fpscr >> 0x16) & 3);
  fVar9 = fVar8 * fVar9 * (100.0 - fVar13 * fVar12);
switchD_005fe474_default:
  fVar11 = fVar9 * 0.01 * fVar11;
  fn_0020bbc4(auStack_50,param_1);
  uStack_f8 = 1;
  uStack_f4 = 1;
  uStack_f0 = 1;
  uStack_ec = 1;
  iVar6 = fn_006bf5ec(auStack_4c,asStack_e8,0x4c,1);
  iVar2 = 0;
  if (0 < iVar6) {
    do {
      sVar1 = asStack_e8[iVar2];
      if (sVar1 == 0x4e) {
        fVar10 = fVar10 * 0.2;
      }
      else if (sVar1 < 0x4e) {
        if (sVar1 == 0x4b) {
          fVar10 = fVar10 * 0.5;
        }
        else if (sVar1 == 0x4c) {
          fVar10 = fVar10 * 0.33333334;
        }
        else if (sVar1 == 0x4d) {
          fVar10 = fVar10 * 0.25;
        }
      }
      else if (sVar1 == 0x9e) {
        fVar10 = fVar10 * 0.875;
      }
      else if (sVar1 == 0x9f) {
        fVar10 = fVar10 * fVar14;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar6);
  }
  iVar6 = (int)(fVar11 * fVar10);
  sVar1 = ((short)(iVar6 / 1000) + (short)(iVar6 >> 0x1f)) -
          (short)((longlong)iVar6 * 0x10624dd3 >> 0x3f);
  if (iVar6 % 1000 != 0) {
    sVar1 = sVar1 + 1;
  }
  return (int)sVar1;
}


