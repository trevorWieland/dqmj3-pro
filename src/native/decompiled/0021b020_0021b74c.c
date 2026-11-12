#include "0021b020_0021b74c.h"



void fn_0021b714(int param_1,undefined4 param_2,byte param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x14));
  iVar2 = fn_001828f0(uVar1,param_2);
  *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe | param_3;
  return;
}



void fn_0021b6b4(int param_1,int param_2,byte param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 0x20c);
  piVar1 = (int *)*piVar3;
  if (piVar1 != piVar3) {
    while (piVar1[2] != param_2) {
      piVar1 = (int *)*piVar1;
      if (piVar1 == piVar3) {
        return;
      }
    }
    *(byte *)(piVar1[5] + 0x44) = *(byte *)(piVar1[5] + 0x44) & 0xfe | param_3;
    iVar2 = piVar1[6];
    if (iVar2 != 0) {
      *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe | param_3;
    }
  }
  return;
}



undefined4 fn_0021b1d4(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  uint in_fpscr;
  float in_s0;
  float fVar8;
  undefined4 local_30 [5];
  
  if (*(int *)(param_1 + 0x68) == 0) {
    return 0;
  }
  uVar2 = fn_006f7a48(DAT_008977e0);
  iVar3 = fn_006a7df8();
  fVar8 = 0.0;
  if ((iVar3 != 0) && (iVar3 = fn_006a7db0(uVar2), iVar3 == 0)) {
    *(undefined4 *)(param_1 + 0x138) = 0;
    if (*(char *)(param_1 + 0x68d) != '\0') {
      local_30[0] = 0;
      fn_00163988(DAT_00897810,local_30,1);
      fn_00699014(DAT_008977e0,0);
      *(undefined1 *)(param_1 + 0x68d) = 0;
    }
    if (*(int *)(param_1 + 0x1b4) != *(int *)(param_1 + 0x1b8)) {
      *(undefined1 *)(*(int *)(param_1 + 0x60) + 0x45) = 0xff;
      *(byte *)(*(int *)(param_1 + 0x110) + 0x44) =
           *(byte *)(*(int *)(param_1 + 0x110) + 0x44) & 0xfe;
      *(byte *)(*(int *)(param_1 + 0x114) + 0x44) =
           *(byte *)(*(int *)(param_1 + 0x114) + 0x44) & 0xfe;
    }
    fn_0021b74c(param_1,*(int *)(param_1 + 0x68) + 0x1c,param_1 + 0x13c,0);
    *(undefined4 *)(param_1 + 0x138) = 1;
    return 0;
  }
  if ((((*(byte *)(*(int *)(param_1 + 0x110) + 0x44) & 1) == 0) ||
      (*(char *)(param_1 + 0x1b0) != '\0')) || (*(char *)(param_1 + 0x1a0) != '\0')) {
LAB_0021b338:
    if ((*(byte *)(*(int *)(param_1 + 0x110) + 0x44) & 1) == 0) {
LAB_0021b398:
      fn_006a7e74(uVar2);
      if (in_s0 == 1.0) goto LAB_0021b404;
      fn_006a7e74(uVar2);
      if (in_s0 == -1.0) goto LAB_0021b3c4;
    }
    else {
      cVar1 = *(char *)(param_1 + 0x1b0);
      bVar7 = cVar1 != '\0';
      if (!bVar7) {
        cVar1 = *(char *)(param_1 + 0x1a0);
      }
      if (bVar7 || cVar1 != '\0') goto LAB_0021b398;
      iVar3 = fn_00178f9c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x10));
      uVar4 = (**(code **)(**(int **)(iVar3 + 0x10) + 0x2c))
                        (*(int **)(iVar3 + 0x10),(char *)&DAT_006b153c,1);
      iVar3 = fn_006b1cac(param_1,uVar4);
      if (iVar3 == 0) goto LAB_0021b398;
LAB_0021b3c4:
      fn_0021c868(param_1,0);
      *(undefined1 *)(param_1 + 0x1b0) = 1;
    }
  }
  else {
    iVar3 = fn_00178f9c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x10));
    uVar4 = (**(code **)(**(int **)(iVar3 + 0x10) + 0x2c))
                      (*(int **)(iVar3 + 0x10),(char *)&DAT_006b14bc,1);
    iVar3 = fn_006b1cac(param_1,uVar4);
    if (iVar3 == 0) goto LAB_0021b338;
