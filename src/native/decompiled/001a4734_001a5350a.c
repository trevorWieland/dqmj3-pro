#include "001a4734_001a5350a.h"



void fn_001a4a3c(undefined2 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((int)param_1 + 7) = 0;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  return;
}



void fn_001a49fc(undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  
  puVar2 = (undefined1 *)0x0;
  iVar1 = (**(code **)(*param_2 + 0x50))(param_2);
  if (iVar1 == 1) {
    puVar2 = &LAB_00561590;
  }
  *param_1 = 0;
  param_1[1] = puVar2;
  param_1[2] = 0;
  return;
}



int fn_001a49c8(uint *param_1,uint param_2)

{
  int iVar1;
  
  if ((param_2 < *param_1) && ((short)param_1[param_2 * 2 + 1] == 0x4102)) {
    iVar1 = (int)param_1 + param_1[param_2 * 2 + 2];
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



int fn_001a49b0(short *param_1)

{
  int iVar1;
  
  if (*param_1 == 0x300) {
    iVar1 = (int)param_1 + *(int *)(param_1 + 2);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



undefined4 * fn_001a4734(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  uint local_40;
  int *local_3c;
  uint local_38;
  int *local_34;
  uint local_30;
  int *local_2c;
  
  iVar7 = *(int *)(param_1 + 0x14);
  iVar8 = *(int *)(param_1 + 0x24);
  puVar2 = (undefined4 *)fn_002fece8(0x2c);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = 0;
    puVar2[2] = 0;
    iVar3 = 4;
    *puVar2 = &DAT_00850dac;
    if (4 < iVar8) {
      do {
        iVar3 = iVar3 * 2;
      } while (iVar3 < iVar8);
    }
    fn_0019b390(puVar2);
    puVar2[10] = 0;
    puVar2[5] = iVar7;
    puVar2[6] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    fn_0019e8c4(iVar7 + 0x44,puVar2);
  }
  puVar2[6] = 0;
  local_40 = 0x1000001;
  local_3c = (int *)0x0;
  local_38 = 0x1000001;
  local_34 = (int *)0x0;
  piVar5 = (int *)0x0;
  do {
    local_30 = 0x5000002;
    local_2c = piVar5;
    iVar7 = fn_001a2b2c(&local_30);
    if (iVar7 < *(int *)(param_1 + 0x24)) {
      do {
        if (*(int *)(*(int *)(param_1 + 0x20) + iVar7 * 0x14 + 8) != 0x1000001) {
          puVar6 = (uint *)(*(int *)(param_1 + 0x20) + iVar7 * 0x14);
          piVar5 = (int *)puVar6[3];
          uVar4 = puVar6[2];
          if ((uVar4 & 0x8000000) != 0) {
            piVar5[1] = piVar5[1] + 1;
          }
          uVar1 = local_40 & 0x8000000;
          local_40 = uVar4;
          if ((uVar1 != 0) && (iVar8 = local_3c[1], local_3c[1] = iVar8 + -1, iVar8 + -1 == 0)) {
            iVar8 = *local_3c;
            local_3c = piVar5;
            (**(code **)(iVar8 + 8))();
            piVar5 = local_3c;
          }
          local_3c = piVar5;
          uVar4 = *puVar6;
          piVar5 = (int *)puVar6[1];
          if ((uVar4 & 0x8000000) != 0) {
            piVar5[1] = piVar5[1] + 1;
          }
          uVar1 = local_38 & 0x8000000;
          local_38 = uVar4;
          if ((uVar1 != 0) && (iVar8 = local_34[1], local_34[1] = iVar8 + -1, iVar8 + -1 == 0)) {
            iVar8 = *local_34;
            local_34 = piVar5;
            (**(code **)(iVar8 + 8))();
            piVar5 = local_34;
          }
          local_34 = piVar5;
          piVar5 = (int *)(iVar7 + 1);
          goto LAB_001a48ec;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(param_1 + 0x24));
    }
    piVar5 = (int *)&DAT_ffffffff;
LAB_001a48ec:
    if (((local_30 & 0x8000000) != 0) &&
       (iVar7 = local_2c[1], local_2c[1] = iVar7 + -1, iVar7 + -1 == 0)) {
      (**(code **)(*local_2c + 8))();
    }
    if (piVar5 == (int *)&DAT_ffffffff) {
      fn_0019e2e8(puVar2,*(undefined4 *)(param_1 + 0x18));
      if (((local_38 & 0x8000000) != 0) &&
         (iVar7 = local_34[1], local_34[1] = iVar7 + -1, iVar7 + -1 == 0)) {
        (**(code **)(*local_34 + 8))();
      }
      if (((local_40 & 0x8000000) != 0) &&
         (iVar7 = local_3c[1], local_3c[1] = iVar7 + -1, iVar7 + -1 == 0)) {
        (**(code **)(*local_3c + 8))();
      }
      return puVar2;
    }
    fn_0019b728(puVar2,&local_40,&local_38);
  } while( true );
}


