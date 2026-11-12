#include "004116c4_00411cc4bb.h"



void fn_00411cc4(int *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int extraout_r1;
  undefined4 uVar5;
  int extraout_r1_00;
  uint uVar6;
  int iVar7;
  uint auStack_24 [2];
  
  (**(code **)(*(int *)param_1[0x27] + 0x30))((int *)param_1[0x27],0,auStack_24);
  uVar6 = 0;
  iVar4 = param_1[0x1f] - param_1[0x1e] >> 2;
  iVar7 = *(int *)(param_1[0x27] + 0xe4);
  if (0 < iVar4) {
    do {
      uVar1 = param_1[0x1f] - param_1[0x1e] >> 2;
      if (uVar1 <= uVar6) {
        fn_002ff628(9,&DAT_008c7653,&DAT_008c7653,uVar6,uVar1);
      }
      piVar2 = *(int **)(param_1[0x1e] + uVar6 * 4);
      if (param_1[0x2b] ==
          (param_1[0x1f] - param_1[0x1e] >> 2) * *(int *)(param_1[0x27] + 0xcc) + uVar6) {
        fn_002b20a4(param_1[0x25]);
      }
      else {
        if (uVar6 == auStack_24[0]) {
          uVar5 = 2;
        }
        else {
          uVar5 = 1;
        }
        fn_0031b3c4(piVar2,uVar5);
      }
      iVar3 = iVar4 * *(int *)(param_1[0x27] + 0xcc) + uVar6;
      if ((param_1[0x2b] == iVar3) || ((0 < iVar7 && (iVar7 <= iVar3)))) {
        if (piVar2[0xd] != 0) {
          fn_0031b474(piVar2,0);
        }
        (**(code **)(*piVar2 + 0x20))(piVar2,0);
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < iVar4);
  }
  iVar4 = param_1[0x2b];
  if (*(int *)(param_1[0x27] + 0xcc) == *(int *)(param_1[0x27] + 200) + -1) {
    if (iVar4 != -1) {
      fn_00169f1c(iVar4,param_1[0x1f] - param_1[0x1e] >> 2);
      (**(code **)(*(int *)param_1[0x25] + 0x20))((int *)param_1[0x25],1);
      iVar4 = (**(code **)(*(int *)param_1[0x25] + 0x1c))();
      if (iVar4 != 0) {
        *(float *)(iVar4 + 0x20) =
             *(float *)(*(int *)(param_1[0x21] + extraout_r1 * 4) + 0x20) + 9.0;
        *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xef | 0x10;
      }
      fn_001c9d80(param_1[0x27],extraout_r1);
      fn_001c9d44(param_1[0x27],extraout_r1,*(undefined4 *)(param_1[0x25] + 0x1c),0);
    }
  }
  else if (iVar4 != -1) {
    fn_00169f1c(iVar4,param_1[0x1f] - param_1[0x1e] >> 2);
    (**(code **)(*(int *)param_1[0x25] + 0x20))((int *)param_1[0x25],0);
    fn_001c9d80(param_1[0x27],extraout_r1_00);
    fn_001c9d44(param_1[0x27],extraout_r1_00,
                 *(undefined4 *)(*(int *)(param_1[0x1e] + extraout_r1_00 * 4) + 0x14),0);
  }
  (**(code **)(*param_1 + 0x134))(param_1);
  return;
}



void fn_00411cb8(undefined4 param_1)

{
  fn_002c3df4(param_1);
  return;
}



void fn_00411cb4(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x002c3dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x130))();
  return;
}



void fn_00411ca8(undefined4 param_1)

{
  fn_0068ab44(param_1,0x100094c);
  return;
}



undefined4 fn_00411b78(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0x93);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00893ddc) goto LAB_00411bc0;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_00411bc0:
  *(undefined4 **)(param_1 + 0xb0) = puVar1;
  return 1;
}


