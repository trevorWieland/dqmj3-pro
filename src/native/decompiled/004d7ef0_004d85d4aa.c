#include "004d7ef0_004d85d4aa.h"



void fn_004d7ef0(int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  uint *puVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  int iVar12;
  uint local_48;
  uint *local_44;
  int local_40;
  int local_3c;
  int local_38;
  int iStack_34;
  int local_30;
  uint uStack_2c;
  int local_28;
  
  iVar11 = *(int *)(param_1 + 0x5b4) + param_2 * 0x20;
  if (((*(char *)(iVar11 + 1) != '\0') && (*(ushort *)(iVar11 + 2) == param_3)) &&
     (*(char *)(param_1 + 0x19) != '\x05')) {
    uVar2 = *(uint *)(param_4 + 4);
    uVar2 = ((uVar2 >> 0x10) << 0x18 | (uVar2 >> 0x18) << 0x10) >> 0x10 |
            ((uVar2 & 0xff) << 8 | uVar2 >> 8 & 0xff) << 0x10;
    iStack_34 = param_1;
    local_30 = param_2;
    uStack_2c = param_3;
    local_28 = param_4;
    if (((int)(uVar2 - (*(int *)(param_1 + 0x668) + *(int *)(param_1 + 0x654) +
                       *(int *)(param_1 + 0x6b0))) < 1) ||
       ((iVar3 = fn_006d4904(param_1,*(undefined1 *)(param_1 + 0x18)), iVar3 == 0 &&
        ((int)(uVar2 - (*(int *)(param_1 + 0x668) + *(int *)(param_1 + 0x658))) < 1)))) {
      if ((int)(*(int *)(iVar11 + 8) - uVar2) < 1) {
        *(uint *)(iVar11 + 8) = uVar2;
        uVar4 = *(uint *)(param_4 + 8);
        *(uint *)(iVar11 + 0xc) =
             ((uVar4 >> 0x10) << 0x18 | (uVar4 >> 0x18) << 0x10) >> 0x10 |
             ((uVar4 & 0xff) << 8 | uVar4 >> 8 & 0xff) << 0x10;
      }
      if (*(int *)(param_1 + 0x654) != 0) {
        bVar1 = true;
        pbVar9 = (byte *)(local_28 + 0x10);
        pbVar10 = (byte *)(local_28 + param_5);
LAB_004d7fd0:
        do {
          if (param_6 != 0) {
            if (bVar1) {
              fn_004eeef4(*(undefined4 *)(param_1 + 0x6c4),local_28 + 0x10,param_5 + -0x10);
              iVar3 = 0;
              bVar1 = false;
            }
            else {
              iVar3 = (int)pbVar10 - (int)pbVar9;
              fn_0016986c(param_1 + 0x1c,pbVar9,iVar3);
            }
            local_48 = 0x594 - iVar3;
            iVar5 = fn_004eee50(*(undefined4 *)(param_1 + 0x6c4),param_1 + iVar3 + 0x1c,&local_48);
            if (iVar5 < 0) {
              fn_004eee38(*(undefined4 *)(param_1 + 0x6c4));
              return;
            }
            pbVar9 = (byte *)(param_1 + 0x1c);
            pbVar10 = (byte *)(local_48 + param_1 + iVar3 + 0x1c);
          }
          pbVar6 = pbVar9 + 4;
          while (pbVar6 <= pbVar10) {
            uVar4 = (*(ushort *)(pbVar9 + 2) & 0xff) << 8 | (uint)(*(ushort *)(pbVar9 + 2) >> 8);
            if (pbVar10 < pbVar9 + uVar4 + 4) {
              if (param_6 == 0) {
                return;
              }
              goto LAB_004d7fd0;
            }
            iVar3 = ((int)(char)pbVar9[1] + uVar2) - *(int *)(param_1 + 0x668);
            if ((-1 < iVar3) && (iVar3 < *(int *)(param_1 + 0x658) * 2)) {
              uVar8 = (uint)*pbVar9;
              if (uVar8 != 0xff) {
                if (uVar8 < 0x11) {
                  local_48 = 1 << uVar8;
                  if ((*(uint *)(iVar11 + 4) & local_48) == 0) {
                    if (param_6 == 0) {
                      return;
                    }
                    goto LAB_004d8258;
                  }
                  local_3c = param_1 + uVar8 * 8;
                  if ((*(int *)(local_3c + 0x5cc) + 3U & 0xfffffffc) == uVar4) {
                    local_38 = *(int *)(param_1 + 0x678);
                    iVar12 = *(int *)(param_1 + 0x65c);
                    iVar5 = local_38 + iVar3;
                    if (iVar5 < 0) {
                      iVar5 = iVar5 + iVar12;
                    }
                    else if (iVar12 <= iVar5) {
                      iVar5 = iVar5 - iVar12;
                    }
                    local_40 = *(int *)(param_1 + 0x65c);
                    local_44 = (uint *)(*(int *)(param_1 + 0x5b8) +
                                       (local_30 * local_40 + iVar5) * 4);
                    if ((*local_44 & local_48) != 0) goto LAB_004d8234;
                    iVar3 = iVar3 + local_38;
                    if (iVar3 < 0) {
                      iVar3 = iVar3 + local_40;
                    }
                    else if (local_40 <= iVar3) {
                      iVar3 = iVar3 - local_40;
                    }
                    fn_001694e4((local_30 * local_40 + iVar3) * *(int *)(param_1 + 0x650) +
                                 *(int *)(local_3c + 0x5c8) + *(int *)(param_1 + 0x5c0),pbVar9 + 4);
                    uVar8 = *local_44 | local_48;
                    puVar7 = local_44;
                    goto LAB_004d8230;
                  }
                }
                if (param_6 == 0) {
                  return;
                }
LAB_004d8258:
                fn_004eee38(*(undefined4 *)(param_1 + 0x6c4));
                return;
              }
              if (uVar4 != 0) {
                if (param_6 == 0) {
                  return;
                }
                goto LAB_004d8258;
              }
              iVar3 = *(int *)(param_1 + 0x678) + iVar3;
              iVar5 = *(int *)(param_1 + 0x65c);
              if (iVar3 < 0) {
                iVar3 = iVar3 + iVar5;
              }
              else if (iVar5 <= iVar3) {
                iVar3 = iVar3 - iVar5;
              }
              uVar8 = *(uint *)(iVar11 + 4);
              puVar7 = (uint *)(*(int *)(param_1 + 0x5b8) +
                               (local_30 * *(int *)(param_1 + 0x65c) + iVar3) * 4);
LAB_004d8230:
              *puVar7 = uVar8;
            }
LAB_004d8234:
            pbVar6 = pbVar9 + uVar4 + 8;
            pbVar9 = pbVar9 + uVar4 + 4;
          }
          if (param_6 == 0) {
            return;
          }
        } while( true );
      }
    }
  }
  return;
}


