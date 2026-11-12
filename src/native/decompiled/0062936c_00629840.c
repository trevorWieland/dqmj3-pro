#include "0062936c_00629840.h"



void fn_00629840(int param_1,char *param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  char cVar8;
  int iVar9;
  char cVar10;
  char cVar11;
  bool bVar12;
  bool bVar13;
  undefined1 auStack_28 [12];
  
  uVar7 = (uint)*(short *)(param_2 + 0x18);
  iVar9 = 0;
  if (0 < (int)(uVar7 - 1)) {
    pcVar2 = param_2 + 0xe;
    if (((uVar7 & 1) == 0) && (pcVar2 = param_2 + 0xf, *pcVar2 != '\0')) {
      iVar9 = 1;
    }
    cVar8 = (char)iVar9;
    cVar1 = pcVar2[1];
    cVar10 = '\0';
    for (iVar6 = (int)(uVar7 - 1) >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      if (cVar1 != '\0') {
        iVar9 = (int)(char)((char)iVar9 + '\x01');
      }
      cVar8 = (char)iVar9;
      bVar12 = pcVar2[2] != '\0';
      cVar11 = '\0';
      if (bVar12) {
        cVar11 = cVar10 + '\x01';
      }
      cVar1 = pcVar2[3];
      if (bVar12) {
        cVar10 = cVar11;
      }
      pcVar2 = pcVar2 + 2;
    }
    iVar9 = (int)(char)(cVar8 + cVar10);
  }
  if ((-1 < (int)(uVar7 - 1)) && (param_2[uVar7 + 0xe] != '\0')) {
    iVar9 = (int)(char)((char)iVar9 + '\x01');
  }
  if (iVar9 != 0) {
    iVar6 = (int)*param_2;
    uVar7 = iVar6 - 0x10;
    bVar12 = uVar7 < 4;
    if (!bVar12) {
      uVar7 = iVar6 - 0x18;
    }
    if ((bVar12 || uVar7 < 4) || (iVar6 == 0x20 || iVar6 == 0x22)) {
      uVar7 = 0x10;
    }
    else {
      uVar7 = 0x14;
    }
    iVar3 = fn_0061be08(iVar6);
    if (iVar3 == 0) {
      uVar4 = 0x18;
    }
    else {
      uVar4 = 0x14;
    }
    if (uVar7 < uVar4) {
      do {
        iVar3 = param_3 + uVar7 * 0x418;
        if ((*(char *)(iVar3 + -0x407e) == '\b') && (0 < *(short *)(iVar3 + -0x4080))) {
          cVar1 = *(char *)(iVar3 + -0x4019);
          bVar12 = cVar1 == '\0';
          if (bVar12) {
            cVar1 = *(char *)(iVar3 + -0x400a);
          }
          bVar13 = bVar12 && cVar1 == '\0';
          if (bVar12 && cVar1 == '\0') {
            bVar13 = *(char *)(iVar3 + -0x4018) == '\0';
          }
          if (bVar13) {
            fn_00621304(uVar7,param_3,auStack_28);
            iVar3 = 0;
            if (0 < iVar9) {
              do {
                iVar5 = fn_00655430(auStack_28);
                if (iVar5 != 0) {
                  fn_00655e10(param_1 + 4,uVar7);
                  break;
                }
                iVar3 = iVar3 + 1;
              } while (iVar3 < iVar9);
            }
          }
        }
        uVar7 = (uint)(char)((char)uVar7 + '\x01');
        iVar3 = fn_0061be08(iVar6);
        if (iVar3 == 0) {
          iVar3 = 0x18;
        }
        else {
          iVar3 = 0x14;
        }
      } while ((int)uVar7 < iVar3);
    }
  }
  return;
}



