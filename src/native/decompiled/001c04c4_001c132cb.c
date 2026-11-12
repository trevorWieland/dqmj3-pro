#include "001c04c4_001c132cb.h"



undefined4 fn_001c132c(int param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  double in_d0;
  float fVar3;
  int local_20 [4];
  
  iVar1 = fn_001030bc(param_1,&DAT_0080e078);
  if (iVar1 == 0) {
    uVar2 = fn_00101c78(param_1,local_20,10);
    if (param_1 == local_20[0]) {
      return 0;
    }
    if (((*param_2 & 0x8000000) != 0) &&
       (iVar1 = *(int *)(param_2[1] + 4) + -1, *(int *)(param_2[1] + 4) = iVar1, iVar1 == 0)) {
      (**(code **)(*(int *)param_2[1] + 8))();
    }
    *param_2 = 0x5000002;
    param_2[1] = uVar2;
  }
  else {
    fn_001a2480(param_1,local_20);
    fVar3 = (float)in_d0;
    if (param_1 == local_20[0]) {
      return 0;
    }
    if (((*param_2 & 0x8000000) != 0) &&
       (iVar1 = *(int *)(param_2[1] + 4) + -1, *(int *)(param_2[1] + 4) = iVar1, iVar1 == 0)) {
      (**(code **)(*(int *)param_2[1] + 8))();
    }
    param_2[1] = (uint)fVar3;
    *param_2 = 0x5000004;
  }
  return 1;
}



void fn_001c129c(int param_1)

{
  int iVar1;
  uint uVar2;
  int local_10;
  int iStack_c;
  
  iVar1 = fn_001249d0();
  uVar2 = *(uint *)(iVar1 + 0x38);
  if ((int)DAT_008b6428 < 0) {
    iStack_c = *(int *)(iVar1 + 0x3c) -
               (((int)-DAT_008b6428 >> 0x1f) + (uint)(uVar2 < -DAT_008b6428));
  }
  else {
    iStack_c = *(int *)(iVar1 + 0x3c) + ((int)DAT_008b6428 >> 0x1f) +
               (uint)CARRY4(DAT_008b6428,uVar2);
  }
  local_10 = uVar2 + DAT_008b6428;
  fn_00472d20(param_1 + 0x14,&local_10);
  return;
}



