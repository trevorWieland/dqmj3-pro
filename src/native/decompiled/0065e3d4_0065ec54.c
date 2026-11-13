#include "0065e3d4_0065ec54.h"



bool fn_0065ec54(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = fn_002f6fa8();
  uVar2 = fn_002f8914();
  iVar3 = fn_006cd9d8(uVar1,uVar2);
  return *(short *)(iVar3 + 0x44) == 3;
}



bool fn_0065ec28(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  
  uVar1 = fn_002f6fa8();
  uVar2 = fn_002f8914();
  piVar3 = (int *)fn_006cd9d8(uVar1,uVar2);
  return *piVar3 == 1;
}



/* WARNING: Removing unreachable block (ram,0x0065e61c) */
/* WARNING: Removing unreachable block (ram,0x0065e5e4) */
/* WARNING: Removing unreachable block (ram,0x0065e5ec) */
/* WARNING: Removing unreachable block (ram,0x0065e5f8) */
/* WARNING: Removing unreachable block (ram,0x0065e838) */
/* WARNING: Removing unreachable block (ram,0x0065e840) */
/* WARNING: Removing unreachable block (ram,0x0065e84c) */

void fn_0065e598(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  
  uVar1 = fn_002f6fa8();
  uVar2 = fn_002f8914();
  iVar3 = fn_006cd58c(uVar1,uVar2);
  puVar4 = (uint *)fn_00100fc6(0x2ff4,0);
  fn_001008c4(0,0,0);
  uVar12 = 0;
  puVar13 = puVar4 + 0xbfd;
  puVar10 = puVar4;
  do {
    uVar14 = (uint)*(ushort *)(iVar3 + uVar12 * 2);
    uVar5 = fn_005f65d4();
    puVar7 = puVar4;
    if (puVar10 == puVar13) {
      uVar11 = ((int)puVar10 - (int)puVar4) / 0xc;
      if (uVar11 < (uint)(((int)puVar13 - (int)puVar4) / 0xc)) {
        puVar8 = puVar10 + 3;
        if (puVar10 != (uint *)0x0) {
          *puVar10 = puVar10[-3];
          puVar10[1] = puVar10[-2];
          puVar10[2] = puVar10[-1];
        }
        puVar4 = puVar10 + -3;
        puVar6 = puVar10;
        if (puVar10 < puVar4) {
          if (0 < (int)puVar4 - (int)puVar10) {
            uVar11 = ((int)puVar4 - (int)puVar10) / 0xc;
            if ((uVar11 & 1) != 0) {
              puVar4 = puVar10 + -6;
              puVar6 = puVar10 + -3;
              *puVar6 = *puVar4;
              puVar10[-2] = puVar10[-5];
              puVar10[-1] = puVar10[-4];
            }
            for (iVar15 = (int)uVar11 >> 1; iVar15 != 0; iVar15 = iVar15 + -1) {
              uVar11 = puVar4[-2];
              uVar16 = puVar4[-1];
              puVar6[-3] = puVar4[-3];
              puVar6[-2] = uVar11;
              puVar6[-1] = uVar16;
              uVar11 = puVar4[-5];
              uVar16 = puVar4[-4];
              puVar6[-6] = puVar4[-6];
              puVar6[-5] = uVar11;
              puVar6[-4] = uVar16;
              puVar6 = puVar6 + -6;
              puVar4 = puVar4 + -6;
            }
          }
        }
        else {
          while (puVar10 != puVar4) {
            uVar11 = puVar4[-2];
            uVar16 = puVar4[-1];
            puVar6[-3] = puVar4[-3];
            puVar6[-2] = uVar11;
            puVar6[-1] = uVar16;
            puVar4 = puVar4 + -3;
            puVar6 = puVar6 + -3;
          }
        }
        *puVar10 = uVar12;
        puVar10[1] = uVar14;
        puVar10[2] = uVar5;
      }
      else {
        uVar9 = uVar11 + (uVar11 >> 1) + (uVar11 >> 3);
        uVar16 = uVar11 + 0x20;
        if (uVar11 + 0x20 <= uVar9) {
          uVar16 = uVar9;
        }
        puVar7 = (uint *)fn_00100fc6(uVar16 * 0xc,0);
        puVar8 = puVar7;
        for (puVar6 = puVar4; puVar6 != puVar10; puVar6 = puVar6 + 3) {
          if (puVar8 != (uint *)0x0) {
            uVar11 = puVar6[1];
            uVar9 = puVar6[2];
            *puVar8 = *puVar6;
            puVar8[1] = uVar11;
            puVar8[2] = uVar9;
          }
          puVar8 = puVar8 + 3;
        }
        puVar8 = puVar7 + (((int)puVar10 - (int)puVar4) / 0xc) * 3;
        if (puVar8 != (uint *)0x0) {
          *puVar8 = uVar12;
          puVar8[1] = uVar14;
          puVar8[2] = uVar5;
        }
        puVar8 = puVar4;
        if (puVar10 < puVar4) {
          do {
            puVar8 = puVar8 + 3;
          } while (puVar8 != puVar10);
        }
        fn_001008c4(puVar4,((int)puVar13 - (int)puVar4) / 0xc,0);
        puVar13 = puVar7 + uVar16 * 3;
        puVar8 = puVar7 + (((int)puVar10 - (int)puVar4) / 0xc) * 3 + 3;
      }
    }
    else {
      puVar8 = puVar10 + 3;
      if (puVar10 != (uint *)0x0) {
        *puVar10 = uVar12;
        puVar10[1] = uVar14;
        puVar10[2] = uVar5;
      }
    }
    uVar12 = uVar12 + 1;
    puVar4 = puVar7;
    puVar10 = puVar8;
  } while (uVar12 < 0x3ff);
  if (puVar7 != puVar8) {
    fn_007afa38(puVar7,puVar8,((int)puVar8 - (int)puVar7) / 0xc);
    if ((int)puVar8 - (int)puVar7 < 0xc1) {
      fn_007a57e4(puVar7,puVar8);
    }
    else {
      fn_007a57e4(puVar7,puVar7 + 0x30);
      for (puVar4 = puVar7 + 0x30; puVar4 != puVar8; puVar4 = puVar4 + 3) {
        uVar5 = *puVar4;
        uVar14 = puVar4[1];
        uVar12 = puVar4[2];
        puVar10 = puVar4;
        while( true ) {
          if ((int)uVar12 <= (int)puVar10[-1]) break;
          *puVar10 = puVar10[-3];
          puVar10[1] = puVar10[-2];
          puVar10[2] = puVar10[-1];
          puVar10 = puVar10 + -3;
        }
        *puVar10 = uVar5;
        puVar10[1] = uVar14;
        puVar10[2] = uVar12;
      }
    }
  }
  if (param_2 == 0) {
    if (puVar7 != puVar8) {
      fn_007b03ac(puVar7,puVar8,((int)puVar8 - (int)puVar7) / 0xc);
      if ((int)puVar8 - (int)puVar7 < 0xc1) {
        fn_007a5a9c(puVar7,puVar8);
      }
      else {
        fn_007a5a9c(puVar7,puVar7 + 0x30);
        for (puVar4 = puVar7 + 0x30; puVar4 != puVar8; puVar4 = puVar4 + 3) {
          uVar12 = puVar4[1];
          uVar5 = *puVar4;
          uVar14 = puVar4[2];
          puVar10 = puVar4;
          while( true ) {
            if ((int)puVar10[-2] <= (int)uVar12) break;
            *puVar10 = puVar10[-3];
            puVar10[1] = puVar10[-2];
            puVar10[2] = puVar10[-1];
            puVar10 = puVar10 + -3;
          }
          *puVar10 = uVar5;
          puVar10[1] = uVar12;
          puVar10[2] = uVar14;
        }
      }
    }
  }
  else if (puVar7 != puVar8) {
    fn_007afecc(puVar7,puVar8,((int)puVar8 - (int)puVar7) / 0xc);
    if ((int)puVar8 - (int)puVar7 < 0xc1) {
      fn_007a5948(puVar7,puVar8);
    }
    else {
      fn_007a5948(puVar7,puVar7 + 0x30);
      for (puVar4 = puVar7 + 0x30; puVar4 != puVar8; puVar4 = puVar4 + 3) {
        uVar12 = puVar4[1];
        uVar5 = puVar4[2];
        uVar14 = *puVar4;
        puVar10 = puVar4;
        while( true ) {
          if ((int)uVar12 <= (int)puVar10[-2]) break;
          *puVar10 = puVar10[-3];
          puVar10[1] = puVar10[-2];
          puVar10[2] = puVar10[-1];
          puVar10 = puVar10 + -3;
        }
        *puVar10 = uVar14;
        puVar10[1] = uVar12;
        puVar10[2] = uVar5;
      }
    }
  }
  fn_00604df8(param_1);
  iVar15 = 0;
  uVar12 = 0;
  iVar3 = (int)puVar8 - (int)puVar7 >> 0x1f;
  if (((int)puVar8 - (int)puVar7) / 0xc + iVar3 != iVar3) {
    do {
      puVar4 = puVar7 + uVar12 * 3;
      iVar3 = fn_001a46f4((int)(short)*puVar4);
      if ((((iVar3 != 0) && (iVar3 = fn_00661714((int)(short)*puVar4), iVar3 != 0)) &&
          (iVar3 = fn_00661308((int)(short)*puVar4), 0 < iVar3)) &&
         (((int)puVar4[1] < 0x2711 && ((param_2 == 0 || (0 < (int)puVar7[uVar12 * 3 + 1])))))) {
        fn_00604dc8(param_1,puVar7[uVar12 * 3]);
        iVar15 = iVar15 + 1;
        if (iVar15 == 0x14) break;
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < (uint)(((int)puVar8 - (int)puVar7) / 0xc));
  }
  puVar4 = puVar7;
  if (puVar8 < puVar7) {
    do {
      puVar4 = puVar4 + 3;
    } while (puVar4 != puVar8);
  }
  fn_002feef8(puVar7,((int)puVar13 - (int)puVar7) / 0xc,0);
  return;
}



bool fn_0065e580(short *param_1,short *param_2)

{
  return *param_1 < *param_2;
}



int fn_0065e56c(int param_1)

{
  return DAT_008bf650 + param_1 * 4;
}



int fn_0065e558(int param_1)

{
  return DAT_008bf640 + param_1 * 4;
}



void fn_0065e50c(void)

{
  DAT_008bf654 = 0;
  DAT_008bf650 = 0;
  DAT_008bf64c = 0;
  DAT_008bf648 = 0;
  DAT_008bf644 = 0;
  DAT_008bf640 = 0;
  DAT_008bf63c = 0;
  DAT_008bf638 = 0;
  DAT_008bf634 = 0;
  DAT_008bf630 = 0;
  DAT_008bf62c = 0;
  DAT_008bf628 = 0;
  DAT_008bf624 = 0;
  DAT_008bf620 = 0;
  DAT_008bf61c = 0;
  return;
}



int fn_0065e4f8(int param_1)

{
  return DAT_008bf648 + param_1 * 4;
}



bool fn_0065e4c0(int param_1,uint param_2)

{
  return (*(uint *)(DAT_008bf630 + param_1 * 0xc + (param_2 >> 5) * 4 + 4) & 1 << (param_2 & 0x1f))
         != 0;
}



bool fn_0065e494(int param_1,int param_2)

{
  return ((uint)*(byte *)(DAT_008bf624 + param_1) & 1 << (&DAT_007e1888)[param_2]) != 0;
}



int fn_0065e448(int param_1,int param_2)

{
  return DAT_008bf638 + param_1 * 0x10 + param_2 * 2;
}



bool fn_0065e3d4(int param_1,uint param_2)

{
  return (1 << (param_2 & 0xff) & (uint)*(byte *)(DAT_008bf61c + param_1 * 0x1c + 0x18)) != 0;
}


