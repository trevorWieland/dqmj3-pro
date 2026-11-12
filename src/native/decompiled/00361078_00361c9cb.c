#include "00361078_00361c9cb.h"



void fn_00361c9c(int param_1)

{
  fn_001da39c();
  fn_0023d3f4(*(undefined4 *)(DAT_008977e0 + 0x2c),*(undefined4 *)(param_1 + 0x1a4));
  fn_0023d3f4(*(undefined4 *)(DAT_008977e0 + 0x2c),*(undefined4 *)(param_1 + 0x1a8));
  fn_001d9f9c(param_1);
  return;
}



undefined4 * fn_00361ba0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0069c2c8();
  *puVar1 = &DAT_00826dc0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  return puVar1;
}



void fn_00361a44(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = *(int *)(DAT_008977e0 + 0xa8);
  uVar1 = fn_006f7a70();
  iVar2 = fn_006f7a0c(DAT_008977e0);
  piVar3 = (int *)(**(code **)(**(int **)(iVar2 + 0x50) + 0x38))();
  iVar6 = piVar3[1];
  iVar2 = iVar6 - *piVar3 >> 0x1f;
  if ((iVar6 - *piVar3) / 0x2c + iVar2 != iVar2) {
    iVar2 = *piVar3;
    piVar3 = (int *)0x0;
    if (iVar6 != iVar2) {
      do {
        if (*(int *)(iVar6 + -4) == iVar7) {
          piVar3 = (int *)fn_001c0830(piVar3);
          iVar4 = fn_0026e5c4(0x29);
          if (iVar4 == 0) {
            iVar4 = -1;
          }
          else {
            uVar5 = fn_006f7a9c(DAT_008977e0);
            iVar4 = fn_006b77f0(uVar5,(char *)&DAT_00361b94);
            if (iVar4 == -1) {
              iVar4 = fn_002772e4(uVar5,(char *)&DAT_00361b94);
            }
          }
          fn_002fe310(uVar1,piVar3,iVar4);
          (**(code **)(*piVar3 + 0x10))(piVar3,iVar6 + -0x28);
          (**(code **)(*piVar3 + 0x14))(piVar3,iVar6 + -0x1c);
          (**(code **)(*piVar3 + 0x54))(piVar3,0);
        }
        iVar6 = iVar6 + -0x2c;
      } while (iVar6 != iVar2);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 0x54))(piVar3,1);
                    /* WARNING: Could not recover jumptable at 0x00361b84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*piVar3 + 0x138))(piVar3);
        return;
      }
    }
  }
  return;
}



undefined4 fn_003619e4(undefined4 param_1)

{
  int iVar1;
  
  if ((((**(int **)(DAT_008977e0 + 0x40) != 0) && (iVar1 = fn_006f6fc4(), iVar1 != 0)) &&
      (*(char *)(*(int *)(*(int *)(DAT_008977e0 + 0x40) + 4) + 0x20) != '\x01')) &&
     (iVar1 = fn_006c89fc(), iVar1 == 4)) {
    fn_0035e164(param_1);
  }
  return 1;
}


