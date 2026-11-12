#include "002fd7ec_002fe008.h"



void fn_002fe008(undefined4 param_1,int param_2,int *param_3)

{
  bool bVar1;
  float in_s0;
  float fVar2;
  float in_s2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_30;
  float local_2c;
  float local_28;
  
  fVar4 = 0.0;
  local_28 = fVar4;
  fVar2 = fVar4;
  if (0 < param_2) {
    fn_006bd5fc();
    fVar2 = fVar4;
    fVar5 = in_s2;
    fVar4 = in_s0;
    fn_006bd5fc(param_1,param_2 + -1);
    fVar4 = fVar4 - in_s0;
    local_28 = fVar5 - in_s2;
  }
  fVar5 = 1.0;
  fVar3 = fVar5;
  local_30 = fVar4;
  local_2c = fVar2;
  (**(code **)(*param_3 + 0x88))(param_3);
  fn_006bd5fc(param_1,param_2);
  fVar4 = fVar5 - (float)param_3[9];
  bVar1 = local_30 == fVar2;
  if (bVar1) {
    fVar5 = local_2c;
  }
  if ((!bVar1 || (!bVar1 || fVar5 != fVar2)) || local_28 != fVar2) {
    fVar3 = fVar3 / SQRT(local_30 * local_30 + local_2c * local_2c + local_28 * local_28);
    local_30 = local_30 * fVar3;
    local_2c = local_2c * fVar3;
    local_28 = local_28 * fVar3;
  }
  fVar2 = local_30;
  (**(code **)(*param_3 + 0x94))(param_3);
  local_30 = local_30 * fVar2;
  local_28 = local_28 * fVar2;
  local_2c = fVar4;
  (**(code **)(*param_3 + 0x38))(param_3,&local_30,1);
  return;
}



void fn_002fdf94(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00226f28();
  puVar1[6] = 0;
  *puVar1 = &PTR_FUN_008216e8;
  puVar1[5] = param_2;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0x12] = 0xffffffff;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  return;
}



undefined4 fn_002fdebc(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint in_fpscr;
  float in_s0;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (*(int *)(param_1 + 0x48) != -1) {
    iVar1 = *(int *)(param_1 + 0x48) + 1;
    *(int *)(param_1 + 0x48) = iVar1;
    if (iVar1 <= param_2) {
      return 0;
    }
    piVar2 = *(int **)(param_1 + 0x14);
    fVar5 = *(float *)(param_1 + 0x54);
    fVar8 = *(float *)(param_1 + 0x4c) - (float)piVar2[8];
    fVar6 = *(float *)(param_1 + 0x50) - (float)piVar2[9];
    fVar9 = fVar8 * fVar8 + fVar6 * fVar6 +
            (fVar5 - (float)piVar2[10]) * (fVar5 - (float)piVar2[10]);
    (**(code **)(*piVar2 + 0x94))();
    fVar6 = fVar5;
    (**(code **)(**(int **)(param_1 + 0x14) + 0x94))();
    fVar7 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
    fVar8 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
    if (fVar9 < fVar6 * fVar5 * fVar7 * fVar8 * in_s0) {
      return 1;
    }
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  iVar1 = *(int *)(param_1 + 0x14);
  uVar3 = *(undefined4 *)(iVar1 + 0x24);
  uVar4 = *(undefined4 *)(iVar1 + 0x28);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar1 + 0x20);
  *(undefined4 *)(param_1 + 0x50) = uVar3;
  *(undefined4 *)(param_1 + 0x54) = uVar4;
  return 0;
}



int * fn_002fdd54(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  short sVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int in_s0;
  
  uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x170);
  piVar2 = (int *)fn_002defe0(uVar6,param_2,0);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x16c))(piVar2,1);
    uVar3 = fn_006c39bc(uVar6);
    uVar4 = fn_006c3954(uVar6);
    (**(code **)(*piVar2 + 0x1dc))(piVar2,0,uVar4,uVar3);
    uVar3 = fn_006c3994(uVar6);
    uVar6 = fn_006c392c(uVar6);
    (**(code **)(*piVar2 + 0x1dc))(piVar2,1,uVar6,uVar3);
    if ((char)piVar2[1] == '\0') {
      piVar2[3] = 1;
    }
    fn_0021472c(piVar2);
    (**(code **)(*piVar2 + 0xd0))(piVar2,param_3);
    piVar2[0xc] = in_s0;
    if (param_4 == 0) {
      sVar1 = *(short *)((int)piVar2 + 0x16a);
      iVar5 = fn_006f7508(DAT_008977e0);
      param_4 = fn_0042838c(*(undefined4 *)(iVar5 + 0xc),(int)sVar1);
    }
    *(char *)(piVar2 + 0xdb) = (char)param_4;
    (**(code **)(*piVar2 + 0x140))(piVar2);
    (**(code **)(*piVar2 + 0x54))(piVar2,1);
    fn_002178f8(piVar2);
  }
  return piVar2;
}



