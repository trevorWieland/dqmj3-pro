#include "002a77fc_002a8450.h"



void fn_002a8450(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)(param_1 + 4);
  if (puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar1 == &DAT_00891a10) goto LAB_002a8494;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_002a8494:
  switch(*(undefined1 *)(puVar3 + 0xb)) {
  case 0:
    *(undefined4 *)(param_1 + 0x48) = 0xd4;
    if (**(int **)(DAT_008977e0 + 0x40) != 0) {
      fn_001c7db8((*(int **)(DAT_008977e0 + 0x40))[4],1);
    }
    fn_006f7a84(DAT_008977e0);
    fn_001e5690();
    goto code_r0x002a8590;
  case 1:
    uVar2 = 0xd6;
    break;
  case 2:
    uVar2 = 0x4f;
    break;
  case 3:
    uVar2 = 0xd9;
    break;
  case 4:
    uVar2 = 0x51;
    break;
  case 5:
    uVar2 = 0xdf;
    break;
  case 6:
    uVar2 = 0xdb;
    break;
  case 7:
    uVar2 = 0x69;
    break;
  case 8:
    uVar2 = 0xe1;
    break;
  case 9:
    fn_0028f54c(1);
    uVar2 = 0x9f;
    break;
  default:
    goto code_r0x002a8590;
  case 0xb:
    uVar2 = 0x59;
    break;
  case 0xc:
    *(undefined4 *)(param_1 + 0x48) = 0xe5;
    goto code_r0x002a8590;
  }
  *(undefined4 *)(param_1 + 0x48) = uVar2;
code_r0x002a8590:
  fn_002503cc();
  return;
}



