#include "0027422c_0027583ca.h"



void fn_00274d34(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  fn_00271e64(param_1,(char *)&DAT_00274dac,param_2);
  fn_00271e64(param_1,(char *)&DAT_00274db8,param_2);
  if (param_2 == 0) {
    fn_00271508(param_1);
    return;
  }
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0x4c))();
  iVar2 = (int)((longlong)(piVar1[1] - *piVar1) * -0x6db6db6d +
                ((ulonglong)(uint)(piVar1[1] - *piVar1) << 0x20) >> 0x20);
  fn_002715b0(param_1,(iVar2 >> 4) - (iVar2 >> 0x1f));
  return;
}



void fn_00274348(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 8) != '\x02') {
    fn_00159f34(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x18));
    uVar1 = fn_0010887c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),DAT_008921c8
                         ,*(undefined4 *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x18) = uVar1;
    fn_00270814(param_1,0);
    *(byte *)(*(int *)(param_1 + 0x3c) + 0x44) = *(byte *)(*(int *)(param_1 + 0x3c) + 0x44) & 0xfe;
    iVar2 = *(int *)(param_1 + 0x44);
    if (iVar2 != 0) {
      *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe;
      *(undefined4 *)(param_1 + 0x44) = 0;
    }
    *(undefined1 *)(param_1 + 8) = 2;
  }
  return;
}



void fn_00274270(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x18) != -1) {
    fn_00159f34(*(undefined4 *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  }
  uVar1 = fn_0010887c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),DAT_008921f8,
                       *(undefined4 *)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  if (*(int *)(param_1 + 0x4c) != -1) {
    fn_00159f34(*(undefined4 *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  }
  piVar2 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0x7c))();
  (**(code **)(*piVar2 + 0x20))();
  fn_00271e64(param_1,(char *)&DAT_00274334);
  fn_00271e64(param_1,(char *)&DAT_00274340,0);
  fn_00274dcc(param_1,0);
  fn_0027583c(param_1,0);
  *(undefined1 *)(param_1 + 8) = 0xd;
  return;
}



void fn_00274dcc(undefined4 param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = fn_006f6fc4(*(undefined4 *)(DAT_008977e0 + 0x40));
  fn_00271e64(param_1,(char *)&DAT_00274e3c,param_2 & uVar1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = fn_006c89fc(*(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 4));
  fn_00271e64(param_1,(char *)&DAT_00274e44,(uint)(iVar2 != 0) & param_2 & uVar1);
  return;
}



void fn_0027422c(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x18) != -1) {
    fn_00159f34(*(undefined4 *)(param_1 + 0xc));
  }
  uVar1 = fn_0010887c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),DAT_008921fc,
                       *(undefined4 *)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(undefined1 *)(param_1 + 8) = 0xf;
  return;
}


