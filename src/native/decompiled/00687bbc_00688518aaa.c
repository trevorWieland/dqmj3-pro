#include "00687bbc_00688518aaa.h"



undefined4 * fn_00687bbc(undefined4 param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  
  puVar2 = (undefined4 *)fn_001c585c(param_1,3);
  *puVar2 = &DAT_00850e84;
  puVar2[0x5f] = 0;
  puVar2[0x60] = 0;
  puVar2[0x61] = 0xffffffff;
  *(undefined1 *)(puVar2 + 0x62) = 0;
  *(undefined1 *)((int)puVar2 + 0x189) = 1;
  *(undefined1 *)((int)puVar2 + 0x18a) = 1;
  *(undefined1 *)((int)puVar2 + 0x18b) = 0;
  *(undefined1 *)(puVar2 + 99) = 0;
  puVar2[100] = 0;
  puVar2[0x65] = 0;
  puVar2[0x66] = 0;
  puVar2[0x67] = 0;
  puVar2[0x68] = 0;
  puVar2[0x69] = 0;
  puVar2[0x6a] = 0xffffffff;
  puVar2[0x6b] = 0xffffffff;
  puVar2[0x6c] = 0x41f00000;
  puVar2[0x6d] = 0;
  puVar2[0x6e] = 0;
  puVar2[0x6f] = 0;
  puVar2[0x70] = 0;
  puVar2[0x71] = 0;
  puVar2[0x72] = 0;
  puVar2[0x73] = 0xffffffff;
  puVar2[0x74] = 0xffffffff;
  puVar2[0x75] = 0xffffffff;
  puVar2[0x76] = 0;
  puVar2[0x77] = 0;
  puVar2[0x78] = 0;
  puVar2[0x79] = DAT_00891e3c;
  puVar2[0x7a] = 0;
  iVar3 = fn_00145b00(0x10,&DAT_00812c8c);
  uVar4 = 0;
  if (iVar3 != 0) {
    uVar4 = fn_001fa2fc();
  }
  puVar2[0x7b] = uVar4;
  puVar2[0xb8] = 0;
  piVar5 = (int *)fn_00118290();
  puVar2[0xb9] = piVar5;
  puVar2[0xbc] = 0;
  uVar4 = (**(code **)(*piVar5 + 8))(piVar5,100,0x20);
  puVar2[0xba] = uVar4;
  puVar2[0xbb] = uVar4;
  puVar2[0xbc] = 5;
  *(undefined1 *)(puVar2 + 0xbd) = 1;
  *(undefined1 *)((int)puVar2 + 0x2f5) = 0;
  puVar2[0xbe] = 0xffffffff;
  uVar13 = 0x35;
  piVar5 = puVar2 + 0x52;
  iVar3 = (int)(puVar2[0x54] - puVar2[0x53]) / 0xc;
  if (iVar3 < 0x36) {
    if ((puVar2[0x55] & 0x3fffffff) < 0x35) {
      if (((*piVar5 == 0) || ((puVar2[0x55] & 0xc0000000) != 0x40000000)) ||
         (puVar6 = (undefined4 *)(**(code **)(*(int *)*piVar5 + 8))((int *)*piVar5,0x27c,0x20),
         puVar6 == (undefined4 *)0x0)) {
        uVar13 = puVar2[0x55] & 0x3fffffff;
      }
      else {
        iVar3 = 0;
        puVar10 = (undefined4 *)puVar2[0x53];
        puVar11 = (undefined4 *)puVar2[0x54];
        puVar7 = puVar6;
        if (puVar10 != puVar11) {
          do {
            if (puVar7 != (undefined4 *)0x0) {
              uVar4 = puVar10[1];
              uVar14 = puVar10[2];
              *puVar7 = *puVar10;
              puVar7[1] = uVar4;
              puVar7[2] = uVar14;
            }
            puVar10 = puVar10 + 3;
            puVar7 = puVar7 + 3;
          } while (puVar10 != puVar11);
          iVar3 = (int)(puVar2[0x54] - puVar2[0x53]) / 0xc;
        }
        uVar8 = puVar2[0x53];
        if (uVar8 != 0) {
          uVar12 = puVar2[0x54];
          uVar1 = uVar8;
          if (uVar8 < uVar12) {
            iVar9 = 1;
            if (1 < (int)(uVar12 - uVar8) / 0xc + 1) {
              do {
                iVar9 = iVar9 + 1;
              } while (iVar9 < (int)(uVar12 - uVar8) / 0xc + 1);
            }
          }
          else {
            for (; uVar1 != uVar12; uVar1 = uVar1 + 0xc) {
            }
          }
          puVar2[0x54] = uVar8;
          (**(code **)(*(int *)*piVar5 + 0xc))((int *)*piVar5,puVar2[0x53]);
        }
        puVar2[0x53] = puVar6;
        puVar2[0x54] = puVar6 + iVar3 * 3;
        puVar2[0x55] = puVar2[0x55] & 0xc0000000 | 0x35;
      }
    }
    for (iVar3 = (int)(puVar2[0x54] - puVar2[0x53]) / 0xc; iVar3 < (int)uVar13; iVar3 = iVar3 + 1) {
      puVar6 = (undefined4 *)(puVar2[0x53] + iVar3 * 0xc);
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = 0xffffffff;
        puVar6[1] = 0xffffffff;
        puVar6[2] = 0xffffffff;
      }
    }
    iVar3 = puVar2[0x53] + uVar13 * 0xc;
  }
  else {
    do {
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < iVar3);
    iVar3 = puVar2[0x53] + 0x27c;
  }
  puVar2[0x54] = iVar3;
  fn_00301f50(puVar2 + 0x7c,0xf0);
  return puVar2;
}


