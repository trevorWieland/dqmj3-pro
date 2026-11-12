#include "001e11b0_001e1950.h"



void fn_001e1950(int *param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  
  iVar3 = fn_006f7a48(DAT_008977e0);
  cVar1 = *(char *)(iVar3 + 4);
  if (((cVar1 != '\0' && cVar1 != '\x04') && cVar1 != '\t') ||
     (*(char *)(DAT_008977e0 + 0x170) == '\x01')) {
    fn_001dd254(param_1);
    return;
  }
  if ((*(char *)(DAT_008977e0 + 0x170) != '\0') && ((char)param_1[0xea] == '\0')) {
    iVar4 = param_1[0xc3];
    bVar8 = iVar4 == -1;
    if (bVar8) {
      iVar4 = param_1[0xc2];
    }
    if (bVar8 && iVar4 == -1) {
      iVar4 = fn_006a7e10(iVar3);
      if (((iVar4 != 0) &&
          (iVar4 = (**(code **)(**(int **)(DAT_008977e0 + 0x28) + 0x2c))(), iVar4 == 0)) &&
         (iVar4 = fn_006aa348(param_1), iVar4 != 0)) {
        bVar2 = 1;
        if ((char)param_1[0x82] != -1) {
          uVar5 = fn_006ab190(param_1,0xffffffff,0,0,0);
          bVar2 = ~(byte)(uVar5 >> 4) & 1;
        }
        *(byte *)((int)param_1 + 0x3e2) = bVar2;
        fn_00699a64(DAT_008977e0,0);
        return;
      }
      iVar4 = fn_006a7cec(iVar3);
      if (((iVar4 != 0) && (iVar4 = fn_00154ac8(0x1b3), iVar4 == 0)) &&
         ((iVar4 = fn_00154ac8(0x3d), iVar4 != 0 && (*(char *)((int)param_1 + 0x1b1) == '\0')))) {
        iVar4 = fn_006a7f80(iVar3);
        cVar1 = '\0';
        if (iVar4 != 0) {
          cVar1 = (char)param_1[0x82];
        }
        if (iVar4 != 0 && cVar1 != -1) {
          fn_001ea230(param_1,0);
        }
        iVar4 = fn_006a7d80(iVar3);
        cVar1 = '\0';
        if (iVar4 != 0) {
          cVar1 = (char)param_1[0x82];
        }
        if (iVar4 != 0 && cVar1 != '\0') {
          fn_001e8ef0(param_1,0);
        }
        iVar4 = fn_006a7dbc(iVar3);
        cVar1 = '\0';
        if (iVar4 != 0) {
          cVar1 = (char)param_1[0x82];
        }
        if (iVar4 != 0 && cVar1 != '\x01') {
          fn_001e8ef0(param_1,1,0);
        }
        iVar4 = fn_006a7d20(iVar3);
        cVar1 = '\0';
        if (iVar4 != 0) {
          cVar1 = (char)param_1[0x82];
        }
        if (iVar4 != 0 && cVar1 != '\x02') {
          fn_001e8ef0(param_1,2,0);
        }
        if (*(char *)((int)param_1 + 0x1b1) != '\0') {
          uVar6 = (**(code **)(*param_1 + 0xf0))(param_1);
          uVar7 = fn_006f7984(DAT_008977e0);
          fn_00409120(uVar7,uVar6,0);
          return;
        }
      }
      if (*(char *)(param_1[0x101] + 0x38) == '\0') {
        iVar4 = (**(code **)(*param_1 + 300))(param_1);
        if (iVar4 != 0) {
          fn_001dc1e8(param_1);
        }
        if ((char)param_1[0x82] != -1) {
          fn_006f7a48(DAT_008977e0);
          iVar4 = fn_006a7d98();
          if (iVar4 != 0) {
            fn_001dde28(param_1);
          }
        }
        iVar4 = fn_006f7a48(DAT_008977e0);
        cVar1 = *(char *)(iVar4 + 4);
        fn_006a7cbc(iVar3);
        fn_006a7cb0(iVar3);
        fn_001dd414(param_1,cVar1 != '\x04');
        return;
      }
    }
  }
  return;
}



void fn_001e1598(int param_1,int param_2)

{
  undefined4 uVar1;
  uint in_fpscr;
  
  if (param_2 != 0) {
    fn_00162d44(*(undefined4 *)(*(int *)(DAT_008977e0 + 8) + 0x24));
  }
  if (*(int *)(param_1 + 0x1ec) != -1) {
    (**(code **)(**(int **)(DAT_008977e0 + 0x2c) + 0xc))();
    *(undefined4 *)(param_1 + 0x1ec) = 0xffffffff;
  }
  fn_00259728(param_1 + 0x1e8,1);
  if (*(char *)(param_1 + 0x208) == -1) {
    *(undefined4 *)(param_1 + 800) = 0;
  }
  else {
    fn_006aa538(param_1);
    uVar1 = fn_00242aec();
    uVar1 = VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
    *(undefined4 *)(param_1 + 800) = uVar1;
  }
  fn_001dcdf0(param_1);
  fn_001de4fc(param_1);
  fn_001e1698(param_1);
  uVar1 = fn_006a99b0(param_1);
  fn_001e1c54(param_1,uVar1);
  if (*(char *)(*(int *)(param_1 + 400) + 0x3c) == '\0') {
    return;
  }
  fn_001e3dd8(param_1,0);
  return;
}



