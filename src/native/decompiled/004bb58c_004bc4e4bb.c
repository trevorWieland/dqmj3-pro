#include "004bb58c_004bc4e4bb.h"



void fn_004bc4e4(int param_1,uint *param_2)

{
  bool bVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  bool bVar7;
  uint local_30;
  uint auStack_2c [2];
  
  bVar1 = true;
  fn_004bcca0();
  do {
    (**(code **)(*(int *)(param_1 + 0x78) + 8))();
    if (*(int *)(param_1 + 0xd8) == 0) {
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined1 *)(param_1 + 8) = 0;
    }
    else {
      *(int *)(param_1 + 4) = *(int *)(param_1 + 0xcc);
      *(undefined1 *)(param_1 + 8) = 1;
      piVar2 = (int *)(*(int *)(param_1 + 0xcc) + 4);
      do {
        bVar7 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar7);
      *piVar2 = *piVar2 + 1;
      local_30 = *(uint *)(param_1 + 0xcc);
      fn_00754688(auStack_2c,param_1 + 200,&local_30);
    }
    (**(code **)(*(int *)(param_1 + 0x78) + 0xc))((int *)(param_1 + 0x78));
    if (*(int *)(param_1 + 4) == 0) {
      iVar4 = fn_004bcca0(param_1);
      if (iVar4 == 0) {
        bVar1 = false;
      }
    }
    else if (*(char *)(*(int *)(param_1 + 4) + 0x38) == '\0') {
      (**(code **)(*(int *)(param_1 + 0x50) + 8))();
      piVar2 = *(int **)(param_1 + 4);
      if (*(char *)(param_1 + 8) != '\0') {
        fn_004bc358(param_1,piVar2,param_2);
      }
      puVar5 = (uint *)(piVar2 + 1);
      do {
        uVar3 = *puVar5 - 1;
        bVar7 = (bool)hasExclusiveAccess(puVar5);
      } while (!bVar7);
      *puVar5 = uVar3;
      bVar7 = uVar3 == 0;
      if (bVar7) {
        uVar3 = (uint)*(byte *)(piVar2 + 2);
      }
      if (bVar7 && uVar3 == 0) {
        *(undefined1 *)(piVar2 + 2) = 1;
        (**(code **)(*piVar2 + 4))(piVar2);
      }
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined1 *)(param_1 + 8) = 0;
      (**(code **)(*(int *)(param_1 + 0x50) + 0xc))((int *)(param_1 + 0x50));
    }
    else {
      (**(code **)(DAT_008e778c + 8))();
      (**(code **)(*(int *)(param_1 + 0x50) + 8))();
      piVar2 = *(int **)(param_1 + 4);
      if (*(char *)(param_1 + 8) != '\0') {
        fn_004bc358(param_1,piVar2,param_2);
      }
      puVar5 = (uint *)(piVar2 + 1);
      do {
        uVar3 = *puVar5 - 1;
        bVar7 = (bool)hasExclusiveAccess(puVar5);
      } while (!bVar7);
      *puVar5 = uVar3;
      bVar7 = uVar3 == 0;
      if (bVar7) {
        uVar3 = (uint)*(byte *)(piVar2 + 2);
      }
      if (bVar7 && uVar3 == 0) {
        *(undefined1 *)(piVar2 + 2) = 1;
        (**(code **)(*piVar2 + 4))(piVar2);
      }
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined1 *)(param_1 + 8) = 0;
      (**(code **)(*(int *)(param_1 + 0x50) + 0xc))((int *)(param_1 + 0x50));
      (**(code **)(DAT_008e778c + 0xc))(&DAT_008e778c);
    }
    uVar3 = *param_2;
    uVar6 = param_2[1];
  } while (((uVar3 == 0 && uVar6 == 0) ||
           ((fn_0013d0fc(&local_30),
            auStack_2c[0] <= uVar6 && (uint)(uVar3 <= local_30) <= auStack_2c[0] - uVar6 &&
            (uVar3 != local_30)))) && (bVar1));
  return;
}


