#include "003c5414_003c866cb.h"



void fn_003c866c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  
  uVar1 = fn_00292f20();
  iVar2 = fn_006be0f4(uVar1,param_2);
  iVar3 = fn_006c7b58(param_1,param_2);
  iVar6 = *(int *)(param_1 + 0x70);
  uVar1 = fn_00178f9c(*(undefined4 *)(iVar6 + 4),*(undefined4 *)(iVar6 + 0x20));
  piVar4 = (int *)fn_001828f0(uVar1,s_tb__target_list_01_008c6288);
  piVar7 = (int *)0x0;
  if (piVar4 != (int *)0x0) {
    puVar5 = (undefined4 *)(**(code **)(*piVar4 + 8))(piVar4);
    do {
      if (puVar5 == &DAT_0089a930) goto LAB_003c8700;
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != (undefined4 *)0x0);
  }
  piVar4 = (int *)0x0;
LAB_003c8700:
  fn_00190d50(piVar4,iVar2 + 4);
  iVar2 = fn_001828f0(uVar1,s_Null_comment_008c629b);
  if (iVar3 == 0) {
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe;
  }
  else {
    piVar4 = (int *)fn_001828f0(uVar1,s_tb__target_list_06_008c62a8);
    if (piVar4 != (int *)0x0) {
      puVar5 = (undefined4 *)(**(code **)(*piVar4 + 8))(piVar4);
      do {
        if (puVar5 == &DAT_0089a930) {
          piVar7 = piVar4;
          break;
        }
        puVar5 = (undefined4 *)*puVar5;
      } while (puVar5 != (undefined4 *)0x0);
    }
    fn_00190d50(piVar7,iVar3);
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe | 1;
  }
  fn_00159f34(*(undefined4 *)(iVar6 + 4),*(undefined4 *)(iVar6 + 0x24));
  uVar1 = fn_001853ec(*(undefined4 *)(iVar6 + 4),s_analyze_in_008c62bb,
                       *(undefined4 *)(iVar6 + 0x20));
  *(undefined4 *)(iVar6 + 0x24) = uVar1;
  uVar1 = fn_001854ac(*(undefined4 *)(iVar6 + 4),uVar1);
  *(undefined4 *)(iVar6 + 0x30) = uVar1;
  fn_00159f34(*(undefined4 *)(iVar6 + 4),*(undefined4 *)(iVar6 + 0x10));
  uVar1 = fn_001853ec(*(undefined4 *)(iVar6 + 4),s_analyze_in_008c62bb,*(undefined4 *)(iVar6 + 0xc)
                      );
  *(undefined4 *)(iVar6 + 0x10) = uVar1;
  piVar7 = (int *)fn_001854ac(*(undefined4 *)(iVar6 + 4),uVar1);
  *(int **)(iVar6 + 0x28) = piVar7;
  (**(code **)(*piVar7 + 0x50))(piVar7,0);
  (**(code **)(**(int **)(iVar6 + 0x30) + 0x50))(*(int **)(iVar6 + 0x30),0);
  *(undefined1 *)(iVar6 + 0x3c) = 1;
  return;
}


