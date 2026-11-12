#include "003bbc08_003bc0c0.h"



void fn_003bc0c0(int param_1)

{
  int iVar1;
  
  fn_0022cab4();
  fn_0031cab4(*(undefined4 *)(param_1 + 0x94),1);
  if (*(int *)(param_1 + 0x94) != 0) {
    iVar1 = *(int *)(param_1 + 0x98);
    fn_0031c1b8(*(int *)(param_1 + 0x94),*(undefined4 *)(iVar1 + 0x20),
                 *(undefined1 *)(iVar1 + 0x24),*(undefined1 *)(iVar1 + 0x25),
                 *(undefined1 *)(iVar1 + 0x26),(int)*(short *)(iVar1 + 0x1c),
                 (int)*(char *)(iVar1 + 0x27),(int)*(char *)(iVar1 + 0x28));
  }
  return;
}



void fn_003bbde0(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint *puVar5;
  int *piVar6;
  undefined2 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 *puVar11;
  uint local_2c;
  uint local_28;
  
  puVar9 = *(undefined4 **)(*(int *)(param_1 + 0x98) + 0x20);
  uVar8 = *(uint *)(*(int *)(param_1 + 0x9c) + -4);
  uVar1 = fn_00100b58(puVar9);
  uVar2 = *(uint *)(*(int *)(param_1 + 0x9c) + -4);
  if (uVar2 < uVar8) {
    uVar8 = uVar2;
  }
  iVar3 = fn_001006de(*(int *)(param_1 + 0x9c),puVar9);
  if (iVar3 != 0 || uVar8 != uVar1) {
    piVar10 = (int *)(param_1 + 0x9c);
    uVar8 = fn_00100b58(puVar9);
    puVar11 = &DAT_008f9ce8;
    puVar4 = (undefined4 *)*piVar10;
    if (uVar8 == 0) {
      piVar6 = puVar4 + -3;
      iVar3 = *piVar6;
      if (iVar3 == 0) {
        puVar4[-1] = 0;
        *(undefined2 *)*piVar10 = 0;
      }
      else {
        if ((puVar4 != &DAT_008f9cf4) &&
           ((iVar3 == -1 || ((piVar6 != &DAT_008f9ce8 && (*piVar6 = iVar3 + -1, iVar3 == 0)))))) {
          fn_001008c4(*piVar10 + -0xc,*(int *)(*piVar10 + -8) + 8,0);
        }
        *piVar10 = (int)&DAT_008f9cf4;
      }
    }
    else {
      uVar1 = puVar4[-1];
      if (((puVar4[-3] + 1 < 2) && (uVar8 <= (uint)puVar4[-2])) &&
         ((puVar9 == (undefined4 *)0x0 ||
          ((puVar9 < puVar4 || ((undefined4 *)((int)puVar4 + uVar1 * 2) <= puVar9)))))) {
        fn_001006ac(puVar4,puVar9,uVar8);
        *(uint *)(*piVar10 + -4) = uVar8;
        *(undefined2 *)(*piVar10 + uVar8 * 2) = 0;
      }
      else {
        local_2c = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
        if (local_2c < uVar1 + 0x80) {
          local_2c = uVar1 + 0x80;
        }
        local_28 = uVar8;
        puVar5 = &local_2c;
        if (local_2c < uVar8) {
          puVar5 = &local_28;
        }
        uVar1 = *puVar5;
        if (0xfffffff1 < uVar1) {
          fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar1,0xfffffff1);
        }
        if (uVar1 < uVar8) {
          fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar8,uVar1);
        }
        if (uVar1 != 0) {
          puVar11 = (undefined4 *)fn_00100fc6((uVar1 + 8) * 2,0);
          if (puVar11 != (undefined4 *)0x0) {
            *puVar11 = 0;
            puVar11[1] = 0;
            puVar11[2] = 0;
          }
          puVar7 = (undefined2 *)((int)puVar11 + uVar8 * 2 + 0xc);
          *puVar11 = 0;
          puVar11[1] = uVar1;
          puVar11[2] = uVar8;
          if (puVar7 != (undefined2 *)0x0) {
            *puVar7 = 0;
          }
        }
        fn_00301a9c(puVar11 + 3,puVar9,uVar8 << 1);
        if ((undefined4 *)*piVar10 != &DAT_008f9cf4) {
          piVar6 = (undefined4 *)*piVar10 + -3;
          iVar3 = *piVar6;
          if ((iVar3 == -1) || ((piVar6 != &DAT_008f9ce8 && (*piVar6 = iVar3 + -1, iVar3 == 0)))) {
            fn_001008c4(*piVar10 + -0xc,*(int *)(*piVar10 + -8) + 8,0);
          }
        }
        *piVar10 = (int)(puVar11 + 3);
      }
    }
  }
  iVar3 = *(int *)(param_1 + 0x98);
  if (*(char *)(param_1 + 0xa0) != *(char *)(iVar3 + 0x24)) {
    *(char *)(param_1 + 0xa0) = *(char *)(iVar3 + 0x24);
  }
  if (*(char *)(param_1 + 0xa1) != *(char *)(iVar3 + 0x25)) {
    *(char *)(param_1 + 0xa1) = *(char *)(iVar3 + 0x25);
  }
  if (*(char *)(param_1 + 0xa4) != *(char *)(iVar3 + 0x26)) {
    *(char *)(param_1 + 0xa4) = *(char *)(iVar3 + 0x26);
  }
  if (*(char *)(param_1 + 0xa5) != *(char *)(iVar3 + 0x27)) {
    *(char *)(param_1 + 0xa5) = *(char *)(iVar3 + 0x27);
  }
  if (*(char *)(param_1 + 0xa6) != *(char *)(iVar3 + 0x330)) {
    *(char *)(param_1 + 0xa6) = *(char *)(iVar3 + 0x330);
  }
  return;
}



