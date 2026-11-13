#include "single_006dcd40_r.h"


extern undefined4 SupervisorCall;

uint * fn_006dcd40(int param_1)

{
  uint *puVar1;
  uint uVar2;
  uint *unaff_r4;
  bool bVar3;
  bool bVar4;
  undefined8 uVar5;
  
  uVar5 = (**(code **)(**(int **)(param_1 + 600) + 0x14))();
  uVar2 = (uint)((ulonglong)uVar5 >> 0x20);
  puVar1 = (uint *)uVar5;
  bVar3 = puVar1 != (uint *)0x0;
  if (bVar3) {
    uVar2 = *puVar1;
  }
  bVar4 = (uVar2 & 0x80000000) != 0;
  if (bVar3 && bVar4) {
    unaff_r4 = puVar1;
  }
  if (!bVar3 || !bVar4) {
    unaff_r4 = (uint *)0x0;
  }
  puVar1 = (uint *)(**(code **)(**(int **)(param_1 + 600) + 0x14))();
  if ((puVar1 != (uint *)0x0) && ((*puVar1 & 0x40000000) == 0)) {
    puVar1 = (uint *)0x0;
  }
  if (unaff_r4 == (uint *)0x0) {
    if (puVar1 == (uint *)0x0) {
      puVar1 = (uint *)&SupervisorCall;
    }
    else {
      puVar1 = puVar1 + 2;
    }
  }
  else {
    puVar1 = unaff_r4 + 2;
  }
  return puVar1;
}


