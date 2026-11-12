#include "0057040c_0057140caba.h"



void fn_00570844(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = fn_006ba220();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0057086c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x110))(param_1);
    return;
  }
  if (param_2 == 0) {
    if ((char)param_1[0x2c] != '\0') {
      fn_0068ab44(param_1,0x100094d);
      return;
    }
    fn_006899f4(param_1,0,0);
    fn_00689d04(param_1,0);
    iVar1 = fn_006f72c8(DAT_008977e0);
    *(undefined1 *)(iVar1 + 0x238) = 1;
    puVar2 = (undefined4 *)fn_001f74ec(param_1,0x60);
    if (puVar2 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
      do {
        if (puVar3 == &DAT_00894b34) goto LAB_00570924;
        puVar3 = (undefined4 *)*puVar3;
      } while (puVar3 != (undefined4 *)0x0);
    }
  }
  else {
    if (param_2 != 1) goto LAB_00570930;
    fn_006899f4(param_1,0,0);
    fn_00689d04(param_1,0);
    iVar1 = fn_006f72c8(DAT_008977e0);
    *(undefined1 *)(iVar1 + 0x238) = 2;
    puVar2 = (undefined4 *)fn_001f74ec(param_1,0x60);
    if (puVar2 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
      do {
        if (puVar3 == &DAT_00894b34) goto LAB_00570924;
        puVar3 = (undefined4 *)*puVar3;
      } while (puVar3 != (undefined4 *)0x0);
    }
  }
  puVar2 = (undefined4 *)0x0;
LAB_00570924:
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
LAB_00570930:
  fn_0068ab44(param_1,0x100094b);
  return;
}



void fn_00570814(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xb4,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00570aac(iVar1,param_1);
  return;
}


