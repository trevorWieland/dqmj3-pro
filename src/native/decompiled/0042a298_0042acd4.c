#include "0042a298_0042acd4.h"



undefined4 fn_0042acd4(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_2 + 8) == -1) {
    uVar1 = fn_0022f584((char *)&DAT_0042ad14,0);
    return uVar1;
  }
  uVar1 = fn_006b2dec();
  return uVar1;
}



undefined4 fn_0042a904(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  (**(code **)(*param_1 + 0x118))
            (param_1,L"rom:/data/Layout/menu/race_rule_setting/race_rule_setting_gcup.arc",
             (char *)&DAT_0042a994,&DAT_0042a98c);
  iVar1 = fn_001828f0(param_1[0x1d],(char *)&DAT_0042a76c);
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
  iVar1 = fn_001828f0(param_1[0x1d],(char *)&DAT_0042a778);
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
  piVar2 = (int *)fn_00172c98(param_1[0x1d],(char *)&DAT_0042a9c0);
  iVar1 = (**(code **)(*piVar2 + 0x2c))(piVar2,(char *)&DAT_0042a9cc,1);
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
  return 1;
}



int fn_0042a298(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  ushort *puVar6;
  ushort *puVar7;
  ushort *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ushort uVar12;
  ushort *puVar13;
  undefined4 *puVar14;
  uint *puVar15;
  
  uVar12 = 1;
  puVar14 = *(undefined4 **)(param_1 + 0x18);
  if (puVar14 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar14)(puVar14);
    do {
      if (puVar1 == &DAT_0089292c) goto LAB_0042a2e0;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar14 = (undefined4 *)0x0;
LAB_0042a2e0:
  uVar2 = fn_0037c0e4(puVar14[3]);
  uVar10 = *(uint *)(param_1 + 0xb4);
  uVar11 = *(uint *)(param_1 + 0xb8);
  if (uVar10 != uVar11) {
    uVar3 = uVar10;
    if (uVar11 <= uVar10) {
      do {
        uVar3 = uVar3 + 2;
      } while (uVar3 != uVar11);
    }
    *(uint *)(param_1 + 0xb8) = uVar11 - (uVar11 - uVar10 & 0xfffffffe);
  }
  do {
    iVar4 = fn_0028bcb0();
    if (iVar4 != 0) {
      uVar5 = fn_006a7ae8(uVar12 & 0xff);
      iVar4 = fn_0037c2b4(uVar2,uVar5);
      if (iVar4 != 0) {
        puVar13 = *(ushort **)(param_1 + 0xb8);
        puVar15 = (uint *)(param_1 + 0xb4);
        if (puVar13 == *(ushort **)(param_1 + 0xbc)) {
          uVar10 = (int)((int)puVar13 - *puVar15) >> 1;
          if (uVar10 < (uint)((int)((int)*(ushort **)(param_1 + 0xbc) - *puVar15) >> 1)) {
            *(ushort **)(param_1 + 0xb8) = puVar13 + 1;
            if (puVar13 != (ushort *)0x0) {
              *puVar13 = puVar13[-1];
            }
            puVar7 = puVar13 + -1;
            puVar8 = puVar13;
            if (puVar13 < puVar7) {
              iVar4 = (int)puVar7 - (int)puVar13;
              if (0 < iVar4) {
                if (iVar4 * 0x40000000 < 0) {
                  puVar7 = puVar13 + -2;
                  puVar8 = puVar13 + -1;
                  *puVar8 = *puVar7;
                }
                for (iVar4 = iVar4 >> 2; iVar4 != 0; iVar4 = iVar4 + -1) {
                  puVar8[-1] = puVar7[-1];
                  puVar7 = puVar7 + -2;
                  puVar8 = puVar8 + -2;
                  *puVar8 = *puVar7;
                }
              }
            }
            else {
              while (puVar13 != puVar7) {
                puVar7 = puVar7 + -1;
                puVar8[-1] = *puVar7;
                puVar8 = puVar8 + -1;
              }
            }
            *puVar13 = uVar12;
          }
          else {
            uVar11 = uVar10 + (uVar10 >> 1) + (uVar10 >> 3);
            if (uVar11 < uVar10 + 0x20) {
              uVar11 = uVar10 + 0x20;
            }
            puVar6 = (ushort *)fn_00100fc6(uVar11 << 1,0);
            puVar8 = puVar6;
            for (puVar7 = (ushort *)*puVar15; puVar7 != puVar13; puVar7 = puVar7 + 1) {
              if (puVar8 != (ushort *)0x0) {
                *puVar8 = *puVar7;
              }
              puVar8 = puVar8 + 1;
            }
            puVar7 = (ushort *)(((int)puVar13 - *puVar15 & 0xfffffffe) + (int)puVar6);
            if (puVar7 != (ushort *)0x0) {
              *puVar7 = uVar12;
            }
            puVar8 = *(ushort **)(param_1 + 0xb8);
            puVar7 = (ushort *)(((int)puVar13 - *puVar15 & 0xfffffffe) + (int)puVar6);
            for (; puVar13 != puVar8; puVar13 = puVar13 + 1) {
              puVar7 = puVar7 + 1;
              if (puVar7 != (ushort *)0x0) {
                *puVar7 = *puVar13;
              }
            }
            uVar3 = *puVar15;
            uVar9 = *(uint *)(param_1 + 0xb8);
            uVar10 = uVar3;
            if (uVar9 < uVar3) {
              do {
                uVar10 = uVar10 + 2;
              } while (uVar10 != uVar9);
            }
            fn_001008c4(uVar3,(int)(*(int *)(param_1 + 0xbc) - uVar3) >> 1,0);
            *puVar15 = (uint)puVar6;
            *(ushort **)(param_1 + 0xb8) = puVar6 + ((int)(uVar9 - uVar3) >> 1) + 1;
            *(ushort **)(param_1 + 0xbc) = puVar6 + uVar11;
          }
        }
        else {
          *(ushort **)(param_1 + 0xb8) = puVar13 + 1;
          if (puVar13 != (ushort *)0x0) {
            *puVar13 = uVar12;
          }
        }
      }
    }
    uVar12 = uVar12 + 1;
  } while ((short)uVar12 < 0xf8);
  return *(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0xb4) >> 1;
}


