#include "0053f308_0053fb0c.h"



undefined4 fn_0053fb0c(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)*(char *)(param_1 + 0x4b4);
  if ((iVar1 == -1) && (iVar1 = *(int *)(*(int *)(param_2 + 0xdc) + 0x34), iVar1 == -1)) {
    return 0;
  }
  return *(undefined4 *)(param_1 + iVar1 * 4 + 0x4b8);
}



void fn_0053fa4c(void)

{
  fn_0053f7dc();
  return;
}



int fn_0053f7dc(int param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  bool bVar8;
  uint in_s0;
  float fVar9;
  ulonglong uVar10;
  
  uVar10 = (ulonglong)in_s0;
  iVar4 = *(int *)(param_3 + 4);
  iVar5 = iVar4;
  iVar6 = param_2;
  if (iVar4 < 1) {
    iVar5 = *(int *)(param_3 + 0x280);
    iVar6 = iVar5;
  }
  if (iVar5 == 0) {
    iVar6 = *(int *)(param_3 + 0x27c);
  }
  if (iVar5 != 0 || iVar6 != 0) {
    bVar8 = *(char *)(param_3 + 0x287) != '\0';
    cVar1 = '\0';
    if (bVar8) {
      cVar1 = *(char *)(param_3 + 0x286);
    }
    if (!bVar8 || cVar1 == '\0') {
      bVar8 = *(char *)(param_3 + 0x286) != '\0';
      bVar2 = bVar8 || param_4 != 0;
      if (0 < iVar4) {
        iVar5 = *(int *)(param_3 + 8) + -1;
        if (iVar5 < 0) {
          return param_2;
        }
        fVar9 = 0.0;
        do {
          iVar6 = *(int *)(param_3 + iVar5 * 4 + 0x10);
          if ((*(int *)(iVar6 + 0x24) == *(int *)(param_3 + 0xc)) &&
             (piVar7 = *(int **)(iVar6 + 0xd8), piVar7 != (int *)0x0)) {
            if ((!bVar8 && param_4 == 0) && (fVar9 < (float)uVar10)) {
              (**(code **)(*piVar7 + 8))(piVar7,iVar6);
              *(int *)(param_1 + 0x460) = *(int *)(param_1 + 0x460) + 1;
              if (*(int *)(iVar6 + 0xd8) == 0) goto LAB_0053fa18;
            }
            param_2 = (**(code **)(**(int **)(iVar6 + 0xd8) + 0x10))
                                (*(int **)(iVar6 + 0xd8),param_2,iVar6,bVar2,param_5);
            if ((*(int *)(*(int *)(iVar6 + 0x20) + 0xc) == 0) ||
               (*(char *)(param_3 + 0x287) != '\0')) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
              *(int *)(param_1 + 0x464) = *(int *)(param_1 + 0x464) + 1;
              *(int *)(param_1 + 0x4d8) =
                   *(int *)(*(int *)(iVar6 + 0xd8) + 8) + *(int *)(param_1 + 0x4d8);
              *(int *)(param_1 + 0x46c) =
                   *(int *)(*(int *)(iVar6 + 0xd8) + 0x10) + *(int *)(param_1 + 0x46c);
              *(int *)(param_1 + 0x480) =
                   *(int *)(*(int *)(iVar6 + 0xd8) + 0x14) + *(int *)(param_1 + 0x480);
            }
            if (((**(int **)(iVar6 + 0xdc) == 1) && (((*(int **)(iVar6 + 0xdc))[0x152] & 1U) != 0))
               && (param_2 = (**(code **)(**(int **)(iVar6 + 0xd8) + 0x14))
                                       (*(int **)(iVar6 + 0xd8),param_2,iVar6,bVar2,param_5), bVar3)
               ) {
              *(int *)(param_1 + 0x4d8) =
                   *(int *)(*(int *)(iVar6 + 0xd8) + 8) + *(int *)(param_1 + 0x4d8);
            }
          }
LAB_0053fa18:
          iVar5 = iVar5 + -1;
        } while (-1 < iVar5);
        if (0 < *(int *)(param_3 + 4)) {
          return param_2;
        }
      }
      fn_0053fa7c(param_1,param_3);
    }
  }
  return param_2;
}



