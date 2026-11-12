#include "006af13c_006af978.h"



int fn_006af978(int param_1,int param_2)

{
  return (int)*(short *)(*(int *)(param_1 + 4) + param_2 * 0x74 + 0xe);
}



void fn_006af8a8(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 local_40 [4];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar5 = 0;
  local_40[0] = 0x5f303045;
  local_40[1] = 0x3030;
  local_40[2] = 0x3f800000;
  local_40[3] = 0x5f303045;
  uStack_30 = 0x3130;
  uStack_2c = 0x3f000000;
  do {
    iVar4 = 0;
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
    iVar3 = (int)((longlong)(int)uVar2 * -0x72c234f7 + ((ulonglong)uVar2 << 0x20) >> 0x20);
    iVar3 = (iVar3 >> 6) - (iVar3 >> 0x1f);
    if (0 < iVar3) {
      do {
        iVar1 = fn_003035b0(*(int *)(param_1 + 4) + iVar4 * 0x74,local_40 + uVar5 * 3);
        if (iVar1 == 0) goto LAB_006af938;
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar3);
    }
    iVar4 = -1;
LAB_006af938:
    if (iVar4 == param_2) {
      return;
    }
    uVar5 = uVar5 + 1;
    if (1 < uVar5) {
      return;
    }
  } while( true );
}



int fn_006af868(int param_1,int param_2)

{
  return (int)*(char *)(*(int *)(param_1 + 4) + param_2 * 0x74 + 0x1a);
}



int fn_006af850(int param_1,int param_2)

{
  return *(int *)(param_1 + 4) + param_2 * 0x74 + 0x34;
}



void fn_006af838(void)

{
  return;
}



int fn_006af820(int param_1,int param_2)

{
  return (int)*(short *)(*(int *)(param_1 + 4) + param_2 * 0x74 + 0x10);
}



undefined4 fn_006af784(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  iVar1 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10);
  iVar3 = iVar1 >> 0x1f;
  if (iVar1 / 0xc + iVar3 != iVar3) {
    do {
      piVar2 = (int *)(*(int *)(param_1 + 0x10) + uVar4 * 0xc);
      if ((*piVar2 == param_2) && (iVar3 = fn_00154ac8(piVar2[1]), iVar3 != 0)) {
        return *(undefined4 *)(*(int *)(param_1 + 0x10) + uVar4 * 0xc + 8);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)((*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10)) / 0xc));
  }
  return 0;
}



int fn_006af76c(int param_1,int param_2)

{
  return (int)*(char *)(*(int *)(param_1 + 4) + param_2 * 0x74 + 0x55);
}



undefined4 fn_006af668(int param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(*(int *)(param_1 + 4) + param_2 * 0x74);
  if (pcVar2 != (char *)0x0) {
    cVar1 = *pcVar2;
    if (cVar1 == 'H') {
      return 0;
    }
    if (cVar1 == 'A') {
      return 1;
    }
    if (cVar1 == 'G') {
      return 2;
    }
    if (cVar1 == 'I') {
      return 3;
    }
    if (cVar1 == 'S') {
      return 4;
    }
    if (cVar1 == 'V') {
      return 5;
    }
    if (cVar1 == 'C') {
      return 6;
    }
    if (cVar1 == 'U') {
      return 7;
    }
    if (cVar1 == 'W') {
      return 8;
    }
    if (cVar1 == 'Z') {
      return 9;
    }
    if (cVar1 == 'D') {
      return 10;
    }
  }
  return 0xffffffff;
}



