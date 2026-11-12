#include "00545dac_00545dac.h"



undefined4 * fn_00545dac(undefined4 *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *in_r12;
  undefined4 *puVar9;
  
  *param_1 = &DAT_008578dc;
  puVar1 = (uint *)param_1[2];
  if ((puVar1 != (uint *)0x0) && ((~*puVar1 & 0x4000000a) != 0)) {
    puVar1 = (uint *)0x0;
  }
  if (*(char *)(param_1 + 0xa6) != '\0' && puVar1 != (uint *)0x0) {
    (**(code **)(*(int *)param_1[1] + 0xc))();
  }
  fn_00545620(param_1[1],param_1[0x9b]);
  param_1[0x9b] = 0;
  puVar4 = (undefined4 *)param_1[0x9a];
  if (puVar4 != (undefined4 *)0x0) {
    (**(code **)*puVar4)(puVar4);
    (**(code **)(*(int *)puVar4[1] + 0xc))((int *)puVar4[1],puVar4);
    param_1[0x9a] = 0;
  }
  puVar4 = (undefined4 *)param_1[0x98];
  if ((puVar4 != (undefined4 *)0x0) && (*(char *)(param_1 + 0x99) != '\0')) {
    (**(code **)*puVar4)(puVar4);
    (**(code **)(*(int *)puVar4[1] + 0xc))((int *)puVar4[1],puVar4);
  }
  puVar4 = (undefined4 *)param_1[0x96];
  if ((puVar4 != (undefined4 *)0x0) && (*(char *)(param_1 + 0x97) != '\0')) {
    (**(code **)*puVar4)(puVar4);
    (**(code **)(*(int *)puVar4[1] + 0xc))((int *)puVar4[1],puVar4);
  }
  *param_1 = &DAT_00857734;
  puVar4 = (undefined4 *)param_1[0x4c];
  if (puVar4 != (undefined4 *)0x0) {
    puVar8 = (undefined4 *)puVar4[3];
    for (puVar5 = (undefined4 *)puVar4[2]; puVar5 != puVar8; puVar5 = puVar5 + 1) {
      piVar7 = (int *)*puVar5;
      piVar6 = (int *)piVar7[1];
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar7 + 4))(piVar7);
        (**(code **)(*piVar6 + 0xc))(piVar6,piVar7);
      }
    }
    puVar4[3] = puVar4[2];
    if ((int *)puVar4[1] != (int *)0x0 && puVar4[2] != 0) {
      (**(code **)(*(int *)puVar4[1] + 0xc))();
    }
    (**(code **)(*(int *)*puVar4 + 0xc))((int *)*puVar4,puVar4);
    param_1[0x4c] = 0;
  }
  *param_1 = &DAT_00857920;
  iVar3 = param_1[3];
  if (iVar3 != 0) {
    puVar4 = *(undefined4 **)(iVar3 + 0x18);
    puVar5 = *(undefined4 **)(iVar3 + 0x1c);
    while( true ) {
      if (puVar4 != puVar5) {
        in_r12 = (undefined4 *)*puVar4;
      }
      if (puVar4 == puVar5 || in_r12 == param_1) break;
      puVar4 = puVar4 + 1;
    }
    if (puVar4 != puVar5) {
      puVar8 = puVar4 + 1;
      if (puVar8 < puVar5) {
        iVar2 = (int)puVar5 - (int)puVar8;
        if (0 < iVar2) {
          puVar5 = puVar4;
          if (iVar2 * 0x20000000 < 0) {
            puVar9 = (undefined4 *)*puVar8;
            puVar8 = puVar4 + 2;
            if (puVar9 != param_1) {
              puVar5 = puVar4 + 1;
              *puVar4 = puVar9;
            }
          }
          puVar4 = puVar5;
          for (iVar2 = iVar2 >> 3; iVar2 != 0; iVar2 = iVar2 + -1) {
            puVar5 = puVar4;
            if ((undefined4 *)*puVar8 != param_1) {
              puVar5 = puVar4 + 1;
              *puVar4 = (undefined4 *)*puVar8;
            }
            puVar9 = puVar8 + 1;
            puVar8 = puVar8 + 2;
            puVar4 = puVar5;
            if ((undefined4 *)*puVar9 != param_1) {
              puVar4 = puVar5 + 1;
              *puVar5 = (undefined4 *)*puVar9;
            }
          }
        }
      }
      else {
        while (puVar8 != puVar5) {
          puVar9 = (undefined4 *)*puVar8;
          puVar8 = puVar8 + 1;
          if (puVar9 != param_1) {
            *puVar4 = puVar9;
            puVar4 = puVar4 + 1;
          }
        }
      }
    }
    puVar5 = *(undefined4 **)(iVar3 + 0x1c);
    *(undefined4 **)(iVar3 + 0x1c) = puVar4;
    if (puVar5 != puVar4) {
      param_1[3] = 0;
    }
  }
  puVar4 = (undefined4 *)param_1[0xd];
  if (puVar4 != (undefined4 *)0x0) {
    puVar8 = (undefined4 *)puVar4[3];
    for (puVar5 = (undefined4 *)puVar4[2]; puVar5 != puVar8; puVar5 = puVar5 + 1) {
      piVar7 = (int *)*puVar5;
      piVar6 = (int *)piVar7[1];
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar7 + 4))(piVar7);
        (**(code **)(*piVar6 + 0xc))(piVar6,piVar7);
      }
    }
    puVar4[3] = puVar4[2];
    if ((int *)puVar4[1] != (int *)0x0 && puVar4[2] != 0) {
      (**(code **)(*(int *)puVar4[1] + 0xc))();
    }
    (**(code **)(*(int *)*puVar4 + 0xc))((int *)*puVar4,puVar4);
    param_1[0xd] = 0;
  }
  puVar4 = (undefined4 *)param_1[10];
  if ((puVar4 != (undefined4 *)0x0) && (*(char *)(param_1 + 0xb) != '\0')) {
    (**(code **)*puVar4)(puVar4);
    (**(code **)(*(int *)puVar4[1] + 0xc))((int *)puVar4[1],puVar4);
  }
  piVar7 = (int *)param_1[6];
  piVar6 = (int *)param_1[7];
  if (piVar7 < piVar6) {
    iVar3 = (int)piVar6 - (int)piVar7;
    piVar6 = (int *)&DAT_00000001;
    iVar3 = iVar3 >> 2;
    if (1 < iVar3 + 1) {
      do {
        iVar2 = *piVar7;
        piVar6 = (int *)((int)piVar6 + 1);
        piVar7 = piVar7 + 1;
        if (iVar2 != 0) {
          *(undefined4 *)(iVar2 + 0xc) = 0;
        }
      } while ((int)piVar6 < iVar3 + 1);
    }
  }
  else {
    while (piVar7 != piVar6) {
      iVar3 = *piVar7;
      piVar7 = piVar7 + 1;
      if (iVar3 != 0) {
        *(undefined4 *)(iVar3 + 0xc) = 0;
      }
    }
  }
  param_1[7] = param_1[6];
  piVar7 = (int *)param_1[5];
  if (piVar7 != (int *)0x0) {
    piVar6 = (int *)param_1[6];
  }
  if (piVar7 != (int *)0x0 && piVar6 != (int *)0x0) {
    (**(code **)(*piVar7 + 0xc))();
  }
  return param_1;
}


