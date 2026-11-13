#include "00463d8c_00463d8c.h"



/* WARNING: Removing unreachable block (ram,0x00464118) */
/* WARNING: Removing unreachable block (ram,0x0046411c) */
/* WARNING: Removing unreachable block (ram,0x00464120) */
/* WARNING: Removing unreachable block (ram,0x00464124) */
/* WARNING: Removing unreachable block (ram,0x00464128) */
/* WARNING: Removing unreachable block (ram,0x00464154) */
/* WARNING: Removing unreachable block (ram,0x00464164) */
/* WARNING: Removing unreachable block (ram,0x00464140) */
/* WARNING: Removing unreachable block (ram,0x00464148) */
/* WARNING: Removing unreachable block (ram,0x0046414c) */
/* WARNING: Removing unreachable block (ram,0x004643c4) */
/* WARNING: Removing unreachable block (ram,0x004643d0) */
/* WARNING: Removing unreachable block (ram,0x004645b0) */
/* WARNING: Removing unreachable block (ram,0x004645bc) */

void fn_00463d8c(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  code *pcVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  undefined4 uVar14;
  int iVar15;
  
  uVar11 = param_2 + 1;
  *(short *)(param_1 + 0x104) = (short)param_2;
  if (0x3ffffffe < uVar11 && param_2 != 0x3ffffffe) {
    fn_002ff628(8,&DAT_004640e4,&DAT_004640e4,uVar11,0x3fffffff);
  }
  if ((uint)(*(int *)(param_1 + 0x98) - *(int *)(param_1 + 0x90) >> 2) < uVar11) {
    uVar6 = *(int *)(param_1 + 0x94) - *(int *)(param_1 + 0x90) >> 2;
    uVar13 = uVar6 + (uVar6 >> 1) + (uVar6 >> 3);
    if (uVar13 < uVar6 + 0x20) {
      uVar13 = uVar6 + 0x20;
    }
    if (uVar13 <= uVar11) {
      uVar13 = uVar11;
    }
    puVar1 = (undefined4 *)fn_0015ece0(uVar13 << 2);
    puVar7 = *(undefined4 **)(param_1 + 0x94);
    puVar10 = puVar1;
    for (puVar2 = *(undefined4 **)(param_1 + 0x90); puVar2 != puVar7; puVar2 = puVar2 + 1) {
      if (puVar10 != (undefined4 *)0x0) {
        *puVar10 = *puVar2;
      }
      puVar10 = puVar10 + 1;
    }
    uVar11 = *(uint *)(param_1 + 0x94);
    uVar6 = *(uint *)(param_1 + 0x90);
    if (uVar6 < uVar11) {
      puVar7 = (undefined4 *)(uVar11 - uVar6);
    }
    if (uVar6 < uVar11) {
      uVar8 = ((uint)puVar7 & 7) >> 2;
    }
    else {
      uVar8 = 0;
    }
    for (iVar3 = uVar8 + 1; iVar3 < ((int)(uVar11 - uVar6) >> 2) + 1; iVar3 = iVar3 + 2) {
    }
    if (uVar6 != 0) {
      pcVar9 = *(code **)(uVar6 - 8);
      if (pcVar9 == (code *)0x0) {
        fn_0030233c((undefined4 *)(uVar6 - 8));
      }
      else {
        (*pcVar9)();
      }
    }
    iVar3 = *(int *)(param_1 + 0x90);
    *(undefined4 **)(param_1 + 0x90) = puVar1;
    *(uint *)(param_1 + 0x94) = (*(int *)(param_1 + 0x94) - iVar3 & 0xfffffffcU) + (int)puVar1;
    *(undefined4 **)(param_1 + 0x98) = puVar1 + uVar13;
  }
  uVar11 = param_2 + 1;
  if (0x3ffffffe < uVar11 && param_2 != 0x3ffffffe) {
    fn_002ff628(8,&DAT_004640e4,&DAT_004640e4,uVar11,0x3fffffff);
  }
  if ((uint)(*(int *)(param_1 + 0xa4) - *(int *)(param_1 + 0x9c) >> 2) < uVar11) {
    uVar6 = *(int *)(param_1 + 0xa0) - *(int *)(param_1 + 0x9c) >> 2;
    uVar13 = uVar6 + (uVar6 >> 1) + (uVar6 >> 3);
    if (uVar13 < uVar6 + 0x20) {
      uVar13 = uVar6 + 0x20;
    }
    if (uVar13 <= uVar11) {
      uVar13 = uVar11;
    }
    puVar1 = (undefined4 *)fn_0015ece0(uVar13 << 2);
    puVar7 = *(undefined4 **)(param_1 + 0xa0);
    puVar10 = puVar1;
    for (puVar2 = *(undefined4 **)(param_1 + 0x9c); puVar2 != puVar7; puVar2 = puVar2 + 1) {
      if (puVar10 != (undefined4 *)0x0) {
        *puVar10 = *puVar2;
      }
      puVar10 = puVar10 + 1;
    }
    uVar11 = *(uint *)(param_1 + 0xa0);
    uVar6 = *(uint *)(param_1 + 0x9c);
    if (uVar6 < uVar11) {
      puVar2 = (undefined4 *)(uVar11 - uVar6);
    }
    if (uVar6 < uVar11) {
      uVar8 = ((uint)puVar2 & 7) >> 2;
    }
    else {
      uVar8 = 0;
    }
    for (iVar3 = uVar8 + 1; iVar3 < ((int)(uVar11 - uVar6) >> 2) + 1; iVar3 = iVar3 + 2) {
    }
    if (uVar6 != 0) {
      pcVar9 = *(code **)(uVar6 - 8);
      if (pcVar9 == (code *)0x0) {
        fn_0030233c((undefined4 *)(uVar6 - 8));
      }
      else {
        (*pcVar9)();
      }
    }
    iVar3 = *(int *)(param_1 + 0x9c);
    *(undefined4 **)(param_1 + 0x9c) = puVar1;
    *(uint *)(param_1 + 0xa0) = (*(int *)(param_1 + 0xa0) - iVar3 & 0xfffffffcU) + (int)puVar1;
    *(undefined4 **)(param_1 + 0xa4) = puVar1 + uVar13;
  }
  fn_0079abe0(param_1 + 0x164,param_2 + 1,0);
  puVar2 = *(undefined4 **)(param_1 + 0x134);
  puVar10 = *(undefined4 **)(param_1 + 0x130);
  uVar13 = param_2 + 1;
  uVar6 = (int)puVar2 - (int)puVar10;
  uVar11 = (int)uVar6 >> 2;
  if (uVar11 < uVar13) {
    iVar3 = uVar13 - uVar11;
    if (iVar3 != 0) {
      uVar6 = iVar3 + uVar11;
      if ((uint)(*(int *)(param_1 + 0x138) - (int)puVar10 >> 2) < uVar6) {
        uVar8 = uVar11 + (uVar11 >> 1) + (uVar11 >> 3);
        uVar13 = uVar11 + 0x20;
        if (uVar11 + 0x20 <= uVar8) {
          uVar13 = uVar8;
        }
        if (uVar13 < uVar6) {
        }
        else {
          uVar6 = uVar8;
          if (uVar8 < uVar11 + 0x20) {
            uVar6 = uVar11 + 0x20;
          }
        }
        puVar7 = (undefined4 *)fn_0015ece0(uVar6 << 2);
        puVar1 = puVar7;
        for (puVar10 = *(undefined4 **)(param_1 + 0x130); puVar10 != puVar2; puVar10 = puVar10 + 1)
        {
          if (puVar1 != (undefined4 *)0x0) {
            *puVar1 = *puVar10;
          }
          puVar1 = puVar1 + 1;
        }
        puVar10 = (undefined4 *)
                  (((int)puVar2 - *(int *)(param_1 + 0x130) & 0xfffffffcU) + (int)puVar7);
        for (iVar15 = iVar3; iVar15 != 0; iVar15 = iVar15 + -1) {
          if (puVar10 != (undefined4 *)0x0) {
            *puVar10 = 0;
          }
          puVar10 = puVar10 + 1;
        }
        puVar1 = *(undefined4 **)(param_1 + 0x134);
        puVar10 = puVar7 + iVar3 + ((int)puVar2 - *(int *)(param_1 + 0x130) >> 2);
        for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
          if (puVar10 != (undefined4 *)0x0) {
            *puVar10 = *puVar2;
          }
          puVar10 = puVar10 + 1;
        }
        uVar13 = *(uint *)(param_1 + 0x130);
        uVar8 = *(uint *)(param_1 + 0x134);
        uVar11 = uVar8;
        if (uVar13 < uVar8) {
          uVar11 = (uVar8 - uVar13) * 0x20000000;
        }
        iVar15 = (int)(uVar8 - uVar13) >> 2;
        if (uVar13 < uVar8) {
          uVar11 = uVar11 >> 0x1f;
        }
        else {
          uVar11 = 0;
        }
        for (iVar4 = uVar11 + 1; iVar4 < iVar15 + 1; iVar4 = iVar4 + 2) {
        }
        if (uVar13 != 0) {
          if (*(code **)(uVar13 - 8) == (code *)0x0) {
            fn_0030233c();
          }
          else {
            (**(code **)(uVar13 - 8))();
          }
        }
        *(undefined4 **)(param_1 + 0x138) = puVar7 + uVar6;
        *(undefined4 **)(param_1 + 0x134) = puVar7 + iVar15 + iVar3;
        *(undefined4 **)(param_1 + 0x130) = puVar7;
      }
      else {
        *(undefined4 **)(param_1 + 0x134) = puVar2 + iVar3;
        if (puVar2 + iVar3 < puVar2) {
          puVar7 = puVar2 + -iVar3;
          puVar1 = puVar2;
          for (puVar10 = puVar7; puVar10 != puVar2; puVar10 = puVar10 + 1) {
            if (puVar1 != (undefined4 *)0x0) {
              *puVar1 = *puVar10;
            }
            puVar1 = puVar1 + 1;
          }
          iVar15 = (int)puVar7 - (int)puVar2 >> 2;
          if (0 < iVar15) {
            iVar4 = 0;
            do {
              iVar15 = iVar15 + -1;
              puVar2[iVar4 + -1] = puVar7[iVar4 + -1];
              iVar4 = iVar4 + -1;
            } while (iVar15 != 0);
          }
          iVar3 = (int)(puVar2 + iVar3) - (int)puVar2;
          if (0 < iVar3 >> 2) {
            puVar10 = puVar2;
            if (iVar3 * 0x20000000 < 0) {
              puVar10 = puVar2 + 1;
              *puVar2 = 0;
            }
            for (iVar3 = iVar3 >> 3; iVar3 != 0; iVar3 = iVar3 + -1) {
              puVar2 = puVar10 + 1;
              *puVar10 = 0;
              puVar10 = puVar10 + 2;
              *puVar2 = 0;
            }
          }
        }
        else {
          for (; iVar3 != 0; iVar3 = iVar3 + -1) {
            if (puVar2 != (undefined4 *)0x0) {
              *puVar2 = 0;
            }
            puVar2 = puVar2 + 1;
          }
        }
      }
    }
  }
  else if ((uVar13 < uVar11) && (puVar1 = puVar10 + uVar13, puVar10 != puVar2)) {
    if (puVar1 < puVar2) {
      uVar6 = (int)puVar2 - (int)puVar1;
    }
    if (puVar1 < puVar2) {
      uVar11 = (uVar6 & 7) >> 2;
    }
    else {
      uVar11 = 0;
    }
    iVar3 = uVar11 + 1;
    if (iVar3 < ((int)puVar2 - (int)puVar1 >> 2) + 1) {
      do {
        iVar3 = iVar3 + 2;
      } while (iVar3 < ((int)puVar2 - (int)puVar1 >> 2) + 1);
    }
    *(uint *)(param_1 + 0x134) = (int)puVar2 - ((int)puVar2 - (int)puVar1 & 0xfffffffcU);
  }
  fn_0079c308(param_1 + 0x13c,param_2 + 1,1);
  fn_0045bbcc(param_1 + 0x200,param_2);
  iVar3 = 0;
  if (0 < param_2 + 1) {
    do {
      iVar15 = fn_0015ece0(0x28);
      if (iVar15 == 0) {
        uVar14 = 0;
      }
      else {
        uVar14 = fn_0048c694();
      }
      puVar12 = (uint *)(param_1 + 0x90);
      puVar2 = *(undefined4 **)(param_1 + 0x94);
      if (puVar2 == *(undefined4 **)(param_1 + 0x98)) {
        uVar11 = (int)((int)puVar2 - *puVar12) >> 2;
        if (uVar11 < (uint)((int)((int)*(undefined4 **)(param_1 + 0x98) - *puVar12) >> 2)) {
          *(undefined4 **)(param_1 + 0x94) = puVar2 + 1;
          if (puVar2 != (undefined4 *)0x0) {
            *puVar2 = puVar2[-1];
          }
          *puVar2 = uVar14;
        }
        else {
          uVar6 = uVar11 + (uVar11 >> 1) + (uVar11 >> 3);
          if (uVar6 < uVar11 + 0x20) {
            uVar6 = uVar11 + 0x20;
          }
          puVar7 = (undefined4 *)fn_0015ece0(uVar6 << 2);
          puVar1 = puVar7;
          for (puVar10 = (undefined4 *)*puVar12; puVar10 != puVar2; puVar10 = puVar10 + 1) {
            if (puVar1 != (undefined4 *)0x0) {
              *puVar1 = *puVar10;
            }
            puVar1 = puVar1 + 1;
          }
          puVar10 = (undefined4 *)(((int)puVar2 - *puVar12 & 0xfffffffc) + (int)puVar7);
          if (puVar10 != (undefined4 *)0x0) {
            *puVar10 = uVar14;
          }
          puVar1 = *(undefined4 **)(param_1 + 0x94);
          puVar10 = (undefined4 *)(((int)puVar2 - *puVar12 & 0xfffffffc) + (int)puVar7);
          for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
            puVar10 = puVar10 + 1;
            if (puVar10 != (undefined4 *)0x0) {
              *puVar10 = *puVar2;
            }
          }
          uVar13 = *puVar12;
          uVar8 = *(uint *)(param_1 + 0x94);
          uVar11 = uVar8;
          if (uVar13 < uVar8) {
            uVar11 = (uVar8 - uVar13) * 0x20000000;
          }
          iVar15 = (int)(uVar8 - uVar13) >> 2;
          if (uVar13 < uVar8) {
            uVar11 = uVar11 >> 0x1f;
          }
          else {
            uVar11 = 0;
          }
          for (iVar4 = uVar11 + 1; iVar4 < iVar15 + 1; iVar4 = iVar4 + 2) {
          }
          if (uVar13 != 0) {
            if (*(code **)(uVar13 - 8) == (code *)0x0) {
              fn_0030233c();
            }
            else {
              (**(code **)(uVar13 - 8))();
            }
          }
          *(undefined4 **)(param_1 + 0x98) = puVar7 + uVar6;
          *(undefined4 **)(param_1 + 0x94) = puVar7 + iVar15 + 1;
          *puVar12 = (uint)puVar7;
        }
      }
      else {
        *(undefined4 **)(param_1 + 0x94) = puVar2 + 1;
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = uVar14;
        }
      }
      iVar15 = fn_0015ece0(0x6c);
      if (iVar15 == 0) {
        uVar14 = 0;
      }
      else {
        iVar4 = fn_004b61c8(*(undefined4 *)(param_1 + 4));
        iVar5 = fn_004b61c8(*(undefined4 *)(param_1 + 4));
        uVar14 = fn_0046beb4(iVar15,*(uint *)(iVar5 + 0x70) & 0xffff,*(undefined4 *)(iVar4 + 0x74))
        ;
      }
      puVar12 = (uint *)(param_1 + 0x9c);
      puVar2 = *(undefined4 **)(param_1 + 0xa0);
      if (puVar2 == *(undefined4 **)(param_1 + 0xa4)) {
        uVar11 = (int)((int)puVar2 - *puVar12) >> 2;
        if (uVar11 < (uint)((int)((int)*(undefined4 **)(param_1 + 0xa4) - *puVar12) >> 2)) {
          *(undefined4 **)(param_1 + 0xa0) = puVar2 + 1;
          if (puVar2 != (undefined4 *)0x0) {
            *puVar2 = puVar2[-1];
          }
          *puVar2 = uVar14;
        }
        else {
          uVar13 = uVar11 + (uVar11 >> 1) + (uVar11 >> 3);
          uVar6 = uVar11 + 0x20;
          if (uVar11 + 0x20 <= uVar13) {
            uVar6 = uVar13;
          }
          puVar7 = (undefined4 *)fn_0015ece0(uVar6 << 2);
          puVar1 = puVar7;
          for (puVar10 = (undefined4 *)*puVar12; puVar10 != puVar2; puVar10 = puVar10 + 1) {
            if (puVar1 != (undefined4 *)0x0) {
              *puVar1 = *puVar10;
            }
            puVar1 = puVar1 + 1;
          }
          puVar10 = (undefined4 *)(((int)puVar2 - *puVar12 & 0xfffffffc) + (int)puVar7);
          if (puVar10 != (undefined4 *)0x0) {
            *puVar10 = uVar14;
          }
          puVar1 = *(undefined4 **)(param_1 + 0xa0);
          puVar10 = (undefined4 *)(((int)puVar2 - *puVar12 & 0xfffffffc) + (int)puVar7);
          for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
            puVar10 = puVar10 + 1;
            if (puVar10 != (undefined4 *)0x0) {
              *puVar10 = *puVar2;
            }
          }
          uVar13 = *(uint *)(param_1 + 0xa0);
          uVar8 = *puVar12;
          uVar11 = uVar13;
          if (uVar8 < uVar13) {
            uVar11 = (uVar13 - uVar8) * 0x20000000;
          }
          iVar15 = (int)(uVar13 - uVar8) >> 2;
          if (uVar8 < uVar13) {
            uVar11 = uVar11 >> 0x1f;
          }
          else {
            uVar11 = 0;
          }
          for (iVar4 = uVar11 + 1; iVar4 < iVar15 + 1; iVar4 = iVar4 + 2) {
          }
          if (uVar8 != 0) {
            if (*(code **)(uVar8 - 8) == (code *)0x0) {
              fn_0030233c(uVar8 - 8);
            }
            else {
              (**(code **)(uVar8 - 8))();
            }
          }
          *(undefined4 **)(param_1 + 0xa4) = puVar7 + uVar6;
          *(undefined4 **)(param_1 + 0xa0) = puVar7 + iVar15 + 1;
          *puVar12 = (uint)puVar7;
        }
      }
      else {
        *(undefined4 **)(param_1 + 0xa0) = puVar2 + 1;
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = uVar14;
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_2 + 1);
  }
  return;
}


