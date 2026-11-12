#include "006c0354_006c0c98.h"



void fn_006c0c98(void)

{
  fn_0068cafc(DAT_008977e8);
  return;
}



bool fn_006c0c30(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  iVar1 = fn_0068cafc(DAT_008977e8);
  fVar3 = *(float *)(param_2 + 8) - *(float *)(param_1 + 8);
  fVar4 = *(float *)(param_2 + 0xc) - *(float *)(param_1 + 0xc);
  fVar2 = *(float *)(param_2 + 0x10) - *(float *)(param_1 + 0x10);
  return SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2) < *(float *)(iVar1 + 0x2c8);
}



undefined4 fn_006c0b14(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [4];
  byte local_14;
  
  iVar1 = fn_006ada74(DAT_00897820);
  if (iVar1 != 0) {
    return 0;
  }
  uVar2 = fn_006b86f4(*(undefined4 *)(DAT_00897804 + 0x30));
  fn_00166824(auStack_18,uVar2);
  if ((99 < local_14) || (iVar1 = fn_00292f20(), *(char *)(iVar1 + 0xad3) != '\0')) {
    fn_002cd854(*(undefined4 *)(DAT_00897820 + 0x50));
    return 1;
  }
  uVar2 = 0;
  fn_00664a8c(auStack_20);
  iVar1 = fn_006649e0(auStack_20);
  if (iVar1 == 2) {
    iVar1 = fn_00662bd0();
    iVar1 = fn_006f5d6c(*(undefined4 *)(iVar1 + 0x30),0);
    if (iVar1 != 0) {
      uVar2 = 1;
      fn_00664a14(auStack_20);
      fn_002cd854(*(undefined4 *)(DAT_00897820 + 0x50));
      goto LAB_006c0bf0;
    }
  }
  fn_00664a14(auStack_20);
LAB_006c0bf0:
  fn_00664a98(auStack_20);
  return uVar2;
}



