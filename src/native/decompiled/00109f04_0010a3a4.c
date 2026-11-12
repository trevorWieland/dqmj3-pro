#include "00109f04_0010a3a4.h"



/* WARNING: Removing unreachable block (ram,0x0010a570) */
/* WARNING: Removing unreachable block (ram,0x0010a57c) */
/* WARNING: Removing unreachable block (ram,0x0010a548) */
/* WARNING: Removing unreachable block (ram,0x0010a54c) */
/* WARNING: Removing unreachable block (ram,0x0010a550) */
/* WARNING: Removing unreachable block (ram,0x0010a554) */
/* WARNING: Removing unreachable block (ram,0x0010a558) */
/* WARNING: Removing unreachable block (ram,0x0010a598) */
/* WARNING: Removing unreachable block (ram,0x0010a5a8) */
/* WARNING: Removing unreachable block (ram,0x0010a580) */
/* WARNING: Removing unreachable block (ram,0x0010a588) */
/* WARNING: Removing unreachable block (ram,0x0010a58c) */
/* WARNING: Removing unreachable block (ram,0x0010a590) */

undefined4 * fn_0010a3a4(undefined4 param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  undefined4 *puVar18;
  uint *puVar19;
  uint local_28;
  uint local_24;
  
  puVar2 = (undefined4 *)fn_001129d0(param_1,2);
  *puVar2 = &DAT_0081fe38;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  iVar3 = fn_00145b00(8,&DAT_00812c8c);
  uVar4 = 0;
  if (iVar3 != 0) {
    uVar4 = fn_001171ac();
  }
  puVar2[10] = uVar4;
  puVar19 = puVar2 + 7;
  puVar18 = (undefined4 *)puVar2[8];
  puVar5 = (undefined4 *)*puVar19;
  puVar13 = (undefined4 *)((int)puVar18 - (int)puVar5);
  uVar14 = (int)puVar13 >> 2;
  if (uVar14 < 2) {
    iVar3 = 2 - uVar14;
    if (iVar3 != 0) {
      uVar14 = iVar3 + uVar14;
      if ((uint)(puVar2[9] - (int)puVar5 >> 2) < uVar14) {
        local_28 = uVar14;
        uVar1 = (int)(puVar2[8] - *puVar19) >> 2;
        local_24 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
        if (local_24 < uVar1 + 0x20) {
          local_24 = uVar1 + 0x20;
        }
        puVar17 = &local_28;
        if (uVar14 < local_24) {
          puVar17 = &local_24;
        }
        uVar14 = *puVar17;
        puVar7 = (undefined4 *)fn_00100fc6(uVar14 << 2,0);
        puVar5 = puVar7;
        for (puVar13 = (undefined4 *)*puVar19; puVar13 != puVar18; puVar13 = puVar13 + 1) {
          if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = *puVar13;
          }
          puVar5 = puVar5 + 1;
        }
        puVar13 = (undefined4 *)(((int)puVar18 - *puVar19 & 0xfffffffc) + (int)puVar7);
        for (iVar15 = iVar3; iVar15 != 0; iVar15 = iVar15 + -1) {
          if (puVar13 != (undefined4 *)0x0) {
            *puVar13 = 0;
          }
          puVar13 = puVar13 + 1;
        }
        puVar5 = (undefined4 *)puVar2[8];
        puVar13 = puVar7 + iVar3 + ((int)((int)puVar18 - *puVar19) >> 2);
        for (; puVar18 != puVar5; puVar18 = puVar18 + 1) {
          if (puVar13 != (undefined4 *)0x0) {
            *puVar13 = *puVar18;
          }
          puVar13 = puVar13 + 1;
        }
        uVar8 = *puVar19;
        uVar16 = puVar2[8];
        iVar15 = uVar16 - uVar8;
        uVar1 = uVar8;
        if (uVar8 < uVar16) {
          if (0 < iVar15) {
            for (iVar9 = iVar15 >> 3; iVar9 != 0; iVar9 = iVar9 + -1) {
            }
          }
        }
        else {
          for (; uVar1 != uVar16; uVar1 = uVar1 + 4) {
          }
        }
        fn_001008c4(uVar8,(int)(puVar2[9] - uVar8) >> 2,0);
        puVar2[9] = puVar7 + uVar14;
        puVar2[8] = puVar7 + (iVar15 >> 2) + iVar3;
        *puVar19 = (uint)puVar7;
      }
      else {
        puVar13 = puVar18 + iVar3;
        puVar2[8] = puVar18 + iVar3;
        if (puVar13 < puVar18) {
          puVar6 = puVar18 + -iVar3;
          puVar7 = puVar18;
          for (puVar5 = puVar6; puVar5 != puVar18; puVar5 = puVar5 + 1) {
            if (puVar7 != (undefined4 *)0x0) {
              *puVar7 = *puVar5;
            }
            puVar7 = puVar7 + 1;
          }
          puVar5 = puVar18;
          if (puVar18 < puVar6) {
            iVar3 = (int)puVar6 - (int)puVar18;
            if (0 < iVar3) {
              if (iVar3 * 0x20000000 < 0) {
                puVar6 = puVar6 + -1;
                puVar5 = puVar18 + -1;
                *puVar5 = *puVar6;
              }
              for (iVar3 = iVar3 >> 3; iVar3 != 0; iVar3 = iVar3 + -1) {
                puVar5[-1] = puVar6[-1];
                puVar6 = puVar6 + -2;
                puVar5 = puVar5 + -2;
                *puVar5 = *puVar6;
              }
            }
          }
          else {
            while (puVar18 != puVar6) {
              puVar6 = puVar6 + -1;
              puVar5[-1] = *puVar6;
              puVar5 = puVar5 + -1;
            }
          }
          if (puVar18 < puVar13) {
            iVar3 = (int)puVar13 - (int)puVar18;
            if (0 < iVar3) {
              puVar13 = puVar18;
              if (iVar3 * 0x20000000 < 0) {
                puVar13 = puVar18 + 1;
                *puVar18 = 0;
              }
              for (iVar3 = iVar3 >> 3; iVar3 != 0; iVar3 = iVar3 + -1) {
                puVar18 = puVar13 + 1;
                *puVar13 = 0;
                puVar13 = puVar13 + 2;
                *puVar18 = 0;
              }
            }
          }
          else {
            for (; puVar18 != puVar13; puVar18 = puVar18 + 1) {
              *puVar18 = 0;
            }
          }
        }
        else {
          for (; iVar3 != 0; iVar3 = iVar3 + -1) {
            if (puVar18 != (undefined4 *)0x0) {
              *puVar18 = 0;
            }
            puVar18 = puVar18 + 1;
          }
        }
      }
    }
  }
  else {
    if (uVar14 != 2) {
      puVar13 = puVar5 + 2;
    }
    if (uVar14 != 2 && puVar5 != puVar18) {
      puVar5 = puVar13;
      if (puVar13 < puVar18) {
        if (0 < (int)puVar18 - (int)puVar13) {
          for (iVar3 = (int)puVar18 - (int)puVar13 >> 3; iVar3 != 0; iVar3 = iVar3 + -1) {
          }
        }
      }
      else {
        for (; puVar5 != puVar18; puVar5 = puVar5 + 1) {
        }
      }
      puVar2[8] = (int)puVar18 - ((int)puVar18 - (int)puVar13 & 0xfffffffcU);
    }
  }
  iVar3 = 0;
  do {
    if (*(int *)(puVar2[7] + iVar3 * 4) == 0) {
      uVar4 = fn_001287b0();
      uVar4 = fn_0011c184((&DAT_007d0610)[iVar3],uVar4,4,5);
      fn_0012a26c();
      uVar10 = fn_00117780();
      uVar11 = fn_0012a26c(uVar4);
      uVar12 = fn_00145ac0(uVar4);
      fn_00301a9c(uVar10,uVar12,uVar11);
      fn_0012d73c(uVar4);
      *(undefined4 *)(puVar2[7] + iVar3 * 4) = uVar10;
      fn_0014a614(puVar2,iVar3,uVar10);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 2);
  uVar14 = fn_001287b4();
  uVar4 = fn_001102fc();
  local_24 = 0x80;
  local_28 = uVar14;
  fn_0011716c(puVar2[10],uVar4,L"rom:/rom/shader/YatShader.shbin",5);
  fn_00117114(puVar2[10]);
  return puVar2;
}



