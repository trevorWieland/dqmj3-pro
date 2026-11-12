#include "0012206c_0012271c.h"



int * fn_0012271c(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    fn_00100414(iVar1 + 0x10,&LAB_00147d74,4);
    fn_002feef8(iVar1);
  }
  return param_1;
}



void fn_00122668(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  piVar2 = (int *)*param_1;
  if (piVar2[3] != -1) {
    fn_00159f34(*piVar2);
    piVar2[3] = -1;
  }
  uVar3 = 0;
  do {
    if (piVar2[uVar3 + 4] != 0) {
      fn_0013ae4c(piVar2[uVar3 + 4],*piVar2);
      iVar1 = piVar2[uVar3 + 4];
      if (iVar1 != 0) {
        fn_002feef8(iVar1);
        piVar2[uVar3 + 4] = 0;
      }
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 4);
  if (*piVar2 != 0) {
    if (piVar2[2] != -1) {
      fn_0016a43c();
      piVar2[2] = -1;
    }
    if (piVar2[1] != -1) {
                    /* WARNING: Subroutine does not return */
      fn_001482f4(*piVar2);
    }
    *piVar2 = 0;
  }
  return;
}



void fn_00122644(undefined4 *param_1)

{
  *param_1 = &DAT_00820984;
  param_1[2] = param_1 + 2;
  param_1[1] = 0;
  param_1[3] = param_1 + 2;
  return;
}



void fn_001223cc(undefined *param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_90 [32];
  undefined4 local_70;
  undefined4 uStack_6c;
  int local_68;
  int local_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined1 auStack_48 [32];
  undefined1 *local_28;
  
  iVar3 = DAT_00897804;
  if (DAT_00897804 != 0) {
    local_28 = auStack_48;
    fn_00301a9c(auStack_90,&DAT_0088fcb8,0x20);
    local_70 = **(undefined4 **)(*(int *)(iVar3 + 0xc) + 4);
    uStack_6c = 0;
    local_68 = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 0x14) + 4) + 0x60);
    local_64 = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 0x14) + 4) + 0x86);
    uStack_60 = 0;
    local_5c = 0;
    local_58 = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 8) + 4) + 0x26c);
    local_54 = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 8) + 4) + 0x26e);
    local_50 = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 8) + 4) + 0x270);
    local_4c = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 8) + 4) + 0x272);
    fn_0013ef80(local_28,auStack_90,0x48);
    iVar3 = fn_001010c8(auStack_48,*(undefined4 *)(*(int *)(DAT_00897804 + 0x60) + 4),0x20);
    if (iVar3 != 0) {
      bVar2 = true;
      goto LAB_001224e8;
    }
  }
  bVar2 = false;
LAB_001224e8:
  piVar1 = (int *)(param_1 + 4);
  if (0 < param_2) {
    param_1 = &DAT_007c44f4;
  }
  iVar4 = 0;
  iVar3 = 0;
  if (0 < param_2) {
    do {
      uVar8 = (uint)(char)iVar3;
      iVar6 = 0;
      if ((-1 < (int)uVar8) && (uVar8 < 7)) {
        iVar6 = *(int *)(param_1 + uVar8 * 4);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + iVar6;
    } while (iVar3 < param_2);
  }
  uVar8 = (uint)(iVar4 + param_3) >> 5;
  uVar7 = *(uint *)(*piVar1 + uVar8 * 4);
  uVar5 = 1 << (iVar4 + param_3 & 0x1fU);
  if (param_4 == 0) {
    uVar5 = uVar7 & ~uVar5;
  }
  else {
    uVar5 = uVar5 | uVar7;
  }
  *(uint *)(*piVar1 + uVar8 * 4) = uVar5;
  iVar3 = DAT_00897804;
  if ((!bVar2) && (DAT_00897804 != 0)) {
    fn_00301a9c(auStack_90,&DAT_0088fcb8,0x20);
    local_70 = **(undefined4 **)(*(int *)(iVar3 + 0xc) + 4);
    uStack_6c = 0;
    local_68 = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 0x14) + 4) + 0x60);
    local_64 = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 0x14) + 4) + 0x86);
    uStack_60 = 0;
    local_5c = 0;
    local_58 = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 8) + 4) + 0x26c);
    local_54 = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 8) + 4) + 0x26e);
    local_50 = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 8) + 4) + 0x270);
    local_4c = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 8) + 4) + 0x272);
    fn_0013ef80(auStack_48,auStack_90,0x48);
    fn_00122c48(*(undefined4 *)(DAT_00897804 + 0x60),auStack_48);
  }
  return;
}



