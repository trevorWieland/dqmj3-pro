#include "00621268_0062171c.h"



void fn_0062171c(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 local_1c0;
  int local_1bc;
  int local_1b8 [103];
  
  piVar4 = &local_1c0;
  fn_0017821c(&local_1c0,param_2,0x1a0);
  iVar6 = 0;
  iVar7 = param_3 + ((unsigned int)(local_1c0) >> 8) & 0xff * 0x418 + -0x4080;
  iVar1 = fn_00176e70(iVar7);
  iVar3 = 0;
  if (0 < *(short *)(param_2 + 0x18)) {
    do {
      piVar5 = (int *)(param_2 + iVar3 * 8 + 0x1c);
      local_1c0 = *piVar5;
      if (0 < local_1c0) {
        local_1bc = iVar1 + -1;
        if (local_1bc < 0) goto code_r0x006217e4;
        piVar8 = &local_1c0;
        if (local_1bc < local_1c0) {
          piVar8 = &local_1bc;
        }
        local_1c0 = *piVar8;
        *piVar5 = local_1c0;
      }
      iVar6 = iVar6 + local_1c0;
      iVar1 = iVar1 - local_1c0;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(short *)(param_2 + 0x18));
  }
  local_1b8[0] = iVar1 + -1;
  local_1c0 = *(int *)(param_2 + 0x54);
  local_1bc = 0;
  if (-1 < local_1b8[0]) {
    if (*(int *)(param_2 + 0x54) < 0) {
      piVar4 = &local_1bc;
    }
    if (local_1b8[0] < *piVar4) {
      piVar4 = local_1b8;
    }
    iVar6 = iVar6 + *piVar4;
    *(int *)(param_2 + 0x54) = *piVar4;
    if ((0 < iVar6) && (*(char *)(param_2 + 0x17) != '\0')) {
      uVar2 = fn_0061fc60((int)*(char *)(param_2 + 1),param_3);
      fn_00628b98(param_1,param_3,param_2,uVar2);
      uVar2 = fn_0061fc60((int)*(char *)(param_2 + 1),param_3);
      fn_00628970(param_1,param_3,param_2,uVar2);
    }
    fn_00176e18(iVar7,(int)(short)-(short)iVar6);
    return;
  }
code_r0x006217e4:
                    /* WARNING: Subroutine does not return */
  fn_00146590();
}



