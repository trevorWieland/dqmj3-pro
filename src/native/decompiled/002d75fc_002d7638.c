#include "002d75fc_002d7638.h"



void fn_002d7638(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = 0;
  uVar2 = *(uint *)(param_1 + 8);
  *(undefined4 *)(param_1 + 8) = 0;
  iVar3 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar1 = uVar4;
  if (uVar2 < uVar4) {
    do {
      uVar1 = uVar1 + 4;
    } while (uVar1 != uVar2);
  }
  fn_002feef8(uVar4,(int)(iVar3 - uVar4) >> 2,0);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0060c974) */
/* WARNING: Removing unreachable block (ram,0x0060c700) */
/* WARNING: Removing unreachable block (ram,0x0060c9c0) */
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

int fn_002d7604(int param_1)

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
  
  iVar5 = fn_0020b108((int)*(short *)(param_1 + 0x1c));
  fn_002d7624(&uStack_e0,param_1);
  iVar2 = fn_006c6a38(&uStack_dc);
  iVar2 = *(int *)(&UNK_007c3454 + iVar2 * 4);
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
        sVar1 = fn_0020b108((int)*(short *)(param_1 + 0x1c));
        fVar7 = (float)VectorSignedToFloat(sVar1 * 1000,(byte)(in_fpscr >> 0x16) & 3);
        fVar7 = fVar7 * fVar8;
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

int fn_002d75fc(int param_1)

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
  
  iVar5 = fn_0020b058((int)*(short *)(param_1 + 0x1c));
  fn_002d7624(&uStack_e0,param_1);
  iVar2 = fn_006c6a38(&uStack_dc);
  iVar2 = *(int *)(&UNK_007c3440 + iVar2 * 4);
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


