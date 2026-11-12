#include "00628328_00628970.h"



void fn_00628970(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uStack_1c0;
  char local_1bf;
  
  fn_0017821c(&uStack_1c0,param_3,0x1a0);
  param_2 = param_2 + local_1bf * 0x418;
  if (0 < *(char *)(param_2 + -0x401f)) {
    uVar2 = 0;
    while( true ) {
      uVar3 = (&DAT_007f09f0)[uVar2 * 5];
      uVar4 = (&DAT_007f09f4)[uVar2 * 5];
      if ((&DAT_007f09e4)[uVar2 * 5] == (int)*(char *)(param_2 + -0x401f)) break;
      uVar2 = uVar2 + 1;
      if (3 < uVar2) {
        return;
      }
    }
    if (param_4 == 0) {
      uVar4 = (&DAT_007f09ec)[uVar2 * 5];
      uVar3 = (&DAT_007f09e8)[uVar2 * 5];
    }
    iVar1 = fn_00655488(uVar3,uVar4);
    if (iVar1 != 0) {
      *(undefined1 *)(param_2 + -0x401f) = 0;
      *(undefined1 *)(param_2 + -0x3fbe) = 0;
      *(undefined1 *)(param_3 + 0x120) = 1;
    }
  }
  return;
}



void fn_00628618(int param_1,undefined4 param_2,int param_3,int *param_4)

