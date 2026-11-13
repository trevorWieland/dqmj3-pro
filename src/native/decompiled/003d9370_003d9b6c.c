#include "003d9370_003d9b6c.h"



undefined4 * fn_003d9b6c(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint in_fpscr;
  undefined4 in_s0;
  float fVar5;
  float fVar6;
  
  puVar1 = (undefined4 *)fn_003919b8(param_1,param_2,2);
  *puVar1 = &DAT_00831ab8;
  puVar1[0xb] = 3;
  puVar1[0xd] = 6;
  puVar1[0xc] = 3;
  *(undefined1 *)(puVar1 + 0xe) = 0;
  fn_006c3a0c(puVar1[5]);
  puVar1[10] = in_s0;
  puVar1[3] = 0;
  iVar2 = puVar1[5];
  fVar5 = 0.9;
  uVar3 = *(undefined4 *)(iVar2 + 0x24);
  uVar4 = *(undefined4 *)(iVar2 + 0x28);
  puVar1[0xf] = *(undefined4 *)(iVar2 + 0x20);
  puVar1[0x10] = uVar3;
  puVar1[0x11] = uVar4;
  (**(code **)(*(int *)puVar1[1] + 0x84))();
  (**(code **)(*(int *)puVar1[5] + 0x94))();
  if (fVar5 == 0.0) {
    puVar1[0xc] = 3;
  }
  else {
    fVar5 = (float)((int *)puVar1[5])[0x3a];
    fVar6 = (float)VectorSignedToFloat(fVar5,(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
    (**(code **)(*(int *)puVar1[5] + 0x94))();
    puVar1[0xc] = (int)(fVar6 / (fVar5 * 30.0 * 2.0));
  }
  return puVar1;
}



void fn_003d9868(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint in_fpscr;
  float in_s0;
  float in_s1;
  float fVar7;
  float fVar8;
  float in_s2;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_310 [720];
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float fStack_30;
  float fStack_2c;
  
  uVar2 = *(int *)(param_1 + 0x24) + 1;
  *(uint *)(param_1 + 0x24) = uVar2;
  if ((uint)(*(int *)(param_1 + 0x2c) * 0x1e) < uVar2) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  fn_006a7fac(*(undefined4 *)(param_1 + 0x14));
  local_40 = in_s0;
  local_3c = in_s1;
  local_38 = in_s2;
  (**(code **)(**(int **)(param_1 + 0x14) + 0x94))();
  iVar3 = fn_006bb544(*(undefined4 *)(param_1 + 0x14),0);
  in_s0 = in_s0 + *(float *)(*(int *)(iVar3 + 0x100) + 0xc);
  fVar15 = local_40 * in_s0;
  fVar14 = local_3c * in_s0;
  fVar13 = local_38 * in_s0;
  (**(code **)(**(int **)(param_1 + 0x14) + 0x94))();
  local_40 = local_40 * in_s0;
  local_3c = local_3c * in_s0;
  local_38 = local_38 * in_s0;
  fn_00101a1c(auStack_310,&DAT_005f4c78,0x48,10);
  iVar3 = *(int *)(param_1 + 0x14);
  local_34 = *(float *)(iVar3 + 0x20) + fVar15;
  fStack_2c = *(float *)(iVar3 + 0x28) + fVar13;
  fStack_30 = *(float *)(iVar3 + 0x24) + fVar14;
  piVar4 = (int *)fn_006f7388(DAT_008977e0);
  iVar3 = (**(code **)(*piVar4 + 0x10))(piVar4,7,auStack_310,10,(float *)(iVar3 + 0x20),&local_34,0)
  ;
  *(bool *)(param_1 + 0x38) = iVar3 != 0;
  if (iVar3 != 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x24) = 0;
    fVar13 = *(float *)(*(int *)(param_1 + 4) + 0x30) + 3.1415927;
    fn_005df8f8();
LAB_003d9adc:
    *(float *)(param_1 + 0x28) = fVar13;
    return;
  }
  iVar3 = *(int *)(param_1 + 0x14);
  iVar6 = *(int *)(iVar3 + 0xe8) * *(int *)(iVar3 + 0xe8);
  fVar15 = *(float *)(param_1 + 0x3c) - (*(float *)(iVar3 + 0x20) + local_40);
  fVar14 = *(float *)(param_1 + 0x40) - (*(float *)(iVar3 + 0x24) + local_3c);
  fVar13 = *(float *)(param_1 + 0x44) - (*(float *)(iVar3 + 0x28) + local_38);
  fVar13 = fVar15 * fVar15 + fVar14 * fVar14 + fVar13 * fVar13;
  fVar14 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x16) & 3);
  uVar2 = in_fpscr & 0xfffffff | (uint)(fVar13 < fVar14) << 0x1f | (uint)(fVar13 == fVar14) << 0x1e;
  bVar1 = (byte)(uVar2 >> 0x18);
  if (!(bool)(bVar1 >> 6 & 1) && (bool)(bVar1 >> 7) == (NAN(fVar13) || NAN(fVar14))) {
    iVar3 = *(int *)(param_1 + 0x14);
    iVar5 = *(int *)(param_1 + 0x14);
    fVar13 = *(float *)(param_1 + 0x3c);
    fVar11 = fVar13 - (*(float *)(iVar3 + 0x20) + local_40);
    fVar14 = *(float *)(param_1 + 0x40) - (*(float *)(iVar3 + 0x24) + local_3c);
    fVar9 = *(float *)(param_1 + 0x44) - (*(float *)(iVar3 + 0x28) + local_38);
    fVar15 = (float)VectorSignedToFloat(iVar6,(byte)(uVar2 >> 0x16) & 3);
    fVar12 = fVar13 - *(float *)(iVar5 + 0x20);
    fVar7 = *(float *)(param_1 + 0x40) - *(float *)(iVar5 + 0x24);
    fVar10 = *(float *)(param_1 + 0x44) - *(float *)(iVar5 + 0x28);
    fVar8 = (float)VectorSignedToFloat(iVar6,(byte)(uVar2 >> 0x16) & 3);
    if ((fVar12 * fVar12 + fVar7 * fVar7 + fVar10 * fVar10) - fVar8 <
        (fVar11 * fVar11 + fVar14 * fVar14 + fVar9 * fVar9) - fVar15) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x24) = 0;
      fVar13 = fVar13 - *(float *)(iVar5 + 0x20);
      fn_00525bd0();
      fVar13 = fVar13 * 0.024543693;
      goto LAB_003d9adc;
    }
  }
  (**(code **)(**(int **)(param_1 + 0x14) + 0x30))(*(int **)(param_1 + 0x14),&local_40,0,0,0);
  return;
}



