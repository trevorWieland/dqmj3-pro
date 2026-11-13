#include "0036ef70_0036ef70.h"



void fn_0036ef70(undefined4 param_1,int *param_2,int *param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int unaff_r7;
  uint uVar13;
  int iVar14;
  int iVar15;
  undefined1 auStack_a0 [4];
  undefined1 auStack_9c [4];
  int local_98;
  undefined1 auStack_94 [4];
  undefined1 auStack_90 [4];
  undefined1 auStack_8c [4];
  uint local_88;
  int *local_80;
  int local_7c;
  uint local_74;
  int local_70;
  undefined1 auStack_6c [4];
  uint local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58 [4];
  int local_48;
  int *local_44;
  int local_40;
  int *local_3c;
  uint local_38;
  undefined4 local_34;
  int *piStack_30;
  int *piStack_2c;
  int iStack_28;
  
  iStack_28 = param_4;
  piStack_2c = param_3;
  piStack_30 = param_2;
  local_34 = param_1;
  if (param_2[param_4] != 0) {
    fn_0020bbc4(auStack_a0);
    fn_006bfe90(auStack_9c);
    iVar2 = fn_001cab7c();
    if (4 < param_5 + iVar2) {
      param_5 = 4 - iVar2;
    }
  }
  local_48 = param_2[param_4];
  iVar2 = param_3[param_5];
  if (local_48 == 0) {
    unaff_r7 = 1;
  }
  local_68 = 4;
  local_80 = param_3;
  if (local_48 != 0) {
    fn_0020bbc4(auStack_90,local_48);
    fn_006bfe90(auStack_8c);
    unaff_r7 = fn_001cab7c();
  }
  if (iVar2 != 0) {
    fn_0020bbc4(&local_98,iVar2);
    fn_006bfe90(auStack_94);
    fn_001cab7c();
  }
  uVar12 = param_4 + unaff_r7;
  local_98 = param_5 + unaff_r7;
  local_44 = (int *)(param_5 + 1);
  iVar2 = param_5;
LAB_0036f06c:
  local_7c = local_98;
  iVar9 = 0;
  local_64 = iVar2;
  iVar15 = iVar2;
  if (iVar2 < local_98) {
    do {
      iVar3 = local_80[iVar2];
      if ((iVar3 == 0) || (iVar9 != iVar3)) {
        iVar9 = iVar15;
        if ((*local_80 != 0) && (*local_80 == iVar3)) {
          iVar9 = 0;
          if (iVar15 < 1) {
            iVar9 = iVar15;
          }
          iVar15 = 1;
          if (0 < local_98) {
            iVar15 = local_98;
          }
          local_98 = iVar15;
        }
        iVar15 = iVar9;
        if ((local_80[1] != 0) && (local_80[1] == iVar3)) {
          iVar15 = 1;
          if (iVar9 < 2) {
            iVar15 = iVar9;
          }
          iVar9 = 2;
          if (1 < local_98) {
            iVar9 = local_98;
          }
          local_98 = iVar9;
        }
        iVar9 = iVar15;
        if ((local_80[2] != 0) && (local_80[2] == iVar3)) {
          iVar9 = 2;
          if (iVar15 < 3) {
            iVar9 = iVar15;
          }
          iVar15 = 3;
          if (2 < local_98) {
            iVar15 = local_98;
          }
          local_98 = iVar15;
        }
        iVar15 = iVar9;
        if ((local_80[3] != 0) && (local_80[3] == iVar3)) {
          iVar15 = 3;
          if (iVar9 < 4) {
            iVar15 = iVar9;
          }
          iVar9 = 4;
          if (3 < local_98) {
            iVar9 = local_98;
          }
          local_98 = iVar9;
        }
        iVar9 = iVar3;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_98);
  }
  iVar2 = iVar15;
  if (local_98 - iVar2 <= (int)(uVar12 - param_4)) {
    local_58[0] = *param_2;
    local_58[1] = param_2[1];
    local_58[2] = param_2[2];
    local_58[3] = param_2[3];
    iVar15 = uVar12 - param_4;
    if (0 < iVar15) {
      iVar9 = 0;
      do {
        iVar3 = iVar2 + iVar9;
        iVar7 = param_4 + iVar9;
        iVar15 = iVar15 + -1;
        iVar9 = iVar9 + 1;
        param_2[iVar7] = local_80[iVar3];
        local_80[iVar3] = local_58[iVar7];
      } while (iVar15 != 0);
    }
    iVar2 = 0;
    if (local_48 != 0) {
      if ((((*local_80 != local_48) && (iVar2 = 1, local_80[1] != local_48)) &&
          (iVar2 = 2, local_80[2] != local_48)) && (iVar2 = 3, local_80[3] != local_48)) {
        iVar2 = 4;
      }
      if (iVar2 != param_5) {
        fn_0036f778(local_34,local_80,iVar2,param_5);
      }
    }
    iVar2 = 0;
    if (*param_2 != 0) {
      iVar2 = *param_2;
    }
    iVar15 = param_2[1];
    if (iVar15 == iVar2) {
      param_2[1] = 0;
      iVar15 = iVar2;
    }
    iVar2 = param_2[2];
    if (iVar2 == iVar15) {
      param_2[2] = 0;
      iVar2 = iVar15;
    }
    if (param_2[3] == iVar2) {
      param_2[3] = 0;
    }
    iVar2 = 0;
    if (*local_80 != 0) {
      iVar2 = *local_80;
    }
    iVar15 = local_80[1];
    if (iVar15 == iVar2) {
      local_80[1] = 0;
      iVar15 = iVar2;
    }
    iVar2 = local_80[2];
    if (iVar2 == iVar15) {
      local_80[2] = 0;
      iVar2 = iVar15;
    }
    if (local_80[3] == iVar2) {
      local_80[3] = 0;
    }
    return;
  }
  iVar9 = 1;
  uVar13 = (local_98 - iVar2) - (uVar12 - param_4);
  iVar3 = 1;
  iVar15 = param_4;
  do {
    iVar15 = iVar15 + -1;
    uVar8 = uVar12;
    if (iVar15 < 0) goto joined_r0x0036f230;
    if (param_2[iVar15] == 0) {
      uVar4 = 1;
    }
    else {
      fn_0020bbc4(&local_70);
      fn_006bfe90(auStack_6c);
      uVar4 = fn_001cab7c();
      local_74 = uVar4;
    }
  } while (uVar13 != uVar4);
  iVar9 = (iVar15 - uVar4) + 1;
joined_r0x0036f230:
  do {
    if (3 < (int)uVar8) break;
    if (param_2[uVar8] == 0) {
      uVar4 = 1;
    }
    else {
      fn_0020bbc4(&local_60);
      fn_006bfe90(&local_5c);
      uVar4 = fn_001cab7c();
      local_88 = uVar4;
    }
    if (uVar13 == uVar4) {
      iVar3 = uVar4 + uVar8 + -1;
      break;
    }
    uVar8 = uVar8 + 1;
  } while( true );
  if (iVar9 != 1) {
    if (iVar3 == 1) {
LAB_0036f314:
      if (iVar9 + 1 < param_4) {
        local_40 = param_2[iVar9];
        iVar15 = 0;
        if (0 < (int)uVar13) {
          local_38 = ~(param_4 - iVar9) & 1;
          local_70 = param_4 + -1;
          iVar3 = (param_4 - iVar9) - 1;
          local_3c = param_2 + iVar9;
          do {
            if (0 < iVar3) {
              iVar7 = 0;
              if (iVar9 < param_4 + -1) {
                uVar8 = local_38;
                if (local_38 != 0) {
                  iVar7 = 1;
                  param_2[iVar9] = (param_2 + iVar9)[1];
                }
              }
              else {
                uVar8 = 0;
              }
              for (; (int)uVar8 < iVar3; uVar8 = uVar8 + 2) {
                iVar10 = iVar9 + iVar7 + 1;
                param_2[iVar9 + iVar7] = param_2[iVar9 + iVar7 + 1];
                iVar7 = iVar7 + 2;
                param_2[iVar10] = param_2[iVar10 + 1];
              }
            }
            iVar15 = iVar15 + 1;
          } while (iVar15 < (int)uVar13);
        }
        if (0 < (int)uVar13) {
          iVar15 = 0;
          uVar8 = uVar13;
          do {
            iVar9 = param_4 + iVar15;
            uVar8 = uVar8 - 1;
            iVar15 = iVar15 + -1;
            param_2[iVar9 + -1] = local_40;
          } while (uVar8 != 0);
        }
      }
      local_60 = 0;
      local_64 = param_4 - uVar13;
      piVar5 = &local_64;
      if ((int)(param_4 - uVar13) < 0) {
        piVar5 = &local_60;
      }
      param_4 = *piVar5;
      goto LAB_0036f06c;
    }
    local_5c = param_5;
    if (local_80 != (int *)0x0) {
      iVar15 = local_80[param_5];
      piVar5 = (int *)0x0;
      piVar1 = local_80;
      if (iVar15 != 0) {
        piVar5 = local_44;
        piVar1 = local_44;
      }
      if ((iVar15 != 0 && piVar1 != (int *)0x0) && -1 < (int)piVar5) {
        iVar10 = 0;
        iVar11 = param_5 + 1;
        iVar7 = 0;
        do {
          iVar14 = param_5 + iVar7;
          iVar7 = iVar7 + -1;
          if (iVar15 == local_80[iVar14]) {
            local_5c = param_5 - iVar10;
          }
          iVar11 = iVar11 + -1;
          iVar10 = iVar10 + 1;
        } while (iVar11 != 0);
      }
    }
    if (local_5c < param_5) {
      if (iVar9 != 1) goto LAB_0036f314;
      goto LAB_0036f4f0;
    }
  }
  if (iVar3 != 1) {
    if ((int)uVar12 < iVar3) {
      iVar15 = param_2[iVar3];
      iVar9 = 0;
      if (0 < (int)uVar13) {
        do {
          if (0 < (int)(iVar3 - uVar12)) {
            iVar10 = 0;
            iVar7 = iVar3 - uVar12;
            do {
              iVar11 = iVar3 + iVar10;
              iVar7 = iVar7 + -1;
              iVar10 = iVar10 + -1;
              param_2[iVar11] = param_2[iVar11 + -1];
            } while (iVar7 != 0);
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)uVar13);
      }
      if (0 < (int)uVar13) {
        uVar8 = uVar13 & 1;
        uVar4 = (uint)(uVar8 != 0);
        if (uVar8 != 0) {
          param_2[uVar12] = iVar15;
        }
        for (; (int)uVar8 < (int)uVar13; uVar8 = uVar8 + 2) {
          iVar9 = uVar4 + 1;
          param_2[uVar12 + uVar4] = iVar15;
          uVar4 = uVar4 + 2;
          param_2[uVar12 + iVar9] = iVar15;
        }
      }
    }
    puVar6 = &local_74;
    if ((int)local_68 < (int)(uVar12 + uVar13)) {
      puVar6 = &local_68;
    }
    local_74 = uVar12 + uVar13;
    uVar12 = *puVar6;
    goto LAB_0036f06c;
  }
LAB_0036f4f0:
  local_7c = local_98 - local_7c;
  if (0 < local_7c) {
    do {
      uVar12 = uVar12 + 1;
      if (4 < (int)uVar12) {
        param_4 = param_4 + -1;
        uVar12 = 4;
        if (param_4 < 0) {
          param_4 = 0;
        }
      }
      local_7c = local_7c + -1;
    } while (local_7c != 0);
  }
  for (; iVar2 < local_64; local_64 = local_64 + -1) {
    param_4 = param_4 + -1;
    if (param_4 < 0) {
      uVar12 = uVar12 + 1;
      param_4 = 0;
      if (4 < (int)uVar12) {
        uVar12 = 4;
      }
    }
  }
  iVar9 = param_2[uVar12 - 1];
  iVar15 = 0;
  uVar13 = uVar12 - 1;
  if (iVar9 != 0) {
    iVar15 = uVar12 - 4;
    uVar13 = uVar12;
  }
  if (iVar15 < 0 != (iVar9 != 0 && SBORROW4(uVar12,4))) {
    do {
      if (param_2[uVar13] == iVar9) {
        uVar12 = uVar13 + 1;
        if (local_98 < 4) {
          local_98 = local_98 + 1;
        }
        else if (0 < iVar2) {
          iVar2 = iVar2 + -1;
        }
      }
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < 4);
  }
  piVar5 = param_2 + param_4;
  iVar15 = param_4;
  if (*piVar5 != 0) {
    while (iVar15 = iVar15 + -1, -1 < iVar15) {
      if (param_2[iVar15] == *piVar5) {
        param_4 = iVar15;
        if (iVar2 < 1) {
          if (local_98 < 4) {
            local_98 = local_98 + 1;
          }
        }
        else {
          iVar2 = iVar2 + -1;
        }
      }
    }
  }
  goto LAB_0036f06c;
}