undefined4 * fn_002fdbe4(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_008216ac;
  uVar1 = param_1[0xd];
  uVar2 = uVar1;
  if ((uint)param_1[0xe] < uVar1) {
    do {
      uVar2 = uVar2 + 0x24;
    } while (uVar2 != param_1[0xe]);
  }
  fn_001008c4(uVar1,(int)(param_1[0xf] - uVar1) / 0x24,0);
  uVar1 = param_1[10];
  uVar2 = uVar1;
  if ((uint)param_1[0xb] < uVar1) {
    do {
      uVar2 = uVar2 + 0x24;
    } while (uVar2 != param_1[0xb]);
  }
  fn_001008c4(uVar1,(int)(param_1[0xc] - uVar1) / 0x24,0);
  uVar1 = param_1[7];
  uVar2 = uVar1;
  if ((uint)param_1[8] <= uVar1) {
    for (; uVar2 != param_1[8]; uVar2 = uVar2 + 2) {
    }
  }
  fn_001008c4(uVar1,(int)(param_1[9] - uVar1) >> 1,0);
  if ((int *)param_1[6] != (int *)0x0) {
    (**(code **)(*(int *)param_1[6] + 4))();
  }
  if ((int *)param_1[5] != (int *)0x0) {
    (**(code **)(*(int *)param_1[5] + 4))();
  }
  if ((int *)param_1[4] != (int *)0x0) {
    (**(code **)(*(int *)param_1[4] + 4))();
  }
  uVar1 = param_1[1];
  uVar2 = uVar1;
  if ((uint)param_1[2] <= uVar1) {
    for (; uVar2 != param_1[2]; uVar2 = uVar2 + 0x24) {
    }
  }
  fn_001008c4(uVar1,(int)(param_1[3] - uVar1) / 0x24,0);
  return param_1;
}



undefined4 fn_002fdaa0(int param_1)

{
  int iVar1;
  
  iVar1 = fn_006f7358(DAT_008977e0);
  if ((iVar1 == 0) && (iVar1 = fn_006f7a20(DAT_008977e0), iVar1 == 0)) {
    if (**(int **)(DAT_008977e0 + 0x40) == 0) {
      fn_002fca3c(param_1);
    }
    else {
      iVar1 = fn_006f6fc4();
      if (((iVar1 != 0) &&
          ((**(code **)(**(int **)(param_1 + 0x18) + 8))(*(int **)(param_1 + 0x18),param_1 + 4),
          *(char *)(*(int *)(*(int *)(DAT_008977e0 + 0x40) + 4) + 0x20) != '\x01')) &&
         (iVar1 = fn_006c89fc(), iVar1 == 3)) {
        fn_002fcf5c(param_1);
      }
    }
  }
  return 1;
}



void fn_002fd9c8(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 4);
  iVar1 = *(int *)(param_1 + 8);
  if (iVar4 != iVar1) {
    uVar2 = fn_007b867c(iVar1,iVar1,iVar4);
    uVar3 = *(uint *)(param_1 + 8);
    if (uVar3 < uVar2) {
      do {
        uVar2 = uVar2 + 0x24;
      } while (uVar2 != uVar3);
    }
    *(uint *)(param_1 + 8) = uVar3 + ((iVar1 - iVar4) / 0x24) * -0x24;
  }
  iVar1 = *(int *)(param_1 + 0x2c);
  iVar4 = *(int *)(param_1 + 0x28);
  if (iVar4 != iVar1) {
    uVar2 = fn_007b8758(iVar1,iVar1,iVar4);
    uVar3 = *(uint *)(param_1 + 0x2c);
    if (uVar3 < uVar2) {
      do {
        uVar2 = uVar2 + 0x24;
      } while (uVar2 != uVar3);
    }
    *(uint *)(param_1 + 0x2c) = uVar3 + ((iVar1 - iVar4) / 0x24) * -0x24;
  }
  return;
}



undefined4 fn_002fd7ec(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  
  iVar2 = fn_006f7358(DAT_008977e0);
  if ((((iVar2 != 0) || (iVar2 = fn_006f7a20(DAT_008977e0), iVar2 != 0)) ||
      (iVar2 = fn_00692f44(), iVar2 != 0)) ||
     (((iVar2 = fn_002d8370(0xffffffff), iVar2 != 0 && (iVar2 = fn_002dbc28(), iVar2 == 0)) &&
      (iVar2 = fn_002dbe28(), iVar2 == 0)))) {
    return 1;
  }
  iVar7 = (int)*(short *)(DAT_008977e0 + 0xa8);
  iVar2 = fn_002d8370(0xffffffff);
  if (iVar2 == 0) {
    pcVar5 = (char *)fn_006afe90(*(undefined4 *)(DAT_008977e0 + 0x1c),iVar7);
    if (*pcVar5 == 'O') {
      fn_002fc8f0(param_1);
    }
  }
  else {
    fn_002fd648(param_1,iVar7);
    (**(code **)(**(int **)(param_1 + 0x14) + 0x18))();
    (**(code **)(**(int **)(param_1 + 0x14) + 8))(*(int **)(param_1 + 0x14),param_1 + 4);
    (**(code **)(**(int **)(param_1 + 0x14) + 0x1c))();
  }
  iVar6 = 0;
  iVar2 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x24;
  if (0 < iVar2) {
    do {
      pcVar5 = (char *)(*(int *)(param_1 + 4) + iVar6 * 0x24);
      if (*(short *)(pcVar5 + 6) == iVar7) {
        iVar3 = fn_006b520c(*(undefined4 *)(DAT_00897804 + 0x1c),*(undefined4 *)(pcVar5 + 0x20));
        if (iVar3 == 0) {
          if (*(short *)(pcVar5 + 2) == 0x3e9) {
            uVar4 = fn_006f7508(DAT_008977e0);
            fn_00365758(uVar4,(int)*pcVar5,*(undefined4 *)(pcVar5 + 0x20),pcVar5 + 8,pcVar5 + 0x14)
            ;
          }
        }
        else if ((*(short *)(pcVar5 + 2) != 0x3e9) &&
                ((cVar1 = *pcVar5, cVar1 == '\x06' || cVar1 == '\a' ||
                 ((cVar1 == '\b' || cVar1 == '\t') || cVar1 == '\f')))) {
          pcVar5[2] = '\0';
          pcVar5[3] = '\0';
          pcVar5[4] = '\0';
          pcVar5[5] = '\0';
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar2);
  }
  fn_0023fa74();
  return 1;
}


