#include "001c400c_001c46dc.h"

static void svc_0x23(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x23 }
#endif
}

static void svc_0x24(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x24 }
#endif
}


float * fn_001c46dc(int param_1)

{
  bool bVar1;
  int *piVar2;
  float *pfVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  piVar2 = (int *)fn_006f72e0(DAT_008977e0);
  pfVar3 = (float *)(**(code **)(*piVar2 + 0x3c))();
  if (pfVar3 == (float *)0x0) {
    iVar4 = fn_006f7a5c(DAT_008977e0);
    fVar10 = 0.3;
    fVar7 = *(float *)(iVar4 + 0x1c) - *(float *)(param_1 + 0x20);
    fVar8 = *(float *)(iVar4 + 0x24) - *(float *)(param_1 + 0x28);
    fVar9 = *(float *)(iVar4 + 0x20) - (*(float *)(param_1 + 0x24) + 30.0);
    fVar7 = SQRT(fVar7 * fVar7 + fVar9 * fVar9 + fVar8 * fVar8);
    bVar1 = NAN(fVar7) || NAN(*(float *)(param_1 + 0x11c));
    if (*(float *)(param_1 + 0x11c) <= fVar7) {
      pfVar3 = (float *)(uint)*(byte *)(param_1 + 0x138);
      bVar6 = (*(byte *)(param_1 + 0x138) & 8) == 0;
      bVar5 = false;
      if (!bVar6) {
        fVar8 = *(float *)(param_1 + 0x124);
        bVar5 = fVar7 < fVar8;
        bVar6 = fVar7 == fVar8;
        bVar1 = NAN(fVar7) || NAN(fVar8);
      }
      if ((!bVar6 && bVar5 == bVar1) && (fVar7 < *(float *)(param_1 + 0x128))) {
        return pfVar3;
      }
    }
    else {
      pfVar3 = (float *)(iVar4 + 0x20);
      if (*(float *)(param_1 + 0x118) < fVar7) {
        pfVar3 = (float *)(uint)DAT_008911e0;
        if ((DAT_008911e0 & 1) == 0) {
          iVar4 = fn_00303afc(&DAT_008911e0);
          pfVar3 = (float *)0x0;
          if (iVar4 != 0) {
            DAT_008911e4 = (fVar10 - *(float *)(param_1 + 0x120)) /
                           (*(float *)(param_1 + 0x11c) - *(float *)(param_1 + 0x118));
            pfVar3 = (float *)&DAT_008911e0;
          }
        }
      }
    }
  }
  return pfVar3;
}



undefined4 * fn_001c4648(undefined4 *param_1)

{
  *param_1 = &DAT_0081b7dc;
  if (param_1[2] != 0) {
    *(undefined1 *)(param_1 + 3) = 1;
    fn_0015e304();
    if (param_1[2] != 0) {
      svc_0x23();
      param_1[2] = 0;
    }
    fn_0015e304();
    if (param_1[2] != 0) {
      svc_0x23();
      param_1[2] = 0;
    }
  }
  fn_0015e304();
  if (param_1[2] != 0) {
    svc_0x23();
    param_1[2] = 0;
  }
  return param_1;
}



void fn_001c4578(undefined4 *param_1)

{
  *param_1 = &DAT_0081b7dc;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)((int)param_1 + 5) = 0;
  *(undefined1 *)((int)param_1 + 6) = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  return;
}



