#include "00511010_00511624a.h"



void fn_0051117c(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar4 = 0;
  uVar2 = *(uint *)(DAT_008bf4d4 + 0x30);
  if (uVar2 != 0) {
    do {
      uVar1 = 1 << (uVar4 & 0xff);
      if (((*(uint *)(param_1 + 0x2c) & uVar1) == 0) && ((uVar1 & param_2) != 0)) {
        if (uVar2 != 0) {
          uVar3 = 0;
          uVar5 = uVar2;
          do {
            if (((*(uint *)(param_1 + 0x2c) | param_2) & 1 << (uVar3 & 0xff)) != 0) {
              *(char *)(uVar3 + uVar4 * uVar2 + *(int *)(param_1 + 8)) = (char)uVar3;
              *(char *)(uVar4 + uVar3 * uVar2 + *(int *)(param_1 + 8)) = (char)uVar4;
            }
            uVar5 = uVar5 - 1;
            uVar3 = uVar3 + 1;
          } while (uVar5 != 0);
        }
        *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | uVar1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  uVar4 = 0;
  if (uVar2 != 0) {
    do {
      if (uVar4 < uVar2) {
        uVar1 = uVar4;
        do {
          if (((*(uint *)(param_1 + 0x2c) & 1 << (uVar4 & 0xff)) == 0) ||
             ((*(uint *)(param_1 + 0x2c) & 1 << (uVar1 & 0xff)) == 0)) {
            iVar6 = uVar4 * uVar2 + *(int *)(param_1 + 8);
            if ((*(byte *)(uVar1 + iVar6) != uVar4) ||
               (*(byte *)(uVar4 + uVar1 * uVar2 + *(int *)(param_1 + 8)) != uVar1)) {
              *(char *)(uVar1 + iVar6) = (char)uVar4;
              *(char *)(uVar4 + uVar1 * uVar2 + *(int *)(param_1 + 8)) = (char)uVar1;
            }
          }
          uVar1 = uVar1 + 1;
        } while (uVar1 < uVar2);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  return;
}



void fn_00511010(int *param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  
  uVar2 = 0;
  uVar4 = *(uint *)(DAT_008bf4d4 + 0x30);
  if (uVar4 != 0) {
    do {
      if (((param_2 & 1 << (uVar2 & 0xff)) != 0) && (uVar1 = 0, uVar4 != 0)) {
        do {
          if ((uVar2 != uVar1) &&
             (((param_2 & 1 << (uVar1 & 0xff)) != 0 &&
              (iVar5 = *param_1, *(short *)(iVar5 + (uVar2 * uVar4 + uVar1) * 2) == 0)))) {
            iVar7 = uVar2 * uVar4 + param_1[2];
            uVar6 = (uint)*(byte *)(uVar1 + iVar7);
            if ((uVar6 != uVar2) &&
               ((uVar6 == uVar1 ||
                ((uVar6 < uVar4 &&
                 ((*(short *)(iVar5 + (uVar2 * uVar4 + uVar6) * 2) == 0 ||
                  (*(short *)(iVar5 + (uVar6 * uVar4 + uVar1) * 2) == 0)))))))) {
              *(undefined1 *)(uVar1 + iVar7) = *(undefined1 *)((int)param_1 + 0x2a);
            }
          }
          uVar1 = uVar1 + 1;
        } while (uVar1 < uVar4);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar4);
  }
  uVar4 = *(uint *)(DAT_008bf4d4 + 0x30);
  fn_00158f6c(param_1[3],uVar4);
  uVar2 = 0;
  if (uVar4 != 0) {
    do {
      uVar1 = 0;
      if (uVar4 != 0) {
        do {
          uVar3 = (uint)*(byte *)(uVar1 + uVar2 * uVar4 + param_1[2]);
          bVar9 = uVar3 != uVar2;
          uVar6 = uVar2;
          if (bVar9) {
            uVar6 = uVar1;
          }
          bVar8 = uVar6 <= uVar3;
          if (bVar9 && uVar3 != uVar1) {
            bVar8 = uVar3 <= uVar4;
          }
          if (bVar8 && ((bVar9 && uVar3 != uVar1) && uVar4 != uVar3)) {
            *(char *)(param_1[3] + uVar3) = *(char *)(param_1[3] + uVar3) + '\x01';
          }
          uVar1 = uVar1 + 1;
        } while (uVar1 < uVar4);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar4);
  }
  do {
    iVar5 = fn_0051243c(param_1,param_2,param_3);
  } while (iVar5 == 0);
  return;
}


