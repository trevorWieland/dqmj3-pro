#include "00303d20_00303fe0.h"



void fn_00303fe0(int param_1)

{
  fn_001221d4(*(undefined4 *)(DAT_00897804 + 0xc),*(undefined4 *)(param_1 + 0x18),0);
  fn_00121118(*(undefined4 *)(DAT_00897804 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  return;
}



undefined4 * fn_00303fbc(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  fn_003032f2(param_1 + 1,param_2 + 1);
  return param_1;
}



void fn_00303f80(undefined1 *param_1)

{
  fn_00699094(DAT_008977e0);
  fn_0026a494(DAT_00897818,*(undefined4 *)(param_1 + 4),1);
  *param_1 = 1;
  return;
}



void fn_00303f54(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = fn_002ff600(0x10);
  iVar2 = fn_00303f6c(uVar1,0);
  *(undefined4 *)(iVar2 + 0xc) = param_3;
  return;
}



void fn_00303f28(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = fn_002ff600(0x10);
  iVar2 = fn_00303f40(uVar1,0);
  *(undefined4 *)(iVar2 + 0xc) = param_3;
  return;
}



undefined4 fn_00303edc(char *param_1)

{
  int iVar1;
  
  if ((*param_1 == '\x01') && (iVar1 = fn_00269b38(DAT_00897818), iVar1 == 2)) {
    *param_1 = '\x02';
  }
  else if (*param_1 != '\x02') {
    return 0;
  }
  return 1;
}



undefined4 * fn_00303ed8(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint extraout_r1;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 unaff_r4;
  undefined4 in_lr;
  
  *param_1 = &DAT_0081be7c;
  fn_002feca8(param_1[0x56]);
  param_1[0x56] = 0;
  if ((int *)param_1[0x59] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x59] + 4))();
  }
  uVar5 = param_1[0x53];
  uVar4 = param_1[0x54];
  uVar3 = uVar5;
  if (uVar5 < uVar4) {
    iVar7 = 1;
    if (1 < (int)(uVar4 - uVar5) / 0xc + 1) {
      iVar1 = (int)(uVar4 - uVar5) >> 0x1f;
      uVar4 = (int)(uVar4 - uVar5) / 0xc + iVar1;
      do {
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)((uVar4 - iVar1) + 1));
    }
  }
  else {
    for (; uVar3 != uVar4; uVar3 = uVar3 + 0xc) {
    }
  }
  param_1[0x54] = uVar5;
  piVar2 = (int *)param_1[0x52];
  if (piVar2 != (int *)0x0) {
    uVar4 = param_1[0x53];
  }
  if (piVar2 != (int *)0x0 && uVar4 != 0) {
    (**(code **)(*piVar2 + 0xc))();
    uVar4 = extraout_r1;
  }
  uVar6 = param_1[0x40];
  uVar5 = param_1[0x41];
  uVar3 = uVar6;
  if (uVar6 < uVar5) {
    iVar7 = ((int)(uVar5 - uVar6) >> 4) + 1;
    if (1 < iVar7) {
      uVar3 = uVar5 - uVar6;
    }
    uVar4 = 1;
    if (1 < iVar7) {
      do {
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < ((int)uVar3 >> 4) + 1);
    }
  }
  else {
    for (; uVar3 != uVar5; uVar3 = uVar3 + 0x10) {
    }
  }
  param_1[0x41] = uVar6;
  piVar2 = (int *)param_1[0x3f];
  if (piVar2 != (int *)0x0) {
    uVar4 = param_1[0x40];
  }
  if (piVar2 != (int *)0x0 && uVar4 != 0) {
    (**(code **)(*piVar2 + 0xc))();
  }
  iVar7 = 0;
  *param_1 = &DAT_0081bab4;
  do {
    iVar1 = iVar7 * 4;
    piVar2 = (int *)param_1[iVar1 + 0x1a];
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    iVar7 = iVar7 + 1;
    param_1[iVar1 + 0x1a] = 0;
  } while (iVar7 < 8);
  *param_1 = &DAT_00850e30;
  uVar3 = param_1[5];
  uVar4 = uVar3;
  if ((uint)param_1[6] < uVar3) {
    do {
      uVar4 = uVar4 + 8;
    } while (uVar4 != param_1[6]);
  }
  fn_001008c4(uVar3,(int)(param_1[7] - uVar3) >> 3,0,uVar3,unaff_r4,in_lr);
  return param_1;
}



