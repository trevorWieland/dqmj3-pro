#include "0021e484_0021f280.h"



void fn_0021f280(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = fn_006f7a20(DAT_008977e0);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x1cc) = 0;
    *(undefined4 *)(param_1 + 0x1d0) = 0;
    *(undefined4 *)(param_1 + 0x1d4) = 0;
    *(undefined4 *)(param_1 + 0x1d8) = 0;
    *(undefined4 *)(param_1 + 0x1dc) = 0;
    *(undefined4 *)(param_1 + 0x1e0) = 0;
    *(undefined4 *)(param_1 + 0x1e4) = 0;
    *(undefined4 *)(param_1 + 0x1e8) = 0;
    *(undefined4 *)(param_1 + 0x1ec) = 0;
    *(undefined4 *)(param_1 + 0x1f0) = 0;
    *(undefined4 *)(param_1 + 500) = 0;
    *(undefined4 *)(param_1 + 0x1f8) = 0;
    fn_0021bc18(param_1);
    uVar4 = *(uint *)(param_1 + 0x650);
    *(undefined4 *)(param_1 + 0x650) = 0;
    uVar3 = *(uint *)(param_1 + 0x654);
    *(undefined4 *)(param_1 + 0x654) = 0;
    iVar1 = *(int *)(param_1 + 0x658);
    *(undefined4 *)(param_1 + 0x658) = 0;
    uVar2 = uVar4;
    if (uVar3 < uVar4) {
      do {
        uVar2 = uVar2 + 4;
      } while (uVar2 != uVar3);
    }
    fn_001008c4(uVar4,(int)(iVar1 - uVar4) >> 2,0);
    uVar4 = *(uint *)(param_1 + 0x224);
    *(undefined4 *)(param_1 + 0x224) = 0;
    uVar3 = *(uint *)(param_1 + 0x228);
    *(undefined4 *)(param_1 + 0x228) = 0;
    iVar1 = *(int *)(param_1 + 0x22c);
    *(undefined4 *)(param_1 + 0x22c) = 0;
    uVar2 = uVar4;
    if (uVar3 < uVar4) {
      do {
        uVar2 = uVar2 + 4;
      } while (uVar2 != uVar3);
    }
    fn_001008c4(uVar4,(int)(iVar1 - uVar4) >> 2,0);
    fn_002190bc(param_1);
    iVar1 = 0x10;
    do {
      iVar5 = param_1 + iVar1 * 4;
      if (*(int *)(iVar5 + 0x18) != -1) {
        fn_00159f34(*(undefined4 *)(param_1 + 4));
        *(undefined4 *)(iVar5 + 0x18) = 0xffffffff;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x12);
    if (*(int *)(param_1 + 0x14) != -1) {
      fn_0016a43c(*(undefined4 *)(param_1 + 4));
      *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
    }
    if (*(int *)(param_1 + 0xc) != -1) {
                    /* WARNING: Subroutine does not return */
      fn_001482f4(*(undefined4 *)(param_1 + 4));
    }
    fn_00143a58(*(undefined4 *)(param_1 + 0x238));
    *(undefined4 *)(param_1 + 0x238) = 0;
    *(undefined4 *)(param_1 + 0x234) = 0;
    *(undefined4 *)(param_1 + 0x23c) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  return;
}



undefined4 fn_0021f144(int param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)**(int **)(param_1 + 0x20c);
  while( true ) {
    if (piVar2 == *(int **)(param_1 + 0x20c)) {
      return 0;
    }
    if (piVar2[2] == param_2) break;
    piVar2 = (int *)*piVar2;
  }
  if ((*(int *)(param_1 + 0x6b4) == piVar2[2]) && (*(int *)(param_1 + 0x6b8) != -1)) {
    fn_00159f34(*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 0x6b4) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x6b8) = 0xffffffff;
  }
  cVar1 = *(char *)(piVar2 + 3);
  if (((cVar1 == '\x02' || cVar1 == '\v') || (cVar1 == '\f' || cVar1 == '\r')) && (piVar2[4] != -1))
  {
    fn_00159f34(*(undefined4 *)(param_1 + 4));
    piVar2[4] = 0xffffffff;
  }
  fn_00151954(*(undefined4 *)(piVar2[5] + 0xc));
  if ((int *)piVar2[5] != (int *)0x0) {
    (**(code **)(*(int *)piVar2[5] + 4))();
  }
  piVar2[5] = 0;
  if (piVar2[6] != 0) {
    fn_00151954(*(undefined4 *)(piVar2[6] + 0xc));
    if ((int *)piVar2[6] != (int *)0x0) {
      (**(code **)(*(int *)piVar2[6] + 4))();
    }
    piVar2[6] = 0;
  }
  if (piVar2 != (int *)*(int *)(param_1 + 0x20c)) {
    *(int *)piVar2[1] = *piVar2;
    *(int *)(*piVar2 + 4) = piVar2[1];
    *(int *)(param_1 + 0x210) = *(int *)(param_1 + 0x210) + -1;
    *piVar2 = *(undefined4 *)(param_1 + 0x200);
    *(int **)(param_1 + 0x200) = piVar2;
  }
  return 1;
}



