#include "003dcea4_003ddd18a.h"



void fn_003dd6a0(undefined4 *param_1)

{
  *param_1 = &DAT_00831d84;
  if (param_1[2] != 0) {
    fn_002feef8(param_1[2]);
  }
  fn_002feef8(param_1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x003dd680) */

undefined4 * fn_003dd5d8(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar1 = fn_00145b00(0x10,&DAT_00812c8c);
  if (iVar1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)fn_0028e264(iVar1,param_1);
  *puVar2 = &DAT_00831d84;
  puVar2[2] = 0;
  *(undefined1 *)(puVar2 + 3) = 1;
  iVar3 = fn_00145b00(0x16,&DAT_00812c8c);
  iVar1 = 0;
  if (iVar3 != 0) {
    iVar1 = fn_00113c58();
  }
  iVar3 = puVar2[2];
  if (iVar3 != iVar1) {
    if (iVar3 != 0) {
      fn_002feef8(iVar3);
    }
    puVar2[2] = iVar1;
  }
  return puVar2;
}



undefined4 fn_003dd5a4(int *param_1)

{
  int iVar1;
  
  if (*param_1 < 1) {
    iVar1 = *param_1 + 1;
  }
  else {
    iVar1 = 0;
  }
  *param_1 = iVar1;
  return (&DAT_00893d54)[iVar1];
}



undefined4 fn_003dd57c(int *param_1)

{
  int iVar1;
  
  if (*param_1 < 1) {
    iVar1 = 1;
  }
  else {
    iVar1 = *param_1 + -1;
  }
  *param_1 = iVar1;
  return (&DAT_00893d54)[iVar1];
}



undefined4 fn_003dd564(undefined4 *param_1)

{
  *param_1 = 0;
  return DAT_00893d54;
}



void fn_003dd3e0(int *param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  if ((char)param_1[3] == '\x03') {
    iVar1 = (**(code **)(*param_1 + 8))(param_1);
    iVar1 = fn_002e8098(*(undefined4 *)(*(int *)(iVar1 + 0x18) + 0x10),
                         *(undefined4 *)(*(int *)(iVar1 + 0x18) + 0x14));
    if (iVar1 != 0) {
      bVar2 = param_2 == 0;
      if (-1 < param_2) {
        bVar2 = *(char *)(param_1[0x17] + 0x31) == '\0';
      }
      if (bVar2) {
        iVar1 = fn_00747fd0(param_1,param_2);
        if (iVar1 == 0) {
          fn_0068ab44(param_1,0x100094d);
          return;
        }
        param_1[0x34] = param_2;
        fn_0068ab44(param_1,0x100094b);
        return;
      }
    }
  }
  return;
}



void fn_003dd348(int *param_1)

{
  int iVar1;
  
  if ((char)param_1[3] == '\x03') {
    iVar1 = (**(code **)(*param_1 + 8))(param_1);
    iVar1 = fn_002e8098(*(undefined4 *)(*(int *)(iVar1 + 0x18) + 0x10),
                         *(undefined4 *)(*(int *)(iVar1 + 0x18) + 0x14));
    if ((iVar1 != 0) && (*(char *)(param_1[0x17] + 0x31) == '\0')) {
      param_1[0x35] = 0;
      fn_0068ab44(param_1,0x100094c);
      return;
    }
  }
  return;
}



int fn_003dcee4(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_0025fb98(param_1,param_2,8);
  *puVar1 = &DAT_00831be4;
  puVar1 = (undefined4 *)fn_0025fb7c(puVar1 + 4);
  *puVar1 = &DAT_00852304;
  iVar2 = fn_00101a1c(puVar1 + 0x23,&LAB_003dcc78,0x8c,8);
  return iVar2 + -0x9c;
}



void fn_003dcecc(int param_1,undefined2 *param_2,undefined4 param_3)

{
  *(undefined2 *)(param_1 + 0x1c) = *param_2;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 0x18) = 7;
  return;
}



void fn_003dcea4(int param_1,undefined4 param_2,undefined4 param_3)

{
  fn_00301a9c(param_1 + 0x1c,param_2,0x80);
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 0x18) = 3;
  return;
}


