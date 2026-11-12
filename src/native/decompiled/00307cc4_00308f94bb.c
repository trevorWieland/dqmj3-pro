#include "00307cc4_00308f94bb.h"



void fn_00308f94(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  
  *(short *)(param_1 + 0x48) = (short)param_2;
  uVar1 = fn_0068b0a4(param_2);
  *(undefined1 *)(param_1 + 0x4b) = uVar1;
  return;
}



byte fn_00308f5c(int param_1)

{
  byte bVar1;
  byte bVar2;
  
  if (*(char *)(param_1 + 0x52) == '\0') {
    bVar1 = *(byte *)(*(int *)(param_1 + 0x164) + 0x44);
  }
  else {
    bVar1 = *(byte *)(*(int *)(param_1 + 0x170) + 0x44);
  }
  bVar2 = bVar1 & 1;
  if ((bVar1 & 1) != 0) {
    bVar2 = 1;
  }
  return bVar2;
}



void fn_00308f34(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002c4694();
  *puVar1 = &DAT_00822068;
  return;
}



int * fn_00308e84(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = fn_006ba220();
  if (iVar1 != 0) {
    fn_0068ab44(param_1,0x100094c);
                    /* WARNING: Could not recover jumptable at 0x00308eb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    piVar2 = (int *)(**(code **)(*param_1 + 0x138))(param_1);
    return piVar2;
  }
  if (param_2 == 0) {
    fn_006899f4(param_1,0xce,0,1);
    piVar2 = (int *)fn_0068ab44(param_1,0x100094b);
    return piVar2;
  }
  if (param_2 == 1) {
    fn_006899f4(param_1,0xcf,0,1);
    piVar2 = (int *)fn_0068ab44(param_1,0x100094b);
    return piVar2;
  }
  return param_1;
}


