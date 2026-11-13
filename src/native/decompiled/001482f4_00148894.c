#include "001482f4_00148894.h"



undefined4 fn_00148894(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1[5] == 0) && (iVar1 = (**(code **)(*param_1 + 0x70))(), iVar1 == 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



void fn_0014887c(int param_1,int param_2)

{
  if (0 < param_2) {
    *(int *)(param_1 + 0x14) = param_2;
  }
  return;
}



void fn_0014872c(int param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float in_s0;
  int iVar3;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [16];
  
  if (in_s0 <= 0.0) {
    return;
  }
  if (2 < param_3) {
    return;
  }
  if (1 < param_2) {
    return;
  }
  iVar3 = (int)in_s0;
  if (param_2 == 0) {
    uVar2 = fn_001603f8(auStack_20,0);
    fn_00163988(DAT_00897810,uVar2,iVar3);
    uVar1 = fn_001603f8(auStack_20,0);
    uVar2 = DAT_00897808;
  }
  else {
    if (param_3 == 0) {
      uVar2 = 0xff;
    }
    else if (param_3 == 1) {
      uVar2 = 0xffffffff;
    }
    else if (param_3 == 2) {
      uVar2 = 0x8c;
    }
    else {
      uVar2 = 0;
    }
    if (*(char *)(param_1 + 0x6b) == '\0') {
      uVar2 = fn_001603f8(auStack_28,uVar2);
      fn_00163988(DAT_00897808,uVar2,iVar3);
      uVar2 = fn_001603f8(auStack_28,0);
      fn_00163988(DAT_00897810,uVar2,iVar3);
      return;
    }
    if (*(char *)(param_1 + 0x6b) != '\x01') {
      return;
    }
    uVar1 = fn_001603f8(auStack_24,0);
    fn_00163988(DAT_00897808,uVar1,iVar3);
    uVar1 = fn_001603f8(auStack_24,uVar2);
    uVar2 = DAT_00897810;
  }
  fn_00163988(uVar2,uVar1,iVar3);
  return;
}



void fn_0014871c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x70) = param_2;
  *(undefined1 *)(param_1 + 0x6c) = 1;
  return;
}



void fn_00148700(undefined4 param_1,undefined4 param_2)

{
  fn_0015b054();
  fn_0015b064(param_2);
  fn_0015b0dc();
  return;
}



void fn_001486c4(void)

{
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



void fn_001486b0(void)

{
  fn_00173b98(DAT_008977d0,1);
  return;
}



void fn_00148674(void)

{
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



void fn_00148660(void)

{
  fn_00173b98(DAT_008977d0,0);
  return;
}



undefined4 fn_001485e8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00163e50(param_1,param_2,1);
  if (iVar1 != 0) {
    uVar2 = fn_001639b8(param_2);
    iVar1 = fn_00145b00(0x10,&DAT_00812c8c);
    if ((iVar1 != 0) && (iVar1 = fn_0015a304(iVar1,uVar2,param_3), iVar1 != 0)) {
      uVar2 = fn_0015a130(param_1);
      return uVar2;
    }
  }
  return 0xffffffff;
}



void fn_001485a8(void)

{
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



undefined4 fn_001484b4(int param_1)

{
  uint uVar1;
  int *piVar3;
  int *piVar2;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  
  piVar8 = *(int **)(param_1 + 4);
  if (*(int *)(param_1 + 8) - (int)piVar8 >> 2 != 0) {
    while (*(int **)(param_1 + 8) != piVar8) {
      if ((int *)*piVar8 != (int *)0x0) {
        (**(code **)(*(int *)*piVar8 + 4))();
      }
      *piVar8 = 0;
      piVar4 = *(int **)(param_1 + 8);
      if (*(int **)(param_1 + 4) != piVar4) {
        piVar2 = piVar8 + 1;
        if (piVar2 != piVar4) {
          piVar7 = piVar8;
          if (piVar2 < piVar4) {
            uVar1 = (int)piVar4 - (int)piVar2;
            if (0 < (int)uVar1) {
              uVar5 = (uVar1 & 7) >> 2;
              if (uVar5 != 0) {
                *piVar8 = *piVar2;
              }
              uVar6 = (uint)(uVar5 != 0);
              for (; (int)uVar5 < (int)uVar1 >> 2; uVar5 = uVar5 + 2) {
                piVar8[uVar6] = piVar2[uVar6];
                piVar8[uVar6 + 1] = piVar2[uVar6 + 1];
                uVar6 = uVar6 + 2;
              }
            }
          }
          else {
            do {
              piVar3 = piVar2 + 1;
              *piVar7 = *piVar2;
              piVar2 = piVar3;
              piVar7 = piVar7 + 1;
            } while (piVar3 != piVar4);
          }
        }
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -4;
      }
    }
  }
  return 1;
}



void fn_00148418(undefined4 param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  float in_s0;
  int iVar2;
  undefined1 auStack_18 [16];
  
  if (in_s0 <= 0.0) {
    return;
  }
  if (2 < param_3) {
    return;
  }
  if (1 < param_2) {
    return;
  }
  iVar2 = (int)in_s0;
  if (param_2 != 0) {
    if (param_3 == 0) {
      uVar1 = 0xff;
      goto LAB_00148488;
    }
    if (param_3 == 1) {
      uVar1 = 0xffffffff;
      goto LAB_00148488;
    }
    if (param_3 == 2) {
      uVar1 = 0x8c;
      goto LAB_00148488;
    }
  }
  uVar1 = 0;
LAB_00148488:
  uVar1 = fn_001603f8(auStack_18,uVar1);
  fn_00163988(DAT_0089780c,uVar1,iVar2);
  return;
}



void fn_001483c0(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  if (-1 < (int)param_2) {
    iVar2 = *(int *)(param_1 + 4);
    if ((iVar2 != *(int *)(param_1 + 8)) && (param_2 < (uint)(*(int *)(param_1 + 8) - iVar2 >> 2)))
    {
      piVar3 = (int *)(iVar2 + param_2 * 4);
      piVar1 = (int *)*piVar3;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
        *piVar3 = 0;
      }
    }
  }
  return;
}



undefined4 fn_00148348(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 0x5c);
  do {
    if (piVar4 == (int *)(param_1 + 0x5c)) {
      iVar2 = 0;
LAB_00148378:
      if (iVar2 == 0) {
        uVar1 = 0;
      }
      else {
        iVar3 = *(int *)(iVar2 + 0xc) + -1;
        *(int *)(iVar2 + 0xc) = iVar3;
        if (iVar3 == 0) {
          fn_0017d90c(param_1 + 0x58,iVar2 + 0x18);
          iVar2 = fn_002fedf4(iVar2 + 8);
          fn_002feef8(iVar2 + -8);
        }
        uVar1 = 1;
      }
      return uVar1;
    }
    if (piVar4[-6] == param_2) {
      iVar2 = (int)(piVar4 + -6);
      goto LAB_00148378;
    }
    piVar4 = (int *)*piVar4;
  } while( true );
}



undefined4 fn_001482f4(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == -1) {
    return 0;
  }
  iVar1 = fn_00167500(param_1,*(undefined4 *)(param_1 + 8),param_1 + 8,param_2);
  *(undefined4 *)(iVar1 + 0x28) = 1;
  fn_0017d90c(param_1 + 4,iVar1 + 0x2c);
  fn_0017d948(param_1 + 0x10,param_1 + 0x14,iVar1 + 0x2c);
  return 1;
}


