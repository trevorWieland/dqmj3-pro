#include "0063a10c_0063a650.h"



void fn_0063a650(int param_1,int param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  
  param_3 = param_3 + 0x180388;
  for (iVar7 = param_1; iVar7 < param_2; iVar7 = (int)(char)((char)iVar7 + '\x01')) {
    iVar6 = param_3 + iVar7 * 0x418;
    *(undefined4 *)(iVar6 + -0x403c) = 0;
    *(undefined4 *)(iVar6 + -0x4038) = 0;
    *(undefined4 *)(iVar6 + -0x4034) = 0;
  }
  bVar2 = false;
  bVar3 = false;
  bVar4 = false;
  bVar5 = false;
  for (iVar7 = param_1; iVar7 < param_2; iVar7 = (int)(char)((char)iVar7 + '\x01')) {
    iVar6 = param_3 + iVar7 * 0x418;
    if (0 < *(short *)(iVar6 + -0x4080)) {
      cVar1 = *(char *)(iVar6 + -0x4019);
      bVar8 = cVar1 == '\0';
      if (bVar8) {
        cVar1 = *(char *)(iVar6 + -0x400a);
      }
      bVar9 = bVar8 && cVar1 == '\0';
      if (bVar8 && cVar1 == '\0') {
        bVar9 = *(char *)(iVar6 + -0x4018) == '\0';
      }
      if (bVar9) {
        if (*(char *)(iVar6 + -0x3fdb) < '\x01') {
          if (*(char *)(iVar6 + -0x3fda) < '\x01') {
            if (*(char *)(iVar6 + -0x3fd9) < '\x01') {
              if ('\0' < *(char *)(iVar6 + -0x3fd8)) {
                bVar5 = true;
              }
            }
            else {
              bVar4 = true;
            }
          }
          else {
            bVar3 = true;
          }
        }
        else {
          bVar2 = true;
        }
      }
    }
  }
  for (; param_1 < param_2; param_1 = (int)(char)((char)param_1 + '\x01')) {
    iVar7 = param_3 + param_1 * 0x418;
    if (0 < *(short *)(iVar7 + -0x4080)) {
      cVar1 = *(char *)(iVar7 + -0x4019);
      bVar8 = cVar1 == '\0';
      if (bVar8) {
        cVar1 = *(char *)(iVar7 + -0x400a);
      }
      bVar9 = bVar8 && cVar1 == '\0';
      if (bVar8 && cVar1 == '\0') {
        bVar9 = *(char *)(iVar7 + -0x4018) == '\0';
      }
      if (bVar9) {
        if (bVar2) {
          *(ushort *)(iVar7 + -0x4038) = (ushort)*(byte *)(iVar7 + -0x4028) * 2 + 0x32;
        }
        if (bVar3) {
          *(ushort *)(iVar7 + -0x4036) = (ushort)*(byte *)(iVar7 + -0x4028) * 4 + 100;
        }
        if (bVar4) {
          *(ushort *)(iVar7 + -0x4034) = (ushort)*(byte *)(iVar7 + -0x4028) * 4 + 100;
        }
        if (bVar5) {
          *(ushort *)(iVar7 + -0x4032) = (ushort)*(byte *)(iVar7 + -0x4028) * 4 + 100;
        }
      }
    }
  }
  return;
}



undefined4 fn_0063a5f0(int param_1)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0x10;
  while ((psVar1 = (short *)(param_1 + iVar3 * 0x418 + -0x4080), *psVar1 < 1 ||
         (iVar2 = fn_006f44fc(psVar1,0x82), iVar2 == 0))) {
    iVar3 = (int)(char)((char)iVar3 + '\x01');
    if (0x13 < iVar3) {
      return 0;
    }
  }
  return 1;
}



bool fn_0063a5dc(int param_1)

{
  return '\x01' < *(char *)(param_1 + 9);
}



int fn_0063a54c(int param_1,int param_2)

{
  uint uVar1;
  int extraout_r1;
  
  uVar1 = DAT_008bf60c;
  if (param_2 == param_1) {
    return param_1;
  }
  DAT_008bf60c = DAT_008bf610;
  uVar1 = uVar1 ^ uVar1 << 0xb;
  DAT_008bf610 = DAT_008bf614;
  DAT_008bf614 = DAT_008bf618;
  DAT_008bf618 = DAT_008bf618 ^ DAT_008bf618 >> 0x13 ^ uVar1 ^ uVar1 >> 8;
  fn_00169f1c(DAT_008bf618,(param_2 - param_1) + 1);
  return extraout_r1 + param_1;
}



int fn_0063a510(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int extraout_r1;
  
  uVar1 = DAT_008bf60c;
  if (param_3 != 0) {
    if (param_3 != 1) {
      if (param_3 == 2) {
        param_1 = param_2;
      }
      else if (param_3 == 3) {
        param_1 = (param_1 + param_2) / 2;
      }
      else {
        param_1 = 0;
      }
    }
    return param_1;
  }
  if (param_2 == param_1) {
    return param_1;
  }
  DAT_008bf60c = DAT_008bf610;
  uVar1 = uVar1 ^ uVar1 << 0xb;
  DAT_008bf610 = DAT_008bf614;
  DAT_008bf614 = DAT_008bf618;
  DAT_008bf618 = DAT_008bf618 ^ DAT_008bf618 >> 0x13 ^ uVar1 ^ uVar1 >> 8;
  fn_00169f1c(DAT_008bf618,(param_2 - param_1) + 1);
  return extraout_r1 + param_1;
}



