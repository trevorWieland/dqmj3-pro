#include "00218e98_0021956c.h"

static void svc_0x23(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x23 }
#endif
}


void fn_0021956c(int param_1)

{
  undefined4 local_10;
  
  if (*(char *)(param_1 + 0x68d) != '\0') {
    local_10 = 0;
    fn_00163988(DAT_00897810,&local_10,1);
    fn_00699014(DAT_008977e0,0);
    *(undefined1 *)(param_1 + 0x68d) = 0;
  }
  return;
}



void fn_002194f4(int param_1,float *param_2)

{
  float in_s0;
  float in_s1;
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (*(int *)(param_1 + 0x234) != 0) {
    fn_0021d738(param_1);
    fVar1 = *(float *)(*(int *)(param_1 + 0x6c) + 0x20);
    fVar3 = *(float *)(*(int *)(param_1 + 0x234) + 0x3c);
    fVar2 = *(float *)(*(int *)(param_1 + 0x234) + 0x40);
    *param_2 = ((in_s0 - *(float *)(*(int *)(param_1 + 0x6c) + 0x1c)) + fVar3 * 0.5) *
               (32.0 / fVar3);
    param_2[1] = -((in_s1 - fVar1) - fVar2 * 0.5) * (32.0 / fVar2);
  }
  return;
}



void fn_00219474(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  if (*(int *)(param_1 + 0x138) != 4 && *(int *)(param_1 + 0x138) != 1) {
    iVar1 = *(int *)(param_1 + 0x68);
    uVar2 = *(undefined4 *)(iVar1 + 0x20);
    uVar3 = *(undefined4 *)(iVar1 + 0x24);
    *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(iVar1 + 0x1c);
    *(undefined4 *)(param_1 + 0x140) = uVar2;
    *(undefined4 *)(param_1 + 0x144) = uVar3;
  }
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  fn_0021b74c(param_1,param_2,&local_18);
  *(undefined4 *)(param_1 + 0x138) = 4;
  if (param_3 != 0) {
    fn_0021c13c(param_1,1);
    *(undefined4 *)(param_1 + 0x138) = 3;
  }
  return;
}



void fn_00219448(int param_1)

{
  fn_0021b74c(param_1,*(int *)(param_1 + 0x68) + 0x1c,param_1 + 0x13c,0);
  *(undefined4 *)(param_1 + 0x138) = 1;
  return;
}



void fn_00219400(int param_1,undefined4 param_2)

{
  *(char *)(param_1 + 0x68e) = (char)param_2;
  if (*(int *)(param_1 + 0x10) != -1) {
    fn_00178eec(*(undefined4 *)(param_1 + 4),*(int *)(param_1 + 0x10),param_2);
  }
  if (*(int *)(param_1 + 0x14) == -1) {
    return;
  }
  fn_00178eec(*(undefined4 *)(param_1 + 4),*(int *)(param_1 + 0x14),param_2);
  return;
}



undefined4 fn_00219324(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = fn_006f7a20(DAT_008977e0);
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x68e) = 1;
    if (*(int *)(param_1 + 0x10) != -1) {
      fn_00178eec(*(undefined4 *)(param_1 + 4),*(int *)(param_1 + 0x10),1);
    }
    if (*(int *)(param_1 + 0x14) != -1) {
      fn_00178eec(*(undefined4 *)(param_1 + 4),*(int *)(param_1 + 0x14),1);
    }
    iVar1 = fn_006f7a84(DAT_008977e0);
    uVar2 = *(undefined4 *)(iVar1 + 0x24);
    uVar3 = *(undefined4 *)(iVar1 + 0x28);
    *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(iVar1 + 0x20);
    *(undefined4 *)(param_1 + 0x1c4) = uVar2;
    *(undefined4 *)(param_1 + 0x1c8) = uVar3;
    fn_0021d51c(param_1);
  }
  return 1;
}



void fn_00219278(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = fn_006f7a20(DAT_008977e0);
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x68e) = 0;
    if (*(int *)(param_1 + 0x10) != -1) {
      fn_00178eec(*(undefined4 *)(param_1 + 4),*(int *)(param_1 + 0x10),0);
    }
    if (*(int *)(param_1 + 0x14) != -1) {
      fn_00178eec(*(undefined4 *)(param_1 + 4),*(int *)(param_1 + 0x14),0);
    }
    iVar1 = 0;
    do {
      iVar3 = param_1 + iVar1 * 4;
      piVar2 = *(int **)(iVar3 + 0x128);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x14))();
        piVar4 = (int *)(iVar3 + 0x128);
        piVar2 = (int *)*piVar4;
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 8))();
          *piVar4 = 0;
        }
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 3);
  }
  return;
}



