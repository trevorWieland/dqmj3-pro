#include "0034fb60_00350394.h"



undefined4 * fn_00350394(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = &DAT_00826390;
  puVar1 = (undefined4 *)fn_00145b00(0x3c,&DAT_00812c8c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
  }
  param_1[1] = puVar1;
  return param_1;
}



int fn_00350228(int *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (param_3 < (uint)((param_1[1] - iVar1) / 0x14)) {
    switch(param_2) {
    case 0:
      return (int)*(char *)(iVar1 + param_3 * 0x14 + 0xc);
    case 1:
      return (int)*(char *)(iVar1 + param_3 * 0x14 + 0xd);
    case 2:
      return (int)*(char *)(iVar1 + param_3 * 0x14 + 0xe);
    case 3:
      return (int)*(char *)(iVar1 + param_3 * 0x14 + 0xf);
    case 4:
      return (int)*(char *)(iVar1 + param_3 * 0x14 + 0x10);
    case 5:
      return (int)*(char *)(iVar1 + param_3 * 0x14 + 0x11);
    case 6:
      return (int)*(char *)(iVar1 + param_3 * 0x14 + 0x12);
    }
  }
  return 0;
}



void fn_003501d0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int local_28 [4];
  undefined1 local_17;
  
  piVar2 = *(int **)(param_1 + 4);
  iVar1 = piVar2[1];
  if ((*piVar2 == iVar1) || (*(int *)(iVar1 + -0x14) < param_2)) {
    fn_003502d4(local_28);
    local_17 = 1;
    local_28[0] = param_2;
    fn_0078e76c(piVar2,local_28);
  }
  else {
    *(undefined1 *)(iVar1 + -3) = 1;
  }
  return;
}



void fn_003501b0(int *param_1)

{
                    /* WARNING: Subroutine does not return */
  fn_006a8660(*(undefined4 *)(*param_1 + 0x58));
}



void fn_0034ff00(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int local_28 [4];
  undefined1 local_18;
  
  piVar2 = *(int **)(param_1 + 4);
  iVar1 = piVar2[1];
  if ((*piVar2 == iVar1) || (*(int *)(iVar1 + -0x14) < param_2)) {
    fn_003502d4(local_28);
    local_18 = 1;
    local_28[0] = param_2;
    fn_0078e76c(piVar2,local_28);
  }
  else {
    *(undefined1 *)(iVar1 + -4) = 1;
  }
  return;
}



void fn_0034fda0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int local_28 [3];
  undefined1 local_1a;
  undefined1 local_19;
  
  piVar2 = *(int **)(param_1 + 4);
  iVar1 = piVar2[1];
  if ((*piVar2 == iVar1) || (*(int *)(iVar1 + -0x14) < param_2)) {
    fn_003502d4(local_28);
    if (param_3 == 0) {
      local_1a = 1;
    }
    else {
      local_19 = 1;
    }
    local_28[0] = param_2;
    fn_0078e76c(piVar2,local_28);
    return;
  }
  if (param_3 == 0) {
    *(undefined1 *)(iVar1 + -6) = 1;
  }
  else {
    *(undefined1 *)(iVar1 + -5) = 1;
  }
  return;
}



void fn_0034fd78(int *param_1)

{
                    /* WARNING: Subroutine does not return */
  fn_006a8660(*(undefined4 *)(*param_1 + 0x58));
}



void fn_0034fcf0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int local_28 [4];
  undefined1 local_16;
  
  piVar2 = *(int **)(param_1 + 4);
  iVar1 = piVar2[1];
  if ((*piVar2 == iVar1) || (*(int *)(iVar1 + -0x14) < param_2)) {
    fn_003502d4(local_28);
    local_16 = 1;
    local_28[0] = param_2;
    fn_0078e76c(piVar2,local_28);
  }
  else {
    *(undefined1 *)(iVar1 + -2) = 1;
  }
  return;
}



void fn_0034fcd0(int *param_1)

{
                    /* WARNING: Subroutine does not return */
  fn_006a8660(*(undefined4 *)(*param_1 + 0x58));
}



void fn_0034fbd8(int param_1,undefined1 param_2)

{
  int *piVar1;
  undefined1 auStack_20 [19];
  undefined1 local_d;
  
  piVar1 = *(int **)(param_1 + 4);
  if (*piVar1 == piVar1[1]) {
    fn_003502d4(auStack_20);
    local_d = param_2;
    fn_0078e76c(piVar1,auStack_20);
  }
  else {
    *(undefined1 *)(*piVar1 + 0x13) = param_2;
  }
  return;
}



void fn_0034fbb8(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 auStack_20 [19];
  undefined1 uStack_d;
  
  iVar1 = *param_1;
  uStack_d = fn_006a8694(*(undefined4 *)(iVar1 + 0x58));
  piVar2 = *(int **)(*(int *)(iVar1 + 0x328) + 4);
  if (*piVar2 == piVar2[1]) {
    fn_003502d4(auStack_20);
    fn_0078e76c(piVar2,auStack_20);
  }
  else {
    *(undefined1 *)(*piVar2 + 0x13) = uStack_d;
  }
  return;
}



void fn_0034fb60(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int local_28 [3];
  undefined1 local_1b;
  
  piVar2 = *(int **)(param_1 + 4);
  iVar1 = piVar2[1];
  if ((*piVar2 == iVar1) || (*(int *)(iVar1 + -0x14) < param_2)) {
    fn_003502d4(local_28);
    local_1b = 1;
    local_28[0] = param_2;
    fn_0078e76c(piVar2,local_28);
  }
  else {
    *(undefined1 *)(iVar1 + -7) = 1;
  }
  return;
}



undefined4 * fn_003502d4(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  *param_1 = 0;
  if ((((byte)DAT_008c62ec & 1) == 0) && (iVar2 = fn_00303afc(&DAT_008c62ec), iVar2 != 0)) {
    DAT_008c62f0 = 0;
    DAT_008c62f4 = 0;
  }
  uVar1 = DAT_008c62f4;
  param_1[1] = DAT_008c62f0;
  param_1[2] = uVar1;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((int)param_1 + 0xd) = 0;
  *(undefined1 *)((int)param_1 + 0xe) = 0;
  *(undefined1 *)((int)param_1 + 0xf) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)((int)param_1 + 0x11) = 0;
  *(undefined1 *)((int)param_1 + 0x12) = 0;
  *(undefined1 *)((int)param_1 + 0x13) = 3;
  return param_1;
}


