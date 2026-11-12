#include "00416e8c_00417db8.h"



void fn_00417db8(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  fn_002c3d68();
  piVar3 = *(int **)(param_1 + 0x18);
  if (piVar3 != (int *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*piVar3)(piVar3);
    do {
      if (puVar1 == &DAT_00895dec) goto LAB_00417e04;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  piVar3 = (int *)0x0;
LAB_00417e04:
  (**(code **)(*piVar3 + 0xc))(piVar3);
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00895dec) goto LAB_00417e48;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_00417e48:
  fn_006899f4(param_1,puVar1[2],0);
  return;
}



void fn_00417d5c(int param_1)

{
  if (*(char *)(*(int *)(param_1 + 0x5c) + 0x31) == '\x01') {
    fn_00689bd0(param_1,0,0);
    *(undefined **)(param_1 + 0xe4) = &DAT_004176b0;
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined **)(param_1 + 0xdc) = &DAT_004176b0;
    *(undefined4 *)(param_1 + 0xe0) = 0;
    *(undefined4 *)(param_1 + 0xf0) = 0;
    *(undefined **)(param_1 + 0xd4) = &DAT_004176b0;
    *(undefined4 *)(param_1 + 0xd8) = 0;
  }
  return;
}



void fn_00417c84(void)

{
                    /* WARNING: Subroutine does not return */
  fn_006ba250();
}



void fn_00417bf4(void)

{
                    /* WARNING: Subroutine does not return */
  fn_006ba250();
}



void fn_0041744c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 auStack_28 [12];
  
  iVar1 = fn_0068897c(*(undefined4 *)(param_1 + 0x70),(char *)&DAT_00417644);
  iVar2 = fn_0068897c(*(undefined4 *)(param_1 + 0x70),(char *)&DAT_0041764c);
  iVar3 = fn_0068897c(*(undefined4 *)(param_1 + 0x70),(char *)&DAT_00417654);
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
  *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe;
  *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe;
  iVar4 = fn_006ba274(param_1);
  iVar5 = fn_006ba284(param_1);
  iVar5 = *(int *)(param_1 + 0xf4) + (iVar4 * iVar5 + param_2) * 0x100;
  iVar4 = fn_006b4ed4(iVar5);
  if (iVar4 == 0) {
    iVar1 = fn_006b860c(*(undefined4 *)(DAT_00897804 + 0xc),(int)*(short *)(iVar5 + 0x2c));
  }
  else {
    iVar4 = fn_006b4ea4(iVar5);
    if (iVar4 == 0) {
      iVar4 = fn_006b4e74(iVar5);
      if (iVar4 == 0) {
        iVar4 = fn_006b2aa0(*(undefined4 *)(DAT_00897804 + 0x14),(int)*(short *)(iVar5 + 4));
        if (0 < iVar4) {
          fn_0018a618(auStack_28,4,3,&DAT_00417660,iVar4);
          fn_00190d50(iVar1,auStack_28);
          uVar6 = fn_0022f584((char *)&DAT_00417668,0);
          fn_00190d50(iVar2,uVar6);
          *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | 1;
          *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe | 1;
          return;
        }
        goto LAB_00417614;
      }
      iVar1 = fn_006b5074(*(undefined4 *)(DAT_00897804 + 0x18),(int)*(short *)(iVar5 + 4));
    }
    else {
      iVar1 = fn_006b50d0(*(undefined4 *)(DAT_00897804 + 0x18),(int)*(short *)(iVar5 + 4));
    }
  }
  if (iVar1 != 0) {
    uVar6 = fn_0022f584((char *)&DAT_00417680,0);
    fn_00190d50(iVar3,uVar6);
    *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe | 1;
    return;
  }
LAB_00417614:
  uVar6 = fn_0022f584((char *)&DAT_00417698,0);
  fn_00190d50(iVar3,uVar6);
  *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe | 1;
  return;
}



void fn_00417420(void)

{
                    /* WARNING: Subroutine does not return */
  fn_002c3de4();
}



