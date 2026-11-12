#include "002124f4_00212a94.h"

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


undefined4 fn_00212a94(int *param_1,undefined4 param_2)

{
  short sVar1;
  undefined1 uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  int *piVar9;
  uint uVar10;
  float in_s0;
  float fVar11;
  float fVar12;
  
  piVar3 = (int *)fn_006f7508(DAT_008977e0);
  uVar4 = (**(code **)(*piVar3 + 0x90))();
  iVar5 = fn_003b2730(uVar4,param_2);
  if (iVar5 == 0) {
    return 0;
  }
  *(short *)(param_1 + 0x5a) = (short)param_2;
  param_1[0x67] = iVar5;
  *(undefined2 *)((int)param_1 + 0x16a) = *(undefined2 *)(iVar5 + 4);
  iVar5 = fn_00154ac8(0x30);
  if (iVar5 == 0) {
    if (*(short *)((int)param_1 + 0x16a) == 0x299) {
      *(undefined1 *)(param_1 + 0xe6) = 1;
    }
    if (*(short *)((int)param_1 + 0x16a) == 0x29a) {
      *(undefined1 *)(param_1 + 0xe6) = 1;
    }
  }
  if (*(char *)((int)param_1 + 0x16d) == '\0') {
    uVar2 = fn_0013ad98((int)*(short *)(param_1[0x67] + 2));
    *(undefined1 *)(param_1 + 0xdb) = uVar2;
  }
  iVar5 = fn_00145b00(0x14,&DAT_00812c8c);
  piVar3 = (int *)0x0;
  if (iVar5 != 0) {
    fn_006f7508(DAT_008977e0);
    uVar4 = fn_00365da8();
    piVar3 = (int *)fn_003647d4(iVar5,param_1,uVar4);
  }
  piVar9 = (int *)param_1[0x66];
  if (piVar9 != piVar3) {
    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 4))(piVar9);
    }
    param_1[0x66] = (int)piVar3;
  }
  param_1[0x45] = 2;
  uVar6 = (uint)*(short *)(param_1[0x67] + 0x38);
  if (uVar6 != 0) {
    uVar10 = 0;
    if ((uVar6 & 0xf) != 0) {
      uVar10 = (uint)(short)((uVar6 ^ 0xf) << 8);
    }
    uVar10 = uVar6 & 0xf00 | uVar10;
    if ((uVar10 & 0x100) != 0) {
      param_1[0x4d] = param_1[0x4d] | 2;
    }
    if ((uVar10 & 0x400) != 0) {
      param_1[0x4d] = param_1[0x4d] | 1;
    }
    if ((uVar10 & 0x800) != 0) {
      param_1[0x4d] = param_1[0x4d] | 4;
    }
  }
  param_1[0x74] = 0;
  *(undefined1 *)((int)param_1 + 0x1be) = 2;
  if (*(char *)((int)param_1 + 0x16d) == '\0') {
    sVar1 = *(short *)(param_1[0x5c] + 0x10a);
    uVar4 = fn_006b09bc(param_1);
    iVar5 = fn_002aaac8(uVar4,sVar1 == 2);
    param_1[0x74] = iVar5;
    uVar4 = fn_006b09bc(param_1);
    fn_002ea524();
    iVar5 = fn_002e9c90(uVar4);
    if (iVar5 == -1) {
      iVar5 = fn_0066173c();
    }
  }
  else {
    param_1[0x74] = 7;
    if (*(char *)((int)param_1 + 0x16d) == '\x01') {
      iVar5 = fn_0066173c((int)*(short *)((int)param_1 + 0x16a));
      *(char *)((int)param_1 + 0x1be) = (char)iVar5;
      if (2 < iVar5) {
        *(undefined1 *)((int)param_1 + 0x1be) = 2;
      }
      goto LAB_00212d08;
    }
    fn_006b09bc(param_1);
    iVar5 = fn_0013add0();
    if (iVar5 == 0) {
      iVar7 = (int)*(short *)((int)param_1 + 0x16a);
    }
    else {
      uVar4 = fn_006b09bc(param_1);
      iVar7 = fn_002ea524();
      iVar5 = fn_002e9c90(uVar4);
      if (iVar5 != -1) goto LAB_00212cec;
    }
    iVar5 = fn_0066173c(iVar7);
  }
LAB_00212cec:
  *(char *)((int)param_1 + 0x1be) = (char)iVar5;
