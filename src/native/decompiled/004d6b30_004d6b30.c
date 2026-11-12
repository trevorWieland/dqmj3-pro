#include "004d6b30_004d6b30.h"



undefined4 fn_004d6b30(int param_1,uint *param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined8 uVar12;
  uint local_90;
  uint local_8c [2];
  undefined4 local_84;
  int local_80;
  undefined4 local_7c;
  int local_6c;
  undefined4 local_68;
  int local_5c;
  int local_54;
  undefined4 local_50;
  int local_4c;
  int *local_48;
  char *local_3c;
  int iStack_30;
  uint *local_2c;
  int local_28;
  
  local_48 = (int *)(param_1 + 0x69c);
  if (*(int *)(param_1 + 0x654) + *(int *)(param_1 + 0x6b0) <
      *(int *)(param_1 + 0x69c) - *(int *)(param_1 + 0x668)) {
    return 0;
  }
  local_4c = *(int *)(param_1 + 0x5b4) + (uint)*(byte *)(param_1 + 0x18) * 0x20;
  if ((*(char *)(local_4c + 0x14) != '\0') &&
     (*(int *)(local_4c + 0x18) - *(int *)(param_1 + 0x69c) < 0)) {
    return 0;
  }
  local_8c[0] = 0x10;
  local_84 = *(undefined4 *)(param_1 + 0x69c);
  local_68 = *(undefined4 *)(param_1 + 0x6a0);
  local_80 = (int)*(char *)(param_1 + 0x6a4);
  local_54 = 1;
  local_90 = 0x10;
  local_7c = local_84;
  local_6c = local_80;
  local_50 = local_68;
  iStack_30 = param_1;
  local_2c = param_2;
  local_28 = param_3;
  if ((*(char *)(param_1 + 0x6b5) != '\0') && (param_3 == 0)) {
    fn_001694e4(*(undefined4 *)(param_1 + 0x5b0),param_1 + 0x1c,0x10);
    fn_004ed9ec(*(undefined4 *)(param_1 + 0x6bc),*(int *)(param_1 + 0x5b0) + 0x10,0x584,
                 *(undefined4 *)(param_1 + 0x6b8),0xc,5);
  }
  local_5c = 0;
  if ((*(char *)(param_1 + 0x6b5) == '\0') || (local_28 != 0)) {
    iVar10 = 0;
  }
  else {
    iVar10 = 0x20;
  }
  if (*(int *)(param_1 + 0x69c) - *(int *)(param_1 + 0x668) <=
      *(int *)(param_1 + 0x654) + *(int *)(param_1 + 0x6b0)) {
    local_3c = (char *)(param_1 + 0x708);
    do {
      if (*(char *)(param_1 + 0x674) == '\0') {
LAB_004d6d1c:
        if ((*(char *)(local_4c + 0x14) != '\0') &&
           (*(int *)(local_4c + 0x18) - *(int *)(param_1 + 0x69c) < 0)) break;
        iVar7 = *(int *)(param_1 + 0x69c);
        if (0 < *(int *)(param_1 + 0x6e4) - iVar7) {
          *(int *)(param_1 + 0x6e4) = iVar7;
        }
        if (0 < iVar7 - *(int *)(param_1 + 0x6e8)) {
          *(int *)(param_1 + 0x6e8) = iVar7;
        }
        if ((*(int *)(param_1 + 0x6ec) == 0) ||
           (*(int *)(*(int *)(param_1 + 0x5b4) + (uint)*(byte *)(param_1 + 0x18) * 0x20 + 4) == 0))
        {
LAB_004d6e10:
          iVar7 = *(int *)(param_1 + 0x69c);
          if ((-1 < *(int *)(param_1 + 0x700) - iVar7) && (0 < iVar7 - *(int *)(param_1 + 0x704))) {
            *(int *)(param_1 + 0x704) = iVar7;
            *local_3c = *(char *)(param_1 + 0x708) + '\x01';
          }
          cVar1 = (char)iVar7 - (char)*(undefined4 *)(param_1 + 0x66c);
          iVar6 = (int)cVar1;
          if ((*(char *)(param_1 + 0x19) == '\x01' || *(char *)(param_1 + 0x19) == '\x02') &&
             (iVar7 < 0)) {
            iVar7 = param_1 + local_8c[0];
            *(undefined1 *)(iVar7 + 0x1c) = 0xff;
            *(undefined2 *)(iVar7 + 0x1e) = 0;
            *(char *)(iVar7 + 0x1d) = cVar1;
            local_8c[0] = local_8c[0] + 4;
          }
          else {
            iVar4 = *(int *)(param_1 + 0x65c);
            iVar7 = (iVar7 - *(int *)(param_1 + 0x668)) + *(int *)(param_1 + 0x678);
            if (iVar7 < 0) {
              iVar7 = iVar7 + iVar4;
            }
            else if (iVar4 <= iVar7) {
              iVar7 = iVar7 - iVar4;
            }
            uVar2 = *(uint *)(param_1 + 0x6a0);
            uVar11 = *(uint *)(*(int *)(param_1 + 0x5b8) +
                              ((uint)*(byte *)(param_1 + 0x18) * *(int *)(param_1 + 0x65c) + iVar7)
                              * 4);
            while (uVar2 < 0x11) {
              if ((uVar11 & 1 << (*(uint *)(param_1 + 0x6a0) & 0xff)) != 0) {
                uVar3 = 0x3ff00000;
                uVar9 = *(int *)(param_1 + 0x10) - 0x100000;
                uVar2 = *(int *)(param_1 + *(uint *)(param_1 + 0x6a0) * 8 + 0x5cc) + 3;
                uVar8 = uVar2 & 0xfffffffc;
                if ((0x3fefffff < uVar9) && (DAT_008c0630 != 0)) {
                  uVar3 = 8;
                  uVar9 = 0;
                }
                uVar9 = fn_006d9934(*(undefined4 *)(param_1 + 0x10),uVar3,uVar9);
                if (uVar9 < local_8c[0] + uVar8 + iVar10 + 4) {
                  if ((*(char *)(param_1 + 0x6b5) == '\0') || (local_28 != 0)) {
                    *local_2c = local_8c[0];
                    return 1;
                  }
                  if (local_8c[0] == 0x10) {
                    local_5c = 4;
                    goto LAB_004d7050;
                  }
                  iVar7 = fn_004ed96c(*(undefined4 *)(param_1 + 0x6bc),local_90 + param_1 + 0x1c,
                                       local_8c[0] - local_90);
                  if (iVar7 < 0) {
                    if (iVar7 == -0x1f1eb7dd) {
                      if (local_54 == 0) {
                        local_5c = 2;
                      }
                      else {
                        local_5c = 3;
                      }
                      goto LAB_004d7050;
                    }
                  }
                  else {
                    local_90 = 0x594 - *(int *)(*(int *)(param_1 + 0x6bc) + 0x28);
                    local_54 = 0;
                    local_84 = *(undefined4 *)(param_1 + 0x69c);
                    local_50 = *(undefined4 *)(param_1 + 0x6a0);
                    local_80 = (int)*(char *)(param_1 + 0x6a4);
                    local_8c[0] = local_90;
                    uVar9 = fn_006d9934(*(undefined4 *)(param_1 + 0x10));
                    if (uVar9 < local_8c[0] + uVar8 + iVar10 + 4) {
                      local_5c = 1;
                      goto LAB_004d7050;
                    }
                  }
                }
                iVar7 = param_1 + local_8c[0];
                local_8c[0] = local_8c[0] + 4;
                *(char *)(iVar7 + 0x1c) = (char)*(undefined4 *)(param_1 + 0x6a0);
                *(char *)(iVar7 + 0x1d) = (char)iVar6;
                *(ushort *)(iVar7 + 0x1e) = (ushort)(uVar8 << 8) | (ushort)(uVar2 >> 8) & 0xff;
                iVar4 = *(int *)(param_1 + 0x65c);
                iVar7 = (*(int *)(param_1 + 0x69c) - *(int *)(param_1 + 0x668)) +
                        *(int *)(param_1 + 0x678);
                if (iVar7 < 0) {
                  iVar7 = iVar7 + iVar4;
                }
                else if (iVar4 <= iVar7) {
                  iVar7 = iVar7 - iVar4;
                }
                fn_001694e4(local_8c[0] + param_1 + 0x1c,
                             ((uint)*(byte *)(param_1 + 0x18) * *(int *)(param_1 + 0x65c) + iVar7) *
                             *(int *)(param_1 + 0x650) +
                             *(int *)(param_1 + *(uint *)(param_1 + 0x6a0) * 8 + 0x5c8) +
                             *(int *)(param_1 + 0x5c0),uVar8);
                local_8c[0] = local_8c[0] + uVar8;
              }
              uVar2 = *(int *)(param_1 + 0x6a0) + 1;
              *(uint *)(param_1 + 0x6a0) = uVar2;
            }
          }
          cVar1 = *(char *)(param_1 + 0x6a4);
        }
        else {
          iVar7 = fn_006d45c4(param_1,(uint)*(byte *)(param_1 + 0x18),iVar7);
          uVar2 = *(uint *)(*(int *)(param_1 + 0x6e0) + iVar7 * 4);
          if (uVar2 < 0x40) {
            uVar11 = *(uint *)(param_1 + 0x6f0);
            uVar9 = *(uint *)(param_1 + 0x6f4);
            uVar12 = fn_00301bb0(1,0,uVar2);
            if (((uint)uVar12 & uVar11) != 0 || (uVar9 & (uint)((ulonglong)uVar12 >> 0x20)) != 0)
            goto LAB_004d6e10;
          }
          else if ((uVar2 - 0x40) % 5 == 0) goto LAB_004d6e10;
          cVar1 = *(char *)(param_1 + 0x6a4);
        }
        if (cVar1 == '\0') {
          *local_48 = *(int *)(param_1 + 0x69c) + 1;
          *(undefined4 *)(param_1 + 0x6a0) = 0;
        }
        else {
LAB_004d7168:
          fn_004d83d0(param_1);
        }
      }
      else {
        uVar11 = *(uint *)(param_1 + 0x69c);
        uVar2 = 0;
        if (*(uint *)(param_1 + 0x14) != 0) {
          do {
            if ((uint)*(byte *)(param_1 + 0x18) != (uVar2 & 0xff)) {
              pcVar5 = (char *)(*(int *)(param_1 + 0x5b4) + (uVar2 & 0xff) * 0x20);
              iVar7 = 0;
              if (*pcVar5 != '\0') {
                iVar7 = *(int *)(pcVar5 + 8);
              }
              if ((*pcVar5 != '\0' && iVar7 < (int)uVar11) &&
                 ((iVar7 + 0x20U < uVar11 ||
                  ((*(uint *)(pcVar5 + 0xc) & 1 << ((uVar11 - iVar7) - 1 & 0xff)) == 0))))
              goto LAB_004d6d1c;
            }
            uVar2 = uVar2 + 1;
          } while (uVar2 < *(uint *)(param_1 + 0x14));
        }
        if (*(char *)(param_1 + 0x6a4) != '\0') goto LAB_004d7168;
        *local_48 = uVar11 + 1;
        *(undefined4 *)(param_1 + 0x6a0) = 0;
      }
    } while (*(int *)(param_1 + 0x69c) - *(int *)(param_1 + 0x668) <=
             *(int *)(param_1 + 0x654) + *(int *)(param_1 + 0x6b0));
  }
  *(int *)(param_1 + 0x69c) =
       *(int *)(param_1 + 0x668) + *(int *)(param_1 + 0x658) + *(int *)(param_1 + 0x660);
  if ((local_8c[0] < 0x11) &&
     (*(int *)(*(int *)(param_1 + 0x5b4) + (uint)*(byte *)(param_1 + 0x18) * 0x20 + 4) != 0)) {
    if (*(char *)(param_1 + 0x6b5) == '\0') {
      return 0;
    }
    if (local_28 == 0) {
      fn_004ed950(*(undefined4 *)(param_1 + 0x6bc));
      return 0;
    }
    return 0;
  }
  if ((*(char *)(param_1 + 0x6b5) == '\0') || (local_28 != 0)) {
    *local_2c = local_8c[0];
    return 1;
  }
  if (local_90 < local_8c[0]) {
    iVar10 = fn_004ed96c(*(undefined4 *)(param_1 + 0x6bc),local_90 + param_1 + 0x1c,
                          local_8c[0] - local_90);
  }
  else {
    if (local_8c[0] == 0x10) {
      *(undefined1 *)(param_1 + 0x1c) = 0x21;
      fn_004ed950(*(undefined4 *)(param_1 + 0x6bc));
      *local_2c = local_8c[0];
      return 1;
    }
    iVar10 = 0;
  }
  if (iVar10 < 0) {
    if (iVar10 == -0x1f1eb7dd) {
      if (local_54 == 0) {
        local_5c = 2;
      }
      else {
        local_5c = 3;
      }
    }
    else {
LAB_004d7050:
      if (local_5c == 1) goto LAB_004d7354;
    }
    if (local_5c != 2) {
      if (local_5c == 3) {
        fn_004ed950(*(undefined4 *)(param_1 + 0x6bc));
        *(undefined1 *)(param_1 + 0x1c) = 0x21;
        *local_2c = local_8c[0];
        return 1;
      }
      if (local_5c != 4) {
        return 0;
      }
      goto LAB_004d73b0;
    }
    *(undefined4 *)(param_1 + 0x69c) = local_84;
    local_8c[0] = local_90;
    *(char *)(param_1 + 0x6a4) = (char)local_80;
    *(undefined4 *)(param_1 + 0x6a0) = local_50;
  }
LAB_004d7354:
  iVar10 = fn_004ed8ac(*(undefined4 *)(param_1 + 0x6bc),local_8c);
  if (-1 < iVar10) {
    local_8c[0] = local_8c[0] + 0x10;
    fn_001694e4(param_1 + 0x1c,*(undefined4 *)(param_1 + 0x5b0));
    fn_004ed950(*(undefined4 *)(param_1 + 0x6bc));
    *local_2c = local_8c[0];
    return 1;
  }
  *(undefined1 *)(param_1 + 0x6b5) = 0;
LAB_004d73b0:
  if (*(char *)(param_1 + 0x6b5) != '\0') {
    fn_004ed950(*(undefined4 *)(param_1 + 0x6bc));
  }
  *(undefined4 *)(param_1 + 0x69c) = local_7c;
  *(char *)(param_1 + 0x6a4) = (char)local_6c;
  *(undefined4 *)(param_1 + 0x6a0) = local_68;
  *(undefined1 *)(param_1 + 0x1c) = 0x21;
  uVar3 = fn_004d6b30(param_1,local_2c,1);
  return uVar3;
}