int fn_0063a26c(int param_1,uint param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  short *psVar6;
  undefined4 local_68;
  short local_64;
  byte local_60 [2];
  short local_5e;
  short local_5c;
  uint local_54;
  int local_50;
  short *local_4c;
  int local_48;
  uint local_44;
  uint local_40;
  int local_34;
  uint local_30;
  int iStack_2c;
  int iStack_28;
  
  local_34 = param_1;
  if (param_3 < param_4) {
    local_50 = param_4 + -1;
    cVar1 = (char)param_3;
    local_40 = (int)cVar1 - 0x18;
    local_48 = param_5 + 0x180388;
    local_44 = (int)(char)local_50 - 0x18;
    local_30 = param_2;
    iStack_2c = param_3;
    iStack_28 = param_4;
    do {
      psVar6 = (short *)0x0;
      if (((int)cVar1 - 0x10U < 8) && ((int)(char)local_50 - 0x10U < 8)) {
LAB_0063a328:
        psVar6 = (short *)(local_48 + (char)param_3 * 0x418 + -0x4080);
      }
      else {
        uVar5 = local_40;
        if (local_40 < 8) {
          uVar5 = local_44;
        }
        if (local_40 < 8 && uVar5 < 8) goto LAB_0063a328;
      }
      if ((0 < *psVar6) && (*(char *)((int)psVar6 + 0x67) != '\0')) {
        if ((char)psVar6[0x3b] == '\0') {
          local_4c = psVar6 + 0x200;
          sVar3 = psVar6[0x202];
          if (sVar3 == 0) {
            uVar5 = 0;
            local_68 = local_30;
            cVar2 = *(char *)((int)psVar6 + 0x3ff);
            do {
              fn_0019bc50(local_60,&DAT_007f0a34 + uVar5 * 6);
              if ((uint)local_60[0] == (int)cVar2) {
                iVar4 = fn_00655488((int)local_5e * local_68,local_5c * 100);
                if (iVar4 != 0) goto LAB_0063a41c;
                break;
              }
              uVar5 = uVar5 + 1;
            } while (uVar5 < 8);
            uVar5 = 0;
            local_54 = local_30;
            sVar3 = psVar6[0x1ff];
            do {
              fn_0019bc50(&local_68,&DAT_007f0a34 + uVar5 * 6);
              if ((local_68 & 0xff) == (int)(char)sVar3) {
                iVar4 = fn_00655488((int)((unsigned int)(local_68) >> 16) & 0xffff * local_54,local_64 * 100);
                if (iVar4 != 0) {
                  sVar3 = *local_4c;
                  goto LAB_0063a4bc;
                }
                break;
              }
              uVar5 = uVar5 + 1;
            } while (uVar5 < 8);
            goto LAB_0063a4ec;
          }
        }
        else if (*(char *)((int)psVar6 + 0x3ff) == '\0') {
          local_4c = psVar6 + 0x200;
LAB_0063a41c:
          sVar3 = local_4c[1];
        }
        else {
          if ((char)psVar6[0x1ff] != '\0') goto LAB_0063a4ec;
          sVar3 = psVar6[0x200];
        }
LAB_0063a4bc:
        if (sVar3 != 0) {
          *(short *)(param_5 + local_34 * 2 + 0x185edc) = sVar3;
          local_34 = (int)(short)((short)local_34 + 1);
        }
      }
LAB_0063a4ec:
      param_3 = param_3 + 1;
    } while (param_3 < param_4);
  }
  return local_34;
}



int fn_0063a10c(short param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                short param_6,int param_7,int param_8)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  undefined4 uVar4;
  short local_38 [2];
  short local_34 [2];
  short local_30 [10];
  
  if (param_7 != 0) {
    iVar2 = fn_00169f1c((int)param_1 * (int)(short)param_5 + 9,10);
    local_30[2] = 0;
    local_30[4] = param_6;
    local_30[0] = (short)((iVar2 * 10) / 10) + (short)((uint)param_5 >> 0x10);
    if (param_6 < 0) {
                    /* WARNING: Subroutine does not return */
      fn_00146590();
    }
    psVar3 = local_30 + 2;
    if (-1 < local_30[0]) {
      psVar3 = local_30;
    }
    if (param_6 < *psVar3) {
      psVar3 = local_30 + 4;
    }
    param_1 = *psVar3 + param_1;
  }
  uVar4 = *(undefined4 *)(param_3 + param_2 * 4 + 0x10);
  iVar2 = (int)(short)uVar4 * (int)param_1;
  sVar1 = (((short)(iVar2 / 100) + (short)(iVar2 >> 0x1f)) -
          (short)((longlong)iVar2 * 0x51eb851f >> 0x3f)) + (short)((uint)uVar4 >> 0x10);
  iVar2 = (int)sVar1;
  if (param_8 << 0x1d < 0) {
    iVar2 = (int)(short)(((short)((iVar2 * 0x82) / 100) + (sVar1 >> 0xf)) -
                        (short)((longlong)(iVar2 * 0x82) * 0x51eb851f >> 0x3f));
  }
  else if (param_8 << 0x1e < 0) {
    iVar2 = (int)(short)(((short)((sVar1 * 0x6e) / 100) + (sVar1 >> 0xf)) -
                        (short)((longlong)(sVar1 * 0x6e) * 0x51eb851f >> 0x3f));
  }
  psVar3 = local_38;
  if (0 < iVar2) {
    psVar3 = local_30 + 2;
  }
  local_30[2] = (short)iVar2;
  local_38[0] = 1;
  local_34[0] = 9999;
  if (9999 < *psVar3) {
    psVar3 = local_34;
  }
  return (int)*psVar3;
}


