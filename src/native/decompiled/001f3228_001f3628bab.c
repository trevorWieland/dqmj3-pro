#include "001f3228_001f3628bab.h"



void fn_001f34fc(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((-1 < (int)param_2) && (param_2 < 0x50)) {
    iVar1 = *(int *)(param_1 + param_2 * 0x2c + 0x8c);
    if (iVar1 != 0) {
      fn_001dbc64(iVar1,param_3);
      return;
    }
  }
  return;
}



void fn_001f34ec(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = DAT_00891220;
  if (*(int *)(DAT_00891220 + 4) == 0) {
    fn_006f756c(DAT_008977e0);
    iVar2 = fn_006bb17c();
    iVar7 = iVar1 + (*(int *)(iVar1 + 8) + iVar2 * 4) * 0xc;
    iVar2 = *(int *)(iVar1 + 0xac);
    iVar6 = *(int *)(iVar7 + 0xc);
    fn_006f756c(DAT_008977e0);
    iVar3 = fn_006bb150();
    iVar7 = *(int *)(iVar7 + 0xc);
    iVar3 = (int)*(char *)(iVar3 * 3 + iVar6 + iVar2 * 0xc + 3);
    iVar2 = *(int *)(iVar1 + 0xac);
    fn_006f756c(DAT_008977e0);
    iVar6 = fn_006bb150();
    iVar2 = (int)*(char *)(iVar6 * 3 + iVar7 + iVar2 * 0xc + 4);
    uVar4 = fn_006b6244(*(undefined4 *)(DAT_00897804 + 8));
    iVar6 = *(int *)(iVar1 + 8);
    if (iVar6 == 0) {
      uVar5 = 0xffffffff;
    }
    else {
      if (iVar6 == 1) {
        iVar6 = (int)((longlong)(int)uVar4 * -0x6e5d4c3b + ((ulonglong)uVar4 << 0x20) >> 0x20);
        iVar6 = fn_00300f74((iVar6 >> 0xb) - (iVar6 >> 0x1f),DAT_00891224);
        *(int *)(iVar1 + 0xb4) = iVar6;
        if (iVar6 <= iVar3) {
          iVar6 = iVar3;
        }
        if (iVar6 <= iVar2) {
          iVar2 = iVar6;
        }
        *(int *)(iVar1 + 0xb4) = iVar6;
LAB_0031824c:
        *(int *)(iVar1 + 0xb4) = iVar2;
        return;
      }
      if (iVar6 == 2) {
        iVar6 = fn_001c232c(DAT_008977e4);
        iVar6 = iVar2 - *(int *)(iVar6 + 0x28);
        if (iVar3 < iVar6) {
          iVar3 = iVar6;
        }
        *(int *)(iVar1 + 0xb4) = iVar6;
        if (iVar3 <= iVar2) {
          iVar2 = iVar3;
        }
        *(int *)(iVar1 + 0xb4) = iVar3;
        goto LAB_0031824c;
      }
      uVar5 = 1;
    }
    *(undefined4 *)(iVar1 + 0xb4) = uVar5;
  }
  return;
}


