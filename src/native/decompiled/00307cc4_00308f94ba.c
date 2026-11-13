#include "00307cc4_00308f94ba.h"



void fn_00308e54(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xb0,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00308f34(iVar1,param_1);
  return;
}



void fn_00308a48(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = fn_0022cdf0();
  if (iVar1 != 0) {
    fn_00308790(param_1,0);
    puVar3 = *(undefined4 **)(param_1 + 0x98);
    if (puVar3 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)(**(code **)*puVar3)(puVar3);
      do {
        if (puVar2 == &DAT_00895ad8) goto LAB_00308aa4;
        puVar2 = (undefined4 *)*puVar2;
      } while (puVar2 != (undefined4 *)0x0);
    }
    puVar3 = (undefined4 *)0x0;
LAB_00308aa4:
    if (*(short *)(param_1 + 0x9c) != *(short *)(puVar3 + 7)) {
      *(short *)(param_1 + 0x9c) = *(short *)(puVar3 + 7);
    }
  }
  return;
}



undefined4 fn_003088fc(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  param_1[0x1f] = 4;
  (**(code **)(*param_1 + 0x118))(param_1,DAT_00895adc,DAT_00895ae0,DAT_00895ae4);
  iVar1 = fn_00178f9c(param_1[0x19],param_1[0x1b]);
  iVar1 = fn_0068897c(*(undefined4 *)(iVar1 + 0x10),(char *)&DAT_00308a00);
  param_1[0x28] = iVar1;
  fn_00308790(param_1,1);
  puVar3 = (undefined4 *)param_1[0x26];
  if (puVar3 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar2 == &DAT_00895ad8) goto LAB_0030898c;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_0030898c:
  if ((short)param_1[0x27] != *(short *)(puVar3 + 7)) {
    *(short *)(param_1 + 0x27) = *(short *)(puVar3 + 7);
  }
  puVar3 = (undefined4 *)param_1[0x26];
  if (puVar3 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar2 == &DAT_00895ad8) goto LAB_003089d0;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_003089d0:
  if (0.0 <= (float)puVar3[8]) {
    uVar4 = VectorFloatToUnsigned(puVar3[8],3);
    *(char *)(param_1[0x24] + 0x45) = (char)uVar4;
  }
  return 1;
}



undefined4 * fn_003085d0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0037fcf4();
  *puVar1 = &DAT_00821bfc;
  puVar1[0x2a] = 0;
  fn_0037f918(puVar1,L"rom:/data/Layout/menu/colosseum_reception/upper/course_info.arc",
               (char *)&DAT_0030861c,&DAT_00308614);
  fn_003083fc(puVar1);
  return puVar1;
}


