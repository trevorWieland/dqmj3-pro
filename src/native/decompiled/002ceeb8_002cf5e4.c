#include "002ceeb8_002cf5e4.h"



void fn_002cf5e4(undefined4 *param_1,undefined4 param_2)

{
  param_1[1] = param_2;
  *param_1 = &DAT_00851dec;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



void fn_002cf450(int param_1,int *param_2)

{
  int iVar1;
  float in_s0;
  float in_s1;
  float in_s2;
  float fVar2;
  undefined4 uVar3;
  float local_38;
  float local_34;
  float fStack_30;
  undefined4 local_2c;
  float local_28;
  undefined4 local_24;
  
  if (*(char *)(param_1 + 8) != '\0') {
    (**(code **)(*param_2 + 0x40))(param_2,0x9c45,0);
    fn_002cfdd0(param_2,0xf,4,1);
    *(undefined1 *)(param_1 + 8) = 0;
  }
  fn_0068f4ac(*(undefined4 *)(param_1 + 4),param_2 + 2,param_2[0x25]);
  local_38 = (float)param_2[2] + in_s0;
  fStack_30 = (float)param_2[4] + in_s2;
  local_34 = (float)param_2[3] + in_s1;
  (**(code **)(*param_2 + 0x1c))(param_2,&local_38);
  fVar2 = SQRT(in_s0 * in_s0 + in_s1 * in_s1 + in_s2 * in_s2);
  if (0x3dcccccd < (int)fVar2) {
    uVar3 = 0;
    fn_00525bd0();
    local_28 = in_s0 * 0.024543693;
    local_2c = uVar3;
    local_24 = uVar3;
    (**(code **)(*param_2 + 0x24))(param_2,&local_2c);
  }
  iVar1 = fn_00191284(param_2[1],0xf);
  if (iVar1 != 0) {
    fn_0018367c(param_2[1]);
    iVar1 = fn_006eb3e8();
    if (iVar1 == 0) {
      return;
    }
  }
  if ((int)fVar2 < 0x3dccccce) {
    fn_002cfdd0(param_2,0,4,0);
    return;
  }
  fn_002cfdd0(param_2,2,4,0);
  return;
}



void fn_002cf370(int param_1,int param_2)

{
  int *piVar1;
  int *piVar3;
  int *piVar2;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  
  piVar5 = *(int **)(param_1 + 0x7c);
  if (*(int **)(param_1 + 0x80) != piVar5) {
    do {
      if (*piVar5 == param_2) {
        piVar7 = *(int **)(param_1 + 0x80);
        if (*(int **)(param_1 + 0x7c) != piVar7) {
          piVar2 = piVar5 + 1;
          if (piVar2 != piVar7) {
            piVar1 = piVar5;
            if (piVar2 < piVar7) {
              uVar6 = (int)piVar7 - (int)piVar2;
              if (0 < (int)uVar6) {
                uVar8 = (uVar6 & 7) >> 2;
                if (uVar8 != 0) {
                  *piVar5 = *piVar2;
                }
                uVar4 = (uint)(uVar8 != 0);
                for (; (int)uVar8 < (int)uVar6 >> 2; uVar8 = uVar8 + 2) {
                  piVar5[uVar4] = piVar2[uVar4];
                  piVar5[uVar4 + 1] = piVar2[uVar4 + 1];
                  uVar4 = uVar4 + 2;
                }
              }
            }
            else {
              do {
                piVar3 = piVar2 + 1;
                *piVar1 = *piVar2;
                piVar1 = piVar1 + 1;
                piVar2 = piVar3;
              } while (piVar3 != piVar7);
            }
          }
          *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + -4;
        }
      }
      else {
        piVar5 = piVar5 + 1;
      }
    } while (*(int **)(param_1 + 0x80) != piVar5);
  }
  return;
}



void fn_002cf33c(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = fn_006c7ef8();
  uVar3 = *(undefined4 *)(DAT_00897804 + 8);
  iVar2 = fn_006b64b0(uVar3);
  fn_0025bd60(uVar3,iVar2 - iVar1);
  return;
}



void fn_002cf29c(int param_1)

{
  fn_00154ac8(param_1 + 0x25c);
  return;
}



void fn_002cf294(int param_1)

{
  fn_00154ac8(*(byte *)(param_1 + 4) + 0x25c);
  return;
}



void fn_002cf034(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  
  fn_0034f014(*(undefined4 *)(param_1 + 0x20));
  iVar2 = fn_00145b00(0x28,&DAT_00812c8c);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = fn_002ceb1c(iVar2,param_1);
  }
  iVar2 = *(int *)(param_1 + 0x2c);
  if (iVar2 != iVar3) {
    if (iVar2 != 0) {
      fn_002ceeb8(iVar2);
      fn_002feef8();
    }
    *(int *)(param_1 + 0x2c) = iVar3;
  }
  fn_002cd71c();
  cVar1 = *(char *)(param_1 + 0x14);
  if (cVar1 == '\x02') {
    pcVar4 = (char *)fn_0068c7f4(DAT_008977e8);
    if (*pcVar4 == '\0') {
      fn_002cf310(*(undefined1 *)(*(int *)(param_1 + 0x18) + 0x10));
      fn_0025b4c4(*(undefined4 *)(DAT_00897804 + 8),1);
    }
    cVar1 = *(char *)(param_1 + 0x14);
    if (cVar1 == '\x02') goto code_r0x002cf0ec;
  }
  if (cVar1 != '\x01') {
    *(undefined1 *)(param_1 + 0x14) = 0;
    *(undefined1 *)(param_1 + 0x1c) = 0;
    uVar5 = 0xd4;
    if (*(char *)(param_1 + 0x1d) == '\x01') {
      uVar5 = 0xd5;
    }
    fn_001f748c(*(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x24),uVar5,1);
    (**(code **)(**(int **)(*(int *)(param_1 + 0x2c) + 0x24) + 0x1c))();
    *(undefined1 *)(param_1 + 10) = 0;
    *(undefined1 *)(param_1 + 9) = 0;
    *(undefined1 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    return;
  }
code_r0x002cf0ec:
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



void fn_002cf310(int param_1)

{
  int iVar1;
  
  iVar1 = 4;
  do {
    if (param_1 == iVar1) {
      fn_00144834(param_1 + 0x25c,1);
    }
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return;
}



void fn_002cefe8(int param_1,undefined4 param_2)

{
  *(undefined1 *)(*(int *)(param_1 + 0x18) + 4) = 0;
  fn_0030f990(*(undefined4 *)(param_1 + 0x18));
  fn_002f8d20(param_2);
  *(undefined1 *)(param_1 + 0x14) = 1;
  *(undefined1 *)(param_1 + 0x1c) = 1;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  return;
}



void fn_002cefbc(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x24) = param_2;
  *(char *)(param_1 + 0x28) = (char)param_3;
  iVar1 = fn_002cf2a4();
  *(bool *)(param_1 + 0x29) = iVar1 == param_3;
  return;
}



int * fn_002ceeb8(int *param_1)

{
  if ((int *)param_1[9] != (int *)0x0) {
    (**(code **)(*(int *)param_1[9] + 4))();
  }
  if ((int *)param_1[8] != (int *)0x0) {
    (**(code **)(*(int *)param_1[8] + 8))();
  }
  if ((int *)param_1[7] != (int *)0x0) {
    (**(code **)(*(int *)param_1[7] + 4))();
  }
  if ((int *)param_1[6] != (int *)0x0) {
    (**(code **)(*(int *)param_1[6] + 4))();
  }
  if ((int *)param_1[5] != (int *)0x0) {
    (**(code **)(*(int *)param_1[5] + 4))();
  }
  if ((int *)param_1[4] != (int *)0x0) {
    (**(code **)(*(int *)param_1[4] + 4))();
  }
  if ((int *)param_1[3] != (int *)0x0) {
    (**(code **)(*(int *)param_1[3] + 4))();
  }
  if ((int *)param_1[2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[2] + 4))();
  }
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 4))();
  }
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 4))();
  }
  return param_1;
}


