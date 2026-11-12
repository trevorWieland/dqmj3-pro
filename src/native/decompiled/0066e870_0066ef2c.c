#include "0066e870_0066ef2c.h"

static void svc_0x19(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x19 }
#endif
}

static void svc_0x24(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x24 }
#endif
}


void fn_0066ef2c(int param_1,int param_2)

{
  undefined4 in_s16;
  
  fn_0066ec18(param_2);
  *(undefined4 *)(param_2 + 0x14) = in_s16;
  *(undefined4 *)(param_2 + 0xc) = 2;
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_1 + 0x44);
  return;
}



undefined4 fn_0066ed9c(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint local_20;
  
  iVar1 = param_1[0x12];
  local_20 = param_4;
  if (iVar1 == 0) {
    iVar1 = fn_0052c610();
    if (iVar1 != 0) goto LAB_0066ee54;
    local_20 = 0xe7e3ffff;
    svc_0x19();
    if (param_1[0x1b] < 0) {
      fn_0015e294();
    }
    local_20 = fn_0052d284(param_1 + 0x1b);
    if ((local_20 & 0x80000000) == 0) {
      (**(code **)(*param_1 + 0x34))(param_1,1);
      return 0;
    }
    iVar1 = fn_0052cab4(&local_20);
    param_1[0x1e] = 0;
    *(undefined1 *)(param_1 + 0x1f) = 0;
    param_1[0x1d] = iVar1;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 2) {
        return 0;
      }
      iVar1 = fn_00673be8(param_1);
      if (iVar1 == 0) {
        (**(code **)(*param_1 + 0x30))(param_1,0);
        return 0;
      }
      return 0;
    }
    uVar2 = param_1[0x1b];
    svc_0x24();
    if ((int)uVar2 < 0) {
      fn_0015e294();
    }
    if ((uVar2 & 0x3ff) == 0x3fe) {
      return 0;
    }
    local_20 = fn_0052cec0();
    if ((local_20 & 0x80000000) == 0) {
      iVar1 = fn_0052c610();
      if (iVar1 == 0) {
        return 0;
      }
      param_1[0x13] = param_1[0x13] | 4;
LAB_0066ee54:
      (**(code **)(*param_1 + 0x34))(param_1,2);
      return 0;
    }
    iVar1 = fn_0052cab4(&local_20);
    param_1[0x1e] = 0;
    *(undefined1 *)(param_1 + 0x1f) = 0;
    param_1[0x1d] = iVar1;
  }
  param_1[0x1e] = (uint)(iVar1 != 0);
  *(undefined1 *)(param_1 + 0x1f) = 1;
  return 0xffffffff;
}



void fn_0066ed70(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_2[4];
  uVar5 = param_2[5];
  uVar6 = param_2[6];
  uVar7 = param_2[7];
  *(undefined4 *)(param_1 + 0x80) = *param_2;
  *(undefined4 *)(param_1 + 0x84) = uVar1;
  *(undefined4 *)(param_1 + 0x88) = uVar2;
  *(undefined4 *)(param_1 + 0x8c) = uVar3;
  *(undefined4 *)(param_1 + 0x90) = uVar4;
  *(undefined4 *)(param_1 + 0x94) = uVar5;
  *(undefined4 *)(param_1 + 0x98) = uVar6;
  *(undefined4 *)(param_1 + 0x9c) = uVar7;
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  *(undefined4 *)(param_1 + 0xa0) = param_2[8];
  *(undefined4 *)(param_1 + 0xa4) = uVar1;
  *(undefined4 *)(param_1 + 0xa8) = uVar2;
  *(undefined4 *)(param_1 + 0x88) = 0x1acb00;
  *(undefined1 *)(param_1 + 0x344) = 1;
  return;
}



undefined4 fn_0066eca0(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  uVar1 = param_1[0x13];
  param_1[0x13] = uVar1 & 0xfffffff7;
  if ((uVar1 & 4) != 0) {
    (**(code **)(*param_1 + 0x30))(param_1,4);
    return 1;
  }
  fn_00673ce8(param_1,4);
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  if ((*(byte *)(param_1 + 0x13) & 1) == 0) {
    fn_00673ce8(param_1,3);
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    *(undefined1 *)(param_1 + 0x1f) = 0;
    uVar2 = 0;
    if ((*(byte *)(param_1 + 0x13) & 1) == 0) {
      (**(code **)(*param_1 + 0x30))(param_1,1);
      uVar2 = 1;
    }
  }
  else {
    (**(code **)(*param_1 + 0x30))(param_1,3);
    uVar2 = 1;
  }
  return uVar2;
}



void fn_0066ec68(int *param_1)

