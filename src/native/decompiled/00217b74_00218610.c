#include "00217b74_00218610.h"



void fn_00218610(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x50))(param_1);
  fn_001dbe2c(param_1,param_2,param_3,param_4);
  if (iVar1 != param_2) {
    param_1[0xe7] = param_1[0xe7] | 0x4000000;
  }
  return;
}



undefined4 fn_00218440(int param_1,float *param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  float in_s0;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar8 = 2.0;
  fVar9 = 1.0;
  fVar7 = 0.0;
  if ((*(uint *)(param_1 + 0x39c) & 0x100) == 0) {
    fVar3 = *param_3 - *param_2;
    fVar2 = param_3[2] - param_2[2];
    fVar5 = fVar3 * fVar3 + 0.0;
    fVar6 = SQRT(fVar5 + fVar2 * fVar2) / in_s0;
    fVar4 = ((param_3[1] - param_2[1]) * 2.0) / fVar6;
    fVar5 = 1.0 / SQRT(fVar5 + fVar2 * fVar2);
    *(float *)(param_1 + 0x4c) = fVar2 * fVar5 * in_s0;
    *(float *)(param_1 + 0x44) = fVar3 * fVar5 * in_s0;
    *(float *)(param_1 + 0x48) = fVar4;
    *(float *)(param_1 + 0x2f8) = fVar4 / fVar6;
    *(uint *)(param_1 + 0x130) = *(uint *)(param_1 + 0x130) & 0xfffffff3;
    *(uint *)(param_1 + 0x39c) = *(uint *)(param_1 + 0x39c) | 0x1100;
  }
  fVar2 = *(float *)(param_1 + 0x2f8);
  fVar3 = *(float *)(param_1 + 0x48);
  if (fVar2 < 0.0) {
    pfVar1 = (float *)fn_00242910((int)*(short *)(param_1 + 0x16a));
    fVar2 = *pfVar1;
  }
  if (fVar3 <= fVar2) {
    fn_001c7228(param_1,1);
    if ((*(uint *)(param_1 + 0x39c) & 0x100) == 0) {
      *(uint *)(param_1 + 0x39c) = *(uint *)(param_1 + 0x39c) & 0xffffefff;
      *(undefined4 *)(param_1 + 0x2f8) = 0xbf800000;
      return 1;
    }
  }
  else {
    fn_001c7228(param_1,1);
    if (*(float *)(param_1 + 0x48) <= fVar7) {
      fVar4 = param_4[1];
      fVar3 = *param_4 - *(float *)(param_1 + 0x20);
      fVar2 = param_4[2] - *(float *)(param_1 + 0x28);
      fVar7 = fVar3 * fVar3 + fVar7 * fVar7;
      fVar5 = SQRT(fVar7 + fVar2 * fVar2) / in_s0;
      fVar9 = fVar9 / SQRT(fVar7 + fVar2 * fVar2);
      *(float *)(param_1 + 0x44) = fVar3 * fVar9 * in_s0;
      *(float *)(param_1 + 0x4c) = fVar2 * fVar9 * in_s0;
      *(float *)(param_1 + 0x2f8) = ((fVar4 - *(float *)(param_1 + 0x24)) * fVar8) / (fVar5 * fVar5)
      ;
    }
  }
  return 0;
}



void fn_00218404(int param_1)

{
  fn_002181ec(param_1,param_1 + 0x20,100,999,0,0,1,10);
  return;
}



void fn_00218150(int param_1)

{
  short sVar1;
  short sVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  
  piVar3 = (int *)fn_006f7508(DAT_008977e0);
  uVar4 = (**(code **)(*piVar3 + 0x90))();
  iVar5 = fn_003b2730(uVar4,(int)*(short *)(param_1 + 0x168));
  if (iVar5 != 0) {
    sVar2 = 1;
    sVar1 = fn_002ea2b0((int)*(short *)(iVar5 + 2));
    fn_006f7a84(DAT_008977e0);
    iVar5 = fn_006aa5d8();
    if (iVar5 != 0) {
      sVar2 = fn_002aab5c();
    }
    fn_002181ec(param_1,param_1 + 0x20,100,0,(int)(short)(sVar1 * sVar2),0,0,10);
  }
  return;
}



