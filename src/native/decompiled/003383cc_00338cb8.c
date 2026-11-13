#include "003383cc_00338cb8.h"



void fn_00338cb8(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  short *psVar7;
  int iVar8;
  uint uVar9;
  
  if (*(char *)(param_1 + 0x95) == '\0') {
    *(undefined1 *)(param_1 + 0x95) = 1;
    uVar9 = 0;
    cVar1 = *(char *)(*(int *)(param_1 + 100) + 0x3c);
    iVar8 = 0;
    iVar2 = *(int *)(*(int *)(param_1 + 100) + 0x34) + 7;
    do {
      iVar3 = fn_0028b348(*(undefined4 *)(DAT_00897804 + 0xc),iVar8);
      iVar4 = fn_00174828(DAT_008977e4);
      iVar4 = iVar4 + (char)((char)iVar8 + '\x18') * 0x418;
      psVar7 = (short *)(iVar4 + -0x4080);
      if (iVar3 != 0) {
        if (0 < *psVar7) {
          fn_0026b054(psVar7,iVar3);
        }
        uVar5 = fn_0024f870(iVar3);
        if ((*psVar7 < 1) || (*(char *)(iVar4 + -0x4019) == '\0')) {
          if (cVar1 == '\0') {
            iVar4 = (int)(iVar2 + ((uint)(iVar2 >> 0x1f) >> 0x1d)) >> 3;
          }
          else {
            iVar4 = *(int *)(*(int *)(param_1 + 100) + 0x30);
          }
          uVar6 = fn_002469ac(iVar3,iVar4,uVar5);
          uVar9 = uVar9 | uVar6;
        }
      }
      iVar8 = (int)(char)((char)iVar8 + '\x01');
    } while (iVar8 < 4);
    *(bool *)(param_1 + 0x98) = *(char *)(param_1 + 0x98) != '\0' || uVar9 != 0;
    if (uVar9 != 0) {
      *(byte *)(*(int *)(param_1 + 0x88) + 0x44) =
           *(byte *)(*(int *)(param_1 + 0x88) + 0x44) & 0xfe | 1;
                    /* WARNING: Could not recover jumptable at 0x00338df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(int **)(param_1 + 0x90) + 0x54))();
      return;
    }
  }
  return;
}



byte fn_00338c10(int param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x6c);
  bVar1 = 1;
  if (iVar2 != 0) {
    bVar1 = *(byte *)(iVar2 + 0x7e);
  }
  if (iVar2 != 0) {
    bVar1 = bVar1 & 1;
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    bVar1 = bVar1 & *(byte *)(*(int *)(param_1 + 0x70) + 0x7e);
  }
  if (*(int *)(param_1 + 0x74) != 0) {
    bVar1 = bVar1 & *(byte *)(*(int *)(param_1 + 0x74) + 0x7e);
  }
  if (*(int *)(param_1 + 0x78) != 0) {
    bVar1 = bVar1 & *(byte *)(*(int *)(param_1 + 0x78) + 0x7e);
  }
  return bVar1;
}



uint fn_00338bd4(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 1;
  uVar2 = 0;
  do {
    if (*(int *)(param_1 + uVar2 * 4 + 0x6c) != 0) {
      uVar1 = fn_003d11f8();
      uVar3 = uVar3 & uVar1;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 4);
  return uVar3;
}



void fn_00338974(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(int *)(param_1 + uVar1 * 4 + 0x6c) != 0) {
      fn_003d1a10();
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 4);
  return;
}



void fn_00338948(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(int *)(param_1 + uVar1 * 4 + 0x6c) != 0) {
      fn_003d0fe4();
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 4);
  return;
}



void fn_003387dc(int param_1)

{
  fn_0025d278();
  if ((*(char *)(*(int *)(param_1 + 0x5c) + 0x30) == '\0') &&
     (*(char *)(*(int *)(param_1 + 0xd4) + 0x69) != '\0')) {
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  return;
}



undefined4 *
fn_003387ac(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 unaff_r4;
  
  iVar1 = fn_00145b00(0xd8,&DAT_00812c8c);
  if (iVar1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)fn_0025d744(iVar1,param_1,param_3,param_4,unaff_r4);
  *puVar2 = &DAT_00824a58;
  puVar3 = (undefined4 *)fn_001f7510(puVar2,0xd6);
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar4 == &DAT_00890728) goto LAB_00338924;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_00338924:
  puVar2[0x35] = puVar3;
  return puVar2;
}



uint * fn_00338764(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = uVar1;
  if (param_1[1] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[1]);
  }
  fn_001008c4(uVar1,(int)(param_1[2] - uVar1) >> 2,0);
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x0033859c) */
/* WARNING: Removing unreachable block (ram,0x003385a8) */
/* WARNING: Removing unreachable block (ram,0x00338574) */
/* WARNING: Removing unreachable block (ram,0x00338578) */
/* WARNING: Removing unreachable block (ram,0x0033857c) */
/* WARNING: Removing unreachable block (ram,0x00338580) */
/* WARNING: Removing unreachable block (ram,0x00338584) */
/* WARNING: Removing unreachable block (ram,0x003385c4) */
/* WARNING: Removing unreachable block (ram,0x003385d4) */
/* WARNING: Removing unreachable block (ram,0x003385ac) */
/* WARNING: Removing unreachable block (ram,0x003385b4) */
/* WARNING: Removing unreachable block (ram,0x003385b8) */
/* WARNING: Removing unreachable block (ram,0x003385bc) */

uint * fn_003383cc(uint *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint *puVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  undefined8 uVar15;
  uint local_28;
  uint local_24;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = fn_00129dd4(DAT_008977fc,0x2d);
  uVar15 = fn_00129e04(DAT_008977fc,0x2d);
  uVar5 = (undefined4)((ulonglong)uVar15 >> 0x20);
  fn_00688458(uVar1,uVar5,(int)uVar15,uVar5);
  puVar2 = (undefined4 *)param_1[1];
  puVar6 = (undefined4 *)*param_1;
  local_28 = (int)puVar2 - (int)puVar6 >> 2;
  if (local_28 < 6) {
    iVar13 = 6 - local_28;
    if (iVar13 != 0) {
      local_28 = iVar13 + local_28;
      if ((uint)((int)(param_1[2] - (int)puVar6) >> 2) < local_28) {
        uVar14 = (int)(param_1[1] - *param_1) >> 2;
        uVar12 = uVar14 + (uVar14 >> 1) + (uVar14 >> 3);
        local_24 = uVar14 + 0x20;
        if (uVar14 + 0x20 <= uVar12) {
          local_24 = uVar12;
        }
        puVar8 = &local_28;
        if (local_28 < local_24) {
          puVar8 = &local_24;
        }
        uVar14 = *puVar8;
        puVar3 = (undefined4 *)fn_00100fc6(uVar14 << 2,0);
        puVar10 = puVar3;
        for (puVar6 = (undefined4 *)*param_1; puVar6 != puVar2; puVar6 = puVar6 + 1) {
          if (puVar10 != (undefined4 *)0x0) {
            *puVar10 = *puVar6;
          }
          puVar10 = puVar10 + 1;
        }
        puVar6 = (undefined4 *)(((int)puVar2 - *param_1 & 0xfffffffc) + (int)puVar3);
        for (iVar9 = iVar13; iVar9 != 0; iVar9 = iVar9 + -1) {
          if (puVar6 != (undefined4 *)0x0) {
            *puVar6 = 0;
          }
          puVar6 = puVar6 + 1;
        }
        puVar10 = (undefined4 *)param_1[1];
        puVar6 = puVar3 + iVar13 + ((int)((int)puVar2 - *param_1) >> 2);
        for (; puVar2 != puVar10; puVar2 = puVar2 + 1) {
          if (puVar6 != (undefined4 *)0x0) {
            *puVar6 = *puVar2;
          }
          puVar6 = puVar6 + 1;
        }
        uVar4 = *param_1;
        uVar11 = param_1[1];
        uVar12 = uVar4;
        if (uVar11 < uVar4) {
          do {
            uVar12 = uVar12 + 4;
          } while (uVar12 != uVar11);
        }
        fn_001008c4(uVar4,(int)(param_1[2] - uVar4) >> 2,0);
        param_1[2] = (uint)(puVar3 + uVar14);
        param_1[1] = (uint)(puVar3 + ((int)(uVar11 - uVar4) >> 2) + iVar13);
        *param_1 = (uint)puVar3;
      }
      else {
        puVar6 = puVar2 + iVar13;
        param_1[1] = (uint)(puVar2 + iVar13);
        if (puVar6 < puVar2) {
          puVar7 = puVar2 + -iVar13;
          puVar3 = puVar2;
          for (puVar10 = puVar7; puVar10 != puVar2; puVar10 = puVar10 + 1) {
            if (puVar3 != (undefined4 *)0x0) {
              *puVar3 = *puVar10;
            }
            puVar3 = puVar3 + 1;
          }
          puVar10 = puVar2;
          if (puVar2 < puVar7) {
            iVar13 = (int)puVar7 - (int)puVar2;
            if (0 < iVar13) {
              if (iVar13 * 0x20000000 < 0) {
                puVar7 = puVar7 + -1;
                puVar10 = puVar2 + -1;
                *puVar10 = *puVar7;
              }
              for (iVar13 = iVar13 >> 3; iVar13 != 0; iVar13 = iVar13 + -1) {
                puVar10[-1] = puVar7[-1];
                puVar7 = puVar7 + -2;
                puVar10 = puVar10 + -2;
                *puVar10 = *puVar7;
              }
            }
          }
          else {
            while (puVar2 != puVar7) {
              puVar7 = puVar7 + -1;
              puVar10[-1] = *puVar7;
              puVar10 = puVar10 + -1;
            }
          }
          if (puVar2 < puVar6) {
            iVar13 = (int)puVar6 - (int)puVar2;
            if (0 < iVar13) {
              puVar6 = puVar2;
              if (iVar13 * 0x20000000 < 0) {
                puVar6 = puVar2 + 1;
                *puVar2 = 0;
              }
              for (iVar13 = iVar13 >> 3; iVar13 != 0; iVar13 = iVar13 + -1) {
                puVar2 = puVar6 + 1;
                *puVar6 = 0;
                puVar6 = puVar6 + 2;
                *puVar2 = 0;
              }
            }
          }
          else {
            for (; puVar2 != puVar6; puVar2 = puVar2 + 1) {
              *puVar2 = 0;
            }
          }
        }
        else {
          for (; iVar13 != 0; iVar13 = iVar13 + -1) {
            if (puVar2 != (undefined4 *)0x0) {
              *puVar2 = 0;
            }
            puVar2 = puVar2 + 1;
          }
        }
      }
    }
  }
  else if ((6 < local_28) && (puVar10 = puVar6 + 6, puVar6 != puVar2)) {
    puVar6 = puVar10;
    if (puVar2 <= puVar10) {
      for (; puVar6 != puVar2; puVar6 = puVar6 + 1) {
      }
    }
    param_1[1] = (int)puVar2 - ((int)puVar2 - (int)puVar10 & 0xfffffffcU);
  }
  return param_1;
}