void fn_003bbdc0(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint *puVar5;
  int *piVar6;
  undefined2 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 *puVar11;
  uint uStack_2c;
  uint auStack_28 [2];
  
  fn_0022cf0c();
  fn_003bbc08(param_1);
  puVar9 = *(undefined4 **)(*(int *)(param_1 + 0x98) + 0x20);
  uVar8 = *(uint *)(*(int *)(param_1 + 0x9c) + -4);
  uVar1 = fn_00100b58(puVar9);
  uVar2 = *(uint *)(*(int *)(param_1 + 0x9c) + -4);
  if (uVar2 < uVar8) {
    uVar8 = uVar2;
  }
  iVar3 = fn_001006de(*(int *)(param_1 + 0x9c),puVar9);
  if (iVar3 != 0 || uVar8 != uVar1) {
    piVar10 = (int *)(param_1 + 0x9c);
    uVar8 = fn_00100b58(puVar9);
    puVar11 = &DAT_008f9ce8;
    puVar4 = (undefined4 *)*piVar10;
    if (uVar8 == 0) {
      piVar6 = puVar4 + -3;
      iVar3 = *piVar6;
      if (iVar3 == 0) {
        puVar4[-1] = 0;
        *(undefined2 *)*piVar10 = 0;
      }
      else {
        if ((puVar4 != &DAT_008f9cf4) &&
           ((iVar3 == -1 || ((piVar6 != &DAT_008f9ce8 && (*piVar6 = iVar3 + -1, iVar3 == 0)))))) {
          fn_001008c4(*piVar10 + -0xc,*(int *)(*piVar10 + -8) + 8,0);
        }
        *piVar10 = (int)&DAT_008f9cf4;
      }
    }
    else {
      uVar1 = puVar4[-1];
      if (((puVar4[-3] + 1 < 2) && (uVar8 <= (uint)puVar4[-2])) &&
         ((puVar9 == (undefined4 *)0x0 ||
          ((puVar9 < puVar4 || ((undefined4 *)((int)puVar4 + uVar1 * 2) <= puVar9)))))) {
        fn_001006ac(puVar4,puVar9,uVar8);
        *(uint *)(*piVar10 + -4) = uVar8;
        *(undefined2 *)(*piVar10 + uVar8 * 2) = 0;
      }
      else {
        uStack_2c = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
        if (uStack_2c < uVar1 + 0x80) {
          uStack_2c = uVar1 + 0x80;
        }
        auStack_28[0] = uVar8;
        puVar5 = &uStack_2c;
        if (uStack_2c < uVar8) {
          puVar5 = auStack_28;
        }
        uVar1 = *puVar5;
        if (0xfffffff1 < uVar1) {
          fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar1,0xfffffff1);
        }
        if (uVar1 < uVar8) {
          fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar8,uVar1);
        }
        if (uVar1 != 0) {
          puVar11 = (undefined4 *)fn_00100fc6((uVar1 + 8) * 2,0);
          if (puVar11 != (undefined4 *)0x0) {
            *puVar11 = 0;
            puVar11[1] = 0;
            puVar11[2] = 0;
          }
          puVar7 = (undefined2 *)((int)puVar11 + uVar8 * 2 + 0xc);
          *puVar11 = 0;
          puVar11[1] = uVar1;
          puVar11[2] = uVar8;
          if (puVar7 != (undefined2 *)0x0) {
            *puVar7 = 0;
          }
        }
        fn_00301a9c(puVar11 + 3,puVar9,uVar8 << 1);
        if ((undefined4 *)*piVar10 != &DAT_008f9cf4) {
          piVar6 = (undefined4 *)*piVar10 + -3;
          iVar3 = *piVar6;
          if ((iVar3 == -1) || ((piVar6 != &DAT_008f9ce8 && (*piVar6 = iVar3 + -1, iVar3 == 0)))) {
            fn_001008c4(*piVar10 + -0xc,*(int *)(*piVar10 + -8) + 8,0);
          }
        }
        *piVar10 = (int)(puVar11 + 3);
      }
    }
  }
  iVar3 = *(int *)(param_1 + 0x98);
  if (*(char *)(param_1 + 0xa0) != *(char *)(iVar3 + 0x24)) {
    *(char *)(param_1 + 0xa0) = *(char *)(iVar3 + 0x24);
  }
  if (*(char *)(param_1 + 0xa1) != *(char *)(iVar3 + 0x25)) {
    *(char *)(param_1 + 0xa1) = *(char *)(iVar3 + 0x25);
  }
  if (*(char *)(param_1 + 0xa4) != *(char *)(iVar3 + 0x26)) {
    *(char *)(param_1 + 0xa4) = *(char *)(iVar3 + 0x26);
  }
  if (*(char *)(param_1 + 0xa5) != *(char *)(iVar3 + 0x27)) {
    *(char *)(param_1 + 0xa5) = *(char *)(iVar3 + 0x27);
  }
  if (*(char *)(param_1 + 0xa6) != *(char *)(iVar3 + 0x330)) {
    *(char *)(param_1 + 0xa6) = *(char *)(iVar3 + 0x330);
  }
  return;
}



