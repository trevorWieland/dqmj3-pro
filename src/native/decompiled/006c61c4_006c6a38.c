#include "006c61c4_006c6a38.h"



undefined4 fn_006c6a38(int *param_1)

{
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar2 = 0;
  do {
    sVar1 = *(short *)(*param_1 + uVar2 * 2 + 0x44);
    if ((int)sVar1 - 0x46U < 5) {
      switch(sVar1) {
      case 0x46:
        return 0;
      case 0x47:
        return 1;
      case 0x48:
        return 2;
      case 0x49:
        return 3;
      case 0x4a:
        return 4;
      }
      break;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 9);
  uVar3 = fn_0020b248((int)*(short *)(*param_1 + 0x1c));
  return uVar3;
}



/* WARNING: Removing unreachable block (ram,0x006c62a8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int fn_006c61c4(int *param_1,short *param_2,int param_3,int param_4,int param_5,int param_6,
                int param_7,int param_8)

{
  short sVar1;
  short *psVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  short *psVar6;
  undefined2 *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  short *psVar11;
  short *psVar12;
  int *piVar13;
  short *psVar14;
  undefined4 local_60;
  short *local_5c;
  undefined4 local_58;
  short *local_54;
  short *local_50;
  short *local_4c;
  undefined2 *local_48;
  undefined2 *local_44;
  undefined2 *local_40;
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
  psVar2 = (short *)fn_00100fc6(0x98,0);
  psVar14 = psVar2;
  for (psVar11 = local_54; psVar11 != local_50; psVar11 = psVar11 + 1) {
    if (psVar14 != (short *)0x0) {
      *psVar14 = *psVar11;
    }
    psVar14 = psVar14 + 1;
  }
  psVar11 = local_54;
  if (local_50 <= local_54) {
    for (; psVar11 != local_50; psVar11 = psVar11 + 1) {
    }
  }
  fn_001008c4(local_54,(int)local_4c - (int)local_54 >> 1,0);
  local_50 = (short *)(((int)local_50 - (int)local_54 & 0xfffffffeU) + (int)psVar2);
  local_4c = psVar2 + 0x4c;
  local_48 = (undefined2 *)0x0;
  local_44 = (undefined2 *)0x0;
  local_40 = (undefined2 *)0x0;
  local_60 = 0;
  local_5c = (short *)&DAT_00000020;
  local_54 = psVar2;
  local_48 = (undefined2 *)fn_00100fc6(0x40,0);
  puVar7 = local_48;
  for (iVar8 = local_60; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (puVar7 != (undefined2 *)0x0) {
      *puVar7 = 0;
    }
    puVar7 = puVar7 + 1;
  }
  local_40 = local_48 + 0x20;
  local_44 = local_48 + local_60;
  if (param_7 == 0) {
    local_60 = 1;
    local_5c = (short *)0x0;
    local_58 = 1;
    fn_006c5de0(param_1,&local_48,(int)*(short *)(*param_1 + 0x1c),0);
  }
  uVar9 = 0;
  do {
    sVar1 = *(short *)(*param_1 + uVar9 * 2 + 0x44);
    local_60 = CONCAT22(((unsigned int)(local_60) >> 16) & 0xffff,sVar1);
    psVar11 = local_50;
    if ((int)sVar1 - 1U < 0x1ff) {
      if (param_7 == 0) {
        uVar3 = 0;
        uVar4 = (int)local_44 - (int)local_48 >> 1;
        if (uVar4 != 0) {
          do {
            if ((int)(short)local_48[uVar3] == (int)sVar1) goto LAB_006c63c8;
            uVar3 = uVar3 + 1;
          } while (uVar3 < uVar4);
        }
      }
      if (local_50 == local_4c) {
        fn_0079e460(&local_54,local_50,&local_60);
        psVar11 = local_50;
      }
      else {
        psVar11 = local_50 + 1;
        if (local_50 != (short *)0x0) {
          *local_50 = sVar1;
        }
      }
    }
LAB_006c63c8:
    local_50 = psVar11;
    uVar9 = uVar9 + 1;
  } while (uVar9 < 9);
  if (param_5 != 0) {
    uVar9 = 0;
    do {
      iVar10 = *param_1 + uVar9 * 4;
      psVar11 = (short *)(iVar10 + 0x56);
      iVar8 = fn_00239700((int)*psVar11);
      if (iVar8 != 0) {
        if (param_4 == 0) {
          uVar4 = fn_002395a4((int)*psVar11);
        }
        else {
          uVar4 = fn_00239658((int)*psVar11,*(undefined2 *)(iVar10 + 0x58));
        }
        uVar3 = 1;
        if (uVar4 != 0) {
          do {
            iVar8 = fn_002396e0((int)*psVar11,uVar3);
            local_60 = CONCAT22(((unsigned int)(local_60) >> 16) & 0xffff,(short)iVar8);
            psVar14 = local_50;
            if (iVar8 - 1U < 0x1ff) {
              if (local_50 == local_4c) {
                fn_0079e460(&local_54,local_50,&local_60);
                psVar14 = local_50;
              }
              else {
                psVar14 = local_50 + 1;
                if (local_50 != (short *)0x0) {
                  *local_50 = (short)iVar8;
                }
              }
            }
            local_50 = psVar14;
            uVar3 = uVar3 + 1 & 0xff;
          } while (uVar3 <= uVar4);
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < 6);
  }
  if (param_8 != 0) {
    piVar13 = (int *)(*param_1 + 0xdc);
    if (*piVar13 != 0) {
      iVar8 = fn_002d6b60((int)*(short *)(*param_1 + 0xe0));
      local_60 = CONCAT22(((unsigned int)(local_60) >> 16) & 0xffff,(short)iVar8);
      psVar11 = local_50;
      if (iVar8 - 1U < 0x1ff) {
        if (local_50 == local_4c) {
          fn_0079e460(&local_54,local_50,&local_60);
          psVar11 = local_50;
        }
        else {
          psVar11 = local_50 + 1;
          if (local_50 != (short *)0x0) {
            *local_50 = (short)iVar8;
          }
        }
      }
      local_50 = psVar11;
      uVar9 = 0;
      do {
        iVar8 = fn_0020adac((int)*(short *)((int)piVar13 + uVar9 * 2 + 8));
        psVar11 = local_50;
        if (iVar8 != 0) {
          iVar8 = fn_002d6b60((int)*(short *)((int)piVar13 + uVar9 * 2 + 8));
          local_60 = CONCAT22(((unsigned int)(local_60) >> 16) & 0xffff,(short)iVar8);
          psVar11 = local_50;
          if (iVar8 - 1U < 0x1ff) {
            if (local_50 == local_4c) {
              fn_0079e460(&local_54,local_50,&local_60);
              psVar11 = local_50;
            }
            else {
              psVar11 = local_50 + 1;
              if (local_50 != (short *)0x0) {
                *local_50 = (short)iVar8;
              }
            }
          }
        }
        local_50 = psVar11;
        uVar9 = uVar9 + 1;
      } while (uVar9 < 3);
    }
  }
  uVar9 = 0;
  if ((int)local_50 - (int)local_54 >> 1 != 0) {
    do {
      if ((((int)local_54[uVar9] - 1U < 0x1ff) && (iVar8 = fn_0020ace0(), iVar8 == 0)) &&
         (uVar4 = 0, (int)local_50 - (int)local_54 >> 1 != 0)) {
        do {
          if (uVar4 != uVar9) {
            iVar8 = (int)local_54[uVar4];
            if ((iVar8 - 1U < 0x1ff) && (iVar8 == local_54[uVar9])) {
              local_54[uVar4] = 0;
            }
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < (uint)((int)local_50 - (int)local_54 >> 1));
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (uint)((int)local_50 - (int)local_54 >> 1));
  }
  if ((param_6 != 0) && (uVar9 = 0, (int)local_50 - (int)local_54 >> 1 != 0)) {
    do {
      if ((int)local_54[uVar9] - 1U < 0x1ff) {
        sVar1 = fn_0020abb4();
        if (((int)sVar1 - 1U < 0x1ff) && (uVar4 = 0, (int)local_50 - (int)local_54 >> 1 != 0)) {
          do {
            psVar11 = local_54 + uVar4;
            uVar4 = uVar4 + 1;
            if ((int)*psVar11 == (int)sVar1) {
              *psVar11 = 0;
            }
          } while (uVar4 < (uint)((int)local_50 - (int)local_54 >> 1));
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (uint)((int)local_50 - (int)local_54 >> 1));
  }
  iVar8 = 0;
  uVar9 = 0;
  if ((int)local_50 - (int)local_54 >> 1 != 0) {
    do {
      if ((int)local_54[uVar9] - 1U < 0x1ff) {
        if (local_2c <= iVar8) break;
        psVar11 = param_2 + iVar8;
        iVar8 = iVar8 + 1;
        *psVar11 = local_54[uVar9];
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (uint)((int)local_50 - (int)local_54 >> 1));
  }
  psVar11 = param_2 + iVar8;
  if (param_2 != psVar11) {
    fn_007b2af0(param_2,psVar11,(int)psVar11 - (int)param_2 >> 1);
    local_5c = psVar11;
    psVar14 = param_2;
    if ((int)psVar11 - (int)param_2 < 0x21) {
      while (psVar2 = psVar14 + 1, psVar2 != psVar11) {
        sVar1 = *psVar2;
        iVar10 = fn_0020aca8((int)sVar1);
        iVar5 = fn_0020aca8((int)*param_2);
        if (iVar10 < iVar5) {
          psVar6 = psVar14 + 2;
          psVar12 = psVar2;
          if (param_2 < psVar2) {
            iVar10 = (int)psVar2 - (int)param_2;
            if (0 < iVar10) {
              if (iVar10 * 0x40000000 < 0) {
                *psVar2 = *psVar14;
                psVar6 = psVar2;
                psVar12 = psVar14;
              }
              for (iVar10 = iVar10 >> 2; iVar10 != 0; iVar10 = iVar10 + -1) {
                psVar6[-1] = psVar12[-1];
                psVar12 = psVar12 + -2;
                psVar6 = psVar6 + -2;
                *psVar6 = *psVar12;
              }
            }
          }
          else {
            while (param_2 != psVar12) {
              psVar6 = psVar6 + -1;
              *psVar6 = psVar12[-1];
              psVar12 = psVar12 + -1;
            }
          }
          *param_2 = sVar1;
          psVar14 = psVar2;
        }
        else {
          local_60 = CONCAT22(((unsigned int)(local_60) >> 16) & 0xffff,sVar1);
          psVar14 = psVar2;
          while( true ) {
            psVar6 = psVar14 + -1;
            iVar10 = fn_0020aca8((int)sVar1);
            iVar5 = fn_0020aca8((int)*psVar6);
            if (iVar5 <= iVar10) break;
            *psVar14 = *psVar6;
            psVar14 = psVar6;
          }
          *psVar14 = sVar1;
          psVar14 = psVar2;
        }
      }
    }
    else {
      while (psVar2 = psVar14 + 1, local_5c = psVar11, psVar2 != param_2 + 0x10) {
        sVar1 = *psVar2;
        iVar10 = fn_0020aca8((int)sVar1);
        iVar5 = fn_0020aca8((int)*param_2);
        if (iVar10 < iVar5) {
          psVar11 = psVar14 + 2;
          psVar6 = psVar2;
          if (param_2 < psVar2) {
            iVar10 = (int)psVar2 - (int)param_2;
            if (0 < iVar10) {
              if (iVar10 * 0x40000000 < 0) {
                *psVar2 = *psVar14;
                psVar11 = psVar2;
                psVar6 = psVar14;
              }
              for (iVar10 = iVar10 >> 2; iVar10 != 0; iVar10 = iVar10 + -1) {
                psVar11[-1] = psVar6[-1];
                psVar6 = psVar6 + -2;
                psVar11 = psVar11 + -2;
                *psVar11 = *psVar6;
              }
            }
          }
          else {
            while (param_2 != psVar6) {
              psVar11 = psVar11 + -1;
              *psVar11 = psVar6[-1];
              psVar6 = psVar6 + -1;
            }
          }
          *param_2 = sVar1;
          psVar11 = local_5c;
          psVar14 = psVar2;
        }
        else {
          local_60 = CONCAT22(((unsigned int)(local_60) >> 16) & 0xffff,sVar1);
          psVar11 = psVar2;
          while( true ) {
            psVar14 = psVar11 + -1;
            iVar10 = fn_0020aca8((int)sVar1);
            iVar5 = fn_0020aca8((int)*psVar14);
            if (iVar5 <= iVar10) break;
            *psVar11 = *psVar14;
            psVar11 = psVar14;
          }
          *psVar11 = sVar1;
          psVar11 = local_5c;
          psVar14 = psVar2;
        }
      }
      for (param_2 = param_2 + 0x10; param_2 != psVar11; param_2 = param_2 + 1) {
        sVar1 = *param_2;
        local_60 = (local_60 & ~((unsigned int)0xffff << 16)) | (((unsigned int)((undefined2)((uint)local_60 >> 0x10)) & 0xffff) << 16);
        local_60 = CONCAT22(((unsigned int)(local_60) >> 16) & 0xffff,sVar1);
        psVar14 = param_2;
        while( true ) {
          iVar10 = fn_0020aca8((int)sVar1);
          psVar2 = psVar14 + -1;
          iVar5 = fn_0020aca8((int)*psVar2);
          if (iVar5 <= iVar10) break;
          *psVar14 = *psVar2;
          psVar14 = psVar2;
        }
        *psVar14 = sVar1;
      }
    }
  }
  puVar7 = local_48;
  if (local_44 < local_48) {
    do {
      puVar7 = puVar7 + 1;
    } while (puVar7 != local_44);
  }
  fn_001008c4(local_48,(int)local_40 - (int)local_48 >> 1,0);
  psVar11 = local_54;
  if (local_50 < local_54) {
    do {
      psVar11 = psVar11 + 1;
    } while (psVar11 != local_50);
  }
  fn_001008c4(local_54,(int)local_4c - (int)local_54 >> 1,0);
  return iVar8;
}


