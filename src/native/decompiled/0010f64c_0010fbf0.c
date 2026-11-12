#include "0010f64c_0010fbf0.h"



undefined4 fn_0010fbf0(int param_1,int *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar6;
  undefined4 *puVar5;
  uint uVar7;
  undefined4 *puVar8;
  
  puVar8 = *(undefined4 **)(param_1 + 4);
  while( true ) {
    if (*(undefined4 **)(param_1 + 8) == puVar8) {
      return 0;
    }
    piVar4 = (int *)*puVar8;
    if (piVar4 == param_2) break;
    puVar8 = puVar8 + 1;
  }
  (**(code **)(*piVar4 + 0x14))(piVar4);
  puVar2 = *(undefined4 **)(param_1 + 8);
  if (*(undefined4 **)(param_1 + 4) != puVar2) {
    puVar5 = puVar8 + 1;
    if (puVar5 != puVar2) {
      if (puVar5 < puVar2) {
        uVar1 = (int)puVar2 - (int)puVar5;
        if (0 < (int)uVar1) {
          uVar3 = (uVar1 & 7) >> 2;
          if (uVar3 != 0) {
            *puVar8 = *puVar5;
          }
          uVar7 = (uint)(uVar3 != 0);
          for (; (int)uVar3 < (int)uVar1 >> 2; uVar3 = uVar3 + 2) {
            puVar8[uVar7] = puVar5[uVar7];
            puVar8[uVar7 + 1] = puVar5[uVar7 + 1];
            uVar7 = uVar7 + 2;
          }
        }
      }
      else {
        do {
          puVar6 = puVar5 + 1;
          *puVar8 = *puVar5;
          puVar5 = puVar6;
          puVar8 = puVar8 + 1;
        } while (puVar6 != puVar2);
      }
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -4;
  }
  return 1;
}



void fn_0010fb58(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  if (DAT_0089a79d != '\0') {
    iVar1 = fn_0014e0a8(&DAT_008e36c0,param_1,param_2 + 0xfffU & 0xfffff000,0);
    if (iVar1 == 0) {
      fn_0015e294(0xd8601837);
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



undefined4 fn_0010faac(int param_1)

{
  int iVar1;
  
  if (param_1 == 0x20000) {
    iVar1 = fn_0013e068();
    if (iVar1 != 0) {
      return 0x180000;
    }
  }
  else {
    if (param_1 != 0x30000) {
      return 0;
    }
    iVar1 = fn_0013e068(0x30000);
    if (iVar1 != 0) {
      return 0x280000;
    }
  }
  return 0x300000;
}



void fn_0010fa70(int param_1)

{
  if (DAT_008e3104 != 0) {
    if (param_1 == -1) {
      *(undefined1 *)(DAT_008e3104 + 0x3c) = 1;
    }
    else {
      *(undefined1 *)(*(int *)(DAT_008e3104 + 0x18) + param_1 * 0x1c + -0x1b) = 1;
    }
  }
  return;
}



void fn_0010fa38(int param_1)

{
  int iVar1;
  
  for (iVar1 = **(int **)(param_1 + 4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
  }
  for (iVar1 = (*(int **)(param_1 + 4))[2]; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x0010f854) */

undefined4 * fn_0010f64c(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  uint local_28 [2];
  
  puVar4 = local_28;
  *param_1 = &DAT_0085139c;
  iVar1 = fn_00145b00(0x24,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_001131dc();
  }
  param_1[1] = uVar2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  iVar1 = fn_00145b00(0x40,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_00111db8();
  }
  param_1[7] = uVar2;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0xffffffff;
  param_1[0x19] = 0xffffffff;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1b] = 0xffffffff;
  param_1[0x1c] = 0xffffffff;
  param_1[0x1d] = 0xffffffff;
  param_1[0x1e] = 0xffffffff;
  param_1[0x20] = 0xffffffff;
  param_1[0x21] = 0xffffffff;
  param_1[0x22] = 0xffffffff;
  param_1[0x23] = 0xffffffff;
  param_1[0x25] = 0;
  param_1[0x24] = 0xffffffff;
  param_1[0x26] = 0xffffffff;
  param_1[0x27] = 0xffffffff;
  param_1[0x28] = 0xffffffff;
  param_1[0x29] = &DAT_0085aa04;
  fn_0011a24c(param_1 + 0x2a);
  fn_0011a24c(param_1 + 0x38);
  fn_0011a24c(param_1 + 0x46);
  param_1[0x54] = &DAT_0085aa14;
  fn_0011a300(param_1 + 0x55);
  fn_0011a300(param_1 + 0x57);
  fn_0011a300(param_1 + 0x59);
  *(undefined1 *)(param_1 + 0x5b) = 0xff;
  *(undefined1 *)((int)param_1 + 0x16d) = 0xff;
  *(undefined1 *)((int)param_1 + 0x16e) = 0xff;
  *(undefined1 *)((int)param_1 + 0x16f) = 0;
  *(undefined1 *)(param_1 + 0x5c) = 0xff;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0xffffffff;
  param_1[99] = 0;
  param_1[0x62] = 0xffffffff;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  fn_0011a24c(param_1 + 0x78);
  *(undefined1 *)(param_1 + 0x86) = 0;
  *(undefined1 *)((int)param_1 + 0x219) = 0;
  *(undefined1 *)((int)param_1 + 0x21a) = 0;
  *(undefined1 *)((int)param_1 + 0x21b) = 0;
  param_1[0x87] = 0xffffffff;
  param_1[0x89] = 0;
  param_1[0x88] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x8a) = 0;
  *(undefined1 *)((int)param_1 + 0x229) = 0;
  *(undefined1 *)((int)param_1 + 0x22a) = 0xff;
  iVar1 = fn_00145b00(0x40,&DAT_00812c8c);
  piVar3 = (int *)0x0;
  if (iVar1 != 0) {
    piVar3 = (int *)fn_00111db8();
  }
  piVar8 = (int *)param_1[7];
  if (piVar8 != piVar3) {
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 4))(piVar8);
    }
    param_1[7] = piVar3;
  }
  fn_00110f14(param_1[7]);
  puVar13 = param_1 + 99;
  local_28[1] = 8;
  local_28[1] = 8;
  uVar9 = param_1[0x65] - *puVar13;
  iVar1 = (int)((longlong)(int)uVar9 * -0x6db6db6d + ((ulonglong)uVar9 << 0x20) >> 0x20);
  if ((uint)((iVar1 >> 5) - (iVar1 >> 0x1f)) < 8) {
    uVar9 = param_1[100] - *puVar13;
    iVar1 = (int)((longlong)(int)uVar9 * -0x6db6db6d + ((ulonglong)uVar9 << 0x20) >> 0x20);
    uVar9 = (iVar1 >> 5) - (iVar1 >> 0x1f);
    local_28[0] = uVar9 + (uVar9 >> 1) + (uVar9 >> 3);
    if (local_28[0] < uVar9 + 0x20) {
      local_28[0] = uVar9 + 0x20;
    }
    if (local_28[0] < 9) {
      puVar4 = local_28 + 1;
    }
    uVar9 = *puVar4;
    puVar5 = (undefined4 *)fn_00100fc6(uVar9 * 0x38,0);
    puVar12 = (undefined4 *)param_1[100];
    puVar6 = puVar5;
    for (puVar10 = (undefined4 *)*puVar13; puVar10 != puVar12; puVar10 = puVar10 + 0xe) {
      if (puVar6 != (undefined4 *)0x0) {
        uVar2 = puVar10[1];
        uVar14 = puVar10[2];
        uVar15 = puVar10[3];
        uVar16 = puVar10[4];
        uVar17 = puVar10[5];
        uVar18 = puVar10[6];
        uVar19 = puVar10[7];
        *puVar6 = *puVar10;
        puVar6[1] = uVar2;
        puVar6[2] = uVar14;
        puVar6[3] = uVar15;
        puVar6[4] = uVar16;
        puVar6[5] = uVar17;
        puVar6[6] = uVar18;
        puVar6[7] = uVar19;
        uVar2 = puVar10[9];
        uVar14 = puVar10[10];
        uVar15 = puVar10[0xb];
        uVar16 = puVar10[0xc];
        uVar17 = puVar10[0xd];
        puVar6[8] = puVar10[8];
        puVar6[9] = uVar2;
        puVar6[10] = uVar14;
        puVar6[0xb] = uVar15;
        puVar6[0xc] = uVar16;
        puVar6[0xd] = uVar17;
      }
      puVar6 = puVar6 + 0xe;
    }
    uVar7 = *puVar13;
    uVar11 = uVar7;
    if ((uint)param_1[100] <= uVar7) {
      for (; uVar11 != param_1[100]; uVar11 = uVar11 + 0x38) {
      }
    }
    iVar1 = (int)((longlong)(int)(param_1[0x65] - uVar7) * -0x6db6db6d +
                  ((ulonglong)(param_1[0x65] - uVar7) << 0x20) >> 0x20);
    fn_001008c4(uVar7,(iVar1 >> 5) - (iVar1 >> 0x1f),0);
    uVar11 = *puVar13;
    *puVar13 = (uint)puVar5;
    iVar1 = (int)((longlong)(int)(param_1[100] - uVar11) * -0x6db6db6d +
                  ((ulonglong)(param_1[100] - uVar11) << 0x20) >> 0x20);
    param_1[100] = puVar5 + ((iVar1 >> 5) - (iVar1 >> 0x1f)) * 0xe;
    param_1[0x65] = puVar5 + uVar9 * 0xe;
  }
  fn_0011c034(param_1 + 99);
  fn_00301f50(param_1 + 0x67,0xd);
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  return param_1;
}


