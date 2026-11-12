#include "005813fc_0058296c.h"



void fn_0058296c(int param_1,int param_2)

{
  int iVar1;
  
  fn_00689efc(param_1,0x2d,0);
  if (param_2 == 0) {
    *(undefined2 *)(*(int *)(param_1 + 0xf0) + 0x1c) = 0;
    iVar1 = *(int *)(param_1 + 0xf4);
    if (iVar1 != 0) {
      *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
    }
  }
  else {
    fn_0025f354(*(int *)(param_1 + 0xf0),param_2);
    if (*(int *)(param_1 + 0xf4) != 0) {
      iVar1 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),param_2);
      *(byte *)(*(int *)(param_1 + 0xf4) + 0x44) =
           *(byte *)(*(int *)(param_1 + 0xf4) + 0x44) & 0xfe | 1;
      fn_00688c04(*(undefined4 *)(param_1 + 0xf4),(int)*(short *)(iVar1 + 0x3a),0);
      return;
    }
  }
  return;
}



void fn_005828f0(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)(param_1 + 0x18);
  if (puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar1 == &DAT_008944c0) goto LAB_00582938;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_00582938:
  puVar3[3] = *(undefined4 *)(param_2 + 8);
  puVar3[4] = *(undefined4 *)(param_2 + 4);
  uVar2 = (**(code **)(**(int **)(param_1 + 0xe0) + 0x5c))();
  puVar3[5] = uVar2;
  puVar3[6] = *(undefined4 *)(param_1 + 0xfc);
  return;
}



undefined4 * fn_005828a4(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x18);
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar1 == &DAT_008944c0) {
        return puVar2;
      }
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  return (undefined4 *)0x0;
}



void fn_005818e4(int *param_1)

{
  if ((int *)param_1[0x3e] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x3e] + 0x18))();
    if ((int *)param_1[0x3e] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x3e] + 4))();
      param_1[0x3e] = 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00581934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x108))(param_1);
  return;
}



void fn_00581868(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_008424d4;
  if ((int *)param_1[0x33] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x33] + 4))();
  }
  fn_00411d6c(param_1);
  fn_002feef8();
  return;
}



void fn_00581838(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_005c21cc();
  *puVar1 = &PTR_LAB_008424d4;
  puVar1[0x33] = 0;
  puVar1[0x34] = 0;
  puVar1[0x35] = 0;
  puVar1[0x36] = 0;
  *(undefined1 *)(puVar1 + 0x37) = 0;
  return;
}



void fn_005817bc(int *param_1)

{
  if ((char)param_1[0x37] == '\0') {
    (**(code **)(*param_1 + 0x16c))(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x005817fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x158))(param_1);
    return;
  }
  return;
}



void fn_0058178c(int *param_1)

{
  fn_00411cc4();
  (**(code **)(*param_1 + 0x15c))(param_1);
                    /* WARNING: Could not recover jumptable at 0x005817b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x158))(param_1);
  return;
}



void fn_00581768(void)

{
                    /* WARNING: Subroutine does not return */
  fn_005c21b8();
}



void fn_00581730(int *param_1,undefined4 param_2)

