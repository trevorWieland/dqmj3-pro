#include "single_004cb4e0_r.h"


extern undefined4 UndefinedInstruction;

undefined8 fn_004cb4e0(int param_1,undefined4 *param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  ushort *puVar10;
  bool bVar11;
  bool bVar12;
  
  uVar5 = 0;
  if (*(int *)(DAT_008bf4cc + 0xa4) != 0) {
    bVar1 = *(byte *)(*(int *)(DAT_008bf4cc + 0xa4) + 0x14);
    uVar2 = 0;
    iVar6 = 0xc;
    puVar4 = (uint *)(param_1 + 0x568);
    puVar10 = (ushort *)(param_1 + 0x566);
    puVar3 = param_2;
    do {
      param_2 = puVar3;
      if (uVar2 != bVar1) {
        uVar7 = param_3 >> (uVar2 & 0xff);
        bVar11 = (uVar7 & 1) != 0;
        if (bVar11) {
          uVar7 = *puVar4;
        }
        bVar12 = uVar7 != 0;
        if (bVar11 && bVar12) {
          uVar7 = (uint)*puVar10;
        }
        if ((bVar11 && bVar12) && uVar7 != 0) {
          iVar8 = param_1 + uVar2 * 8;
          uVar9 = *(undefined4 *)(iVar8 + 0x568);
          param_2 = puVar3 + 2;
          uVar5 = uVar5 + 1;
          *puVar3 = *(undefined4 *)(iVar8 + 0x564);
          puVar3[1] = uVar9;
        }
      }
      iVar6 = iVar6 + -1;
      puVar4 = puVar4 + 2;
      puVar10 = puVar10 + 4;
      uVar2 = uVar2 + 1;
      puVar3 = param_2;
    } while (iVar6 != 0);
    if ((0x10 < uVar5) && (DAT_008c0630 != 0)) {
      param_2 = (undefined4 *)&UndefinedInstruction;
    }
  }
  return CONCAT44(param_2,uVar5);
}


