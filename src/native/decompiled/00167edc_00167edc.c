#include "00167edc_00167edc.h"



undefined1 * fn_00167edc(int *param_1,undefined1 *param_2,undefined1 *param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  
  puVar7 = param_2;
  for (; param_2 != (undefined1 *)0x0; param_2 = *(undefined1 **)(param_2 + 8)) {
    puVar6 = (undefined1 *)param_1[1];
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = (undefined1 *)param_1[2];
      if (puVar6 == (undefined1 *)param_1[3]) {
        if (*param_1 == 0) {
          uVar8 = 0x20;
        }
        else {
          uVar1 = *(uint *)(*param_1 + 4);
          uVar5 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
          uVar8 = uVar1 + 0x20;
          if (uVar1 + 0x20 <= uVar5) {
            uVar8 = uVar5;
          }
        }
        piVar2 = (int *)fn_0015ece0(0xc);
        iVar3 = fn_0015ece0(uVar8 << 5);
        piVar2[2] = iVar3;
        *piVar2 = *param_1;
        piVar2[1] = uVar8;
        *param_1 = (int)piVar2;
        puVar6 = (undefined1 *)piVar2[2];
        param_1[3] = (int)(puVar6 + uVar8 * 0x20);
        param_1[2] = (int)(puVar6 + 0x20);
      }
      else {
        param_1[2] = (int)(puVar6 + 0x20);
      }
    }
    else {
      param_1[1] = *(int *)(puVar6 + 0xc);
    }
    *(undefined4 *)(puVar6 + 4) = 0;
    *(undefined4 *)(puVar6 + 8) = 0;
    *(undefined4 *)(puVar6 + 0xc) = 0;
    *puVar6 = 0;
    if ((undefined4 *)(puVar6 + 0x10) != (undefined4 *)0x0) {
      *(undefined **)(puVar6 + 0x10) = &DAT_00855a94;
      fn_0015e6f0(puVar6 + 0x14,*(undefined4 *)(param_2 + 0x14));
      *(undefined **)(puVar6 + 0x18) = &DAT_00855a94;
      fn_0015e6f0(puVar6 + 0x1c,*(undefined4 *)(param_2 + 0x1c));
    }
    *(undefined1 **)(param_3 + 8) = puVar6;
    *(undefined1 **)(puVar6 + 4) = param_3;
    if (puVar7 == param_2) {
      puVar7 = puVar6;
    }
    *puVar6 = *param_2;
    uVar4 = fn_00167edc(param_1,*(undefined4 *)(param_2 + 0xc),puVar6);
    *(undefined4 *)(puVar6 + 0xc) = uVar4;
    param_3 = puVar6;
  }
  *(undefined4 *)(param_3 + 8) = 0;
  return puVar7;
}


