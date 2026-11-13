#include "0042ed0c_0042f848aa.h"



undefined4 * fn_0042ed0c(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  uint *puVar4;
  undefined2 *puVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint local_2c [2];
  
  puVar1 = (undefined4 *)fn_003492e4();
  *puVar1 = &DAT_0083bd88;
  *(undefined2 *)(puVar1 + 7) = 0;
  piVar7 = puVar1 + 8;
  *(undefined1 *)((int)puVar1 + 0x1e) = 0;
  uVar2 = fn_00100b58(&DAT_0042f0bc);
  puVar9 = &DAT_008f9ce8;
  puVar8 = &DAT_008f9cf4;
  if (uVar2 != 0) {
    puVar4 = local_2c + 1;
    if (0x20 < uVar2) {
      puVar4 = local_2c;
    }
    local_2c[0] = uVar2;
    local_2c[1] = 0x20;
    uVar10 = *puVar4;
    if (0xfffffff1 < uVar10) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar10,0xfffffff1);
    }
    if (uVar10 < uVar2) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar2,uVar10);
    }
    if (uVar10 != 0) {
      puVar9 = (undefined4 *)fn_00100fc6((uVar10 + 8) * 2,0);
      if (puVar9 != (undefined4 *)0x0) {
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9[2] = 0;
      }
      puVar9[2] = uVar2;
      puVar5 = (undefined2 *)((int)puVar9 + uVar2 * 2 + 0xc);
      *puVar9 = 0;
      puVar9[1] = uVar10;
      if (puVar5 != (undefined2 *)0x0) {
        *puVar5 = 0;
      }
    }
    puVar8 = puVar9 + 3;
  }
  *piVar7 = (int)puVar8;
  fn_00301a9c(puVar8,&DAT_0042f0bc,uVar2 << 1);
  *(undefined1 *)(puVar1 + 9) = 1;
  *(undefined1 *)((int)puVar1 + 0x25) = 1;
  *(undefined1 *)((int)puVar1 + 0x26) = 0;
  *(undefined1 *)((int)puVar1 + 0x27) = 0;
  *(undefined1 *)(puVar1 + 10) = 0;
  *(undefined2 *)((int)puVar1 + 0x2a) = 0;
  *(undefined2 *)(puVar1 + 0xb) = 0;
  *(undefined1 *)((int)puVar1 + 0x2e) = 0;
  *(undefined2 *)(puVar1 + 0xc) = 0;
  *(undefined2 *)((int)puVar1 + 0x32) = 0;
  *(undefined1 *)(puVar1 + 0xd) = 0;
  *(undefined2 *)((int)puVar1 + 0x36) = 0;
  *(undefined1 *)(puVar1 + 0xe) = 0;
  *(undefined2 *)((int)puVar1 + 0x3a) = 0;
  *(undefined1 *)(puVar1 + 0xf) = 0;
  *(undefined2 *)((int)puVar1 + 0x3e) = 0;
  *(undefined1 *)(puVar1 + 0x10) = 0;
  *(undefined2 *)((int)puVar1 + 0x42) = 0;
  *(undefined1 *)(puVar1 + 0x11) = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  fn_00158f6c((int)puVar1 + 0xbe,0xc2);
  fn_00301f50(puVar1 + 0x60,0x120);
  puVar1[0xa8] = 0;
  puVar1[0xa9] = 0;
  puVar1[0xaa] = 0;
  puVar1[0xab] = 0;
  puVar1[0xac] = 0;
  puVar1[0xad] = 0;
  puVar1[0xae] = 0;
  puVar1[0xaf] = 0;
  puVar1[0xb0] = 0;
  puVar1[0xb1] = 0;
  puVar1[0xb2] = 0;
  puVar1[0xb3] = 0;
  puVar1[0xb4] = 0;
  puVar1[0xb5] = 0;
  puVar1[0xb6] = 0;
  puVar1[0xb7] = 0;
  puVar1[0xb8] = 0;
  *(undefined1 *)(puVar1 + 0xb9) = 0;
  *(undefined1 *)((int)puVar1 + 0x2e5) = 0xf1;
  *(undefined1 *)((int)puVar1 + 0x32e) = 0;
  *(undefined1 *)((int)puVar1 + 0x32f) = 0;
  *(undefined1 *)(puVar1 + 0xcc) = 0;
  puVar1[0xcd] = 1;
  *(undefined1 *)(puVar1 + 0xce) = 0;
  *(undefined1 *)((int)puVar1 + 0x45a) = 0;
  *(undefined1 *)((int)puVar1 + 0x45b) = 0;
  puVar1[0x117] = 0;
  puVar1[0x118] = 0;
  *(undefined1 *)(puVar1 + 0x119) = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  puVar1[0x22] = 0;
  puVar1[0x23] = 0;
  puVar1[0x24] = 0;
  puVar1[0x25] = 0;
  puVar1[0x26] = 0;
  puVar1[0x27] = 0;
  puVar1[0x28] = 0;
  puVar1[0x29] = 0;
  puVar1[0x2a] = 0;
  fn_00158f6c((int)puVar1 + 0xbe,0xc2);
  fn_00301f50(puVar1 + 0x60,0x120);
  fn_00158f6c((int)puVar1 + 0x33a,0x120);
  puVar1[0xa8] = 0;
  puVar1[0xa9] = 0;
  puVar1[0xaa] = 0;
  puVar1[0xab] = 0;
  puVar1[0xac] = 0;
  puVar1[0xad] = 0;
  puVar1[0xae] = 0;
  puVar1[0xaf] = 0;
  puVar1[0xb0] = 0;
  puVar1[0xb1] = 0;
  puVar1[0xb2] = 0;
  puVar1[0xb3] = 0;
  puVar1[0xb4] = 0;
  fn_00301f50(puVar1 + 0x2b,0x12);
  puVar1[0xb5] = 0;
  puVar1[0xb6] = 0;
  puVar1[0xb7] = 0;
  puVar1[0xb8] = 0;
  fn_001003e0((int)puVar1 + 0x2e6,&DAT_0042f0bc);
  if (*(uint *)(*piVar7 + -8) < 10) {
    uVar10 = *(uint *)(*piVar7 + -4);
    uVar2 = 10;
    if (uVar10 < 0xb) {
      uVar2 = uVar10;
    }
    if (10 < uVar2) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar2,10);
    }
    puVar9 = (undefined4 *)fn_00100fc6(0x24,0);
    if (puVar9 != (undefined4 *)0x0) {
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = 0;
    }
    puVar9[2] = uVar2;
    puVar5 = (undefined2 *)((int)puVar9 + uVar2 * 2 + 0xc);
    *puVar9 = 0;
    puVar9[1] = 10;
    if (puVar5 != (undefined2 *)0x0) {
      *puVar5 = 0;
    }
    fn_00301a9c(puVar9 + 3,*piVar7,*(int *)(*piVar7 + -4) << 1);
    if ((undefined4 *)*piVar7 != &DAT_008f9cf4) {
      piVar3 = (undefined4 *)*piVar7 + -3;
      iVar6 = *piVar3;
      if ((iVar6 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar6 + -1, iVar6 == 0)))) {
        fn_001008c4(*piVar7 + -0xc,*(int *)(*piVar7 + -8) + 8,0);
      }
    }
    *piVar7 = (int)(puVar9 + 3);
  }
  return puVar1;
}


