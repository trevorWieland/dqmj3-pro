#include "001848e4_00184c6c.h"



void fn_00184c6c(int *param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = fn_00191f08();
  if (iVar2 != 0) {
    iVar2 = fn_00192114();
    *(undefined1 *)(iVar2 + 0xc0) = 1;
    iVar2 = fn_00192114();
    *(undefined4 *)(iVar2 + 200) = 10;
  }
  param_1[9] = 0;
  param_1[10] = param_2;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[3] = 0x192228;
  *(undefined1 *)(param_1 + 4) = 0;
LAB_0019224c:
  do {
    while( true ) {
      while (iVar2 = param_1[9], iVar2 == 0) {
        if (*(char *)((int)param_1 + 0x11) == '\0') {
          param_1[9] = 2;
          param_1[1] = 0;
        }
        else {
          param_1[9] = 1;
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
      }
      if (iVar2 != 1) break;
      iVar2 = param_1[1];
joined_r0x00192308:
      if (iVar2 != 0) goto LAB_00192288;
      param_1[9] = 2;
    }
    if (iVar2 != 2) {
      if (iVar2 != 3) {
        if (iVar2 != 4) {
          return;
        }
        iVar2 = param_1[1];
        param_1[9] = 5;
        goto joined_r0x00192308;
      }
      if (param_1[2] == -2) {
        if (*(char *)((int)param_1 + 0x12) != '\0') {
          param_1[9] = 4;
          if (*(code **)(*param_1 + 8) == (code *)0x0) {
            iVar2 = 3;
          }
          else {
            iVar2 = (**(code **)(*param_1 + 8))(param_1,0x4bd20);
          }
          param_1[1] = iVar2;
          if (iVar2 == 10) {
            return;
          }
          goto LAB_0019224c;
        }
LAB_0019239c:
        uVar1 = 0;
      }
      else {
        if (param_1[2] != 0) goto LAB_0019239c;
        uVar1 = 1;
      }
      *(undefined1 *)((int)param_1 + 0x11) = uVar1;
LAB_00192288:
      iVar2 = param_1[1];
      if (iVar2 == 10) {
        return;
      }
      iVar4 = param_1[2];
      iVar3 = fn_00192114();
      *(undefined1 *)(iVar3 + 0xc0) = 0;
      iVar3 = fn_00192114();
      if (*(int *)(iVar3 + 200) == 0 || *(int *)(iVar3 + 200) == 10) {
        iVar3 = fn_00192114();
        *(int *)(iVar3 + 200) = iVar2;
        iVar2 = fn_00192114();
        *(int *)(iVar2 + 0xcc) = iVar4;
      }
      if ((code *)param_1[10] == (code *)0x0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x001923d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_1[10])(param_1,param_1[2]);
      return;
    }
    param_1[9] = 3;
    *(undefined1 *)((int)param_1 + 0x11) = 0;
    if (*(code **)(*param_1 + 0x10) == (code *)0x0) {
      iVar2 = 3;
    }
    else {
      iVar2 = (**(code **)(*param_1 + 0x10))();
    }
    param_1[1] = iVar2;
    if (iVar2 == 10) {
      return;
    }
  } while( true );
}



undefined1 fn_00184c50(void)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = fn_00191f08();
  uVar1 = 0;
  if (iVar2 != 0) {
    iVar2 = fn_00192114();
    uVar1 = *(undefined1 *)(iVar2 + 0xc0);
  }
  return uVar1;
}



void fn_00184c14(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00184c1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 4))();
  return;
}