void fn_001e1698(int param_1)

{
  int iVar1;
  int *piVar2;
  float *pfVar3;
  uint uVar4;
  int *piVar5;
  uint in_fpscr;
  undefined4 in_s0;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if (*(int *)(param_1 + 400) == 0) {
    iVar1 = fn_00145b00(0x58,&DAT_00812c8c);
    piVar2 = (int *)0x0;
    if (iVar1 != 0) {
      piVar2 = (int *)fn_0023f468();
    }
    piVar5 = *(int **)(param_1 + 400);
    if (piVar5 != piVar2) {
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 4))(piVar5);
      }
      *(int **)(param_1 + 400) = piVar2;
    }
    *(int *)(*(int *)(param_1 + 400) + 4) = param_1;
    if (*(int *)(param_1 + 400) == 0) {
      return;
    }
  }
  fVar7 = 2.6;
  fVar8 = 0.2;
  fVar9 = 2.5;
  fVar10 = 8.0;
  if (*(char *)(param_1 + 0x208) == -1) {
    iVar1 = *(int *)(param_1 + 400);
    fn_00202c98(0);
    *(undefined4 *)(iVar1 + 0x48) = in_s0;
    goto LAB_001e17f0;
  }
  fn_006aa538(param_1);
  pfVar3 = (float *)fn_00242910();
  fVar6 = (float)VectorUnsignedToFloat((uint)*(byte *)(pfVar3 + 2),(byte)(in_fpscr >> 0x16) & 3);
  fVar7 = fVar6 * 0.1;
  uVar4 = fn_0025988c(*(undefined4 *)(param_1 + *(char *)(param_1 + 0x208) * 4 + 0x1f8));
  if (uVar4 == 3) {
    fVar6 = 3.3;
LAB_001e1784:
    fVar7 = fVar7 * fVar6;
  }
  else if (uVar4 == 4) {
    fVar6 = 3.6;
    goto LAB_001e1784;
  }
  fVar8 = *pfVar3;
  fVar9 = pfVar3[1];
  if (uVar4 < 5) {
    fn_00202c80();
    fVar9 = fVar6 * fVar9;
    fn_00202cc8(uVar4);
    fVar10 = fVar6;
    fn_00202c98(uVar4);
    fVar9 = fVar9 * fVar10;
    fVar8 = fVar10 * fVar10 * fVar8;
    *(float *)(*(int *)(param_1 + 400) + 0x48) = fVar6;
    fn_00202cb0(uVar4);
    fVar10 = fVar6;
  }
LAB_001e17f0:
  if (*(int *)(param_1 + 0x308) == 0) {
    fVar7 = 2.16;
  }
  iVar1 = fn_006f7358(DAT_008977e0);
  if (iVar1 != 0) {
    fVar7 = 24.0;
    fVar8 = 0.6;
    fVar9 = 10.0;
  }
  *(float *)(param_1 + 0x424) = fVar8;
  *(float *)(*(int *)(param_1 + 400) + 0x28) = fVar7;
  *(float *)(*(int *)(param_1 + 400) + 0x18) = fVar8;
  *(float *)(*(int *)(param_1 + 400) + 0x24) = fVar9;
  *(float *)(*(int *)(param_1 + 400) + 0x1c) = fVar10;
  fn_0023f3bc(*(undefined4 *)(param_1 + 400));
  fn_0023eee0(*(undefined4 *)(param_1 + 400));
  return;
}