undefined4 fn_001c0e78(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  int local_c;
  
  iVar1 = fn_00740c1c(param_1,(char *)&DAT_001c10e4,&local_10,&local_c);
  if ((iVar1 == 0) ||
     (iVar1 = fn_00740c1c(param_1,(char *)&DAT_001c10ec,&local_10,&local_c), iVar1 == 0)) {
    iVar1 = fn_002febd8(&DAT_0086eb78);
    if ((local_c == iVar1) && (iVar1 = fn_001010c8(&DAT_0086eb78,local_10), iVar1 == 0)) {
      return 0;
    }
    iVar1 = fn_002febd8((char *)&DAT_0086eb8c);
    if ((local_c == iVar1) && (iVar1 = fn_001010c8((char *)&DAT_0086eb8c,local_10), iVar1 == 0)) {
      return 0xfffffed4;
    }
    iVar1 = fn_002febd8((char *)&DAT_0086ebbc);
    if ((local_c == iVar1) && (iVar1 = fn_001010c8((char *)&DAT_0086ebbc,local_10), iVar1 == 0)) {
      return 0xfffffed3;
    }
    iVar1 = fn_002febd8((char *)&DAT_0086eb68);
    if ((local_c == iVar1) && (iVar1 = fn_001010c8((char *)&DAT_0086eb68,local_10), iVar1 == 0)) {
      return 0xfffffed2;
    }
    iVar1 = fn_002febd8((char *)&DAT_0086ebf0);
    if ((local_c == iVar1) && (iVar1 = fn_001010c8((char *)&DAT_0086ebf0,local_10), iVar1 == 0)) {
      return 0xfffffed1;
    }
    iVar1 = fn_002febd8((char *)&DAT_0086eb48);
    if ((local_c == iVar1) && (iVar1 = fn_001010c8((char *)&DAT_0086eb48,local_10), iVar1 == 0)) {
      return 0xfffffed0;
    }
    iVar1 = fn_002febd8((char *)&DAT_0086ebb0);
    if ((local_c == iVar1) && (iVar1 = fn_001010c8((char *)&DAT_0086ebb0,local_10), iVar1 == 0)) {
      return 0xfffffecf;
    }
    iVar1 = fn_002febd8((char *)&DAT_0086eba0);
    if ((local_c == iVar1) && (iVar1 = fn_001010c8((char *)&DAT_0086eba0,local_10), iVar1 == 0)) {
      return 0xfffffece;
    }
    iVar1 = fn_002febd8((char *)&DAT_0086ebe0);
    if ((local_c == iVar1) && (iVar1 = fn_001010c8((char *)&DAT_0086ebe0,local_10), iVar1 == 0)) {
      return 0xfffffecd;
    }
    iVar1 = fn_002febd8((char *)&DAT_0086ebd0);
    if ((local_c == iVar1) && (iVar1 = fn_001010c8((char *)&DAT_0086ebd0,local_10), iVar1 == 0)) {
      return 0xfffffecc;
    }
    iVar1 = fn_002febd8((char *)&DAT_0086eb7c);
    if ((local_c == iVar1) && (iVar1 = fn_001010c8((char *)&DAT_0086eb7c,local_10), iVar1 == 0)) {
      return 0xfffffe0c;
    }
    iVar1 = fn_002febd8((char *)&DAT_0086eb58);
    if ((local_c == iVar1) && (iVar1 = fn_001010c8((char *)&DAT_0086eb58,local_10), iVar1 == 0)) {
      return 0xfffffe0b;
    }
  }
  uVar2 = fn_001b8438(1,0xfffffc7a,(char *)&DAT_007e1a5c);
  return uVar2;
}



undefined4 * fn_001c0d3c(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = fn_00145b00(0x1a8,&DAT_00812c8c);
  puVar2 = (undefined4 *)0x0;
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)fn_00211c48(iVar1,0x27);
    *puVar2 = &DAT_007bf4b0;
    puVar2[0x67] = param_1;
    *(undefined1 *)(puVar2 + 0x68) = 0;
    *(undefined1 *)((int)puVar2 + 0x1a1) = 0;
    puVar2[0x69] = 0xffffffff;
    fn_006f7a70(DAT_008977e0);
    uVar3 = fn_002ff310(2);
    puVar2[0x4f] = uVar3;
  }
  return puVar2;
}



void fn_001c0c08(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar7 = *param_2;
  fVar2 = param_3[2] - param_2[2];
  fVar6 = *param_3 - fVar7;
  fVar9 = param_2[1];
  fVar5 = param_3[1] - param_2[1];
  fVar1 = fVar6 * (*param_1 - fVar7) + fVar5 * (param_1[1] - fVar9) +
          fVar2 * (param_1[2] - param_2[2]);
  fVar4 = fVar6 * fVar6 + fVar5 * fVar5 + fVar2 * fVar2;
  fVar3 = 1.0 / fVar4;
  fVar8 = param_2[2];
  fVar6 = fVar7 + fVar6 * fVar1 * fVar3;
  fVar5 = fVar9 + fVar5 * fVar1 * fVar3;
  fVar2 = fVar8 + fVar2 * fVar1 * fVar3;
  if (0.0 <= fVar1) {
    fVar7 = fVar6 - fVar7;
    fVar9 = fVar5 - fVar9;
    fVar8 = fVar2 - param_2[2];
    if (fVar7 * fVar7 + fVar9 * fVar9 + fVar8 * fVar8 < fVar4) {
      *param_4 = fVar6;
      param_4[1] = fVar5;
      param_4[2] = fVar2;
      return;
    }
    fVar7 = *param_3;
    fVar9 = param_3[1];
    fVar8 = param_3[2];
  }
  *param_4 = fVar7;
  param_4[1] = fVar9;
  param_4[2] = fVar8;
  return;
}