LAB_00212d08:
  (**(code **)(*param_1 + 0xa0))(param_1,0xffffffff);
  fVar12 = 1.0;
  fn_002cd59c((int)*(char *)((int)param_1 + 0x1be));
  fVar11 = in_s0;
  (**(code **)(*param_1 + 0x1cc))(param_1);
  in_s0 = in_s0 * fVar11;
  (**(code **)(*param_1 + 0x20))(param_1);
  fn_00301f50(param_1 + 0x75,0x12);
  uVar4 = fn_006b09bc(param_1);
  iVar5 = fn_0013add0();
  if ((iVar5 != 0) &&
     ((iVar5 = fn_0013ad98(uVar4), iVar5 == 2 || (DAT_008913e8 == *(short *)((int)param_1 + 0x16a))
      ))) {
    fn_002cd778(param_1 + 0x75,(int)*(short *)((int)param_1 + 0x16a),uVar4);
  }
  pcVar8 = (char *)fn_006afe90(*(undefined4 *)(DAT_008977e0 + 0x1c),
                                *(undefined4 *)(DAT_008977e0 + 0xa8));
  if (*pcVar8 == 'W') {
    param_1[0xe7] = param_1[0xe7] | 0x100000;
  }
  iVar5 = fn_006f7358(DAT_008977e0);
  if ((iVar5 != 0) || (**(int **)(DAT_008977e0 + 0x40) != 0)) {
    param_1[0xe7] = param_1[0xe7] | 0x100000;
  }
  fn_002cd69c((int)*(char *)((int)param_1 + 0x1be));
  if ((int)in_s0 < 0x3f800000) {
    in_s0 = fVar12;
  }
  param_1[0x58] = (int)(in_s0 * 360.0);
  return 1;
}



undefined4 fn_00212a24(int param_1)

{
  uint uVar1;
  
  if (*(uint **)(param_1 + 0x3a0) != (uint *)0x0) {
    uVar1 = **(uint **)(param_1 + 0x3a0);
    if (uVar1 != 0) {
      svc_0x24();
      if ((int)uVar1 < 0) {
        fn_0015e294(uVar1,uVar1,0,0);
      }
      if ((uVar1 & 0x3ff) == 0x3fe) {
        return 0;
      }
    }
    fn_00214594(param_1);
  }
  return 1;
}



void fn_002129b4(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  *(undefined4 *)(param_1 + 0x1a4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1a8) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x1ac) = 0;
  *(undefined1 *)(param_1 + 0x1ad) = 0;
  *(undefined1 *)(param_1 + 0x1ae) = 0;
  *(undefined1 *)(param_1 + 0x1af) = 0;
  fn_006a9984(param_1);
  *(undefined4 *)(param_1 + 0x1a0) = uVar2;
  *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(param_1 + 0xf8);
  *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(param_1 + 0x38);
  *(undefined1 *)(param_1 + 0x1ac) = *(undefined1 *)(param_1 + 0x58);
  uVar1 = fn_006a9948(param_1);
  *(undefined1 *)(param_1 + 0x1ae) = uVar1;
  return;
}



int fn_002126c8(int *param_1,int param_2,uint param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  bool bVar7;
  bool bVar8;
  float in_s0;
  float in_s1;
  float in_s2;
  float fVar9;
  float fVar11;
  undefined8 uVar10;
  undefined8 uVar12;
  undefined4 local_60;
  undefined1 *local_5c;
  undefined *local_58;
  undefined1 *local_54;
  float local_50;
  float local_4c;
  float local_48;
  int *local_44 [9];
  
  if (param_2 == -1) {
    return 1;
  }
  iVar2 = fn_001d99a0(param_1,param_2,1);
  if (iVar2 == 0) {
    return 0;
  }
  if (param_3 != 0xffffffff) {
    iVar3 = fn_006f7a9c(DAT_008977e0);
    if (((int)param_3 < 0) ||
       ((uint)((*(int *)(iVar3 + 8) - *(int *)(iVar3 + 4)) / 0x34) <= param_3)) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar3 + 4) + param_3 * 0x34;
    }
    fn_0069eb10(param_1[0x39],iVar3,0);
  }
  fVar11 = (float)param_1[0xe];
  fn_0069ecb8(param_1[0x39],(char *)&DAT_00212994);
  uVar12 = CONCAT44(in_s2,in_s0);
  fVar9 = in_s1;
  fn_001cac80((int)*(char *)((int)param_1 + 0x1be));
  (**(code **)(*param_1 + 0x1cc))(param_1);
  uVar10 = CONCAT44(fVar9 * fVar11,fVar9);
  fn_001cabcc((int)*(char *)((int)param_1 + 0x1be),(int)*(short *)((int)param_1 + 0x16a),0);
  fVar9 = in_s0;
  (**(code **)(*param_1 + 0x1cc))(param_1);
  local_50 = fVar9 * in_s0;
  local_4c = in_s1 * in_s0;
  local_48 = in_s2 * in_s0;
  fn_006a9e9c(param_1,&local_50);
  iVar3 = fn_00242b0c((int)*(short *)((int)param_1 + 0x16a));
  if (iVar3 == 1) {
    iVar3 = fn_00242b6c((int)*(short *)((int)param_1 + 0x16a));
    if (iVar3 == 0) {
      param_1[0x43] = 0;
      goto LAB_00212838;
    }
  }
  param_1[0x43] = (int)((ulonglong)uVar10 >> 0x20);
