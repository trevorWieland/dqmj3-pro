#include "005a3edc_005a514c.h"



void fn_005a514c(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0x2d);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008951dc) goto LAB_005a5194;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_005a5194:
  *(undefined1 *)(puVar1 + 6) = 1;
  return;
}



void fn_005a4f3c(undefined4 *param_1)

{
  *param_1 = &DAT_00846af0;
  if ((int *)param_1[0x35] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x35] + 4))();
  }
  fn_002c471c(param_1);
  fn_002feef8();
  return;
}



undefined4 * fn_005a4ed8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002c4694();
  *puVar1 = &DAT_00846af0;
  puVar1[0x2c] = &DAT_00859160;
  puVar1[0x2d] = 0;
  puVar1[0x2e] = 0;
  puVar1[0x2f] = 0;
  puVar1[0x30] = 0;
  puVar1[0x31] = 0;
  puVar1[0x32] = 0;
  puVar1[0x33] = 0;
  puVar1[0x34] = 0;
  puVar1[0x35] = 0;
  *(undefined1 *)(puVar1 + 0x36) = 0;
  return puVar1;
}



void fn_005a4a7c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0xd0) == 0) {
    uVar2 = fn_0022f584((char *)&DAT_005a4af8,0);
    fn_0068974c(param_1,uVar2,0,1);
    uVar2 = fn_0022f584((char *)&DAT_005a4b20,0);
    fn_0036c13c(*(undefined4 *)(param_1 + 0x5c),uVar2);
    return;
  }
  iVar1 = fn_006f6a6c(param_1);
  if (iVar1 == 1) {
    *(code **)(param_1 + 0xc4) = fn_005a4334;
    *(undefined4 *)(param_1 + 200) = 0;
  }
  return;
}



void fn_005a48c4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  undefined4 local_c;
  
  if (*(int *)(param_1 + 0xd0) == 0) {
    fn_002f6100(param_1);
    fn_0015b0dc();
    uVar2 = fn_0022f584((char *)&DAT_005a4990,0);
    fn_0068974c(param_1,uVar2,0,1);
    local_10 = 0;
    local_c = 0;
    fn_002f68fc(&local_10,&local_c);
    fn_0015b0f8(local_10);
    fn_0015b0f8(local_c);
    uVar2 = fn_0022f584((char *)&DAT_005a49a4,0);
    fn_0036c13c(*(undefined4 *)(param_1 + 0x5c),uVar2);
    return;
  }
  iVar1 = fn_006f6a6c();
  if (iVar1 == 1) {
    *(code **)(param_1 + 0xc4) = fn_005a41f4;
    *(undefined4 *)(param_1 + 200) = 0;
  }
  return;
}



void fn_005a4548(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  uint in_fpscr;
  float fVar12;
  float fVar13;
  float fVar14;
  int local_30;
  int local_2c [4];
  
  if (*(int *)(param_1 + 0xd0) != 0) {
    iVar1 = fn_006f6a6c(param_1);
    if (iVar1 == 1) {
      local_30 = 0;
      local_2c[0] = 0;
      puVar9 = *(undefined4 **)(param_1 + 0x18);
      if (puVar9 != (undefined4 *)0x0) {
        puVar2 = (undefined4 *)(**(code **)*puVar9)(puVar9);
        do {
          if (puVar2 == &DAT_00896fe4) goto LAB_005a45c4;
          puVar2 = (undefined4 *)*puVar2;
        } while (puVar2 != (undefined4 *)0x0);
      }
      puVar9 = (undefined4 *)0x0;
LAB_005a45c4:
      fn_005f95c4(puVar9,&local_30);
      fn_006899f4(param_1,0xd5,1);
      fn_00689930(param_1,0,0);
      *(undefined **)(param_1 + 0xc4) = &DAT_005a3c0c;
      *(undefined4 *)(param_1 + 200) = 0;
    }
    return;
  }
  uVar3 = fn_002f6fa8();
  uVar4 = fn_002f8914();
  piVar5 = (int *)fn_0041fe24(uVar3,uVar4);
  piVar6 = (int *)fn_006cd638(uVar3,uVar4);
  if (*piVar6 == 0) goto LAB_005a47f4;
  iVar1 = fn_006cd6d0(uVar3,uVar4);
  iVar7 = *piVar5;
  if (iVar7 == 0) {
    iVar7 = 0x1e;
    uVar10 = (uint)*(ushort *)(iVar1 + 0x7d4);
    uVar11 = 0;
LAB_005a46b0:
    iVar8 = 1;
  }
  else {
    uVar10 = piVar5[5] + piVar5[8] + piVar5[6] + piVar5[7];
    uVar11 = uVar10;
    if (iVar7 != 1) goto LAB_005a46b0;
    iVar8 = 0x1e;
  }
  fVar13 = (float)VectorSignedToFloat(iVar7 - iVar8,(byte)(in_fpscr >> 0x16) & 3);
  fVar12 = (float)VectorSignedToFloat(uVar10 - *(ushort *)(iVar1 + iVar8 * 0x44 + -0x24),
                                      (byte)(in_fpscr >> 0x16) & 3);
  fVar12 = fVar12 / fVar13;
  in_fpscr = in_fpscr & 0xfffffff;
  if (fVar12 == 0.0) {
    fVar12 = -0.01;
  }
  fVar14 = (float)VectorSignedToFloat(uVar10,(byte)(in_fpscr >> 0x16) & 3);
  fVar13 = (float)VectorSignedToFloat(-iVar7,(byte)(in_fpscr >> 0x16) & 3);
  fVar14 = fVar14 + fVar12 * fVar13;
  iVar1 = fn_006cd710(uVar3);
  fVar13 = (float)VectorUnsignedToFloat(*(int *)(iVar1 + 0x50) << 1,(byte)(in_fpscr >> 0x16) & 3);
  fVar13 = fVar13 + fVar14;
  iVar1 = fn_006cd66c(uVar3);
  local_2c[0] = 1;
  fVar14 = (float)VectorSignedToFloat(*(ushort *)(iVar1 + 8) + uVar11,(byte)(in_fpscr >> 0x16) & 3);
  local_30 = (int)((fVar14 - fVar13) / fVar12) + 1;
  piVar5 = local_2c;
  if (0 < local_30) {
    piVar5 = &local_30;
  }
  local_30 = *piVar5;
  if (local_30 != 0) {
    fn_0015b0f8();
    uVar3 = fn_0022f584((char *)&DAT_005a4868,0);
    fn_0068974c(param_1,uVar3,0,1);
    uVar3 = fn_0022f584((char *)&DAT_005a4884,0);
    fn_0036c13c(*(undefined4 *)(param_1 + 0x5c),uVar3);
    fn_002f6100(param_1);
    fn_0015b0dc();
    uVar3 = fn_0022f584((char *)&DAT_005a48a0,0);
    fn_0036c13c(*(undefined4 *)(param_1 + 0x5c),uVar3);
    return;
  }
LAB_005a47f4:
  uVar3 = fn_0022f584((char *)&DAT_005a4884,0);
  fn_0068974c(param_1,uVar3,0,1);
  fn_002f6100(param_1);
  fn_0015b0dc();
  uVar3 = fn_0022f584((char *)&DAT_005a48a0,0);
  fn_0036c13c(*(undefined4 *)(param_1 + 0x5c),uVar3);
  return;
}