/* WARNING: Removing unreachable block (ram,0x006216f4) */
/* WARNING: Removing unreachable block (ram,0x006216cc) */
/* WARNING: Removing unreachable block (ram,0x006216c4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_00621304(int param_1,int param_2,uint *param_3)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  uint local_60 [4];
  int local_50 [11];
  
  puVar5 = local_60;
  uVar2 = 0;
  iVar7 = param_2 + param_1 * 0x418;
  cVar6 = *(char *)(iVar7 + -0x3fe6);
  if (cVar6 < '\x01') {
    cVar6 = *(char *)(iVar7 + -0x3fe5);
  }
  if (cVar6 < '\x01') {
    if (*(char *)(iVar7 + -0x3fe4) < '\x01') {
      uVar8 = 0;
      do {
        uVar10 = (&DAT_007f03d4)[uVar8];
        if ((uint)*(byte *)(iVar7 + -0x407e) == (uVar10 & 0xff)) {
          iVar3 = fn_006f4850(param_2 + 0xe8);
          if (iVar3 == 0) {
            uVar2 = param_1 - 0x10;
            bVar13 = uVar2 < 4;
            if (!bVar13) {
              uVar2 = param_1 - 0x18;
            }
            if ((bVar13 || uVar2 < 4) || (param_1 == 0x20 || param_1 == 0x22)) {
              uVar10 = uVar10 << 8;
            }
            else {
              uVar10 = uVar10 << 0x10;
            }
            uVar2 = uVar10 >> 0x18;
          }
          else {
            uVar2 = uVar10 >> 0x18;
          }
          break;
        }
        uVar8 = uVar8 + 1 & 0xff;
      } while (uVar8 < 9);
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 100;
  }
  uVar8 = (short)uVar2 * 100;
  if (uVar8 != 0) {
    uVar2 = uVar8 - 0x2000;
  }
  if (uVar8 != 0 && uVar2 != 0x710) {
    sVar1 = 100;
    switch(*(undefined1 *)(iVar7 + -0x4027)) {
    case 2:
      sVar1 = 0x96;
      break;
    case 3:
      sVar1 = 200;
      break;
    case 4:
      sVar1 = 0xfa;
    }
    uVar8 = (int)(short)uVar8 * (int)sVar1;
    uVar2 = uVar8 / 100;
    iVar3 = fn_0061be08(param_1,uVar8 * 0x51eb851f);
    if (iVar3 == 0) {
      uVar8 = 0x14;
    }
    else {
      uVar8 = 0x10;
    }
    iVar3 = fn_0061be08(param_1);
    if (iVar3 == 0) {
      uVar10 = 0x18;
    }
    else {
      uVar10 = 0x14;
    }
    if (uVar8 < uVar10) {
      do {
        iVar3 = param_2 + uVar8 * 0x418;
        if (0 < *(short *)(iVar3 + -0x4080)) {
          cVar6 = *(char *)(iVar3 + -0x4019);
          bVar13 = cVar6 == '\0';
          if (bVar13) {
            cVar6 = *(char *)(iVar3 + -0x400a);
          }
          bVar12 = bVar13 && cVar6 == '\0';
          if (bVar13 && cVar6 == '\0') {
            bVar12 = *(char *)(iVar3 + -0x4018) == '\0';
          }
          if (((bVar12) && (iVar4 = fn_006f44fc((short *)(iVar3 + -0x4080),0xf6), iVar4 != 0)) &&
             (*(char *)(iVar3 + -0x407e) == *(char *)(iVar7 + -0x407e))) {
            uVar2 = uVar2 << 1;
            break;
          }
        }
        uVar8 = (uint)(char)((char)uVar8 + '\x01');
      } while ((int)uVar8 < (int)uVar10);
    }
    uVar8 = 0;
    local_60[2] = iVar7 + -0x4080;
    do {
      uVar11 = (&DAT_007f03f8)[uVar8];
      uVar10 = fn_006f33f0(local_60[2],(int)(short)uVar11);
      if (0 < (int)uVar10) {
        if ((uVar10 & 1) != 0) {
          uVar2 = (((uVar11 & 0xffffff) >> 0x10) * uVar2) / 100;
        }
        iVar7 = (int)uVar10 >> 1;
        if (iVar7 != 0) {
          uVar10 = (uVar11 & 0xffffff) >> 0x10;
          do {
            iVar7 = iVar7 + -1;
            uVar2 = (uVar10 * ((uVar10 * uVar2) / 100)) / 100;
          } while (iVar7 != 0);
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < 3);
    iVar7 = fn_0061be08(param_1);
    if ((iVar7 != 0) || (iVar7 = fn_006f4850(param_2 + 0xe8), iVar7 != 0)) {
      local_50[0] = 0;
      local_50[1] = 0;
      local_50[2] = 0;
      local_50[3] = 0;
      local_50[4] = 0;
      local_50[5] = 0;
      local_50[6] = 0;
      local_50[7] = 0;
      local_50[8] = 0;
      local_50[9] = 0;
      iVar7 = fn_0061be08(param_1);
      if (iVar7 == 0) {
        uVar8 = 0x14;
      }
      else {
        uVar8 = 0x10;
      }
      iVar7 = fn_0061be08(param_1);
      if (iVar7 == 0) {
        uVar10 = 0x18;
      }
      else {
        uVar10 = 0x14;
      }
      if (uVar8 < uVar10) {
        do {
          iVar7 = param_2 + uVar8 * 0x418;
          if (0 < *(short *)(iVar7 + -0x4080)) {
            cVar6 = *(char *)(iVar7 + -0x4019);
            bVar13 = cVar6 == '\0';
            if (bVar13) {
              cVar6 = *(char *)(iVar7 + -0x400a);
            }
            bVar12 = bVar13 && cVar6 == '\0';
            if (bVar13 && cVar6 == '\0') {
              bVar12 = *(char *)(iVar7 + -0x4018) == '\0';
            }
            if ((bVar12) && (uVar11 = (uint)*(byte *)(iVar7 + -0x407e), uVar11 < 10)) {
              local_50[uVar11] = local_50[uVar11] + 1;
            }
          }
          uVar8 = (uint)(char)((char)uVar8 + '\x01');
        } while ((int)uVar8 < (int)uVar10);
      }
      iVar7 = 0;
      if (0 < local_50[0]) {
        iVar7 = local_50[0];
      }
      iVar3 = 4;
      piVar9 = local_50;
      do {
        iVar4 = piVar9[2];
        if (iVar7 < local_50[1]) {
          iVar7 = local_50[1];
        }
        local_50[1] = piVar9[3];
        if (iVar7 < iVar4) {
          iVar7 = iVar4;
        }
        iVar3 = iVar3 + -1;
        piVar9 = piVar9 + 2;
      } while (iVar3 != 0);
      if (iVar7 < local_50[9]) {
        iVar7 = local_50[9];
      }
      if (0 < iVar7) {
        uVar2 = uVar2 * iVar7;
      }
    }
    local_60[1] = 10000;
    local_60[0] = uVar2;
    if (10000 < uVar2) {
      puVar5 = local_60 + 1;
    }
    uVar8 = *puVar5;
  }
  param_3[1] = 10000;
  *param_3 = uVar8;
  return;
}



int fn_00621268(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar5 = 100;
  iVar7 = param_2 + param_1 * 0x418 + -0x4080;
  uVar4 = 0;
  do {
    iVar3 = 0;
    sVar1 = (&DAT_007f092c)[uVar4 * 4];
    iVar6 = (&DAT_007f0930)[uVar4 * 2];
    iVar2 = fn_006f33f0(iVar7,(int)sVar1);
    if (0 < iVar2) {
      do {
        iVar3 = iVar3 + 1;
        iVar5 = (iVar6 * iVar5) / 100;
        iVar2 = fn_006f33f0(iVar7,(int)sVar1);
      } while (iVar3 < iVar2);
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 3);
  return iVar5;
}


