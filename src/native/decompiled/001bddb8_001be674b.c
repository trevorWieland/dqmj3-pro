#include "001bddb8_001be674b.h"



void fn_001be674(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,int param_6)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  int aiStack_138 [64];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  iVar3 = 0x40;
  if (param_6 == 0xb) {
    iVar7 = 4;
  }
  else {
    iVar7 = 2;
  }
  local_38 = iVar7;
  local_34 = param_3;
  local_30 = param_4;
  piVar2 = aiStack_138;
  iVar6 = 0;
  do {
    iVar3 = iVar3 + -1;
    *piVar2 = ((7 - (&DAT_007e0b18)[iVar6 * 2]) * param_3 + (&DAT_007e0b14)[iVar6 * 2]) * iVar7;
    piVar2 = piVar2 + 1;
    iVar6 = iVar6 + 1;
  } while (iVar3 != 0);
  iVar3 = 0;
  if (0 < local_30) {
    local_2c = (int)(local_34 + 7 + ((uint)(local_34 + 7 >> 0x1f) >> 0x1d)) >> 3;
    do {
      iVar6 = 0;
      for (iVar7 = 0; iVar7 < local_2c; iVar7 = iVar7 + 1) {
        iVar4 = 0x40;
        puVar8 = (undefined1 *)(param_2 + iVar6);
        piVar2 = aiStack_138;
        do {
          iVar4 = iVar4 + -1;
          puVar5 = (undefined1 *)
                   (*piVar2 + param_1 +
                   local_38 * 8 * iVar7 + ((local_30 - iVar3) + -8) * local_34 * local_38);
          *puVar5 = *puVar8;
          puVar1 = puVar8 + 1;
          puVar8 = puVar8 + 2;
          puVar5[1] = *puVar1;
          piVar2 = piVar2 + 1;
        } while (iVar4 != 0);
        iVar6 = iVar6 + 0x80;
      }
      iVar3 = iVar3 + 8;
      param_2 = param_2 + local_2c * 0x80;
    } while (iVar3 < local_30);
  }
  return;
}



void fn_001be628(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = *param_2;
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  if (*(char *)(iVar4 + 0x22) == '\x02') {
    fn_004b2fe4(iVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x001be670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar3 + 0xc))(piVar3);
  return;
}



void fn_001be608(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  while (*(char *)(param_1 + iVar1) != 0 && *(char *)(param_1 + iVar1) != param_2) {
    iVar1 = iVar1 + 1;
  }
  return;
}


