#include "00631cfc_00632020.h"



void fn_00632020(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  short *psVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  
  iVar1 = fn_0062a40c();
  iVar6 = (int)*(char *)(param_2 + 5);
  uVar2 = fn_00691dcc();
  if (uVar2 != 0) {
    bVar8 = iVar1 == 0x4e;
    if (!bVar8) {
      uVar2 = iVar1 - 0x14f;
      bVar8 = uVar2 == 0;
    }
    if (!bVar8) {
      bVar8 = iVar1 == 0x140;
    }
    param_3 = param_3 + 0x180388;
    if (!bVar8) {
      fn_00654e54(param_3 + iVar6 * 0x418 + -0x4080,iVar1);
      return;
    }
    uVar7 = iVar6 - 0x10;
    if (uVar7 >= 4) {
      uVar2 = iVar6 - 0x18;
    }
    if ((uVar7 < 4 || uVar2 < 4) || (iVar6 == 0x20 || iVar6 == 0x22)) {
      uVar2 = 0x10;
    }
    else {
      uVar2 = 0x14;
    }
    iVar3 = fn_0061be08(iVar6);
    if (iVar3 == 0) {
      uVar4 = 0x18;
    }
    else {
      uVar4 = 0x14;
    }
    if (uVar2 < uVar4) {
      do {
        psVar5 = (short *)(param_3 + uVar2 * 0x418 + -0x4080);
        if (0 < *psVar5) {
          fn_00654e54(psVar5,iVar1);
        }
        uVar2 = (uint)(char)((char)uVar2 + '\x01');
        iVar3 = fn_0061be08(iVar6);
        if (iVar3 == 0) {
          uVar4 = 0x18;
        }
        else {
          uVar4 = 0x14;
        }
      } while ((int)uVar2 < (int)uVar4);
    }
    if (uVar7 >= 4) {
      uVar4 = iVar6 - 0x18;
    }
    if ((uVar7 < 4 || uVar4 < 4) || (iVar6 == 0x20 || iVar6 == 0x22)) {
      uVar2 = 0x18;
    }
    else {
      uVar2 = 0x1c;
    }
    iVar3 = fn_0061be08(iVar6);
    if (iVar3 == 0) {
      uVar7 = 0x20;
    }
    else {
      uVar7 = 0x1c;
    }
    if (uVar2 < uVar7) {
      do {
        psVar5 = (short *)(param_3 + uVar2 * 0x418 + -0x4080);
        if (0 < *psVar5) {
          fn_00654e54(psVar5,iVar1);
        }
        uVar2 = (uint)(char)((char)uVar2 + '\x01');
        iVar3 = fn_0061be08(iVar6);
        if (iVar3 == 0) {
          iVar3 = 0x20;
        }
        else {
          iVar3 = 0x1c;
        }
      } while ((int)uVar2 < iVar3);
    }
  }
  return;
}



void fn_00631cfc(int param_1,int param_2,int param_3,int *param_4)