void fn_0021e66c(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  uint *puVar13;
  int iVar14;
  int iVar15;
  undefined1 auStack_b0 [128];
  undefined1 auStack_30 [8];
  undefined4 local_28;
  
  if (*(int *)(param_1 + 0x240) != -1) {
    uVar1 = *(uint *)(param_1 + 0x244);
    uVar7 = *(uint *)(param_1 + 0x248);
    if (uVar1 != uVar7) {
      uVar10 = uVar1;
      if (uVar7 <= uVar1) {
        for (; uVar10 != uVar7; uVar10 = uVar10 + 4) {
        }
      }
      *(uint *)(param_1 + 0x248) = uVar7 - (uVar7 - uVar1 & 0xfffffffc);
    }
    fn_00128f40(auStack_30);
    fn_00101a50(auStack_b0,0x40,L"rom:/data/Field/Table/NaviMap/world_map_%s.nut",param_2);
    iVar2 = fn_00147fd4(auStack_b0,5);
    if (iVar2 != 0) {
      uVar3 = fn_00118290();
      local_28 = fn_0011c184(auStack_b0,uVar3,0x80);
      uVar3 = fn_0012a26c();
      uVar4 = fn_00145ac0(local_28);
      fn_00128ee0(auStack_30,uVar4,uVar3);
      iVar2 = 0;
      iVar15 = 0;
      do {
        iVar14 = 0;
        do {
          iVar5 = fn_00128e7c(auStack_30,(char *)&DAT_0021e96c,iVar2);
          if (iVar5 != 0) {
            piVar12 = *(int **)(param_1 + 0x248);
            puVar13 = (uint *)(param_1 + 0x244);
            if (piVar12 == *(int **)(param_1 + 0x24c)) {
              uVar1 = (int)((int)piVar12 - *puVar13) >> 2;
              if (uVar1 < (uint)((int)((int)*(int **)(param_1 + 0x24c) - *puVar13) >> 2)) {
                *(int **)(param_1 + 0x248) = piVar12 + 1;
                if (piVar12 != (int *)0x0) {
                  *piVar12 = piVar12[-1];
                }
                piVar8 = piVar12 + -1;
                piVar9 = piVar12;
                if (piVar12 < piVar8) {
                  iVar5 = (int)piVar8 - (int)piVar12;
                  if (0 < iVar5) {
                    if (iVar5 * 0x20000000 < 0) {
                      piVar8 = piVar12 + -2;
                      piVar9 = piVar12 + -1;
                      *piVar9 = *piVar8;
                    }
                    for (iVar5 = iVar5 >> 3; iVar5 != 0; iVar5 = iVar5 + -1) {
                      piVar9[-1] = piVar8[-1];
                      piVar8 = piVar8 + -2;
                      piVar9 = piVar9 + -2;
                      *piVar9 = *piVar8;
                    }
                  }
                }
                else {
                  while (piVar12 != piVar8) {
                    piVar8 = piVar8 + -1;
                    piVar9[-1] = *piVar8;
                    piVar9 = piVar9 + -1;
                  }
                }
                *piVar12 = iVar2;
              }
              else {
                uVar7 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
                if (uVar7 < uVar1 + 0x20) {
                  uVar7 = uVar1 + 0x20;
                }
                piVar6 = (int *)fn_00100fc6(uVar7 << 2,0);
                piVar9 = piVar6;
                for (piVar8 = (int *)*puVar13; piVar8 != piVar12; piVar8 = piVar8 + 1) {
                  if (piVar9 != (int *)0x0) {
                    *piVar9 = *piVar8;
                  }
                  piVar9 = piVar9 + 1;
                }
                piVar8 = (int *)(((int)piVar12 - *puVar13 & 0xfffffffc) + (int)piVar6);
                if (piVar8 != (int *)0x0) {
                  *piVar8 = iVar2;
                }
                piVar9 = *(int **)(param_1 + 0x248);
                piVar8 = (int *)(((int)piVar12 - *puVar13 & 0xfffffffc) + (int)piVar6);
                for (; piVar12 != piVar9; piVar12 = piVar12 + 1) {
                  piVar8 = piVar8 + 1;
                  if (piVar8 != (int *)0x0) {
                    *piVar8 = *piVar12;
                  }
                }
                uVar10 = *(uint *)(param_1 + 0x248);
                uVar11 = *puVar13;
                uVar1 = uVar11;
                if (uVar10 <= uVar11) {
                  for (; uVar1 != uVar10; uVar1 = uVar1 + 4) {
                  }
                }
                fn_001008c4(uVar11,(int)(*(int *)(param_1 + 0x24c) - uVar11) >> 2,0);
                *puVar13 = (uint)piVar6;
                *(int **)(param_1 + 0x248) = piVar6 + ((int)(uVar10 - uVar11) >> 2) + 1;
                *(int **)(param_1 + 0x24c) = piVar6 + uVar7;
              }
            }
            else {
              *(int **)(param_1 + 0x248) = piVar12 + 1;
              if (piVar12 != (int *)0x0) {
                *piVar12 = iVar2;
              }
            }
          }
          iVar14 = iVar14 + 1;
          iVar2 = iVar2 + 1;
        } while (iVar14 < 0x20);
        iVar15 = iVar15 + 1;
      } while (iVar15 < 0x20);
      fn_0012d73c(local_28);
      fn_00128fc4(auStack_30);
      return;
    }
    fn_00128fc4(auStack_30);
  }
  return;
}



