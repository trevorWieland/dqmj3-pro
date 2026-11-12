#include "00335988_003361ec.h"



void fn_003361ec(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint in_fpscr;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined1 auStack_18 [12];
  
  if (*(char *)(param_1 + 0x80) != '\x02') {
    return;
  }
  fn_006f6a9c(param_1);
  in_fpscr = in_fpscr & 0xfffffff;
  fn_006f6ab4(param_1);
  iVar1 = fn_006f6a2c(param_1);
  if (iVar1 == 0) {
    uVar5 = fn_006f6a44(param_1);
    if ((int)uVar5 == 0) {
      uVar6 = fn_006f6aa8(param_1);
      iVar1 = (int)((ulonglong)uVar6 >> 0x20);
      if ((int)uVar6 != 0) {
        iVar2 = fn_006f6acc(param_1);
        iVar1 = *(int *)(param_1 + 0x88);
        *(int *)(param_1 + 0x88) = iVar2;
        VectorSignedToFloat(iVar2 - iVar1,(byte)(in_fpscr >> 0x16) & 3);
      }
      goto LAB_003362e0;
    }
    uVar5 = uVar5 & 0xffffffff00000000;
  }
  else {
    uVar5 = fn_006f6acc();
  }
  iVar1 = (int)(uVar5 >> 0x20);
  *(int *)(param_1 + 0x88) = (int)uVar5;
LAB_003362e0:
  fn_00376140(*(undefined4 *)(param_1 + 100),iVar1);
  uVar3 = fn_006f6ab4(param_1);
  if ((uVar3 & 0x400000) != 0) {
    uVar4 = fn_001603f8(auStack_18,0xff);
    fn_00163988(DAT_00897808,uVar4,0x14);
    uVar4 = fn_001603f8(auStack_18,0xff);
    fn_00163988(DAT_0089780c,uVar4,0x14);
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  return;
}



void fn_00335ffc(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0xdb);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00890f3c) goto LAB_0033604c;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_0033604c:
  *(undefined4 **)(param_1 + 100) = puVar1;
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



void fn_00335f9c(int param_1)

{
  if (*(int *)(param_1 + 0x74) != -1) {
    fn_00159f34(*(undefined4 *)(param_1 + 0x68));
    *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  }
  fn_0016a43c(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70));
                    /* WARNING: Subroutine does not return */
  fn_001482f4(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c));
}



undefined4 * fn_00335ea4(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  *param_1 = 0;
  piVar1 = (int *)fn_00145b00(4,&DAT_00812c8c);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    iVar2 = fn_00145b00(0x1f350,&DAT_00812c8c);
    if (iVar2 != 0) {
      fn_00301f50(iVar2,0x1f350);
    }
    *piVar1 = iVar2;
  }
  piVar3 = (int *)*param_1;
  if (piVar3 != piVar1) {
    if (piVar3 != (int *)0x0) {
      fn_002feef8(*piVar3);
      *piVar3 = 0;
      fn_002feef8(piVar3);
    }
    *param_1 = piVar1;
  }
  uVar4 = fn_00145b00(0x1f260,&DAT_00812c8c);
  param_1[1] = uVar4;
  return param_1;
}



undefined4 fn_00335da4(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  
  uVar5 = 0;
  uVar6 = fn_005e0a1c(0xcf5);
  uVar4 = (uint)(uVar6 >> 0x20);
  uVar2 = (uint)uVar6;
  if ((uVar6 & 0x80000000) != 0) {
    uVar1 = (uVar2 & 0x3fc00) >> 10;
    if (((((uVar1 != 0x11) || (uVar4 = uVar2 & 0x3ff, uVar4 < 100)) || (0xb3 < uVar4)) &&
        (((((uVar2 & 0x3fc00) != 0x4400 || (uVar4 = uVar2 & 0x3ff, uVar4 < 0x154)) ||
          (0x167 < uVar4)) &&
         (((uVar1 != 0x11 || (uVar4 = uVar2 & 0x3ff, uVar4 < 0x168)) || (0x185 < uVar4)))))) &&
       ((((uVar2 & 0x3fc00) != 0x4400 || (uVar4 = uVar2 & 0x3ff, uVar4 < 0x186)) || (399 < uVar4))))
    {
      uVar4 = (uVar2 & 0x3fc00) >> 10;
    }
    uVar5 = 4;
  }
  uVar3 = fn_00118290(uVar2,uVar4);
  DAT_00897874 = fn_0012d6b0(DAT_00897870,uVar3,4,1);
  return uVar5;
}



undefined4 fn_00335d08(void)

{
  undefined4 uVar1;
  
  fn_005e0a1c(0xcf5);
  uVar1 = fn_00147fd4(DAT_00897870,1);
  fn_005e0784();
  return uVar1;
}



undefined4 fn_00335cb4(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  
  piVar1 = *(int **)*param_1;
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    bVar3 = iVar2 == 0x6b737473;
    if (bVar3) {
      iVar2 = piVar1[1];
    }
    if (bVar3 && iVar2 == 0) {
      fn_0017821c(param_1[1],piVar1 + 0x34,0x1f260);
      return 0;
    }
  }
  return 2;
}



