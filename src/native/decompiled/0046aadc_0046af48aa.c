#include "0046aadc_0046af48aa.h"



void fn_0046aadc(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  uint local_38;
  int iStack_34;
  int local_30;
  int local_2c;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  
  piVar1 = (int *)(param_1 + 0x4c);
  (**(code **)(*piVar1 + 8))();
  fn_0013d0fc(&local_38);
  iVar4 = *(int *)(*(int *)(param_1 + 0x18) + 8);
  while (iVar4 != *(int *)(param_1 + 0x18)) {
    iVar2 = iStack_34 - (*(int *)(iVar4 + 0x54) + (uint)(local_38 < *(uint *)(iVar4 + 0x50)));
    bVar5 = DAT_008b6454 < local_38 - *(uint *)(iVar4 + 0x50);
    iVar3 = *(int *)(iVar4 + 0xc);
    if ((int)-(iVar2 + (uint)bVar5) < 0 == (SBORROW4(0,iVar2) != SBORROW4(-iVar2,(uint)bVar5))) {
      if (iVar3 == 0) {
        iVar3 = *(int *)(iVar4 + 4);
        if (iVar4 == *(int *)(iVar3 + 0xc)) {
          do {
            iVar4 = iVar3;
            iVar3 = *(int *)(iVar4 + 4);
          } while (iVar4 == *(int *)(iVar3 + 0xc));
        }
        if (*(int *)(iVar4 + 0xc) != iVar3) {
          iVar4 = iVar3;
        }
      }
      else {
        do {
          iVar4 = iVar3;
          iVar3 = *(int *)(iVar4 + 8);
        } while (*(int *)(iVar4 + 8) != 0);
      }
    }
    else {
      if (iVar3 == 0) {
        iVar3 = *(int *)(iVar4 + 4);
        iVar2 = iVar4;
        if (iVar4 == *(int *)(iVar3 + 0xc)) {
          do {
            iVar2 = iVar3;
            iVar3 = *(int *)(iVar2 + 4);
          } while (iVar2 == *(int *)(iVar3 + 0xc));
        }
        if (*(int *)(iVar2 + 0xc) != iVar3) {
          iVar2 = iVar3;
        }
      }
      else {
        do {
          iVar2 = iVar3;
          iVar3 = *(int *)(iVar2 + 8);
        } while (*(int *)(iVar2 + 8) != 0);
      }
      local_30 = iVar4;
      fn_0076f5a0(auStack_28,param_1 + 8,&local_30);
      iVar4 = iVar2;
    }
  }
  iVar4 = *(int *)(*(int *)(param_1 + 0x34) + 8);
  while (iVar4 != *(int *)(param_1 + 0x34)) {
    iVar2 = iStack_34 - (*(int *)(iVar4 + 0x34) + (uint)(local_38 < *(uint *)(iVar4 + 0x30)));
    bVar5 = DAT_008b6454 < local_38 - *(uint *)(iVar4 + 0x30);
    iVar3 = *(int *)(iVar4 + 0xc);
    if ((int)-(iVar2 + (uint)bVar5) < 0 == (SBORROW4(0,iVar2) != SBORROW4(-iVar2,(uint)bVar5))) {
      if (iVar3 == 0) {
        iVar3 = *(int *)(iVar4 + 4);
        if (iVar4 == *(int *)(iVar3 + 0xc)) {
          do {
            iVar4 = iVar3;
            iVar3 = *(int *)(iVar4 + 4);
          } while (iVar4 == *(int *)(iVar3 + 0xc));
        }
        if (*(int *)(iVar4 + 0xc) != iVar3) {
          iVar4 = iVar3;
        }
      }
      else {
        do {
          iVar4 = iVar3;
          iVar3 = *(int *)(iVar4 + 8);
        } while (*(int *)(iVar4 + 8) != 0);
      }
    }
    else {
      if (iVar3 == 0) {
        iVar3 = *(int *)(iVar4 + 4);
        iVar2 = iVar4;
        if (iVar4 == *(int *)(iVar3 + 0xc)) {
          do {
            iVar2 = iVar3;
            iVar3 = *(int *)(iVar2 + 4);
          } while (iVar2 == *(int *)(iVar3 + 0xc));
        }
        if (*(int *)(iVar2 + 0xc) != iVar3) {
          iVar2 = iVar3;
        }
      }
      else {
        do {
          iVar2 = iVar3;
          iVar3 = *(int *)(iVar2 + 8);
        } while (*(int *)(iVar2 + 8) != 0);
      }
      local_2c = iVar4;
      fn_007659f4(auStack_24,param_1 + 0x24,&local_2c);
      iVar4 = iVar2;
    }
  }
  (**(code **)(*piVar1 + 0xc))(piVar1);
  return;
}