int * fn_0012238c(int *param_1)

{
  if (*param_1 != 0) {
    fn_002feef8();
  }
  return param_1;
}



void fn_00122344(undefined4 *param_1)

{
  param_1 = (undefined4 *)*param_1;
  if (param_1[2] != -1) {
    fn_0016a43c(*param_1);
    param_1[2] = 0xffffffff;
  }
  if (param_1[1] != -1) {
                    /* WARNING: Subroutine does not return */
    fn_001482f4(*param_1);
  }
  *param_1 = 0;
  return;
}



void fn_00122320(void)

{
  fn_0013af30(DAT_008977d4,0);
  fn_0013a624(DAT_008977d4);
  return;
}



void fn_001221d4(int param_1,undefined4 param_2,int param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  short local_118 [40];
  undefined4 local_c8 [41];
  
  iVar4 = *(int *)(param_1 + 4);
  if (param_3 != 0) {
    fn_0017821c(local_118,iVar4 + 0x1d4ec,0xf0);
  }
  fn_0017821c(iVar4,param_2,0x1db7c);
  if (param_3 != 0) {
    iVar4 = 0;
    do {
      sVar1 = local_118[iVar4];
      iVar5 = (int)sVar1;
      if (iVar5 != 0) {
        iVar3 = 0;
        uVar6 = local_c8[iVar4];
        iVar2 = *(int *)(param_1 + 4);
        do {
          if (*(short *)(iVar2 + iVar3 * 2 + 0x1d4ec) == iVar5) {
            iVar3 = iVar3 * 4 + 0x1d53c;
LAB_00122288:
            if (*(int *)(iVar2 + iVar3) != 0) goto LAB_001222dc;
            break;
          }
          if (*(short *)(iVar2 + iVar3 * 2 + 0x1d4ee) == iVar5) {
            iVar3 = iVar3 * 4 + 0x1d540;
            goto LAB_00122288;
          }
          iVar3 = iVar3 + 2;
        } while (iVar3 < 0x28);
        iVar5 = fn_0012f254(iVar5,uVar6);
        if (iVar5 != 0) {
          iVar5 = 0;
          do {
            if (*(short *)(*(int *)(param_1 + 4) + iVar5 * 2 + 0x1d4ec) == 0) {
              *(short *)(*(int *)(param_1 + 4) + iVar5 * 2 + 0x1d4ec) = sVar1;
              *(undefined4 *)(*(int *)(param_1 + 4) + iVar5 * 4 + 0x1d53c) = uVar6;
              break;
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < 0x28);
        }
      }
LAB_001222dc:
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x28);
  }
  return;
}



int * fn_0012219c(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x14) != 0) {
      fn_002feef8(*(int *)(iVar1 + 0x14));
    }
    fn_002feef8(iVar1);
  }
  return param_1;
}



void fn_0012206c(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  fn_001218d4(DAT_00897800,DAT_00898780);
  if (*piVar1 != 0) {
    if (piVar1[5] != 0) {
      fn_0013ae4c();
      if (piVar1[5] != 0) {
        fn_002feef8(piVar1[5]);
        piVar1[5] = 0;
      }
    }
    fn_00151954(*(undefined4 *)(piVar1[0xc] + 0xc));
    if (piVar1[0xb] != -1) {
      fn_0016a43c(*piVar1);
      piVar1[0xb] = -1;
    }
    if (piVar1[10] != -1) {
                    /* WARNING: Subroutine does not return */
      fn_001482f4(*piVar1);
    }
    fn_00151954(*(undefined4 *)(piVar1[6] + 0xc));
    if (piVar1[3] != -1) {
      fn_0016a43c(*piVar1);
      piVar1[3] = -1;
    }
    if (piVar1[2] != -1) {
      fn_0016a43c(*piVar1);
      piVar1[2] = -1;
    }
    if (piVar1[1] != -1) {
                    /* WARNING: Subroutine does not return */
      fn_001482f4(*piVar1);
    }
    if (piVar1[8] != -1) {
      fn_0016a43c(*piVar1);
      piVar1[8] = -1;
    }
    if (piVar1[7] != -1) {
                    /* WARNING: Subroutine does not return */
      fn_001482f4(*piVar1);
    }
    piVar1[4] = 0;
    *piVar1 = 0;
  }
  return;
}


