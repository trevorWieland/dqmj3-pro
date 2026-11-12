#include "005e1e4c_005e1e4c.h"



void fn_005e1e4c(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_44;
  float local_40;
  float local_3c;
  undefined1 local_38 [12];
  int local_2c;
  
  iVar3 = *(int *)(param_1 + 4);
  uVar12 = 0;
  iVar2 = (*(int *)(iVar3 + 0x188) - *(int *)(iVar3 + 0x184)) / 0x28;
  if (0 < iVar2) {
    do {
      iVar4 = *(int *)(iVar3 + 0x184);
      iVar5 = fn_006ec6f4();
      iVar11 = 0;
      if (0 < iVar5) {
        local_2c = (uVar12 & 0xffff) * 0x278 + 4;
        do {
          iVar6 = fn_006ec714(iVar4 + uVar12 * 0x28,iVar11);
          cVar1 = *(char *)(iVar6 + 0x48);
          iVar7 = fn_006eb248(iVar6);
          if (iVar7 != 0) {
            fn_0016947c(local_38,param_2 + 0x148,iVar6 + 0x24);
            if (cVar1 != '\0') {
              *(byte *)(iVar3 + 0x164) = *(byte *)(iVar3 + 0x164) | 1;
              iVar7 = *(int *)(iVar3 + 0xc) + local_2c + iVar11 * 0x2c;
              uVar8 = fn_0044eca8();
              iVar9 = fn_0044eca8();
              *(uint *)(iVar7 + 0x14) = uVar8 | iVar9 << 0x10;
              uVar10 = fn_0044eca8();
              *(undefined4 *)(iVar7 + 0x18) = uVar10;
              *(undefined1 *)(iVar7 + 0x1c) = 0;
            }
            fVar13 = *(float *)(iVar6 + 0x30);
            fVar15 = *(float *)(iVar6 + 0x34);
            fVar14 = *(float *)(iVar6 + 0x38);
            local_44 = *(float *)(param_2 + 0x148) * fVar13 + *(float *)(param_2 + 0x14c) * fVar15 +
                       *(float *)(param_2 + 0x150) * fVar14;
            local_40 = *(float *)(param_2 + 0x158) * fVar13 + *(float *)(param_2 + 0x15c) * fVar15 +
                       *(float *)(param_2 + 0x160) * fVar14;
            local_3c = *(float *)(param_2 + 0x168) * fVar13 + *(float *)(param_2 + 0x16c) * fVar15 +
                       *(float *)(param_2 + 0x170) * fVar14;
            fn_005e2770(iVar3,uVar12 & 0xffff,iVar11,cVar1,&local_44);
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < iVar5);
      }
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < iVar2);
  }
  return;
}


