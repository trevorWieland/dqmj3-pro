#include "0035b2a4_0035bdd0ab.h"



void fn_0035b764(undefined4 *param_1)

{
  *param_1 = &DAT_00826b20;
  fn_001218d4(DAT_00897800,L"rom:/data/Message/DiscMessage.mes");
  if ((int *)param_1[5] != (int *)0x0) {
    (**(code **)(*(int *)param_1[5] + 4))();
  }
  fn_002feef8(param_1);
  return;
}



undefined4 * fn_0035b6b4(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *param_1 = &DAT_00826b20;
  param_1[1] = &DAT_008592b0;
  *(undefined1 *)(param_1 + 2) = 2;
  *(undefined1 *)((int)param_1 + 9) = 2;
  *(undefined1 *)((int)param_1 + 10) = 2;
  param_1[3] = 0;
  param_1[4] = 0;
  iVar1 = fn_00145b00(0x80,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_00110518();
  }
  param_1[5] = uVar2;
  param_1[6] = 0xffffffff;
  param_1[7] = 0xffffffff;
  param_1[8] = 0xffffffff;
  *(undefined1 *)(param_1 + 9) = 0;
  fn_0011050c(param_1[5],*(undefined4 *)(DAT_008977e0 + 0x10),*(undefined4 *)(DAT_008977e0 + 0x14))
  ;
  fn_00121838(DAT_00897800,L"rom:/data/Message/DiscMessage.mes",1);
  return param_1;
}



void fn_0035b638(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x20) != -1) {
    fn_00159f34(*(undefined4 *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  }
  uVar1 = fn_0010887c(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  return;
}