void fn_002190bc(int param_1)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  
  if (*(int *)(param_1 + 0x6b8) != -1) {
    fn_00159f34(*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 0x6b4) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x6b8) = 0xffffffff;
  }
  piVar8 = *(int **)(param_1 + 0x20c);
  for (piVar6 = (int *)*piVar8; piVar6 != piVar8; piVar6 = (int *)*piVar6) {
    cVar1 = *(char *)(piVar6 + 3);
    if (((cVar1 == '\x02' || cVar1 == '\v') || (cVar1 == '\f' || cVar1 == '\r')) &&
       (piVar6[4] != -1)) {
      fn_00159f34(*(undefined4 *)(param_1 + 4));
      piVar6[4] = 0xffffffff;
    }
    fn_00151954(*(undefined4 *)(piVar6[5] + 0xc));
    if ((int *)piVar6[5] != (int *)0x0) {
      (**(code **)(*(int *)piVar6[5] + 4))();
    }
    piVar6[5] = 0;
    if (piVar6[6] != 0) {
      fn_00151954(*(undefined4 *)(piVar6[6] + 0xc));
      if ((int *)piVar6[6] != (int *)0x0) {
        (**(code **)(*(int *)piVar6[6] + 4))();
      }
      piVar6[6] = 0;
    }
  }
  piVar8 = *(int **)(param_1 + 0x20c);
  piVar6 = (int *)*piVar8;
  while (piVar6 != piVar8) {
    piVar3 = *(int **)(param_1 + 0x20c);
    if (piVar6 != *(int **)(param_1 + 0x20c)) {
      piVar3 = (int *)*piVar6;
      *(int *)piVar6[1] = *piVar6;
      *(int *)(*piVar6 + 4) = piVar6[1];
      *(int *)(param_1 + 0x210) = *(int *)(param_1 + 0x210) + -1;
      *piVar6 = *(int *)(param_1 + 0x200);
      *(int **)(param_1 + 0x200) = piVar6;
    }
    piVar6 = piVar3;
  }
  puVar9 = *(undefined4 **)(param_1 + 0x6a8);
  for (puVar7 = *(undefined4 **)(param_1 + 0x6a4); puVar7 != puVar9; puVar7 = puVar7 + 1) {
    piVar6 = (int *)*puVar7;
    fn_00151954(piVar6[3],piVar6);
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 4))(piVar6);
    }
  }
  uVar4 = *(uint *)(param_1 + 0x6a4);
  uVar5 = *(uint *)(param_1 + 0x6a8);
  if (uVar4 != uVar5) {
    uVar2 = uVar4;
    if (uVar5 <= uVar4) {
      do {
        uVar2 = uVar2 + 4;
      } while (uVar2 != uVar5);
    }
    *(uint *)(param_1 + 0x6a8) = uVar5 - (uVar5 - uVar4 & 0xfffffffc);
  }
  return;
}



void fn_00219040(int param_1,float *param_2)

{
  float in_s0;
  float fVar1;
  float in_s1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = *(float *)(param_1 + 0x180) - in_s0;
  fVar1 = *(float *)(param_1 + 0x184) - in_s1;
  fVar2 = *(float *)(param_1 + 0x154) + fVar3;
  fVar4 = *(float *)(param_1 + 0x158) + fVar1;
  if ((*(float *)(param_1 + 0x198) <= fVar2) && (fVar2 <= *(float *)(param_1 + 0x19c))) {
    *(float *)(param_1 + 0x180) = fVar3;
  }
  if ((*(float *)(param_1 + 0x194) <= fVar4) && (fVar4 <= *(float *)(param_1 + 400))) {
    *(float *)(param_1 + 0x184) = fVar1;
  }
  *param_2 = fVar3;
  param_2[1] = fVar1;
  param_2[2] = 0.0;
  return;
}



void fn_00218e98(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  
  *param_1 = &PTR_FUN_0081c6a4;
  fn_002feef8(param_1[0xe9]);
  piVar6 = (int *)param_1[0xe8];
  if (piVar6 != (int *)0x0) {
    fn_0015e304(piVar6);
    if (*piVar6 != 0) {
      svc_0x23();
      *piVar6 = 0;
    }
    fn_002feef8(piVar6);
  }
  piVar6 = (int *)param_1[0xe3];
  piVar7 = param_1 + 0xdf;
  if (piVar6 != (int *)0x0) {
    piVar3 = (int *)*piVar6;
    while (piVar1 = piVar3, piVar1 != piVar6) {
      piVar3 = (int *)param_1[0xe3];
      if (piVar1 != (int *)param_1[0xe3]) {
        piVar3 = (int *)*piVar1;
        *(int *)piVar1[1] = *piVar1;
        *(int *)(*piVar1 + 4) = piVar1[1];
        param_1[0xe4] = param_1[0xe4] + -1;
        *piVar1 = param_1[0xe0];
        param_1[0xe0] = piVar1;
      }
    }
    puVar2 = (undefined4 *)param_1[0xe3];
    *puVar2 = param_1[0xe0];
    param_1[0xe0] = puVar2;
    piVar6 = (int *)*piVar7;
    while (piVar6 != (int *)0x0) {
      *piVar7 = *piVar6;
      fn_001008c4(piVar6[2],piVar6[1],0);
      fn_001008c4(piVar6,1,0);
      piVar6 = (int *)*piVar7;
    }
    param_1[0xe0] = 0;
    param_1[0xe1] = 0;
    param_1[0xe2] = 0;
  }
  uVar5 = param_1[0xdc];
  uVar4 = uVar5;
  if ((uint)param_1[0xdd] <= uVar5) {
    for (; uVar4 != param_1[0xdd]; uVar4 = uVar4 + 4) {
    }
  }
  fn_001008c4(uVar5,(int)(param_1[0xde] - uVar5) >> 2,0);
  uVar5 = param_1[0xba];
  uVar4 = uVar5;
  if ((uint)param_1[0xbb] < uVar5) {
    do {
      uVar4 = uVar4 + 0x10;
    } while (uVar4 != param_1[0xbb]);
  }
  fn_001008c4(uVar5,(int)(param_1[0xbc] - uVar5) >> 4,0);
  if ((int *)param_1[0x66] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x66] + 4))();
  }
  fn_001dc08c(param_1);
  return;
}