void fn_002181ec(int param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  int *piVar6;
  undefined4 uVar7;
  
  if (((*(uint *)(param_1 + 0x39c) & 0x400) == 0) && (iVar1 = fn_0023fa88(), iVar1 != 0)) {
    bVar5 = false;
    if ((param_3 < 1) || ((param_7 == 0 || (iVar1 = fn_00163868(100), param_8 <= iVar1)))) {
      if ((param_6 != 0) && (iVar1 = fn_00163868(100), param_3 <= iVar1)) {
        return;
      }
    }
    else {
      param_4 = fn_0066161c((int)*(short *)(param_1 + 0x16a));
      bVar5 = true;
    }
    if (param_4 != 0 || param_5 != 0) {
      uVar2 = fn_006f7a70(DAT_008977e0);
      uVar3 = fn_006f7a9c(DAT_008977e0);
      if (bVar5) {
        uVar7 = 0xe;
      }
      else {
        uVar7 = 0xd;
      }
      iVar1 = fn_00145b00(0x19c,&DAT_00812c8c);
      if (iVar1 == 0) {
        piVar6 = (int *)0x0;
      }
      else {
        piVar6 = (int *)fn_0023fc7c(iVar1,uVar7);
      }
      uVar3 = fn_006b770c(uVar3,uVar7);
      (**(code **)(*piVar6 + 0xa0))(piVar6,uVar3);
      (**(code **)(*piVar6 + 0x10))(piVar6,param_2);
      iVar1 = param_2[1];
      iVar4 = param_2[2];
      piVar6[0x5d] = *param_2;
      piVar6[0x5e] = iVar1;
      piVar6[0x5f] = iVar4;
      iVar1 = param_2[1];
      iVar4 = param_2[2];
      piVar6[0x60] = *param_2;
      piVar6[0x61] = iVar1;
      piVar6[0x62] = iVar4;
      if ((((byte)DAT_008c62fc & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008c62fc), iVar1 != 0)) {
        DAT_008f9e2c = 0;
        DAT_008f9e30 = 0;
        DAT_008f9e34 = 0;
      }
      (**(code **)(*piVar6 + 0x14))(piVar6,&DAT_008f9e2c);
      *(undefined2 *)(piVar6 + 0x5c) = 3;
      if (param_4 == 0) {
        (**(code **)(*piVar6 + 0x124))(piVar6,1000,param_5);
      }
      else {
        if (param_4 == 999) {
          param_4 = fn_006616a8((int)*(short *)(param_1 + 0x16a));
        }
        (**(code **)(*piVar6 + 0x124))(piVar6,param_4,1);
      }
      fn_0030208c(uVar2,piVar6);
    }
    *(uint *)(param_1 + 0x39c) = *(uint *)(param_1 + 0x39c) | 0x400;
  }
  return;
}



void fn_00218100(int *param_1)

{
  (**(code **)(*param_1 + 0xe0))(param_1,0);
  param_1[0xe7] = param_1[0xe7] | 0x200;
  fn_00214594(param_1);
  fn_00216824(param_1);
  fn_001d9fcc(param_1);
  param_1[0xe7] = param_1[0xe7] | 1;
  return;
}



void fn_00218030(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(char *)(*(int *)(param_1[0x5c] + 0x180) + 5) == '\0') {
    iVar1 = fn_00242b6c((int)*(short *)((int)param_1 + 0x16a));
    if (iVar1 == 0) {
      fn_001db0d0(param_1,param_2);
    }
    else if (iVar1 == 1) {
      fn_001db0dc(param_1,param_2);
    }
    else if (iVar1 == 2) {
      fn_001daaf8(param_1,param_2);
    }
  }
  else {
    fn_001daaf8(param_1);
    iVar1 = fn_00242b6c((int)*(short *)((int)param_1 + 0x16a));
    if (iVar1 == 0) {
      (**(code **)(*param_1 + 0x164))(param_1,1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x002180fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1f8))(param_1);
  return;
}



void fn_00217f14(int *param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  if ((*(char *)((int)param_1 + 0x59) != '\0') ||
     ((((float)param_1[0x3e] == 0.0 && ((*(byte *)(param_1 + 0xe7) & 0x10) != 0)) &&
      (iVar1 = (**(code **)(*param_1 + 0xec))(param_1), iVar1 != 0)))) {
    fn_001db0c4(param_1);
  }
  uVar2 = 0;
  do {
    if ((param_1[uVar2 * 4 + 0x7b] != -1) &&
       (iVar1 = fn_006b4cd0(*(undefined4 *)(DAT_008977e0 + 0x2c)), iVar1 != 0)) {
      param_1[uVar2 * 4 + 0x7b] = -1;
      param_1[uVar2 * 4 + 0x7a] = -1;
    }
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 7);
  if (0 < param_1[0xbd]) {
    iVar1 = param_1[0x7b];
    bVar3 = iVar1 == -1;
    if (bVar3) {
      iVar1 = param_1[0x7f];
    }
    if (bVar3 && iVar1 == -1) {
      param_1[0xbd] = -1;
    }
  }
  if (*(char *)(DAT_008977e0 + 0x170) != '\x01') {
    (**(code **)(*param_1 + 0x1f8))(param_1);
    fn_006f7a84(DAT_008977e0);
    iVar1 = fn_006aab48();
    if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00218020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1fc))(param_1);
      return;
    }
  }
  return;
}