{
  fn_0066ec18(param_1 + 0x13);
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x12) = 1;
                    /* WARNING: Could not recover jumptable at 0x0066ec9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x24))(param_1);
  return;
}



void fn_0066ec54(undefined4 param_1)

{
  fn_0010fbf0(*(undefined4 *)(DAT_00898840 + 8),param_1);
  return;
}



void fn_0066ec10(int param_1)

{
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}



void fn_0066eb90(void)

{
  fn_0067411c(*(undefined4 *)(*(int *)(*(int *)(DAT_00898840 + 4) + 4) + 0x2c));
  fn_00671598(*(undefined4 *)(*(int *)(*(int *)(DAT_00898840 + 4) + 4) + 0x28));
  return;
}



void fn_0066eb20(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x14))(param_1);
  uVar2 = (**(code **)(*param_1 + 0xc))(param_1);
  fn_00671538(*(undefined4 *)(*(int *)(*(int *)(DAT_00898840 + 4) + 4) + 0x28),uVar2,uVar1);
  return;
}



void fn_0066e870(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar6;
  undefined4 *puVar5;
  undefined4 uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  int iVar14;
  int *piVar15;
  undefined4 uVar16;
  uint uVar17;
  
  fn_0066ec18(param_1 + 0x1c);
  uVar3 = param_2[1];
  uVar7 = param_2[2];
  uVar10 = param_2[3];
  uVar12 = param_2[4];
  uVar16 = param_2[5];
  *(undefined4 *)(param_1 + 0x1c) = *param_2;
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  *(undefined4 *)(param_1 + 0x28) = uVar10;
  *(undefined4 *)(param_1 + 0x2c) = uVar12;
  *(undefined4 *)(param_1 + 0x30) = uVar16;
  *(undefined1 *)(param_1 + 0x4f) = 0;
  iVar1 = fn_00453d0c();
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x34) == 2) {
      *(undefined4 *)(param_1 + 0x24) = 0x76bf;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x28);
    if (((iVar1 == 5 || iVar1 == 6) || ((iVar1 == 7 || iVar1 == 8) || iVar1 == 10)) ||
       ((iVar1 == 4 && (*(int *)(param_1 + 0x24) < 0)))) {
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
  }
  iVar1 = fn_0067633c(param_1 + 0x1c);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x20) == 7) {
      if (*(int *)(param_1 + 0x34) == 2) {
        *(undefined1 *)(param_1 + 0x59) = 1;
      }
    }
    else {
      if (*(int *)(param_1 + 0x20) == 8) {
        *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
      }
      iVar1 = *(int *)(param_1 + 4);
      iVar14 = 0;
      if (0 < *(int *)(iVar1 + 8) - *(int *)(iVar1 + 4) >> 2) {
        do {
          piVar15 = *(int **)(*(int *)(iVar1 + 4) + iVar14 * 4);
          iVar2 = (**(code **)(*piVar15 + 8))(piVar15,param_1 + 0x1c);
          if (iVar2 == 0) {
            for (puVar13 = *(undefined4 **)(iVar1 + 4); *(undefined4 **)(iVar1 + 8) != puVar13;
                puVar13 = puVar13 + 1) {
              piVar4 = (int *)*puVar13;
              if (piVar4 == piVar15) {
                (**(code **)(*piVar4 + 0x14))(piVar4);
                puVar8 = *(undefined4 **)(iVar1 + 8);
                if (*(undefined4 **)(iVar1 + 4) != puVar8) {
                  puVar5 = puVar13 + 1;
                  if (puVar8 != puVar5) {
                    if (puVar8 < puVar5) {
                      do {
                        puVar6 = puVar5 + 1;
                        *puVar13 = *puVar5;
                        puVar5 = puVar6;
                        puVar13 = puVar13 + 1;
                      } while (puVar6 != puVar8);
                    }
                    else {
                      uVar17 = (int)puVar8 - (int)puVar5;
                      if (0 < (int)uVar17) {
                        uVar9 = (uVar17 & 7) >> 2;
                        if (uVar9 != 0) {
                          *puVar13 = *puVar5;
                        }
                        uVar11 = (uint)(uVar9 != 0);
                        for (; (int)uVar9 < (int)uVar17 >> 2; uVar9 = uVar9 + 2) {
                          puVar13[uVar11] = puVar5[uVar11];
                          puVar13[uVar11 + 1] = puVar5[uVar11 + 1];
                          uVar11 = uVar11 + 2;
                        }
                      }
                    }
                  }
                  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + -4;
                }
                break;
              }
            }
            iVar14 = iVar14 + -1;
          }
          iVar14 = iVar14 + 1;
        } while (iVar14 < *(int *)(iVar1 + 8) - *(int *)(iVar1 + 4) >> 2);
      }
      iVar14 = *(int *)(param_1 + 8);
      iVar1 = 0;
      if (0 < *(int *)(iVar14 + 8) - *(int *)(iVar14 + 4) >> 2) {
        do {
          piVar15 = *(int **)(*(int *)(iVar14 + 4) + iVar1 * 4);
          iVar2 = (**(code **)(*piVar15 + 8))(piVar15,param_1 + 0x1c);
          if (iVar2 == 0) {
            fn_0010fbf0(iVar14,piVar15);
            iVar1 = iVar1 + -1;
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < *(int *)(iVar14 + 8) - *(int *)(iVar14 + 4) >> 2);
      }
    }
    if (*(char *)(*(int *)(param_1 + 0x54) + 0x48) == '\0') {
      fn_0012cf70(*(undefined4 *)(param_1 + 0xc));
      if (*(char *)(param_1 + 0x5a) == '\0') {
        *(undefined1 *)(param_1 + 0x4e) = 1;
      }
      *(undefined1 *)(param_1 + 0x5a) = 0;
      *(undefined4 *)(param_1 + 0x18) = 1;
    }
  }
  return;
}