{
  char cVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  short *psVar8;
  char *pcVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined2 *puVar16;
  int iVar17;
  uint uVar18;
  bool bVar19;
  bool bVar20;
  undefined1 auStack_58 [28];
  uint local_3c;
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
      cVar3 = *(char *)(param_2 + 5);
      param_3 = param_3 + 0x180388;
      iVar13 = 0;
      iVar6 = param_3 + cVar3 * 0x418;
      if (0 < *param_4) {
        do {
          if (*(short *)(iVar6 + -0x4080) < 1) {
            return;
          }
          cVar1 = *(char *)(iVar6 + -0x4019);
          bVar19 = cVar1 == '\0';
          if (bVar19) {
            cVar1 = *(char *)(iVar6 + -0x400a);
          }
          bVar20 = bVar19 && cVar1 == '\0';
          if (bVar19 && cVar1 == '\0') {
            bVar20 = *(char *)(iVar6 + -0x4018) == '\0';
          }
          if (!bVar20) {
            return;
          }
          iVar4 = iVar13 * 0x1a0 + 8;
          if (*(char *)((int)param_4 + iVar13 * 0x1a0 + 0x186) == '\0') {
            cVar1 = *(char *)((int)param_4 + iVar13 * 0x1a0 + 9);
            if ((int)cVar1 - 0x10U < 8) {
              iVar7 = param_3 + cVar1 * 0x418;
              psVar8 = (short *)(iVar7 + -0x4080);
              if (0 < *psVar8) {
                cVar2 = *(char *)(iVar7 + -0x4019);
                bVar19 = cVar2 == '\0';
                if (bVar19) {
                  cVar2 = *(char *)(iVar7 + -0x400a);
                }
                if ((bVar19 && cVar2 == '\0') && (*(char *)(iVar7 + -0x4018) == '\0')) {
                  puVar16 = &DAT_008bf6b4;
                  uVar14 = 0;
                  do {
                    uVar18 = 0x631e24;
                    iVar7 = fn_006f44fc(psVar8,(int)(short)(&DAT_008bf6b4)[uVar14]);
                    if (iVar7 != 0) {
                      iVar7 = (int)(short)(&DAT_008bf6b4)[uVar14];
                      if ((iVar7 != 0) && ((iVar7 != 0xce || ('\0' < *(char *)((int)psVar8 + 99)))))
                      {
                        local_3c = (uint)(short)param_4[iVar13 * 0x68 + 8];
                        uVar14 = 0;
                        uVar10 = 1;
                        if (0 < (int)(local_3c - 1)) {
                          puVar11 = (uint *)(param_4 + iVar13 * 0x68 + 7);
                          if ((local_3c & 1) == 0) {
                            puVar11 = (uint *)(param_4 + iVar13 * 0x68 + 9);
                            uVar14 = *puVar11;
                            uVar10 = *(byte *)((int)param_4 + iVar13 + iVar4 + 8) & 1;
                          }
                          iVar12 = (int)(local_3c - 1) >> 1;
                          bVar19 = iVar12 != 0;
                          if (bVar19) {
                            puVar16 = (undefined2 *)((int)param_4 + iVar13 + iVar4);
                          }
                          uVar15 = puVar11[2];
                          if (bVar19) {
                            uVar18 = (uint)*(char *)(puVar16 + 4);
                          }
                          iVar17 = 0;
                          while (bVar19) {
                            uVar14 = uVar14 + uVar15;
                            uVar15 = puVar11[6];
                            iVar12 = iVar12 + -1;
                            bVar19 = iVar12 != 0;
                            uVar10 = uVar10 & uVar18;
                            iVar17 = iVar17 + puVar11[4];
                            puVar11 = puVar11 + 4;
                          }
                          uVar14 = uVar14 + iVar17;
                        }
                        if (-1 < (int)(local_3c - 1)) {
                          uVar14 = uVar14 + param_4[iVar13 * 0x68 + (local_3c - 1) * 2 + 9];
                          uVar10 = uVar10 & (int)*(char *)((int)param_4 + iVar13 + iVar4 + 8);
                        }
                        if ((uVar10 - 1 & uVar14) != 0) {
                          pcVar9 = (char *)fn_006228ac(param_4);
                          param_4[1] = param_4[1] + 1;
                          pcVar9[0x18] = '\x01';
                          pcVar9[0x19] = '\0';
                          *pcVar9 = cVar1;
                          pcVar9[1] = cVar3;
                          pcVar9[2] = '\x03';
                          *(short *)(pcVar9 + 4) = (short)iVar7;
                          pcVar9[6] = '\0';
                          pcVar9[7] = '\b';
                          fn_00655a88(auStack_58);
                          sVar5 = fn_001746c0(iVar7);
                          fn_006558e4(auStack_58,(int)sVar5,(int)*pcVar9,(int)pcVar9[1],
                                       local_34 + 0x24,param_3,0);
                          fn_00618b44((int)sVar5,(int)*pcVar9,(int)pcVar9[1],param_3,auStack_58,
                                       pcVar9 + 0x58,0);
                          fn_0062454c(local_34,pcVar9,param_3,1,1);
                          *(int *)(pcVar9 + 0x194) = *(int *)(pcVar9 + 0x194) << 1;
                          *(int *)(pcVar9 + 0x198) = *(int *)(pcVar9 + 0x198) << 1;
                          fn_00654c08(local_34,pcVar9,param_3);
                        }
                      }
                      break;
                    }
                    uVar14 = uVar14 + 1;
                  } while (uVar14 < 7);
                }
              }
            }
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 < *param_4);
      }
    }
  }
  return;
}


