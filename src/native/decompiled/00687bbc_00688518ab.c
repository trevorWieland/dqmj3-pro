#include "00687bbc_00688518ab.h"



void fn_006882e4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*(int *)(param_1 + 4) == 0) {
    return;
  }
  iVar1 = fn_006f7358(DAT_008977e0);
  if (iVar1 != 0) {
    uVar2 = 0;
    iVar1 = fn_006f7a84(DAT_008977e0);
    uVar3 = *(undefined4 *)(iVar1 + 0x20);
    uVar4 = *(undefined4 *)(iVar1 + 0x28);
    iVar1 = fn_0017fde4(*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(iVar1 + 0x58) = uVar3;
    *(undefined4 *)(iVar1 + 0x68) = uVar2;
    *(undefined4 *)(iVar1 + 0x78) = uVar4;
    *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x800;
  }
  fn_005ef390(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0xc));
  fn_005eeda8(*(undefined4 *)(param_1 + 4));
  return;
}



undefined4 fn_0068808c(int param_1,uint param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  uint uVar8;
  int *local_20;
  
  local_20 = param_4;
  iVar1 = fn_00145b00(8,&DAT_00812c8c);
  if (iVar1 == 0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = (int *)fn_005efdbc();
  }
  piVar2 = *(int **)(param_1 + 4);
  if (piVar2 != piVar7) {
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int **)(param_1 + 4) = piVar7;
  }
  iVar1 = fn_006f7a9c(DAT_008977e0);
  if (-1 < (int)param_2) {
    if (param_2 < (uint)((*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4)) / 0x34)) {
      iVar1 = *(int *)(iVar1 + 4) + param_2 * 0x34;
      goto LAB_00688130;
    }
  }
  iVar1 = 0;
LAB_00688130:
  iVar3 = fn_0069ee40(*(undefined4 *)(param_1 + 4),iVar1,0);
  uVar6 = 0;
  if (iVar3 != 0) {
    uVar8 = 0;
    iVar3 = fn_006eb368(iVar1);
    if (iVar3 != 0) {
      do {
        fn_0017fd38(*(undefined4 *)(param_1 + 4),uVar8);
        fn_005e8b38(&local_20,iVar1,uVar8);
        iVar3 = *local_20;
        if (iVar3 != 0) {
          iVar4 = fn_002febd8(iVar3);
          if (iVar4 == 0xc) {
            *(uint *)(param_1 + 8) = uVar8;
          }
          else {
            iVar3 = fn_002febd8(iVar3);
            if (iVar3 == 6) {
              *(uint *)(param_1 + 0xc) = uVar8;
            }
          }
        }
        uVar8 = uVar8 + 1;
        uVar5 = fn_006eb368(iVar1);
      } while (uVar8 < uVar5);
    }
    uVar6 = fn_0017fde4(*(undefined4 *)(param_1 + 4));
    uVar6 = fn_00190fb4(uVar6,(char *)&DAT_00688280);
    *(undefined4 *)(param_1 + 0x10) = uVar6;
    uVar6 = fn_0017fde4(*(undefined4 *)(param_1 + 4));
    uVar6 = fn_00190fb4(uVar6,(char *)&DAT_0068828c);
    *(undefined4 *)(param_1 + 0x14) = uVar6;
    uVar6 = fn_0017fde4(*(undefined4 *)(param_1 + 4));
    uVar6 = fn_00190fb4(uVar6,(char *)&DAT_0068829c);
    *(undefined4 *)(param_1 + 0x18) = uVar6;
    uVar6 = fn_0017fde4(*(undefined4 *)(param_1 + 4));
    fn_001969a4(*(undefined4 *)(*(int *)(DAT_008977e0 + 8) + 0x24),uVar6);
    fn_00162d44(*(undefined4 *)(*(int *)(DAT_008977e0 + 8) + 0x24));
    fn_005ef524(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
    fn_005ef390(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0xc));
    uVar6 = 1;
  }
  return uVar6;
}


