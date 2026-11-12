#include "0035b2a4_0035bdd0aa.h"



void fn_0035b2fc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  byte bVar5;
  bool bVar6;
  
  uVar1 = fn_001481c8(*(undefined4 *)(param_1 + 0x14),
                       L"rom:/data/Layout/quest/upper/quest_status.arc",&DAT_0035b454,1,1);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  uVar1 = fn_001923e0(*(undefined4 *)(param_1 + 0x14),(char *)&DAT_007bddf4,0,1);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined1 *)(param_1 + 10) = 0;
  fn_0035b638(param_1,*(undefined1 *)(param_1 + 8));
  bVar6 = false;
  bVar5 = 0;
  iVar2 = fn_006f6fc4(*(undefined4 *)(DAT_008977e0 + 0x40));
  if (iVar2 != 0) {
    bVar6 = *(char *)(*(int *)(*(int *)(DAT_008977e0 + 0x40) + 4) + 0x20) == '\x01';
    if ((bVar6) || (iVar2 = fn_006c89fc(), iVar2 == 0)) {
      bVar5 = 0;
    }
    else {
      bVar5 = 1;
    }
  }
  iVar2 = fn_00178f9c(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x1c));
  iVar2 = (**(code **)(**(int **)(iVar2 + 0x10) + 0x2c))(*(int **)(iVar2 + 0x10),(char *)&DAT_0035b464,1);
  *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe | bVar5;
  uVar1 = fn_0035afb4(bVar6);
  iVar2 = fn_00178f9c(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x1c));
  piVar3 = (int *)(**(code **)(**(int **)(iVar2 + 0x10) + 0x2c))
                            (*(int **)(iVar2 + 0x10),(char *)&DAT_0035afa4,1);
  if (piVar3 != (int *)0x0) {
    puVar4 = (undefined4 *)(**(code **)(*piVar3 + 8))(piVar3);
    do {
      if (puVar4 == &DAT_0089a930) {
        if (piVar3 == (int *)0x0) {
          return;
        }
        fn_00190d50(piVar3,uVar1);
        return;
      }
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  return;
}



void fn_0035b2a4(int param_1)

{
  if (*(int *)(param_1 + 0x20) != -1) {
    fn_00159f34(*(undefined4 *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x1c) != -1) {
    fn_0016a43c(*(undefined4 *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x18) != -1) {
                    /* WARNING: Subroutine does not return */
    fn_001482f4(*(undefined4 *)(param_1 + 0x14));
  }
  return;
}