void fn_0021e55c(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_20;
  float local_1c;
  float local_18;
  
  fVar4 = 0.0;
  local_18 = 1.0 / *(float *)(param_1 + 0x188);
  fVar2 = *(float *)(param_2 + 0x1c) * local_18;
  local_1c = local_18 * 0.0;
  local_18 = -*(float *)(param_2 + 0x20) * local_18;
  fVar5 = fVar4;
  local_20 = fVar2;
  fn_006b15ac(param_1,&local_20);
  fVar1 = fVar5 * 0.024541229 + 0.0;
  fVar3 = fVar5 * -0.0003011813 + 1.0;
  *(float *)(param_2 + 0x48) = fVar3 * fVar3;
  *(float *)(param_2 + 0x4c) = fVar1 * fVar3 * fVar1 - fVar3 * fVar1;
  *(float *)(param_2 + 0x50) = fVar1 * fVar1 + fVar3 * fVar3 * fVar1;
  *(float *)(param_2 + 0x54) = fVar4;
  *(float *)(param_2 + 100) = -fVar2;
  *(float *)(param_2 + 0x68) = -fVar1;
  *(float *)(param_2 + 0x58) = fVar1 * fVar3;
  *(float *)(param_2 + 0x5c) = fVar3 * fVar3 + fVar1 * fVar1 * fVar1;
  *(float *)(param_2 + 0x60) = fVar3 * fVar1 * fVar1 - fVar1 * fVar3;
  *(float *)(param_2 + 0x6c) = fVar1 * fVar3;
  *(float *)(param_2 + 0x70) = fVar3 * fVar3;
  *(float *)(param_2 + 0x74) = fVar5;
  *(byte *)(param_2 + 0x44) = *(byte *)(param_2 + 0x44) & 0xbf | 0x40;
  return;
}



void fn_0021e484(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  char cVar9;
  
  if (*(int *)(param_1 + 0x238) == 0) {
    return;
  }
  iVar7 = 0;
  do {
    iVar6 = 0;
    do {
      iVar4 = iVar6 + -1;
      cVar9 = '\0';
      if (iVar4 < 1) {
        iVar4 = 0;
      }
      iVar2 = iVar7 + -1;
      if (iVar2 < 1) {
        iVar2 = 0;
      }
      iVar3 = iVar6 + 1;
      if (0x1f < iVar3) {
        iVar3 = 0x20;
      }
      iVar5 = iVar7 + 1;
      if (0x1f < iVar5) {
        iVar5 = 0x20;
      }
      for (; iVar2 <= iVar5; iVar2 = iVar2 + 1) {
        if (iVar4 < iVar3) {
          iVar1 = iVar4;
          do {
            uVar8 = iVar1 + iVar2 * 0x20;
            if ((*(int *)(param_1 + 0x23c) != 0) &&
               ((*(uint *)(*(int *)(param_1 + 0x23c) + ((int)uVar8 >> 5) * 4) >> (uVar8 & 0x1f) & 1)
                != 0)) {
              cVar9 = cVar9 + '\x01';
            }
            iVar1 = iVar1 + 1;
          } while (iVar1 < iVar3);
        }
      }
      iVar4 = param_1 + iVar7 * 0x20 + iVar6;
      iVar6 = iVar6 + 1;
      *(char *)(iVar4 + 0x250) = cVar9;
    } while (iVar6 < 0x20);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x20);
  return;
}