void fn_00217d2c(int *param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  if (((*(char *)((int)param_1 + 0x16d) == '\0') &&
      (((iVar2 = fn_006bb66c(param_1[0x5c]), iVar2 == 0 ||
        (iVar2 = fn_006f7508(DAT_008977e0),
        (int)*(short *)(*(int *)(iVar2 + 8) + 4) != (int)(char)param_1[0x5b])) &&
       (iVar2 = param_1[0x67], iVar2 != 0)))) &&
     ((iVar3 = fn_0013add0((int)*(short *)(iVar2 + 6)), iVar3 != 0 &&
      (iVar2 = fn_0013add0((int)*(short *)(iVar2 + 8)), iVar2 != 0)))) {
    iVar2 = (**(code **)(*param_1 + 0x168))(param_1);
    if (iVar2 == 0) {
      sVar1 = *(short *)((int)param_1 + 0x16a);
      iVar2 = fn_006f7508(DAT_008977e0);
      uVar4 = fn_0042838c(*(undefined4 *)(iVar2 + 0xc),(int)sVar1);
    }
    else {
      uVar4 = (uint)*(byte *)(param_1 + 0xdb);
    }
    if ((uVar4 != 0) && (*(char *)(param_1 + 0xdb) = (char)uVar4, uVar4 == 2)) {
      uVar5 = fn_006b09bc(param_1);
      iVar2 = fn_0013add0();
      if ((iVar2 != 0) &&
         ((iVar2 = fn_0013ad98(uVar5), iVar2 == 2 ||
          (DAT_008913e8 == *(short *)((int)param_1 + 0x16a))))) {
        fn_002cd778(param_1 + 0x75,(int)*(short *)((int)param_1 + 0x16a),uVar5);
      }
    }
  }
  fn_001c6d34(&local_28);
  uVar5 = fn_006b09bc(param_1);
  if (((*(char *)((int)param_1 + 0x16d) == '\0') &&
      (iVar2 = fn_0013ad98((int)*(short *)(param_1[0x67] + 2)), iVar2 == 0)) &&
     (iVar2 = fn_0013ad98(uVar5), iVar2 == 2)) {
    fn_006bb84c(param_1[0x5c],&local_28,(int)(short)param_1[0x5a]);
  }
  else {
    fn_006bb6b0(param_1[0x5c],&local_28,(int)(short)param_1[0x5a]);
  }
  iVar2 = fn_006a7f8c(&local_28);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 500))(param_1,local_28,uStack_24,uStack_20);
    *(undefined1 *)(param_1 + 0x16) = 0;
  }
  param_1[0xe7] = param_1[0xe7] & 0xfffffffe;
  return;
}



undefined4 fn_00217b74(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar3 = (**(code **)(*param_1 + 500))(param_1,param_2,0xffffffff,0xffffffff,param_4);
  iVar4 = fn_006f7358(DAT_008977e0);
  if (iVar4 == 0) {
    (**(code **)(*param_1 + 300))(param_1,0);
  }
  else {
    (**(code **)(*param_1 + 300))(param_1,1);
  }
  fn_001da490(param_1,2,3,3,0xffffffff);
  fn_001da490(param_1,3,4,4,0xffffffff);
  fn_001da490(param_1,9,7,7,0xffffffff);
  fn_001da490(param_1,10,8,8,0xffffffff);
  fn_001da490(param_1,0x14,0xf,0xf,0xffffffff);
  fn_001da490(param_1,0x15,0x10,0x10,0xffffffff);
  fn_001da490(param_1,0x16,0x11,0x11,0xffffffff);
  fn_001da490(param_1,0x17,0xf,0xf,0xffffffff);
  fn_001da490(param_1,0x18,0xf,0xf,0xffffffff);
  fn_001da490(param_1,0x19,2,2,0xffffffff);
  param_1[0x4e] = param_1[0x4e] | 8;
  sVar2 = *(short *)((int)param_1 + 0x16a);
  uVar5 = fn_006bb52c(param_1[0x5c]);
  cVar1 = *(char *)((int)param_1 + 0x1be);
  uVar6 = fn_006f7508(DAT_008977e0);
  uVar5 = fn_003648c0(uVar6,(int)cVar1,uVar5,(int)sVar2);
  fn_001d96a0(param_1,uVar5);
  iVar4 = 0;
  fn_0017fe34();
  param_1[0xc] = iVar4;
  return uVar3;
}