void fn_00629734(int param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = (undefined1 *)(param_3 + 0xba);
  iVar3 = 1;
  iVar2 = 0x60;
  do {
    *puVar1 = 0;
    do {
      iVar2 = iVar2 + -1;
      puVar1 = puVar1 + 1;
      iVar3 = iVar3 + 1;
      if (iVar2 == 0) {
        param_1 = param_1 + 4;
        *(undefined1 *)(*(char *)(param_3 + 1) + param_1 + -0xc) = 1;
        iVar2 = fn_00166804(param_2);
        if (iVar2 != 0) {
          iVar2 = fn_0061be08((int)*(char *)(param_3 + 1));
          if (iVar2 == 0) {
            iVar2 = 0x21;
          }
          else {
            iVar2 = 0x20;
          }
          iVar3 = param_4 + 0x180388 + iVar2 * 8;
          if (iVar3 != -0x4180) {
            *(undefined1 *)(iVar3 + 0x4182) = 0;
            *(undefined1 *)(iVar3 + 0x4183) = 1;
          }
          if (iVar2 - 0x20U < 2) {
            *(undefined1 *)(iVar2 + param_1 + -0x14) = 1;
          }
          else {
            *(undefined1 *)(iVar2 + param_1 + -0x14) = 1;
          }
        }
        iVar2 = fn_001667f0(param_2);
        if (iVar2 != 0) {
          iVar2 = fn_0061be08((int)*(char *)(param_3 + 1));
          if (iVar2 == 0) {
            iVar2 = 0x23;
          }
          else {
            iVar2 = 0x22;
          }
          iVar3 = param_4 + 0x180388 + iVar2 * 8;
          if (iVar3 != -0x4180) {
            *(undefined1 *)(iVar3 + 0x4182) = 0;
            *(undefined1 *)(iVar3 + 0x4183) = 1;
          }
          if (iVar2 - 0x20U < 2) {
            *(undefined1 *)(iVar2 + param_1 + -0x14) = 1;
          }
          else {
            *(undefined1 *)(iVar2 + param_1 + -0x14) = 1;
          }
        }
        return;
      }
    } while ((iVar3 == 0xc || iVar3 == 0xd) || iVar3 == 0x1b);
  } while( true );
}



void fn_00629700(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined1 auStack_18 [12];
  
  uVar1 = fn_0062a40c();
  fn_00621140(uVar1,(int)*(char *)(param_4 + 1),param_3,auStack_18);
  fn_00655430(auStack_18);
  return;
}



undefined4 fn_006295f4(undefined4 param_1,char param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  uint uVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined4 local_28;
  
  iVar2 = param_3 + 0x180388 + param_2 * 0x418;
  psVar5 = (short *)(iVar2 + -0x4080);
  uVar7 = 0;
  iVar3 = fn_006f0934(param_3 + 0x180388,(int)param_2);
  if (iVar3 == 0) {
    if (0 < *psVar5) {
      cVar1 = *(char *)(iVar2 + -0x4019);
      bVar8 = cVar1 == '\0';
      if (bVar8) {
        cVar1 = *(char *)(iVar2 + -0x400a);
      }
      if ((bVar8 && cVar1 == '\0') && (*(char *)(iVar2 + -0x4018) == '\0')) {
        uVar6 = 1;
        do {
          iVar3 = fn_0068fbdc((int)(short)uVar6);
          if (iVar3 == param_4) {
            cVar1 = *(char *)((int)psVar5 + uVar6 + 0xbc);
            if ('\0' < cVar1) {
              *(char *)((int)psVar5 + uVar6 + 0xbc) = cVar1 + -1;
            }
            if ((*(char *)((int)psVar5 + uVar6 + 0xbc) == '\0') &&
               (*(char *)((int)psVar5 + uVar6 + 0x5b) != '\0')) {
              *(undefined1 *)(iVar2 + -0x4025 + (uVar6 & 0xff)) = 0;
              *(undefined1 *)(iVar2 + -0x4025 + (uVar6 & 0xff) + 0x61) = 0;
              if (param_5 != 0) {
                uVar7 = 1;
                *(undefined1 *)(param_5 + uVar6) = 1;
              }
            }
          }
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < 0x61);
      }
    }
    return uVar7;
  }
  local_28 = 0;
  uVar7 = 0;
  if (psVar5 != (short *)0x0) {
    if ((0 < *psVar5) && (*(char *)(iVar2 + -0x4019) == '\0')) {
      cVar1 = *(char *)(iVar2 + -0x400a);
      bVar8 = cVar1 == '\0';
      if (bVar8) {
        cVar1 = *(char *)(iVar2 + -0x4018);
      }
      if (bVar8 && cVar1 == '\0') {
        iVar3 = 1;
LAB_0062a1b8:
        iVar3 = iVar3 + 1;
        if (iVar3 < 0x61) {
          while ((iVar3 == 0x42 && (iVar4 = fn_0068fbdc(0x42), iVar4 == param_4))) {
            if ('\0' < *(char *)(iVar2 + -0x3f82)) {
              *(char *)(iVar2 + -0x3f82) = *(char *)(iVar2 + -0x3f82) + -1;
            }
            if ((*(char *)(iVar2 + -0x3f82) != '\0') || (*(char *)(iVar2 + -0x3fe3) == '\0')) break;
            *(undefined1 *)(iVar2 + -0x3fe3) = 0;
            *(undefined1 *)(iVar2 + -0x3f82) = 0;
            if (param_5 != 0) {
              *(undefined1 *)(param_5 + 0x42) = 1;
              local_28 = 1;
            }
            iVar3 = 0x44;
          }
          goto LAB_0062a1b8;
        }
      }
    }
    uVar7 = local_28;
  }
  return uVar7;
}



