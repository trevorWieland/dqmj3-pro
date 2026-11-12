#include "005912c0_00591f78bb.h"



void fn_00591f78(int param_1,int param_2,int param_3)

{
  int iVar1;
  byte bVar2;
  
  if (param_2 < 0) {
    iVar1 = fn_006e9d7c(*(undefined4 *)(param_1 + 0x9c));
    if (iVar1 == 0) goto LAB_00591fd0;
    iVar1 = *(int *)(param_1 + 0xa4);
    bVar2 = *(byte *)(iVar1 + 0x44) & 0xfe;
  }
  else {
    iVar1 = fn_00689210(*(undefined4 *)(param_1 + 0xa4),(&PTR_s_race_item_01_00896be0)[param_2]);
    bVar2 = *(byte *)(iVar1 + 0x44) & 0xfe | 1;
  }
  *(byte *)(iVar1 + 0x44) = bVar2;
LAB_00591fd0:
  if (param_2 != param_3) {
    if (param_3 < 0) {
      iVar1 = fn_006e9d7c(*(undefined4 *)(param_1 + 0x9c));
      if (iVar1 == 0) {
        return;
      }
      iVar1 = *(int *)(param_1 + 0xa4);
      bVar2 = *(byte *)(iVar1 + 0x44) & 0xfe | 1;
    }
    else {
      iVar1 = fn_00689210(*(undefined4 *)(param_1 + 0xa4),(&PTR_s_race_item_01_00896be0)[param_3]);
      bVar2 = *(byte *)(iVar1 + 0x44) & 0xfe;
    }
    *(byte *)(iVar1 + 0x44) = bVar2;
  }
  return;
}



void fn_00591e08(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002c4694();
  puVar1[0x2c] = 0;
  *puVar1 = &DAT_00844804;
  return;
}



void fn_00591dcc(undefined4 param_1)

{
  fn_002c4304();
                    /* WARNING: Subroutine does not return */
  fn_006ba250(param_1);
}