undefined4 fn_001e1268(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  undefined4 uVar9;
  int iVar10;
  bool bVar11;
  bool bVar12;
  float fVar13;
  undefined4 in_s1;
  undefined4 local_3c;
  float local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  iVar10 = param_1 + param_2 * 4;
  iVar2 = fn_00145b00(0xc,&DAT_00812c8c);
  piVar3 = (int *)0x0;
  if (iVar2 != 0) {
    piVar3 = (int *)fn_005e846c();
  }
  piVar8 = *(int **)(iVar10 + 0x17c);
  if (piVar8 != piVar3) {
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 4))(piVar8);
    }
    *(int **)(iVar10 + 0x17c) = piVar3;
  }
  uVar4 = fn_006f7a9c(DAT_008977e0);
  param_1 = param_1 + param_2 * 0xc;
  uVar4 = fn_00241d90(uVar4,*(undefined4 *)(param_1 + 0x230));
  iVar2 = fn_0069ee38(*(undefined4 *)(iVar10 + 0x17c),uVar4,0);
  if (iVar2 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x234) != -1) {
    uVar4 = fn_006f7a9c(DAT_008977e0);
    uVar4 = fn_00241d90(uVar4,*(undefined4 *)(param_1 + 0x234));
    fn_0069eb10(*(undefined4 *)(iVar10 + 0x17c),uVar4,0);
  }
  uVar4 = fn_0017fde4(*(undefined4 *)(iVar10 + 0x17c));
  fn_0017fc28(uVar4,1);
  iVar2 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),*(undefined4 *)(iVar10 + 0x1f8));
  uVar4 = 0;
  local_3c = 0;
  local_38 = 0.0;
  local_34 = 0;
  fn_002cd59c(2);
  if (((DAT_008c62f8 & 1) == 0) && (iVar5 = fn_00303afc(&DAT_008c62f8), iVar5 != 0)) {
    in_s1 = 0x3f800000;
    DAT_008f9e20 = 0x3f800000;
    DAT_008f9e24 = 0x3f800000;
    DAT_008f9e28 = 0x3f800000;
  }
  fn_006dc524(&DAT_008f9e20);
  local_30 = uVar4;
  uStack_2c = in_s1;
  uVar4 = fn_00171634();
  uVar6 = fn_0017fde4(*(undefined4 *)(iVar10 + 0x17c));
  fn_0017ab7c(&local_3c,uVar6,2,uVar4,&local_30);
  fVar13 = local_38 - local_38 * 0.25;
  if (*(short *)(iVar2 + 0x1c) == 0x1e6) {
    fVar13 = 40.0;
  }
  if (*(short *)(iVar2 + 0x1c) == 0x36d) {
    fVar13 = 40.0;
  }
  *(float *)(iVar10 + 0x218) = fVar13;
  uVar4 = fn_0025988c(*(undefined4 *)(iVar10 + 0x1f8));
  uVar6 = fn_0017fde4(*(undefined4 *)(iVar10 + 0x17c));
  fn_002cd6b0(uVar6,uVar4);
  cVar1 = *(char *)(iVar2 + 0x72);
  bVar11 = cVar1 == '\0';
  if (bVar11) {
    cVar1 = *(char *)(iVar2 + 0x78);
  }
  bVar12 = bVar11 && cVar1 == '\0';
  if (bVar11 && cVar1 == '\0') {
    bVar12 = *(char *)(iVar2 + 0x7e) == '\0';
  }
  if (!bVar12) {
    iVar10 = fn_006f7a9c(DAT_008977e0);
    uVar4 = fn_00279fe4(iVar10,(int)*(short *)(iVar2 + 0x1c));
    iVar5 = fn_00279bbc(iVar10,uVar4);
    if (iVar5 != 0) {
      uVar6 = fn_006b7664(iVar10,uVar4);
      uVar7 = *(uint *)(param_1 + 0x230);
      if (((int)uVar7 < 0) ||
         ((uint)((*(int *)(iVar10 + 8) - *(int *)(iVar10 + 4)) / 0x34) <= uVar7)) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined4 *)(*(int *)(iVar10 + 0x10) + uVar7 * 4);
      }
      if (((int)uVar7 < 0) ||
         ((uint)((*(int *)(iVar10 + 8) - *(int *)(iVar10 + 4)) / 0x34) <= uVar7)) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(iVar10 + 4) + uVar7 * 0x34;
      }
      fn_002cd5b0(iVar5,uVar9,uVar6,iVar2 + 0x72);
      fn_00279ae4(iVar10,uVar4);
    }
    iVar2 = fn_002798a0(iVar10,uVar4);
    if (iVar2 != 0) {
      fn_00279ae4(iVar10,uVar4);
    }
  }
  return 1;
}



void fn_001e11b0(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined1 auStack_20 [12];
  
  if ((char)param_1[0x82] != -1) {
    (**(code **)(*param_1 + 0x54))(param_1,0);
  }
  if ((int *)param_1[param_2 + 0x5f] != (int *)0x0) {
    (**(code **)(*(int *)param_1[param_2 + 0x5f] + 4))();
    param_1[param_2 + 0x5f] = 0;
  }
  uVar1 = fn_006f7a9c(DAT_008977e0);
  iVar2 = fn_00278bc8(uVar1,param_1 + param_2 * 3 + 0x8c);
  if (iVar2 != 0) {
    uVar1 = fn_006f7a9c(DAT_008977e0);
    fn_00278b7c(uVar1,param_1 + param_2 * 3 + 0x8c);
    piVar3 = (int *)fn_001c6d34(auStack_20);
    iVar2 = piVar3[1];
    iVar4 = piVar3[2];
    param_1[param_2 * 3 + 0x8c] = *piVar3;
    param_1[param_2 * 3 + 0x8d] = iVar2;
    param_1[param_2 * 3 + 0x8e] = iVar4;
  }
  return;
}


