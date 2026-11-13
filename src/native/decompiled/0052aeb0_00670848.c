#include "0052aeb0_00670848.h"



undefined4 fn_00670848(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_28 [24];
  
  fn_00673cb8();
  switch(param_1[0x11]) {
  default:
    goto switchD_00670864_caseD_0;
  case 1:
    iVar2 = fn_006703a8(param_1);
    break;
  case 2:
    iVar2 = fn_0067065c(param_1);
    break;
  case 3:
    iVar2 = fn_0066eb80(DAT_00898840,0xb);
    iVar1 = param_1[0x12];
    if (iVar1 == 0) {
      fn_006741c8(iVar2);
      (**(code **)(*param_1 + 0x34))(param_1,1);
      return 1;
    }
    if (iVar1 == 1) {
      if ((*(byte *)(iVar2 + 0x4c) & 0x10) == 0) {
        return 1;
      }
      if (DAT_008bf4f4 != (int *)0x0) {
        (**(code **)(*DAT_008bf4f4 + 0x24))();
        (**(code **)(*DAT_008bf4f4 + 0xc))();
      }
      *(uint *)(iVar2 + 0x4c) = *(uint *)(iVar2 + 0x4c) & 0xffffffef;
      param_1[0x13] = param_1[0x13] & 0xfffffffd;
      (**(code **)(*param_1 + 0x34))(param_1,2);
      return 1;
    }
    if (iVar1 != 2) {
      return 1;
    }
    iVar2 = fn_00673be8(param_1);
    goto joined_r0x006709f0;
  case 4:
    iVar2 = fn_00670258(param_1);
    break;
  case 5:
    if (param_1[0x12] == 0) {
      fn_004d51ac();
      fn_004d4b08();
      param_1[0x13] = 0;
      (**(code **)(*param_1 + 0x34))(param_1,1);
      return 1;
    }
    if (param_1[0x12] != 1) {
      return 1;
    }
    iVar2 = fn_00673be8(param_1);
joined_r0x006709f0:
    if (iVar2 == 0) {
      (**(code **)(*param_1 + 0x30))(param_1,0);
    }
    goto switchD_00670864_caseD_0;
  }
  if (iVar2 != 0) {
    fn_00119b40(auStack_28);
    (**(code **)(*param_1 + 0x24))(param_1,auStack_28);
    fn_0066e870(DAT_00898840,auStack_28);
  }
switchD_00670864_caseD_0:
  return 1;
}



void fn_005519ec(int param_1,int *param_2)

