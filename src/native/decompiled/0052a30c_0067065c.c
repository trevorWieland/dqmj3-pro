#include "0052a30c_0067065c.h"



undefined4 fn_0067065c(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint local_18;
  
  uVar2 = 0;
  iVar1 = param_1[0x12];
  local_18 = param_4;
  if (iVar1 == 0) {
    fn_0066eb80(DAT_00898840,0xb);
    fn_00673f7c();
    (**(code **)(*param_1 + 0x34))(param_1,1);
  }
  else if (iVar1 == 1) {
    iVar1 = fn_0066eb80(DAT_00898840,0xb);
    if ((*(byte *)(iVar1 + 0x4c) & 1) != 0) {
      iVar1 = fn_0066eb80(DAT_00898840,3);
      (**(code **)(*DAT_008bf4f4 + 8))(DAT_008bf4f4,*(undefined4 *)(iVar1 + 0x8c));
      (**(code **)(*DAT_008bf4f4 + 0x14))();
      param_1[0x13] = param_1[0x13] | 4;
      (**(code **)(*param_1 + 0x34))(param_1,2);
    }
  }
  else if (iVar1 == 2) {
    iVar1 = (**(code **)(*DAT_008bf4f4 + 0x18))();
    if (iVar1 != 0) {
      param_1[0x13] = param_1[0x13] & 0xfffffffbU | 2;
      local_18 = (**(code **)(*DAT_008bf4f4 + 0x1c))();
      if ((local_18 & 0x80000000) == 0) {
        (**(code **)(*param_1 + 0x34))(param_1,3);
      }
      else {
        iVar1 = fn_004daa68(&local_18);
        param_1[0x1d] = 0;
        *(undefined1 *)(param_1 + 0x1e) = 0;
        param_1[0x1c] = iVar1;
        param_1[0x1d] = (uint)(iVar1 != 0);
        uVar2 = 0xffffffff;
        *(undefined1 *)(param_1 + 0x1e) = 1;
      }
    }
  }
  else if ((iVar1 == 3) && (iVar1 = fn_00673be8(param_1), iVar1 == 0)) {
    (**(code **)(*param_1 + 0x30))(param_1,0);
  }
  return uVar2;
}



int * fn_005518e4(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_b0;
  int local_ac;
  undefined1 auStack_a8 [140];
  
  local_b0 = *(undefined4 *)(param_1 + 0x20);
  local_ac = param_2;
  fn_0017d96c(auStack_a8,0x88,0x87,(char *)&DAT_007d8878);
  uVar2 = (**(code **)(**(int **)(param_1 + 0x24) + 0xc))
                    (*(int **)(param_1 + 0x24),0x616e696d,auStack_a8,0);
  fn_0017dcb0(&local_b0,uVar2);
  iVar1 = local_ac;
  if (local_ac == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    iVar3 = (**(code **)(*DAT_0089a918 + 8))(DAT_0089a918,0x34,4);
    if (iVar3 == 0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)fn_0019530c();
      *piVar4 = (int)&DAT_008579c8;
      piVar4[0xc] = 0;
      fn_0017d948(param_1 + 4,param_1 + 8,piVar4 + 1);
    }
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0x20))(piVar4,iVar1,*(undefined4 *)(param_1 + 0x24));
    }
  }
  fn_0054a8d8(piVar4,param_3,param_4);
  return piVar4;
}



void fn_005381ac(int param_1,float *param_2)

