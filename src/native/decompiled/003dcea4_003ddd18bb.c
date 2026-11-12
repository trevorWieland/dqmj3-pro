#include "003dcea4_003ddd18bb.h"



undefined4 fn_003ddd18(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  fn_00121838(DAT_00897800,DAT_0089878c,1,param_4,param_4);
  fn_00121838(DAT_00897800,L"rom:/data/Message/DiscMessage.mes",1);
  fn_00121838(DAT_00897800,DAT_00898794,1);
  uVar1 = fn_001481c8(*(undefined4 *)(param_1 + 100),DAT_00894050,&DAT_003dde60,1,1);
  *(undefined4 *)(param_1 + 0xd4) = uVar1;
  uVar1 = fn_001923e0(*(undefined4 *)(param_1 + 100),DAT_00894054,0,1,0);
  *(undefined4 *)(param_1 + 0xd8) = uVar1;
  iVar2 = fn_00178f9c(*(undefined4 *)(param_1 + 100),uVar1);
  *(byte *)(*(int *)(iVar2 + 0x10) + 0x44) = *(byte *)(*(int *)(iVar2 + 0x10) + 0x44) & 0xfe;
  fn_003ddf90(param_1);
  return 1;
}



void fn_003ddc8c(int param_1)

{
  fn_001218d4(DAT_00897800,DAT_0089878c);
  fn_001218d4(DAT_00897800,DAT_00898794);
  fn_001218d4(DAT_00897800,L"rom:/data/Message/DiscMessage.mes");
  if (*(int *)(param_1 + 0xd8) != -1) {
    fn_0016a43c(*(undefined4 *)(param_1 + 100));
    *(undefined4 *)(param_1 + 0xd8) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0xd4) != -1) {
                    /* WARNING: Subroutine does not return */
    fn_001482f4(*(undefined4 *)(param_1 + 100));
  }
  fn_0022ccb4(param_1);
  return;
}



void fn_003ddc10(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x138))(param_1);
  *(undefined4 *)(iVar1 + 0xc) = param_2;
  fn_006899f4(param_1,param_1[0x2c],0);
  fn_0068ab44(param_1,0x100094b);
  return;
}



void fn_003ddac0(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x138))(param_1);
  fn_006899f4(param_1,*(undefined4 *)(iVar1 + 8),0);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  fn_0068ab44(param_1,0x100094c);
  return;
}



void fn_003dd810(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0039571c();
  *puVar1 = &DAT_00831dc0;
  return;
}


