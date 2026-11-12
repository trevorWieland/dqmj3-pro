#include "00619fc4_0061a5ecbb.h"



void fn_0061a5ec(short param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    if (*(short *)(param_2 + iVar2 * 2) == 0) {
      uVar1 = fn_00227328((int)param_1);
      *(undefined2 *)(param_2 + iVar2 * 2) = uVar1;
      return;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x4c);
  return;
}



void fn_0061a5cc(void)

{
  fn_0061ed58();
  return;
}



int fn_0061a518(short param_1,short param_2,short param_3,short param_4)

{
  int iVar1;
  short *psVar2;
  short local_18 [2];
  short local_14 [4];
  short local_c [2];
  
  psVar2 = local_18;
  param_1 = (short)((param_3 * 0x32) / 100) + param_1;
  iVar1 = fn_00300f74(param_1 * 10000,(int)(short)(param_2 + (short)((param_4 * 0x32) / 100)));
  iVar1 = iVar1 * 0x32;
  local_18[0] = 1;
  local_c[0] = (((short)(iVar1 / 10000) + (short)(iVar1 >> 0x1f)) -
               (short)((longlong)iVar1 * 0x68db8bad >> 0x3f)) + param_1;
  if (0 < local_c[0]) {
    psVar2 = local_c;
  }
  local_14[0] = 9999;
  if (9999 < *psVar2) {
    psVar2 = local_14;
  }
  return (int)*psVar2;
}


