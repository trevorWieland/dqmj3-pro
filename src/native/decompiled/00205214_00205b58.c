#include "00205214_00205b58.h"



undefined1 fn_00205b58(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = fn_0017fde4(*(undefined4 *)(param_1 + 4));
  iVar2 = fn_00183638(uVar1,0);
  return *(undefined1 *)(iVar2 + 3);
}



void fn_002058e4(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if (param_1[1] != 0) {
    iVar1 = fn_0017fde4();
    in_fpscr = in_fpscr & 0xfffffff;
    fVar6 = ABS((float)param_1[7] * 40.743664);
    fVar5 = ABS((float)param_1[8] * 40.743664);
    for (fVar7 = ABS((float)param_1[6] * 40.743664); 0x477fffff < (int)fVar7;
        fVar7 = fVar7 - 65536.0) {
    }
    for (; 0x477fffff < (int)fVar6; fVar6 = fVar6 - 65536.0) {
    }
    for (; 0x477fffff < (int)fVar5; fVar5 = fVar5 - 65536.0) {
    }
    uVar8 = VectorFloatToUnsigned(fVar7,3);
    uVar9 = VectorFloatToUnsigned(fVar6,3);
    uVar10 = VectorFloatToUnsigned(fVar5,3);
    uVar2 = uVar8 & 0xff;
    fVar13 = (float)VectorUnsignedToFloat(uVar8 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
    uVar8 = uVar9 & 0xff;
    fVar14 = (float)VectorUnsignedToFloat(uVar9 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
    uVar9 = uVar10 & 0xff;
    fVar11 = (float)VectorUnsignedToFloat(uVar10 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
    fVar12 = (float)(&DAT_007d6f20)[uVar2 * 4] +
             (fVar7 - fVar13) * (float)(&DAT_007d6f28)[uVar2 * 4];
    fVar13 = (float)(&DAT_007d6f24)[uVar2 * 4] +
             (fVar7 - fVar13) * (float)(&DAT_007d6f2c)[uVar2 * 4];
    fVar7 = (float)(&DAT_007d6f20)[uVar8 * 4] + (fVar6 - fVar14) * (float)(&DAT_007d6f28)[uVar8 * 4]
    ;
    fVar6 = (float)(&DAT_007d6f24)[uVar8 * 4] + (fVar6 - fVar14) * (float)(&DAT_007d6f2c)[uVar8 * 4]
    ;
    if ((float)param_1[6] * 40.743664 < 0.0) {
      fVar12 = -fVar12;
    }
    fVar14 = (float)(&DAT_007d6f20)[uVar9 * 4] +
             (fVar5 - fVar11) * (float)(&DAT_007d6f28)[uVar9 * 4];
    fVar5 = (float)(&DAT_007d6f24)[uVar9 * 4] + (fVar5 - fVar11) * (float)(&DAT_007d6f2c)[uVar9 * 4]
    ;
    if ((float)param_1[7] * 40.743664 < 0.0) {
      fVar7 = -fVar7;
    }
    if ((float)param_1[8] * 40.743664 < 0.0) {
      fVar14 = -fVar14;
    }
    *(float *)(iVar1 + 0x4c) = fVar5 * fVar6;
    *(float *)(iVar1 + 0x5c) = fVar14 * fVar6;
    *(float *)(iVar1 + 0x70) = fVar12 * fVar6;
    *(float *)(iVar1 + 0x74) = fVar13 * fVar6;
    *(float *)(iVar1 + 0x50) = fVar12 * fVar5 * fVar7 - fVar13 * fVar14;
    *(float *)(iVar1 + 100) = fVar13 * fVar14 * fVar7 - fVar12 * fVar5;
    *(float *)(iVar1 + 0x54) = fVar12 * fVar14 + fVar13 * fVar5 * fVar7;
    *(float *)(iVar1 + 0x60) = fVar13 * fVar5 + fVar12 * fVar14 * fVar7;
    *(float *)(iVar1 + 0x6c) = -fVar7;
    *(undefined4 *)(iVar1 + 0x58) = 0;
    *(undefined4 *)(iVar1 + 0x68) = 0;
    *(undefined4 *)(iVar1 + 0x78) = 0;
    iVar3 = param_1[4];
    iVar4 = param_1[5];
    *(int *)(iVar1 + 0x58) = param_1[3];
    *(int *)(iVar1 + 0x68) = iVar3;
    *(int *)(iVar1 + 0x78) = iVar4;
    *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x800;
    iVar3 = param_1[10];
    iVar4 = param_1[0xb];
    *(int *)(iVar1 + 0x7c) = param_1[9];
    *(int *)(iVar1 + 0x80) = iVar3;
    *(int *)(iVar1 + 0x84) = iVar4;
    *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x800;
    (**(code **)(*(int *)param_1[1] + 0x10))();
  }
  if ((char)param_1[0x10] == '\0') {
    return;
  }
  iVar1 = param_1[0xe];
  if (param_1[0xf] < iVar1) {
    param_1[0xf] = param_1[0xf] + 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  if (*(char *)((int)param_1 + 0x36) == '\0') {
    fVar6 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
    fVar7 = (float)VectorSignedToFloat(param_1[0xf],(byte)(in_fpscr >> 0x16) & 3);
    fVar7 = fVar7 / fVar6;
    if (iVar1 <= param_1[0xf]) {
      fVar7 = 1.0;
    }
  }
  else {
    fVar7 = 0.0;
    if (*(char *)((int)param_1 + 0x36) == '\x01') {
      fVar6 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
      fVar7 = (float)VectorSignedToFloat(param_1[0xf],(byte)(in_fpscr >> 0x16) & 3);
      fVar7 = 1.0 - fVar7 / fVar6;
      if (iVar1 <= param_1[0xf]) {
        fVar7 = 0.0;
      }
    }
  }
  fn_0017fde4(param_1[1]);
  fn_0017fc3c();
  (**(code **)(*param_1 + 0x18))(param_1,0x3f7fffff < (int)fVar7);
                    /* WARNING: Could not recover jumptable at 0x0020587c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1c))(param_1,0x3f7fffff < (int)fVar7);
  return;
}



void fn_002058a4(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    return;
  }
  if (param_2 == 0) {
    uVar1 = fn_0017fde4();
    fn_0017fcfc(uVar1,1);
    return;
  }
  uVar1 = fn_0017fde4();
  fn_0017fc28(uVar1,1);
  return;
}



void fn_00205888(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined1 *)(param_1 + 0x36) = 1;
  *(undefined1 *)(param_1 + 0x40) = 1;
  *(undefined4 *)(param_1 + 0x38) = param_2;
  return;
}



void fn_0020573c(int param_1,int param_2)

{
  if (*(char *)(param_1 + 0x34) != param_2) {
    if (param_2 == 0) {
      fn_001594e4(DAT_008977e4,*(undefined4 *)(param_1 + 4),1);
    }
    else {
      fn_0017894c();
    }
  }
  *(char *)(param_1 + 0x34) = (char)param_2;
  return;
}



void fn_00205664(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  fn_0017fde4(*(undefined4 *)(param_1 + 4));
  iVar1 = fn_00183654();
  iVar5 = 0;
  if (0 < iVar1) {
    do {
      uVar2 = fn_0017fde4(*(undefined4 *)(param_1 + 4));
      iVar3 = fn_005ea5ec(uVar2,iVar5);
      if (iVar3 != 0) {
        uVar2 = fn_0017fde4(*(undefined4 *)(param_1 + 4));
        fn_005ea69c(uVar2,iVar5);
      }
      uVar2 = fn_0017fde4(*(undefined4 *)(param_1 + 4));
      uVar2 = fn_005ea654(uVar2,iVar5);
      fn_005e7d48(uVar2,0x10);
      uVar2 = fn_006eba70(uVar2);
      uVar4 = 2;
      if (param_2 == 0) {
        uVar4 = 0;
      }
      fn_005e7a74(uVar2,1,1,0xff,0,0xff,0,0,uVar4);
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1);
  }
  return;
}



int * fn_002054e8(int *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  *param_1 = (int)&DAT_0081c3bc;
  fn_00179728(param_1);
  uVar1 = DAT_008987bc;
  if (param_1[0x19] != -1) {
    fn_00661f24(DAT_008987bc,param_1[0x19],param_1[1]);
    fn_006617c4(uVar1,param_1[0x19]);
    param_1[0x19] = -1;
    fn_0011ddb8();
  }
  uVar3 = 0;
  if (param_1[0x1c] - param_1[0x1b] >> 2 != 0) {
    do {
      if ((uint)(param_1[0x1c] - param_1[0x1b] >> 2) <= uVar3) {
        fn_002ff628(9,&DAT_008c7670,&DAT_008c7670,uVar3);
      }
      iVar4 = *(int *)(param_1[0x1b] + uVar3 * 4);
      if (iVar4 != -1) {
        uVar1 = fn_0017481c(DAT_008977e4);
        fn_00254430(uVar1,iVar4);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)(param_1[0x1c] - param_1[0x1b] >> 2));
  }
  (**(code **)(*param_1 + 0x20))(param_1);
  uVar2 = param_1[0x1e];
  uVar3 = uVar2;
  if ((uint)param_1[0x1f] < uVar2) {
    do {
      uVar3 = uVar3 + 4;
    } while (uVar3 != param_1[0x1f]);
  }
  fn_001008c4(uVar2,(int)(param_1[0x20] - uVar2) >> 2,0);
  uVar2 = param_1[0x1b];
  uVar3 = uVar2;
  if ((uint)param_1[0x1c] <= uVar2) {
    for (; uVar3 != param_1[0x1c]; uVar3 = uVar3 + 4) {
    }
  }
  fn_001008c4(uVar2,(int)(param_1[0x1d] - uVar2) >> 2,0);
  *param_1 = (int)&DAT_0081c3ec;
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 4))();
  }
  return param_1;
}



undefined4 * fn_00205414(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar3 = (undefined4 *)fn_00205be4();
  *puVar3 = &DAT_0081c3bc;
  *(undefined1 *)((int)puVar3 + 0x41) = 0;
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar4 = fn_00303afc(&DAT_008c62fc), iVar4 != 0)) {
    DAT_008f9e2c = 0;
    DAT_008f9e30 = 0;
    DAT_008f9e34 = 0;
  }
  uVar2 = DAT_008f9e34;
  uVar1 = DAT_008f9e30;
  puVar3[0x11] = DAT_008f9e2c;
  puVar3[0x12] = uVar1;
  puVar3[0x13] = uVar2;
  puVar3[0x14] = 0;
  *(undefined1 *)(puVar3 + 0x15) = 0;
  puVar3[0x17] = 0xffffffff;
  puVar3[0x16] = 0;
  *(undefined1 *)(puVar3 + 0x18) = 0;
  puVar3[0x19] = 0xffffffff;
  *(undefined1 *)(puVar3 + 0x1a) = 1;
  puVar3[0x1b] = 0;
  puVar3[0x1c] = 0;
  puVar3[0x1d] = 0;
  puVar3[0x1e] = 0;
  puVar3[0x1f] = 0;
  puVar3[0x20] = 0;
  *(undefined1 *)(puVar3 + 0x21) = 0;
  *(undefined1 *)((int)puVar3 + 0x85) = 0;
  *(undefined1 *)((int)puVar3 + 0x86) = 0;
  return puVar3;
}



undefined4 fn_00205214(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  
  param_1[2] = param_2;
  iVar1 = fn_00145b00(0xc,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_005e846c();
  }
  piVar4 = (int *)param_1[1];
  if (piVar4 != piVar2) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    param_1[1] = (int)piVar2;
  }
  uVar3 = fn_001797c4(param_1);
  fn_0069ee40(param_1[1],uVar3,0);
  (**(code **)(*param_1 + 0x1c))(param_1,1);
  (**(code **)(*param_1 + 0x14))(param_1,1);
  return 1;
}


