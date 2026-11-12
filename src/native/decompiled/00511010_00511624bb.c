#include "00511010_00511624bb.h"



void fn_00511624(int *param_1,uint param_2,uint param_3)

{
  int *piVar1;
  int *piVar2;
  int *unaff_r5;
  int *piVar3;
  int iVar4;
  int *unaff_r8;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  
  piVar2 = (int *)0x0;
  piVar8 = *(int **)(DAT_008bf4d4 + 0x30);
  if (piVar8 != (int *)0x0) {
    do {
      piVar3 = unaff_r5;
      if ((param_2 & 1 << ((uint)piVar2 & 0xff)) != 0) {
        if (piVar8 != (int *)0x0) {
          unaff_r5 = (int *)((uint)piVar2 & 0xff);
        }
        piVar1 = (int *)0x0;
        piVar3 = unaff_r5;
        if (piVar8 != (int *)0x0) {
LAB_00511670:
          if (((param_2 | param_3) & 1 << ((uint)piVar1 & 0xff)) != 0 && piVar2 != piVar1) {
            iVar4 = *param_1;
            if (*(short *)(iVar4 + (int)((int)piVar2 * (int)piVar8 + (int)piVar1) * 2) == 0) {
              if (piVar8 != (int *)0x0) {
                unaff_r8 = &DAT_008bf4d4;
              }
              piVar3 = (int *)0x0;
              if (piVar8 != (int *)0x0) {
                iVar7 = *unaff_r8;
                do {
                  if ((param_3 & 1 << ((uint)piVar3 & 0xff)) != 0) {
                    uVar6 = (uint)*(ushort *)
                                   (iVar4 + (int)((int)piVar2 * *(int *)(iVar7 + 0x30) + (int)piVar3
                                                 ) * 2);
                    unaff_r8 = piVar3;
                    if ((((uVar6 != 0) &&
                         (uVar5 = (uint)*(ushort *)
                                         (iVar4 + (int)((int)piVar3 * *(int *)(iVar7 + 0x30) +
                                                       (int)piVar1) * 2), uVar5 != 0)) &&
                        (uVar5 + uVar6 <= (uint)*(ushort *)(param_1 + 7))) &&
                       (unaff_r8 = (int *)(*(byte *)(param_1[3] + (int)piVar3) + 2),
                       unaff_r8 <= (int *)(uint)*(ushort *)((int)param_1 + 0x1e)))
                    goto LAB_00511728;
                  }
                  piVar3 = (int *)((int)piVar3 + 1);
                } while (piVar3 < piVar8);
              }
              piVar3 = (int *)0x0;
              if (piVar8 != (int *)0x0) {
                do {
                  if ((((param_3 & 1 << ((uint)piVar3 & 0xff)) != 0) &&
                      (unaff_r8 = (int *)(uint)*(ushort *)
                                                (iVar4 + (int)((int)piVar2 * (int)piVar8 +
                                                              (int)piVar3) * 2),
                      unaff_r8 != (int *)0x0)) &&
                     (unaff_r8 = (int *)(uint)*(ushort *)
                                               (iVar4 + (int)((int)piVar3 * (int)piVar8 +
                                                             (int)piVar1) * 2),
                     unaff_r8 != (int *)0x0)) goto LAB_00511728;
                  piVar3 = (int *)((int)piVar3 + 1);
                } while (piVar3 < piVar8);
              }
            }
            else {
              *(char *)((int)piVar1 + (int)piVar2 * (int)piVar8 + param_1[2]) = (char)piVar1;
              *(char *)((int)piVar2 + (int)piVar1 * (int)piVar8 + param_1[2]) = (char)unaff_r5;
              piVar3 = unaff_r5;
            }
          }
          goto LAB_005117a8;
        }
      }
LAB_005117b4:
      piVar2 = (int *)((int)piVar2 + 1);
      unaff_r5 = piVar3;
    } while (piVar2 < piVar8);
  }
  return;
LAB_00511728:
  *(char *)((int)piVar1 + (int)piVar2 * (int)piVar8 + param_1[2]) = (char)piVar3;
  *(char *)((int)piVar2 + (int)piVar1 * (int)piVar8 + param_1[2]) = (char)piVar3;
  unaff_r8 = (int *)(*(byte *)(param_1[3] + (int)piVar3) + 2);
  *(char *)(param_1[3] + (int)piVar3) = (char)unaff_r8;
LAB_005117a8:
  piVar1 = (int *)((int)piVar1 + 1);
  if (piVar8 <= piVar1) goto LAB_005117b4;
  goto LAB_00511670;
}


