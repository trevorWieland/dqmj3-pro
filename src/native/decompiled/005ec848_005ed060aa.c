#include "005ec848_005ed060aa.h"



undefined4 * fn_005ec848(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  *param_1 = &DAT_00858d38;
  if (param_1[0x52] != 0) {
    fn_005ec2d0();
    fn_002feef8();
    param_1[0x52] = 0;
  }
  *param_1 = &DAT_00857734;
  puVar3 = (undefined4 *)param_1[0x4c];
  if (puVar3 != (undefined4 *)0x0) {
    puVar7 = (undefined4 *)puVar3[3];
    for (puVar4 = (undefined4 *)puVar3[2]; puVar4 != puVar7; puVar4 = puVar4 + 1) {
      piVar6 = (int *)*puVar4;
      piVar5 = (int *)piVar6[1];
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar6 + 4))(piVar6);
        (**(code **)(*piVar5 + 0xc))(piVar5,piVar6);
      }
    }
    puVar3[3] = puVar3[2];
    if ((int *)puVar3[1] != (int *)0x0 && puVar3[2] != 0) {
      (**(code **)(*(int *)puVar3[1] + 0xc))();
    }
    (**(code **)(*(int *)*puVar3 + 0xc))((int *)*puVar3,puVar3);
    param_1[0x4c] = 0;
  }
  *param_1 = &DAT_00857920;
  iVar1 = param_1[3];
  if (iVar1 != 0) {
    puVar4 = *(undefined4 **)(iVar1 + 0x18);
    puVar7 = *(undefined4 **)(iVar1 + 0x1c);
    while( true ) {
      if (puVar4 != puVar7) {
        puVar3 = (undefined4 *)*puVar4;
      }
      if (puVar4 == puVar7 || puVar3 == param_1) break;
      puVar4 = puVar4 + 1;
    }
    if (puVar4 != puVar7) {
      puVar3 = puVar4 + 1;
      if (puVar3 < puVar7) {
        iVar2 = (int)puVar7 - (int)puVar3;
        if (0 < iVar2) {
          puVar7 = puVar4;
          if (iVar2 * 0x20000000 < 0) {
            puVar8 = (undefined4 *)*puVar3;
            puVar3 = puVar4 + 2;
            if (puVar8 != param_1) {
              puVar7 = puVar4 + 1;
              *puVar4 = puVar8;
            }
          }
          puVar4 = puVar7;
          for (iVar2 = iVar2 >> 3; iVar2 != 0; iVar2 = iVar2 + -1) {
            puVar7 = puVar4;
            if ((undefined4 *)*puVar3 != param_1) {
              puVar7 = puVar4 + 1;
              *puVar4 = (undefined4 *)*puVar3;
            }
            puVar8 = puVar3 + 1;
            puVar3 = puVar3 + 2;
            puVar4 = puVar7;
            if ((undefined4 *)*puVar8 != param_1) {
              puVar4 = puVar7 + 1;
              *puVar7 = (undefined4 *)*puVar8;
            }
          }
        }
      }
      else {
        while (puVar3 != puVar7) {
          puVar8 = (undefined4 *)*puVar3;
          puVar3 = puVar3 + 1;
          if (puVar8 != param_1) {
            *puVar4 = puVar8;
            puVar4 = puVar4 + 1;
          }
        }
      }
    }
    puVar3 = *(undefined4 **)(iVar1 + 0x1c);
    *(undefined4 **)(iVar1 + 0x1c) = puVar4;
    if (puVar3 != puVar4) {
      param_1[3] = 0;
    }
  }
  puVar3 = (undefined4 *)param_1[0xd];
  if (puVar3 != (undefined4 *)0x0) {
    puVar7 = (undefined4 *)puVar3[3];
    for (puVar4 = (undefined4 *)puVar3[2]; puVar4 != puVar7; puVar4 = puVar4 + 1) {
      piVar6 = (int *)*puVar4;
      piVar5 = (int *)piVar6[1];
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar6 + 4))(piVar6);
        (**(code **)(*piVar5 + 0xc))(piVar5,piVar6);
      }
    }
    puVar3[3] = puVar3[2];
    if ((int *)puVar3[1] != (int *)0x0 && puVar3[2] != 0) {
      (**(code **)(*(int *)puVar3[1] + 0xc))();
    }
    (**(code **)(*(int *)*puVar3 + 0xc))((int *)*puVar3,puVar3);
    param_1[0xd] = 0;
  }
  puVar3 = (undefined4 *)param_1[10];
  if ((puVar3 != (undefined4 *)0x0) && (*(char *)(param_1 + 0xb) != '\0')) {
    (**(code **)*puVar3)(puVar3);
    (**(code **)(*(int *)puVar3[1] + 0xc))((int *)puVar3[1],puVar3);
  }
  piVar6 = (int *)param_1[6];
  piVar5 = (int *)param_1[7];
  if (piVar6 < piVar5) {
    iVar1 = (int)piVar5 - (int)piVar6;
    piVar5 = (int *)&DAT_00000001;
    iVar1 = iVar1 >> 2;
    if (1 < iVar1 + 1) {
      do {
        iVar2 = *piVar6;
        piVar5 = (int *)((int)piVar5 + 1);
        piVar6 = piVar6 + 1;
        if (iVar2 != 0) {
          *(undefined4 *)(iVar2 + 0xc) = 0;
        }
      } while ((int)piVar5 < iVar1 + 1);
    }
  }
  else {
    while (piVar6 != piVar5) {
      iVar1 = *piVar6;
      piVar6 = piVar6 + 1;
      if (iVar1 != 0) {
        *(undefined4 *)(iVar1 + 0xc) = 0;
      }
    }
  }
  param_1[7] = param_1[6];
  piVar6 = (int *)param_1[5];
  if (piVar6 != (int *)0x0) {
    piVar5 = (int *)param_1[6];
  }
  if (piVar6 != (int *)0x0 && piVar5 != (int *)0x0) {
    (**(code **)(*piVar6 + 0xc))();
  }
  return param_1;
}


