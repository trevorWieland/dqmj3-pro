#include "006bf5ec_006bfdec.h"



undefined4 fn_006bfdec(int *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = fn_00661714((int)*(short *)(*param_1 + 0x1c));
  uVar2 = (uint)*(byte *)(*param_1 + 0x3c);
  switch(uVar1) {
  default:
    goto switchD_006bfe0c_caseD_0;
  case 1:
  case 2:
  case 3:
    if (uVar2 - 0x19 < 0x19) {
      return 4;
    }
    break;
  case 4:
  case 5:
    break;
  case 6:
  case 7:
  case 8:
    if (uVar2 == 100) {
      return 8;
    }
    return uVar1;
  }
  if (uVar2 - 0x32 < 0x32) {
    return 6;
  }
  if (uVar2 == 100) {
    return 8;
  }
switchD_006bfe0c_caseD_0:
  return uVar1;
}



void fn_006bfdb4(int *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_2 = *(undefined4 *)(iVar1 + 4);
  param_2[1] = *(undefined4 *)(iVar1 + 8);
  param_2[2] = *(undefined4 *)(iVar1 + 0xc);
  param_2[3] = *(undefined4 *)(iVar1 + 0x10);
  param_2[4] = *(undefined4 *)(iVar1 + 0x14);
  param_2[5] = *(undefined4 *)(iVar1 + 0x18);
  return;
}



/* WARNING: Removing unreachable block (ram,0x006bf64c) */
/* WARNING: Removing unreachable block (ram,0x006bf650) */
/* WARNING: Removing unreachable block (ram,0x006bf654) */