LAB_0021b404:
    fn_0021c868(param_1,1);
    *(undefined1 *)(param_1 + 0x1b0) = 1;
  }
  if (*(char *)(param_1 + 0x1b0) == '\0') goto LAB_0021b464;
  iVar3 = fn_006a7f2c(uVar2);
  iVar5 = fn_006a7f2c(uVar2);
  if ((iVar5 == 0) && (iVar5 = fn_006a7db0(uVar2), iVar5 == 0)) {
    fn_006a7e74(uVar2);
    in_fpscr = in_fpscr & 0xfffffff;
    if (in_s0 != fVar8) goto LAB_0021b448;
    bVar7 = true;
  }
  else {
LAB_0021b448:
    bVar7 = false;
  }
  if (bVar7 || iVar3 != 0) {
    *(undefined1 *)(param_1 + 0x1b0) = 0;
  }
  else if (*(char *)(param_1 + 0x1b0) != '\0') {
    return 1;
  }
LAB_0021b464:
  iVar3 = fn_006a7f0c(uVar2);
  if (iVar3 != 0) {
    iVar3 = *(int *)(param_1 + 0x60);
    uVar4 = *(undefined4 *)(iVar3 + 0x20);
    uVar6 = *(undefined4 *)(iVar3 + 0x24);
    *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(iVar3 + 0x1c);
    *(undefined4 *)(param_1 + 0x14c) = uVar4;
    *(undefined4 *)(param_1 + 0x150) = uVar6;
    iVar3 = *(int *)(param_1 + 0x68);
    uVar4 = *(undefined4 *)(iVar3 + 0x20);
    uVar6 = *(undefined4 *)(iVar3 + 0x24);
    *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(iVar3 + 0x1c);
    *(undefined4 *)(param_1 + 0x158) = uVar4;
    *(undefined4 *)(param_1 + 0x15c) = uVar6;
    uVar4 = fn_006a7e28(uVar2);
    uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
    *(undefined4 *)(param_1 + 0x178) = uVar4;
    uVar2 = fn_006a7e3c(uVar2);
    uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
    *(undefined4 *)(param_1 + 0x17c) = uVar2;
    *(float *)(param_1 + 0x180) = fVar8;
    *(float *)(param_1 + 0x184) = fVar8;
    *(undefined1 *)(param_1 + 0x1a0) = 1;
    return 1;
  }
  iVar3 = fn_006a7db0(uVar2);
  if (iVar3 == 0) {
    if ((*(char *)(param_1 + 0x1a0) != '\0') && (iVar3 = fn_006a7f2c(uVar2), iVar3 != 0)) {
      iVar3 = *(int *)(param_1 + 0x60);
      uVar2 = *(undefined4 *)(iVar3 + 0x20);
      uVar4 = *(undefined4 *)(iVar3 + 0x24);
      *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(iVar3 + 0x1c);
      *(undefined4 *)(param_1 + 0x14c) = uVar2;
      *(undefined4 *)(param_1 + 0x150) = uVar4;
      iVar3 = *(int *)(param_1 + 0x68);
      uVar2 = *(undefined4 *)(iVar3 + 0x20);
      uVar4 = *(undefined4 *)(iVar3 + 0x24);
      *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(iVar3 + 0x1c);
      *(undefined4 *)(param_1 + 0x158) = uVar2;
      *(undefined4 *)(param_1 + 0x15c) = uVar4;
      *(undefined1 *)(param_1 + 0x1a0) = 0;
      return 1;
    }
    iVar3 = fn_006a7ee8(uVar2);
    if (iVar3 == 0) {
      iVar3 = fn_006a7f44(uVar2);
      if (iVar3 == 0) {
        return 1;
      }
      fn_006a7de0(uVar2);
      fn_006a7e80(uVar2);
      fn_00219040(param_1,local_30);
      fn_0021b020(param_1);
      return 1;
    }
    fn_006a7cb0();
    fn_006a7cbc(uVar2);
    fn_00219040(param_1,local_30);
  }
  else {
    uVar4 = fn_006a7e28(uVar2);
    VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
    uVar2 = fn_006a7e3c(uVar2);
    VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
  }
  fn_0021b020(param_1);
  return 1;
}