undefined4 fn_00184b48(undefined4 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *local_28;
  uint local_24 [6];
  
  local_24[0] = 0;
  local_24[1] = 0;
  local_24[2] = 0;
  local_24[3] = 0;
  local_24[4] = 0;
  local_28 = &DAT_0085238c;
  uVar1 = fn_001930d8(local_24,param_1,1);
  if ((((uVar1 & 0x3fc00) == 0x4400) && (99 < (uVar1 & 0x3ff))) && ((uVar1 & 0x3ff) < 0xb4)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  if ((-1 < (int)uVar1) && ((local_24[0] & 0xfffffffe) != 0)) {
    if ((local_24[0] & 1) != 0) {
      fn_00146594();
    }
    fn_0015cf8c(local_24[0] & 0xfffffffe);
    local_24[0] = 0;
  }
  fn_00193004(&local_28,0);
  return uVar2;
}



ulonglong fn_001848e4(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint unaff_r4;
  uint unaff_r5;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  bool bVar19;
  
  param_1 = param_1 ^ param_4;
  if (param_3 == 0) {
    if (unaff_r5 == 0) {
      uVar11 = unaff_r4 >> 0x10;
      uVar12 = param_2 >> 0x10;
      uVar14 = unaff_r4 & ~(uVar11 << 0x10);
      param_2 = param_2 & ~(uVar12 << 0x10);
      uVar3 = uVar14 * uVar12;
      uVar14 = param_2 * uVar14;
      param_2 = uVar11 * param_2;
      uVar2 = uVar3 * 0x10000;
      uVar13 = uVar14 + uVar2;
      uVar1 = param_2 * 0x10000;
      uVar15 = uVar13 + uVar1;
      iVar5 = uVar11 * uVar12 + (uVar3 >> 0x10) + (uint)CARRY4(uVar14,uVar2) + (param_2 >> 0x10) +
              (uint)CARRY4(uVar13,uVar1);
      if (iVar5 < 0) {
        return CONCAT44(iVar5,param_1) & 0xffffffff80000000;
      }
      return CONCAT44(iVar5 * 2 + (uint)CARRY4(uVar15,uVar15),param_1) & 0xffffffff80000000;
    }
    uVar14 = param_2 >> 0x10;
    uVar13 = unaff_r4 >> 0x10;
    param_2 = param_2 & ~(uVar14 << 0x10);
    uVar10 = unaff_r4 & ~(uVar13 << 0x10);
    uVar3 = uVar10 * param_2;
    uVar10 = uVar14 * uVar10;
    uVar2 = param_2 * uVar13 * 0x10000;
    uVar4 = uVar3 + uVar2;
    uVar15 = unaff_r5 >> 0x10;
    uVar1 = uVar10 * 0x10000;
    uVar6 = uVar4 + uVar1;
    uVar16 = unaff_r5 & ~(uVar15 << 0x10);
    uVar7 = uVar16 * param_2;
    uVar16 = uVar14 * uVar16;
    uVar11 = param_2 * uVar15 * 0x10000;
    uVar8 = uVar7 + uVar11;
    uVar12 = uVar16 * 0x10000;
    uVar9 = uVar8 + uVar12;
    uVar11 = uVar14 * uVar15 + (param_2 * uVar15 >> 0x10) + (uint)CARRY4(uVar7,uVar11) +
             (uVar16 >> 0x10) + (uint)CARRY4(uVar8,uVar12);
    uVar12 = uVar11 + uVar6;
    iVar5 = uVar14 * uVar13 + (param_2 * uVar13 >> 0x10) + (uint)CARRY4(uVar3,uVar2) +
            (uVar10 >> 0x10) + (uint)CARRY4(uVar4,uVar1) + (uint)CARRY4(uVar11,uVar6);
    if (iVar5 < 0) {
      return CONCAT44(iVar5,param_1) & 0xffffffff80000000;
    }
    return CONCAT44(iVar5 * 2 +
                    (uint)(CARRY4(uVar12,uVar12) || CARRY4(uVar12 * 2,(uint)CARRY4(uVar9,uVar9))),
                    param_1) & 0xffffffff80000000;
  }
  if (unaff_r5 == 0) {
    uVar14 = unaff_r4 >> 0x10;
    uVar13 = param_2 >> 0x10;
    uVar7 = unaff_r4 & ~(uVar14 << 0x10);
    param_2 = param_2 & ~(uVar13 << 0x10);
    uVar3 = param_2 * uVar7;
    param_2 = uVar14 * param_2;
    uVar2 = uVar7 * uVar13 * 0x10000;
    uVar4 = uVar3 + uVar2;
    uVar15 = param_3 >> 0x10;
    uVar1 = param_2 * 0x10000;
    uVar6 = uVar4 + uVar1;
    param_3 = param_3 & ~(uVar15 << 0x10);
    uVar8 = param_3 * uVar7;
    param_3 = uVar14 * param_3;
    uVar11 = uVar7 * uVar15 * 0x10000;
    uVar9 = uVar8 + uVar11;
    uVar12 = param_3 * 0x10000;
    uVar10 = uVar9 + uVar12;
    uVar12 = uVar14 * uVar15 + (uVar7 * uVar15 >> 0x10) + (uint)CARRY4(uVar8,uVar11) +
             (param_3 >> 0x10) + (uint)CARRY4(uVar9,uVar12);
    uVar11 = uVar12 + uVar6;
    iVar5 = uVar14 * uVar13 + (uVar7 * uVar13 >> 0x10) + (uint)CARRY4(uVar3,uVar2) +
            (param_2 >> 0x10) + (uint)CARRY4(uVar4,uVar1) + (uint)CARRY4(uVar12,uVar6);
    if (iVar5 < 0) {
      return CONCAT44(iVar5,param_1) & 0xffffffff80000000;
    }
    return CONCAT44(iVar5 * 2 +
                    (uint)(CARRY4(uVar11,uVar11) || CARRY4(uVar11 * 2,(uint)CARRY4(uVar10,uVar10))),
                    param_1) & 0xffffffff80000000;
  }
  uVar12 = param_2 >> 0x10;
  uVar14 = unaff_r4 >> 0x10;
  uVar8 = param_2 & ~(uVar12 << 0x10);
  uVar6 = unaff_r4 & ~(uVar14 << 0x10);
  uVar3 = uVar8 * uVar14;
  uVar8 = uVar6 * uVar8;
  uVar6 = uVar12 * uVar6;
  uVar2 = uVar3 * 0x10000;
  uVar9 = uVar8 + uVar2;
  uVar13 = param_3 >> 0x10;
  uVar1 = uVar6 * 0x10000;
  uVar10 = uVar9 + uVar1;
  uVar15 = unaff_r5 >> 0x10;
  uVar16 = param_3 & ~(uVar13 << 0x10);
  uVar7 = unaff_r5 & ~(uVar15 << 0x10);
  uVar4 = uVar16 * uVar15;
  uVar16 = uVar7 * uVar16;
  uVar7 = uVar13 * uVar7;
  uVar11 = uVar4 * 0x10000;
  uVar17 = uVar16 + uVar11;
  uVar15 = uVar13 * uVar15 + (uVar4 >> 0x10) + (uint)CARRY4(uVar16,uVar11);
  iVar5 = 0;
  uVar11 = uVar7 * 0x10000;
  uVar4 = uVar17 + uVar11;
  uVar13 = uVar15 + (uVar7 >> 0x10) + (uint)CARRY4(uVar17,uVar11);
  uVar11 = uVar10 + uVar13;
  uVar1 = uVar12 * uVar14 + (uVar3 >> 0x10) + (uint)CARRY4(uVar8,uVar2) + (uVar6 >> 0x10) +
          (uint)CARRY4(uVar9,uVar1) + (uint)CARRY4(uVar10,uVar13);
  uVar14 = uVar11 + uVar4;
  uVar12 = uVar11 + uVar1 + (uint)CARRY4(uVar11,uVar4);
  bVar19 = param_3 <= param_2;
  param_2 = param_2 - param_3;
  bVar18 = param_2 == 0;
  uVar2 = 0;
  if (!bVar19) {
    uVar2 = 0xffffffff;
    iVar5 = unaff_r4 - unaff_r5;
  }
  if (!bVar18) {
    bVar19 = unaff_r4 <= unaff_r5;
    uVar15 = unaff_r5 - unaff_r4;
    bVar18 = uVar15 == 0;
  }
  uVar13 = param_2 >> 0x10;
  if (bVar18) {
    uVar2 = 0;
  }
  if (!bVar19) {
    iVar5 = iVar5 - param_2;
  }
  param_2 = param_2 & ~(uVar13 << 0x10);
  uVar3 = uVar15 >> 0x10;
  if (!bVar19) {
    uVar2 = ~uVar2;
  }
  uVar15 = uVar15 & ~(uVar3 << 0x10);
  uVar10 = param_2 * uVar3;
  param_2 = uVar15 * param_2;
  uVar15 = uVar13 * uVar15;
  uVar6 = uVar10 * 0x10000;
  uVar8 = param_2 + uVar6;
  uVar7 = uVar15 * 0x10000;
  uVar9 = uVar8 + uVar7;
  uVar13 = uVar13 * uVar3 + iVar5 + (uVar10 >> 0x10) + (uint)CARRY4(param_2,uVar6) +
           (uVar15 >> 0x10) + (uint)CARRY4(uVar8,uVar7);
  uVar15 = uVar12 + uVar13 + (uint)CARRY4(uVar14,uVar9);
  iVar5 = uVar1 + (CARRY4(uVar11,uVar1) || CARRY4(uVar11 + uVar1,(uint)CARRY4(uVar11,uVar4))) +
          uVar2 + (uint)(CARRY4(uVar12,uVar13) || CARRY4(uVar12 + uVar13,(uint)CARRY4(uVar14,uVar9))
                        );
  uVar2 = uVar14 + uVar9 | (uVar4 | uVar4 * 4) >> 2;
  if (iVar5 < 0) {
    return CONCAT44(iVar5,param_1) & 0xffffffff80000000;
  }
  return CONCAT44(iVar5 * 2 +
                  (uint)(CARRY4(uVar15,uVar15) || CARRY4(uVar15 * 2,(uint)CARRY4(uVar2,uVar2))),
                  param_1) & 0xffffffff80000000;
}


