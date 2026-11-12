#include "001519a8_0015211c.h"



void fn_0015211c(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x14);
  while( true ) {
    if (cVar1 != '\0') {
      return;
    }
    fn_00172e2c();
    fn_00161c88();
    if (*(char *)(param_1 + 0x14) != '\0') break;
    fn_00170704(param_1 + 8);
    fn_00172e2c();
    fn_00161be0();
    fn_001707b4(param_1 + 8);
    fn_001524d0();
    fn_00152464();
    cVar1 = *(char *)(param_1 + 0x14);
  }
  return;
}



void fn_00152048(int *param_1,int param_2)

{
  uint in_fpscr;
  float in_s0;
  float fVar1;
  int iVar2;
  int iVar3;
  
  if (((param_2 < 1) || (*(char *)((int)param_1 + 0xa1) == '\x02')) ||
     (((char)param_1[0x26] == '\0' && (*(char *)((int)param_1 + 0x99) == '\0')))) {
                    /* WARNING: Could not recover jumptable at 0x00152114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10))(param_1);
    return;
  }
  fn_00168948(param_1 + 0x1a);
  iVar3 = 0;
  fVar1 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
  in_s0 = in_s0 * fVar1;
  iVar2 = (int)in_s0;
  fn_00168948(param_1 + 0x1a);
  param_1[0x1a] = (int)in_s0;
  param_1[0x1b] = iVar3;
  param_1[0x1c] = iVar2;
  param_1[0x1d] = 0;
  *(undefined1 *)((int)param_1 + 0x9d) = 0;
  if (param_1[4] != 0) {
    fn_0017de8c(param_1[4],param_1);
  }
  (**(code **)(*param_1 + 0x24))(param_1);
  *(undefined1 *)((int)param_1 + 0x9a) = 0;
  *(undefined1 *)((int)param_1 + 0xa1) = 0;
  *(undefined1 *)((int)param_1 + 0xa3) = 0;
  *(undefined1 *)((int)param_1 + 0x9b) = 1;
  *(undefined1 *)((int)param_1 + 0xa2) = 0;
  return;
}



undefined4 fn_00151f74(int param_1,uint *param_2,int param_3,int param_4)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  
  uVar1 = *param_2;
  if ((uVar1 & 0x1f) == 0) {
    uVar3 = param_4 + 3U & 0xfffffffc;
    piVar2 = *(int **)(param_1 + 0x84);
    if (piVar2 != (int *)(param_1 + 0x84)) {
      do {
        piVar2[-3] = uVar1;
        piVar2[-2] = uVar3;
        piVar2 = (int *)*piVar2;
        uVar1 = uVar1 + uVar3;
      } while (piVar2 != (int *)(param_1 + 0x84));
    }
    piVar2 = *(int **)(param_1 + 0x38);
    if (piVar2 != (int *)(param_1 + 0x38)) {
      do {
        piVar2[-3] = uVar1;
        piVar2[-2] = uVar3;
        piVar2 = (int *)*piVar2;
        uVar1 = uVar1 + uVar3;
      } while (piVar2 != (int *)(param_1 + 0x38));
    }
    piVar2 = *(int **)(param_1 + 0xd0);
    if (piVar2 != (int *)(param_1 + 0xd0)) {
      do {
        piVar2[-3] = uVar1;
        piVar2[-2] = uVar3;
        piVar2 = (int *)*piVar2;
        uVar1 = uVar1 + uVar3;
      } while (piVar2 != (int *)(param_1 + 0xd0));
    }
    *(uint *)(param_1 + 0x10c) = uVar3;
    if ((int)(uVar1 - param_3) < 1) {
      return 1;
    }
  }
  return 0;
}



undefined4 fn_00151d48(int param_1,int param_2,uint *param_3,int param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int extraout_r1;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar6 = *param_3;
  if ((uVar6 & 0x1f) == 0) {
    uVar11 = param_2 * 0x2d8 + 0x1fU & 0xffffffe0;
    uVar10 = uVar6 + uVar11;
    if ((int)(uVar10 - param_4) < 1) {
      uVar8 = 0;
      uVar9 = (uint)((ulonglong)uVar11 * 0x2d02d02d + 0x2d02d02d >> 0x27);
      uVar7 = uVar6;
      if (uVar9 != 0) {
        do {
          if (uVar7 == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = fn_00161d0c(uVar7,(uint *)(param_1 + 0x20));
          }
          fn_0017d948(param_1 + 0x34,param_1 + 0x38,iVar4 + 0xf8);
          uVar8 = uVar8 + 1;
          uVar7 = uVar7 + 0x2d8;
        } while (uVar8 < uVar9);
      }
      *(uint *)(param_1 + 0x20) = uVar6;
      *(uint *)(param_1 + 0x24) = uVar11;
      *param_3 = uVar10;
      uVar6 = param_2 * 0x88 + 0x1fU & 0xffffffe0;
      if ((int)((uVar10 + uVar6) - param_4) < 1) {
        uVar9 = 0;
        iVar4 = uVar6 * -0xf0f0f0f;
        uVar11 = uVar10;
        if (uVar6 / 0x88 != 0) {
          do {
            iVar5 = 0;
            if (uVar11 != 0) {
              puVar1 = (undefined4 *)fn_0017e758(uVar11,iVar4);
              *puVar1 = &DAT_008583e8;
              puVar1[7] = 0;
              puVar1[8] = 0;
              puVar1[9] = 0;
              puVar1[10] = 0xffffffff;
              puVar1[0xb] = 0;
              iVar4 = fn_00101a1c(puVar1 + 0xc,&LAB_00172f3c,8,4);
              iVar5 = iVar4 + -0x30;
              *(undefined4 *)(iVar4 + 0x20) = 0;
              *(undefined4 *)(iVar4 + 0x24) = 0;
              *(undefined4 *)(iVar4 + 0x34) = 0;
              *(undefined1 *)(iVar4 + 0x44) = 0;
              *(undefined4 *)(iVar4 + 0x28) = 0;
              *(undefined4 *)(iVar4 + 0x38) = 0;
              *(undefined1 *)(iVar4 + 0x45) = 0;
              *(undefined4 *)(iVar4 + 0x2c) = 0;
              *(undefined4 *)(iVar4 + 0x3c) = 0;
              *(undefined1 *)(iVar4 + 0x46) = 0;
              *(undefined4 *)(iVar4 + 0x30) = 0;
              *(undefined4 *)(iVar4 + 0x40) = 0;
              *(undefined1 *)(iVar4 + 0x47) = 0;
              *(undefined4 *)(iVar4 + 0x50) = 0;
              *(undefined4 *)(iVar4 + 0x54) = 0;
            }
            fn_0017d948(param_1 + 0x54,param_1 + 0x58,iVar5 + 0x80);
            uVar9 = uVar9 + 1;
            iVar4 = extraout_r1;
            uVar11 = uVar11 + 0x88;
          } while (uVar9 < uVar6 / 0x88);
        }
        *(uint *)(param_1 + 0x4c) = uVar10;
        *(uint *)(param_1 + 0x50) = uVar6;
        *param_3 = uVar10 + uVar6;
        piVar2 = *(int **)(param_1 + 0x38);
        if (piVar2 != (int *)(param_1 + 0x38)) {
          do {
            piVar2[0x69] = param_1 + 0x40;
            piVar2 = (int *)*piVar2;
          } while (piVar2 != (int *)(param_1 + 0x38));
        }
        uVar3 = fn_00172fc4();
        fn_001625e4(uVar3,param_1 + 0x40);
        return 1;
      }
    }
  }
  return 0;
}



undefined4 fn_00151b9c(int param_1,undefined4 param_2,uint *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int unaff_r9;
  int local_40;
  int local_3c;
  int iStack_34;
  undefined4 local_30;
  uint *puStack_2c;
  int iStack_28;
  
  if ((*param_3 & 0x1f) == 0) {
    iStack_34 = param_1;
    local_30 = param_2;
    puStack_2c = param_3;
    iStack_28 = param_4;
    uVar1 = fn_00156818(param_2);
    uVar8 = *param_3;
    uVar2 = (uVar1 * 0x5c + 0x1f & 0xffffffe0) + uVar8;
    if ((int)(uVar2 - param_4) < 1) {
      *param_3 = uVar2;
      *(uint *)(param_1 + 0x18) = uVar1;
      uVar2 = 0;
      *(uint *)(param_1 + 0x1c) = uVar8;
      if (uVar1 != 0) {
        do {
          if (uVar8 == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = fn_001618cc(uVar8);
          }
          local_40 = 0;
          local_3c = 0;
          iVar3 = fn_001562d0(local_30,uVar2 | 0x4000000,&local_40);
          if ((iVar3 != 0) && (fn_0016184c(iVar6,local_40), local_3c != 0)) {
            iVar3 = 0;
            if (0 < local_40) {
              do {
                iVar5 = local_3c;
                uVar4 = *param_3;
                if ((uVar4 & 0x1f) != 0) {
                  return 0;
                }
                uVar7 = uVar4 + 0x43 & 0xffffffe0;
                if (0 < (int)(uVar7 - param_4)) {
                  return 0;
                }
                if (uVar4 == 0) {
                  unaff_r9 = 0;
                }
                *param_3 = uVar7;
                if (uVar4 != 0) {
                  unaff_r9 = fn_00161bac();
                }
                uVar4 = *param_3 + 0x1f & 0xffffffe0;
                uVar7 = uVar4 + iVar5 + 0x1f & 0xffffffe0;
                *param_3 = uVar4;
                if (0 < (int)(uVar7 - param_4)) {
                  return 0;
                }
                *param_3 = uVar7;
                iVar5 = fn_00161b80(unaff_r9,uVar4,iVar5);
                if (iVar5 == 0) {
                  return 0;
                }
                if (unaff_r9 == 0) {
                  return 0;
                }
                fn_00161898(iVar6);
                iVar3 = iVar3 + 1;
              } while (iVar3 < local_40);
            }
            *(int *)(iVar6 + 0x34) = local_40;
          }
          uVar2 = uVar2 + 1;
          uVar8 = uVar8 + 0x5c;
        } while (uVar2 < uVar1);
      }
      return 1;
    }
  }
  return 0;
}



undefined4 fn_001519a8(int param_1,int param_2,uint *param_3,int param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar6 = *param_3;
  if ((uVar6 & 0x1f) == 0) {
    uVar1 = param_2 * 0x1e8 + 0x1fU & 0xffffffe0;
    uVar9 = uVar6 + uVar1;
    if ((int)(uVar9 - param_4) < 1) {
      uVar8 = 0;
      uVar7 = uVar6;
      if (uVar1 / 0x1e8 != 0) {
        do {
          if (uVar7 == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = fn_00162750(uVar7,(uint *)(param_1 + 0x6c));
          }
          fn_0017d948(param_1 + 0x80,param_1 + 0x84,iVar5 + 0xf8);
          uVar8 = uVar8 + 1;
          uVar7 = uVar7 + 0x1e8;
        } while (uVar8 < uVar1 / 0x1e8);
      }
      *(uint *)(param_1 + 0x6c) = uVar6;
      *(uint *)(param_1 + 0x70) = uVar1;
      *param_3 = uVar9;
      uVar6 = param_2 * 0x4c + 0x1fU & 0xffffffe0;
      if ((int)((uVar9 + uVar6) - param_4) < 1) {
        uVar8 = 0;
        uVar1 = (uint)((ulonglong)uVar6 * 0xd79435e5 + 0xd79435e5 >> 0x26);
        uVar7 = uVar9;
        if (uVar1 != 0) {
          do {
            puVar2 = (undefined4 *)0x0;
            if (uVar7 != 0) {
              puVar2 = (undefined4 *)fn_0017e758();
              puVar2[7] = 0;
              *puVar2 = &DAT_008582c8;
              puVar2[8] = 0;
              puVar2[9] = 0;
              puVar2[10] = 0xffffffff;
              puVar2[0xb] = 0;
              puVar2[0xc] = 0;
              puVar2[0xd] = 0;
              puVar2[0xe] = 0;
              puVar2[0x11] = 0;
              puVar2[0x12] = 0;
            }
            fn_0017d948(param_1 + 0xa0,param_1 + 0xa4,puVar2 + 0x11);
            uVar8 = uVar8 + 1;
            uVar7 = uVar7 + 0x4c;
          } while (uVar8 < uVar1);
        }
        *(uint *)(param_1 + 0x98) = uVar9;
        *(uint *)(param_1 + 0x9c) = uVar6;
        *param_3 = uVar9 + uVar6;
        piVar3 = *(int **)(param_1 + 0x84);
        if (piVar3 != (int *)(param_1 + 0x84)) {
          do {
            piVar3[0x34] = param_1 + 0x8c;
            piVar3 = (int *)*piVar3;
          } while (piVar3 != (int *)(param_1 + 0x84));
        }
        uVar4 = fn_00172fc4();
        fn_001625e4(uVar4,param_1 + 0x8c);
        return 1;
      }
    }
  }
  return 0;
}


