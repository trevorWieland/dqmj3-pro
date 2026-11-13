#include "00442604_00443f4cbb.h"



void fn_00443f4c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00746624();
  *puVar1 = &DAT_0083e104;
  return;
}



uint fn_00443e84(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar7 = 1;
  uVar8 = *(uint *)(*(int *)(param_1 + 8) + 8);
  uVar6 = 0;
  if (uVar8 != 0) {
    do {
      iVar1 = fn_0077f778(param_1);
      if (iVar1 == 0) {
        iVar1 = fn_0066e28c(DAT_00898840,uVar6,1);
        piVar3 = (int *)fn_0013d4ec();
        if (iVar1 == *piVar3) {
          uVar2 = 1;
        }
        else {
          uVar4 = fn_0077f768(param_1);
          uVar5 = fn_006b6530(*(undefined4 *)(param_1 + 8),param_2,uVar4);
          uVar2 = fn_006b6530(*(undefined4 *)(param_1 + 8),param_2,uVar6);
          uVar2 = uVar2 & uVar5;
        }
      }
      else {
        uVar2 = 0;
      }
      uVar6 = uVar6 + 1;
      uVar7 = uVar7 & uVar2;
    } while (uVar6 < uVar8);
  }
  return uVar7;
}



void fn_00443e54(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002e6a94();
  puVar1[0x27] = 0;
  *puVar1 = &DAT_0083dfe0;
  return;
}