void fn_003bbc08(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int in_r12;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x98) + 0x20);
  bVar8 = *(char *)(param_1 + 0xa6) == *(char *)(*(int *)(param_1 + 0x98) + 0x330);
  uVar7 = *(uint *)(*(int *)(param_1 + 0x9c) + -4);
  uVar3 = fn_00100b58();
  uVar4 = *(uint *)(*(int *)(param_1 + 0x9c) + -4);
  if (uVar4 < uVar7) {
    uVar7 = uVar4;
  }
  if (uVar7 < uVar3) {
    uVar4 = uVar7;
  }
  else {
    uVar4 = uVar3;
  }
  iVar5 = fn_001006de(*(int *)(param_1 + 0x9c),uVar2);
  if (iVar5 == 0) {
    if (uVar7 == uVar3) {
      iVar5 = 0;
    }
    if (uVar7 >= uVar3 && uVar7 != uVar3) {
      iVar5 = 1;
    }
    if (uVar7 < uVar3) {
      iVar5 = -1;
    }
  }
  bVar9 = iVar5 == 0 && bVar8;
  if (iVar5 != 0 || !bVar8) {
    uVar4 = *(uint *)(param_1 + 0x94);
    bVar9 = uVar4 == 0;
  }
  if (!bVar9) {
    fn_0031c35c(uVar4,*(undefined4 *)(*(int *)(param_1 + 0x98) + 0x20));
  }
  iVar5 = *(int *)(param_1 + 0x98);
  uVar7 = (uint)*(byte *)(param_1 + 0xa0);
  uVar3 = (uint)*(byte *)(iVar5 + 0x26);
  bVar9 = uVar7 == *(byte *)(iVar5 + 0x24);
  if (bVar9) {
    uVar7 = (uint)*(byte *)(param_1 + 0xa4);
  }
  bVar10 = (bVar9 && uVar7 == uVar3) && bVar8;
  if ((!bVar9 || uVar7 != uVar3) || !bVar8) {
    in_r12 = *(int *)(param_1 + 0x94);
    bVar10 = in_r12 == 0;
  }
  if (!bVar10) {
    uVar7 = (uint)*(byte *)(iVar5 + 0x330);
    if (uVar7 == 0) {
      uVar7 = (uint)*(char *)(iVar5 + 0x28);
      fn_0031c430(in_r12);
    }
    else {
      fn_0031c758(in_r12);
    }
  }
  iVar5 = *(int *)(param_1 + 0x98);
  uVar4 = (uint)*(byte *)(param_1 + 0xa1);
  bVar9 = uVar4 == *(byte *)(iVar5 + 0x25);
  if (bVar9) {
    uVar4 = (uint)*(byte *)(param_1 + 0xa4);
  }
  bVar10 = (bVar9 && uVar4 == uVar3) && bVar8;
  if ((!bVar9 || uVar4 != uVar3) || !bVar8) {
    uVar7 = *(uint *)(param_1 + 0x94);
    bVar10 = uVar7 == 0;
  }
  if (!bVar10) {
    if (*(char *)(iVar5 + 0x330) == '\0') {
      fn_0031c384(uVar7,(uint)*(byte *)(iVar5 + 0x25),*(undefined1 *)(iVar5 + 0x26));
    }
    else {
      fn_0031c384(uVar7,0);
    }
  }
  iVar5 = *(int *)(param_1 + 0x98);
  iVar6 = (int)*(short *)(iVar5 + 0x1c);
  bVar10 = *(short *)(param_1 + 0xa2) == iVar6;
  bVar9 = bVar10 && bVar8;
  if (!bVar10 || !bVar8) {
    in_r12 = *(int *)(param_1 + 0x94);
    bVar9 = in_r12 == 0;
  }
  if (!bVar9) {
    fn_0031c5b8(in_r12,iVar6,(int)*(char *)(iVar5 + 0x32f),(int)*(char *)(iVar5 + 0x338));
  }
  bVar1 = *(byte *)(*(int *)(param_1 + 0x98) + 0x27);
  iVar5 = (int)*(char *)(param_1 + 0xa5);
  bVar10 = iVar5 == (char)bVar1;
  bVar9 = bVar10 && bVar8;
  if (!bVar10 || !bVar8) {
    iVar5 = *(int *)(param_1 + 0x94);
    bVar9 = iVar5 == 0;
  }
  if (bVar9) {
    return;
  }
  iVar5 = fn_00688920(*(undefined4 *)(iVar5 + 8),(char *)&DAT_0031c424);
  *(byte *)(iVar5 + 0x44) = *(byte *)(iVar5 + 0x44) & 0xfe | bVar1;
  return;
}