/* WARNING: Removing unreachable block (ram,0x00417174) */
/* WARNING: Removing unreachable block (ram,0x0041717c) */
/* WARNING: Removing unreachable block (ram,0x00417188) */
/* WARNING: Removing unreachable block (ram,0x004171a4) */
/* WARNING: Removing unreachable block (ram,0x004171c0) */
/* WARNING: Removing unreachable block (ram,0x004171f0) */
/* WARNING: Removing unreachable block (ram,0x0041721c) */
/* WARNING: Removing unreachable block (ram,0x004171cc) */
/* WARNING: Removing unreachable block (ram,0x004171c4) */
/* WARNING: Removing unreachable block (ram,0x004171d4) */
/* WARNING: Removing unreachable block (ram,0x004171e8) */

void fn_00416f44(int param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined1 auStack_238 [256];
  undefined1 auStack_138 [256];
  undefined4 local_38;
  uint local_34;
  uint local_30;
  uint local_2c [2];
  
  puVar6 = (uint *)(param_1 + 0xf4);
  local_38 = *(undefined4 *)(DAT_00897804 + 0x48);
  uVar1 = fn_006ba0dc();
  fn_00301f50(auStack_238,0x100);
  fn_0017821c(auStack_138,auStack_238,0x100);
  uVar2 = *(uint *)(param_1 + 0xf8);
  uVar5 = *puVar6;
  uVar10 = (int)(uVar2 - uVar5) >> 8;
  if (uVar10 < uVar1) {
    iVar9 = uVar1 - uVar10;
    if (iVar9 != 0) {
      uVar1 = iVar9 + uVar10;
      if ((uint)((int)(*(int *)(param_1 + 0xfc) - uVar5) >> 8) < uVar1) {
        uVar5 = uVar10 + (uVar10 >> 1) + (uVar10 >> 3);
        local_2c[0] = uVar10 + 0x20;
        if (uVar10 + 0x20 <= uVar5) {
          local_2c[0] = uVar5;
        }
        puVar4 = local_2c;
        if (local_2c[0] <= uVar1) {
          puVar4 = &local_30;
        }
        local_30 = uVar1;
        local_34 = *puVar4;
        uVar5 = fn_00100fc6(local_34 << 8,0);
        uVar1 = uVar5;
        for (uVar10 = *puVar6; uVar10 != uVar2; uVar10 = uVar10 + 0x100) {
          if (uVar1 != 0) {
            fn_0017821c(uVar1,uVar10,0x100);
          }
          uVar1 = uVar1 + 0x100;
        }
        iVar11 = (uVar2 - *puVar6 & 0xffffff00) + uVar5;
        for (iVar8 = iVar9; iVar8 != 0; iVar8 = iVar8 + -1) {
          if (iVar11 != 0) {
            fn_0017821c(iVar11,auStack_138,0x100);
          }
          iVar11 = iVar11 + 0x100;
        }
        uVar10 = *(uint *)(param_1 + 0xf8);
        iVar8 = uVar5 + (iVar9 + ((int)(uVar2 - *puVar6) >> 8)) * 0x100;
        for (; uVar2 != uVar10; uVar2 = uVar2 + 0x100) {
          if (iVar8 != 0) {
            fn_0017821c(iVar8,uVar2,0x100);
          }
          iVar8 = iVar8 + 0x100;
        }
        uVar2 = *puVar6;
        uVar1 = *(uint *)(param_1 + 0xf8);
        uVar10 = uVar2;
        if (uVar1 < uVar2) {
          do {
            uVar10 = uVar10 + 0x100;
          } while (uVar10 != uVar1);
        }
        fn_001008c4(uVar2,(int)(*(int *)(param_1 + 0xfc) - uVar2) >> 8,0);
        *(uint *)(param_1 + 0xfc) = uVar5 + local_34 * 0x100;
        *(uint *)(param_1 + 0xf8) = uVar5 + ((int)(uVar1 - uVar2) >> 8) * 0x100 + iVar9 * 0x100;
        *puVar6 = uVar5;
      }
      else {
        uVar10 = uVar2 + iVar9 * 0x100;
        *(uint *)(param_1 + 0xf8) = uVar2 + iVar9 * 0x100;
        if (uVar10 < uVar2) {
          uVar7 = uVar2 + iVar9 * -0x100;
          uVar1 = uVar2;
          for (uVar5 = uVar7; uVar5 != uVar2; uVar5 = uVar5 + 0x100) {
            if (uVar1 != 0) {
              fn_0017821c(uVar1,uVar5,0x100);
            }
            uVar1 = uVar1 + 0x100;
          }
          uVar1 = uVar2;
          if (uVar2 < uVar7) {
            iVar9 = uVar7 - uVar2;
            if (0 < iVar9) {
              if (iVar9 * 0x800000 < 0) {
                uVar7 = uVar7 - 0x100;
                uVar1 = uVar2 - 0x100;
                fn_0017821c(uVar1,uVar7,0x100);
              }
              for (iVar9 = iVar9 >> 9; iVar9 != 0; iVar9 = iVar9 + -1) {
                fn_0017821c(uVar1 - 0x100,uVar7 - 0x100,0x100);
                uVar7 = uVar7 - 0x200;
                uVar1 = uVar1 - 0x200;
                fn_0017821c(uVar1,uVar7,0x100);
              }
            }
          }
          else {
            while (uVar2 != uVar7) {
              uVar7 = uVar7 - 0x100;
              fn_0017821c(uVar1 - 0x100,uVar7,0x100);
              uVar1 = uVar1 - 0x100;
            }
          }
          if (uVar2 < uVar10) {
            iVar9 = uVar10 - uVar2;
            if (0 < iVar9) {
              if (iVar9 * 0x800000 < 0) {
                fn_0017821c(uVar2,auStack_138,0x100);
                uVar2 = uVar2 + 0x100;
              }
              for (iVar9 = iVar9 >> 9; iVar9 != 0; iVar9 = iVar9 + -1) {
                fn_0017821c(uVar2,auStack_138,0x100);
                fn_0017821c(uVar2 + 0x100,auStack_138,0x100);
                uVar2 = uVar2 + 0x200;
              }
            }
          }
          else {
            for (; uVar2 != uVar10; uVar2 = uVar2 + 0x100) {
              fn_0017821c(uVar2,auStack_138,0x100);
            }
          }
        }
        else {
          for (; iVar9 != 0; iVar9 = iVar9 + -1) {
            if (uVar2 != 0) {
              fn_0017821c(uVar2,auStack_138,0x100);
            }
            uVar2 = uVar2 + 0x100;
          }
        }
      }
    }
  }
  else if ((uVar1 < uVar10) && (uVar10 = uVar5 + uVar1 * 0x100, uVar5 != uVar2)) {
    uVar1 = uVar10;
    if (uVar2 <= uVar10) {
      for (; uVar1 != uVar2; uVar1 = uVar1 + 0x100) {
      }
    }
    *(uint *)(param_1 + 0xf8) = uVar2 - (uVar2 - uVar10 & 0xffffff00);
  }
  iVar9 = 0;
  iVar8 = 0;
  do {
    piVar3 = (int *)fn_006ba108(local_38,iVar8);
    if (*piVar3 != 0) {
      fn_0023eea4(*(int *)(param_1 + 0xf4) + iVar9 * 0x100,piVar3);
      iVar9 = iVar9 + 1;
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0x2a);
  return;
}



void fn_00416edc(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = fn_00145b00(8,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_00229d84();
  }
  piVar3 = *(int **)(param_1 + 0x104);
  if (piVar3 != piVar2) {
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    *(int **)(param_1 + 0x104) = piVar2;
  }
  *(int *)(*(int *)(param_1 + 0x104) + 4) = param_1 + 0x78;
  fn_00417f00(param_1,0);
  return;
}



void fn_00416e8c(int param_1)

{
  if (*(int *)(param_1 + 0x100) != 0) {
    fn_00662a1c();
    fn_002feef8();
    *(undefined4 *)(param_1 + 0x100) = 0;
  }
  if (*(int **)(param_1 + 0x104) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x104) + 4))();
    *(undefined4 *)(param_1 + 0x104) = 0;
  }
  fn_00397db0(param_1);
  return;
}