void fn_006af3a8(uint *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar10 = 0;
  uVar4 = *(int *)(param_2 + 8) - *(int *)(param_2 + 4);
  iVar5 = (int)((longlong)(int)uVar4 * -0x72c234f7 + ((ulonglong)uVar4 << 0x20) >> 0x20);
  iVar11 = (iVar5 >> 6) - (iVar5 >> 0x1f);
  puVar13 = param_1;
  iVar5 = param_2;
  local_30 = param_3;
  uStack_2c = param_4;
  if (0 < iVar11) {
    do {
      iVar1 = fn_00147e6c(*(int *)(param_2 + 4) + iVar10 * 0x74,local_30,uStack_2c,&local_30,
                           puVar13,iVar5);
      if (iVar1 == 0) {
        piVar9 = (int *)param_1[1];
        if (piVar9 == (int *)param_1[2]) {
          uVar4 = (int)((int)piVar9 - *param_1) >> 2;
          if (uVar4 < (uint)((int)((int)param_1[2] - *param_1) >> 2)) {
            param_1[1] = (uint)(piVar9 + 1);
            if (piVar9 != (int *)0x0) {
              *piVar9 = piVar9[-1];
            }
            piVar6 = piVar9 + -1;
            piVar7 = piVar9;
            if (piVar9 < piVar6) {
              iVar1 = (int)piVar6 - (int)piVar9;
              if (0 < iVar1) {
                if (iVar1 * 0x20000000 < 0) {
                  piVar6 = piVar9 + -2;
                  piVar7 = piVar9 + -1;
                  *piVar7 = *piVar6;
                }
                for (iVar1 = iVar1 >> 3; iVar1 != 0; iVar1 = iVar1 + -1) {
                  piVar7[-1] = piVar6[-1];
                  piVar6 = piVar6 + -2;
                  piVar7 = piVar7 + -2;
                  *piVar7 = *piVar6;
                }
              }
            }
            else {
              while (piVar9 != piVar6) {
                piVar6 = piVar6 + -1;
                piVar7[-1] = *piVar6;
                piVar7 = piVar7 + -1;
              }
            }
            *piVar9 = iVar10;
          }
          else {
            uVar12 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
            if (uVar12 < uVar4 + 0x20) {
              uVar12 = uVar4 + 0x20;
            }
            piVar2 = (int *)fn_00100fc6(uVar12 << 2,0);
            piVar7 = piVar2;
            for (piVar6 = (int *)*param_1; piVar6 != piVar9; piVar6 = piVar6 + 1) {
              if (piVar7 != (int *)0x0) {
                *piVar7 = *piVar6;
              }
              piVar7 = piVar7 + 1;
            }
            piVar6 = (int *)(((int)piVar9 - *param_1 & 0xfffffffc) + (int)piVar2);
            if (piVar6 != (int *)0x0) {
              *piVar6 = iVar10;
            }
            piVar7 = (int *)param_1[1];
            piVar6 = (int *)(((int)piVar9 - *param_1 & 0xfffffffc) + (int)piVar2);
            for (; piVar9 != piVar7; piVar9 = piVar9 + 1) {
              piVar6 = piVar6 + 1;
              if (piVar6 != (int *)0x0) {
                *piVar6 = *piVar9;
              }
            }
            uVar3 = *param_1;
            uVar8 = param_1[1];
            uVar4 = uVar3;
            if (uVar8 < uVar3) {
              do {
                uVar4 = uVar4 + 4;
              } while (uVar4 != uVar8);
            }
            fn_001008c4(uVar3,(int)(param_1[2] - uVar3) >> 2,0);
            param_1[2] = (uint)(piVar2 + uVar12);
            param_1[1] = (uint)(piVar2 + ((int)(uVar8 - uVar3) >> 2) + 1);
            *param_1 = (uint)piVar2;
          }
        }
        else {
          param_1[1] = (uint)(piVar9 + 1);
          if (piVar9 != (int *)0x0) {
            *piVar9 = iVar10;
          }
        }
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar11);
  }
  return;
}



undefined4
fn_006af13c(short *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            int param_6,int param_7)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if (param_2 != 1) {
    return 1;
  }
  uVar9 = *(undefined4 *)(DAT_00897804 + 0xc);
  iVar2 = fn_006b8390(uVar9,param_4,param_3,param_4,param_4);
  iVar3 = fn_006b8390(uVar9,param_5);
  if (iVar2 == 0) {
LAB_006af210:
    uVar9 = fn_00661308(param_6);
  }
  else {
    bVar1 = *(byte *)(iVar2 + 0x3c);
    iVar4 = fn_00661714((int)*(short *)(iVar2 + 0x1c));
    uVar5 = iVar4 - 1;
    if (((uVar5 < 3) && (0x18 < bVar1)) && (bVar1 < 0x32)) {
      uVar9 = fn_00661560();
    }
    else if (((uVar5 < 5) && (0x31 < bVar1)) && (bVar1 < 100)) {
      uVar9 = fn_00661550();
    }
    else {
      if ((6 < uVar5) || (bVar1 < 100)) {
        param_6 = (int)*(short *)(iVar2 + 0x1c);
        goto LAB_006af210;
      }
      uVar9 = fn_006615d4();
    }
  }
  if (iVar3 != 0) {
    bVar1 = *(byte *)(iVar3 + 0x3c);
    iVar2 = fn_00661714((int)*(short *)(iVar3 + 0x1c));
    uVar5 = iVar2 - 1;
    if (((uVar5 < 3) && (0x18 < bVar1)) && (bVar1 < 0x32)) {
      uVar6 = fn_00661560();
      goto LAB_006af2ac;
    }
    if (((uVar5 < 5) && (0x31 < bVar1)) && (bVar1 < 100)) {
      uVar6 = fn_00661550();
      goto LAB_006af2ac;
    }
    if ((uVar5 < 7) && (99 < bVar1)) {
      uVar6 = fn_006615d4();
      goto LAB_006af2ac;
    }
    param_7 = (int)*(short *)(iVar3 + 0x1c);
  }
  uVar6 = fn_00661308(param_7);
LAB_006af2ac:
  if (param_3 == 0) {
    iVar2 = fn_005fdd14(uVar9,uVar6,0,0,0);
    if (iVar2 != *param_1) {
      return 0;
    }
  }
  else if (param_3 == 1) {
    uVar7 = fn_005fdd14(uVar9,uVar6,0,0,0);
    iVar2 = fn_005fdd14(uVar9,uVar6,1,uVar7,0);
    if (iVar2 != *param_1) {
      return 0;
    }
  }
  else if (param_3 == 2) {
    uVar7 = fn_005fdd14(uVar9,uVar6,0,0,0);
    uVar8 = fn_005fdd14(uVar9,uVar6,1,uVar7,0);
    iVar2 = fn_005fdd14(uVar9,uVar6,2,uVar7,uVar8);
    if (iVar2 != *param_1) {
      return 0;
    }
  }
  return 1;
}


