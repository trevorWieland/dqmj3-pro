#include "0062cff0_0062d508.h"



void fn_0062d508(undefined4 param_1,uint param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  char cVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  uint extraout_r1;
  int iVar7;
  short *psVar8;
  bool bVar9;
  undefined1 auStack_5220 [20835];
  undefined1 local_bd;
  undefined1 auStack_bc [140];
  undefined4 local_30;
  uint uStack_2c;
  int iStack_28;
  
  iVar7 = 0x20;
  uVar6 = param_2;
  local_30 = param_1;
  uStack_2c = param_2;
  iStack_28 = param_3;
  do {
    uVar2 = local_30;
    cVar1 = (char)iVar7;
    if (*(char *)(param_3 + 0x180483) != '\0') {
      uVar5 = iVar7 - 0x10;
      if (uVar5 >= 8) {
        uVar6 = iVar7 - 0x18;
      }
      if (uVar5 < 8 || uVar6 < 8) {
        bVar9 = uVar5 < 4;
        if (!bVar9) {
          uVar5 = iVar7 - 0x18;
        }
        if ((bVar9 || uVar5 < 4) || (iVar7 == 0x20 || iVar7 == 0x22)) {
          cVar3 = cVar1 + '\x04';
        }
        else {
          cVar3 = cVar1 + -4;
        }
        iVar7 = (int)cVar3;
      }
      else if (iVar7 - 0x20U < 2) {
        if (iVar7 == 0x20 || iVar7 == 0x22) {
          iVar7 = 0x21;
        }
        else {
          iVar7 = 0x20;
        }
      }
      else if (iVar7 - 0x22U < 2) {
        if (iVar7 == 0x20 || iVar7 == 0x22) {
          iVar7 = 0x23;
        }
        else {
          iVar7 = 0x22;
        }
      }
      else {
        iVar7 = 0;
      }
    }
    iVar7 = param_2 + iVar7 * 10;
    psVar8 = (short *)(iVar7 + -0x110);
    if (*psVar8 != 0) {
      fn_006565b8(auStack_bc);
      fn_006564c0(auStack_bc,(int)*psVar8,(int)*(char *)(iVar7 + -0x10e),
                   (int)*(char *)(iVar7 + -0x10d));
      fn_006228c8(auStack_5220);
      fn_00621a88(uVar2,auStack_bc,param_3,auStack_5220);
      fn_00627194(uVar2,auStack_bc,param_3,auStack_5220);
      iVar7 = fn_001639e4((int)*psVar8);
      if (iVar7 == 0x31) {
        if (*(short *)(param_3 + 0x18038c) != 0) {
          uVar6 = fn_0063a5a4();
          uVar5 = fn_00691e14((int)*psVar8,(uVar6 / 100) * -0x19,0xffffffe7,uVar6 * 0x51eb851f);
          *(bool *)(param_3 + 0x18038e) = uVar6 % 100 < uVar5;
        }
        sVar4 = fn_00691e30((int)*psVar8);
        *(short *)(param_3 + 0x18038c) = sVar4 + *(short *)(param_3 + 0x18038c);
        local_bd = *(undefined1 *)(param_3 + 0x18038e);
      }
      iVar7 = fn_0062285c(uVar2,param_3);
      if (iVar7 == 0) {
        fn_006267fc(uVar2,param_3 + 0x180388,param_3,auStack_5220);
      }
      fn_00622928(uVar2,auStack_bc,auStack_5220,param_3);
      uVar6 = extraout_r1;
    }
    iVar7 = (int)(char)(cVar1 + '\x01');
  } while (iVar7 < 0x22);
  return;
}