int fn_006c09b4(int *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  short local_b8 [78];
  
  sVar1 = *(short *)(*param_1 + 0x26);
  sVar2 = *(short *)(*param_1 + 0x88);
  fn_00301f50(local_b8,0x98);
  iVar4 = fn_006bf5ec(param_1,local_b8,0x4c,1,1,1,1,1);
  sVar6 = 0;
  iVar7 = 0;
  if (0 < iVar4) {
    do {
      iVar5 = 0;
      do {
        if (((&DAT_007c41ce)[iVar5] & 0xffff) == (int)local_b8[iVar7]) {
          sVar6 = sVar6 + (short)((uint)(&DAT_007c41ce)[iVar5] >> 0x10);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 10);
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar4);
  }
  if (*(int *)(*param_1 + 0xe0) == 0) {
    sVar3 = 0;
  }
  else {
    sVar3 = fn_00203fa0();
  }
  return (int)(short)(sVar3 + sVar6 + sVar2 + sVar1);
}



int fn_006c0354(int *param_1,short *param_2,int param_3,int param_4,int param_5,int param_6)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  short *psVar6;
  uint uVar7;
  int iVar8;
  short *psVar9;
  short *psVar10;
  short *psVar11;
  short *psVar12;
  uint uVar13;
  short *local_e8;
  short *local_e4;
  short *local_e0;
  short *local_dc;
  undefined1 local_d8 [4];
  short local_d4 [80];
  int *piStack_34;
  short *psStack_30;
  int local_2c;
  int iStack_28;
  
  local_e8 = (short *)0x0;
  local_e4 = (short *)0x0;
  local_e0 = (short *)0x0;
  piStack_34 = param_1;
  psStack_30 = param_2;
  local_2c = param_3;
  iStack_28 = param_4;
  fn_0079e64c(&local_e8,0x6e);
  uVar7 = 0;
  do {
    sVar1 = (&DAT_007c4178)[uVar7];
    if (sVar1 == 1) {
      fn_00301f50(local_d8,0x98);
      uVar2 = fn_006bf5ec(param_1,local_d8,0x4c,1,1,1,1,1);
      sVar1 = fn_00660ac4(local_d8,uVar2);
      local_dc = (short *)CONCAT22(((unsigned int)(local_dc) >> 16) & 0xffff,sVar1);
      psVar9 = local_e4;
      if (local_e4 != local_e0) goto joined_r0x006c0438;
LAB_006c0444:
      fn_0079e460(&local_e8);
    }
    else {
      psVar9 = local_e4;
      if (local_e4 == local_e0) goto LAB_006c0444;
joined_r0x006c0438:
      local_e4 = psVar9 + 1;
      if (psVar9 != (short *)0x0) {
        *psVar9 = sVar1;
      }
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 3);
  if (param_5 != 0) {
    uVar7 = 0;
    do {
      iVar8 = *param_1 + uVar7 * 4;
      psVar9 = (short *)(iVar8 + 0x56);
      iVar3 = fn_0068f818((int)*psVar9);
      if (iVar3 != 0) {
        if (param_4 == 0) {
          uVar4 = fn_0068f654((int)*psVar9);
        }
        else {
          uVar4 = fn_0068f708((int)*psVar9,*(undefined2 *)(iVar8 + 0x58));
        }
        uVar13 = 1;
        if (uVar4 != 0) {
          do {
            iVar3 = fn_0068f7c4((int)*psVar9,uVar13);
            local_d4[0] = (short)iVar3;
            psVar11 = local_e4;
            if (iVar3 - 1U < 699) {
              if (local_e4 == local_e0) {
                fn_0079e460(&local_e8,local_e4,local_d4);
                psVar11 = local_e4;
              }
              else {
                psVar11 = local_e4 + 1;
                if (local_e4 != (short *)0x0) {
                  *local_e4 = local_d4[0];
                }
              }
            }
            local_e4 = psVar11;
            uVar13 = uVar13 + 1 & 0xff;
          } while (uVar13 <= uVar4);
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < 7);
  }
  uVar7 = 0;
  if ((int)local_e4 - (int)local_e8 >> 1 != 0) {
    do {
      if (((int)local_e8[uVar7] - 1U < 699) && (uVar4 = 0, (int)local_e4 - (int)local_e8 >> 1 != 0))
      {
        do {
          if (uVar4 != uVar7) {
            iVar3 = (int)local_e8[uVar4];
            if ((iVar3 - 1U < 699) && (iVar3 == local_e8[uVar7])) {
              local_e8[uVar4] = 0;
            }
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < (uint)((int)local_e4 - (int)local_e8 >> 1));
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < (uint)((int)local_e4 - (int)local_e8 >> 1));
  }
  if ((param_6 != 0) && (uVar7 = 0, (int)local_e4 - (int)local_e8 >> 1 != 0)) {
    do {
      if ((int)local_e8[uVar7] - 1U < 699) {
        iVar3 = 0;
        do {
          iVar8 = fn_00310b08((int)local_e8[uVar7],iVar3);
          if (0x2ba < iVar8 - 1U) break;
          uVar4 = 0;
          if ((int)local_e4 - (int)local_e8 >> 1 != 0) {
            do {
              psVar9 = local_e8 + uVar4;
              uVar4 = uVar4 + 1;
              if (*psVar9 == iVar8) {
                *psVar9 = 0;
              }
            } while (uVar4 < (uint)((int)local_e4 - (int)local_e8 >> 1));
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < 4);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < (uint)((int)local_e4 - (int)local_e8 >> 1));
  }
  iVar3 = 0;
  uVar7 = 0;
  if ((int)local_e4 - (int)local_e8 >> 1 != 0) {
    do {
      if ((int)local_e8[uVar7] - 1U < 699) {
        if (local_2c <= iVar3) break;
        psVar9 = param_2 + iVar3;
        iVar3 = iVar3 + 1;
        *psVar9 = local_e8[uVar7];
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < (uint)((int)local_e4 - (int)local_e8 >> 1));
  }
  psVar9 = param_2 + iVar3;
  if (param_2 != psVar9) {
    fn_007b1b30(param_2,psVar9,(int)psVar9 - (int)param_2 >> 1);
    local_dc = psVar9;
    psVar11 = param_2;
    if ((int)psVar9 - (int)param_2 < 0x21) {
      while (psVar12 = psVar11 + 1, psVar12 != psVar9) {
        sVar1 = *psVar12;
        iVar8 = fn_00692568((int)sVar1);
        iVar5 = fn_00692568((int)*param_2);
        psVar6 = psVar12;
        if (iVar8 < iVar5) {
          psVar6 = psVar11 + 2;
          psVar10 = psVar12;
          if (param_2 < psVar12) {
            iVar8 = (int)psVar12 - (int)param_2;
            if (0 < iVar8) {
              if (iVar8 * 0x40000000 < 0) {
                *psVar12 = *psVar11;
                psVar6 = psVar12;
                psVar10 = psVar11;
              }
              for (iVar8 = iVar8 >> 2; iVar8 != 0; iVar8 = iVar8 + -1) {
                psVar6[-1] = psVar10[-1];
                psVar10 = psVar10 + -2;
                psVar6 = psVar6 + -2;
                *psVar6 = *psVar10;
              }
            }
          }
          else {
            while (param_2 != psVar10) {
              psVar6 = psVar6 + -1;
              *psVar6 = psVar10[-1];
              psVar10 = psVar10 + -1;
            }
          }
          *param_2 = sVar1;
          psVar11 = psVar12;
        }
        else {
          while( true ) {
            psVar11 = psVar6 + -1;
            iVar8 = fn_00692568((int)sVar1);
            iVar5 = fn_00692568((int)*psVar11);
            if (iVar5 <= iVar8) break;
            *psVar6 = *psVar11;
            psVar6 = psVar11;
          }
          *psVar6 = sVar1;
          psVar11 = psVar12;
        }
      }
    }
    else {
      while (psVar12 = psVar11 + 1, local_dc = psVar9, psVar12 != param_2 + 0x10) {
        sVar1 = *psVar12;
        iVar8 = fn_00692568((int)sVar1);
        iVar5 = fn_00692568((int)*param_2);
        psVar9 = psVar12;
        if (iVar8 < iVar5) {
          psVar9 = psVar11 + 2;
          psVar6 = psVar12;
          if (param_2 < psVar12) {
            iVar8 = (int)psVar12 - (int)param_2;
            if (0 < iVar8) {
              if (iVar8 * 0x40000000 < 0) {
                *psVar12 = *psVar11;
                psVar9 = psVar12;
                psVar6 = psVar11;
              }
              for (iVar8 = iVar8 >> 2; iVar8 != 0; iVar8 = iVar8 + -1) {
                psVar9[-1] = psVar6[-1];
                psVar6 = psVar6 + -2;
                psVar9 = psVar9 + -2;
                *psVar9 = *psVar6;
              }
            }
          }
          else {
            while (param_2 != psVar6) {
              psVar9 = psVar9 + -1;
              *psVar9 = psVar6[-1];
              psVar6 = psVar6 + -1;
            }
          }
          *param_2 = sVar1;
          psVar9 = local_dc;
          psVar11 = psVar12;
        }
        else {
          while( true ) {
            psVar11 = psVar9 + -1;
            iVar8 = fn_00692568((int)sVar1);
            iVar5 = fn_00692568((int)*psVar11);
            if (iVar5 <= iVar8) break;
            *psVar9 = *psVar11;
            psVar9 = psVar11;
          }
          *psVar9 = sVar1;
          psVar9 = local_dc;
          psVar11 = psVar12;
        }
      }
      for (param_2 = param_2 + 0x10; param_2 != psVar9; param_2 = param_2 + 1) {
        sVar1 = *param_2;
        psVar11 = param_2;
        while( true ) {
          iVar8 = fn_00692568((int)sVar1);
          psVar12 = psVar11 + -1;
          iVar5 = fn_00692568((int)*psVar12);
          if (iVar5 <= iVar8) break;
          *psVar11 = *psVar12;
          psVar11 = psVar12;
        }
        *psVar11 = sVar1;
      }
    }
  }
  psVar9 = local_e8;
  if (local_e4 < local_e8) {
    do {
      psVar9 = psVar9 + 1;
    } while (psVar9 != local_e4);
  }
  fn_001008c4(local_e8,(int)local_e0 - (int)local_e8 >> 1,0);
  return iVar3;
}


