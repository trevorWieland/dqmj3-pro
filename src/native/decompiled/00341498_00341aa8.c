#include "00341498_00341aa8.h"



undefined4 * fn_00341aa8(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  *param_1 = &PTR_FUN_00824f74;
  if (param_1[0x10] != 0) {
    fn_002fc040();
    fn_002feef8();
  }
  if (param_1[0xf] != 0) {
    fn_003423ac();
    fn_002feef8();
  }
  uVar4 = param_1[7];
  uVar5 = uVar4;
  if ((uint)param_1[8] < uVar4) {
    do {
      uVar5 = uVar5 + 0x1c;
    } while (uVar5 != param_1[8]);
  }
  iVar2 = (int)((longlong)(int)(param_1[9] - uVar4) * -0x6db6db6d +
                ((ulonglong)(param_1[9] - uVar4) << 0x20) >> 0x20);
  fn_001008c4(uVar4,(iVar2 >> 4) - (iVar2 >> 0x1f),0);
  iVar6 = param_1[5];
  for (iVar2 = param_1[4]; iVar2 != iVar6; iVar2 = iVar2 + 0x14) {
    iVar1 = *(int *)(iVar2 + 8);
    for (iVar3 = iVar1; iVar3 != *(int *)(iVar2 + 0xc); iVar3 = iVar3 + 0x20) {
    }
    fn_001008c4(iVar1,*(int *)(iVar2 + 0x10) - iVar1 >> 5,0);
  }
  iVar2 = param_1[4];
  fn_001008c4(iVar2,(param_1[6] - iVar2) / 0x14,0);
  uVar4 = param_1[1];
  uVar5 = uVar4;
  if ((uint)param_1[2] < uVar4) {
    do {
      uVar5 = uVar5 + 0x20;
    } while (uVar5 != param_1[2]);
  }
  fn_001008c4(uVar4,(int)(param_1[3] - uVar4) >> 5,0);
  return param_1;
}



void fn_00341a28(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0069c2c8();
  *puVar1 = &PTR_FUN_00824f74;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x14] = 0;
  *(undefined2 *)(puVar1 + 0x15) = 0;
  *(undefined1 *)((int)puVar1 + 0x56) = 0;
  return;
}



void fn_00341a14(int param_1)

{
  if (*(int **)(param_1 + 0x40) == (int *)0x0) {
    return;
  }
  *(undefined1 *)(**(int **)(param_1 + 0x40) + 4) = 1;
  return;
}



undefined4 * fn_0034194c(undefined4 *param_1,undefined4 *param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint local_18 [2];
  
  piVar7 = param_1 + 2;
  piVar8 = param_2 + 2;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *piVar7 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  local_18[0] = param_2[3] - *piVar8 >> 5;
  puVar1 = local_18;
  if (local_18[0] < 0x20) {
    puVar1 = local_18 + 1;
  }
  local_18[1] = 0x20;
  uVar9 = *puVar1;
  puVar2 = (undefined4 *)fn_00100fc6(uVar9 << 5,0);
  *piVar7 = (int)puVar2;
  puVar5 = (undefined4 *)param_2[3];
  for (puVar3 = (undefined4 *)*piVar8; puVar3 != puVar5; puVar3 = puVar3 + 8) {
    if (puVar2 != (undefined4 *)0x0) {
      uVar10 = puVar3[1];
      uVar11 = puVar3[2];
      uVar12 = puVar3[3];
      uVar13 = puVar3[4];
      uVar14 = puVar3[5];
      uVar15 = puVar3[6];
      uVar16 = puVar3[7];
      *puVar2 = *puVar3;
      puVar2[1] = uVar10;
      puVar2[2] = uVar11;
      puVar2[3] = uVar12;
      puVar2[4] = uVar13;
      puVar2[5] = uVar14;
      puVar2[6] = uVar15;
      puVar2[7] = uVar16;
    }
    puVar2 = puVar2 + 8;
  }
  iVar4 = *piVar8;
  iVar6 = param_2[3];
  param_1[4] = *piVar7 + uVar9 * 0x20;
  param_1[3] = (iVar6 - iVar4 & 0xffffffe0U) + *piVar7;
  return param_1;
}



undefined4 fn_0034184c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006f7a20(DAT_008977e0);
  if ((iVar1 == 0) && (DAT_00891fac != '\0')) {
    iVar2 = fn_00145b00(4,&DAT_00812c8c);
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = fn_002fc004();
    }
    iVar2 = *(int *)(param_1 + 0x40);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        fn_002fc040(iVar2);
        fn_002feef8();
      }
      *(int *)(param_1 + 0x40) = iVar1;
    }
    iVar2 = fn_00145b00(4,&DAT_00812c8c);
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = fn_003420d8();
    }
    iVar2 = *(int *)(param_1 + 0x3c);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        fn_003423ac(iVar2);
        fn_002feef8();
      }
      *(int *)(param_1 + 0x3c) = iVar1;
    }
    if (*(int *)(param_1 + 0x3c) != 0) {
      fn_00341c04(*(int *)(param_1 + 0x3c),0);
    }
  }
  return 1;
}



void fn_00341800(int param_1)