void fn_0062d38c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint extraout_r1;
  uint uVar5;
  uint extraout_r1_00;
  int iVar6;
  bool bVar7;
  bool bVar8;
  undefined1 auStack_36158 [221440];
  undefined1 auStack_58 [52];
  
  fn_00619504(auStack_36158);
  iVar6 = 0x10;
  uVar5 = extraout_r1;
  do {
    cVar1 = (char)iVar6;
    if (*(char *)(param_2 + 0xfb) != '\0') {
      uVar3 = iVar6 - 0x10;
      if (uVar3 >= 8) {
        uVar5 = iVar6 - 0x18;
      }
      if (uVar3 < 8 || uVar5 < 8) {
        bVar7 = uVar3 < 4;
        if (!bVar7) {
          uVar3 = iVar6 - 0x18;
        }
        if ((bVar7 || uVar3 < 4) || (iVar6 == 0x20 || iVar6 == 0x22)) {
          cVar2 = cVar1 + '\x04';
        }
        else {
          cVar2 = cVar1 + -4;
        }
        iVar6 = (int)cVar2;
      }
      else if (iVar6 - 0x20U < 2) {
        if (iVar6 == 0x20 || iVar6 == 0x22) {
          iVar6 = 0x21;
        }
        else {
          iVar6 = 0x20;
        }
      }
      else if (iVar6 - 0x22U < 2) {
        if (iVar6 == 0x20 || iVar6 == 0x22) {
          iVar6 = 0x23;
        }
        else {
          iVar6 = 0x22;
        }
      }
      else {
        iVar6 = 0;
      }
    }
    iVar4 = param_2 + iVar6 * 0x418;
    uVar5 = (uint)*(short *)(iVar4 + -0x4080);
    if (0 < (int)uVar5) {
      uVar5 = (uint)*(byte *)(iVar4 + -0x4019);
      bVar7 = uVar5 == 0;
      if (bVar7) {
        uVar5 = (uint)*(byte *)(iVar4 + -0x400a);
      }
      bVar8 = bVar7 && uVar5 == 0;
      if (bVar7 && uVar5 == 0) {
        bVar8 = *(char *)(iVar4 + -0x4018) == '\0';
      }
      if (bVar8) {
        fn_0061da50(auStack_58,iVar6,param_4,param_2,param_1 + 4,param_3,auStack_36158);
        fn_0061d71c(auStack_58);
        fn_0061da9c(auStack_58);
        uVar5 = extraout_r1_00;
      }
    }
    iVar6 = (int)(char)(cVar1 + '\x01');
  } while (iVar6 < 0x18);
  return;
}



