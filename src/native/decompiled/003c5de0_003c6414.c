#include "003c5de0_003c6414.h"



undefined4 * fn_003c6414(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  
  iVar1 = fn_00145b00(0x1cc,&DAT_00812c8c);
  if (iVar1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)fn_0068ab5c();
  *puVar2 = &DAT_008304a8;
  puVar2[0x19] = &DAT_00859300;
  *(undefined1 *)(puVar2 + 0x1a) = 0;
  *(undefined1 *)((int)puVar2 + 0x69) = 0;
  *(undefined1 *)((int)puVar2 + 0x6a) = 0;
  puVar2[0x1b] = 0;
  puVar2[0x1c] = 0;
  puVar2[0x1d] = *(undefined4 *)(param_1 + 8);
  puVar2[0x1e] = *(undefined4 *)(param_1 + 0xc);
  puVar2[0x1f] = *(undefined4 *)(param_1 + 0x14);
  puVar2[0x20] = 0xffffffff;
  puVar2[0x22] = 0xffffffff;
  puVar2[0x23] = 0xffffffff;
  puVar2[0x24] = 0xffffffff;
  piVar5 = *(int **)(param_1 + 0x18);
  if (piVar5 != (int *)0x0) {
    puVar3 = (undefined4 *)(**(code **)(*piVar5 + 0xc))(piVar5);
    do {
      if (puVar3 == &DAT_00896958) goto LAB_003c68c0;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  piVar5 = (int *)0x0;
LAB_003c68c0:
  puVar2[0x25] = piVar5;
  puVar2[0x26] = *(undefined4 *)(param_1 + 0x20);
  puVar2[0x27] = 0xc2480000;
  puVar2[0x28] = 0x41a00000;
  puVar2[0x29] = 0x43d70000;
  puVar2[0x2a] = 0xc2480000;
  puVar2[0x2b] = 0x41a00000;
  puVar2[0x2c] = 0x43af0000;
  puVar2[0x2d] = 0;
  puVar2[0x2e] = 0;
  puVar2[0x2f] = 0;
  puVar2[0x30] = 0;
  puVar2[0x31] = 0;
  puVar2[0x32] = 0;
  puVar2[0x3a] = 0;
  puVar2[0x3b] = 1;
  *(undefined1 *)(puVar2 + 0x3c) = 0;
  *(undefined1 *)(puVar2 + 0x40) = 0;
  puVar2[0x48] = 0;
  puVar2[0x49] = 1;
  *(undefined1 *)(puVar2 + 0x4a) = 0;
  *(undefined1 *)(puVar2 + 0x4e) = 0;
  puVar2[0x5c] = 0;
  puVar2[0x5d] = 1;
  *(undefined1 *)(puVar2 + 0x5e) = 0;
  *(undefined1 *)(puVar2 + 0x62) = 0;
  puVar2[99] = 0;
  puVar2[100] = 0;
  puVar2[0x65] = 0;
  puVar2[0x66] = 0;
  puVar2[0x67] = 0xffffffff;
  puVar2[0x68] = 0;
  puVar2[0x69] = 0;
  puVar2[0x6a] = 0;
  puVar2[0x6b] = 0;
  puVar2[0x6c] = 0;
  puVar2[0x6d] = 0;
  puVar2[0x6e] = 0;
  puVar2[0x6f] = 0;
  puVar2[0x70] = 0;
  puVar2[0x71] = *(undefined4 *)(DAT_00897820 + 0x48);
  iVar1 = fn_00145b00(0x28,&DAT_00812c8c);
  uVar4 = 0;
  if (iVar1 != 0) {
    uVar4 = fn_001cb644();
  }
  puVar2[0x72] = uVar4;
  return puVar2;
}



void fn_003c5f98(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  undefined4 *puVar13;
  int *piVar14;
  uint *puVar15;
  int iVar16;
  uint uVar17;
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [36];
  
  uVar1 = fn_001481c8(*(undefined4 *)(param_1 + 0x78),
                       L"rom:/data/Layout/passing/upper/passing_anime.arc",&DAT_003c62b4,1,1);
  *(undefined4 *)(param_1 + 0x80) = uVar1;
  uVar1 = fn_001480d0(*(undefined4 *)(param_1 + 0x78),uVar1,(char *)&DAT_003c62c0,&DAT_003c62bc,0,1
                       ,0);
  *(undefined4 *)(param_1 + 0x88) = uVar1;
  uVar1 = fn_001853ec(*(undefined4 *)(param_1 + 0x78),(char *)&DAT_003c62d4,uVar1);
  *(undefined4 *)(param_1 + 0x90) = uVar1;
  iVar2 = fn_00178f9c(*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x88));
  *(byte *)(*(int *)(iVar2 + 0x10) + 0x44) = *(byte *)(*(int *)(iVar2 + 0x10) + 0x44) & 0xfe;
  uVar1 = fn_001481c8(*(undefined4 *)(param_1 + 0x74),
                       L"rom:/data/Layout/passing/upper/passing_anime.arc",&DAT_003c62b4,1,1);
  *(undefined4 *)(param_1 + 0x84) = uVar1;
  uVar1 = fn_001480d0(*(undefined4 *)(param_1 + 0x74),uVar1,(char *)&DAT_003c62e0,&DAT_003c62bc,
                       0,1,0);
  *(undefined4 *)(param_1 + 0x8c) = uVar1;
  iVar2 = fn_00178f9c(*(undefined4 *)(param_1 + 0x74),uVar1);
  piVar14 = *(int **)(iVar2 + 0x10);
  uVar12 = 0;
  do {
    iVar2 = (**(code **)(*piVar14 + 0x2c))(piVar14,(&DAT_007c89b0)[uVar12],1);
    uVar12 = uVar12 + 1;
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe;
  } while (uVar12 < 8);
  fn_002a4648(*(undefined4 *)(param_1 + 0x7c),0xc740);
  fn_002a4648(*(undefined4 *)(param_1 + 0x7c),0xc741);
  fn_002a4648(*(undefined4 *)(param_1 + 0x7c),0xc742);
  iVar2 = fn_006be118(*(undefined4 *)(param_1 + 0x1a8));
  iVar16 = 0;
  if (0 < iVar2) {
    do {
      iVar3 = fn_00145b00(0x150,&DAT_00812c8c);
      if (iVar3 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = fn_002440dc();
      }
      iVar3 = fn_006be0f4(*(undefined4 *)(param_1 + 0x1a8),iVar16);
      iVar4 = fn_006be0f4(*(undefined4 *)(param_1 + 0x1a8),iVar16);
      if (*(char *)(iVar4 + 0x514) == -1) {
        iVar4 = 0;
      }
      else {
        iVar4 = iVar4 + *(char *)(iVar4 + 0x514) * 0xf0 + 0x154;
      }
      fn_00301a9c(auStack_48,&DAT_007ba154,0x1e);
      fn_0029432c(iVar3 + 4,auStack_48);
      if (iVar4 == 0) {
        fn_00243e8c(uVar1,*(undefined4 *)(param_1 + 0x98),(int)*(short *)(iVar3 + 0x120),auStack_48
                     ,iVar3 + 0x68);
      }
      else {
        fn_0020bbc4(auStack_50,iVar4);
        uVar5 = fn_006bfe90(auStack_4c);
        uVar6 = fn_006bfda8(auStack_4c);
        fn_00243f58(uVar1,*(undefined4 *)(param_1 + 0x98),(int)*(short *)(iVar3 + 0x120),uVar6,
                     uVar5,auStack_48,iVar3 + 0x68,iVar4 + 0x72);
      }
      fn_0024405c(uVar1,0);
      puVar13 = *(undefined4 **)(param_1 + 0x1b0);
      puVar15 = (uint *)(param_1 + 0x1ac);
      if (puVar13 == *(undefined4 **)(param_1 + 0x1b4)) {
        uVar12 = (int)((int)puVar13 - *puVar15) >> 2;
        if (uVar12 < (uint)((int)((int)*(undefined4 **)(param_1 + 0x1b4) - *puVar15) >> 2)) {
          *(undefined4 **)(param_1 + 0x1b0) = puVar13 + 1;
          if (puVar13 != (undefined4 *)0x0) {
            *puVar13 = puVar13[-1];
          }
          puVar9 = puVar13 + -1;
          puVar10 = puVar13;
          if (puVar13 < puVar9) {
            if (0 < (int)puVar9 - (int)puVar13) {
              iVar3 = (int)puVar9 - (int)puVar13 >> 2;
              iVar4 = 0;
              do {
                iVar3 = iVar3 + -1;
                puVar13[iVar4 + -1] = puVar9[iVar4 + -1];
                iVar4 = iVar4 + -1;
              } while (iVar3 != 0);
            }
          }
          else {
            while (puVar13 != puVar9) {
              puVar9 = puVar9 + -1;
              puVar10[-1] = *puVar9;
              puVar10 = puVar10 + -1;
            }
          }
          *puVar13 = uVar1;
        }
        else {
          uVar17 = uVar12 + (uVar12 >> 1) + (uVar12 >> 3);
          if (uVar17 < uVar12 + 0x20) {
            uVar17 = uVar12 + 0x20;
          }
          puVar7 = (undefined4 *)fn_00100fc6(uVar17 << 2,0);
          puVar10 = puVar7;
          for (puVar9 = (undefined4 *)*puVar15; puVar9 != puVar13; puVar9 = puVar9 + 1) {
            if (puVar10 != (undefined4 *)0x0) {
              *puVar10 = *puVar9;
            }
            puVar10 = puVar10 + 1;
          }
          puVar9 = (undefined4 *)(((int)puVar13 - *puVar15 & 0xfffffffc) + (int)puVar7);
          if (puVar9 != (undefined4 *)0x0) {
            *puVar9 = uVar1;
          }
          puVar10 = *(undefined4 **)(param_1 + 0x1b0);
          puVar9 = (undefined4 *)(((int)puVar13 - *puVar15 & 0xfffffffc) + (int)puVar7);
          for (; puVar13 != puVar10; puVar13 = puVar13 + 1) {
            puVar9 = puVar9 + 1;
            if (puVar9 != (undefined4 *)0x0) {
              *puVar9 = *puVar13;
            }
          }
          uVar8 = *puVar15;
          uVar11 = *(uint *)(param_1 + 0x1b0);
          uVar12 = uVar8;
          if (uVar11 < uVar8) {
            do {
              uVar12 = uVar12 + 4;
            } while (uVar12 != uVar11);
          }
          fn_001008c4(uVar8,(int)(*(int *)(param_1 + 0x1b4) - uVar8) >> 2,0);
          *(undefined4 **)(param_1 + 0x1b4) = puVar7 + uVar17;
          *(undefined4 **)(param_1 + 0x1b0) = puVar7 + ((int)(uVar11 - uVar8) >> 2) + 1;
          *puVar15 = (uint)puVar7;
        }
      }
      else {
        *(undefined4 **)(param_1 + 0x1b0) = puVar13 + 1;
        if (puVar13 != (undefined4 *)0x0) {
          *puVar13 = uVar1;
        }
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 < iVar2);
  }
  return;
}



void fn_003c5de0(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  uint in_fpscr;
  uint uVar7;
  float in_s0;
  float fVar8;
  float in_s1;
  float in_s2;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x1c4) + 4);
  if (*(int *)(param_1 + 0x1b8) <= iVar2) {
    iVar3 = fn_006be0f4(*(undefined4 *)(param_1 + 0x1a8),param_2);
    bVar6 = *(short *)(iVar3 + 0x120) == 0x1b;
    fn_00171634();
    fn_006be058(*(undefined4 *)(param_1 + 0x1c4),param_2,bVar6);
    fVar9 = in_s0;
    fVar10 = in_s1;
    fVar12 = in_s2;
    fn_006be030(*(undefined4 *)(param_1 + 0x1c4),param_2,bVar6);
    if (fVar9 < in_s0) {
      in_s0 = in_s0 - fVar9;
    }
    else {
      in_s0 = fVar9 - in_s0;
    }
    if (fVar10 < in_s1) {
      in_s1 = in_s1 - fVar10;
    }
    else {
      in_s1 = fVar10 - in_s1;
    }
    fVar10 = *(float *)(param_1 + 0x9c);
    fVar14 = 0.0;
    fVar9 = in_s2;
    if (fVar12 < in_s2) {
      fVar9 = in_s2 - fVar12;
    }
    uVar1 = in_fpscr & 0xfffffff | (uint)(fVar10 < 0.0) << 0x1f;
    uVar7 = uVar1 | (uint)NAN(fVar10) << 0x1c;
    if (in_s2 <= fVar12) {
      fVar9 = fVar12 - fVar9;
    }
    bVar4 = (byte)(uVar1 >> 0x1f);
    bVar5 = (byte)(uVar7 >> 0x1c) & 1;
    fVar12 = (float)VectorSignedToFloat(iVar2,(byte)(uVar7 >> 0x16) & 3);
    if (bVar4 == bVar5) {
      fVar10 = fVar10 - in_s0 / fVar12;
    }
    fVar13 = (float)VectorSignedToFloat(iVar2,(byte)(uVar7 >> 0x16) & 3);
    if (bVar4 != bVar5) {
      fVar10 = in_s0 / fVar12 + fVar10;
    }
    *(float *)(param_1 + 0x9c) = fVar10;
    fVar10 = (float)VectorSignedToFloat(iVar2,(byte)(uVar7 >> 0x16) & 3);
    fVar13 = fVar9 / fVar13;
    *(float *)(param_1 + 0xa0) = *(float *)(param_1 + 0xa0) - in_s1 / fVar10;
    fVar8 = *(float *)(param_1 + 0xa4) - fVar13;
    *(float *)(param_1 + 0xa4) = fVar8;
    fn_00171634();
    fn_006be0a4(*(undefined4 *)(param_1 + 0x1c4),param_2,bVar6);
    fVar10 = fVar13;
    fVar12 = fVar9;
    fVar11 = fVar8;
    fn_006be07c(*(undefined4 *)(param_1 + 0x1c4),param_2,bVar6);
    if (fVar11 < fVar8) {
      fVar8 = fVar8 - fVar11;
    }
    else {
      fVar8 = fVar11 - fVar8;
    }
    if (fVar10 < fVar13) {
      fVar13 = fVar13 - fVar10;
    }
    else {
      fVar13 = fVar10 - fVar13;
    }
    fVar11 = *(float *)(param_1 + 0xa8);
    fVar10 = fVar9;
    if (fVar12 < fVar9) {
      fVar10 = fVar9 - fVar12;
    }
    uVar1 = uVar7 & 0xfffffff | (uint)(fVar11 < fVar14) << 0x1f;
    if (fVar9 <= fVar12) {
      fVar10 = fVar12 - fVar10;
    }
    fVar9 = (float)VectorSignedToFloat(iVar2,(byte)(uVar1 >> 0x16) & 3);
    if (SUB41(uVar1 >> 0x1f,0) == (NAN(fVar11) || NAN(fVar14))) {
      fVar11 = fVar11 - fVar8 / fVar9;
    }
    else {
      fVar11 = fVar8 / fVar9 + fVar11;
    }
    *(float *)(param_1 + 0xa8) = fVar11;
    fVar12 = (float)VectorSignedToFloat(iVar2,(byte)(uVar1 >> 0x16) & 3);
    fVar9 = (float)VectorSignedToFloat(iVar2,(byte)(uVar1 >> 0x16) & 3);
    *(float *)(param_1 + 0xac) = *(float *)(param_1 + 0xac) - fVar13 / fVar12;
    *(float *)(param_1 + 0xb0) = *(float *)(param_1 + 0xb0) - fVar10 / fVar9;
  }
  return;
}