int fn_0053fa7c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1 + *(int *)(param_2 + 0x19c) * 4;
  iVar1 = *(int *)(param_2 + 0x27c);
  if (*(int *)(iVar2 + 0x120) == param_2) {
    *(int *)(iVar2 + 0x120) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x280) = 0;
    }
    param_1 = param_1 + *(int *)(param_2 + 0x19c) * 4;
    if (*(int *)(param_1 + 0x220) == param_2) {
      *(undefined4 *)(param_1 + 0x220) = 0;
    }
  }
  else {
    if (*(int *)(iVar2 + 0x220) == param_2) {
      *(undefined4 *)(iVar2 + 0x220) = *(undefined4 *)(param_2 + 0x280);
    }
    if (*(int *)(param_2 + 0x27c) != 0) {
      *(undefined4 *)(*(int *)(param_2 + 0x27c) + 0x280) = *(undefined4 *)(param_2 + 0x280);
    }
    if (*(int *)(param_2 + 0x280) != 0) {
      *(undefined4 *)(*(int *)(param_2 + 0x280) + 0x27c) = *(undefined4 *)(param_2 + 0x27c);
    }
  }
  *(undefined4 *)(param_2 + 0x27c) = 0;
  *(undefined4 *)(param_2 + 0x280) = 0;
  return iVar1;
}