int fn_006bf5ec(int *param_1,short *param_2,int param_3,int param_4,int param_5,int param_6,
                int param_7,int param_8)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  short *psVar6;
  uint uVar7;
  int iVar8;
  short *psVar9;
  short *psVar10;
  short *psVar11;
  int *piVar12;
  short *psVar13;
  undefined4 local_60;
  short *local_5c;
  undefined4 local_58;
  short *local_54;
  short *local_50;
  short *local_4c;
  uint local_48;
  uint local_44;
  int local_40;
  int *piStack_34;
  short *psStack_30;
  int local_2c;
  int iStack_28;
  
  local_54 = (short *)0x0;
  local_50 = (short *)0x0;
  local_4c = (short *)0x0;
  piStack_34 = param_1;
  psStack_30 = param_2;
  local_2c = param_3;
  iStack_28 = param_4;
  fn_0079e64c(&local_54,0x4c);
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_48 = fn_00100fc6(0x40,0);
  local_40 = local_48 + 0x40;
  local_44 = local_48;
  if (param_7 == 0) {
    local_60 = 1;
    local_5c = (short *)0x0;
    local_58 = 1;
    fn_006bee78(param_1,&local_48,(int)*(short *)(*param_1 + 0x1c),0);
  }
  uVar7 = 0;
  do {
    sVar1 = *(short *)(*param_1 + uVar7 * 2 + 0x44);
    local_60 = CONCAT22(((unsigned int)(local_60) >> 16) & 0xffff,sVar1);
    psVar9 = local_50;
    if ((int)sVar1 - 1U < 0x21f) {
      if (param_7 == 0) {
        uVar2 = 0;
        uVar4 = (int)(local_44 - local_48) >> 1;
        if (uVar4 != 0) {
          do {
            if ((int)*(short *)(local_48 + uVar2 * 2) == (int)sVar1) goto LAB_006bf734;
            uVar2 = uVar2 + 1;
          } while (uVar2 < uVar4);
        }
      }
      if (local_50 == local_4c) {
        fn_0079e460(&local_54,local_50,&local_60);
        psVar9 = local_50;
      }
      else {
        psVar9 = local_50 + 1;
        if (local_50 != (short *)0x0) {
          *local_50 = sVar1;
        }
      }
    }
LAB_006bf734:
    local_50 = psVar9;
    uVar7 = uVar7 + 1;
  } while (uVar7 < 9);
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
        uVar2 = 1;
        if (uVar4 != 0) {
          do {
            iVar3 = fn_0068f7f8((int)*psVar9,uVar2);
            local_60 = CONCAT22(((unsigned int)(local_60) >> 16) & 0xffff,(short)iVar3);
            psVar13 = local_50;
            if (iVar3 - 1U < 0x21f) {
              if (local_50 == local_4c) {
                fn_0079e460(&local_54,local_50,&local_60);
                psVar13 = local_50;
              }
              else {
                psVar13 = local_50 + 1;
                if (local_50 != (short *)0x0) {
                  *local_50 = (short)iVar3;
                }
              }
            }
            local_50 = psVar13;
            uVar2 = uVar2 + 1 & 0xff;
          } while (uVar2 <= uVar4);
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < 7);
  }
  if (param_8 != 0) {
    piVar12 = (int *)(*param_1 + 0xe0);
    if (*piVar12 != 0) {
      iVar3 = fn_00203eb8((int)*(short *)(*param_1 + 0xe4));
      local_60 = CONCAT22(((unsigned int)(local_60) >> 16) & 0xffff,(short)iVar3);
      psVar9 = local_50;
      if (iVar3 - 1U < 0x21f) {
        if (local_50 == local_4c) {
          fn_0079e460(&local_54,local_50,&local_60);
          psVar9 = local_50;
        }
        else {
          psVar9 = local_50 + 1;
          if (local_50 != (short *)0x0) {
            *local_50 = (short)iVar3;
          }
        }
      }
      local_50 = psVar9;
      uVar7 = 0;
      do {
        iVar3 = fn_00163940((int)*(short *)((int)piVar12 + uVar7 * 2 + 8));
        psVar9 = local_50;
        if (iVar3 != 0) {
          iVar3 = fn_00203eb8((int)*(short *)((int)piVar12 + uVar7 * 2 + 8));
          local_60 = CONCAT22(((unsigned int)(local_60) >> 16) & 0xffff,(short)iVar3);
          psVar9 = local_50;
          if (iVar3 - 1U < 0x21f) {
            if (local_50 == local_4c) {
              fn_0079e460(&local_54,local_50,&local_60);
              psVar9 = local_50;
            }
            else {
              psVar9 = local_50 + 1;
              if (local_50 != (short *)0x0) {
                *local_50 = (short)iVar3;
              }
            }
          }
        }
        local_50 = psVar9;
        uVar7 = uVar7 + 1;
      } while (uVar7 < 3);
    }
  }
  uVar7 = 0;
  if ((int)local_50 - (int)local_54 >> 1 != 0) {
    do {
      if ((((int)local_54[uVar7] - 1U < 0x21f) && (iVar3 = fn_00660d3c(), iVar3 == 0)) &&
         (uVar4 = 0, (int)local_50 - (int)local_54 >> 1 != 0)) {
        do {
          if (uVar4 != uVar7) {
            iVar3 = (int)local_54[uVar4];
            if ((iVar3 - 1U < 0x21f) && (iVar3 == local_54[uVar7])) {
              local_54[uVar4] = 0;
            }
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < (uint)((int)local_50 - (int)local_54 >> 1));
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < (uint)((int)local_50 - (int)local_54 >> 1));
  }
  if ((param_6 != 0) && (uVar7 = 0, (int)local_50 - (int)local_54 >> 1 != 0)) {
    do {
      if ((int)local_54[uVar7] - 1U < 0x21f) {
        sVar1 = fn_00660978();
        if (((int)sVar1 - 1U < 0x21f) && (uVar4 = 0, (int)local_50 - (int)local_54 >> 1 != 0)) {
          do {
            psVar9 = local_54 + uVar4;
            uVar4 = uVar4 + 1;
            if ((int)*psVar9 == (int)sVar1) {
              *psVar9 = 0;
            }
          } while (uVar4 < (uint)((int)local_50 - (int)local_54 >> 1));
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < (uint)((int)local_50 - (int)local_54 >> 1));
  }
  iVar3 = 0;
  uVar7 = 0;
  if ((int)local_50 - (int)local_54 >> 1 != 0) {
    do {
      if ((int)local_54[uVar7] - 1U < 0x21f) {
        if (local_2c <= iVar3) break;
        psVar9 = param_2 + iVar3;
        iVar3 = iVar3 + 1;
        *psVar9 = local_54[uVar7];
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < (uint)((int)local_50 - (int)local_54 >> 1));
  }
  psVar9 = param_2 + iVar3;
  if (param_2 != psVar9) {
    fn_007b2070(param_2,psVar9,(int)psVar9 - (int)param_2 >> 1);
    local_5c = psVar9;
    psVar13 = param_2;
    if ((int)psVar9 - (int)param_2 < 0x21) {
      while (psVar10 = psVar13 + 1, psVar10 != psVar9) {
        sVar1 = *psVar10;
        iVar8 = fn_00660ccc((int)sVar1);
        iVar5 = fn_00660ccc((int)*param_2);
        if (iVar8 < iVar5) {
          psVar6 = psVar13 + 2;
          psVar11 = psVar10;
          if (param_2 < psVar10) {
            iVar8 = (int)psVar10 - (int)param_2;
            if (0 < iVar8) {
              if (iVar8 * 0x40000000 < 0) {
                *psVar10 = *psVar13;
                psVar6 = psVar10;
                psVar11 = psVar13;
              }
              for (iVar8 = iVar8 >> 2; iVar8 != 0; iVar8 = iVar8 + -1) {
                psVar6[-1] = psVar11[-1];
                psVar11 = psVar11 + -2;
                psVar6 = psVar6 + -2;
                *psVar6 = *psVar11;
              }
            }
          }
          else {
            while (param_2 != psVar11) {
              psVar6 = psVar6 + -1;
              *psVar6 = psVar11[-1];
              psVar11 = psVar11 + -1;
            }
          }
          *param_2 = sVar1;
          psVar13 = psVar10;
        }
        else {
          local_60 = CONCAT22(((unsigned int)(local_60) >> 16) & 0xffff,sVar1);
          psVar13 = psVar10;
          while( true ) {
            psVar6 = psVar13 + -1;
            iVar8 = fn_00660ccc((int)sVar1);
            iVar5 = fn_00660ccc((int)*psVar6);
            if (iVar5 <= iVar8) break;
            *psVar13 = *psVar6;
            psVar13 = psVar6;
          }
          *psVar13 = sVar1;
          psVar13 = psVar10;
        }
      }
    }
    else {
      while (psVar10 = psVar13 + 1, local_5c = psVar9, psVar10 != param_2 + 0x10) {
        sVar1 = *psVar10;
        iVar8 = fn_00660ccc((int)sVar1);
        iVar5 = fn_00660ccc((int)*param_2);
        if (iVar8 < iVar5) {
          psVar9 = psVar13 + 2;
          psVar6 = psVar10;
          if (param_2 < psVar10) {
            iVar8 = (int)psVar10 - (int)param_2;
            if (0 < iVar8) {
              if (iVar8 * 0x40000000 < 0) {
                *psVar10 = *psVar13;
                psVar9 = psVar10;
                psVar6 = psVar13;
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
          psVar9 = local_5c;
          psVar13 = psVar10;
        }
        else {
          local_60 = CONCAT22(((unsigned int)(local_60) >> 16) & 0xffff,sVar1);
          psVar9 = psVar10;
          while( true ) {
            psVar13 = psVar9 + -1;
            iVar8 = fn_00660ccc((int)sVar1);
            iVar5 = fn_00660ccc((int)*psVar13);
            if (iVar5 <= iVar8) break;
            *psVar9 = *psVar13;
            psVar9 = psVar13;
          }
          *psVar9 = sVar1;
          psVar9 = local_5c;
          psVar13 = psVar10;
        }
      }
      for (param_2 = param_2 + 0x10; param_2 != psVar9; param_2 = param_2 + 1) {
        sVar1 = *param_2;
        local_60 = (local_60 & ~((unsigned int)0xffff << 16)) | (((unsigned int)((undefined2)((uint)local_60 >> 0x10)) & 0xffff) << 16);
        local_60 = CONCAT22(((unsigned int)(local_60) >> 16) & 0xffff,sVar1);
        psVar13 = param_2;
        while( true ) {
          psVar10 = psVar13 + -1;
          iVar8 = fn_00660ccc((int)sVar1);
          iVar5 = fn_00660ccc((int)*psVar10);
          if (iVar5 <= iVar8) break;
          *psVar13 = *psVar10;
          psVar13 = psVar10;
        }
        *psVar13 = sVar1;
      }
    }
  }
  uVar7 = local_48;
  if (local_44 < local_48) {
    do {
      uVar7 = uVar7 + 2;
    } while (uVar7 != local_44);
  }
  fn_001008c4(local_48,(int)(local_40 - local_48) >> 1,0);
  psVar9 = local_54;
  if (local_50 < local_54) {
    do {
      psVar9 = psVar9 + 1;
    } while (psVar9 != local_50);
  }
  fn_001008c4(local_54,(int)local_4c - (int)local_54 >> 1,0);
  return iVar3;
}


