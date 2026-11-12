#include "00422178_00422880bb.h"



void fn_00422880(undefined4 param_1,int *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00422898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x2c))(param_2,0x31,0);
  return;
}



void fn_0042278c(undefined4 param_1,int *param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  bool bVar5;
  
  iVar1 = fn_00174828(DAT_008977e4);
  iVar2 = (int)*param_3;
  uVar4 = iVar2 - 0x10;
  bVar5 = 3 < uVar4;
  if (bVar5) {
    uVar4 = iVar2 - 0x18;
  }
  if ((bVar5 && 3 < uVar4) && (iVar2 != 0x20 && iVar2 != 0x22)) {
    uVar3 = 0x30;
  }
  else if (*(char *)(iVar1 + iVar2 * 0x418 + -0x3c6c) == '\0') {
    uVar3 = 0x2f;
  }
  else {
    uVar3 = 0x31;
  }
                    /* WARNING: Could not recover jumptable at 0x004227f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x2c))(param_2,uVar3,0);
  return;
}



undefined4 * fn_004226c4(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  *puVar1 = &DAT_0083ac78;
  puVar1[0x19] = 0;
  iVar2 = fn_00145b00(0xd8,&DAT_00812c8c);
  piVar3 = (int *)0x0;
  if (iVar2 != 0) {
    piVar3 = (int *)fn_00246494();
  }
  puVar1[0x19] = piVar3;
  uVar4 = fn_001c2338(DAT_008977e4);
  uVar5 = fn_001c2344(DAT_008977e4);
  (**(code **)(*piVar3 + 8))(piVar3,uVar5,uVar4,0);
  return puVar1;
}



void fn_00422670(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_10;
  
  local_10 = param_4;
  iVar1 = fn_006b53cc(*(undefined4 *)(param_1 + 100));
  if (iVar1 != 0) {
    local_10 = 0;
    fn_00163988(DAT_0089780c,&local_10,1);
  }
  (**(code **)(**(int **)(param_1 + 100) + 0xc))();
  fn_0068a5a8(param_1);
  return;
}


