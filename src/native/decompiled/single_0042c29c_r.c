#include "single_0042c29c_r.h"


extern undefined4 register0x00000054;

void fn_0042c29c(int param_1)

{
  char cVar1;
  undefined2 *puVar2;
  short *psVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined2 uStack_2;
  
  uVar5 = 0;
  uVar6 = *(undefined4 *)(DAT_00897804 + 0x14);
  if (*(int *)(param_1 + 0x88) - *(int *)(param_1 + 0x84) >> 2 != 0) {
    do {
      psVar3 = (short *)(*(int *)(param_1 + 0x84) + uVar5 * 4);
      iVar4 = (int)psVar3[1];
      if (0 < iVar4) {
        fn_002297bc(uVar6,(int)*psVar3,iVar4,1);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uint)(*(int *)(param_1 + 0x88) - *(int *)(param_1 + 0x84) >> 2));
  }
  iVar4 = *(int *)(param_1 + 100);
  cVar1 = *(char *)(iVar4 + 8);
  if (cVar1 == '\0') {
    fn_00242324(*(undefined4 *)(DAT_00897804 + 0x18),(int)*(short *)(iVar4 + 0x10),0);
    iVar4 = *(int *)(*(int *)(DAT_00897804 + 8) + 4);
    puVar2 = (undefined2 *)((int)register0x00000054 + -8);
    if (*(ushort *)(iVar4 + 0x266) + 1 < 10000) {
      puVar2 = (undefined2 *)((int)register0x00000054 + -0xc);
    }
    *(undefined2 *)(iVar4 + 0x266) = *puVar2;
    return;
  }
  if (cVar1 == '\x01') {
    iVar4 = fn_00242540(*(undefined4 *)(DAT_00897804 + 0x18),*(undefined4 *)(iVar4 + 0xc));
    uVar6 = fn_0024eecc();
    *(char *)(iVar4 + 6) = *(char *)(iVar4 + 6) + '\x01';
    fn_0024ec28(iVar4,uVar6);
    fn_0028a5c0(*(undefined4 *)(DAT_00897804 + 0xc),iVar4);
    return;
  }
  if (cVar1 == '\x02') {
    fn_00241f00(*(undefined4 *)(DAT_00897804 + 0x18),(int)*(short *)(iVar4 + 0x1c));
    return;
  }
  return;
}


