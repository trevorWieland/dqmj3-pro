#include "single_006276cc_r.h"


extern undefined4 _local_88;

void fn_006276cc(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined1 uVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  int iVar13;
  short local_88;
  char acStack_86 [30];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_30;
  int iStack_2c;
  int local_28;
  
  uVar10 = 0;
  _local_88 = 0;
  acStack_86[2] = '\0';
  acStack_86[3] = '\0';
  acStack_86[4] = '\0';
  acStack_86[5] = '\0';
  acStack_86[6] = '\0';
  acStack_86[7] = '\0';
  acStack_86[8] = '\0';
  acStack_86[9] = '\0';
  iVar8 = param_1 + 4;
  acStack_86[10] = '\0';
  acStack_86[0xb] = '\0';
  acStack_86[0xc] = '\0';
  acStack_86[0xd] = '\0';
  acStack_86[0xe] = '\0';
  acStack_86[0xf] = '\0';
  acStack_86[0x10] = '\0';
  acStack_86[0x11] = '\0';
  acStack_86[0x12] = '\0';
  acStack_86[0x13] = '\0';
  acStack_86[0x14] = '\0';
  acStack_86[0x15] = '\0';
  acStack_86[0x16] = '\0';
  acStack_86[0x17] = '\0';
  acStack_86[0x18] = '\0';
  acStack_86[0x19] = '\0';
  acStack_86[0x1a] = '\0';
  acStack_86[0x1b] = '\0';
  acStack_86[0x1c] = '\0';
  acStack_86[0x1d] = '\0';
  do {
    uVar6 = uVar10 + 0x10;
    cVar2 = (char)uVar6;
    iVar9 = (int)cVar2;
    if (*(char *)(param_3 + 0xfb) != '\0') {
      uVar4 = iVar9 - 0x10;
      if (uVar4 >= 8) {
        uVar6 = iVar9 - 0x18;
      }
      if (uVar4 < 8 || uVar6 < 8) {
        bVar12 = uVar4 < 4;
        if (!bVar12) {
          uVar4 = iVar9 - 0x18;
        }
        if ((bVar12 || uVar4 < 4) || (iVar9 == 0x20 || iVar9 == 0x22)) {
          cVar2 = cVar2 + '\x04';
        }
        else {
          cVar2 = cVar2 + -4;
        }
        iVar9 = (int)cVar2;
      }
      else if (iVar9 - 0x20U < 2) {
        if (iVar9 == 0x20 || iVar9 == 0x22) {
          iVar9 = 0x21;
        }
        else {
          iVar9 = 0x20;
        }
      }
      else if (iVar9 - 0x22U < 2) {
        if (iVar9 == 0x20 || iVar9 == 0x22) {
          iVar9 = 0x23;
        }
        else {
          iVar9 = 0x22;
        }
      }
      else {
        iVar9 = 0;
      }
    }
    *(undefined4 *)(acStack_86 + uVar10 * 4 + -2) = *(undefined4 *)(iVar8 + iVar9 * 4 + 0x60);
    uVar10 = (uint)(char)((char)uVar10 + '\x01');
  } while (uVar10 < 8);
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  local_38 = param_3 + 0xe8;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  uVar10 = 0;
  local_34 = param_1;
  local_30 = param_2;
  iStack_2c = param_3;
  local_28 = param_4;
  do {
    cVar2 = (char)uVar10;
    iVar9 = (int)(char)(cVar2 + '\x10');
    if (*(char *)(local_38 + 0x13) != '\0') {
      uVar6 = iVar9 - 0x10;
      bVar12 = uVar6 < 8;
      if (!bVar12) {
        uVar6 = iVar9 - 0x18;
      }
      if (bVar12 || uVar6 < 8) {
        iVar9 = fn_0061be08(iVar9);
        if (iVar9 == 0) {
          cVar3 = cVar2 + '\f';
        }
        else {
          cVar3 = cVar2 + '\x14';
        }
        iVar9 = (int)cVar3;
      }
      else if (iVar9 - 0x20U < 2) {
        iVar9 = fn_0061be08(iVar9);
        if (iVar9 == 1) {
          iVar9 = 0x21;
        }
        else {
          iVar9 = 0x20;
        }
      }
      else if (iVar9 - 0x22U < 2) {
        iVar9 = fn_0061be08(iVar9);
        if (iVar9 == 1) {
          iVar9 = 0x23;
        }
        else {
          iVar9 = 0x22;
        }
      }
      else {
        iVar9 = 0;
      }
    }
    iVar5 = local_28;
    if (*(char *)(param_4 + 0x180388 + iVar9 * 0x418 + -0x4019) == '\0') {
      iVar7 = (int)*(short *)(acStack_86 + uVar10 * 4 + -2);
      if (iVar7 == 0x1d8) {
LAB_00627b2c:
        fn_00627c38(local_34,iVar7,iVar9,(int)acStack_86[uVar10 * 4],local_28,param_5);
      }
      else if (iVar7 < 0x1d9) {
        if ((iVar7 != 0) && ((iVar7 == 0xbd || iVar7 == 0xbe) || iVar7 == 0xbf)) goto LAB_00627b2c;
      }
      else {
        if (iVar7 == 0x1ee) goto LAB_00627b2c;
        uVar1 = (undefined1)iVar9;
        iVar13 = param_5;
        if (iVar7 == 0x1f5) {
          local_68 = 0;
          local_64 = 0;
          local_60 = 0;
          local_5c = 0;
          local_58 = 0;
          local_54 = 0;
          fn_0062c7b0(&local_5c,0);
          local_54 = (local_54 & ~((unsigned int)0xffff << 0)) | ((unsigned int)(CONCAT11(0x14,(undefined1)local_54)) & 0xffff);
          local_5c = CONCAT31(((unsigned int)(local_5c) >> 8) & 0xffffff,3);
          local_58 = CONCAT31(((unsigned int)(local_58) >> 8) & 0xffffff,0x1d);
          *(undefined4 *)(param_1 + 0x2f) = local_68;
          *(undefined4 *)(param_1 + 0x33) = local_64;
          *(undefined4 *)(param_1 + 0x37) = local_60;
          *(undefined4 *)(param_1 + 0x3b) = local_5c;
          *(undefined4 *)(param_1 + 0x3f) = local_58;
          *(undefined4 *)(param_1 + 0x43) = local_54;
          *(undefined1 *)(param_1 + 0x1b) = 1;
          iVar7 = iVar13 + *(int *)(iVar13 + 4) * 0x1a0;
          *(undefined1 *)(iVar7 + 0x208a) = 3;
          *(undefined2 *)(iVar7 + 0x208c) = 0x1f5;
          *(undefined1 *)(iVar7 + 0x2088) = uVar1;
          *(undefined1 *)(iVar7 + 0x2089) = uVar1;
          uVar10 = 1;
          do {
            iVar11 = iVar5 + iVar9 * 0x418 + 0x17c363;
            *(undefined1 *)(iVar11 + (uVar10 & 0xff)) = 0;
            uVar6 = uVar10 + 1;
            *(undefined1 *)(iVar11 + (uVar10 & 0xff) + 0x61) = 0;
            ((undefined1 *)(iVar7 + 0x2088))[uVar10 + 0x11a] = 1;
            uVar10 = uVar6;
          } while ((int)uVar6 < 0x61);
        }
        else {
          if (iVar7 != 0x1f6) goto LAB_00627b48;
          local_50 = 0;
          local_4c = 0;
          local_48 = 0;
          local_44 = 0;
          local_40 = 0;
          local_3c = 0;
          fn_0062c7b0(&local_44,0);
          local_40 = CONCAT31(((unsigned int)(local_40) >> 8) & 0xffffff,0x1c);
          local_3c = CONCAT31(((unsigned int)(local_3c) >> 8) & 0xffffff,0x14);
          local_44 = CONCAT31(((unsigned int)(local_44) >> 8) & 0xffffff,3);
          *(undefined4 *)(param_1 + 0x2f) = local_50;
          *(undefined4 *)(param_1 + 0x33) = local_4c;
          *(undefined4 *)(param_1 + 0x37) = local_48;
          *(undefined4 *)(param_1 + 0x3b) = local_44;
          *(undefined4 *)(param_1 + 0x3f) = local_40;
          *(undefined4 *)(param_1 + 0x43) = local_3c;
          *(undefined1 *)(param_1 + 0x1b) = 1;
          iVar7 = iVar13 + *(int *)(iVar13 + 4) * 0x1a0;
          *(undefined1 *)(iVar7 + 0x208a) = 3;
          *(undefined2 *)(iVar7 + 0x208c) = 0x1f6;
          *(undefined1 *)(iVar7 + 0x2088) = uVar1;
          *(undefined1 *)(iVar7 + 0x2089) = uVar1;
          uVar10 = 1;
          do {
            iVar11 = iVar5 + iVar9 * 0x418 + 0x17c363;
            *(undefined1 *)(iVar11 + (uVar10 & 0xff)) = 0;
            uVar6 = uVar10 + 1;
            *(undefined1 *)(iVar11 + (uVar10 & 0xff) + 0x61) = 0;
            ((undefined1 *)(iVar7 + 0x2088))[uVar10 + 0x11a] = 1;
            uVar10 = uVar6;
          } while ((int)uVar6 < 0x61);
        }
        *(int *)(iVar13 + 4) = *(int *)(iVar13 + 4) + 1;
      }
LAB_00627b48:
      fn_00626660(local_34,param_5,local_28);
      iVar9 = fn_00626398(local_34,local_28);
      iVar5 = fn_006f4d64(iVar8,1);
      if (iVar5 == 0) {
        iVar5 = fn_006f4d64(iVar8,0);
        bVar12 = false;
        if (iVar5 != 0) goto LAB_00627b98;
      }
      else {
LAB_00627b98:
        bVar12 = true;
      }
      if (*(char *)(param_1 + 0x1b) == '\0' && (!bVar12 && iVar9 == 0)) {
        fn_006267fc(local_34,param_4 + 0x180388,local_28,param_5);
      }
    }
    uVar10 = (uint)(char)(cVar2 + '\x01');
    if (7 < uVar10) {
      if (local_30 != 0) {
        bVar12 = false;
        iVar9 = 0x10;
        do {
          iVar5 = iVar9 * 4;
          iVar9 = (int)(char)((char)iVar9 + '\x01');
          bVar12 = (bool)(bVar12 | *(short *)(iVar8 + iVar5 + 0x60) != 0);
        } while (iVar9 < 0x18);
        if (bVar12) {
          fn_006276cc(local_34,local_30,param_3,local_28,param_5);
        }
      }
      return;
    }
  } while( true );
}