undefined4 * fn_0010a310(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *param_1 = &DAT_0081fd58;
  param_1[1] = &DAT_00859280;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 9) = 0;
  *(undefined1 *)((int)param_1 + 10) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  iVar1 = fn_00145b00(0x14,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_00113928();
  }
  param_1[6] = uVar2;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)((int)param_1 + 0x1d) = 0;
  iVar1 = fn_00145b00(0xc,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_00113a08();
  }
  param_1[8] = uVar2;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)((int)param_1 + 0x29) = 0;
  param_1[0xb] = 0;
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x0010a108) */
/* WARNING: Removing unreachable block (ram,0x0010a11c) */
/* WARNING: Removing unreachable block (ram,0x0010a0dc) */
/* WARNING: Removing unreachable block (ram,0x0010a0e4) */
/* WARNING: Removing unreachable block (ram,0x0010a0ec) */
/* WARNING: Removing unreachable block (ram,0x0010a140) */
/* WARNING: Removing unreachable block (ram,0x0010a160) */
/* WARNING: Removing unreachable block (ram,0x0010a2a8) */
/* WARNING: Removing unreachable block (ram,0x0010a120) */
/* WARNING: Removing unreachable block (ram,0x0010a128) */
/* WARNING: Removing unreachable block (ram,0x0010a130) */
/* WARNING: Removing unreachable block (ram,0x0010a138) */
/* WARNING: Removing unreachable block (ram,0x0010a040) */
/* WARNING: Removing unreachable block (ram,0x0010a044) */
/* WARNING: Removing unreachable block (ram,0x0010a058) */
/* WARNING: Removing unreachable block (ram,0x00109fc0) */
/* WARNING: Removing unreachable block (ram,0x00109fc4) */
/* WARNING: Removing unreachable block (ram,0x00109fdc) */
/* WARNING: Removing unreachable block (ram,0x00109f84) */
/* WARNING: Removing unreachable block (ram,0x00109f98) */
/* WARNING: Removing unreachable block (ram,0x00109fa0) */
/* WARNING: Removing unreachable block (ram,0x00109fa8) */
/* WARNING: Removing unreachable block (ram,0x00109fb8) */
/* WARNING: Removing unreachable block (ram,0x00109fe0) */
/* WARNING: Removing unreachable block (ram,0x00109fec) */
/* WARNING: Removing unreachable block (ram,0x00109ff4) */
/* WARNING: Removing unreachable block (ram,0x0010a004) */
/* WARNING: Removing unreachable block (ram,0x0010a00c) */
/* WARNING: Removing unreachable block (ram,0x0010a038) */
/* WARNING: Removing unreachable block (ram,0x0010a05c) */
/* WARNING: Removing unreachable block (ram,0x0010a068) */
/* WARNING: Removing unreachable block (ram,0x0010a070) */
/* WARNING: Removing unreachable block (ram,0x0010a078) */
/* WARNING: Removing unreachable block (ram,0x0010a080) */
/* WARNING: Removing unreachable block (ram,0x0010a0a0) */
/* WARNING: Removing unreachable block (ram,0x0010a2ac) */
/* WARNING: Removing unreachable block (ram,0x0010a2c0) */
/* WARNING: Removing unreachable block (ram,0x0010a2d0) */
/* WARNING: Removing unreachable block (ram,0x0010a2dc) */

