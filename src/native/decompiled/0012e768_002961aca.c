#include "0012e768_002961aca.h"



void fn_001463c0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = DAT_008bfab0;
  if (DAT_008bfae0 == 0) {
    return;
  }
  iVar3 = 0;
LAB_001463e4:
  iVar4 = *(int *)(DAT_008bfae0 + iVar3 * 4);
joined_r0x001463f0:
  iVar1 = iVar4;
  if (iVar1 == 0) goto LAB_001464a4;
  iVar4 = *(int *)(iVar1 + 0xc);
  if (*(int *)(iVar1 + 4) == 0) {
    if (*(int *)(iVar1 + 8) == 0) goto joined_r0x0014644c;
    fn_00158400(iVar1);
    if (DAT_0089a524 == (code *)0x0) goto joined_r0x001463f0;
    (*DAT_0089a524)(0x10000,0x100,0,*(undefined4 *)(iVar1 + 8));
  }
  else {
    if (*(int *)(iVar1 + 4) != 1) goto joined_r0x001463f0;
    if (*(int *)(iVar1 + 8) != 0) {
      if (DAT_0089a524 != (code *)0x0) {
        (*DAT_0089a524)(0x10000,0x100,0);
        goto joined_r0x0014644c;
      }
      goto joined_r0x001463f0;
    }
  }
joined_r0x0014644c:
  if (DAT_0089a524 != (code *)0x0) {
    (*DAT_0089a524)(0x10000,0x100,0,iVar1);
  }
  goto joined_r0x001463f0;
LAB_001464a4:
  iVar3 = iVar3 + 1;
  if (0x1ff < iVar3) {
    if (DAT_0089a524 != (code *)0x0) {
      (*DAT_0089a524)(0x10000,0x100,0,*(undefined4 *)(DAT_008bfae0 + 0x800));
    }
    *(undefined4 *)(iVar2 + 0x5dc) = 0;
    *(undefined4 *)(iVar2 + 0x5d8) = 0;
    DAT_008bfae0 = 0;
    return;
  }
  goto LAB_001463e4;
}



undefined4 fn_0012e768(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  
  local_10 = param_4;
  iVar1 = fn_00157fb0(param_1,0xffffffff,&local_10);
  if (iVar1 < 0) {
    uVar2 = fn_001581d0(param_1,&DAT_00148920);
    return uVar2;
  }
  uVar2 = (**(code **)(*DAT_00898898 + 0x14))(DAT_00898898,local_10);
  fn_001580cc(param_1,uVar2);
  return 1;
}