undefined1
fn_001c43dc(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,uint *param_6,undefined4 param_7)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  undefined1 uVar4;
  int local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_50;
  undefined1 *local_4c;
  undefined *local_48;
  code *local_44;
  uint local_40;
  int iStack_3c;
  undefined1 auStack_38 [20];
  
  uVar4 = 3;
  if (*(char *)(param_1 + 4) == '\0') {
    uVar2 = fn_0044cc48(auStack_38,&local_40);
    if ((uVar2 & 0x80000000) == 0) {
      uVar2 = param_6[1];
      if ((int)(uVar2 - (iStack_3c + (uint)(*param_6 < local_40))) < 0 ==
          (SBORROW4(uVar2,iStack_3c) != SBORROW4(uVar2 - iStack_3c,(uint)(*param_6 < local_40)))) {
        uVar4 = 4;
        *(undefined1 *)(param_1 + 6) = 0xfa;
      }
      else {
        local_68 = *param_3;
        uStack_64 = param_3[1];
        local_60 = *param_4;
        local_5c = *param_5;
        local_50 = 0x20;
        local_4c = &LAB_0074a134;
        local_48 = &DAT_0074a280;
        local_44 = fn_0074a1f8;
        local_70 = param_1;
        uStack_6c = param_2;
        local_58 = param_7;
        iVar3 = fn_0044fb14(param_1 + 8,&local_50,fn_001c4304,&local_70,0x1000,0xf,0xfffffffe);
        if (iVar3 < 0) {
          fn_0015e294();
        }
        uVar4 = 1;
        *(undefined1 *)(param_1 + 4) = 1;
      }
    }
    else {
      iVar3 = fn_0044c9fc();
      if (iVar3 == 0) {
        uVar1 = 0xff;
      }
      else {
        uVar1 = 0x80;
      }
      *(undefined1 *)(param_1 + 6) = uVar1;
    }
  }
  else if ((*(char *)(param_1 + 4) == '\x01') &&
          (uVar4 = *(undefined1 *)(param_1 + 5), 1 < *(byte *)(param_1 + 5))) {
    svc_0x24();
    if (*(int *)(param_1 + 8) < 0) {
      fn_0015e294();
    }
    *(undefined1 *)(param_1 + 0xc) = 1;
    fn_0015e304();
    if (*(int *)(param_1 + 8) != 0) {
      svc_0x23();
      *(int *)(param_1 + 8) = 0;
    }
    *(undefined1 *)(param_1 + 4) = 0;
    *(undefined1 *)(param_1 + 5) = 0;
  }
  return uVar4;
}



void fn_001c4304(int *param_1)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_20 [16];
  
  iVar4 = *param_1;
  *(undefined1 *)(iVar4 + 5) = 1;
  piVar2 = (int *)fn_00145b00(0xc,&DAT_00812c8c);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    iVar3 = param_1[1];
    piVar2[2] = param_1[6];
    piVar2[1] = iVar3;
    *piVar2 = (int)&DAT_0082023c;
  }
  fn_0026e378(auStack_20,param_1[2],piVar2,(char *)&DAT_007ce550,param_1[4],param_1[5]);
  iVar3 = fn_0026d2e8(auStack_20,0);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  *(char *)(iVar4 + 6) = (char)iVar3;
  if (iVar3 == -6) {
    uVar1 = 4;
  }
  else if (iVar3 == -3) {
    uVar1 = 5;
  }
  else if (iVar3 == 0) {
    uVar1 = 2;
  }
  else {
    uVar1 = 3;
  }
  *(undefined1 *)(iVar4 + 5) = uVar1;
  fn_0026e410(auStack_20);
  return;
}



void fn_001c4248(float *param_1,float *param_2,float *param_3)

{
  float in_s0;
  float fVar1;
  float in_s1;
  float in_s2;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar7 = *param_1;
  fVar5 = *param_2 - fVar7;
  fVar2 = param_2[1] - param_1[1];
  fVar4 = param_2[2] - param_1[2];
  fVar6 = SQRT(fVar5 * fVar5 + fVar2 * fVar2 + fVar4 * fVar4);
  if (in_s0 < fVar6) {
    fVar1 = in_s0 + (fVar6 - in_s0) * (fVar6 - in_s0) * in_s2;
    if (in_s1 < fVar1) {
      fVar1 = in_s1;
    }
    fVar6 = 1.0 / fVar6;
    fVar3 = param_1[1];
    param_3[2] = param_1[2] + fVar4 * fVar6 * fVar1;
    *param_3 = fVar7 + fVar5 * fVar6 * fVar1;
    param_3[1] = fVar3 + fVar2 * fVar6 * fVar1;
    return;
  }
  fVar6 = param_1[1];
  fVar1 = param_1[2];
  *param_3 = fVar7 + fVar5;
  param_3[1] = fVar6 + fVar2;
  param_3[2] = fVar1 + fVar4;
  return;
}



