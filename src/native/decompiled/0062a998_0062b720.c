#include "0062a998_0062b720.h"



void fn_0062b720(undefined4 param_1,int param_2,int param_3)

{
  fn_00301f50(param_3,0x266c);
  *(undefined1 *)(param_3 + 1) = *(undefined1 *)(param_2 + 1);
  return;
}



void fn_0062b26c(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = fn_0062a40c();
  iVar3 = fn_00163a00();
  cVar1 = *(char *)(param_3 + 0x180389);
  iVar4 = fn_00163c9c(uVar2);
  if (iVar4 != 0) {
    if (iVar3 == 1) {
      if (cVar1 != '\x04') {
        return;
      }
    }
    else if (iVar3 == 2) {
      if (cVar1 != '\x05') {
        return;
      }
    }
    else if (iVar3 != 3 || cVar1 != '\x06') {
      return;
    }
    *(undefined1 *)(param_4 + 0x5160) = 2;
  }
  return;
}



void fn_0062abdc(int param_1,undefined4 param_2,byte *param_3,int param_4)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  bool bVar17;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 auStack_48 [20];
  int local_34;
  undefined4 local_30;
  byte *pbStack_2c;
  int local_28;
  
  iVar13 = (int)(char)param_3[1];
  bVar3 = *param_3;
  iVar6 = param_4 + 0x180388;
  iVar7 = iVar6 + iVar13 * 0x418;
  iVar14 = iVar7 + -0x4080;
  cVar1 = *(char *)(iVar7 + -0x400a);
  bVar16 = cVar1 == '\0';
  if (bVar16) {
    cVar1 = *(char *)(iVar7 + -0x4018);
  }
  local_34 = param_1;
  local_30 = param_2;
  pbStack_2c = param_3;
  local_28 = param_4;
  if (!bVar16 || cVar1 != '\0') {
    fn_0062a2f0(param_1,iVar14,param_3,param_4);
    goto LAB_0062b248;
  }
  uVar5 = *(ushort *)(iVar7 + -0x4064);
  if ((short)uVar5 < 1) {
    uVar5 = (ushort)*(byte *)(iVar7 + -0x3fe3);
  }
  if (uVar5 != 0) {
    return;
  }
  bVar2 = param_3[2];
  bVar16 = param_3[0x15c] == 0 && param_3[0x133] == 0;
  uVar8 = (uint)bVar16;
  if (bVar2 == 1) {
    if (*(short *)(param_3 + 4) != 0x170) goto LAB_0062ad4c;
LAB_0062ad54:
    uVar12 = 0;
LAB_0062ad58:
    uVar8 = uVar8 & uVar12;
  }
  else {
    if (bVar2 == 4) {
      sVar4 = *(short *)(param_3 + 4);
      uVar8 = (uint)((bVar16 && sVar4 != 1) && sVar4 != 0xd);
      if (sVar4 == 3) goto LAB_0062ad54;
LAB_0062ad4c:
      uVar12 = 1;
      goto LAB_0062ad58;
    }
    if (bVar2 == 0xc) {
      if (*(short *)(param_3 + 4) == 0x175) goto LAB_0062ad54;
      goto LAB_0062ad4c;
    }
    uVar8 = 0;
    if (bVar2 != 0x11) {
      uVar8 = 1;
    }
  }
  iVar9 = param_1 + 4;
  uVar8 = uVar8 & ((int)*(char *)(param_1 + 0x18) ^ 1U);
  if (uVar8 == 0) {
LAB_0062ae14:
    iVar10 = fn_006196d8(iVar13,local_30);
    if ((iVar10 == 0) && ('\0' < *(char *)(iVar7 + -0x3ff5))) {
      param_3[0x180] = 1;
    }
    else if (uVar8 == 0) {
      uVar12 = (uint)bVar3 << 0x10;
LAB_0062b044:
      uVar15 = 0x1f5;
      iVar10 = fn_006f44fc(iVar14,0x1f5);
      if (iVar10 != 0) {
LAB_0062b120:
        *(uint *)(iVar9 + iVar13 * 4 + 0x60) = uVar12 | uVar15;
        return;
      }
      uVar15 = 0x1f6;
      iVar10 = fn_006f44fc(iVar14,0x1f6);
      if (iVar10 != 0) goto LAB_0062b120;
      if (uVar8 != 0) {
        iVar10 = fn_006f44fc(iVar14,0x1d8);
        if ((iVar10 != 0) && (iVar10 = fn_00624edc(local_34,0x1d8,iVar13,local_30,0), iVar10 != 0))
        {
          *(uint *)(iVar9 + iVar13 * 4 + 0x60) = uVar12 | 0x1d8;
          return;
        }
        uVar15 = 0x1ee;
        iVar10 = fn_006f44fc(iVar14,0x1ee);
        if ((iVar10 != 0) && (iVar10 = fn_00624edc(local_34,0x1ee,iVar13,local_30,0), iVar10 != 0))
        goto LAB_0062b120;
      }
    }
    else {
      iVar10 = fn_006f44fc(iVar14,0xb9);
      if ((iVar10 == 0) || (iVar10 = fn_00624edc(local_34,0xb9,iVar13,local_30,0), iVar10 == 0)) {
        iVar10 = fn_006f44fc(iVar14,0xbc);
        if ((iVar10 == 0) || (iVar10 = fn_00624edc(local_34,0xbc,iVar13,local_30,0), iVar10 == 0))
        {
          uVar12 = (uint)bVar3 << 0x10;
          iVar10 = fn_006f44fc(iVar14,0xbd);
          if ((iVar10 != 0) && (iVar10 = fn_00624edc(local_34,0xbd,iVar13,local_30,0), iVar10 != 0)
             ) {
            *(uint *)(iVar9 + iVar13 * 4 + 0x60) = uVar12 | 0xbd;
            return;
          }
          iVar10 = fn_006f44fc(iVar14,0xbe);
          if ((iVar10 != 0) && (iVar10 = fn_00624edc(local_34,0xbe,iVar13,local_30,0), iVar10 != 0)
             ) {
            *(uint *)(iVar9 + iVar13 * 4 + 0x60) = uVar12 | 0xbe;
            return;
          }
          iVar10 = fn_006f44fc(iVar14,0xbf);
          if ((iVar10 == 0) || (iVar10 = fn_00624edc(local_34,0xbf,iVar13,local_30,0), iVar10 == 0)
             ) goto LAB_0062b044;
          if ((int)(char)bVar3 - 0x10U < 8) {
            if ((char)bVar3 == 0 || iVar13 == 0) {
LAB_0062b028:
              *(uint *)(iVar9 + iVar13 * 4 + 0x60) = uVar12 | 0xbf;
              return;
            }
            iVar10 = fn_0061be08();
            if (iVar10 == 0) {
              uVar8 = fn_0061be08(iVar13);
              uVar8 = uVar8 ^ 1;
            }
            else {
              uVar8 = fn_0061be08(iVar13);
            }
            if (uVar8 == 0) goto LAB_0062b028;
          }
        }
        else {
          param_3[0x182] = 1;
        }
      }
      else {
        param_3[0x181] = 1;
      }
    }
  }
  else {
    iVar10 = fn_006f44fc(iVar14,0x1f2);
    if ((iVar10 == 0) || (iVar10 = fn_00624edc(local_34,0x1f2,iVar13,local_30,0), iVar10 == 0)) {
      iVar10 = fn_006f44fc(iVar14,0xbb);
      if ((iVar10 == 0) || (iVar10 = fn_00624edc(local_34,0xbb,iVar13,local_30,0), iVar10 == 0)) {
        iVar10 = fn_006f44fc(iVar14,0xba);
        if ((iVar10 == 0) || (iVar10 = fn_00624edc(local_34,0xba,iVar13,local_30,0), iVar10 == 0))
        goto LAB_0062ae14;
        param_3[0x183] = 1;
      }
      else {
        fn_00654c58(iVar7 + -0x3dfc,0xbb);
        param_3[0x184] = 1;
      }
    }
    else {
      fn_00654c58(iVar7 + -0x3dfc,0x1f2);
      param_3[399] = 1;
    }
  }
  bVar3 = param_3[0x184];
  bVar16 = bVar3 == 0;
  if (bVar16) {
    bVar3 = param_3[0x183];
  }
  if (!bVar16 || bVar3 != 0) {
    fn_001802bc(iVar14,1);
    return;
  }
  if (param_3[0x182] != 0) {
    fn_00180350(iVar7 + -0x4025,0x42,1,0,0);
    fn_00625c54(local_34,param_3,0);
    return;
  }
  fn_0062a2f0(local_34,iVar14,param_3,local_28);
  bVar3 = param_3[0x180];
  bVar16 = bVar3 == 0;
  if (bVar16) {
    bVar3 = param_3[0x181];
  }
  bVar17 = bVar16 && bVar3 == 0;
  if (bVar16 && bVar3 == 0) {
    bVar17 = param_3[399] == 0;
  }
  if (!bVar17) {
    fn_00655a88(auStack_48);
    local_50 = 0;
    local_4c = 0;
    if (param_3[399] == 0) {
      uVar11 = 0x47;
    }
    else {
      uVar11 = 0x285;
    }
    fn_00616c50(uVar11,1,0,iVar13,iVar13,iVar6,auStack_48,&local_50,0);
    *(undefined4 *)(param_3 + 400) = local_50;
    fn_006f4c1c(local_34,iVar14,param_3,iVar6,param_3 + 400);
  }
