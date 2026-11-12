#include "005a51a0_005a6058bb.h"



void fn_005a6058(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00846e88;
  if ((int *)param_1[0x1c] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x1c] + 4))();
  }
  fn_0068ad5c(param_1);
  fn_002feef8();
  return;
}



void fn_005a6028(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  puVar1[0x19] = 0xffffffff;
  *puVar1 = &PTR_LAB_00846e88;
  puVar1[0x1a] = 0xffffffff;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  return;
}



void fn_005a5f50(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  
  uVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x68));
  fn_00688ad4(uVar1,(char *)&DAT_005a5fdc,param_2,0);
  uVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x68));
  fn_00688ad4(uVar1,(char *)&DAT_005a5fec,param_3,0);
  uVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x68));
  fn_00688ad4(uVar1,(char *)&DAT_005a6000,param_4,0);
  uVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x68));
  fn_00688ad4(uVar1,(char *)&DAT_005a6014,param_2 + param_3 + param_4,0);
  return;
}



undefined4 fn_005a56e4(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  
  iVar1 = (**(code **)(*param_1 + 8))(param_1);
  iVar1 = *(int *)(iVar1 + 8);
  param_1[0x1b] = iVar1;
  iVar1 = fn_001481c8(iVar1,param_2,&DAT_005a5760,1,1);
  param_1[0x19] = iVar1;
  iVar1 = fn_001480d0(param_1[0x1b],iVar1,param_3,&LAB_005a5764,0,1,0);
  param_1[0x1a] = iVar1;
  iVar1 = fn_00145b00(0x10,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_0028bf74(iVar1,param_1[0x1b]);
  }
  piVar5 = (int *)param_1[0x1c];
  if (piVar5 != piVar2) {
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
    param_1[0x1c] = (int)piVar2;
  }
  fn_0028bed4(param_1[0x1c]);
  fn_0028bf3c(param_1[0x1c]);
  uVar3 = fn_002f6534(param_1);
  uVar4 = fn_00178f9c(param_1[0x1b],param_1[0x1a]);
  fn_00688cc4(uVar4,(char *)&DAT_005a5884,uVar3);
  uVar3 = fn_00178f9c(param_1[0x1b],param_1[0x1a]);
  iVar1 = fn_00689220(uVar3,(char *)&DAT_005a5890);
  if ((iVar1 != 0) && (iVar1 = fn_00689210(iVar1,(char *)&DAT_005a589c), iVar1 != 0)) {
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
  }
  return 1;
}