undefined4 * fn_0053f638(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = 0;
  do {
    uVar4 = *(int *)(param_1 + 0x444) + 1U & *(uint *)(param_1 + 0x45c);
    *(uint *)(param_1 + 0x444) = uVar4;
    if (*(int *)(*(int *)(param_1 + 0x33c) + uVar4 * 0x5880 + 0x5814) == 0) {
      iVar5 = param_1 + *(int *)(param_2 + 0x18) * 4;
      puVar3 = (undefined4 *)(*(int *)(param_1 + 0x33c) + *(int *)(param_1 + 0x444) * 0x5880);
      if (*(int *)(iVar5 + 0x340) == 0) {
        *(undefined4 **)(iVar5 + 0x340) = puVar3;
        puVar3[0x161d] = 0;
        puVar3[0x161c] = 0;
      }
      else {
        *(undefined4 **)(*(int *)(iVar5 + 0x340) + 0x5870) = puVar3;
        puVar3[0x161d] = *(undefined4 *)(iVar5 + 0x340);
        *(undefined4 **)(iVar5 + 0x340) = puVar3;
        puVar3[0x161c] = 0;
      }
      puVar3[2] = 0;
      *puVar3 = param_3;
      puVar3[1] = 0;
      puVar3[0x1603] = 0;
      puVar3[0x1605] = *(undefined4 *)(param_2 + 0xdc);
      puVar3[0x1604] = *(undefined4 *)(param_2 + 0x18);
      puVar3[0x1606] = 0;
      if (((DAT_008c62fc & 1) == 0) && (iVar5 = fn_00303afc(&DAT_008c62fc), iVar5 != 0)) {
        DAT_008f9e2c = 0;
        DAT_008f9e30 = 0;
        DAT_008f9e34 = 0;
      }
      uVar2 = DAT_008f9e34;
      uVar1 = DAT_008f9e30;
      puVar3[0x13] = DAT_008f9e2c;
      puVar3[0x14] = uVar1;
      puVar3[0x15] = uVar2;
      return puVar3;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < *(int *)(param_1 + 0x450));
  return (undefined4 *)0x0;
}



undefined4
fn_0053f308(int param_1,int param_2,undefined4 *param_3,int param_4,int param_5,undefined4 param_6,
            uint param_7)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + param_5 * 4);
  if ((iVar1 != 0) && (param_4 < *(int *)(*(int *)(iVar1 + 0xc) + 8))) {
    puVar2 = (uint *)fn_0052dfa0();
    iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0xc) + param_5 * 4) + 0x18) +
                    param_4 * 0x3c + 8);
    if ((iVar1 <= *(int *)(param_1 + 0x328)) && (iVar3 = fn_0053ec04(param_1,param_2), iVar3 != 0))
    {
      uVar9 = param_3[1];
      uVar10 = param_3[2];
      uVar11 = param_3[3];
      uVar12 = param_3[4];
      uVar13 = param_3[5];
      uVar14 = param_3[6];
      uVar15 = param_3[7];
      uVar16 = 0x3f80000000000000;
      *(undefined4 *)(iVar3 + 0x1a0) = *param_3;
      *(undefined4 *)(iVar3 + 0x1a4) = uVar9;
      *(undefined4 *)(iVar3 + 0x1a8) = uVar10;
      *(undefined4 *)(iVar3 + 0x1ac) = uVar11;
      *(undefined4 *)(iVar3 + 0x1b0) = uVar12;
      *(undefined4 *)(iVar3 + 0x1b4) = uVar13;
      *(undefined4 *)(iVar3 + 0x1b8) = uVar14;
      *(undefined4 *)(iVar3 + 0x1bc) = uVar15;
      uVar9 = param_3[9];
      uVar10 = param_3[10];
      uVar11 = param_3[0xb];
      *(undefined4 *)(iVar3 + 0x1c0) = param_3[8];
      *(undefined4 *)(iVar3 + 0x1c4) = uVar9;
      *(undefined4 *)(iVar3 + 0x1c8) = uVar10;
      *(undefined4 *)(iVar3 + 0x1cc) = uVar11;
      uVar9 = param_3[1];
      uVar10 = param_3[2];
      uVar11 = param_3[3];
      uVar12 = param_3[4];
      uVar13 = param_3[5];
      uVar14 = param_3[6];
      uVar15 = param_3[7];
      *(undefined4 *)(iVar3 + 0x1d0) = *param_3;
      *(undefined4 *)(iVar3 + 0x1d4) = uVar9;
      *(undefined4 *)(iVar3 + 0x1d8) = uVar10;
      *(undefined4 *)(iVar3 + 0x1dc) = uVar11;
      *(undefined4 *)(iVar3 + 0x1e0) = uVar12;
      *(undefined4 *)(iVar3 + 0x1e4) = uVar13;
      *(undefined4 *)(iVar3 + 0x1e8) = uVar14;
      *(undefined4 *)(iVar3 + 0x1ec) = uVar15;
      uVar9 = param_3[9];
      uVar10 = param_3[10];
      uVar11 = param_3[0xb];
      *(undefined4 *)(iVar3 + 0x1f0) = param_3[8];
      *(undefined4 *)(iVar3 + 500) = uVar9;
      *(undefined4 *)(iVar3 + 0x1f8) = uVar10;
      *(undefined4 *)(iVar3 + 0x1fc) = uVar11;
      iVar7 = 0;
      *(undefined4 *)(iVar3 + 0x200) = 0x3f800000;
      *(undefined4 *)(iVar3 + 0x204) = 0x3f800000;
      *(undefined4 *)(iVar3 + 0x208) = 0x3f800000;
      *(undefined4 *)(iVar3 + 0x224) = 0x3f800000;
      *(undefined4 *)(iVar3 + 0x228) = 0x3f800000;
      *(undefined4 *)(iVar3 + 0x22c) = 0x3f800000;
      *(undefined4 *)(iVar3 + 0x214) = 0x3f800000;
      *(undefined4 *)(iVar3 + 0x218) = 0x3f800000;
      *(undefined4 *)(iVar3 + 0x21c) = 0x3f800000;
      *(undefined4 *)(iVar3 + 0x220) = 0x3f800000;
      *(undefined4 *)(iVar3 + 0x264) = 0;
      *(undefined4 *)(iVar3 + 0x210) = 0x3f800000;
      *(undefined4 *)(iVar3 + 0x20c) = 0x3f800000;
      *(undefined4 *)(iVar3 + 0x23c) = 0x3f800000;
      *(undefined4 *)(iVar3 + 0x238) = 0x3f800000;
      *(undefined4 *)(iVar3 + 0x234) = 0x3f800000;
      *(undefined4 *)(iVar3 + 0x230) = 0x3f800000;
      *(undefined4 *)(iVar3 + 0x248) = 0x3f800000;
      *(undefined4 *)(iVar3 + 0x244) = 0x3f800000;
      *(undefined4 *)(iVar3 + 0x240) = 0x3f800000;
      *(undefined4 *)(iVar3 + 0x254) = 0;
      *(undefined4 *)(iVar3 + 0x250) = 0;
      *(undefined4 *)(iVar3 + 0x24c) = 0;
      *(undefined1 *)(iVar3 + 0x285) = 0;
      *(undefined1 *)(iVar3 + 0x284) = 0;
      *(undefined1 *)(iVar3 + 0x286) = 0;
      *(undefined1 *)(iVar3 + 0x287) = 0;
      *(undefined1 *)(iVar3 + 0x288) = 0;
      *(undefined4 *)(iVar3 + 0x274) = 0;
      *(undefined1 *)(iVar3 + 0x289) = 0x80;
      *(undefined4 *)(iVar3 + 0x268) = 0;
      *(undefined4 *)(iVar3 + 0x26c) = 0;
      *(undefined4 *)(iVar3 + 0x270) = 0;
      uVar4 = 0;
      do {
        iVar8 = iVar7 + 1;
        uVar4 = uVar4 + 2;
        *(undefined4 *)(iVar3 + iVar7 * 4 + 0x10) = 0;
        iVar7 = iVar7 + 2;
        *(undefined4 *)(iVar3 + iVar8 * 4 + 0x10) = 0;
      } while (uVar4 < 0x10);
      *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(param_1 + 0x490);
      *(int *)(iVar3 + 400) = param_5;
      *(int *)(iVar3 + 0x194) = param_4;
      *(undefined4 *)(iVar3 + 0x27c) = 0;
      *(undefined4 *)(iVar3 + 0x280) = 0;
      *(undefined4 *)(iVar3 + 0x19c) = param_6;
      fn_0053f79c(param_1,iVar3,param_6);
      uVar4 = *puVar2;
      *puVar2 = puVar2[1];
      uVar4 = uVar4 ^ uVar4 << 0xb;
      puVar2[1] = puVar2[2];
      uVar5 = puVar2[3];
      puVar2[2] = uVar5;
      uVar4 = uVar5 ^ uVar5 >> 0x13 ^ uVar4 ^ uVar4 >> 8;
      puVar2[3] = uVar4;
      uVar5 = iVar1 - 1;
      *(int *)(param_2 + 4) = *(int *)(param_1 + 0x490);
      if (-1 < (int)uVar5) {
        do {
          uVar9 = (undefined4)((ulonglong)uVar16 >> 0x20);
          if ((param_7 & 1 << (uVar5 & 0xff)) != 0) {
            iVar1 = fn_0053e8d8(param_1,param_6);
            if (iVar1 == 0) break;
            iVar8 = *(int *)(iVar3 + 4);
            uVar16 = CONCAT44(uVar9,uVar4);
            iVar7 = iVar3 + uVar5 * 0x14;
            uVar10 = *(undefined4 *)
                      (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0xc) + param_5 * 4) + 0x18) +
                               param_4 * 0x3c + 4) + uVar5 * 8 + 4);
            *(int *)(iVar3 + 4) = iVar8 + 1;
            *(int *)(iVar3 + iVar8 * 4 + 0x10) = iVar1;
            *(int *)(iVar1 + 0x20) = iVar7 + 0x50;
            *(int *)(iVar1 + 0x1c) = iVar3;
            *(int *)(iVar7 + 0x60) = iVar1;
            puVar6 = *(undefined4 **)(iVar1 + 0x20);
            *puVar6 = uVar9;
            puVar6[1] = uVar9;
            puVar6[2] = uVar9;
            puVar6[3] = 0x3f;
            *(undefined4 *)(iVar1 + 0x18) = param_6;
            fn_0053ed8c(param_1,iVar1,uVar10,param_5,param_4,uVar4,0);
            if (*(int *)(*(int *)(iVar1 + 0xdc) + 0x31c) == 0x7fffffff) {
              *(undefined1 *)(iVar3 + 0x288) = 1;
            }
          }
          uVar5 = uVar5 - 1;
        } while (-1 < (int)uVar5);
      }
      *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar3 + 4);
      *(int *)(param_1 + 0x474) = *(int *)(param_1 + 0x474) + 1;
      *(int *)(param_1 + 0x490) = *(int *)(param_1 + 0x490) + 1;
      return 1;
    }
  }
  return 0;
}



void fn_0053f79c(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  param_1 = param_1 + param_3 * 4;
  if (*(int *)(param_1 + 0x120) == 0) {
    *(int *)(param_1 + 0x120) = param_2;
    *(undefined4 *)(param_2 + 0x280) = 0;
    *(undefined4 *)(param_2 + 0x27c) = 0;
  }
  else {
    *(int *)(*(int *)(param_1 + 0x220) + 0x27c) = param_2;
    uVar1 = *(undefined4 *)(param_1 + 0x220);
    *(undefined4 *)(param_2 + 0x27c) = 0;
    *(undefined4 *)(param_2 + 0x280) = uVar1;
  }
  *(int *)(param_1 + 0x220) = param_2;
  return;
}