void fn_001c41d0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  iVar1 = fn_00174858(DAT_008977e4);
  if (iVar1 != 0) {
    iVar1 = fn_00174858(DAT_008977e4);
    uVar2 = *(uint *)(*(int *)(iVar1 + 0x4c) + 0x10);
    bVar3 = *(char *)(uVar2 + 0x76) != '\x02';
    if (bVar3) {
      uVar2 = (uint)*(byte *)(uVar2 + 0x74);
    }
    if (!bVar3 || uVar2 == 2) {
      *(undefined1 *)(param_2 + 0x78) = 1;
      *(undefined1 *)(param_2 + 0x79) = 1;
    }
  }
  fn_00655acc(param_1,param_2,param_3);
  *(undefined1 *)(param_2 + 0x78) = 0;
  *(undefined1 *)(param_2 + 0x79) = 0;
  return;
}



void fn_001c400c(undefined4 param_1,uint param_2,float *param_3,float *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  
  uVar8 = 0x428c000041700000;
  fVar6 = 0.0;
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008c62fc), iVar1 != 0)) {
    DAT_008f9e2c = fVar6;
    DAT_008f9e30 = fVar6;
    DAT_008f9e34 = fVar6;
  }
  fVar9 = DAT_008f9e34;
  fVar7 = DAT_008f9e30;
  *param_3 = DAT_008f9e2c;
  param_3[1] = fVar7;
  param_3[2] = fVar9;
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008c62fc), iVar1 != 0)) {
    DAT_008f9e2c = fVar6;
    DAT_008f9e30 = fVar6;
    DAT_008f9e34 = fVar6;
  }
  fVar7 = DAT_008f9e34;
  fVar6 = DAT_008f9e30;
  *param_4 = DAT_008f9e2c;
  param_4[1] = fVar6;
  param_4[2] = fVar7;
  uVar2 = fn_0017484c(DAT_008977e4);
  iVar1 = fn_00182e2c(uVar2,param_1);
  fVar7 = *(float *)(iVar1 + 0xc);
  fVar9 = *(float *)(iVar1 + 0x10);
  fVar10 = *(float *)(iVar1 + 0x14);
  uVar2 = fn_0017fde4(*(undefined4 *)(iVar1 + 4));
  uVar3 = fn_00191238(uVar2,(char *)&DAT_001c41b8);
  iVar4 = fn_005ea4e8(uVar2,uVar3);
  fVar6 = *(float *)(iVar4 + 0x1c);
  *param_4 = fVar7;
  param_4[1] = fVar9;
  if ((int)fVar6 < 0x41700000) {
    fVar6 = (float)uVar8;
  }
  param_4[2] = fVar10;
  fVar5 = (float)VectorUnsignedToFloat(param_2 >> 1,(byte)(in_fpscr >> 0x16) & 3);
  param_4[1] = fVar9 + fVar6;
  *param_3 = fVar7;
  param_3[1] = fVar9;
  param_3[2] = fVar10;
  param_3[1] = fVar9 + fVar6;
  fVar5 = fVar5 * 0.7111111;
  fn_00525abc();
  fVar10 = 40.743664;
  fVar9 = *(float *)(iVar1 + 0x1c) * 40.743664;
  fVar7 = fVar6 / fVar5;
  if ((int)(fVar6 / fVar5) < 0x428c0000) {
    fVar7 = (float)((ulonglong)uVar8 >> 0x20);
  }
  fn_00525abc();
  *param_3 = *param_3 + fVar7 * fVar9;
  fVar10 = *(float *)(iVar1 + 0x1c) * fVar10;
  fn_00194408();
  param_3[2] = param_3[2] + fVar7 * fVar10;
  return;
}


