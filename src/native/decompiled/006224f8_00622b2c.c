#include "006224f8_00622b2c.h"



uint fn_00622b2c(int param_1,int param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 extraout_r1;
  int iVar6;
  int iVar7;
  undefined4 local_5224;
  undefined4 local_5220;
  undefined1 auStack_521c [8320];
  undefined1 auStack_319c [12480];
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  char local_c4;
  undefined1 local_c3;
  undefined1 local_c2;
  undefined1 local_c1;
  
  iVar7 = (int)*(short *)(param_2 + 0xc);
  iVar2 = fn_00660d20(iVar7);
  iVar6 = param_3 + 0x180388;
  if ((((iVar2 != 2 && iVar7 != 0xcf) && (iVar7 != 0xd9 && iVar7 != 0xda)) &&
      (iVar7 != 0xea && iVar7 != 0xf7)) &&
     (iVar2 = fn_006f447c(iVar6 + *(char *)(param_2 + 5) * 0x418 + -0x4080), iVar2 == 0)) {
    return 0;
  }
  iVar2 = fn_00624edc(param_1,iVar7,(int)*(char *)(param_2 + 5),iVar6,param_4);
  if (iVar2 == 0) {
    return 0;
  }
  local_5224 = 0;
  local_5220 = 0;
  fn_00301f50(auStack_521c,0x2080);
  fn_00301f50(auStack_319c,0x30c0);
  local_dc = 0;
  local_d8 = 0;
  local_d4 = 0;
  local_d0 = 0;
  local_cc = 0;
  local_c8 = 0;
  local_c4 = '\0';
  local_c3 = 0;
  local_c2 = 0;
  local_c1 = 0;
  uVar3 = fn_0062a40c(param_1,param_2);
  iVar2 = fn_00163a00();
  if ((('\0' < *(char *)(iVar6 + *(char *)(param_2 + 5) * 0x418 + -0x3fc6)) &&
      (iVar7 = fn_00163c9c(uVar3), iVar7 != 0)) && (iVar2 == 2)) {
    return 0;
  }
  if (local_c4 == '\b') {
    return 0;
  }
  uVar3 = fn_0062a40c(param_1,param_2);
  iVar2 = fn_00163a00();
  cVar1 = *(char *)(param_3 + 0x180389);
  iVar7 = fn_00163c9c(uVar3);
  if (iVar7 != 0) {
    if (iVar2 == 1) {
      if (cVar1 == '\x04') {
        return 0;
      }
    }
    else if (iVar2 == 2) {
      if (cVar1 == '\x05') {
        return 0;
      }
    }
    else if (iVar2 == 3 && cVar1 == '\x06') {
      return 0;
    }
  }
  if (local_c4 == '\x02') {
    return 0;
  }
  iVar2 = fn_0062a40c(param_1,param_2);
  if (iVar2 == 0x185) {
LAB_00622e0c:
    if (*(char *)(param_3 + 0x180390) != '\0') {
      return 0;
    }
    *(undefined1 *)(param_3 + 0x180390) = 1;
  }
  else if (iVar2 < 0x185) {
    uVar4 = iVar2 - 0x181;
    if ((uVar4 < 2) || (uVar4 == 2 || uVar4 == 3)) goto LAB_00622e0c;
  }
  else if ((iVar2 == 0x186 || iVar2 == 0x187) || (iVar2 == 0x188 || iVar2 == 0x2a1))
  goto LAB_00622e0c;
  fn_00621a88(param_1,param_2,param_3,&local_5224);
  fn_006276cc(param_1,0,iVar6,param_3,&local_5224);
  fn_00626398(param_1,param_3);
  fn_006276cc(param_1,1,iVar6,param_3,&local_5224);
  iVar2 = iVar6 + *(char *)(param_2 + 5) * 0x418;
  fn_0062a40c(param_1,param_2);
  iVar7 = fn_001639e4();
  if (iVar7 == 0x32) {
    cVar1 = *(char *)(param_2 + 5);
    uVar3 = fn_0062a40c(param_1,param_2);
    uVar3 = fn_00637448(uVar3,(int)cVar1,iVar6);
    fn_00300f74(*(undefined4 *)(iVar2 + -0x4030),uVar3);
    *(undefined4 *)(iVar2 + -0x4030) = extraout_r1;
  }
  fn_00627194(param_1,param_2,param_3,&local_5224);
  fn_00628e98(param_1,param_2,param_3,&local_5224);
  fn_00654c58(iVar2 + -0x3dfc,(int)*(short *)(param_2 + 0xc));
  fn_00622928(param_1,param_2,&local_5224,param_3);
  uVar4 = fn_00626398(param_1,param_3);
  iVar2 = fn_006f4d64(param_1 + 4,1);
  if (iVar2 == 0) {
    iVar2 = fn_006f4d64(param_1 + 4,0);
    uVar5 = 0;
    if (iVar2 == 0) goto LAB_00622eec;
  }
  uVar5 = 1;
LAB_00622eec:
  return uVar5 | uVar4 | (int)*(char *)(param_1 + 0x1b);
}



