#include "0048be70_0048c3a4b.h"



void fn_0048c3a4(int param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  int local_18;
  undefined1 auStack_14 [4];
  
  iVar5 = *(int *)(*(int *)(param_1 + 0x14) + 8);
  if (iVar5 != *(int *)(param_1 + 0x14)) {
    do {
      piVar4 = *(int **)(iVar5 + 0x18);
      puVar3 = (uint *)(piVar4 + 1);
      do {
        uVar1 = *puVar3 - 1;
        bVar7 = (bool)hasExclusiveAccess(puVar3);
      } while (!bVar7);
      *puVar3 = uVar1;
      bVar7 = uVar1 == 0;
      if (bVar7) {
        uVar1 = (uint)*(byte *)(piVar4 + 2);
      }
      if (bVar7 && uVar1 == 0) {
        *(undefined1 *)(piVar4 + 2) = 1;
        (**(code **)(*piVar4 + 4))(piVar4);
      }
      iVar2 = *(int *)(iVar5 + 0xc);
      if (*(int *)(iVar5 + 0xc) == 0) {
        iVar2 = *(int *)(iVar5 + 4);
        iVar6 = iVar5;
        if (iVar5 == *(int *)(iVar2 + 0xc)) {
          do {
            iVar6 = iVar2;
            iVar2 = *(int *)(iVar6 + 4);
          } while (iVar6 == *(int *)(iVar2 + 0xc));
        }
        if (*(int *)(iVar6 + 0xc) != iVar2) {
          iVar6 = iVar2;
        }
      }
      else {
        do {
          iVar6 = iVar2;
          iVar2 = *(int *)(iVar6 + 8);
        } while (*(int *)(iVar6 + 8) != 0);
      }
      local_18 = iVar5;
      fn_00767400(auStack_14,param_1 + 4,&local_18);
      iVar5 = iVar6;
    } while (iVar6 != *(int *)(param_1 + 0x14));
  }
  return;
}



undefined4 fn_0048c318(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar3 = *(int *)(param_1 + 0x14);
  uVar5 = 0;
  iVar4 = iVar3;
  if (*(int *)(iVar3 + 4) != 0) {
    iVar1 = *(int *)(iVar3 + 4);
    do {
      if ((short)(*(short *)(param_1 + 0x24) - *(short *)(iVar1 + 0x14)) < 1) {
        iVar2 = *(int *)(iVar1 + 8);
        iVar4 = iVar1;
      }
      else {
        iVar2 = *(int *)(iVar1 + 0xc);
      }
      iVar1 = iVar2;
    } while (iVar2 != 0);
  }
  if ((iVar4 != iVar3) && ((short)(*(short *)(iVar4 + 0x14) - *(short *)(param_1 + 0x24)) < 1)) {
    iVar3 = iVar4;
  }
  if (iVar3 != *(int *)(param_1 + 0x14)) {
    uVar5 = *(undefined4 *)(iVar3 + 0x18);
    *(short *)(param_1 + 0x24) = *(short *)(param_1 + 0x24) + 1;
  }
  return uVar5;
}



undefined4 fn_0048c29c(void)

{
  char cVar1;
  int iVar2;
  undefined4 unaff_r5;
  bool bVar3;
  
  (**(code **)(DAT_008e76e8 + 8))();
  if (DAT_008b637e != '\0') {
    fn_001775e8(DAT_008b63d8);
  }
  iVar2 = fn_00170de0(&DAT_008e769c,0xe);
  bVar3 = iVar2 != 0;
  cVar1 = '\0';
  if (bVar3) {
    cVar1 = *(char *)(iVar2 + 0x34);
  }
  if (!bVar3 || cVar1 == '\0') {
    unaff_r5 = 0;
  }
  if (bVar3 && cVar1 != '\0') {
    unaff_r5 = 1;
  }
  (**(code **)(DAT_008e76e8 + 0xc))(&DAT_008e76e8);
  return unaff_r5;
}


