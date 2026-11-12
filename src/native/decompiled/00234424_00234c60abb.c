#include "00234424_00234c60abb.h"



undefined4 * fn_00234604(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  if (piVar2 != (int *)0x0) {
    while( true ) {
      iVar1 = *piVar2;
      if (iVar1 == piVar2[1]) break;
      iVar1 = *(int *)(piVar2[1] + -4);
      if (iVar1 != 0) {
        if (*(int **)(iVar1 + 8) != (int *)0x0) {
          (**(code **)(**(int **)(iVar1 + 8) + 4))();
        }
        fn_002feef8(iVar1);
      }
      piVar2[1] = piVar2[1] + -4;
    }
    fn_001008c4(iVar1,piVar2[2] - iVar1 >> 2,0);
    fn_002feef8(piVar2);
  }
  return param_1;
}



undefined4 * fn_002345c8(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00145b00(0xc,&DAT_00812c8c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
  }
  *param_1 = puVar1;
  return param_1;
}