{
  if ((char)param_1[0x37] == '\0') {
                    /* WARNING: Could not recover jumptable at 0x00581760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x140))(param_1,param_2);
    return;
  }
  return;
}



void fn_005816b8(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((char)param_1[0x37] == '\0') {
    return;
  }
  iVar1 = param_1[0x33];
  iVar3 = *(int *)(iVar1 + 0x70);
  if (iVar3 <= *(int *)(iVar1 + 0x3c)) {
    fn_0068ab44(param_1,0x100094d);
    return;
  }
  iVar2 = *(int *)(iVar1 + 0x3c) + 10;
  if (iVar3 < iVar2) {
    iVar2 = iVar3;
  }
  *(int *)(iVar1 + 0x3c) = iVar2;
  (**(code **)(*param_1 + 0x180))(param_1,0);
  fn_0068ab44(param_1,0x1000957);
  return;
}



void fn_00581644(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((char)param_1[0x37] == '\0') {
    return;
  }
  iVar2 = param_1[0x33];
  iVar1 = *(int *)(iVar2 + 0x3c);
  iVar3 = *(int *)(iVar2 + 0x6c);
  if (iVar1 <= iVar3) {
    fn_0068ab44(param_1,0x100094d);
    return;
  }
  if (10 < iVar1) {
    iVar3 = iVar1 + -10;
  }
  *(int *)(iVar2 + 0x3c) = iVar3;
  (**(code **)(*param_1 + 0x180))(param_1,0);
  fn_0068ab44(param_1,0x1000957);
  return;
}



void fn_005815d4(int *param_1)

{
  int iVar1;
  
  if ((char)param_1[0x37] == '\0') {
    return;
  }
  iVar1 = param_1[0x33];
  if (*(int *)(iVar1 + 0x6c) < *(int *)(iVar1 + 0x3c)) {
    *(int *)(iVar1 + 0x3c) = *(int *)(iVar1 + 0x3c) + -1;
    (**(code **)(*param_1 + 0x180))(param_1,0);
    fn_0068ab44(param_1,0x1000957);
    return;
  }
  fn_0068ab44(param_1,0x100094d);
  return;
}



void fn_00581564(int *param_1)

{
  int iVar1;
  
  if ((char)param_1[0x37] == '\0') {
    return;
  }
  iVar1 = param_1[0x33];
  if (*(int *)(iVar1 + 0x3c) < *(int *)(iVar1 + 0x70)) {
    *(int *)(iVar1 + 0x3c) = *(int *)(iVar1 + 0x3c) + 1;
    (**(code **)(*param_1 + 0x180))(param_1,0);
    fn_0068ab44(param_1,0x1000957);
    return;
  }
  fn_0068ab44(param_1,0x100094d);
  return;
}



void fn_00581540(int param_1)

{
  fn_00689828(param_1,1);
  fn_00327a7c(*(undefined4 *)(param_1 + 0xcc));
  *(undefined1 *)(param_1 + 0xdc) = 0;
  return;
}



void fn_005814a0(int *param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  uint in_fpscr;
  undefined4 local_1c;
  float fStack_18;
  undefined4 local_14;
  
  fn_00689828(param_1,0);
  iVar2 = fn_006ba284(param_1);
  param_1[0x35] = param_2 + iVar2 * 8;
  uVar1 = (**(code **)(*param_1 + 0x178))(param_1);
  fStack_18 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
  fStack_18 = fStack_18 * -18.0;
  local_1c = 0;
  local_14 = 0;
  fn_00327a24(param_1[0x33],1,uVar1,1,&local_1c);
  *(undefined1 *)(param_1 + 0x37) = 1;
  fn_0068ab44(param_1,0x100094b);
  return;
}



void fn_005813fc(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 uVar7;
  undefined4 unaff_r6;
  
  uVar7 = *(undefined4 *)(DAT_00897804 + 0x14);
  uVar2 = (**(code **)(*param_1 + 0x17c))(param_1);
  iVar3 = fn_006e9308(param_1,uVar2);
  if (iVar3 == 0) {
    iVar3 = fn_006b2aa0(uVar7,(int)(short)uVar2);
  }
  else {
    iVar3 = fn_005c1d84(param_1,uVar2);
  }
  iVar4 = fn_0068897c(param_1[0x1c],(char *)&DAT_005c1cfc);
  iVar5 = fn_0068897c(param_1[0x1c],(char *)&DAT_005c1d04);
  iVar6 = fn_0068897c(param_1[0x1c],(char *)&DAT_005c1d0c);
  if (iVar3 < 1) {
    *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xfe;
    *(byte *)(iVar5 + 0x44) = *(byte *)(iVar5 + 0x44) & 0xfe;
    bVar1 = *(byte *)(iVar6 + 0x44) & 0xfe | 1;
  }
  else {
    *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xfe | 1;
    fn_00688c04(iVar4,iVar3,0,param_4,unaff_r4,unaff_r5,unaff_r6);
    *(byte *)(iVar5 + 0x44) = *(byte *)(iVar5 + 0x44) & 0xfe | 1;
    bVar1 = *(byte *)(iVar6 + 0x44) & 0xfe;
  }
  *(byte *)(iVar6 + 0x44) = bVar1;
  return;
}


