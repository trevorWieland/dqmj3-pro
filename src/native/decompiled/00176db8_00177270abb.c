#include "00176db8_00177270abb.h"



void fn_00176ec8(undefined4 param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if ((char)param_2[4] == '\x0f') {
    fn_0017821c(param_1,*param_2 + param_3 * 0x44,0x44);
    return;
  }
  iVar1 = fn_0017fbdc();
  iVar1 = iVar1 * param_3;
  if ((*(byte *)(param_2 + 4) & 1) != 0) {
    fn_001782b8(auStack_58,*param_2 + iVar1,0x20);
  }
  if ((*(byte *)(param_2 + 4) & 2) != 0) {
    puVar2 = (undefined4 *)(param_2[1] + iVar1);
    local_38 = *puVar2;
    uStack_34 = puVar2[1];
    uStack_30 = puVar2[2];
  }
  if ((*(byte *)(param_2 + 4) & 4) != 0) {
    puVar2 = (undefined4 *)(param_2[2] + iVar1);
    local_2c = *puVar2;
    uStack_28 = puVar2[1];
    uStack_24 = puVar2[2];
  }
  if ((*(byte *)(param_2 + 4) & 8) != 0) {
    puVar2 = (undefined4 *)(param_2[3] + iVar1);
    local_20 = *puVar2;
    uStack_1c = puVar2[1];
    uStack_18 = puVar2[2];
  }
  fn_0017821c(param_1,auStack_58,0x44);
  return;
}



int fn_00176e70(int param_1)

{
  short *psVar1;
  short local_c [6];
  
  local_c[0] = *(short *)(param_1 + 0x3a) + *(short *)(param_1 + 0x2e);
  psVar1 = local_c + 2;
  if (0 < local_c[0]) {
    psVar1 = local_c;
  }
  local_c[2] = 1;
  local_c[4] = 9999;
  if (9999 < *psVar1) {
    psVar1 = local_c + 4;
  }
  return (int)*psVar1;
}