void fn_002a77fc(int param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint uVar14;
  undefined4 *puVar15;
  uint *puVar16;
  uint uVar17;
  int unaff_r8;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uStack_118;
  undefined4 uStack_114;
  uint uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  uint local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 local_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  int *local_a4;
  undefined1 auStack_a0 [72];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [44];
  
  pcVar1 = (char *)fn_006afe90(*(undefined4 *)(DAT_008977e0 + 0x1c),
                                *(undefined4 *)(DAT_008977e0 + 0xa8));
  uVar2 = fn_006f7a9c(DAT_008977e0);
  uVar3 = fn_00278600(uVar2,(int)*pcVar1);
  iVar4 = fn_00279bbc(uVar2,uVar3);
  if (iVar4 != 0) {
    uVar5 = fn_006b7664(uVar2,uVar3);
    fn_00118624(auStack_58,uVar5);
    fn_00102908(auStack_50,0x10,(char *)&DAT_002a7c08,pcVar1);
    iVar4 = fn_00176d74(auStack_58,auStack_50);
    if (iVar4 != 0) {
      iVar6 = fn_00145b00(8,&DAT_00812c8c);
      local_a4 = (int *)0x0;
      if (iVar6 != 0) {
        local_a4 = (int *)fn_00692eac();
      }
      local_a4[1] = iVar4;
      fn_00183718(&local_100,local_a4,&DAT_002a7c1c);
      uVar17 = 0;
      if (local_100 != 0) {
        unaff_r8 = -0x6db6db6d;
      }
      uStack_118 = uStack_fc;
      uStack_114 = uStack_f8;
      uStack_110 = local_f4;
      uStack_10c = uStack_f0;
      uStack_108 = uStack_ec;
      uStack_104 = uStack_e8;
      if (local_100 != 0) {
        do {
          fn_00176ec8(auStack_a0,&uStack_118,uVar17);
          fn_0017821c(&local_f4,auStack_a0,0x44);
          if ((local_f4 & 0xff) == 0x69) {
            uVar5 = fn_00102d78((int)&local_f4 + 2);
            puVar15 = *(undefined4 **)(param_1 + 0x80);
            puVar16 = (uint *)(param_1 + 0x7c);
            if (puVar15 == *(undefined4 **)(param_1 + 0x84)) {
              uVar10 = (int)*(undefined4 **)(param_1 + 0x84) - *puVar16;
              uVar14 = (int)puVar15 - *puVar16;
              iVar4 = (int)((longlong)(int)uVar10 * (longlong)unaff_r8 + ((ulonglong)uVar10 << 0x20)
                           >> 0x20);
              iVar6 = (int)((longlong)(int)uVar14 * (longlong)unaff_r8 + ((ulonglong)uVar14 << 0x20)
                           >> 0x20);
              if ((uint)((iVar6 >> 4) - (iVar6 >> 0x1f)) < (uint)((iVar4 >> 4) - (iVar4 >> 0x1f))) {
                *(undefined4 **)(param_1 + 0x80) = puVar15 + 7;
                if (puVar15 != (undefined4 *)0x0) {
                  *puVar15 = puVar15[-7];
                  puVar15[1] = puVar15[-6];
                  puVar15[2] = puVar15[-5];
                  puVar15[3] = puVar15[-4];
                  puVar15[4] = puVar15[-3];
                  puVar15[5] = puVar15[-2];
                  puVar15[6] = puVar15[-1];
                }
                puVar11 = puVar15 + -7;
                puVar8 = puVar15;
                if (puVar15 < puVar11) {
                  uVar10 = (int)puVar11 - (int)puVar15;
                  if (0 < (int)uVar10) {
                    iVar4 = (int)((longlong)(int)uVar10 * (longlong)unaff_r8 +
                                  ((ulonglong)uVar10 << 0x20) >> 0x20);
                    if (((iVar4 >> 4) - (iVar4 >> 0x1f) & 1U) != 0) {
                      puVar11 = puVar15 + -0xe;
                      puVar8 = puVar15 + -7;
                      *puVar8 = *puVar11;
                      puVar15[-6] = puVar15[-0xd];
                      puVar15[-5] = puVar15[-0xc];
                      puVar15[-4] = puVar15[-0xb];
                      puVar15[-3] = puVar15[-10];
                      puVar15[-2] = puVar15[-9];
                      puVar15[-1] = puVar15[-8];
                    }
                    iVar4 = (int)((longlong)(int)uVar10 * (longlong)unaff_r8 +
                                  ((ulonglong)uVar10 << 0x20) >> 0x20);
                    for (iVar4 = (iVar4 >> 4) - (iVar4 >> 0x1f) >> 1; iVar4 != 0; iVar4 = iVar4 + -1
                        ) {
                      uVar18 = puVar11[-6];
                      uVar20 = puVar11[-5];
                      uVar22 = puVar11[-4];
                      uVar24 = puVar11[-3];
                      uVar26 = puVar11[-2];
                      uVar28 = puVar11[-1];
                      puVar8[-7] = puVar11[-7];
                      puVar8[-6] = uVar18;
                      puVar8[-5] = uVar20;
                      puVar8[-4] = uVar22;
                      puVar8[-3] = uVar24;
                      puVar8[-2] = uVar26;
                      puVar8[-1] = uVar28;
                      uVar18 = puVar11[-0xd];
                      uVar20 = puVar11[-0xc];
                      uVar22 = puVar11[-0xb];
                      uVar24 = puVar11[-10];
                      uVar26 = puVar11[-9];
                      uVar28 = puVar11[-8];
                      puVar8[-0xe] = puVar11[-0xe];
                      puVar8[-0xd] = uVar18;
                      puVar8[-0xc] = uVar20;
                      puVar8[-0xb] = uVar22;
                      puVar8[-10] = uVar24;
                      puVar8[-9] = uVar26;
                      puVar8[-8] = uVar28;
                      puVar11 = puVar11 + -0xe;
                      puVar8 = puVar8 + -0xe;
                    }
                  }
                }
                else {
                  while (puVar15 != puVar11) {
                    uVar18 = puVar11[-6];
                    uVar20 = puVar11[-5];
                    uVar22 = puVar11[-4];
                    uVar24 = puVar11[-3];
                    uVar26 = puVar11[-2];
                    uVar28 = puVar11[-1];
                    puVar8[-7] = puVar11[-7];
                    puVar8[-6] = uVar18;
                    puVar8[-5] = uVar20;
                    puVar8[-4] = uVar22;
                    puVar8[-3] = uVar24;
                    puVar8[-2] = uVar26;
                    puVar8[-1] = uVar28;
                    puVar8 = puVar8 + -7;
                    puVar11 = puVar11 + -7;
                  }
                }
                *puVar15 = uVar5;
                puVar15[1] = local_d4;
                puVar15[2] = uStack_d0;
                puVar15[3] = uStack_cc;
                puVar15[4] = uStack_c8;
                puVar15[5] = uStack_c4;
                puVar15[6] = uStack_c0;
              }
              else {
                iVar4 = (int)((longlong)(int)uVar14 * (longlong)unaff_r8 +
                              ((ulonglong)uVar14 << 0x20) >> 0x20);
                uVar14 = (iVar4 >> 4) - (iVar4 >> 0x1f);
                uVar10 = uVar14 + (uVar14 >> 1) + (uVar14 >> 3);
                if (uVar10 < uVar14 + 0x20) {
                  uVar10 = uVar14 + 0x20;
                }
                uVar18 = local_d4;
                uVar20 = uStack_d0;
                uVar22 = uStack_cc;
                uVar24 = uStack_c8;
                uVar26 = uStack_c4;
                uVar28 = uStack_c0;
                puVar7 = (undefined4 *)fn_00100fc6(uVar10 * 0x1c,0);
                puVar8 = puVar7;
                for (puVar11 = (undefined4 *)*puVar16; puVar11 != puVar15; puVar11 = puVar11 + 7) {
                  if (puVar8 != (undefined4 *)0x0) {
                    uVar19 = puVar11[1];
                    uVar21 = puVar11[2];
                    uVar23 = puVar11[3];
                    uVar25 = puVar11[4];
                    uVar27 = puVar11[5];
                    uVar29 = puVar11[6];
                    *puVar8 = *puVar11;
                    puVar8[1] = uVar19;
                    puVar8[2] = uVar21;
                    puVar8[3] = uVar23;
                    puVar8[4] = uVar25;
                    puVar8[5] = uVar27;
                    puVar8[6] = uVar29;
                  }
                  puVar8 = puVar8 + 7;
                }
                iVar4 = (int)((longlong)(int)((int)puVar15 - *puVar16) * (longlong)unaff_r8 +
                              ((ulonglong)((int)puVar15 - *puVar16) << 0x20) >> 0x20);
                puVar11 = puVar7 + ((iVar4 >> 4) - (iVar4 >> 0x1f)) * 7;
                if (puVar11 != (undefined4 *)0x0) {
                  *puVar11 = uVar5;
                  puVar11[1] = uVar18;
                  puVar11[2] = uVar20;
                  puVar11[3] = uVar22;
                  puVar11[4] = uVar24;
                  puVar11[5] = uVar26;
                  puVar11[6] = uVar28;
                }
                puVar8 = *(undefined4 **)(param_1 + 0x80);
                iVar4 = (int)((longlong)(int)((int)puVar15 - *puVar16) * (longlong)unaff_r8 +
                              ((ulonglong)((int)puVar15 - *puVar16) << 0x20) >> 0x20);
                puVar11 = puVar7 + ((iVar4 >> 4) - (iVar4 >> 0x1f)) * 7;
                for (; puVar15 != puVar8; puVar15 = puVar15 + 7) {
                  puVar12 = puVar11 + 7;
                  if (puVar12 != (undefined4 *)0x0) {
                    uVar5 = puVar15[1];
                    uVar18 = puVar15[2];
                    uVar20 = puVar15[3];
                    uVar22 = puVar15[4];
                    uVar24 = puVar15[5];
                    uVar26 = puVar15[6];
                    *puVar12 = *puVar15;
                    puVar11[8] = uVar5;
                    puVar11[9] = uVar18;
                    puVar11[10] = uVar20;
                    puVar11[0xb] = uVar22;
                    puVar11[0xc] = uVar24;
                    puVar11[0xd] = uVar26;
                  }
                  puVar11 = puVar12;
                }
                uVar9 = *puVar16;
                uVar13 = *(uint *)(param_1 + 0x80);
                iVar4 = (int)((longlong)(int)(uVar13 - uVar9) * (longlong)unaff_r8 +
                              ((ulonglong)(uVar13 - uVar9) << 0x20) >> 0x20);
                uVar14 = uVar9;
                if (uVar13 <= uVar9) {
                  for (; uVar14 != uVar13; uVar14 = uVar14 + 0x1c) {
                  }
                }
                uVar14 = *(int *)(param_1 + 0x84) - uVar9;
                iVar6 = (int)((longlong)(int)uVar14 * (longlong)unaff_r8 +
                              ((ulonglong)uVar14 << 0x20) >> 0x20);
                fn_001008c4(uVar9,(iVar6 >> 4) - (iVar6 >> 0x1f),0);
                *puVar16 = (uint)puVar7;
                *(undefined4 **)(param_1 + 0x80) = puVar7 + ((iVar4 >> 4) - (iVar4 >> 0x1f)) * 7 + 7
                ;
                *(undefined4 **)(param_1 + 0x84) = puVar7 + uVar10 * 7;
              }
            }
            else {
              *(undefined4 **)(param_1 + 0x80) = puVar15 + 7;
              if (puVar15 != (undefined4 *)0x0) {
                *puVar15 = uVar5;
                puVar15[1] = local_d4;
                puVar15[2] = uStack_d0;
                puVar15[3] = uStack_cc;
                puVar15[4] = uStack_c8;
                puVar15[5] = uStack_c4;
                puVar15[6] = uStack_c0;
              }
            }
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 < local_100);
      }
      fn_00279ae4(uVar2,uVar3);
      if (local_a4 != (int *)0x0) {
        (**(code **)(*local_a4 + 4))();
      }
    }
    fn_005f5d3c(auStack_58);
  }
  return;
}


