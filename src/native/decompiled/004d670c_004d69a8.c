#include "004d670c_004d69a8.h"



undefined4 fn_004d69a8(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 unaff_r8;
  undefined4 local_28;
  undefined4 local_24;
  
  if ((param_3 == 0x11 || param_3 == 0x12) || (param_3 == 0x13 || param_3 == 0x14)) {
    unaff_r8 = 4;
  }
  local_24 = *(undefined4 *)(param_1 + 0xc);
  local_28 = 0;
  iVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0x10))
                    (*(int **)(param_1 + 0x10),&local_24,param_2,unaff_r8);
  if ((iVar1 - 0x100000U < 0x3ff00000) &&
     ((param_3 == 0x11 || param_3 == 0x12 || (param_3 == 0x13 || param_3 == 0x14)))) {
    local_28 = CONCAT22((ushort)(param_4 << 8) | (ushort)((uint)param_4 >> 8),(ushort)(byte)param_3)
    ;
    fn_001694d4(iVar1,&local_28);
    fn_0050a490(*(undefined4 *)(param_1 + 0x10));
    return 1;
  }
  return 0;
}



undefined1 * fn_004d670c(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  
  if (param_2 != 0) {
    uVar7 = *(uint *)(param_1 + 0x654);
    if ((uVar7 != param_2) && (param_2 <= *(uint *)(param_1 + 0x658))) {
      uVar8 = *(uint *)(param_1 + 0x6a8);
      bVar9 = uVar8 == 0;
      if (bVar9) {
        uVar8 = (uint)*(byte *)(param_1 + 0x19);
      }
      if (!bVar9 || uVar8 != 3) {
        return &DAT_e0a14827;
      }
      if (param_2 < uVar7) {
        *(uint *)(param_1 + 0x6a8) = param_2;
        *(undefined4 *)(param_1 + 0x6ac) = *(undefined4 *)(param_1 + 0x668);
      }
      else {
        *(uint *)(param_1 + 0x654) = param_2;
        if ((int)(uint)*(byte *)(param_1 + 0x6f9) < (int)param_2) {
          if ((int)param_2 < 0x100) {
            DAT_008ee0c7 = (undefined1)param_2;
          }
          else {
            DAT_008ee0c7 = 0xff;
          }
          *(undefined1 *)(param_1 + 0x6f9) = DAT_008ee0c7;
        }
        uVar8 = 0;
        if (*(int *)(param_1 + 0x14) != 0) {
          do {
            if (((uint)*(byte *)(param_1 + 0x18) == (uVar8 & 0xff)) &&
               (uVar4 = uVar7 + 1, uVar4 <= *(uint *)(param_1 + 0x654))) {
              do {
                iVar5 = *(int *)(param_1 + 0x65c);
                iVar2 = uVar4 + *(int *)(param_1 + 0x678);
                if (iVar2 < 0) {
                  iVar2 = iVar2 + iVar5;
                }
                else if (iVar5 <= iVar2) {
                  iVar2 = iVar2 - iVar5;
                }
                *(undefined4 *)
                 (*(int *)(param_1 + 0x5b8) +
                 ((uVar8 & 0xff) * *(int *)(param_1 + 0x65c) + iVar2) * 4) = 0;
                iVar5 = *(int *)(param_1 + 0x65c);
                iVar2 = uVar4 + *(int *)(param_1 + 0x678);
                if (iVar2 < 0) {
                  iVar2 = iVar2 + iVar5;
                }
                else if (iVar5 <= iVar2) {
                  iVar2 = iVar2 - iVar5;
                }
                uVar4 = uVar4 + 1;
                *(undefined4 *)(*(int *)(param_1 + 0x5bc) + iVar2 * 4) = 0;
              } while (uVar4 <= *(uint *)(param_1 + 0x654));
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < *(uint *)(param_1 + 0x14));
        }
        uVar8 = 0;
        if (*(uint *)(param_1 + 0x654) != uVar7) {
          do {
            iVar6 = *(int *)(param_1 + 0x668) + uVar7 + uVar8;
            iVar2 = (iVar6 - *(int *)(param_1 + 0x668)) + *(int *)(param_1 + 0x678);
            iVar5 = *(int *)(param_1 + 0x65c);
            if (iVar2 < 0) {
              iVar2 = iVar2 + iVar5;
            }
            else if (iVar5 <= iVar2) {
              iVar2 = iVar2 - iVar5;
            }
            uVar4 = 0;
            *(undefined4 *)(*(int *)(param_1 + 0x5bc) + iVar2 * 4) = 1;
            do {
              uVar1 = 1 << (uVar4 & 0xff);
              if ((*(uint *)(*(int *)(param_1 + 0x5b4) + (uint)*(byte *)(param_1 + 0x18) * 0x20 + 4)
                  & uVar1) != 0) {
                iVar2 = (iVar6 - *(int *)(param_1 + 0x668)) + *(int *)(param_1 + 0x678);
                iVar5 = *(int *)(param_1 + 0x65c);
                if (iVar2 < 0) {
                  iVar2 = iVar2 + iVar5;
                }
                else if (iVar5 <= iVar2) {
                  iVar2 = iVar2 - iVar5;
                }
                puVar3 = (uint *)(*(int *)(param_1 + 0x5b8) +
                                 ((uint)*(byte *)(param_1 + 0x18) * *(int *)(param_1 + 0x65c) +
                                 iVar2) * 4);
                *puVar3 = *puVar3 | uVar1;
                iVar2 = (iVar6 - *(int *)(param_1 + 0x668)) + *(int *)(param_1 + 0x678);
                iVar5 = *(int *)(param_1 + 0x65c);
                if (iVar2 < 0) {
                  iVar2 = iVar2 + iVar5;
                }
                else if (iVar5 <= iVar2) {
                  iVar2 = iVar2 - iVar5;
                }
                iVar5 = param_1 + uVar4 * 8;
                fn_00158f6c(*(int *)(param_1 + 0x5c0) +
                             ((uint)*(byte *)(param_1 + 0x18) * *(int *)(param_1 + 0x65c) + iVar2) *
                             *(int *)(param_1 + 0x650) + *(int *)(iVar5 + 0x5c8),
                             *(undefined4 *)(iVar5 + 0x5cc));
              }
              uVar4 = uVar4 + 1;
            } while (uVar4 < 0x11);
            uVar8 = uVar8 + 1;
          } while (uVar8 < *(int *)(param_1 + 0x654) - uVar7);
        }
      }
      return (undefined1 *)0x0;
    }
  }
  return (undefined1 *)0xe0e14826;
}


