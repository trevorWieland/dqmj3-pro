#include "00630874_00632884.h"



void fn_00632884(int param_1,char *param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  char cVar8;
  bool bVar9;
  bool bVar10;
  undefined1 local_26b8 [4];
  char local_26b4;
  undefined1 local_26b3;
  int local_26b0;
  undefined1 auStack_26ac [2];
  undefined2 uStack_26aa;
  char acStack_26a8 [4];
  undefined2 auStack_26a4 [32];
  undefined1 auStack_2664 [9772];
  int local_38;
  char *pcStack_34;
  undefined4 uStack_30;
  int local_2c;
  
  iVar4 = param_4 + 0x180388;
  local_38 = param_1;
  pcStack_34 = param_2;
  uStack_30 = param_3;
  local_2c = param_4;
  fn_0062b720(param_1,iVar4,local_26b8);
  local_26b8[0] = 6;
  local_26b4 = *param_2;
  local_26b3 = (undefined1)param_3;
  if (*param_2 == '\x01') {
    iVar5 = 0x10;
    *(undefined1 *)(local_38 + 0x1d4) = 2;
    do {
      iVar6 = iVar4 + iVar5 * 0x418;
      cVar7 = (char)iVar5;
      if (0 < *(short *)(iVar6 + -0x4080)) {
        cVar8 = *(char *)(iVar6 + -0x4019);
        bVar9 = cVar8 == '\0';
        if (bVar9) {
          cVar8 = *(char *)(iVar6 + -0x400a);
        }
        bVar10 = bVar9 && cVar8 == '\0';
        if (bVar9 && cVar8 == '\0') {
          bVar10 = *(char *)(iVar6 + -0x4018) == '\0';
        }
        if (bVar10) {
          *(undefined1 *)(local_38 + iVar5 + -8) = 1;
          *(undefined1 *)(iVar6 + -0x3fe0) = 0;
          *(undefined1 *)(iVar6 + -0x3f7f) = 0;
          iVar5 = local_26b0 * 0xc4;
          auStack_26a4[local_26b0 * 0x62] = 1;
          acStack_26a8[iVar5] = cVar7;
          acStack_26a8[iVar5 + 1] = cVar7;
          auStack_26ac[iVar5] = 4;
          *(undefined2 *)(auStack_26ac + iVar5 + 2) = 4;
          fn_00619734(auStack_2664 + iVar5,0x45,1);
          local_26b0 = local_26b0 + 1;
        }
      }
      iVar5 = (int)(char)(cVar7 + '\x01');
    } while (iVar5 < 0x14);
    iVar5 = 1;
    iVar6 = 0x14;
    cVar7 = '\0';
    do {
      iVar2 = iVar4 + iVar6 * 0x418;
      iVar3 = fn_006f447c(iVar2 + -0x4080);
      cVar1 = (char)iVar6;
      cVar8 = cVar7;
      if (iVar3 != 0) {
        if (iVar5 != 0) {
          if ('\0' < cVar7) {
            iVar5 = fn_00655488(2,3);
          }
          cVar8 = cVar7 + '\x01';
          if (iVar5 != 0) goto LAB_00632a7c;
        }
        cVar8 = cVar7 + '\x01';
        *(undefined1 *)(local_38 + iVar6 + -8) = 1;
        *(undefined1 *)(iVar2 + -0x3fe0) = 0;
        *(undefined1 *)(iVar2 + -0x3f7f) = 0;
        iVar6 = local_26b0 * 0xc4;
        auStack_26a4[local_26b0 * 0x62] = 1;
        acStack_26a8[iVar6] = cVar1;
        acStack_26a8[iVar6 + 1] = cVar1;
        auStack_26ac[iVar6] = 4;
        *(undefined2 *)(auStack_26ac + iVar6 + 2) = 4;
        fn_00619734(auStack_2664 + iVar6,0x45,1);
        local_26b0 = local_26b0 + 1;
      }
LAB_00632a7c:
      iVar6 = (int)(char)(cVar1 + '\x01');
      cVar7 = cVar8;
    } while (iVar6 < 0x18);
  }
  fn_0062a720(local_38,local_2c,local_26b8);
  return;
}



void fn_00630874(int param_1,int param_2,int param_3,int *param_4)

