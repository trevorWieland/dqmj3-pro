#include "00512164_00512164.h"



undefined4 fn_00512164(int *param_1,uint param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint unaff_r9;
  uint unaff_r10;
  int iVar8;
  bool bVar9;
  uint local_98;
  uint local_94;
  uint local_90 [24];
  uint local_30;
  uint local_2c;
  
  puVar3 = &local_98;
  uVar1 = 0;
  uVar6 = 0;
  uVar5 = *(uint *)(DAT_008bf4d4 + 0x30);
  if (uVar5 != 0) {
    do {
      bVar9 = (param_2 & 1 << (uVar6 & 0xff)) != 0;
      if (bVar9) {
        param_4 = uVar6 + 1;
      }
      if (bVar9 && param_4 < uVar5) {
        do {
          if ((((param_2 & 1 << (param_4 & 0xff)) != 0) &&
              (uVar7 = (uint)*(byte *)(param_4 + uVar6 * uVar5 + param_1[2]),
              uVar7 != uVar6 && uVar7 != param_4)) &&
             (uVar2 = (uint)*(ushort *)(*param_1 + (uVar7 * uVar5 + param_4) * 2) +
                      (uint)*(ushort *)(*param_1 + (uVar6 * uVar5 + uVar7) * 2), uVar1 < uVar2)) {
            local_30 = param_4;
            uVar1 = uVar2;
            unaff_r9 = uVar7;
            unaff_r10 = uVar6;
          }
          param_4 = param_4 + 1;
        } while (param_4 < uVar5);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar5);
    if (uVar1 != 0) {
      local_94 = 0;
      iVar8 = 6;
      do {
        *(undefined4 *)((int)puVar3 + 8) = 0;
        *(undefined4 *)((int)puVar3 + 0xc) = 0;
        *(undefined4 *)((int)puVar3 + 0x10) = 0;
        *(undefined4 *)((int)puVar3 + 0x14) = 0;
        iVar8 = iVar8 + -1;
        puVar3 = (uint *)((int)puVar3 + 0x10);
      } while (iVar8 != 0);
      uVar6 = 0;
      if (uVar5 != 0) {
        do {
          if ((param_2 & 1 << (uVar6 & 0xff)) != 0) {
            uVar7 = (uint)*(ushort *)(*param_1 + (unaff_r10 * uVar5 + uVar6) * 2);
            if (uVar7 != 0) {
              uVar2 = (uint)*(ushort *)(*param_1 + (uVar6 * uVar5 + local_30) * 2);
              bVar9 = uVar2 != 0;
              if (bVar9) {
                uVar2 = uVar2 + uVar7;
              }
              if ((bVar9 && uVar2 < uVar1) && (uVar2 <= *(ushort *)(param_1 + 7))) {
                local_90[local_94 * 2] = uVar6;
                local_90[local_94 * 2 + 1] = uVar2;
                local_94 = local_94 + 1;
              }
            }
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar5);
        uVar6 = local_94;
        if (local_94 != 0) {
          while (uVar6 = uVar6 - 1, uVar6 != 0) {
            uVar7 = 0;
            if (uVar6 != 0) {
              do {
                if (local_90[uVar7 * 2 + 3] < local_90[uVar7 * 2 + 1]) {
                  uVar2 = 0;
                  do {
                    uVar4 = local_90[uVar7 * 2 + uVar2 + 2];
                    local_90[uVar7 * 2 + uVar2 + 2] = local_90[uVar7 * 2 + uVar2];
                    local_90[uVar7 * 2 + uVar2] = uVar4 & 0xff;
                    uVar2 = uVar2 + 1;
                  } while (uVar2 < 2);
                }
                uVar7 = uVar7 + 1;
              } while (uVar7 < uVar6);
            }
          }
          uVar6 = 0;
          if (local_94 != 0) {
            local_2c = uVar1 - 1;
            do {
              uVar1 = local_90[uVar6 * 2];
              iVar8 = param_1[3];
              if ((ushort)(*(byte *)(iVar8 + uVar1) + 2) <= *(ushort *)((int)param_1 + 0x1e)) {
LAB_005123d0:
                *(char *)(local_30 + unaff_r10 * uVar5 + param_1[2]) = (char)uVar1;
                *(char *)(unaff_r10 + local_30 * uVar5 + param_1[2]) = (char)uVar1;
                *(char *)(param_1[3] + unaff_r9) = *(char *)(param_1[3] + unaff_r9) + -2;
                *(char *)(param_1[3] + uVar1) = *(char *)(param_1[3] + uVar1) + '\x02';
                return 1;
              }
              if ((ushort)*(byte *)(iVar8 + uVar1) <= *(ushort *)((int)param_1 + 0x1e)) {
                *(char *)(iVar8 + unaff_r9) = *(char *)(iVar8 + unaff_r9) + -2;
                local_98 = (uint)*(ushort *)((int)param_1 + 0x1e);
                iVar8 = fn_00510c90(param_1,uVar1,param_2,local_2c & 0xffff);
                *(char *)(param_1[3] + unaff_r9) = *(char *)(param_1[3] + unaff_r9) + '\x02';
                if (iVar8 != 0) goto LAB_005123d0;
              }
              uVar6 = uVar6 + 1;
            } while (uVar6 < local_94);
          }
        }
      }
    }
  }
  return 0;
}