undefined4 * fn_00303ed4(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint extraout_r1;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 unaff_r4;
  undefined4 in_lr;
  
  *param_1 = &DAT_0081be7c;
  fn_002feca8(param_1[0x56]);
  param_1[0x56] = 0;
  if ((int *)param_1[0x59] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x59] + 4))();
  }
  uVar5 = param_1[0x53];
  uVar4 = param_1[0x54];
  uVar3 = uVar5;
  if (uVar5 < uVar4) {
    iVar7 = 1;
    if (1 < (int)(uVar4 - uVar5) / 0xc + 1) {
      iVar1 = (int)(uVar4 - uVar5) >> 0x1f;
      uVar4 = (int)(uVar4 - uVar5) / 0xc + iVar1;
      do {
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)((uVar4 - iVar1) + 1));
    }
  }
  else {
    for (; uVar3 != uVar4; uVar3 = uVar3 + 0xc) {
    }
  }
  param_1[0x54] = uVar5;
  piVar2 = (int *)param_1[0x52];
  if (piVar2 != (int *)0x0) {
    uVar4 = param_1[0x53];
  }
  if (piVar2 != (int *)0x0 && uVar4 != 0) {
    (**(code **)(*piVar2 + 0xc))();
    uVar4 = extraout_r1;
  }
  uVar6 = param_1[0x40];
  uVar5 = param_1[0x41];
  uVar3 = uVar6;
  if (uVar6 < uVar5) {
    iVar7 = ((int)(uVar5 - uVar6) >> 4) + 1;
    if (1 < iVar7) {
      uVar3 = uVar5 - uVar6;
    }
    uVar4 = 1;
    if (1 < iVar7) {
      do {
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < ((int)uVar3 >> 4) + 1);
    }
  }
  else {
    for (; uVar3 != uVar5; uVar3 = uVar3 + 0x10) {
    }
  }
  param_1[0x41] = uVar6;
  piVar2 = (int *)param_1[0x3f];
  if (piVar2 != (int *)0x0) {
    uVar4 = param_1[0x40];
  }
  if (piVar2 != (int *)0x0 && uVar4 != 0) {
    (**(code **)(*piVar2 + 0xc))();
  }
  iVar7 = 0;
  *param_1 = &DAT_0081bab4;
  do {
    iVar1 = iVar7 * 4;
    piVar2 = (int *)param_1[iVar1 + 0x1a];
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    iVar7 = iVar7 + 1;
    param_1[iVar1 + 0x1a] = 0;
  } while (iVar7 < 8);
  *param_1 = &DAT_00850e30;
  uVar3 = param_1[5];
  uVar4 = uVar3;
  if ((uint)param_1[6] < uVar3) {
    do {
      uVar4 = uVar4 + 8;
    } while (uVar4 != param_1[6]);
  }
  fn_001008c4(uVar3,(int)(param_1[7] - uVar3) >> 3,0,uVar3,unaff_r4,in_lr);
  return param_1;
}



void fn_00303ea4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = fn_002ff600(100);
  iVar2 = fn_00303ebc(uVar1,0);
  *(undefined4 *)(iVar2 + 0xc) = param_3;
  return;
}



undefined4 * fn_00303e58(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00211c48();
  *puVar1 = &DAT_0082175c;
  puVar1[0x67] = 0;
  puVar1[0x68] = 0;
  fn_001d96b0(puVar1,1);
  return puVar1;
}



void fn_00303e52(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00303e56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc))();
  return;
}



void fn_00303e4c(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00303e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc))();
  return;
}



void fn_00303d58(int *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  iVar1 = fn_006f7a20(DAT_008977e0);
  if (iVar1 == 0) {
    iVar1 = fn_006f7a5c(DAT_008977e0);
    fVar2 = *(float *)(iVar1 + 0x1c) - ((float)param_1[8] + *(float *)param_1[0x40]);
    fVar3 = *(float *)(iVar1 + 0x24) - ((float)param_1[10] + ((float *)param_1[0x40])[2]);
    fVar2 = fVar2 * fVar2 + 0.0 + fVar3 * fVar3;
    if (*(char *)((int)param_1 + 0x59) == '\0') {
      if (fVar2 <= (float)param_1[0x67] * (float)param_1[0x67]) goto LAB_00303e28;
    }
    else if ((float)param_1[0x68] * (float)param_1[0x68] < fVar2) {
                    /* WARNING: Could not recover jumptable at 0x00303e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x58))(param_1,0);
      return;
    }
  }
  else if (*(char *)((int)param_1 + 0x59) == '\0') {
LAB_00303e28:
                    /* WARNING: Could not recover jumptable at 0x00303e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x58))(param_1,1);
    return;
  }
  return;
}



int * fn_00303d20(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  
  *param_1 = &DAT_0085ab98;
  puVar1 = (undefined4 *)fn_00303cb0(param_1 + 1);
  piVar2 = puVar1 + -1;
  *piVar2 = (int)&DAT_0085ab98;
  *puVar1 = &DAT_0085abac;
  fn_00303cc0(*(int *)(*piVar2 + -0xc) + (int)piVar2,param_2);
  return piVar2;
}