{
  char cVar1;
  short sVar2;
  char cVar3;
  byte bVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  short *psVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  char *pcVar14;
  uint uVar15;
  uint *puVar16;
  int iVar17;
  uint uVar18;
  undefined2 *puVar19;
  int iVar20;
  uint uVar21;
  bool bVar22;
  bool bVar23;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_6c;
  undefined1 auStack_68 [52];
  int local_34;
  int iStack_30;
  int iStack_2c;
  int *piStack_28;
  
  local_34 = param_1;
  iStack_30 = param_2;
  iStack_2c = param_3;
  piStack_28 = param_4;
  fn_0062a40c(param_1);
  iVar6 = fn_00163a00();
  if (iVar6 == 1) {
    fn_0062a40c(local_34,param_2);
    iVar6 = fn_001639e4();
    if (iVar6 != 0x1a) {
      cVar1 = *(char *)(param_2 + 5);
      iVar6 = param_3 + 0x180388;
      iVar17 = 0;
      iVar7 = iVar6 + cVar1 * 0x418;
      if (0 < *param_4) {
        do {
          if (*(short *)(iVar7 + -0x4080) < 1) {
            return;
          }
          cVar3 = *(char *)(iVar7 + -0x4019);
          bVar22 = cVar3 == '\0';
          if (bVar22) {
            cVar3 = *(char *)(iVar7 + -0x400a);
          }
          bVar23 = bVar22 && cVar3 == '\0';
          if (bVar22 && cVar3 == '\0') {
            bVar23 = *(char *)(iVar7 + -0x4018) == '\0';
          }
          if (!bVar23) {
            return;
          }
          iVar13 = iVar17 * 0x1a0 + 8;
          if (*(char *)((int)param_4 + iVar17 * 0x1a0 + 0x186) == '\0') {
            cVar3 = (char)param_4[iVar17 * 0x68 + 0x62];
            bVar22 = cVar3 == '\0';
            if (bVar22) {
              cVar3 = *(char *)((int)param_4 + iVar17 * 0x1a0 + 0x189);
            }
            bVar23 = bVar22 && cVar3 == '\0';
            if (bVar22 && cVar3 == '\0') {
              bVar23 = *(char *)((int)param_4 + iVar17 * 0x1a0 + 0x197) == '\0';
            }
            if (bVar23) {
              iVar8 = (int)*(char *)((int)param_4 + iVar17 * 0x1a0 + 9);
              if (7 < iVar8 - 0x10U) {
                return;
              }
              iVar9 = iVar6 + iVar8 * 0x418;
              psVar10 = (short *)(iVar9 + -0x4080);
              if ((((0 < *psVar10) && (*(char *)(iVar9 + -0x4019) == '\0')) &&
                  (*(char *)(iVar9 + -0x400a) == '\0')) && (*(char *)(iVar9 + -0x4018) == '\0')) {
                iVar9 = iVar8;
                if (cVar1 != 0 && iVar8 != 0) {
                  iVar11 = fn_0061be08();
                  if (iVar11 == 0) {
                    uVar12 = fn_0061be08(iVar8);
                    uVar12 = uVar12 ^ 1;
                  }
                  else {
                    uVar12 = fn_0061be08(iVar8);
                  }
                  if (uVar12 != 0) goto LAB_00630d30;
                }
                puVar19 = &DAT_008bf6ae;
                uVar12 = 0;
                do {
                  uVar21 = 0x630a18;
                  iVar8 = fn_006f44fc(psVar10,(int)(short)(&DAT_008bf6ae)[uVar12]);
                  if (iVar8 != 0) {
                    sVar2 = (&DAT_008bf6ae)[uVar12];
                    iVar8 = (int)sVar2;
                    if (iVar8 != 0) {
                      local_6c = (uint)(short)param_4[iVar17 * 0x68 + 8];
                      uVar12 = 0;
                      uVar15 = 1;
                      if (0 < (int)(local_6c - 1)) {
                        puVar16 = (uint *)(param_4 + iVar17 * 0x68 + 7);
                        if ((local_6c & 1) == 0) {
                          puVar16 = (uint *)(param_4 + iVar17 * 0x68 + 9);
                          uVar12 = *puVar16;
                          uVar15 = *(byte *)((int)param_4 + iVar17 + iVar13 + 8) & 1;
                        }
                        iVar11 = (int)(local_6c - 1) >> 1;
                        bVar22 = iVar11 != 0;
                        if (bVar22) {
                          puVar19 = (undefined2 *)((int)param_4 + iVar17 + iVar13);
                        }
                        uVar18 = puVar16[2];
                        if (bVar22) {
                          uVar21 = (uint)*(char *)(puVar19 + 4);
                        }
                        iVar20 = 0;
                        while (bVar22) {
                          uVar12 = uVar12 + uVar18;
                          uVar18 = puVar16[6];
                          iVar11 = iVar11 + -1;
                          bVar22 = iVar11 != 0;
                          uVar15 = uVar15 & uVar21;
                          iVar20 = iVar20 + puVar16[4];
                          puVar16 = puVar16 + 4;
                        }
                        uVar12 = uVar12 + iVar20;
                      }
                      if (-1 < (int)(local_6c - 1)) {
                        uVar12 = uVar12 + param_4[iVar17 * 0x68 + (local_6c - 1) * 2 + 9];
                        uVar15 = uVar15 & (int)*(char *)((int)param_4 + iVar17 + iVar13 + 8);
                      }
                      if ((uVar15 - 1 & uVar12) != 0) {
                        sVar5 = fn_001746c0(iVar8);
                        iVar13 = (int)sVar5;
                        pcVar14 = (char *)fn_006228ac(param_4);
                        param_4[1] = param_4[1] + 1;
                        pcVar14[0x18] = '\x01';
                        pcVar14[0x19] = '\0';
                        *pcVar14 = (char)iVar9;
                        pcVar14[1] = cVar1;
                        pcVar14[2] = '\x03';
                        *(short *)(pcVar14 + 4) = sVar2;
                        cVar3 = fn_00691d5c(iVar13);
                        pcVar14[6] = cVar3;
                        pcVar14[7] = '\b';
                        fn_006565b8(auStack_68);
                        fn_00655a88(&local_80);
                        fn_006558e4(&local_80,iVar13,(int)*pcVar14,(int)pcVar14[1],local_34 + 0x24,
                                     iVar6,0);
                        fn_006564a8(auStack_68,iVar8,iVar9,0);
                        bVar4 = fn_006244fc(local_34,auStack_68,iVar6,pcVar14,local_80,uStack_7c,
                                             uStack_78,uStack_74);
                        pcVar14[8] = bVar4 ^ 1;
                        fn_00616c50(iVar13,*param_4,iVar17,(int)*pcVar14,(int)pcVar14[1],iVar6,
                                     &local_80,pcVar14 + 0x1c,0);
                        fn_00618b44(iVar13,(int)*pcVar14,(int)pcVar14[1],iVar6,&local_80,
                                     pcVar14 + 0x58,0);
                        if (pcVar14[8] != '\0') {
                          pcVar14[0x1c] = '\0';
                          pcVar14[0x1d] = '\0';
                          pcVar14[0x1e] = '\0';
                          pcVar14[0x1f] = '\0';
                        }
                        fn_0062187c(local_34,pcVar14,iVar6);
                        fn_0062454c(local_34,pcVar14,iVar6,0,1);
                        fn_0062abdc(local_34,iVar6,pcVar14,param_3);
                        *(int *)(pcVar14 + 0x194) = *(int *)(pcVar14 + 0x194) << 1;
                        *(int *)(pcVar14 + 0x198) = *(int *)(pcVar14 + 0x198) << 1;
                        fn_00654c08(local_34,pcVar14,iVar6);
                        if (iVar8 == 0x57) {
                          fn_00624a5c(local_34,pcVar14,0,1,param_3,param_4);
                        }
                        else if (iVar8 == 0x58) {
                          fn_00624c18(local_34,pcVar14,0,1,param_3,param_4);
                        }
                        else if (iVar8 == 0x59) {
                          fn_00624d78(local_34,pcVar14,0,1,param_3,param_4);
                        }
                      }
                    }
                    break;
                  }
                  uVar12 = uVar12 + 1;
                } while (uVar12 < 3);
              }
            }
          }
LAB_00630d30:
          iVar17 = iVar17 + 1;
        } while (iVar17 < *param_4);
      }
    }
  }
  return;
}


