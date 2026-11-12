#include "005f3dc8_005f4564ab.h"



void fn_005f437c(void)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  if (DAT_0089a508 != '\0') {
    puVar2 = (undefined4 *)fn_00124ffc();
    iVar3 = (**(code **)*puVar2)(puVar2,4,4);
    cVar1 = '\0';
    if (iVar3 != 0) {
      cVar1 = DAT_0089a508;
    }
    if (iVar3 != 0 && cVar1 != '\0') {
      iVar4 = fn_00124ffc();
      fn_0014e774(*(undefined4 *)(iVar4 + 4),iVar3);
      piVar5 = (int *)fn_00124ffc();
                    /* WARNING: Could not recover jumptable at 0x005f43e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar5 + 4))(piVar5,iVar3);
      return;
    }
  }
  return;
}



undefined4 fn_005f4344(uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = fn_0015e284();
  if (uVar1 <= param_1) {
    iVar2 = fn_0015e284();
    iVar3 = fn_0015e218();
    if (param_1 < (uint)(iVar3 + iVar2)) {
      return 1;
    }
  }
  return 0;
}



undefined4 fn_005f430c(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1 < 0x8000000) || (iVar1 = fn_001066ac(), iVar1 + 0x8000000U <= param_1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


