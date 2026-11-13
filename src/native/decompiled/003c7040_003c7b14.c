#include "003c7040_003c7b14.h"



void fn_003c7b14(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x180,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003c7d20(iVar1,param_1);
  return;
}



void fn_003c7ad0(int param_1)

{
  fn_002c3d68();
  fn_006899f4(param_1,*(undefined4 *)(*(int *)(param_1 + 0x164) + 0x14),1);
  fn_0044a864(param_1,3);
                    /* WARNING: Could not recover jumptable at 0x003c7b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x164) + 0xc))();
  return;
}



void fn_003c73c0(int param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  
  iVar1 = *(int *)(param_1 + 0x160);
  piVar9 = (int *)0x0;
  if (iVar1 == 0) {
    iVar1 = fn_006f6a6c(param_1);
    if (iVar1 != 0) {
      if (iVar1 == 2) goto LAB_003c7570;
      if (iVar1 == 3) {
        uVar4 = *(undefined4 *)(DAT_00897804 + 0x38);
        iVar1 = fn_006b876c(uVar4);
        iVar10 = 0;
        if (0 < iVar1) {
          do {
            iVar2 = fn_0028bb88(uVar4,iVar10);
            if ((*(byte *)(iVar2 + 0xa74) & 8) != 0) {
              iVar7 = *(int *)(param_1 + 0x170) + iVar10;
              uVar8 = iVar7 % 0x20;
              puVar3 = (uint *)(*(int *)(param_1 + 0x16c) +
                               ((int)(iVar7 + ((uint)(iVar7 >> 0x1f) >> 0x1b)) >> 5) * 4);
              if ((int)uVar8 < 0) {
                puVar3 = puVar3 + -1;
                uVar8 = uVar8 + 0x20;
              }
              if ((*puVar3 & 1 << (uVar8 & 0xff)) != 0) {
                if (iVar2 != 0) {
                  fn_0015b0dc(iVar2 + 4);
                  uVar4 = fn_0022f584((char *)&DAT_003c7790,0);
                  fn_0068974c(param_1,uVar4,1);
                  *(undefined4 *)(param_1 + 0x160) = 1;
                  return;
                }
                break;
              }
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 < iVar1);
        }
        fn_003c77d4(param_1);
        goto LAB_003c7594;
      }
    }
    return;
  }
  if (iVar1 == 1) {
    iVar1 = fn_006f6a6c(param_1);
    if (iVar1 == 0) {
      return;
    }
    if (iVar1 != 2) {
      if (iVar1 == 3) {
        fn_002937a8();
        fn_003c77d4(param_1);
        uVar4 = fn_00689b18(param_1);
        fn_00294160(uVar4,0);
        *(undefined4 *)(param_1 + 0x160) = 2;
        return;
      }
      return;
    }
LAB_003c7570:
    fn_0044a864(param_1,1);
    return;
  }
  if (iVar1 == 2) {
    iVar1 = fn_00291ae4();
    if (iVar1 == 0) {
      return;
    }
LAB_003c7594:
    uVar4 = fn_0022f584((char *)&DAT_003c77b0,0);
    fn_0068974c(param_1,uVar4,0,1);
    *(undefined4 *)(param_1 + 0x160) = 3;
    return;
  }
  if (iVar1 != 3) {
    return;
  }
  iVar1 = fn_006f6a6c(param_1);
  if (iVar1 != 1) {
    return;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x164) + 0x14);
  if (iVar1 == 0xd8) {
    uVar4 = fn_006e7bec(*(int *)(param_1 + 0x164),0);
    fn_0030d6bc(*(undefined4 *)(param_1 + 0x168),uVar4);
    piVar5 = (int *)fn_001f74ec(param_1,0xd8);
    if (piVar5 != (int *)0x0) {
      puVar6 = (undefined4 *)(**(code **)*piVar5)(piVar5);
      do {
        if (puVar6 == &DAT_0089666c) goto LAB_003c7614;
        puVar6 = (undefined4 *)*puVar6;
      } while (puVar6 != (undefined4 *)0x0);
    }
    piVar5 = (int *)0x0;
LAB_003c7614:
    (**(code **)(*piVar5 + 0xc))(piVar5);
    iVar1 = fn_006be118(*(undefined4 *)(param_1 + 0x168));
    if (iVar1 != 0) {
      fn_006899f4(param_1,0xd7,1);
      goto LAB_003c76c0;
    }
    piVar5 = (int *)fn_001f74ec(param_1,0xd7);
    if (piVar5 != (int *)0x0) {
      puVar6 = (undefined4 *)(**(code **)*piVar5)(piVar5);
      do {
        if (puVar6 == &DAT_0089679c) goto LAB_003c76a0;
        puVar6 = (undefined4 *)*puVar6;
      } while (puVar6 != (undefined4 *)0x0);
    }
  }
  else {
    if (iVar1 != 0xd9) goto LAB_003c76c0;
    piVar5 = (int *)fn_001f74ec(param_1,0xd9);
    if (piVar5 != (int *)0x0) {
      puVar6 = (undefined4 *)(**(code **)*piVar5)(piVar5);
      do {
        if (puVar6 == &DAT_00896630) goto LAB_003c7728;
        puVar6 = (undefined4 *)*puVar6;
      } while (puVar6 != (undefined4 *)0x0);
    }
    piVar5 = (int *)0x0;
LAB_003c7728:
    (**(code **)(*piVar5 + 0xc))();
    fn_0030d5c4(*(undefined4 *)(param_1 + 0x168));
    piVar5 = (int *)fn_001f74ec(param_1,0xd7);
    if (piVar5 != (int *)0x0) {
      puVar6 = (undefined4 *)(**(code **)*piVar5)(piVar5);
      do {
        if (puVar6 == &DAT_0089679c) {
          piVar9 = piVar5;
          break;
        }
        puVar6 = (undefined4 *)*puVar6;
      } while (puVar6 != (undefined4 *)0x0);
    }
  }
  piVar5 = piVar9;
LAB_003c76a0:
  (**(code **)(*piVar5 + 0xc))();
  fn_006899f4(param_1,0xd4,1);
LAB_003c76c0:
  fn_0044a864(param_1,3);
                    /* WARNING: Could not recover jumptable at 0x003c76dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x164) + 0xc))();
  return;
}



/* WARNING: Removing unreachable block (ram,0x003c79a0) */
/* WARNING: Removing unreachable block (ram,0x003c79a4) */
/* WARNING: Removing unreachable block (ram,0x003c79a8) */
/* WARNING: Removing unreachable block (ram,0x003c79ac) */
/* WARNING: Removing unreachable block (ram,0x003c79b0) */

void fn_003c77d4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 *puVar14;
  
  puVar11 = (undefined4 *)0x0;
  puVar12 = (undefined4 *)0x0;
  puVar14 = (undefined4 *)0x0;
  iVar13 = 0;
  uVar1 = *(undefined4 *)(DAT_00897804 + 0x38);
  iVar2 = fn_006b876c();
  puVar7 = puVar11;
  puVar5 = puVar12;
  if (0 < iVar2) {
    do {
      iVar2 = *(int *)(param_1 + 0x170) + iVar13;
      uVar8 = iVar2 % 0x20;
      puVar3 = (uint *)(*(int *)(param_1 + 0x16c) +
                       ((int)(iVar2 + ((uint)(iVar2 >> 0x1f) >> 0x1b)) >> 5) * 4);
      if ((int)uVar8 < 0) {
        puVar3 = puVar3 + -1;
        uVar8 = uVar8 + 0x20;
      }
      puVar11 = puVar7;
      puVar12 = puVar5;
      if ((*puVar3 & 1 << (uVar8 & 0xff)) != 0) {
        puVar4 = (undefined4 *)fn_0028bb88(uVar1,iVar13);
        if ((*(byte *)(puVar4 + 0x29d) & 8) != 0) {
          fn_0028bb6c(uVar1,0);
        }
        if (puVar7 == puVar14) {
          uVar8 = (int)puVar7 - (int)puVar5 >> 2;
          if (uVar8 < (uint)((int)puVar14 - (int)puVar5 >> 2)) {
            puVar5 = puVar7 + -1;
            if (puVar7 != (undefined4 *)0x0) {
              *puVar7 = puVar7[-1];
            }
            puVar11 = puVar7 + 1;
            puVar10 = puVar7;
            if (puVar7 < puVar5) {
              iVar2 = (int)puVar5 - (int)puVar7;
              if (0 < iVar2) {
                if (iVar2 * 0x20000000 < 0) {
                  puVar5 = puVar7 + -2;
                  puVar10 = puVar7 + -1;
                  *puVar10 = *puVar5;
                }
                for (iVar2 = iVar2 >> 3; iVar2 != 0; iVar2 = iVar2 + -1) {
                  puVar10[-1] = puVar5[-1];
                  puVar5 = puVar5 + -2;
                  puVar10 = puVar10 + -2;
                  *puVar10 = *puVar5;
                }
              }
            }
            else {
              while (puVar7 != puVar5) {
                puVar5 = puVar5 + -1;
                puVar10[-1] = *puVar5;
                puVar10 = puVar10 + -1;
              }
            }
            *puVar7 = *puVar4;
          }
          else {
            uVar9 = uVar8 + (uVar8 >> 1) + (uVar8 >> 3);
            if (uVar9 < uVar8 + 0x20) {
              uVar9 = uVar8 + 0x20;
            }
            puVar12 = (undefined4 *)fn_00100fc6(uVar9 << 2,0);
            puVar10 = puVar12;
            for (puVar11 = puVar5; puVar11 != puVar7; puVar11 = puVar11 + 1) {
              if (puVar10 != (undefined4 *)0x0) {
                *puVar10 = *puVar11;
              }
              puVar10 = puVar10 + 1;
            }
            puVar11 = (undefined4 *)(((int)puVar7 - (int)puVar5 & 0xfffffffcU) + (int)puVar12);
            if (puVar11 != (undefined4 *)0x0) {
              *puVar11 = *puVar4;
            }
            puVar11 = puVar5;
            if (puVar7 < puVar5) {
              do {
                puVar11 = puVar11 + 1;
              } while (puVar11 != puVar7);
            }
            fn_001008c4(puVar5,(int)puVar14 - (int)puVar5 >> 2,0);
            puVar11 = puVar12 + ((int)puVar7 - (int)puVar5 >> 2) + 1;
            puVar14 = puVar12 + uVar9;
          }
        }
        else {
          if (puVar7 != (undefined4 *)0x0) {
            *puVar7 = *puVar4;
          }
          puVar11 = puVar7 + 1;
        }
      }
      iVar13 = iVar13 + 1;
      iVar2 = fn_006b876c(uVar1);
      puVar7 = puVar11;
      puVar5 = puVar12;
    } while (iVar13 < iVar2);
  }
  uVar8 = 0;
  if ((int)puVar11 - (int)puVar12 >> 2 != 0) {
    do {
      fn_0028ba38(uVar1,puVar12[uVar8]);
      uVar8 = uVar8 + 1;
    } while (uVar8 < (uint)((int)puVar11 - (int)puVar12 >> 2));
  }
  iVar2 = fn_006e7c24(*(undefined4 *)(param_1 + 0x164));
  iVar13 = 0;
  if (0 < iVar2) {
    do {
      uVar6 = fn_006e7bec(*(undefined4 *)(param_1 + 0x164),iVar13);
      uVar6 = fn_006be0f4(*(undefined4 *)(param_1 + 0x168),uVar6);
      fn_0028b988(uVar1,uVar6);
      iVar13 = iVar13 + 1;
    } while (iVar13 < iVar2);
  }
  puVar7 = puVar12;
  if (puVar11 < puVar12) {
    do {
      puVar7 = puVar7 + 1;
    } while (puVar7 != puVar11);
  }
  fn_002feef8(puVar12,(int)puVar14 - (int)puVar12 >> 2,0);
  return;
}



void fn_003c70f0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002e6a94();
  puVar1[0x27] = 0;
  *puVar1 = &DAT_00830704;
  puVar1[0x28] = 0;
  puVar1[0x29] = 0;
  return;
}



void fn_003c7040(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0xee);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00893b10) goto LAB_003c7088;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_003c7088:
  iVar4 = puVar1[2];
  if (*(int *)(param_1 + 0xa4) == iVar4) {
    return;
  }
  *(int *)(param_1 + 0xa4) = iVar4;
  uVar3 = fn_0058417c(*(undefined4 *)(param_1 + 0x9c),iVar4);
  uVar3 = fn_0022f584(uVar3,0);
  fn_002e6978(param_1,uVar3);
  uVar3 = fn_0022f584((&PTR_s_HelpTextPassingSecret1_008969c8)[iVar4],0);
  fn_00190d50(*(undefined4 *)(param_1 + 0xa0),uVar3);
  return;
}


