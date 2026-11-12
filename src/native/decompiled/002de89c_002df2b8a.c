#include "002de89c_002df2b8a.h"



void fn_002decec(int param_1)

{
  if (*(char *)(param_1 + 0xfc) == '\0') {
    fn_00362e24(param_1);
    return;
  }
  return;
}



void fn_002deb70(int *param_1,undefined4 param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar2 = fn_006ba284();
  iVar3 = (**(code **)(*(int *)param_1[0x27] + 0x5c))();
  iVar3 = iVar3 + param_1[0x40] * 10;
  iVar4 = param_1[0x3d];
  if ((iVar3 < (short)(*(int *)(iVar4 + 8) - *(int *)(iVar4 + 4) >> 1)) &&
     ((char)param_1[0x41] != '\0')) {
    uVar5 = fn_002b1390(iVar4,(int)(short)iVar3);
    param_1[0x40] = iVar2;
    fn_002ddadc(param_1[0x3d],uVar5);
  }
  sVar1 = fn_006ba284(param_1);
  iVar2 = fn_002b1390(param_1[0x3d],(int)(short)((short)param_2 + sVar1 * 10));
  param_1[0x3e] = iVar2;
  if (iVar2 == 0x40) {
    iVar2 = fn_002de6e4(param_1);
    if (iVar2 != 0) goto LAB_002dec34;
  }
  else if ((iVar2 == 0x45) && (**(int **)(DAT_008977e0 + 0x40) != 0)) {
    uVar5 = fn_0022f584(DAT_00891d18,0);
    fn_0036c140(param_1[0x17],uVar5);
LAB_002dec34:
                    /* WARNING: Could not recover jumptable at 0x002dec48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x144))(param_1,3);
    return;
  }
  *(undefined4 *)(param_1[0x3c] + 0x14) = param_2;
  iVar2 = param_1[0x3c];
  uVar5 = fn_006ba284(param_1);
  *(undefined4 *)(iVar2 + 0x10) = uVar5;
  *(int *)(param_1[0x3c] + 0x1c) = param_1[0x3e];
  *(undefined1 *)(param_1[0x3c] + 0xc) = *(undefined1 *)((int)param_1 + 0xfd);
  fn_0068ab44(param_1,0x100094b);
  fn_00689824(param_1,0);
  *(undefined1 *)(param_1 + 0x3f) = 1;
  return;
}



void fn_002deb40(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x108,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_002defa8(iVar1,param_1);
  return;
}



void fn_002dea20(void)

{
                    /* WARNING: Subroutine does not return */
  fn_00363130();
}



void fn_002de89c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar1 = fn_006ba284();
  iVar2 = (**(code **)(**(int **)(param_1 + 0x9c) + 0x5c))();
  iVar2 = iVar2 + *(int *)(param_1 + 0x100) * 10;
  iVar3 = *(int *)(param_1 + 0xf4);
  if ((iVar2 < (short)(*(int *)(iVar3 + 8) - *(int *)(iVar3 + 4) >> 1)) &&
     (*(char *)(param_1 + 0x104) != '\0')) {
    uVar4 = fn_002b1390(iVar3,(int)(short)iVar2);
    *(undefined4 *)(param_1 + 0x100) = uVar1;
    fn_002ddadc(*(undefined4 *)(param_1 + 0xf4),uVar4);
  }
  fn_00363128(param_1);
  fn_003af0fc(*(undefined4 *)(param_1 + 0xf0));
  fn_00689824(param_1,0);
  *(undefined1 *)(param_1 + 0xfc) = 2;
  fn_006f72b4(DAT_008977e0);
  return;
}