LAB_00212838:
  param_1[0x3b] = (int)uVar12;
  param_1[0x3c] = (int)uVar10;
  param_1[0x3d] = (int)((ulonglong)uVar12 >> 0x20);
  param_1[0x4e] = param_1[0x4e] | 0x20;
  (**(code **)(*param_1 + 0x10c))(param_1,1);
  cVar1 = *(char *)((int)param_1 + 0x1be);
  uVar4 = fn_0017fde4(param_1[0x39]);
  fn_002cd6b0(uVar4,(int)cVar1);
  cVar1 = (char)param_1[0x75];
  bVar7 = cVar1 == '\0';
  if (bVar7) {
    cVar1 = *(char *)((int)param_1 + 0x1da);
  }
  bVar8 = bVar7 && cVar1 == '\0';
  if (bVar7 && cVar1 == '\0') {
    bVar8 = (char)param_1[0x78] == '\0';
  }
  if (!bVar8) {
    bVar8 = param_4 == -1;
  }
  if (!bVar8) {
    piVar5 = (int *)fn_00145b00(8,&DAT_00812c8c);
    if (piVar5 != (int *)0x0) {
      *piVar5 = 0;
      *(undefined1 *)(piVar5 + 1) = 1;
    }
    piVar6 = (int *)param_1[0xe8];
    if (piVar6 != piVar5) {
      if (piVar6 != (int *)0x0) {
        fn_0015e304(piVar6);
        if (*piVar6 != 0) {
          svc_0x23();
          *piVar6 = 0;
        }
        fn_002feef8(piVar6);
      }
      param_1[0xe8] = (int)piVar5;
    }
    iVar3 = fn_00145b00(0x20000,&DAT_00812c8c);
    if (param_1[0xe9] != iVar3) {
      fn_002feef8();
      param_1[0xe9] = iVar3;
    }
    local_60 = 4;
    local_5c = &LAB_0074a1a0;
    local_58 = &DAT_0074a290;
    local_54 = &LAB_0074a270;
    local_44[0] = param_1;
    iVar3 = fn_0014e2f4(param_1[0xe8],&local_60,fn_002174c8,local_44,param_1[0xe9] + 0x20000,0x10,
                         0xfffffffe,0);
    if (iVar3 < 0) {
      fn_0015e294();
    }
  }
  return iVar2;
}



void fn_002124f4(int *param_1,float *param_2,undefined4 param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  float *pfVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float in_s1;
  uint uVar10;
  longlong lVar9;
  undefined8 uVar11;
  float local_34;
  float local_30;
  float local_2c;
  
  local_34 = *param_2;
  local_30 = param_2[1];
  local_2c = param_2[2];
  uVar10 = param_1[8];
  uVar11 = *(undefined8 *)(param_1 + 9);
  uVar2 = fn_006a9938(param_1);
  uVar3 = fn_006a99b0(param_1);
  lVar9 = (ulonglong)uVar10 << 0x20;
  bVar1 = local_34 == 0.0;
  if (bVar1) {
    in_s1 = local_30;
  }
  if ((bVar1 && (bVar1 && in_s1 == 0.0)) && (local_2c == 0.0)) {
    uVar10 = 1;
  }
  else {
    uVar10 = 0;
  }
  if ((uVar10 & (uVar3 | uVar2)) != 0) {
    return;
  }
  iVar4 = (**(code **)(*param_1 + 0x60))(param_1);
  if (iVar4 != 0) {
    fVar7 = (float)param_1[0xbe];
    if (fVar7 < (float)lVar9) {
      pfVar5 = (float *)fn_00242910((int)*(short *)((int)param_1 + 0x16a));
      fVar7 = *pfVar5;
    }
    local_30 = local_30 - fVar7;
  }
  (**(code **)(*param_1 + 0x30))(param_1,&local_34,param_3,uVar2,0);
  iVar4 = fn_006a9938(param_1);
  if ((iVar4 != 0) || (iVar4 = fn_006a99b0(param_1), iVar4 != 0)) {
    param_1[0xe7] = param_1[0xe7] & 0xfffffeff;
    local_30 = (float)lVar9;
  }
  fVar7 = (float)((ulonglong)lVar9 >> 0x20);
  iVar4 = fn_006aa2dc(param_1);
  if (iVar4 != 0) {
    fVar8 = (float)param_1[8];
    bVar1 = fVar8 == fVar7;
    if (bVar1) {
      fVar8 = (float)param_1[9];
    }
    bVar6 = false;
    if (bVar1 && (bVar1 && fVar8 == (float)uVar11)) {
      bVar6 = (float)param_1[10] == (float)((ulonglong)uVar11 >> 0x20);
    }
    if (bVar6) {
      param_1[0x6c] = param_1[0x6c] + 1;
      param_1[0xe7] = param_1[0xe7] | 8;
      goto LAB_00212688;
    }
  }
  param_1[0xe7] = param_1[0xe7] & 0xfffffff7;
  param_1[0x6c] = 0;
LAB_00212688:
  param_1[0x11] = (int)local_34;
  param_1[0x12] = (int)local_30;
  param_1[0x13] = (int)local_2c;
  return;
}