{
  if (*(int *)(param_1 + 0x3c) != 0) {
    fn_003423ac();
    fn_002feef8();
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    fn_002fc040();
    fn_002feef8();
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  return;
}



void fn_003415c0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  bool bVar8;
  float fVar9;
  float fVar11;
  ulonglong uVar10;
  
  if (DAT_00891fac != '\0') {
    bVar8 = *(int *)(param_1 + 0x3c) != 0;
    iVar1 = 0;
    if (bVar8) {
      iVar1 = *(int *)(param_1 + 0x40);
    }
    if (bVar8 && iVar1 != 0) {
      fn_002fbfe4();
      uVar2 = fn_006bd3f8(*(undefined4 *)(param_1 + 0x40));
      fn_00341dec(*(undefined4 *)(param_1 + 0x3c),uVar2,0,*(undefined4 *)(param_1 + 0x3c));
    }
    uVar3 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c);
    iVar1 = (int)((longlong)(int)uVar3 * -0x6db6db6d + ((ulonglong)uVar3 << 0x20) >> 0x20);
    if (iVar1 >> 4 != iVar1 >> 0x1f) {
      fn_006f7a84(DAT_008977e0);
      iVar1 = fn_006aab48();
      if (iVar1 != 0) {
        iVar1 = fn_006f7a84(DAT_008977e0);
        fn_006c17a4(param_1,*(undefined4 *)(iVar1 + 0x464));
        fVar9 = *(float *)(iVar1 + 0x474);
        uVar3 = *(uint *)(param_1 + 0x58);
        if (0.0 < *(float *)(iVar1 + 0x470)) {
          fVar9 = *(float *)(iVar1 + 0x470) + fVar9;
        }
        fVar11 = fVar9 + 1100.0;
        for (; uVar5 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c),
            iVar1 = (int)((longlong)(int)uVar5 * -0x6db6db6d + ((ulonglong)uVar5 << 0x20) >> 0x20),
            uVar3 < (uint)((iVar1 >> 4) - (iVar1 >> 0x1f)); uVar3 = uVar3 + 1) {
          pcVar6 = (char *)(*(int *)(param_1 + 0x1c) + uVar3 * 0x1c);
          if (fVar11 <= *(float *)(pcVar6 + 0x10)) break;
          uVar2 = fn_006f74f4(DAT_008977e0);
          piVar4 = (int *)fn_0035ed44(uVar2,(int)*pcVar6,(int)*(short *)(pcVar6 + 2));
          *(int **)(pcVar6 + 0x18) = piVar4;
          if (DAT_00891fb0 < *(float *)(pcVar6 + 0x14)) {
            DAT_00891fb0 = *(float *)(pcVar6 + 0x14);
          }
          if (pcVar6[1] == '\0') {
            (**(code **)(*piVar4 + 0xd0))(piVar4,pcVar6 + 4);
          }
          else {
            (**(code **)(*piVar4 + 0x10))(piVar4,pcVar6 + 4);
          }
          *(uint *)(param_1 + 0x58) = uVar3 + 1;
        }
        uVar3 = *(uint *)(param_1 + 0x5c);
        uVar10 = (ulonglong)(uint)(fVar9 - 200.0);
        while (((uVar5 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c),
                iVar1 = (int)((longlong)(int)uVar5 * -0x6db6db6d + ((ulonglong)uVar5 << 0x20) >>
                             0x20), uVar3 < (uint)((iVar1 >> 4) - (iVar1 >> 0x1f)) &&
                (*(int *)(param_1 + 0x5c) < *(int *)(param_1 + 0x58))) &&
               (iVar1 = *(int *)(param_1 + 0x1c) + uVar3 * 0x1c,
               *(float *)(iVar1 + 0x10) < (float)uVar10))) {
          iVar7 = *(int *)(iVar1 + 0x18);
          if ((iVar7 != 0) && (*(char *)(iVar7 + 0x178) == '\0')) {
            uVar2 = fn_006f7a70(DAT_008977e0);
            fn_00300334(uVar2,*(undefined4 *)(iVar7 + 0x174));
            *(undefined4 *)(iVar1 + 0x18) = 0;
          }
          iVar1 = uVar3 + 1;
          uVar3 = uVar3 + 1;
          *(int *)(param_1 + 0x5c) = iVar1;
        }
      }
    }
  }
  return;
}



void fn_0034156c(void)

{
  int iVar1;
  
  iVar1 = fn_006f7a84(DAT_008977e0);
  DAT_008c934c = *(undefined4 *)(iVar1 + 0x20);
  DAT_008c9350 = *(undefined4 *)(iVar1 + 0x24);
  DAT_008c9354 = *(undefined4 *)(iVar1 + 0x28);
  iVar1 = fn_006f7a84(DAT_008977e0);
  DAT_00891fbc = *(undefined4 *)(iVar1 + 0x30);
  return;
}



undefined4 fn_00341498(char *param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  iVar1 = fn_00147e6c(param_1,DAT_00891fb4,3);
  if ((iVar1 == 0) || (iVar1 = fn_00147e6c(param_1,DAT_00891fb8,3), iVar1 == 0)) {
    return 0;
  }
  uVar2 = (uint)*param_1;
  if (uVar2 == 0x6f) {
    if (param_1[1] == '_') {
      return 1;
    }
  }
  else if (uVar2 == 99) {
    if (param_1[1] == '_') {
      return 2;
    }
  }
  else if (uVar2 == 100) {
    if (param_1[1] == '_') {
      return 3;
    }
  }
  else if (uVar2 == 0x68) {
    if (param_1[1] == '_') {
      return 4;
    }
  }
  else {
    bVar3 = uVar2 == 0x66;
    if (bVar3) {
      uVar2 = (uint)(byte)param_1[1];
    }
    if (bVar3 && uVar2 == 0x5f) {
      return 5;
    }
  }
  return 0xffffffff;
}