void fn_003d97d4(int param_1)

{
  int iVar1;
  
  (**(code **)(**(int **)(param_1 + 4) + 0x44))
            (*(int **)(param_1 + 4),(int)*(char *)(param_1 + 0x34),4,0);
  iVar1 = fn_001c7160(*(undefined4 *)(param_1 + 4));
  if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x003d9858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 4) + 0x34))();
    return;
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  iVar1 = fn_00163868(*(undefined4 *)(param_1 + 0x30));
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(int *)(param_1 + 0x2c) = iVar1 + 1;
  return;
}



void fn_003d977c(int param_1)

{
  undefined4 uVar1;
  uint in_fpscr;
  
  (**(code **)(**(int **)(param_1 + 4) + 0x44))(*(int **)(param_1 + 4),0,4);
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0xc) = 2;
  uVar1 = fn_00163868(0x168);
  uVar1 = VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
  fn_0017fe34();
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  return;
}



void fn_003d957c(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (param_1[3] == 4) {
    iVar3 = (**(code **)(*(int *)param_1[5] + 0x48))();
    if ((iVar3 != 0) && (iVar3 = param_1[6], param_1[6] = iVar3 + 1U, 0x81 < iVar3 + 1U)) {
      *(undefined1 *)(param_1[5] + 4) = 1;
      fn_00215d9c(param_1[5],10,1,1);
      fn_0023ddec(*(undefined4 *)(DAT_008977e0 + 0x2c),0x7d0a);
      (**(code **)(*(int *)param_1[5] + 0xe4))((int *)param_1[5],0x10009df,0);
      piVar1 = (int *)fn_006f7508(DAT_008977e0);
      (**(code **)(*piVar1 + 100))(piVar1,*(undefined4 *)(*(int *)(param_1[5] + 0x170) + 0xfc),2,0);
      param_1[3] = 5;
      param_1[4] = 0;
    }
  }
  else if ((param_1[3] == 5) && (iVar3 = param_1[5], *(float *)(iVar3 + 0xf8) == 0.0)) {
    iVar2 = (int)*(short *)(*(int *)(iVar3 + 0x19c) + 10);
    if ((iVar2 != 0) &&
       (piVar1 = (int *)fn_002fdd54(param_1,iVar2,iVar3 + 0x20,0), piVar1 != (int *)0x0)) {
      (**(code **)(*piVar1 + 0xd8))(piVar1);
      fn_00215aec(piVar1,10);
    }
    (**(code **)(*(int *)param_1[5] + 0x1c4))((int *)param_1[5],1);
    (**(code **)(*(int *)param_1[5] + 0x54))((int *)param_1[5],0);
    *(undefined1 *)(param_1[5] + 4) = 0;
                    /* WARNING: Could not recover jumptable at 0x003d9648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10))(param_1);
    return;
  }
  return;
}



undefined4 fn_003d9500(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x10) = 0;
  (**(code **)(**(int **)(param_1 + 0x14) + 0x44))(*(int **)(param_1 + 0x14),0x18,4,0);
  fn_0069eed8(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0xe4),0);
  fn_00216784(*(undefined4 *)(param_1 + 0x14));
  *(uint *)(*(int *)(param_1 + 0x14) + 0x39c) = *(uint *)(*(int *)(param_1 + 0x14) + 0x39c) | 0x800;
  (**(code **)(**(int **)(param_1 + 0x14) + 0x188))(*(int **)(param_1 + 0x14),1);
  return 1;
}



void fn_003d9370(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xc) == 4) {
    fn_003d9224(param_1);
    return;
  }
  if (*(int *)(param_1 + 0xc) == 5) {
    (**(code **)(**(int **)(param_1 + 0x14) + 0x48))();
    piVar1 = (int *)fn_006b0d10(*(undefined4 *)(param_1 + 0x14),0);
    if ((((piVar1 == (int *)0x0) || (iVar2 = (**(code **)(*piVar1 + 0x48))(piVar1), iVar2 != 0)) &&
        ((**(code **)(**(int **)(param_1 + 0x14) + 0x4c))(), piVar1 == (int *)0x0)) ||
       (iVar2 = (**(code **)(**(int **)(param_1 + 0x14) + 0x48))(), iVar2 != 0)) {
      iVar2 = *(int *)(param_1 + 0x58) + 1;
      *(int *)(param_1 + 0x58) = iVar2;
      if (iVar2 != 1) {
        fn_001da084();
        return;
      }
      (**(code **)(**(int **)(param_1 + 0x14) + 0x1dc))(*(int **)(param_1 + 0x14),2,0x26,0);
      fn_00217988(*(undefined4 *)(param_1 + 0x14));
      if (piVar1 != (int *)0x0) {
        fn_00683320(piVar1,0x16,0);
        return;
      }
    }
  }
  return;
}


