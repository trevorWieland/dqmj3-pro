#include "004d7ef0_004d85d4b.h"



void fn_004d85d4(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  bool bVar9;
  uint local_28;
  
  bVar9 = (char)param_1[0x19d] != '\0';
  iVar1 = 0;
  if (bVar9) {
    iVar1 = param_1[0x195];
  }
  if (bVar9 && iVar1 != 0) {
    local_28 = 0xffffffff;
    uVar7 = 0;
    if (param_1[5] != 0) {
      do {
        uVar5 = uVar7 & 0xff;
        uVar6 = 0;
        if ((*(byte *)(param_1 + 6) != uVar5) &&
           (pcVar8 = (char *)(param_1[0x16d] + uVar5 * 0x20), *pcVar8 != '\0')) {
          if (pcVar8[0x14] == '\0') {
            if (*(int *)(pcVar8 + 8) == -0x10000) {
              return;
            }
            if (*(int *)(pcVar8 + 8) + param_1[0x196] < param_1[0x19b]) {
              (**(code **)(*param_1 + 8))(param_1,*(code **)(*param_1 + 8),0,0x80);
            }
            uVar4 = (*(int *)(pcVar8 + 8) + param_1[0x196]) - param_1[0x19b];
            bVar9 = 0x1f < uVar4;
            if (uVar4 < 0x21) {
              bVar9 = uVar4 != 0;
            }
            else {
              uVar4 = 0x20;
            }
            uVar3 = 1;
            if (bVar9) {
              iVar1 = param_1[0x197];
              do {
                iVar2 = ((param_1[0x19b] + uVar3) - param_1[0x19a]) + param_1[0x19e];
                if (iVar2 < 0) {
                  iVar2 = iVar2 + iVar1;
                }
                else if (iVar1 <= iVar2) {
                  iVar2 = iVar2 - iVar1;
                }
                if ((*(uint *)(pcVar8 + 4) &
                    ~*(uint *)(param_1[0x16e] + (uVar5 * iVar1 + iVar2) * 4)) == 0) {
                  uVar6 = uVar6 | 1 << (uVar3 - 1 & 0xff);
                }
                uVar3 = uVar3 + 1;
              } while (uVar3 <= uVar4);
            }
            local_28 = local_28 & uVar6;
          }
          else if (pcVar8[1] != '\0') {
            local_28 = 0;
            break;
          }
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < (uint)param_1[5]);
    }
    param_1[0x19c] = local_28;
  }
  return;
}



void fn_004d8488(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  iVar8 = *(int *)(param_1 + 0x66c);
  iVar5 = *(int *)(param_1 + 0x668) + *(int *)(param_1 + 0x654) + *(int *)(param_1 + 0x6b0);
  uVar3 = iVar5 - iVar8;
  if ((0 < (int)uVar3) && (*(int *)(param_1 + 0x654) != 0)) {
    uVar7 = 0;
    if (*(uint *)(param_1 + 0x14) != 0) {
      do {
        pcVar6 = (char *)(*(int *)(param_1 + 0x5b4) + (uVar7 & 0xff) * 0x20);
        cVar1 = '\0';
        if (*pcVar6 != '\0') {
          cVar1 = pcVar6[1];
        }
        if (*pcVar6 != '\0' && cVar1 != '\0') {
          iVar2 = *(int *)(pcVar6 + 8);
          if (iVar2 == -0x10000) {
            uVar3 = (uint)*(byte *)(param_1 + 0x19);
          }
          if (((iVar2 != -0x10000 || uVar3 != 1) && (pcVar6[0x14] == '\0')) &&
             (iVar2 = iVar2 + *(int *)(param_1 + 0x658), 0 < iVar5 - iVar2)) {
            iVar5 = iVar2;
          }
          iVar2 = iVar8 + 1;
          uVar3 = iVar5 - iVar2;
          if (-1 < (int)uVar3) {
            iVar9 = *(int *)(param_1 + 0x65c);
            do {
              iVar4 = (iVar2 - *(int *)(param_1 + 0x668)) + *(int *)(param_1 + 0x678);
              if (iVar4 < 0) {
                iVar4 = iVar4 + iVar9;
              }
              else if (iVar9 <= iVar4) {
                iVar4 = iVar4 - iVar9;
              }
              if ((*(uint *)(pcVar6 + 4) &
                  ~*(uint *)(*(int *)(param_1 + 0x5b8) + ((uVar7 & 0xff) * iVar9 + iVar4) * 4)) != 0
                 ) {
                uVar3 = 0;
                if ((pcVar6[0x14] == '\0') ||
                   (uVar3 = iVar2 - *(int *)(pcVar6 + 0x18), (int)uVar3 < 1)) {
                  iVar5 = iVar2 + -1;
                }
                break;
              }
              iVar2 = iVar2 + 1;
              uVar3 = iVar5 - iVar2;
            } while (-1 < (int)uVar3);
          }
          if (iVar5 - iVar8 < 1) {
            return;
          }
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)(param_1 + 0x14));
    }
    *(int *)(param_1 + 0x66c) = iVar5;
  }
  return;
}