{
  char cVar1;
  undefined1 uVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  bool bVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined2 local_58;
  char local_55;
  undefined1 local_54;
  undefined1 auStack_50 [28];
  int iStack_34;
  undefined4 local_30;
  int iStack_2c;
  int *piStack_28;
  
  iVar12 = 0;
  if (0 < *param_4) {
    iVar10 = param_3 + 0x180388;
    iStack_34 = param_1;
    local_30 = param_2;
    iStack_2c = param_3;
    piStack_28 = param_4;
    do {
      piVar11 = param_4 + iVar12 * 0x68 + 2;
      iVar4 = iVar10 + *(char *)((int)param_4 + iVar12 * 0x1a0 + 9) * 0x418;
      if (0 < *(short *)(iVar4 + -0x4080)) {
        cVar1 = *(char *)(iVar4 + -0x4019);
        bVar15 = cVar1 == '\0';
        if (bVar15) {
          cVar1 = *(char *)(iVar4 + -0x400a);
        }
        bVar16 = bVar15 && cVar1 == '\0';
        if (bVar15 && cVar1 == '\0') {
          bVar16 = *(char *)(iVar4 + -0x4018) == '\0';
        }
        if (bVar16) {
          uVar14 = (uint)(short)param_4[iVar12 * 0x68 + 8];
          iVar4 = 0;
          if (0 < (int)(uVar14 - 1)) {
            piVar7 = param_4 + iVar12 * 0x68 + 7;
            if ((uVar14 & 1) == 0) {
              piVar7 = param_4 + iVar12 * 0x68 + 9;
              iVar4 = *piVar7;
            }
            iVar13 = piVar7[2];
            iVar9 = 0;
            for (iVar8 = (int)(uVar14 - 1) >> 1; iVar8 != 0; iVar8 = iVar8 + -1) {
              iVar4 = iVar4 + iVar13;
              iVar13 = piVar7[6];
              iVar9 = iVar9 + piVar7[4];
              piVar7 = piVar7 + 4;
            }
            iVar4 = iVar4 + iVar9;
          }
          if (-1 < (int)(uVar14 - 1)) {
            iVar4 = iVar4 + piVar11[(uVar14 - 1) * 2 + 7];
          }
          if (param_4[iVar12 * 0x68 + 0x17] + iVar4 != 0) {
            fn_006565b8(&local_9c);
            local_9c = 0;
            local_98 = 0;
            local_94 = 0;
            local_90 = 0;
            local_8c = 0;
            local_88 = 0;
            local_84 = 0;
            local_80 = 0;
            local_7c = 0;
            local_78 = 0;
            local_74 = 0;
            local_70 = 0;
            local_6c = 0;
            local_55 = (char)*piVar11;
            local_54 = *(undefined1 *)((int)param_4 + iVar12 * 0x1a0 + 9);
            local_58 = (undefined2)local_30;
            fn_006564f4(&local_9c,&local_58,0,1,0);
            iVar4 = param_4[1];
            param_4[1] = iVar4 + 1;
            piVar7 = param_4 + iVar4 * 0x68 + 0x822;
            *(undefined1 *)((int)param_4 + iVar4 * 0x1a0 + 0x208a) = 4;
            *(undefined2 *)(param_4 + iVar4 * 0x68 + 0x823) = 9;
            *(undefined2 *)(param_4 + iVar4 * 0x68 + 0x828) = 1;
            *(char *)piVar7 = (char)*piVar11;
            *(undefined1 *)((int)param_4 + iVar4 * 0x1a0 + 0x2089) =
                 *(undefined1 *)((int)param_4 + iVar12 * 0x1a0 + 9);
            fn_0062a40c(param_1,&local_9c);
            uVar2 = fn_00691d5c();
            *(undefined1 *)((int)param_4 + iVar4 * 0x1a0 + 0x208e) = uVar2;
            fn_0062a40c(param_1,&local_9c);
            uVar2 = fn_00163a00();
            *(undefined1 *)((int)param_4 + iVar4 * 0x1a0 + 0x208f) = uVar2;
            fn_00655a48(&local_68,(int)(char)param_4[iVar4 * 0x68 + 0x828],0);
            iVar8 = param_1 + 0x24;
            iVar13 = (int)((unsigned int)(local_98) >> 8) & 0xff;
            uVar5 = fn_0062a40c(param_1,&local_9c);
            fn_006558e4(&local_68,uVar5,iVar13,
                         (int)*(char *)((int)param_4 + iVar4 * 0x1a0 + 0x2089),iVar8,iVar10,0);
            uVar5 = local_68;
            uVar17 = uStack_64;
            uVar18 = uStack_60;
            uVar19 = uStack_5c;
            uVar6 = fn_0062a40c(param_1,&local_9c);
            fn_0061fd6c(uVar6,(int)(char)*piVar7,
                         (int)*(char *)((int)param_4 + iVar4 * 0x1a0 + 0x2089),iVar10,uVar5,uVar17,
                         uVar18,uVar19,auStack_50);
            bVar3 = fn_00655430(auStack_50);
            *(byte *)(param_4 + iVar4 * 0x68 + 0x824) = bVar3 ^ 1;
            uVar5 = fn_0062a40c(param_1,&local_9c);
            fn_00616c50(uVar5,*param_4,iVar12,(int)(char)*piVar7,
                         (int)*(char *)((int)param_4 + iVar4 * 0x1a0 + 0x2089),iVar10,&local_68,
                         param_4 + iVar4 * 0x68 + 0x829,0);
            uVar5 = fn_0062a40c(param_1,&local_9c);
            fn_00618b44(uVar5,(int)(char)*piVar7,
                         (int)*(char *)((int)param_4 + iVar4 * 0x1a0 + 0x2089),iVar10,&local_68,
                         param_4 + iVar4 * 0x68 + 0x838,0);
            if ((char)param_4[iVar4 * 0x68 + 0x824] != '\0') {
              param_4[iVar4 * 0x68 + 0x829] = 0;
            }
            fn_0062187c(param_1,piVar7,iVar10);
            fn_0062454c(param_1,piVar7,iVar10,0,1);
            fn_00654bf4(iVar10,param_4[iVar4 * 0x68 + 0x887]);
            fn_00654c30(iVar10,param_4[iVar4 * 0x68 + 0x888]);
          }
        }
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < *param_4);
  }
  return;
}



void fn_00628328(undefined4 param_1,int param_2,int param_3,int *param_4)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  byte local_60 [2];
  short local_5e;
  int local_5c;
  int local_58;
  int local_50;
  byte local_4c [2];
  short local_4a;
  short local_48;
  short *local_44;
  int local_38;
  int local_34;
  int local_30;
  
  uVar3 = fn_0062a40c();
  local_58 = (int)*(char *)(param_2 + 5);
  iVar4 = fn_0061be08();
  if (iVar4 != 0) {
    local_38 = param_3 + 0x180388;
    iVar4 = fn_006f4850(param_3 + 0x180470);
    if ((iVar4 == 0) && (iVar4 = fn_001639e4(uVar3), iVar4 == 0xe)) {
      iVar5 = local_38 + local_58 * 0x418;
      sVar2 = fn_00691af0(uVar3,1);
      iVar4 = sVar2 * 100;
      cVar7 = *(char *)(iVar5 + -0x3fe6);
      if (cVar7 < '\x01') {
        cVar7 = *(char *)(iVar5 + -0x3fe5);
      }
      if (cVar7 < '\x01') {
        if ('\0' < *(char *)(iVar5 + -0x3fe4)) {
          iVar4 = 0;
        }
      }
      else {
        iVar4 = 0x6400;
      }
      iVar5 = 0;
      if (0 < *param_4) {
        do {
          iVar6 = 0;
          uVar11 = (uint)(short)param_4[iVar5 * 0x68 + 8];
          if (0 < (int)(uVar11 - 1)) {
            piVar8 = param_4 + iVar5 * 0x68 + 7;
            if ((uVar11 & 1) == 0) {
              piVar8 = param_4 + iVar5 * 0x68 + 9;
              iVar6 = *piVar8;
            }
            iVar12 = piVar8[2];
            iVar10 = 0;
            for (iVar9 = (int)(uVar11 - 1) >> 1; iVar9 != 0; iVar9 = iVar9 + -1) {
              iVar6 = iVar6 + iVar12;
              iVar12 = piVar8[6];
              iVar10 = iVar10 + piVar8[4];
              piVar8 = piVar8 + 4;
            }
            iVar6 = iVar6 + iVar10;
          }
          if (-1 < (int)(uVar11 - 1)) {
            iVar6 = iVar6 + param_4[iVar5 * 0x68 + (uVar11 - 1) * 2 + 9];
          }
          if (iVar6 != 0) {
            cVar7 = *(char *)((int)param_4 + iVar5 * 0x1a0 + 9);
            local_50 = 0;
            iVar6 = local_38 + cVar7 * 0x418;
            local_44 = (short *)(iVar6 + -0x3c80);
            if (*(short *)(iVar6 + -0x3c7c) == 0) {
              bVar13 = *(char *)(iVar6 + -0x3c81) != '\0';
              cVar1 = '\0';
              if (bVar13) {
                cVar1 = *(char *)(iVar6 + -0x3c82);
              }
              if (bVar13 && cVar1 != '\0') {
                local_34 = iVar6 + -0x3d80;
                cVar1 = *(char *)(iVar6 + -0x3c81);
                uVar11 = 0;
                local_5c = iVar4;
                do {
                  fn_0019bc50(local_4c,&DAT_007f0a34 + uVar11 * 6);
                  if ((uint)local_4c[0] == (int)cVar1) {
                    iVar6 = fn_00655488(local_4a * local_5c,local_48 * 100);
                    if (iVar6 != 0) {
                      sVar2 = local_44[1];
                      goto LAB_00628510;
                    }
                    break;
                  }
                  uVar11 = uVar11 + 1;
                } while (uVar11 < 8);
                uVar11 = 0;
                cVar1 = *(char *)(local_34 + 0xfe);
                local_30 = iVar4;
                do {
                  fn_0019bc50(local_60,&DAT_007f0a34 + uVar11 * 6);
                  if ((uint)local_60[0] == (int)cVar1) {
                    iVar6 = fn_00655488(local_5e * local_30,(short)local_5c * 100);
                    if (iVar6 != 0) {
                      sVar2 = *local_44;
LAB_00628510:
                      local_50 = (int)sVar2;
                    }
                    break;
                  }
                  uVar11 = uVar11 + 1;
                } while (uVar11 < 8);
                local_44[2] = (short)local_50;
                if (local_50 != 0) {
                  iVar6 = param_4[1];
                  *(undefined1 *)((int)param_4 + iVar6 * 0x1a0 + 0x208a) = 4;
                  *(undefined2 *)(param_4 + iVar6 * 0x68 + 0x823) = 0xf;
                  *(char *)(param_4 + iVar6 * 0x68 + 0x822) = (char)local_58;
                  *(char *)((int)param_4 + iVar6 * 0x1a0 + 0x2089) = cVar7;
                  *(undefined1 *)((int)param_4 + iVar6 * 0x1a0 + 0x208e) = 0;
                  *(undefined1 *)((int)param_4 + iVar6 * 0x1a0 + 0x208f) = 8;
                  *(short *)(param_4 + iVar6 * 0x68 + 0x829) = (short)local_50;
                  param_4[1] = param_4[1] + 1;
                }
              }
            }
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < *param_4);
      }
    }
  }
  return;
}


