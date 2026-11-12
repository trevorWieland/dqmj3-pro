#include "single_004ee340_r.h"


extern undefined4 SupervisorCall;

longlong fn_004ee340(int param_1,int *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint extraout_r1;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  
  if (*(char *)(param_1 + 0x908) == '\x01') {
    puVar1 = (undefined1 *)0xe0e14826;
    piVar5 = (int *)(*param_2 + -0x100000);
    if (piVar5 < (int *)0x3ff00000) {
      piVar5 = (int *)(uint)*(byte *)(param_1 + 0x909);
      if ((piVar5 == (int *)0x0) || (*(char *)(*param_2 + 4) != '\0')) {
        uVar7 = 0;
        do {
          iVar2 = fn_006d6e30(param_2 + uVar7 * 5 + 1);
          if (iVar2 != 0) {
            piVar5 = (int *)(param_2[uVar7 * 5 + 5] + -0x100000);
            if ((int *)0x3fefffff < piVar5) {
              if (DAT_008c0630 != 0) {
                piVar5 = (int *)&SupervisorCall;
              }
              goto LAB_004ee4dc;
            }
            piVar5 = (int *)(uint)*(byte *)(param_1 + 0x909);
            if ((piVar5 != (int *)0x0) && (*(char *)(param_2[uVar7 * 5 + 5] + 4) == '\0'))
            goto joined_r0x004ee4d4;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < 4);
        iVar2 = *param_2;
        if (*(char *)(iVar2 + 4) == '\0') {
          fn_004f0010(param_1 + 4,0,0);
          fn_004f0010(param_1 + 0xe0,0,0);
        }
        else if (*(char *)(iVar2 + 4) == '\x01') {
          uVar10 = *(undefined4 *)(iVar2 + 8);
          uVar11 = *(undefined4 *)(iVar2 + 0xc);
          puVar6 = (undefined4 *)(param_1 + 0x88);
          if (puVar6 != (undefined4 *)0x0) {
            *puVar6 = &DAT_00856c74;
          }
          puVar9 = (undefined4 *)(param_1 + 0x164);
          if (puVar9 != (undefined4 *)0x0) {
            *puVar9 = &DAT_00856c74;
          }
          fn_004f0010(param_1 + 4,puVar6,uVar10,uVar11);
          fn_004f0010(param_1 + 0xe0,puVar9,uVar10,uVar11);
        }
        uVar7 = 0;
        if (*(int **)(param_1 + 4) != (int *)0x0) {
          uVar7 = (**(code **)(**(int **)(param_1 + 4) + 8))();
        }
        uVar8 = 0;
        iVar2 = 0;
        do {
          iVar3 = fn_006d6e30(param_2 + uVar8 * 5 + 1);
          iVar12 = iVar2;
          if (iVar3 != 0) {
            iVar12 = iVar2 + 1;
            iVar2 = param_1 + iVar2 * 0x1cc;
            fn_004ed810(iVar2 + 0x1dc,param_2 + uVar8 * 5 + 1);
            iVar3 = param_2[uVar8 * 5 + 5];
            if (*(char *)(iVar3 + 4) == '\0') {
              fn_004f0010(iVar2 + 0x1ec,0,0);
              uVar10 = 0;
              uVar11 = 0;
              puVar6 = (undefined4 *)0x0;
LAB_004ee758:
              fn_004f0010(iVar2 + 0x2c8,puVar6,uVar11,uVar10);
            }
            else {
              if (*(char *)(iVar3 + 4) == '\x01') {
                uVar11 = *(undefined4 *)(iVar3 + 8);
                uVar10 = *(undefined4 *)(iVar3 + 0xc);
                puVar9 = (undefined4 *)(iVar2 + 0x270);
                if (puVar9 != (undefined4 *)0x0) {
                  *puVar9 = &DAT_00856c74;
                }
                puVar6 = (undefined4 *)(iVar2 + 0x34c);
                if (puVar6 != (undefined4 *)0x0) {
                  *puVar6 = &DAT_00856c74;
                }
                fn_004f0010(iVar2 + 0x1ec,puVar9,uVar11,uVar10);
                goto LAB_004ee758;
              }
              fn_004f0010(iVar2 + 0x1ec,0,0);
              fn_004f0010(iVar2 + 0x2c8,0,0);
            }
            if (*(int *)(param_1 + 0x1bc) < *(int *)(param_1 + 0x1c0)) {
              *(int *)(*(int *)(param_1 + 0x1c4) + *(int *)(param_1 + 0x1bc) * 4) = iVar2 + 0x1d8;
              *(int *)(param_1 + 0x1bc) = *(int *)(param_1 + 0x1bc) + 1;
            }
            uVar4 = 0;
            if (*(int **)(iVar2 + 0x1ec) != (int *)0x0) {
              uVar4 = (**(code **)(**(int **)(iVar2 + 0x1ec) + 8))();
            }
            if (uVar7 < uVar4) {
              uVar7 = uVar4;
            }
          }
          uVar8 = uVar8 + 1;
          iVar2 = iVar12;
          if (3 < uVar8) {
            fn_00656968(param_1 + 0x1bc,&LAB_004ee760);
            fn_004ef2b0(DAT_008c0634,uVar7);
            *(undefined1 *)(param_1 + 0x908) = 2;
            return (ulonglong)extraout_r1 << 0x20;
          }
        } while( true );
      }
joined_r0x004ee4d4:
      if (DAT_008c0630 != 0) {
        piVar5 = (int *)&SupervisorCall;
      }
    }
    else if (DAT_008c0630 != 0) {
      piVar5 = (int *)&SupervisorCall;
    }
  }
  else {
    puVar1 = &DAT_e0a14827;
    piVar5 = param_2;
  }
LAB_004ee4dc:
  return CONCAT44(piVar5,puVar1);
}