void fn_005a44d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0xd0) == 0) {
    uVar2 = fn_0022f584((char *)&DAT_005a4530,0);
    fn_0068974c(param_1,uVar2,0,1);
    return;
  }
  iVar1 = fn_006f6a6c(param_1);
  if (iVar1 == 1) {
    *(code **)(param_1 + 0xc4) = fn_005a41f4;
    *(undefined4 *)(param_1 + 200) = 0;
  }
  return;
}



void fn_005a4334(int *param_1)

{
  int iVar1;
  
  if (param_1[0x34] == 0) {
    fn_002f8464(1);
    return;
  }
  iVar1 = fn_002f8974();
  if (iVar1 != 0) {
    fn_002f83cc(1);
    (**(code **)(*param_1 + 0x10))(param_1);
                    /* WARNING: Subroutine does not return */
    fn_006ba250(param_1);
  }
  return;
}



void fn_005a41f4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *local_10;
  
  local_10 = param_4;
  if (*(int *)(param_1 + 0xd0) == 0) {
    fn_00230ce8(&local_10);
    fn_0015b0dc(local_10);
    if (local_10 != &DAT_008f9cf4) {
      piVar2 = local_10 + -3;
      iVar1 = *piVar2;
      if ((iVar1 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar1 + -1, iVar1 == 0)))) {
        fn_001008c4(local_10 + -3,local_10[-2] + 8,0);
      }
    }
    uVar3 = fn_0022f584((char *)&DAT_005a42fc,0);
    fn_0068974c(param_1,uVar3,1);
    return;
  }
  iVar1 = fn_006f6a6c(param_1);
  if (iVar1 == 2) {
    uVar3 = fn_0022f584((char *)&DAT_005a4318,0);
    fn_0068974c(param_1,uVar3,0,1);
    *(code **)(param_1 + 0xc4) = fn_005a49b8;
    *(undefined4 *)(param_1 + 200) = 0;
    return;
  }
  if (iVar1 == 3) {
    *(code **)(param_1 + 0xc4) = fn_005a40b0;
    *(undefined4 *)(param_1 + 200) = 0;
  }
  return;
}



void fn_005a49b8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + 0xd0) != 0) && (iVar1 = fn_006f6a6c(param_1), iVar1 == 1)) {
    uVar2 = fn_0022f584((char *)&DAT_005a4a10,0);
    fn_0068974c(param_1,uVar2,1);
    *(code **)(param_1 + 0xc4) = fn_005a4a30;
    *(undefined4 *)(param_1 + 200) = 0;
  }
  return;
}



void fn_005a4a30(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xd0) != 0) {
    iVar1 = fn_006f6a6c(param_1);
    if (iVar1 == 2) {
      *(code **)(param_1 + 0xc4) = fn_005a41f4;
      *(undefined4 *)(param_1 + 200) = 0;
    }
    else if (iVar1 == 3) {
      fn_002f6dbc();
      return;
    }
  }
  return;
}



void fn_005a3edc(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
    fn_006ba250(param_1);
  }
  iVar1 = fn_006f6a6c();
  if (iVar1 == 1) {
    fn_00689824(param_1,1);
    *(undefined **)(param_1 + 0xc4) = &DAT_005a3c0c;
    *(undefined4 *)(param_1 + 200) = 0;
  }
  return;
}