undefined4 fn_0062d1c4(undefined4 param_1,int param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 extraout_r1;
  int iVar8;
  undefined4 uVar9;
  bool bVar10;
  code *local_64 [8];
  int local_44;
  int local_40;
  byte *local_3c;
  undefined4 local_30;
  int iStack_2c;
  int iStack_28;
  
  local_40 = param_3 + 0x180388;
  uVar9 = 0;
  local_3c = (byte *)(param_3 + 0x180391);
  local_44 = param_3 + 0x180470;
  iVar8 = 0x20;
  local_30 = param_1;
  iStack_2c = param_2;
  iStack_28 = param_3;
  do {
    iVar4 = fn_00620290(iVar8,(int)*(char *)(param_3 + 0x180483));
    iVar7 = local_40;
    iVar5 = param_2 + iVar4 * 10;
    cVar1 = *(char *)(iVar5 + -0x10a);
    if (cVar1 != '\0') {
      if (cVar1 == '\x01') {
        bVar2 = *local_3c;
        *local_3c = (byte)(bVar2 + 1);
        iVar4 = fn_006f4868(local_44,bVar2 + 1,2,0);
        if (iVar4 == 0) {
          uVar6 = 0;
          local_64[0] = fn_0063ad98;
          local_64[1] = fn_0063a5dc;
          local_64[2] = fn_0063b000;
          local_64[3] = fn_0063a5f0;
          local_64[4] = (code *)&LAB_0063a7f8;
          do {
            iVar4 = (*local_64[uVar6])(iVar7);
            if (iVar4 != 0) {
              uVar9 = 1;
              *(undefined1 *)(param_3 + 0x180384) = 4;
              goto LAB_0062d2d8;
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < 5);
        }
        uVar9 = 0;
LAB_0062d2d8:
        fn_00632884(local_30,iVar5 + -0x10a,uVar9,param_3);
      }
      else if (cVar1 == '\x02') {
        fn_00632884(local_30,iVar5 + -0x10a,1,param_3);
        uVar9 = 1;
        if (*(char *)(param_3 + 0x180384) == '\0') {
          uVar6 = iVar4 - 0x10;
          bVar10 = 3 < uVar6;
          if (bVar10) {
            uVar6 = iVar4 - 0x18;
          }
          if ((!(bVar10 && 3 < uVar6)) || (!(iVar4 != 0x20 && iVar4 != 0x22))) {
            iVar7 = fn_006f4868(param_3 + 0x180470,extraout_r1,0x2000,0);
            if (iVar7 == 0) {
              uVar3 = 6;
            }
            else {
              uVar3 = 7;
            }
          }
          else {
            uVar3 = 1;
          }
        }
        else {
          uVar3 = 3;
        }
        *(undefined1 *)(param_3 + 0x180384) = uVar3;
      }
    }
    iVar8 = (int)(char)((char)iVar8 + '\x01');
    if (0x21 < iVar8) {
      return uVar9;
    }
  } while( true );
}



void fn_0062cff0(int param_1,undefined4 param_2,int *param_3)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  bool bVar12;
  char *local_98 [13];
  char local_64 [4];
  char local_60 [16];
  undefined1 auStack_50 [20];
  undefined4 local_3c;
  int local_30;
  undefined4 local_2c;
  int *piStack_28;
  
  local_98[0] = local_60 + 4;
  iVar9 = 0;
  local_60[4] = '\0';
  local_60[0xc] = 0;
  iVar10 = 0;
  local_60[0] = '\0';
  local_64[0] = '\0';
  local_30 = param_1;
  local_2c = param_2;
  piStack_28 = param_3;
  fn_00632198(param_1,param_2,param_3,local_64);
  iVar7 = *param_3;
  while (param_3[1] != iVar7) {
    local_3c = (uint)*(byte *)(iVar7 + 5);
    uVar4 = fn_00656538(local_98,iVar7);
    uVar4 = fn_00626c48(local_30,local_2c,uVar4);
    cVar1 = *(char *)(iVar7 + 0x13);
    fn_0062a40c(local_30,iVar7);
    bVar2 = fn_00691e94();
    bVar3 = fn_006f3120(uVar4);
    pcVar11 = (char *)(iVar7 + 5);
    if (0 < cVar1) {
      iVar7 = iVar7 + cVar1 * 0x34;
    }
    if ((*(char *)(local_30 + *pcVar11 + -8) == '\0' & bVar3 & bVar2) == 0) {
      iVar9 = 0;
    }
    else {
      iVar5 = (int)(char)local_3c;
      uVar6 = iVar5 - 0x10;
      bVar12 = uVar6 < 4;
      if (!bVar12) {
        uVar6 = iVar5 - 0x18;
      }
      if (((bVar12 || uVar6 < 4) || (iVar5 == 0x20)) || (iVar5 == 0x22)) {
        pcVar11 = local_60;
        iVar8 = 1;
        cVar1 = local_64[0];
      }
      else {
        iVar8 = 0;
        pcVar11 = local_60 + 0xc;
        cVar1 = local_60[4];
      }
      if (iVar10 != iVar8) {
        iVar9 = 0;
        iVar10 = iVar8;
      }
      if (cVar1 == 0) {
        if (*pcVar11 == '\0') {
          fn_0061e774((int)(char)local_3c,local_2c,auStack_50);
          iVar9 = fn_00655430(auStack_50);
          if (iVar9 != 0) {
            *pcVar11 = '\x01';
            local_3c = (local_3c & ~((unsigned int)0xffffff << 0)) | ((unsigned int)(CONCAT12(1,(undefined2)local_3c)) & 0xffffff);
          }
        }
      }
      else if (iVar5 == cVar1) {
        *pcVar11 = '\x01';
        iVar9 = 1;
        local_3c = (local_3c & ~((unsigned int)0xffffff << 0)) | ((unsigned int)(CONCAT12(1,(undefined2)local_3c)) & 0xffffff);
      }
    }
    local_3c = (local_3c & ~((unsigned int)0xffff << 0)) | ((unsigned int)(CONCAT11((char)iVar9,(char)local_3c)) & 0xffff);
    fn_00655d5c(local_30 + 4,&local_3c);
  }
  return;
}