LAB_0062b248:
  fn_00626398(local_34,local_28);
  return;
}



undefined1 * fn_0062a998(undefined4 param_1,int param_2,int *param_3)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  undefined1 *puVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iStack_dc;
  uint local_d8 [31];
  undefined1 auStack_5c [60];
  
  piVar6 = &iStack_dc;
  uVar3 = 0;
  iVar7 = 0xc;
  do {
    iVar9 = uVar3 + 1;
    piVar6[1] = uVar3;
    iVar7 = iVar7 + -1;
    uVar3 = uVar3 + 2;
    piVar6 = piVar6 + 2;
    *piVar6 = iVar9;
  } while (iVar7 != 0);
  uVar10 = 0;
  iVar7 = 0;
  do {
    uVar12 = local_d8[uVar10];
    uVar3 = fn_0063a5a4(uVar3,piVar6,iVar7);
    iVar7 = uVar3 * -0x55555555;
    uVar3 = uVar3 % 0x18;
    piVar6 = (int *)local_d8[uVar3];
    local_d8[uVar10] = (uint)piVar6;
    uVar10 = uVar10 + 1;
    local_d8[uVar3] = uVar12;
  } while (uVar10 < 0x18);
  iVar9 = 0;
  puVar4 = (undefined1 *)0x0;
  iVar7 = 0;
  for (iVar13 = *param_3; iVar8 = param_3[1], iVar8 != iVar13; iVar13 = iVar13 + 0x34) {
    cVar1 = *(char *)(iVar13 + 5);
    iVar8 = iVar7;
    if (iVar9 != cVar1) {
      sVar2 = fn_001746c0((int)*(short *)(iVar13 + 0xc));
      puVar4 = (undefined1 *)fn_0062bc94((int)sVar2,(int)cVar1,param_2,0);
      iVar9 = (int)*(char *)(iVar13 + 5);
      iVar8 = iVar7 + 1;
    }
    *(uint *)(iVar13 + 8) = local_d8[iVar7] + (int)puVar4 * 100;
    iVar7 = iVar8;
  }
  iVar7 = *param_3;
  if (iVar7 != iVar8) {
    fn_007af59c(iVar7,iVar8,(iVar8 - iVar7) / 0x34,param_2);
    if (iVar8 - iVar7 < 0x341) {
      puVar4 = (undefined1 *)fn_007a5540(iVar7,iVar8,param_2);
      return puVar4;
    }
    puVar4 = (undefined1 *)fn_007a5540(iVar7,iVar7 + 0x340,param_2);
    for (iVar7 = iVar7 + 0x340; iVar7 != iVar8; iVar7 = iVar7 + 0x34) {
      iVar5 = fn_00656538(auStack_5c,iVar7);
      iVar9 = *(int *)(iVar5 + 8);
      iVar13 = *(int *)(iVar7 + -0x2c);
      if (*(char *)(param_2 + 1) == '\x01') {
        iVar9 = -iVar9;
        iVar13 = -iVar13;
      }
      iVar14 = iVar7;
      iVar11 = iVar7;
      if (iVar13 < iVar9) {
        do {
          iVar11 = iVar14 + -0x34;
          *(undefined1 *)(iVar14 + 4) = *(undefined1 *)(iVar14 + -0x30);
          *(undefined1 *)(iVar14 + 5) = *(undefined1 *)(iVar14 + -0x2f);
          *(undefined1 *)(iVar14 + 6) = *(undefined1 *)(iVar14 + -0x2e);
          *(undefined4 *)(iVar14 + 8) = *(undefined4 *)(iVar14 + -0x2c);
          fn_006f94f4(iVar14 + 0xc,iVar14 + -0x28);
          *(undefined4 *)(iVar14 + 0xc) = *(undefined4 *)(iVar14 + -0x28);
          *(undefined2 *)(iVar14 + 0xc) = *(undefined2 *)(iVar14 + -0x28);
          *(undefined2 *)(iVar14 + 0xc) = *(undefined2 *)(iVar14 + -0x28);
          *(undefined2 *)(iVar14 + 0xc) = *(undefined2 *)(iVar14 + -0x28);
          *(undefined1 *)(iVar14 + 0x16) = *(undefined1 *)(iVar14 + -0x1e);
          *(undefined4 *)(iVar14 + 0x18) = *(undefined4 *)(iVar14 + -0x1c);
          *(undefined4 *)(iVar14 + 0x1c) = *(undefined4 *)(iVar14 + -0x18);
          *(undefined4 *)(iVar14 + 0x20) = *(undefined4 *)(iVar14 + -0x14);
          *(undefined4 *)(iVar14 + 0x24) = *(undefined4 *)(iVar14 + -0x10);
          *(undefined4 *)(iVar14 + 0x28) = *(undefined4 *)(iVar14 + -0xc);
          *(undefined4 *)(iVar14 + 0x2c) = *(undefined4 *)(iVar14 + -8);
          *(undefined4 *)(iVar14 + 0x30) = *(undefined4 *)(iVar14 + -4);
          iVar9 = *(int *)(iVar5 + 8);
          iVar13 = *(int *)(iVar14 + -0x60);
          if (*(char *)(param_2 + 1) == '\x01') {
            iVar9 = -iVar9;
            iVar13 = -iVar13;
          }
          iVar14 = iVar11;
        } while (iVar13 < iVar9);
      }
      fn_006565e0(iVar11,iVar5);
      puVar4 = auStack_5c;
    }
  }
  return puVar4;
}


