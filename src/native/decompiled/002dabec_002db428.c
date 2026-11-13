#include "002dabec_002db428.h"



void fn_002db428(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_006f7a20(DAT_008977e0);
  if ((iVar1 == 0) && (iVar1 = fn_002fb61c(), iVar1 == 0)) {
    fn_002d89ac(param_1);
    iVar1 = fn_002d8370(0xffffffff);
    if (iVar1 != 0) {
      fn_002d8f08(param_1);
      return;
    }
  }
  return;
}



undefined4 fn_002db330(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  iVar1 = fn_0011c1b4(L"rom:/data/Parameter/CrackPlaceEffectTable.tp",0,0,0,0,0,0,0,5);
  *(int *)(param_1 + 0x4c) = iVar1;
  if (iVar1 != 0) {
    iVar1 = fn_00145ac0();
    if ((iVar1 != 0) && (iVar1 = fn_00145aac(*(undefined4 *)(param_1 + 0x4c)), iVar1 == 1)) {
      iVar1 = fn_00145ac0(*(undefined4 *)(param_1 + 0x4c));
      uVar5 = fn_0012a26c(*(undefined4 *)(param_1 + 0x4c));
      iVar2 = fn_00147e6c(iVar1,&DAT_007bd8e1,4);
      if (iVar2 == 0) {
        uVar4 = (uint)uVar5 - 4;
        *(int *)(param_1 + 0x50) = iVar1 + 4;
        uVar3 = fn_0011c134(uVar4,(int)((ulonglong)uVar5 >> 0x20) - (uint)((uint)uVar5 < 4),8,0);
        *(undefined4 *)(param_1 + 0x54) = uVar3;
        if ((uVar4 & 7) == 0) {
          return 1;
        }
      }
      return 0;
    }
    fn_0012d73c(*(undefined4 *)(param_1 + 0x4c));
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x002dae60) */
/* WARNING: Removing unreachable block (ram,0x002dae64) */
/* WARNING: Removing unreachable block (ram,0x002dae68) */
/* WARNING: Removing unreachable block (ram,0x002dae6c) */
/* WARNING: Removing unreachable block (ram,0x002dae70) */

void fn_002dace8(int param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  int iVar15;
  int *piVar16;
  int in_r12;
  uint local_98 [27];
  int local_2c;
  
  piVar12 = (int *)0x0;
  piVar13 = (int *)0x0;
  piVar14 = (int *)0x0;
  if (*(char *)(param_1 + 0x3c) != '\0') {
    iVar15 = 0;
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
    iVar4 = (int)((longlong)(int)uVar3 * -0x6db6db6d + ((ulonglong)uVar3 << 0x20) >> 0x20);
    local_2c = (iVar4 >> 5) - (iVar4 >> 0x1f);
    piVar16 = piVar13;
    if (0 < local_2c) {
      do {
        iVar4 = *(int *)(param_1 + 4) + iVar15 * 0x38;
        if (piVar16 == piVar14) {
          uVar3 = (int)piVar16 - (int)piVar12 >> 2;
          if (uVar3 < (uint)((int)piVar14 - (int)piVar12 >> 2)) {
            piVar8 = piVar16 + -1;
            if (piVar16 != (int *)0x0) {
              *piVar16 = piVar16[-1];
            }
            piVar13 = piVar16 + 1;
            piVar5 = piVar16;
            if (piVar16 < piVar8) {
              if (0 < (int)piVar8 - (int)piVar16) {
                iVar11 = (int)piVar8 - (int)piVar16 >> 2;
                iVar10 = 0;
                do {
                  in_r12 = piVar8[iVar10 + -1];
                  iVar11 = iVar11 + -1;
                  piVar16[iVar10 + -1] = in_r12;
                  iVar10 = iVar10 + -1;
                } while (iVar11 != 0);
              }
            }
            else {
              while (piVar16 != piVar8) {
                piVar8 = piVar8 + -1;
                piVar5[-1] = *piVar8;
                piVar5 = piVar5 + -1;
              }
            }
            *piVar16 = iVar4;
          }
          else {
            local_98[0] = uVar3 + (uVar3 >> 1) + (uVar3 >> 3);
            if (local_98[0] < uVar3 + 0x20) {
              local_98[0] = uVar3 + 0x20;
            }
            piVar5 = (int *)fn_00100fc6(local_98[0] << 2,0);
            piVar8 = piVar5;
            for (piVar13 = piVar12; piVar13 != piVar16; piVar13 = piVar13 + 1) {
              if (piVar8 != (int *)0x0) {
                *piVar8 = *piVar13;
              }
              piVar8 = piVar8 + 1;
            }
            piVar13 = (int *)(((int)piVar16 - (int)piVar12 & 0xfffffffcU) + (int)piVar5);
            if (piVar13 != (int *)0x0) {
              *piVar13 = iVar4;
            }
            piVar13 = piVar12;
            if (piVar16 < piVar12) {
              do {
                piVar13 = piVar13 + 1;
              } while (piVar13 != piVar16);
            }
            fn_001008c4(piVar12,(int)piVar14 - (int)piVar12 >> 2,0);
            piVar13 = piVar5 + ((int)piVar16 - (int)piVar12 >> 2) + 1;
            piVar14 = piVar5 + local_98[0];
            piVar12 = piVar5;
          }
        }
        else {
          piVar13 = piVar16 + 1;
          if (piVar16 != (int *)0x0) {
            *piVar16 = iVar4;
          }
        }
        iVar15 = iVar15 + 1;
        piVar16 = piVar13;
      } while (iVar15 < local_2c);
    }
    piVar16 = &DAT_008977e0;
    uVar6 = fn_006afe90(*(undefined4 *)(DAT_008977e0 + 0x1c),*(undefined4 *)(DAT_008977e0 + 0xa8));
    iVar4 = fn_006bac00(param_1,uVar6);
    bVar1 = *(byte *)(iVar4 + 2);
    if (bVar1 == 0) {
      uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
      iVar4 = (int)((longlong)(int)uVar3 * -0x6db6db6d + ((ulonglong)uVar3 << 0x20) >> 0x20);
      in_r12 = iVar4 >> 5;
      uVar3 = 0;
      if (in_r12 != iVar4 >> 0x1f) {
        do {
          uVar7 = uVar3 + 1;
          *(undefined4 *)(*(int *)(param_1 + 4) + uVar3 * 0x38 + 8) = 1;
          uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
          iVar4 = (int)((longlong)(int)uVar3 * -0x6db6db6d + ((ulonglong)uVar3 << 0x20) >> 0x20);
          in_r12 = iVar4 >> 5;
          uVar3 = uVar7;
        } while (uVar7 < (uint)(in_r12 - (iVar4 >> 0x1f)));
      }
    }
    else {
      fn_0017821c(local_98,&DAT_007bd8f0,0x6c);
      local_98[2] = (uint)*(byte *)(iVar4 + 3);
      local_98[5] = (uint)*(byte *)(iVar4 + 4);
      local_98[8] = (uint)*(byte *)(iVar4 + 5);
      local_98[0xb] = (uint)*(byte *)(iVar4 + 6);
      local_98[0xe] = (uint)*(byte *)(iVar4 + 7);
      local_98[0x11] = (uint)*(byte *)(iVar4 + 8);
      local_98[0x14] = (uint)*(byte *)(iVar4 + 9);
      local_98[0x17] = (uint)*(byte *)(iVar4 + 10);
      local_98[0x1a] = (uint)*(byte *)(iVar4 + 0xb);
      bVar2 = *(byte *)(iVar4 + 1);
      iVar4 = fn_00163868(((uint)bVar1 - (uint)bVar2) + 1);
      uVar3 = (uint)bVar2 + iVar4;
      iVar4 = fn_006f6fc4(*(undefined4 *)(DAT_008977e0 + 0x40));
      if (iVar4 == 0) {
        if (piVar12 != piVar13) {
          piVar16 = piVar12 + 1;
        }
        if (piVar12 != piVar13 && piVar16 != piVar13) {
          do {
            iVar4 = fn_00163868(((int)piVar16 - (int)piVar12 >> 2) + 1);
            iVar15 = *piVar16;
            piVar8 = piVar16 + 1;
            *piVar16 = piVar12[iVar4];
            piVar12[iVar4] = iVar15;
            piVar16 = piVar8;
          } while (piVar8 != piVar13);
        }
      }
      else {
        fn_003d5ddc(*(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 4));
        piVar16 = (int *)0x0;
        do {
          fn_00163868(0x7fffffff);
          piVar16 = (int *)((int)piVar16 + 1);
        } while ((int)piVar16 < 1000);
        if (piVar12 != piVar13) {
          piVar16 = piVar12 + 1;
        }
        if (piVar12 != piVar13 && piVar16 != piVar13) {
          do {
            iVar4 = fn_00163868(((int)piVar16 - (int)piVar12 >> 2) + 1);
            iVar15 = *piVar16;
            piVar8 = piVar16 + 1;
            *piVar16 = piVar12[iVar4];
            piVar12[iVar4] = iVar15;
            piVar16 = piVar8;
          } while (piVar8 != piVar13);
        }
        fn_00107aa4(*(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 4));
        if ((local_2c < 1) ||
           (iVar4 = fn_006c89fc(*(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 4)), iVar4 != 0)) {
          uVar3 = 0;
        }
        else {
          uVar3 = 1;
          *(undefined4 *)(*piVar12 + 0xc) = 3;
          *(undefined4 *)(*piVar12 + 0x10) = 0;
          *(uint *)(*piVar12 + 8) = *(uint *)(*piVar12 + 8) | 8;
        }
      }
      uVar7 = uVar3;
      if (uVar3 < (uint)((int)piVar13 - (int)piVar12 >> 2)) {
        do {
          piVar16 = piVar12 + uVar7;
          uVar7 = uVar7 + 1;
          *(undefined4 *)(*piVar16 + 8) = 1;
        } while (uVar7 < (uint)((int)piVar13 - (int)piVar12 >> 2));
      }
      iVar4 = fn_006f6fc4(*(undefined4 *)(DAT_008977e0 + 0x40));
      if (iVar4 == 0) {
        iVar4 = fn_002da774(param_1);
        for (uVar7 = 0;
            ((int)uVar7 < (int)uVar3 && (uVar7 < (uint)((int)piVar13 - (int)piVar12 >> 2)));
            uVar7 = uVar7 + 1) {
          do {
            iVar15 = fn_00163868(100);
            uVar9 = 0;
            do {
              iVar15 = iVar15 - local_98[uVar9 * 3 + 2];
              if (iVar15 < 0) {
                piVar16 = piVar12 + uVar7;
                *(uint *)(*piVar16 + 0xc) = local_98[uVar9 * 3];
                uVar9 = local_98[uVar9 * 3 + 1];
                *(uint *)(*piVar16 + 0x10) = uVar9;
                if (*(int *)(*piVar16 + 0xc) == 1 && uVar9 == 2) {
                  uVar6 = fn_006bad40(param_1);
                  *(undefined4 *)(param_1 + 0x60) = uVar6;
                }
                break;
              }
              uVar9 = uVar9 + 1;
            } while (uVar9 < 9);
          } while ((iVar4 == 0) && (*(int *)(piVar12[uVar7] + 0x10) == 2));
        }
      }
    }
    *(undefined1 *)(param_1 + 0x3c) = 0;
  }
  iVar15 = *(int *)(DAT_008977e0 + 0xa8);
  uVar6 = fn_006f7a0c();
  iVar4 = fn_006f6434(uVar6,iVar15);
  uVar3 = 0;
  if (iVar4 == 2) {
    in_r12 = 1;
  }
  uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
  if (iVar4 != 2) {
    in_r12 = 0;
  }
  iVar4 = (int)((longlong)(int)uVar7 * -0x6db6db6d + ((ulonglong)uVar7 << 0x20) >> 0x20);
  if (iVar4 >> 5 != iVar4 >> 0x1f) {
    do {
      iVar4 = *(int *)(param_1 + 4) + uVar3 * 0x38;
      uVar7 = *(uint *)(iVar4 + 8);
      if (uVar7 != 1) {
        if (*(int *)(iVar4 + 0x18) == iVar15 && in_r12 == 0) {
          uVar7 = uVar7 & 0xfffffffd;
        }
        else {
          uVar7 = uVar7 | 2;
        }
        *(uint *)(iVar4 + 8) = uVar7;
      }
      uVar3 = uVar3 + 1;
      uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
      iVar4 = (int)((longlong)(int)uVar7 * -0x6db6db6d + ((ulonglong)uVar7 << 0x20) >> 0x20);
    } while (uVar3 < (uint)((iVar4 >> 5) - (iVar4 >> 0x1f)));
  }
  piVar16 = piVar12;
  if (piVar13 < piVar12) {
    do {
      piVar16 = piVar16 + 1;
    } while (piVar16 != piVar13);
  }
  fn_002feef8(piVar12,(int)piVar14 - (int)piVar12 >> 2,0);
  return;
}



undefined4 fn_002dabec(int param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar1 = fn_0011c1b4(L"rom:/data/Parameter/CrackPlaceTable.tp",0,0,0,0,0,0,0,5);
  *(int *)(param_1 + 0x44) = iVar1;
  if (iVar1 != 0) {
    iVar1 = fn_00145ac0();
    if ((iVar1 != 0) && (iVar1 = fn_00145aac(*(undefined4 *)(param_1 + 0x44)), iVar1 == 1)) {
      iVar1 = fn_00145ac0(*(undefined4 *)(param_1 + 0x44));
      uVar3 = fn_0012a26c(*(undefined4 *)(param_1 + 0x44));
      iVar2 = fn_00147e6c(iVar1,&DAT_007bd8dc,4);
      if (iVar2 == 0) {
        DAT_008911fc = iVar1 + 4;
        iVar1 = 0x30;
        iVar2 = 0;
        DAT_00891200 = fn_0011c134((uint)uVar3 - 4,
                                    (int)((ulonglong)uVar3 >> 0x20) - (uint)((uint)uVar3 < 4));
        if (iVar1 == 0 && iVar2 == 0) {
          return 1;
        }
      }
      return 0;
    }
    fn_0012d73c(*(undefined4 *)(param_1 + 0x44));
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  return 0;
}


