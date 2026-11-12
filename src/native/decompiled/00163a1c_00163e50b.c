#include "00163a1c_00163e50b.h"



undefined4 fn_00163e50(undefined4 param_1,char *param_2,int param_3)

{
  if ((((param_3 == 0) && (*param_2 != 'B')) || ((param_3 == 1 && (*param_2 != 'S')))) ||
     ((param_3 == 2 && (*param_2 != 'M')))) {
    return 0;
  }
  return 1;
}



undefined4 fn_00163d88(int param_1,undefined4 param_2,undefined4 param_3,code *param_4)

{
  int iVar1;
  undefined4 local_18;
  
  local_18 = 0x53514952;
  iVar1 = (*param_4)(param_3,&local_18,4);
  if (iVar1 == 4) {
    local_18 = 1;
    iVar1 = (*param_4)(param_3,&local_18,4);
    if (iVar1 == 4) {
      iVar1 = fn_0016bb8c(*(undefined4 *)(param_1 + 0x24),param_2,param_3,param_4);
      if (iVar1 == 0) {
        return 0;
      }
      local_18 = 0x5441494c;
      iVar1 = (*param_4)(param_3,&local_18,4);
      if (iVar1 == 4) {
        return 1;
      }
    }
  }
  fn_0019813c(param_2,(char *)&DAT_007edcb4);
  return 0;
}



void fn_00163d68(undefined4 param_1,undefined4 param_2)

{
  fn_0016ba24(*(undefined4 *)(DAT_00897804 + 8),param_1,param_2);
  return;
}



void fn_00163d44(undefined4 param_1)

{
  fn_001759e8(*(undefined4 *)(DAT_00897804 + 8),param_1);
  return;
}



void fn_00163d3c(undefined4 param_1,undefined4 param_2)

{
  fn_001759e8(*(undefined4 *)(DAT_00897804 + 8),param_2);
  return;
}



void fn_00163d24(int param_1)

{
  fn_0016e2f8(*(undefined4 *)(param_1 + 0xc));
  return;
}


