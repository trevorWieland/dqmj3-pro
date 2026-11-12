#include "0057a634_0057af20bba.h"



void fn_0057ac5c(int *param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  undefined4 local_880 [266];
  undefined1 auStack_458 [1064];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [8];
  
  iVar2 = fn_006ba284();
  iVar3 = fn_006ba274(param_1);
  piVar8 = (int *)param_1[0x3a];
  uVar7 = iVar2 * iVar3 + param_2;
  uVar4 = piVar8[1] - *piVar8;
  iVar2 = (int)((longlong)(int)uVar4 * -0x99fc267 + ((ulonglong)uVar4 << 0x20) >> 0x20);
  if ((uint)((iVar2 >> 10) - (iVar2 >> 0x1f)) <= uVar7) {
    iVar2 = (int)((longlong)(int)uVar4 * -0x99fc267 + ((ulonglong)uVar4 << 0x20) >> 0x20);
    fn_002ff628(9,&DAT_008c761b,&DAT_008c761b,uVar7,(iVar2 >> 10) - (iVar2 >> 0x1f));
  }
  fn_0017821c(local_880,*piVar8 + uVar7 * 0x428,0x428);
  fn_0020bbc4(auStack_30,local_880[0]);
  iVar2 = fn_006bf5bc(auStack_2c);
  iVar3 = fn_006c0028(auStack_2c);
  if (iVar3 <= iVar2) {
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  piVar8 = (int *)param_1[0x3a];
  uVar9 = param_1[0x42];
  uVar4 = piVar8[1] - *piVar8;
  iVar2 = (int)((longlong)(int)uVar4 * -0x99fc267 + ((ulonglong)uVar4 << 0x20) >> 0x20);
  if ((uint)((iVar2 >> 10) - (iVar2 >> 0x1f)) <= uVar9) {
    iVar2 = (int)((longlong)(int)uVar4 * -0x99fc267 + ((ulonglong)uVar4 << 0x20) >> 0x20);
    fn_002ff628(9,&DAT_008c761b,&DAT_008c761b,uVar9,(iVar2 >> 10) - (iVar2 >> 0x1f));
  }
  fn_0017821c(auStack_458,*piVar8 + uVar9 * 0x428,0x428);
  sVar1 = *(short *)(param_1[0x41] + 0x14);
  uVar5 = fn_0057a228(param_1,param_1[0x42]);
  uVar6 = fn_0057a228(param_1,uVar7);
  fn_0035c980(param_1 + 0x39,uVar6,uVar5,(int)sVar1,1,0);
  (**(code **)(*param_1 + 0x150))(param_1,param_2,local_880[0]);
  fn_0057a634(param_1);
  fn_00689efc(param_1,0x2d,0);
  fn_0025f3f4(param_1[0x40],local_880[0]);
  fn_0035c240(param_1 + 0x39);
  fn_0035be50(param_1 + 0x39);
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



void fn_0057ac2c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x140,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0057af20(iVar1,param_1);
  return;
}