{
  uint *puVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  puVar1 = DAT_008c3450;
  iVar6 = *(int *)(param_1 + 0x150);
  *DAT_008c3450 = DAT_008c3454 * 10 + 1U | 0x80000000;
  puVar1[1] = 0xf02c0;
  iVar4 = *(int *)(iVar6 + 0xcc);
  pfVar2 = *(float **)(param_1 + 0x140);
  iVar3 = *(int *)(param_1 + 0x144);
  puVar1[3] = DAT_008c345c * 0x400000 - 0x100000U | 0xf02c1;
  if (iVar4 == 2) {
    uVar10 = *(undefined4 *)(iVar6 + 0x74);
    uVar12 = *(undefined4 *)(iVar6 + 0x84);
    uVar14 = *(undefined4 *)(iVar6 + 0x34);
    uVar16 = *(undefined4 *)(iVar6 + 0x44);
    uVar17 = *(undefined4 *)(iVar6 + 0x54);
    *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(iVar6 + 100);
    *(undefined4 *)(param_1 + 0x128) = uVar10;
    *(undefined4 *)(param_1 + 0x138) = uVar12;
    *(undefined4 *)(param_1 + 0xe8) = uVar14;
    *(undefined4 *)(param_1 + 0xf8) = uVar16;
    *(undefined4 *)(param_1 + 0x108) = uVar17;
  }
  if (*(char *)(iVar6 + 0x293) != '\0') {
    uVar5 = *(uint *)(param_1 + 0x40);
    uVar7 = *(uint *)(param_1 + 0x44);
    puVar1[0x1a] = *(uint *)(param_1 + 0x3c);
    puVar1[0x19] = uVar5;
    puVar1[0x18] = uVar7;
  }
  fVar9 = *(float *)(param_1 + 0x10);
  fVar19 = pfVar2[5];
  fVar26 = pfVar2[1];
  fVar13 = *(float *)(param_1 + 0x14);
  fVar11 = *(float *)(param_1 + 0xc);
  fVar23 = pfVar2[6];
  fVar18 = pfVar2[7];
  fVar25 = pfVar2[4];
  fVar22 = pfVar2[2];
  fVar15 = pfVar2[3];
  fVar24 = *pfVar2;
  fVar20 = *param_2;
  fVar21 = param_2[1];
  puVar1[0x14] = (uint)(pfVar2[9] * fVar9 + pfVar2[10] * fVar13 + pfVar2[0xb] + pfVar2[8] * fVar11 +
                       param_2[2]);
  puVar1[0x15] = (uint)(fVar19 * fVar9 + fVar23 * fVar13 + fVar18 + fVar25 * fVar11 + fVar21);
  puVar1[0x16] = (uint)(fVar26 * fVar9 + fVar22 * fVar13 + fVar15 + fVar24 * fVar11 + fVar20);
  puVar1[0x17] = 0;
  puVar1[2] = (uint)(*(float *)(param_1 + 0x60) * *(float *)(param_1 + 0xb4));
  uVar5 = *(uint *)(param_1 + 0x94);
  uVar7 = *(uint *)(param_1 + 0x74);
  fVar9 = *(float *)(param_1 + 0x6c);
  iVar4 = param_1 + DAT_008c3460 * 0x10;
  fVar13 = *(float *)(param_1 + 0x68);
  fVar11 = *(float *)(param_1 + 0xb8);
  puVar1[4] = *(uint *)(iVar4 + 0xc4);
  puVar1[5] = *(uint *)(iVar4 + 0xc0);
  puVar1[6] = *(uint *)(iVar4 + 0xbc);
  puVar1[7] = uVar5;
  puVar1[8] = uVar7;
  fVar15 = *(float *)(iVar3 + 0x504);
  fVar13 = fVar13 * DAT_008c346c;
  fVar9 = fVar9 * DAT_008c3470 * fVar11;
  if (0.0 < fVar15) {
    fVar9 = fVar9 + (SQRT(*(float *)(param_1 + 0x24) * *(float *)(param_1 + 0x24) +
                          *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x28) +
                          *(float *)(param_1 + 0x2c) * *(float *)(param_1 + 0x2c)) +
                    SQRT(*(float *)(param_1 + 0x18) * *(float *)(param_1 + 0x18) +
                         *(float *)(param_1 + 0x1c) * *(float *)(param_1 + 0x1c) +
                         *(float *)(param_1 + 0x20) * *(float *)(param_1 + 0x20))) * fVar15;
  }
  uVar5 = *(uint *)(param_1 + 0x88);
  uVar7 = *(uint *)(param_1 + 0x8c);
  puVar1[9] = (uint)fVar9;
  puVar1[10] = (uint)(fVar13 * fVar11);
  puVar1[0xc] = uVar5;
  puVar1[0xb] = uVar7;
  puVar1[0xd] = (uint)(*(float *)(param_1 + 0x7c) - *(float *)(param_1 + 0x84));
  puVar1[0xe] = (uint)(*(float *)(param_1 + 0x78) + *(float *)(param_1 + 0x80));
  uVar5 = *(uint *)(param_1 + 0xac);
  uVar7 = *(uint *)(param_1 + 0xa8);
  puVar1[0x13] = *(uint *)(param_1 + 0x90);
  puVar1[0xf] = uVar5;
  puVar1[0x10] = uVar7;
  puVar1[0x11] = (uint)(*(float *)(param_1 + 0x9c) - *(float *)(param_1 + 0xa4));
  puVar1[0x12] = (uint)(*(float *)(param_1 + 0x98) + *(float *)(param_1 + 0xa0));
  uVar7 = *(uint *)(param_1 + 0x50);
  uVar5 = *(uint *)(param_1 + 0x48);
  uVar8 = *(uint *)(param_1 + 0x4c);
  puVar1[0x17] = *(uint *)(param_1 + 0xb0);
  puVar1[0x1e] = uVar5;
  puVar1[0x1c] = uVar7;
  puVar1[0x1d] = uVar8;
  return;
}