void fn_00622928(undefined4 param_1,int param_2,int param_3,byte *param_4)

{
  int iVar1;
  byte *pbVar2;
  undefined1 local_26b4;
  byte local_26b3;
  undefined1 auStack_26b0 [9824];
  undefined4 local_50;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined4 local_38;
  int iStack_34;
  int iStack_30;
  byte *pbStack_2c;
  
  pbVar2 = param_4 + 0x180388;
  local_38 = param_1;
  iStack_34 = param_2;
  iStack_30 = param_3;
  pbStack_2c = param_4;
  fn_00301f50(&local_26b4,0x266c);
  local_26b3 = param_4[0x180389];
  switch(*(undefined1 *)(param_2 + 4)) {
  case 1:
    iVar1 = fn_0062a40c(local_38,param_2);
    if (iVar1 == 0x175) {
      local_26b4 = 0xc;
      local_50 = CONCAT31(((unsigned int)(local_50) >> 8) & 0xffffff,*(undefined1 *)(param_3 + 0x5160));
      fn_00626064(local_38,param_2,param_3,pbVar2,auStack_26b0);
    }
    else {
      local_26b4 = 1;
      local_4c = *(undefined1 *)(param_3 + 0x5160);
      local_50 = *(undefined4 *)(param_3 + 0x515c);
      local_4b = *(undefined1 *)(param_3 + 0x5162);
      fn_00626064(local_38,param_2,param_3,pbVar2,auStack_26b0);
    }
    break;
  case 2:
    local_26b4 = 3;
    fn_00626064(local_38,param_2,param_3,pbVar2,auStack_26b0);
    break;
  case 3:
    local_26b4 = 2;
    local_50 = CONCAT31(((unsigned int)(local_50) >> 8) & 0xffffff,*(undefined1 *)(param_3 + 0x5163));
    fn_00626064(local_38,param_2,param_3,pbVar2,auStack_26b0);
    break;
  case 4:
    local_26b4 = 0x10;
    fn_00626064(local_38,param_2,param_3,pbVar2,auStack_26b0);
    break;
  case 5:
    local_26b4 = 0x15;
    fn_00626064(local_38,param_2,param_3,pbVar2,auStack_26b0);
  }
  fn_0017821c(param_4 + (short)(ushort)*param_4 * 0x266c + 4,&local_26b4,0x266c);
  *param_4 = *param_4 + 1;
  return;
}



void fn_006228c8(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  fn_00301f50(param_1 + 2,0x2080);
  fn_00301f50(param_1 + 0x822,0x30c0);
  param_1[0x1452] = 0;
  param_1[0x1453] = 0;
  param_1[0x1454] = 0;
  param_1[0x1455] = 0;
  param_1[0x1456] = 0;
  param_1[0x1457] = 0;
  *(undefined1 *)(param_1 + 0x1458) = 0;
  *(undefined1 *)((int)param_1 + 0x5161) = 0;
  *(undefined1 *)((int)param_1 + 0x5162) = 0;
  *(undefined1 *)((int)param_1 + 0x5163) = 0;
  return;
}



int fn_006228ac(int param_1)

{
  return param_1 + *(int *)(param_1 + 4) * 0x1a0 + 0x2088;
}



uint fn_0062285c(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = fn_00626398();
  iVar2 = fn_006f4d64(param_1 + 4,1);
  if ((iVar2 != 0) || (iVar2 = fn_006f4d64(param_1 + 4,0), uVar3 = 0, iVar2 != 0)) {
    uVar3 = 1;
  }
  return uVar3 | uVar1 | (int)*(char *)(param_1 + 0x1b);
}