void fn_0021b74c(int param_1,float *param_2,float *param_3,int param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float in_s0;
  undefined4 uVar4;
  undefined4 uVar5;
  
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  *(float *)(param_1 + 0x66c) = *param_2;
  *(float *)(param_1 + 0x670) = fVar2;
  *(float *)(param_1 + 0x674) = fVar3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  *(float *)(param_1 + 0x678) = *param_3;
  *(float *)(param_1 + 0x67c) = fVar2;
  *(float *)(param_1 + 0x680) = fVar3;
  iVar1 = *(int *)(param_1 + 0x60);
  uVar4 = *(undefined4 *)(iVar1 + 0x20);
  uVar5 = *(undefined4 *)(iVar1 + 0x24);
  *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(iVar1 + 0x1c);
  *(undefined4 *)(param_1 + 0x164) = uVar4;
  *(undefined4 *)(param_1 + 0x168) = uVar5;
  iVar1 = *(int *)(param_1 + 0x68);
  uVar4 = *(undefined4 *)(iVar1 + 0x20);
  uVar5 = *(undefined4 *)(iVar1 + 0x24);
  *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(iVar1 + 0x1c);
  *(undefined4 *)(param_1 + 0x170) = uVar4;
  *(undefined4 *)(param_1 + 0x174) = uVar5;
  *(undefined4 *)(param_1 + 0x688) = 0;
  if (in_s0 == 0.0) {
    fVar3 = param_2[1] - param_3[1];
    fVar2 = fVar3 * fVar3;
    if (param_4 != 0) {
      fVar3 = 0.022222223;
    }
    fVar2 = SQRT((*param_2 - *param_3) * (*param_2 - *param_3) + fVar2 +
                 (param_2[2] - param_3[2]) * (param_2[2] - param_3[2]));
    if (param_4 != 0) {
      in_s0 = fVar2 * fVar3;
    }
    else {
      in_s0 = fVar2 * 0.1;
      if (18.0 <= in_s0) {
        in_s0 = 18.0;
      }
      else if (in_s0 <= 10.0) {
        in_s0 = 10.0;
      }
    }
  }
  *(float *)(param_1 + 0x684) = in_s0;
  return;
}



void fn_0021b1b8(int param_1,byte param_2)

{
  *(byte *)(param_1 + 0x134) = param_2;
  *(byte *)(*(int *)(param_1 + 0x70) + 0x44) =
       param_2 | *(byte *)(*(int *)(param_1 + 0x70) + 0x44) & 0xfe;
  return;
}



void fn_0021b104(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  float fVar6;
  
  puVar3 = (undefined4 *)(param_1 + 0x1c);
  fVar6 = 0.0;
  fVar5 = fVar6;
  if (*(int *)(param_1 + 0x1c) != -1) {
    iVar1 = fn_001854ac(*(undefined4 *)(param_1 + 4));
    fVar6 = *(float *)(iVar1 + 0x10);
    uVar2 = fn_00176970();
    fVar4 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
    fVar6 = fVar6 / fVar4;
    fn_00159f34(*(undefined4 *)(param_1 + 4),*puVar3);
    *puVar3 = 0xffffffff;
  }
  fn_0021b654(param_1,1,param_2,0);
  iVar1 = fn_001854ac(*(undefined4 *)(param_1 + 4),*puVar3);
  in_fpscr = in_fpscr & 0xfffffff;
  if (fVar6 != fVar5) {
    uVar2 = fn_00176970();
    fVar5 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
    *(float *)(iVar1 + 0x10) = fVar5 * (1.0 - fVar6);
  }
  return;
}



void fn_0021b654(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  if (0xf < param_2) {
    uVar2 = *(undefined4 *)(param_1 + 0x14);
  }
  uVar2 = fn_001853ec(*(undefined4 *)(param_1 + 4),param_3,uVar2);
  *(undefined4 *)(param_1 + param_2 * 4 + 0x18) = uVar2;
  piVar1 = (int *)fn_001854ac(*(undefined4 *)(param_1 + 4),uVar2);
                    /* WARNING: Could not recover jumptable at 0x0021b6ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x50))(piVar1,param_4);
  return;
}



void fn_0021b020(int param_1)

{
  float fVar1;
  float in_s0;
  float in_s1;
  float in_s2;
  float fVar2;
  float local_20;
  float local_1c;
  float fStack_18;
  float local_14;
  float local_10;
  float local_c;
  
  local_14 = *(float *)(param_1 + 0x148) + in_s0;
  local_10 = *(float *)(param_1 + 0x14c) + in_s1;
  local_c = *(float *)(param_1 + 0x150) + in_s2;
  local_20 = *(float *)(param_1 + 0x154) + in_s0;
  fStack_18 = *(float *)(param_1 + 0x15c) + in_s2;
  local_1c = *(float *)(param_1 + 0x158) + in_s1;
  fVar2 = *(float *)(param_1 + 0x198);
  if (local_20 < fVar2) {
LAB_0021b08c:
    local_14 = (fVar2 - local_20) + local_14;
    local_20 = fVar2;
  }
  else {
    fVar2 = *(float *)(param_1 + 0x19c);
    if (fVar2 < local_20) goto LAB_0021b08c;
  }
  fVar2 = *(float *)(param_1 + 0x194);
  if (fVar2 <= local_1c) {
    fVar2 = *(float *)(param_1 + 400);
    if (local_1c <= fVar2) goto LAB_0021b0e4;
    fVar1 = *(float *)(param_1 + 400);
  }
  else {
    fVar1 = *(float *)(param_1 + 0x194);
  }
  local_10 = (fVar2 - local_1c) + local_10;
  local_1c = fVar1;
LAB_0021b0e4:
  fn_0054ca94(*(undefined4 *)(param_1 + 0x60),&local_14);
  fn_0054ca94(*(undefined4 *)(param_1 + 0x68),&local_20);
  return;
}