undefined4 * fn_00109f04(undefined4 param_1)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  uint local_28;
  uint local_24;
  
  puVar1 = (undefined4 *)fn_001129d0(param_1,2);
  *puVar1 = &DAT_0081fc70;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar10 = puVar1 + 7;
  puVar1[9] = 0;
  iVar11 = 2;
  puVar9 = (undefined4 *)0x0;
  if ((uint)((int)puVar1[9] >> 3) < 2) {
    local_28 = 2;
    uVar12 = (int)(puVar1[8] - *puVar10) >> 3;
    local_24 = uVar12 + (uVar12 >> 1) + (uVar12 >> 3);
    if (local_24 < uVar12 + 0x20) {
      local_24 = uVar12 + 0x20;
    }
    puVar2 = &local_24;
    if (local_24 < 3) {
      puVar2 = &local_28;
    }
    uVar12 = *puVar2;
    puVar3 = (undefined4 *)fn_00100fc6(uVar12 << 3,0);
    puVar7 = puVar3;
    for (puVar6 = (undefined4 *)*puVar10; puVar6 != (undefined4 *)0x0; puVar6 = puVar6 + 2) {
      if (puVar7 != (undefined4 *)0x0) {
        uVar13 = puVar6[1];
        *puVar7 = *puVar6;
        puVar7[1] = uVar13;
      }
      puVar7 = puVar7 + 2;
    }
    puVar6 = (undefined4 *)((-*puVar10 & 0xfffffff8) + (int)puVar3);
    do {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = 0;
        puVar6[1] = 0;
      }
      iVar11 = iVar11 + -1;
      puVar6 = puVar6 + 2;
    } while (iVar11 != 0);
    puVar7 = (undefined4 *)puVar1[8];
    puVar6 = puVar3 + (((int)-*puVar10 >> 3) + 2) * 2;
    if (puVar7 != (undefined4 *)0x0) {
      do {
        if (puVar6 != (undefined4 *)0x0) {
          uVar13 = puVar9[1];
          *puVar6 = *puVar9;
          puVar6[1] = uVar13;
        }
        puVar9 = puVar9 + 2;
        puVar6 = puVar6 + 2;
      } while (puVar9 != puVar7);
    }
    uVar4 = *puVar10;
    uVar8 = puVar1[8];
    uVar5 = uVar4;
    if (uVar8 < uVar4) {
      do {
        uVar5 = uVar5 + 8;
      } while (uVar5 != uVar8);
    }
    fn_001008c4(uVar4,(int)(puVar1[9] - uVar4) >> 3,0);
    puVar1[9] = puVar3 + uVar12 * 2;
    puVar1[8] = puVar3 + ((int)(uVar8 - uVar4) >> 3) * 2 + 4;
    *puVar10 = (uint)puVar3;
  }
  else {
    puVar1[8] = 0x10;
    puVar9 = (undefined4 *)0x0;
    iVar11 = 2;
    do {
      if (puVar9 != (undefined4 *)0x0) {
        *puVar9 = 0;
        puVar9[1] = 0;
      }
      iVar11 = iVar11 + -1;
      puVar9 = puVar9 + 2;
    } while (iVar11 != 0);
  }
  fn_00301a9c(puVar1 + 10,&DAT_007ba154,0x1e);
  return puVar1;
}


