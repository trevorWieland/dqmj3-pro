#include "002d7398_002d75f4.h"



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

int fn_002d75f4(int param_1)

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
  
  iVar5 = fn_0020afdc((int)*(short *)(param_1 + 0x1c));
  fn_002d7624(&uStack_e0,param_1);
  iVar2 = fn_006c6a38(&uStack_dc);
  iVar2 = *(int *)(&UNK_007c3468 + iVar2 * 4);
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
        sVar1 = fn_0020afdc((int)*(short *)(param_1 + 0x1c));
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



uint fn_002d74e4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined1 param_6,undefined1 param_7)

{
  undefined4 *puVar1;
  undefined1 auStack_218 [60];
  undefined1 local_1dc;
  undefined1 auStack_12c [60];
  undefined1 local_f0;
  undefined1 auStack_40 [8];
  uint local_38;
  undefined1 auStack_34 [20];
  
  fn_003147d4(auStack_218,param_4);
  fn_003147d4(auStack_12c,param_5);
  local_1dc = param_6;
  local_f0 = param_7;
  local_38 = 0;
  puVar1 = (undefined4 *)fn_00101a1c(auStack_34,&LAB_002d7300,4,5);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[-3] = auStack_218;
  puVar1[-2] = auStack_12c;
  fn_002d7124(auStack_40,0);
  fn_002d6e98(auStack_40);
  fn_002d6fb0(auStack_40);
  if (local_38 < 2) {
    fn_002d7124(auStack_40,1);
    fn_002d7124(auStack_40,2);
  }
  else if (local_38 < 3) {
    fn_002d7124(auStack_40,1);
  }
  fn_006baa60(auStack_40,param_1,0);
  fn_006baa60(auStack_40,param_2,1);
  fn_006baa60(auStack_40,param_3,2);
  return local_38;
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

int fn_002d74dc(int param_1)

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
  
  iVar5 = fn_0020ae1c((int)*(short *)(param_1 + 0x1c));
  fn_002d7624(&uStack_e0,param_1);
  iVar2 = fn_006c6a38(&uStack_dc);
  iVar2 = *(int *)(&UNK_007c347c + iVar2 * 4);
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



undefined4 fn_002d7398(int param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  short local_30;
  short local_2e;
  short local_2c;
  short local_2a;
  
  iVar5 = fn_002d6c68();
  iVar9 = 0;
  if (0 < iVar5) {
    do {
      fn_002d6cb0(iVar9,&local_30,4);
      iVar7 = 0;
      iVar8 = 0;
      bVar1 = false;
      bVar2 = false;
      bVar3 = false;
      bVar4 = false;
      do {
        if ((bVar4) || (local_30 != *(short *)(param_1 + iVar8 * 2))) {
          if ((bVar3) || (local_2e != *(short *)(param_1 + iVar8 * 2))) {
            if ((bVar2) || (local_2c != *(short *)(param_1 + iVar8 * 2))) {
              if ((bVar1) || (local_2a != *(short *)(param_1 + iVar8 * 2))) break;
              bVar1 = true;
            }
            else {
              bVar2 = true;
            }
          }
          else {
            bVar3 = true;
          }
        }
        else {
          bVar4 = true;
        }
        iVar7 = iVar7 + 1;
        iVar8 = (int)(short)((short)iVar8 + 1);
      } while (iVar8 < 4);
      if (iVar7 == 4) {
        uVar6 = fn_002d6c94(iVar9);
        return uVar6;
      }
      iVar9 = (int)(short)((short)iVar9 + 1);
    } while (iVar9 < iVar5);
  }
  return 0;
}


