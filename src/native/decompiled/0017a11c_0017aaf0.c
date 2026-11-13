#include "0017a11c_0017aaf0.h"



void fn_0017aaf0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  switch(*(undefined1 *)(param_2 + 0x120)) {
  case 1:
    uVar1 = 0xffffff00;
    break;
  case 2:
    uVar1 = 0xff00ff00;
    break;
  case 3:
  case 4:
    uVar1 = 0xff00ffff;
  }
  *param_1 = uVar1;
  return;
}



void fn_0017a934(undefined4 *param_1,undefined4 param_2,byte *param_3,byte *param_4,int param_5)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  uint in_fpscr;
  float in_s0;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  
  *param_1 = 0xffffffff;
  uVar2 = (uint)*param_3;
  uVar3 = (uint)*param_4;
  if (uVar2 < uVar3) {
    fVar4 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
    fVar6 = (float)VectorSignedToFloat(uVar3 - uVar2,(byte)(in_fpscr >> 0x16) & 3);
    uVar5 = VectorFloatToUnsigned(fVar4 + fVar6 * in_s0,3);
    uVar1 = (undefined1)uVar5;
  }
  else {
    fVar4 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
    fVar6 = (float)VectorSignedToFloat(uVar2 - uVar3,(byte)(in_fpscr >> 0x16) & 3);
    uVar5 = VectorFloatToUnsigned(fVar4 - fVar6 * in_s0,3);
    uVar1 = (undefined1)uVar5;
  }
  *(undefined1 *)param_1 = uVar1;
  uVar2 = (uint)param_3[1];
  uVar3 = (uint)param_4[1];
  if (uVar2 < uVar3) {
    fVar4 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
    fVar6 = (float)VectorSignedToFloat(uVar3 - uVar2,(byte)(in_fpscr >> 0x16) & 3);
    uVar5 = VectorFloatToUnsigned(fVar4 + fVar6 * in_s0,3);
    uVar1 = (undefined1)uVar5;
  }
  else {
    fVar4 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
    fVar6 = (float)VectorSignedToFloat(uVar2 - uVar3,(byte)(in_fpscr >> 0x16) & 3);
    uVar5 = VectorFloatToUnsigned(fVar4 - fVar6 * in_s0,3);
    uVar1 = (undefined1)uVar5;
  }
  *(undefined1 *)((int)param_1 + 1) = uVar1;
  uVar2 = (uint)param_3[2];
  uVar3 = (uint)param_4[2];
  if (uVar2 < uVar3) {
    fVar4 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
    fVar6 = (float)VectorSignedToFloat(uVar3 - uVar2,(byte)(in_fpscr >> 0x16) & 3);
    uVar5 = VectorFloatToUnsigned(fVar4 + fVar6 * in_s0,3);
    uVar1 = (undefined1)uVar5;
  }
  else {
    fVar4 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
    fVar6 = (float)VectorSignedToFloat(uVar2 - uVar3,(byte)(in_fpscr >> 0x16) & 3);
    uVar5 = VectorFloatToUnsigned(fVar4 - fVar6 * in_s0,3);
    uVar1 = (undefined1)uVar5;
  }
  *(undefined1 *)((int)param_1 + 2) = uVar1;
  if (param_5 == 0) {
    uVar1 = 0xff;
  }
  else {
    uVar2 = (uint)param_3[3];
    uVar3 = (uint)param_4[3];
    if (uVar2 < uVar3) {
      fVar4 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
      fVar6 = (float)VectorSignedToFloat(uVar3 - uVar2,(byte)(in_fpscr >> 0x16) & 3);
      uVar5 = VectorFloatToUnsigned(fVar4 + fVar6 * in_s0,3);
      uVar1 = (undefined1)uVar5;
    }
    else {
      fVar4 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
      fVar6 = (float)VectorSignedToFloat(uVar2 - uVar3,(byte)(in_fpscr >> 0x16) & 3);
      uVar5 = VectorFloatToUnsigned(fVar4 - fVar6 * in_s0,3);
      uVar1 = (undefined1)uVar5;
    }
  }
  *(undefined1 *)((int)param_1 + 3) = uVar1;
  return;
}



void fn_0017a8a4(undefined4 param_1,int *param_2,undefined4 *param_3)