void fn_00622534(undefined4 param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  uint uVar7;
  int iVar8;
  short *psVar9;
  int iVar10;
  byte bVar11;
  short sVar12;
  bool bVar13;
  bool bVar14;
  uint in_fpscr;
  float fVar15;
  undefined8 uVar16;
  
  iVar8 = param_2 + 0x180388;
  bVar11 = *(byte *)(param_2 + 0x180470);
  if ((bVar11 < 2) && (iVar4 = fn_006f4868((byte *)(param_2 + 0x180470),bVar11,8,0), iVar4 == 0)) {
    sVar12 = 0;
    bVar11 = 0x10;
    do {
      iVar5 = iVar8 + (char)bVar11 * 0x418;
      psVar9 = (short *)(iVar5 + -0x4080);
      bVar13 = psVar9 == (short *)0x0;
      iVar4 = 0;
      iVar10 = iVar5;
      if (!bVar13) {
        iVar4 = (int)*psVar9;
        iVar10 = iVar4;
      }
      if ((!bVar13 && iVar10 != 0) && iVar4 < 0 == (bVar13 && SBORROW4(iVar5 + -0x4000,0x80))) {
        cVar1 = *(char *)(iVar5 + -0x4019);
        bVar13 = cVar1 == '\0';
        if (bVar13) {
          cVar1 = *(char *)(iVar5 + -0x400a);
        }
        if ((bVar13 && cVar1 == '\0') && (*(char *)(iVar5 + -0x4018) == '\0')) {
          iVar4 = 0;
          do {
            psVar6 = psVar9 + iVar4;
            iVar10 = (int)psVar6[0x142];
            bVar13 = iVar10 != 0x104;
            if (bVar13) {
              psVar6 = (short *)0xfffffefb;
            }
            bVar14 = (undefined1 *)(iVar10 + (int)psVar6) != (undefined1 *)0x0;
            if (bVar13 && bVar14) {
              psVar6 = (short *)(iVar10 + -0x100);
            }
            if ((bVar13 && bVar14) && psVar6 != (short *)&DAT_00000006) {
              sVar3 = 0;
            }
            else {
              sVar3 = 0;
              iVar5 = fn_00624edc(param_1,iVar10,(int)(char)bVar11,iVar8,0);
              if (iVar5 != 0) {
                if (iVar10 == 0x104) {
                  sVar3 = fn_0063a54c(1,10);
                }
                else if (iVar10 == 0x105) {
                  sVar3 = fn_0063a54c(1,0x14);
                }
                else if (iVar10 == 0x106) {
                  sVar3 = fn_0063a54c(1,5);
                }
                sVar3 = sVar3 * 10;
              }
            }
            sVar12 = sVar3 + sVar12;
            iVar4 = (int)(char)((char)iVar4 + '\x01');
          } while (iVar4 < 0x4c);
        }
      }
      bVar11 = bVar11 + 1;
    } while (bVar11 < 0x14);
    bVar11 = 0x14;
    uVar16 = 0x3e800000;
    iVar4 = -1;
    do {
      iVar10 = iVar8 + (char)bVar11 * 0x418;
      if ((((0 < *(short *)(iVar10 + -0x4080)) && (*(char *)(iVar10 + -0x4019) != '\0')) &&
          (*(char *)(iVar10 + -0x400a) == '\0')) && (*(short *)(iVar10 + -0x3c8c) == 0)) {
        bVar2 = *(byte *)(iVar10 + -0x3c88);
        if (bVar2 == 0xff) {
LAB_00622824:
          iVar4 = (int)(char)bVar11;
        }
        else if (3 < iVar4 - 0x14U) {
          iVar10 = (int)*(short *)(param_2 + 0x18038c) * (int)(short)(ushort)bVar2;
          if (iVar10 < 0x3e9) {
            if (iVar10 < -1000) {
              iVar10 = -1000;
            }
          }
          else {
            iVar10 = 1000;
          }
          fVar15 = (float)VectorUnsignedToFloat((uint)bVar2,(byte)(in_fpscr >> 0x16) & 3);
          fVar15 = fVar15 * (float)uVar16;
          fn_006f9f20();
          sVar3 = (short)(int)fVar15 + (short)iVar10 + sVar12;
          iVar10 = fn_006f0a18(iVar8,2);
          if (iVar10 != 0) {
            sVar3 = sVar3 * 10;
          }
          iVar10 = fn_006f0a18(iVar8,4);
          if (iVar10 != 0) {
            sVar3 = sVar3 * 10;
          }
          uVar7 = fn_0063a5a4();
          if (uVar7 % 1000 < (uint)(int)sVar3) goto LAB_00622824;
        }
      }
      bVar11 = bVar11 + 1;
    } while (bVar11 < 0x18);
    *(char *)(param_2 + 0x180385) = (char)iVar4;
  }
  return;
}



void fn_006224f8(undefined4 param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  undefined4 uVar1;
  undefined1 auStack_18 [12];
  
  uVar1 = fn_0062a40c();
  fn_0061e910(uVar1,(int)*param_4,(int)param_4[1],param_3,auStack_18);
  fn_00655430(auStack_18);
  return;
}