undefined4 fn_00335a7c(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  byte bVar6;
  char cVar7;
  byte bVar8;
  int *piVar9;
  int iVar10;
  
  if (DAT_00897874 == 0) {
    uVar2 = 2;
  }
  else {
    iVar3 = fn_00145aac(DAT_00897874);
    if (iVar3 == 2) {
      fn_0012d73c(DAT_00897874);
      DAT_00897874 = 0;
      fn_005e0784();
      return 2;
    }
    iVar3 = fn_00145aac();
    if (iVar3 == 1) {
      piVar9 = (int *)*param_1;
      iVar3 = fn_00145ac0(DAT_00897874);
      iVar10 = *piVar9;
      puVar4 = (undefined4 *)fn_001287d4(0x10,&DAT_00812c8c);
      uVar5 = 0;
      bVar6 = 0xe;
      do {
        iVar1 = (int)uVar5 >> 2;
        if (iVar1 == 0) {
          cVar7 = (&DAT_007cc4e4)[uVar5 & 3];
        }
        else if (uVar5 - 4 < 4) {
          cVar7 = (&UNK_007cc4e8)[uVar5 & 3];
        }
        else if (iVar1 == 2) {
          cVar7 = (&UNK_007cc4ec)[uVar5 & 3];
        }
        else {
          cVar7 = (&UNK_007cc4f0)[uVar5 & 3];
        }
        if (iVar1 == 0) {
          bVar8 = (&DAT_007cc4e4)[uVar5 & 3];
        }
        else if (uVar5 - 4 < 4) {
          bVar8 = (&UNK_007cc4e8)[uVar5 & 3];
        }
        else if (iVar1 == 2) {
          bVar8 = (&UNK_007cc4ec)[uVar5 & 3];
        }
        else {
          bVar8 = (&UNK_007cc4f0)[uVar5 & 3];
        }
        *(byte *)((int)puVar4 + uVar5) = bVar8 ^ bVar6;
        uVar5 = uVar5 + 1;
        bVar6 = cVar7 + bVar6;
      } while ((int)uVar5 < 0x10);
      fn_005273d8(iVar10,iVar3,0xd0,puVar4);
      uVar5 = 0;
      bVar6 = 0x38;
      do {
        iVar1 = (int)uVar5 >> 2;
        if (iVar1 == 0) {
          cVar7 = (&DAT_007cc4f4)[uVar5 & 3];
        }
        else if (uVar5 - 4 < 4) {
          cVar7 = (&UNK_007cc4f8)[uVar5 & 3];
        }
        else if (iVar1 == 2) {
          cVar7 = (&UNK_007cc4fc)[uVar5 & 3];
        }
        else {
          cVar7 = (&UNK_007cc500)[uVar5 & 3];
        }
        if (iVar1 == 0) {
          bVar8 = (&DAT_007cc4f4)[uVar5 & 3];
        }
        else if (uVar5 - 4 < 4) {
          bVar8 = (&UNK_007cc4f8)[uVar5 & 3];
        }
        else if (iVar1 == 2) {
          bVar8 = (&UNK_007cc4fc)[uVar5 & 3];
        }
        else {
          bVar8 = (&UNK_007cc500)[uVar5 & 3];
        }
        *(byte *)((int)puVar4 + uVar5) = bVar8 ^ bVar6;
        uVar5 = uVar5 + 1;
        bVar6 = cVar7 + bVar6;
      } while ((int)uVar5 < 0x10);
      fn_005273d8(iVar10 + 0xd0,iVar3 + 0xd0,0x1f260,puVar4);
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      fn_002feca8(puVar4);
      fn_0012d73c(DAT_00897874);
      DAT_00897874 = 0;
      fn_005e0784();
      uVar2 = 0;
    }
    else {
      uVar2 = 6;
    }
  }
  return uVar2;
}



undefined4 *
fn_00335988(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  undefined4 *puVar4;
  float *pfVar5;
  uint in_fpscr;
  float in_s0;
  float fVar6;
  float fVar7;
  float local_28 [5];
  
  puVar4 = (undefined4 *)fn_0016a50c();
  fVar7 = 0.0;
  *puVar4 = &DAT_008247f0;
  puVar4[1] = param_2;
  *(undefined1 *)(puVar4 + 2) = param_4;
  puVar4[3] = param_3;
  puVar4[4] = 0;
  puVar4[5] = 0;
  fn_006ad6f4(*(undefined4 *)(DAT_008977e0 + 0x30),param_2);
  puVar4[5] = in_s0;
  local_28[1] = in_s0;
  local_28[2] = fVar7;
  local_28[0] = 1.0;
  if (in_s0 < fVar7) {
    pfVar5 = local_28 + 2;
  }
  else {
    pfVar5 = local_28 + 1;
  }
  fVar6 = *pfVar5;
  uVar1 = in_fpscr & 0xfffffff | (uint)(fVar6 < 1.0) << 0x1f | (uint)(fVar6 == 1.0) << 0x1e;
  bVar3 = (byte)(uVar1 >> 0x18);
  if (!(bool)(bVar3 >> 6 & 1) && (bool)(bVar3 >> 7) == NAN(fVar6)) {
    pfVar5 = local_28;
  }
  fVar6 = *pfVar5;
  puVar4[5] = fVar6;
  cVar2 = *(char *)(puVar4 + 2);
  if (cVar2 == '\0') {
    fVar7 = 1.0 - fVar6;
  }
  else if (cVar2 == '\x01') {
    fVar7 = fVar6;
  }
  fVar6 = (float)VectorSignedToFloat(puVar4[3],(byte)(uVar1 >> 0x16) & 3);
  puVar4[4] = fVar7 / fVar6;
  if (cVar2 == '\x01') {
    puVar4[4] = -(fVar7 / fVar6);
  }
  return puVar4;
}


