#include "001bc094_001bc878.h"



undefined4 fn_001bc878(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_0024d7ec();
  fn_001580cc(param_1,uVar1);
  return 1;
}



void fn_001bc828(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x130);
  if (*(uint *)(param_1 + 0x134) < (uint)(iVar1 + param_3)) {
    param_3 = *(uint *)(param_1 + 0x134) - iVar1;
  }
  if (param_3 != 0) {
    fn_00301a9c(iVar1 + DAT_008bf520,param_2,param_3);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(int *)(param_1 + 8) = param_3;
  return;
}



void fn_001bc094(int *param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  ushort uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  ushort *puVar15;
  int iVar16;
  bool bVar17;
  int local_38;
  
  iVar11 = DAT_008bf51c;
  iVar2 = DAT_008bf518;
  iVar10 = DAT_008bf51c + 0x23f8;
  iVar3 = fn_00192124(0x100,0x20);
  iVar12 = 0;
  puVar15 = (ushort *)(iVar2 + 0x2a00);
  uVar5 = 0;
  if (*puVar15 != 0) {
    do {
      iVar14 = -1;
      iVar9 = 0;
      iVar16 = iVar2 + iVar12 * 0x54;
      do {
        iVar4 = fn_001aff7c(iVar10 + iVar9 * 0xe + 8);
        if (iVar4 != 0) {
          iVar14 = iVar9;
          break;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < 3000);
      uVar8 = (ushort)iVar14;
      iVar14 = 0;
      local_38 = -1;
      do {
        iVar9 = fn_001affc4(iVar10 + iVar14 * 0xe + 8,iVar16 + 0xc);
        if (iVar9 != 0) {
          local_38 = iVar14;
          break;
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 < 3000);
      uVar6 = (ushort)local_38;
      uVar5 = (uint)(short)uVar6;
      if ((int)uVar5 < 0) {
        if ((short)uVar8 < 0) {
          uVar6 = *(ushort *)(iVar11 + 0x23fc);
          uVar5 = (uint)(short)uVar6;
          iVar14 = iVar10 + uVar5 * 0xe;
          uVar8 = 0xffff;
          if (uVar5 < 3000) {
            uVar8 = *(ushort *)(iVar11 + 0x23fe);
            if ((*(ushort *)(iVar14 + 0x12) & 0x7fff) == 0x7fff) {
              uVar7 = 0xffffffff;
            }
            else {
              uVar7 = *(ushort *)(iVar14 + 0x12) & 0xffff7fff;
            }
            *(short *)(iVar11 + 0x23fc) = (short)uVar7;
            *(ushort *)(iVar11 + 0x23fe) = uVar6;
            iVar9 = iVar10 + uVar7 * 0xe;
            iVar4 = iVar10 + (short)uVar8 * 0xe;
            *(ushort *)(iVar9 + 0x14) = *(ushort *)(iVar9 + 0x14) | 0x7fff;
            if (uVar5 == 0xffffffff) {
              uVar1 = 0x7fff;
            }
            else {
              uVar1 = uVar6;
            }
            *(ushort *)(iVar4 + 0x12) = *(ushort *)(iVar4 + 0x12) & 0x8000 | uVar1 & 0x7fff;
            *(undefined4 *)(iVar14 + 8) = 0;
            *(undefined4 *)(iVar14 + 0xc) = 0;
            *(undefined4 *)(iVar14 + 0x10) = 0;
            *(undefined2 *)(iVar14 + 0x14) = 0;
            if ((short)uVar8 == -1) {
              uVar8 = 0x7fff;
            }
            *(ushort *)(iVar14 + 0x12) = *(ushort *)(iVar14 + 0x12) | 0x7fff;
            uVar1 = *(ushort *)(iVar14 + 0x14);
            *(ushort *)(iVar14 + 0x14) = uVar1 | 0x7fff;
            *(ushort *)(iVar14 + 0x14) = uVar8 & 0x7fff | uVar1 & 0x8000;
            *(ushort *)(iVar14 + 0x12) = *(ushort *)(iVar14 + 0x12) | 0x7fff;
            *(undefined4 *)(iVar14 + 8) = *(undefined4 *)(iVar16 + 0xc);
            *(undefined4 *)(iVar14 + 0xc) = *(undefined4 *)(iVar16 + 0x10);
            *(undefined2 *)(iVar14 + 0x10) = *(undefined2 *)(iVar16 + 0x14);
            *(ushort *)(iVar14 + 0x12) =
                 *(short *)(iVar16 + 0x18) << 0xf | *(ushort *)(iVar14 + 0x12) & 0x7fff;
            uVar8 = uVar6;
          }
        }
        else {
          iVar14 = iVar10 + (short)uVar8 * 0xe;
          *(undefined4 *)(iVar14 + 8) = 0;
          *(undefined4 *)(iVar14 + 0xc) = 0;
          *(undefined4 *)(iVar14 + 0x10) = 0;
          *(undefined2 *)(iVar14 + 0x14) = 0;
          *(ushort *)(iVar14 + 0x12) = *(ushort *)(iVar14 + 0x12) | 0x7fff;
          *(ushort *)(iVar14 + 0x14) = *(ushort *)(iVar14 + 0x14) | 0x7fff;
          if (*(short *)(iVar11 + 0x23fe) == -1) {
            *(ushort *)(iVar11 + 0x23fc) = uVar8;
            *(ushort *)(iVar11 + 0x23fe) = uVar8;
            *(ushort *)(iVar14 + 0x14) = *(ushort *)(iVar14 + 0x14) | 0x7fff;
            *(ushort *)(iVar14 + 0x12) = *(ushort *)(iVar14 + 0x12) | 0x7fff;
          }
          else {
            iVar9 = iVar10 + *(short *)(iVar11 + 0x23fe) * 0xe;
            *(ushort *)(iVar9 + 0x12) = uVar8 & 0x7fff | *(ushort *)(iVar9 + 0x12) & 0x8000;
            uVar6 = *(ushort *)(iVar11 + 0x23fe);
            if (uVar6 == 0xffff) {
              uVar6 = 0x7fff;
            }
            *(ushort *)(iVar14 + 0x14) = uVar6 & 0x7fff | *(ushort *)(iVar14 + 0x14) & 0x8000;
            *(ushort *)(iVar11 + 0x23fe) = uVar8;
            *(ushort *)(iVar14 + 0x12) = *(ushort *)(iVar14 + 0x12) | 0x7fff;
          }
          *(undefined4 *)(iVar14 + 8) = *(undefined4 *)(iVar16 + 0xc);
          *(undefined4 *)(iVar14 + 0xc) = *(undefined4 *)(iVar16 + 0x10);
          *(undefined2 *)(iVar14 + 0x10) = *(undefined2 *)(iVar16 + 0x14);
          *(ushort *)(iVar14 + 0x12) =
               *(short *)(iVar16 + 0x18) << 0xf | *(ushort *)(iVar14 + 0x12) & 0x7fff;
        }
      }
      else {
        uVar8 = uVar6;
        if (*(char *)(iVar2 + 0x2a02) != '\0' && uVar5 < 3000) {
          iVar14 = iVar10 + uVar5 * 0xe;
          iVar9 = fn_001aff7c(iVar14 + 8);
          if ((iVar9 == 0) && ((int)*(short *)(iVar11 + 0x23fe) != uVar5)) {
            if (((*(ushort *)(iVar14 + 0x14) & 0x7fff) != 0x7fff) &&
               (uVar7 = *(ushort *)(iVar14 + 0x14) & 0xffff7fff, uVar7 != 0xffffffff)) {
              iVar9 = iVar10 + uVar7 * 0xe;
              if ((*(ushort *)(iVar14 + 0x12) & 0x7fff) == 0x7fff) {
                uVar1 = *(ushort *)(iVar9 + 0x12) & 0x8000;
LAB_001bc228:
                uVar7 = 0x7fff;
              }
              else {
                uVar7 = *(ushort *)(iVar14 + 0x12) & 0xffff7fff;
                uVar1 = *(ushort *)(iVar9 + 0x12) & 0x8000;
                if (uVar7 == 0xffffffff) goto LAB_001bc228;
              }
              *(ushort *)(iVar9 + 0x12) = (ushort)uVar7 | uVar1;
            }
            if (((*(ushort *)(iVar14 + 0x12) & 0x7fff) != 0x7fff) &&
               (uVar7 = *(ushort *)(iVar14 + 0x12) & 0xffff7fff, uVar7 != 0xffffffff)) {
              iVar9 = iVar10 + uVar7 * 0xe;
              if ((*(ushort *)(iVar14 + 0x14) & 0x7fff) == 0x7fff) {
                uVar1 = *(ushort *)(iVar9 + 0x14) & 0x8000;
LAB_001bc284:
                uVar7 = 0x7fff;
              }
              else {
                uVar7 = *(ushort *)(iVar14 + 0x14) & 0xffff7fff;
                uVar1 = *(ushort *)(iVar9 + 0x14) & 0x8000;
                if (uVar7 == 0xffffffff) goto LAB_001bc284;
              }
              *(ushort *)(iVar9 + 0x14) = (ushort)uVar7 | uVar1;
            }
            if ((int)*(short *)(iVar11 + 0x23fc) == uVar5) {
              if ((*(ushort *)(iVar14 + 0x12) & 0x7fff) == 0x7fff) {
                uVar1 = 0xffff;
              }
              else {
                uVar1 = *(ushort *)(iVar14 + 0x12) & 0x7fff;
              }
              *(ushort *)(iVar11 + 0x23fc) = uVar1;
            }
            iVar9 = iVar10 + *(short *)(iVar11 + 0x23fe) * 0xe;
            *(ushort *)(iVar9 + 0x12) = *(ushort *)(iVar9 + 0x12) & 0x8000 | uVar6 & 0x7fff;
            uVar1 = *(ushort *)(iVar11 + 0x23fe);
            if (uVar1 == 0xffff) {
              uVar1 = 0x7fff;
            }
            *(ushort *)(iVar14 + 0x14) = uVar1 & 0x7fff | *(ushort *)(iVar14 + 0x14) & 0x8000;
            *(ushort *)(iVar14 + 0x12) = *(ushort *)(iVar14 + 0x12) | 0x7fff;
            *(ushort *)(iVar11 + 0x23fe) = uVar6;
          }
        }
      }
      iVar14 = iVar12 * 2;
      iVar12 = iVar12 + 1;
      *(ushort *)(iVar3 + iVar14) = uVar8;
      uVar5 = (uint)*puVar15;
    } while (iVar12 < (int)uVar5);
  }
  iVar11 = 0;
  if (uVar5 != 0) {
    do {
      iVar9 = iVar2 + iVar11 * 0x54;
      iVar12 = (int)*(short *)(iVar3 + iVar11 * 2);
      iVar14 = iVar11 + 1;
      iVar10 = 1;
      while ((iVar14 < (int)(uint)*puVar15 &&
             ((int)*(short *)(iVar3 + (iVar11 + iVar10) * 2) == iVar12 + iVar10))) {
        iVar10 = iVar10 + 1;
        iVar14 = iVar11 + iVar10;
      }
      iVar14 = fn_00191f08();
      if (iVar14 != 0) {
        iVar14 = fn_00192114();
        *(undefined1 *)(iVar14 + 0xc0) = 1;
        iVar14 = fn_00192114();
        *(undefined4 *)(iVar14 + 200) = 10;
      }
      *(undefined1 *)((int)param_1 + 0x13) = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[6] = iVar12 * 0x54 + 0xe4c0;
      param_1[7] = iVar10 * 0x54;
      param_1[8] = iVar9;
      *(undefined1 *)(param_1 + 4) = 0;
      param_1[3] = (int)fn_0019d684;
      fn_0019d684(param_1,0);
      iVar14 = fn_001851bc();
      if (iVar14 == 10) {
        fn_0018501c();
      }
      iVar14 = fn_001851bc();
      if (iVar14 != 0) {
        iVar11 = fn_00192114();
        *(undefined4 *)(iVar11 + 200) = 5;
        break;
      }
      iVar14 = fn_00191f08();
      if ((iVar14 != 0) && (*(char *)(DAT_008bf518 + 0x2a08) != '\0')) {
        fn_0017821c(*(int *)(iVar2 + 0x2a04) + iVar12 * 0x54,iVar9,iVar10 * 0x54);
      }
      iVar11 = iVar11 + iVar10;
    } while (iVar11 < (int)(uint)*puVar15);
  }
  fn_001920f4(iVar3);
  fn_001af208(param_1);
  if (param_1[1] != 0) {
    iVar11 = fn_00192114();
    *(undefined4 *)(iVar11 + 200) = 5;
  }
  iVar3 = fn_001851bc();
  iVar11 = DAT_008bf51c;
  if (iVar3 == 0) {
    bVar17 = DAT_008bf51c == 0;
    *(undefined1 *)(DAT_008bf51c + 0xe4c1) = 1;
    uVar13 = *(undefined4 *)(iVar2 + 0x2a0c);
    if (((bVar17) || (iVar2 = fn_00184c20(1), iVar2 != 0)) || (iVar2 = fn_00184c20(0), iVar2 != 0)
       ) {
      return;
    }
    *(undefined4 *)(iVar11 + 0xe4d8) = uVar13;
    *(undefined4 *)(iVar11 + 0xe4e0) = 2;
    fn_001bfa88(param_1,&LAB_001c0a04);
    fn_001851bc();
    return;
  }
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[3] = 0x19d818;
  *(undefined1 *)(param_1 + 4) = 0;
  while (param_1[9] == 0) {
    param_1[9] = 1;
    iVar2 = fn_00192114();
    *(undefined4 *)(iVar2 + 0xd0) = *(undefined4 *)(iVar2 + 200);
    *(undefined4 *)(iVar2 + 0xd4) = *(undefined4 *)(iVar2 + 0xcc);
    if (*(code **)(*param_1 + 0x14) == (code *)0x0) {
      iVar2 = 3;
    }
    else {
      iVar2 = (**(code **)(*param_1 + 0x14))();
    }
    param_1[1] = iVar2;
    if (iVar2 == 10) {
      return;
    }
  }
  if (param_1[9] != 1) {
    return;
  }
  param_1[9] = 2;
  if (param_1[2] == 0) {
    *(undefined1 *)((int)param_1 + 0x11) = 0;
    iVar2 = fn_00192114();
    param_1[1] = *(int *)(iVar2 + 0xd0);
    param_1[2] = *(int *)(iVar2 + 0xd4);
  }
  iVar2 = param_1[1];
  if (iVar2 == 10) {
    return;
  }
  iVar3 = param_1[2];
  iVar11 = fn_00192114();
  *(undefined1 *)(iVar11 + 0xc0) = 0;
  iVar11 = fn_00192114();
  if (*(int *)(iVar11 + 200) == 0 || *(int *)(iVar11 + 200) == 10) {
    iVar11 = fn_00192114();
    *(int *)(iVar11 + 200) = iVar2;
    iVar2 = fn_00192114();
    *(int *)(iVar2 + 0xcc) = iVar3;
  }
  if ((code *)param_1[10] == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0019d918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_1[10])(param_1,param_1[2]);
  return;
}


