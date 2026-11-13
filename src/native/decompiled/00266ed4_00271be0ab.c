#include "00266ed4_00271be0ab.h"



void fn_00271108(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((*(char *)(param_1 + 0x38) == '\0') || (param_2 != 0)) {
    if (*(int *)(param_1 + 0x30) == -1) {
      uVar1 = fn_001480d0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
                           DAT_0089212c,&DAT_00271200,0,1,0xd);
      *(undefined4 *)(param_1 + 0x30) = uVar1;
    }
    if (*(int *)(param_1 + 0x34) == -1) {
      uVar1 = fn_001c804c(*(undefined4 *)(param_1 + 0xc),DAT_00892130,
                           *(undefined4 *)(param_1 + 0x30));
      *(undefined4 *)(param_1 + 0x34) = uVar1;
    }
    iVar2 = fn_001088e0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x34));
    *(undefined4 *)(iVar2 + 0x10) = 0;
    iVar2 = fn_00178f9c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x30));
    uVar1 = (**(code **)(**(int **)(iVar2 + 0x10) + 0x2c))
                      (*(int **)(iVar2 + 0x10),(char *)&DAT_00271208,1);
    uVar3 = fn_0016ba34(DAT_00897800,DAT_008987a0);
    fn_00190d50(uVar1,uVar3);
    *(char *)(param_1 + 0x38) = (char)param_2;
  }
  return;
}