/* WARNING: Removing unreachable block (ram,0x0052a44c) */
/* WARNING: Removing unreachable block (ram,0x0052a464) */
/* WARNING: Removing unreachable block (ram,0x0052a470) */
/* WARNING: Removing unreachable block (ram,0x0052a478) */
/* WARNING: Removing unreachable block (ram,0x0052a480) */
/* WARNING: Removing unreachable block (ram,0x0052a488) */
/* WARNING: Removing unreachable block (ram,0x0052a498) */
/* WARNING: Removing unreachable block (ram,0x0052a528) */
/* WARNING: Removing unreachable block (ram,0x0052a4b8) */
/* WARNING: Removing unreachable block (ram,0x0052a4c8) */

int fn_0052a30c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  int *unaff_r6;
  int iVar3;
  int local_3c [2];
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uStack_34 = param_1;
  local_30 = param_2;
  uStack_2c = param_3;
  uStack_28 = param_4;
  fn_00170704();
  if ((DAT_008ec111 == '\0') || (DAT_008ec112 != '\0')) {
    iVar3 = -0x375f8c08;
    fn_001707b4(&DAT_008ec0e0);
  }
  else if ((DAT_008ec0d8 == (int *)0x0) && (iVar3 = fn_0019f340(&DAT_008ec0d0), iVar3 < 0)) {
    fn_001707b4(&DAT_008ec0e0);
  }
  else {
    unaff_r6 = DAT_008ec0d8;
    if (DAT_008ec0d8 == (int *)0x0) {
      unaff_r6 = (int *)0x0;
    }
    else {
      if ((int *)*DAT_008ec0d8 == DAT_008ec0d8) {
        DAT_008ec0d8 = (int *)0x0;
      }
      else {
        iVar3 = *DAT_008ec0d8;
        piVar1 = DAT_008ec0d8 + 1;
        DAT_008ec0d8 = (int *)DAT_008ec0d8[1];
        *(int *)*piVar1 = iVar3;
        *(int *)(*unaff_r6 + 4) = unaff_r6[1];
      }
      unaff_r6[1] = 0;
      *unaff_r6 = 0;
    }
    piVar1 = DAT_008ec0d4;
    DAT_008ec0fc = DAT_008ec0fc + -1;
    if (DAT_008ec0d4 == (int *)0x0) {
      unaff_r6[1] = (int)unaff_r6;
      *unaff_r6 = (int)unaff_r6;
      DAT_008ec0d4 = unaff_r6;
    }
    else {
      unaff_r6[1] = (int)DAT_008ec0d4;
      *(int **)(*piVar1 + 4) = unaff_r6;
      *unaff_r6 = *piVar1;
      *piVar1 = (int)unaff_r6;
    }
    iVar3 = 0;
    DAT_008ec0f4 = DAT_008ec0f4 + 1;
    fn_001707b4(&DAT_008ec0e0);
  }
  if (-1 < iVar3) {
    local_3c[0] = unaff_r6[2];
    iVar3 = fn_0052abf4(local_3c,param_1,local_30,uStack_2c,param_4);
    if (-1 < iVar3) {
      if (unaff_r6 != (int *)0x0) {
        fn_00170704(&DAT_008ec0e0);
        if (DAT_008ec111 == '\0') {
          fn_001707b4(&DAT_008ec0e0);
        }
        else {
          if ((int *)*unaff_r6 == unaff_r6) {
            DAT_008ec0d4 = (int *)0x0;
          }
          else {
            if (DAT_008ec0d4 == unaff_r6) {
              DAT_008ec0d4 = (int *)DAT_008ec0d4[1];
            }
            *(int *)unaff_r6[1] = *unaff_r6;
            *(int *)(*unaff_r6 + 4) = unaff_r6[1];
          }
          unaff_r6[1] = 0;
          *unaff_r6 = 0;
          piVar2 = DAT_008ec0dc;
          piVar1 = DAT_008ec0d8;
          DAT_008ec0f4 = DAT_008ec0f4 + -1;
          if (unaff_r6[2] == 0) {
            if (DAT_008ec0dc == (int *)0x0) {
              unaff_r6[1] = (int)unaff_r6;
              *unaff_r6 = (int)unaff_r6;
              DAT_008ec0dc = unaff_r6;
            }
            else {
              unaff_r6[1] = (int)DAT_008ec0dc;
              *(int **)(*piVar2 + 4) = unaff_r6;
              *unaff_r6 = *piVar2;
              *piVar2 = (int)unaff_r6;
            }
            DAT_008ec0f8 = DAT_008ec0f8 + 1;
          }
          else {
            if (DAT_008ec0d8 == (int *)0x0) {
              unaff_r6[1] = (int)unaff_r6;
              *unaff_r6 = (int)unaff_r6;
              DAT_008ec0d8 = unaff_r6;
            }
            else {
              unaff_r6[1] = (int)DAT_008ec0d8;
              *(int **)(*piVar1 + 4) = unaff_r6;
              *unaff_r6 = *piVar1;
              *piVar1 = (int)unaff_r6;
            }
            DAT_008ec0fc = DAT_008ec0fc + 1;
          }
          fn_0015dfc0(&DAT_008ec0ec);
          fn_001707b4(&DAT_008ec0e0);
        }
      }
      return 0;
    }
    if (unaff_r6 != (int *)0x0) {
      fn_00170704();
      if (DAT_008ec111 == '\0') {
        fn_001707b4(&DAT_008ec0e0);
      }
      else {
        if ((int *)*unaff_r6 == unaff_r6) {
          DAT_008ec0d4 = (int *)0x0;
        }
        else {
          if (DAT_008ec0d4 == unaff_r6) {
            DAT_008ec0d4 = (int *)DAT_008ec0d4[1];
          }
          *(int *)unaff_r6[1] = *unaff_r6;
          *(int *)(*unaff_r6 + 4) = unaff_r6[1];
        }
        unaff_r6[1] = 0;
        *unaff_r6 = 0;
        piVar2 = DAT_008ec0dc;
        piVar1 = DAT_008ec0d8;
        DAT_008ec0f4 = DAT_008ec0f4 + -1;
        if (unaff_r6[2] == 0) {
          if (DAT_008ec0dc == (int *)0x0) {
            unaff_r6[1] = (int)unaff_r6;
            *unaff_r6 = (int)unaff_r6;
            DAT_008ec0dc = unaff_r6;
          }
          else {
            unaff_r6[1] = (int)DAT_008ec0dc;
            *(int **)(*piVar2 + 4) = unaff_r6;
            *unaff_r6 = *piVar2;
            *piVar2 = (int)unaff_r6;
          }
          DAT_008ec0f8 = DAT_008ec0f8 + 1;
        }
        else {
          if (DAT_008ec0d8 == (int *)0x0) {
            unaff_r6[1] = (int)unaff_r6;
            *unaff_r6 = (int)unaff_r6;
            DAT_008ec0d8 = unaff_r6;
          }
          else {
            unaff_r6[1] = (int)DAT_008ec0d8;
            *(int **)(*piVar1 + 4) = unaff_r6;
            *unaff_r6 = *piVar1;
            *piVar1 = (int)unaff_r6;
          }
          DAT_008ec0fc = DAT_008ec0fc + 1;
        }
        fn_0015dfc0(&DAT_008ec0ec);
        fn_001707b4(&DAT_008ec0e0);
      }
    }
  }
  return iVar3;
}