void fn_0062936c(undefined4 param_1,undefined1 *param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  *param_3 = param_2[2];
  *(undefined2 *)(param_3 + 2) = *(undefined2 *)(param_2 + 4);
  param_3[6] = param_2[6];
  param_3[4] = *param_2;
  param_3[0xc0] = param_2[0x19d];
  param_3[5] = param_2[1];
  *(undefined2 *)(param_3 + 8) = *(undefined2 *)(param_2 + 0x18);
  *(undefined4 *)(param_3 + 0x10) = *(undefined4 *)(param_2 + 400);
  *(undefined4 *)(param_3 + 0xbc) = *(undefined4 *)(param_2 + 0x54);
  fn_0061d654(param_3 + 10,1,(int)(char)param_2[0x18e]);
  fn_0061d654(param_3 + 10,2,(int)(char)param_2[0x17c]);
  fn_0061d654(param_3 + 10,4,(int)(char)param_2[0x17d]);
  fn_0061d654(param_3 + 10,8,(int)(char)param_2[0x17f]);
  fn_0061d654(param_3 + 10,0x10);
  fn_0061d654(param_3 + 10,0x800,(int)(char)param_2[0x185]);
  fn_0061d654(param_3 + 10,0x20,(int)(char)param_2[0x180]);
  fn_0061d654(param_3 + 10,0x40,(int)(char)param_2[0x181]);
  fn_0061d654(param_3 + 10,0x80,(int)(char)param_2[0x182]);
  fn_0061d654(param_3 + 10,0x100,(int)(char)param_2[0x183]);
  fn_0061d654(param_3 + 10,0x200,(int)(char)param_2[0x184]);
  fn_0061d654(param_3 + 10,0x2000,(int)(char)param_2[399]);
  fn_0061d654(param_3 + 10,0x1000,(int)(char)param_2[0x18d]);
  *(undefined4 *)(param_3 + 0x14) = *(undefined4 *)(param_2 + 0x194);
  *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(param_2 + 0x198);
  if (param_2[2] == '\x04') {
    if (*(short *)(param_2 + 4) == 0xf) {
      *(undefined2 *)(param_3 + 0x1c) = *(undefined2 *)(param_2 + 0x1c);
      return;
    }
    if (*(short *)(param_2 + 4) == 0xe) {
      *(undefined4 *)(param_3 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
      return;
    }
  }
  bVar1 = false;
  if ((param_2[0x12f] == '\x01') || (param_2[0x6d] != '\0')) {
    fn_0061d654(param_3 + 10,0x400,1);
    uVar2 = *(undefined4 *)(param_2 + 0x20);
    uVar3 = *(undefined4 *)(param_2 + 0x24);
    bVar1 = true;
    *(undefined4 *)(param_3 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    *(undefined4 *)(param_3 + 0x20) = uVar2;
    *(undefined4 *)(param_3 + 0x24) = uVar3;
  }
  iVar4 = 0;
  if (0 < *(short *)(param_3 + 8)) {
    do {
      if (!bVar1) {
        *(undefined4 *)(param_3 + iVar4 * 4 + 0x1c) = *(undefined4 *)(param_2 + iVar4 * 8 + 0x1c);
      }
      fn_00616c30(param_3 + 0xc,iVar4,(int)(char)param_2[iVar4 + 8]);
      fn_00616c30(param_3 + 0xd,iVar4);
      fn_00616c30(param_3 + 0x58,iVar4,(int)(char)param_2[iVar4 + 0x186]);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(short *)(param_3 + 8));
  }
  iVar4 = 1;
  do {
    param_3[iVar4 + 0x59] = param_2[iVar4 + 0x58];
    fn_00619734(param_3 + 0x38,iVar4,(int)(char)param_2[iVar4 + 0xb9]);
    fn_00619734(param_3 + 0x48,iVar4,(int)(char)param_2[iVar4 + 0x11a]);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x61);
  return;
}


