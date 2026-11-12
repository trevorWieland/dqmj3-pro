#include "0036254c_00362d90ba.h"



void fn_00362ccc(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = fn_006f6a38();
  if ((uVar1 & 0x20000) == 0) {
    return;
  }
  fn_006899f4(param_1,0xd4,0);
  return;
}



void fn_00362c9c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(100,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00362d64(iVar1,param_1);
  return;
}



undefined4 *
fn_00362a3c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  puVar2 = (undefined4 *)fn_001dbf48(param_1,8,param_3,param_4,param_4);
  *puVar2 = &DAT_008271a8;
  puVar2[0x5a] = 0;
  uVar12 = 2;
  iVar3 = (int)(puVar2[0x54] - puVar2[0x53]) / 0xc;
  if (iVar3 < 3) {
    if ((puVar2[0x55] & 0x3fffffff) < 2) {
      piVar4 = (int *)puVar2[0x52];
      if (((piVar4 == (int *)0x0) || ((puVar2[0x55] & 0xc0000000) != 0x40000000)) ||
         (puVar5 = (undefined4 *)(**(code **)(*piVar4 + 8))(piVar4,0x18),
         puVar5 == (undefined4 *)0x0)) {
        uVar12 = puVar2[0x55] & 0x3fffffff;
      }
      else {
        iVar3 = 0;
        puVar8 = (undefined4 *)puVar2[0x53];
        puVar10 = (undefined4 *)puVar2[0x54];
        puVar6 = puVar5;
        if (puVar8 != puVar10) {
          do {
            if (puVar6 != (undefined4 *)0x0) {
              uVar13 = puVar8[1];
              uVar14 = puVar8[2];
              *puVar6 = *puVar8;
              puVar6[1] = uVar13;
              puVar6[2] = uVar14;
            }
            puVar8 = puVar8 + 3;
            puVar6 = puVar6 + 3;
          } while (puVar8 != puVar10);
          iVar3 = (int)(puVar2[0x54] - puVar2[0x53]) / 0xc;
        }
        uVar7 = puVar2[0x53];
        if (uVar7 != 0) {
          uVar11 = puVar2[0x54];
          uVar1 = uVar7;
          if (uVar7 < uVar11) {
            iVar9 = 1;
            if (1 < (int)(uVar11 - uVar7) / 0xc + 1) {
              do {
                iVar9 = iVar9 + 1;
              } while (iVar9 < (int)(uVar11 - uVar7) / 0xc + 1);
            }
          }
          else {
            for (; uVar1 != uVar11; uVar1 = uVar1 + 0xc) {
            }
          }
          puVar2[0x54] = uVar7;
          piVar4 = (int *)puVar2[0x52];
          (**(code **)(*piVar4 + 0xc))(piVar4,puVar2[0x53]);
        }
        puVar2[0x53] = puVar5;
        puVar2[0x54] = puVar5 + iVar3 * 3;
        puVar2[0x55] = puVar2[0x55] & 0xc0000000 | 2;
      }
    }
    for (iVar3 = (int)(puVar2[0x54] - puVar2[0x53]) / 0xc; iVar3 < (int)uVar12; iVar3 = iVar3 + 1) {
      puVar5 = (undefined4 *)(puVar2[0x53] + iVar3 * 0xc);
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = 0xffffffff;
        puVar5[1] = 0xffffffff;
        puVar5[2] = 0xffffffff;
      }
    }
    iVar3 = puVar2[0x53] + uVar12 * 0xc;
  }
  else {
    do {
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < iVar3);
    iVar3 = puVar2[0x53] + 0x18;
  }
  puVar2[0x54] = iVar3;
  fn_001da490(puVar2,0,0,0,0);
  fn_001da490(puVar2,1,1,1,1);
  return puVar2;
}


