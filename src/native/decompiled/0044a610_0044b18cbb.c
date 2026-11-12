#include "0044a610_0044b18cbb.h"



void fn_0044b18c(int param_1)

{
  fn_002c3d68();
  *(code **)(param_1 + 0xc4) = fn_0044b088;
  *(undefined4 *)(param_1 + 200) = 0;
  return;
}



void fn_0044b088(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0xd0) == 0) {
    uVar2 = fn_0022f584((char *)&DAT_0044b164,0);
    fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar2,1,1,0,1,0,0,1);
    *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x3c) = 0;
    fn_00689bd0(param_1,0x48,0);
    return;
  }
  cVar1 = *(char *)(*(int *)(param_1 + 0x5c) + 0x31);
  if (cVar1 == '\x03') {
    fn_002f6dbc();
    *(undefined **)(param_1 + 0xc4) = &DAT_0044b188;
    *(undefined4 *)(param_1 + 200) = 0;
    return;
  }
  if (cVar1 == '\x02') {
    fn_00689bd0(param_1,0,0);
    *(undefined **)(param_1 + 0xc4) = &DAT_0044b188;
    *(undefined4 *)(param_1 + 200) = 0;
  }
  return;
}



void fn_0044adf4(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = &DAT_0083f1e0;
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = 0xffffffff;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}



void fn_0044acac(int param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 local_30 [8];
  
  if (*(int *)(param_1 + 0xc) != -1) {
    fn_002b1810(*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  }
  *(undefined1 *)(param_1 + 0x10) = 1;
  if (*param_2 == '\0') {
    fn_00301a9c(local_30,&DAT_007ba154,0x1e);
    fn_00294598(param_2 + 4,local_30);
    uVar2 = fn_002b15d4(*(undefined4 *)(param_1 + 4),1,local_30);
  }
  else {
    local_30[0] = 0;
    uVar2 = fn_002b1a60(*(undefined4 *)(param_1 + 4),0x1b,param_2 + 4,1);
  }
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  piVar3 = (int *)fn_002b1588(*(undefined4 *)(param_1 + 4),uVar2);
  (**(code **)(*piVar3 + 0x1c))(piVar3,0);
  fn_0069e2e4(piVar3);
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar4 = fn_00303afc(&DAT_008c62fc), iVar4 != 0)) {
    DAT_008f9e2c = 0;
    DAT_008f9e30 = 0;
    DAT_008f9e34 = 0;
  }
  iVar1 = DAT_008f9e34;
  iVar4 = DAT_008f9e30;
  piVar3[7] = DAT_008f9e2c;
  piVar3[8] = iVar4;
  piVar3[9] = iVar1;
  return;
}