{
  fn_0017d90c(param_1 + 4,param_2 + 1);
  if (param_2 == (int *)0x0) {
    return;
  }
  (**(code **)(*param_2 + 4))(param_2);
                    /* WARNING: Could not recover jumptable at 0x00551a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_0089a918 + 0xc))(DAT_0089a918,param_2);
  return;
}



void fn_00538498(int param_1,float *param_2)

{
  uint *puVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  uint uVar7;
  float fVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  puVar1 = DAT_008c3450;
  pfVar3 = *(float **)(param_1 + 0x140);
  fVar8 = *(float *)(param_1 + 0xc);
  iVar2 = DAT_008c3454 * 10;
  fVar4 = *(float *)(param_1 + 0x10);
  fVar6 = *(float *)(param_1 + 0x14);
  DAT_008c3450[1] = 0xf02c0;
  *puVar1 = iVar2 + 1U | 0x80000000;
  puVar1[3] = DAT_008c345c * 0x400000 - 0x100000U | 0xf02c1;
  fVar13 = pfVar3[9];
  fVar11 = pfVar3[5];
  fVar17 = pfVar3[6];
  fVar12 = pfVar3[7];
  fVar19 = pfVar3[4];
  fVar18 = pfVar3[10];
  fVar14 = pfVar3[0xb];
  fVar20 = pfVar3[8];
  fVar15 = param_2[1];
  fVar16 = param_2[2];
  puVar1[0x16] = (uint)(pfVar3[1] * fVar4 + pfVar3[2] * fVar6 + pfVar3[3] + *pfVar3 * fVar8 +
                       *param_2);
  puVar1[0x14] = (uint)(fVar13 * fVar4 + fVar18 * fVar6 + fVar14 + fVar20 * fVar8 + fVar16);
  puVar1[0x15] = (uint)(fVar11 * fVar4 + fVar17 * fVar6 + fVar12 + fVar19 * fVar8 + fVar15);
  puVar1[0x17] = 0;
  puVar1[2] = *(uint *)(param_1 + 0x60);
  uVar5 = *(uint *)(param_1 + 0x94);
  uVar7 = *(uint *)(param_1 + 0x74);
  fVar4 = *(float *)(param_1 + 0x68);
  iVar2 = param_1 + DAT_008c3460 * 0x10;
  fVar6 = *(float *)(param_1 + 0x6c);
  uVar9 = *(uint *)(param_1 + 0x8c);
  uVar10 = *(uint *)(param_1 + 0x88);
  puVar1[4] = *(uint *)(iVar2 + 0xc4);
  puVar1[5] = *(uint *)(iVar2 + 0xc0);
  puVar1[6] = *(uint *)(iVar2 + 0xbc);
  puVar1[7] = uVar5;
  puVar1[8] = uVar7;
  fVar4 = fVar4 * DAT_008c346c;
  puVar1[9] = (uint)(fVar6 * DAT_008c3470);
  puVar1[10] = (uint)fVar4;
  puVar1[0xb] = uVar9;
  puVar1[0xc] = uVar10;
  puVar1[0xd] = (uint)(*(float *)(param_1 + 0x7c) - *(float *)(param_1 + 0x84));
  puVar1[0xe] = (uint)(*(float *)(param_1 + 0x78) + *(float *)(param_1 + 0x80));
  uVar5 = *(uint *)(param_1 + 0x50);
  uVar7 = *(uint *)(param_1 + 0x4c);
  puVar1[0x1e] = *(uint *)(param_1 + 0x48);
  puVar1[0x1c] = uVar5;
  puVar1[0x1d] = uVar7;
  return;
}



/* WARNING: Removing unreachable block (ram,0x0052b020) */
/* WARNING: Removing unreachable block (ram,0x0052b038) */
/* WARNING: Removing unreachable block (ram,0x0052b044) */
/* WARNING: Removing unreachable block (ram,0x0052b04c) */
/* WARNING: Removing unreachable block (ram,0x0052b054) */
/* WARNING: Removing unreachable block (ram,0x0052b05c) */
/* WARNING: Removing unreachable block (ram,0x0052b06c) */
/* WARNING: Removing unreachable block (ram,0x0052b0ec) */
/* WARNING: Removing unreachable block (ram,0x0052b08c) */
/* WARNING: Removing unreachable block (ram,0x0052b09c) */

int fn_0052aeb0(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int *unaff_r8;
  int *piVar3;
  int local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  local_2c = param_1;
  uStack_28 = param_2;
  while( true ) {
    fn_00170704(&DAT_008ec0e0);
    if ((DAT_008ec111 == '\0') || (DAT_008ec112 != '\0')) {
      fn_001707b4(&DAT_008ec0e0);
      iVar2 = -0x375f8c08;
    }
    else if ((DAT_008ec0d8 == (int *)0x0) && (iVar2 = fn_0019f340(&DAT_008ec0d0), iVar2 < 0)) {
      fn_001707b4(&DAT_008ec0e0);
    }
    else {
      unaff_r8 = DAT_008ec0d8;
      if (DAT_008ec0d8 != (int *)0x0) {
        if ((int *)*DAT_008ec0d8 == DAT_008ec0d8) {
          DAT_008ec0d8 = (int *)0x0;
        }
        else {
          iVar2 = *DAT_008ec0d8;
          piVar3 = DAT_008ec0d8 + 1;
          DAT_008ec0d8 = (int *)DAT_008ec0d8[1];
          *(int *)*piVar3 = iVar2;
          *(int *)(*unaff_r8 + 4) = unaff_r8[1];
        }
        unaff_r8[1] = 0;
        *unaff_r8 = 0;
      }
      piVar3 = DAT_008ec0d4;
      DAT_008ec0fc = DAT_008ec0fc + -1;
      if (DAT_008ec0d4 == (int *)0x0) {
        unaff_r8[1] = (int)unaff_r8;
        *unaff_r8 = (int)unaff_r8;
        DAT_008ec0d4 = unaff_r8;
      }
      else {
        unaff_r8[1] = (int)DAT_008ec0d4;
        *(int **)(*piVar3 + 4) = unaff_r8;
        *unaff_r8 = *piVar3;
        *piVar3 = (int)unaff_r8;
      }
      iVar2 = 0;
      DAT_008ec0f4 = DAT_008ec0f4 + 1;
      fn_001707b4(&DAT_008ec0e0);
    }
    if ((-1 < iVar2) || (iVar2 * -0x400000 != -0x2000000)) break;
    fn_0015def0(&DAT_008ec0ec);
  }
  if (-1 < iVar2) {
    local_30 = unaff_r8[2];
    iVar2 = fn_0052ac54(&local_30,local_2c,uStack_28);
    if (-1 < iVar2) {
      if (unaff_r8 != (int *)0x0) {
        fn_00170704();
        if (DAT_008ec111 == '\0') {
          fn_001707b4(&DAT_008ec0e0);
        }
        else {
          if ((int *)*unaff_r8 == unaff_r8) {
            DAT_008ec0d4 = (int *)0x0;
          }
          else {
            if (DAT_008ec0d4 == unaff_r8) {
              DAT_008ec0d4 = (int *)DAT_008ec0d4[1];
            }
            *(int *)unaff_r8[1] = *unaff_r8;
            *(int *)(*unaff_r8 + 4) = unaff_r8[1];
          }
          unaff_r8[1] = 0;
          *unaff_r8 = 0;
          piVar1 = DAT_008ec0dc;
          piVar3 = DAT_008ec0d8;
          DAT_008ec0f4 = DAT_008ec0f4 + -1;
          if (unaff_r8[2] == 0) {
            if (DAT_008ec0dc == (int *)0x0) {
              unaff_r8[1] = (int)unaff_r8;
              *unaff_r8 = (int)unaff_r8;
              DAT_008ec0dc = unaff_r8;
            }
            else {
              unaff_r8[1] = (int)DAT_008ec0dc;
              *(int **)(*piVar1 + 4) = unaff_r8;
              *unaff_r8 = *piVar1;
              *piVar1 = (int)unaff_r8;
            }
            DAT_008ec0f8 = DAT_008ec0f8 + 1;
          }
          else {
            if (DAT_008ec0d8 == (int *)0x0) {
              unaff_r8[1] = (int)unaff_r8;
              *unaff_r8 = (int)unaff_r8;
              DAT_008ec0d8 = unaff_r8;
            }
            else {
              unaff_r8[1] = (int)DAT_008ec0d8;
              *(int **)(*piVar3 + 4) = unaff_r8;
              *unaff_r8 = *piVar3;
              *piVar3 = (int)unaff_r8;
            }
            DAT_008ec0fc = DAT_008ec0fc + 1;
          }
          fn_0015dfc0(&DAT_008ec0ec);
          fn_001707b4(&DAT_008ec0e0);
        }
      }
      return 0;
    }
    if (unaff_r8 != (int *)0x0) {
      fn_00170704(&DAT_008ec0e0);
      if (DAT_008ec111 == '\0') {
        fn_001707b4(&DAT_008ec0e0);
      }
      else {
        if ((int *)*unaff_r8 == unaff_r8) {
          DAT_008ec0d4 = (int *)0x0;
        }
        else {
          if (DAT_008ec0d4 == unaff_r8) {
            DAT_008ec0d4 = (int *)DAT_008ec0d4[1];
          }
          *(int *)unaff_r8[1] = *unaff_r8;
          *(int *)(*unaff_r8 + 4) = unaff_r8[1];
        }
        unaff_r8[1] = 0;
        *unaff_r8 = 0;
        piVar1 = DAT_008ec0dc;
        piVar3 = DAT_008ec0d8;
        DAT_008ec0f4 = DAT_008ec0f4 + -1;
        if (unaff_r8[2] == 0) {
          if (DAT_008ec0dc == (int *)0x0) {
            unaff_r8[1] = (int)unaff_r8;
            *unaff_r8 = (int)unaff_r8;
            DAT_008ec0dc = unaff_r8;
          }
          else {
            unaff_r8[1] = (int)DAT_008ec0dc;
            *(int **)(*piVar1 + 4) = unaff_r8;
            *unaff_r8 = *piVar1;
            *piVar1 = (int)unaff_r8;
          }
          DAT_008ec0f8 = DAT_008ec0f8 + 1;
        }
        else {
          if (DAT_008ec0d8 == (int *)0x0) {
            unaff_r8[1] = (int)unaff_r8;
            *unaff_r8 = (int)unaff_r8;
            DAT_008ec0d8 = unaff_r8;
          }
          else {
            unaff_r8[1] = (int)DAT_008ec0d8;
            *(int **)(*piVar3 + 4) = unaff_r8;
            *unaff_r8 = *piVar3;
            *piVar3 = (int)unaff_r8;
          }
          DAT_008ec0fc = DAT_008ec0fc + 1;
        }
        fn_0015dfc0(&DAT_008ec0ec);
        fn_001707b4(&DAT_008ec0e0);
      }
    }
  }
  return iVar2;
}


