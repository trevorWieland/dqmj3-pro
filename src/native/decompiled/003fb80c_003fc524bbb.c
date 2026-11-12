#include "003fb80c_003fc524bbb.h"



void fn_003fc524(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xa4,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003fc6fc(iVar1,param_1);
  return;
}



int fn_003fc404(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  undefined1 auStack_58 [68];
  
  puVar5 = *(undefined4 **)(param_1 + 0x98);
  if (puVar5 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar5)(puVar5);
    do {
      if (puVar1 == &DAT_00894d28) goto LAB_003fc44c;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar5 = (undefined4 *)0x0;
LAB_003fc44c:
  *(undefined4 **)(param_1 + 0x9c) = puVar5;
  iVar2 = fn_003e2a98(param_1);
  if (iVar2 != 0) {
    iVar3 = *(int *)(param_1 + 0x9c);
    if (*(char *)(iVar3 + 0x7c) == '\0') {
      puVar4 = &DAT_003fc690;
    }
    else {
      puVar4 = (undefined *)fn_0022f584((char *)&DAT_003fc694,0);
    }
    fn_00101a50(auStack_58,0x40,L"%ls%ls",puVar4,iVar3 + 0x1c);
    fn_00385b60(param_1,auStack_58);
    fn_0031c7d0(*(undefined4 *)(param_1 + 0x94),(int)*(char *)(*(int *)(param_1 + 0x9c) + 0x8f5));
    fn_0031ca5c(*(undefined4 *)(param_1 + 0x94),(int)*(char *)(*(int *)(param_1 + 0x9c) + 0x8f6));
    fn_0031c040(*(undefined4 *)(param_1 + 0x94),(int)*(char *)(*(int *)(param_1 + 0x9c) + 0x8f7));
  }
  fn_00290ae4(*(undefined4 *)(param_1 + 0xa0),*(undefined1 *)(*(int *)(param_1 + 0x9c) + 0x76));
  return iVar2;
}