{
  undefined4 local_10;
  
  local_10 = *param_3;
  (**(code **)(*param_2 + 0x10))(param_2,0,&local_10);
  local_10 = *param_3;
  (**(code **)(*param_2 + 0x10))(param_2,1,&local_10);
  local_10 = *param_3;
  (**(code **)(*param_2 + 0x10))(param_2,2,&local_10);
  local_10 = *param_3;
  (**(code **)(*param_2 + 0x10))(param_2,3,&local_10);
  return;
}



undefined8 fn_0017a7fc(undefined4 param_1,int param_2)

{
  uint in_fpscr;
  int local_38 [7];
  int local_1c;
  int local_18;
  int local_14;
  int iStack_10;
  int iStack_c;
  
  local_38[6] = 0;
  local_38[0] = 0;
  local_38[1] = 0xffffffec;
  local_38[2] = 0x14;
  local_38[3] = 0xffffffec;
  local_38[4] = 0x14;
  local_38[5] = 0xffffffec;
  switch(param_1) {
  case 0:
    local_38[6] = 0x28;
    break;
  case 1:
    local_38[6] = 0x37;
    break;
  case 2:
    local_38[6] = 0x41;
    break;
  case 3:
  case 4:
    local_38[6] = 0x32;
  }
  local_18 = local_38[6] + 0x24;
  local_1c = local_38[6] + 0x12;
  local_14 = local_38[6] + 0x36;
  iStack_10 = local_38[6] + 0x48;
  iStack_c = local_38[6] + 0x5a;
  VectorSignedToFloat(local_38[param_2],(byte)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(local_38[param_2 + 6],(byte)(in_fpscr >> 0x16) & 3);
  return CONCAT44(local_38[param_2 + 6],local_38[param_2]);
}



void fn_0017a71c(undefined1 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = fn_00182994(DAT_008977e4);
  fn_00179990(uVar1,(char *)&DAT_0017a7d0,param_1);
  if (param_3 != 0) {
    piVar2 = (int *)fn_00182994(DAT_008977e4);
    (**(code **)(*piVar2 + 0x14))(piVar2,(char *)&DAT_0017a7e8);
  }
  if (param_2 != 0) {
    uVar1 = fn_00182994(DAT_008977e4);
    fn_00182c40(uVar1,param_1,7,0);
    uVar1 = fn_00182994(DAT_008977e4);
    fn_00175284(uVar1,param_1,0);
    uVar1 = fn_00182994(DAT_008977e4);
    fn_00174fc0(uVar1,param_1);
  }
  uVar1 = fn_00182994(DAT_008977e4);
  fn_00179a14(uVar1,param_1);
  return;
}



void fn_0017a2fc(char param_1,int param_2,char param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int *piVar3;
  
  uVar2 = fn_00182994(DAT_008977e4);
  uVar1 = fn_001659c0(uVar2,(int)param_3,(int)param_1);
  uVar2 = fn_00182994(DAT_008977e4);
  fn_00179990(uVar2,(char *)&DAT_00188948,uVar1);
  if (param_2 == 0) {
    return;
  }
  piVar3 = (int *)fn_00182994(DAT_008977e4);
                    /* WARNING: Could not recover jumptable at 0x0017a360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar3 + 0x14))(piVar3,"SE_BTL_023");
  return;
}



/* WARNING: Removing unreachable block (ram,0x0017a1fc) */
/* WARNING: Removing unreachable block (ram,0x0017a234) */

void fn_0017a1d4(int param_1)

{
  undefined2 local_14 [4];
  
  local_14[0] = 0;
  fn_00177c88((int *)(param_1 + 4),0,*(undefined4 *)(*(int *)(param_1 + 4) + -4),local_14,0,0,0);
  local_14[0] = 0;
  fn_00177c88(param_1 + 0x18,0,*(undefined4 *)(*(int *)(param_1 + 0x18) + -4),local_14,0,0,0);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0xff;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  return;
}



void fn_0017a18c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 4) + -4);
  uVar1 = fn_00100b58(param_2);
  fn_00177c88(param_1 + 4,uVar2,0,param_2,uVar1,0,uVar1);
  return;
}



void fn_0017a11c(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  
  if (*param_2 != -1) {
    fn_00159f34(*(undefined4 *)(param_1 + 0xc));
    *param_2 = -1;
  }
  iVar1 = fn_001853ec(*(undefined4 *)(param_1 + 0xc),param_3,*(undefined4 *)(param_1 + 0x14));
  *param_2 = iVar1;
  piVar2 = (int *)fn_001854ac(*(undefined4 *)(param_1 + 0xc),iVar1);
                    /* WARNING: Could not recover jumptable at 0x0017a184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x50))(piVar2,param_4);
  return;
}


