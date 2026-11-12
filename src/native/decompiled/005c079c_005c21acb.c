#include "005c079c_005c21acb.h"



void fn_005c21ac(undefined4 param_1)

{
  fn_0068ab44(param_1,0x100094c);
  return;
}



void fn_005c20d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_38 [36];
  
  if (*(char *)(param_1 + 0xc0) == '\0') {
    fn_002c3808(param_1);
    uVar1 = DAT_00893eb0;
    iVar3 = 0;
    do {
      fn_001028d4(auStack_38,uVar1,iVar3);
      iVar2 = fn_00689210(*(undefined4 *)(param_1 + 0x70),auStack_38);
      if (iVar2 != 0) {
        *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 3);
    return;
  }
  fn_002c3808(param_1,param_2,param_3,DAT_00893eb0);
  uVar1 = DAT_00893eb4;
  iVar3 = 0;
  do {
    fn_001028d4(auStack_38,uVar1,iVar3);
    iVar2 = fn_00689210(*(undefined4 *)(param_1 + 0x70),auStack_38);
    if (iVar2 != 0) {
      *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 8);
  return;
}



void fn_005c20a0(int param_1)

{
  int iVar1;
  
  *(undefined1 *)(*(int *)(param_1 + 0x74) + 0x81) = 0;
  fn_0031f3f4();
  iVar1 = *(int *)(param_1 + 0x74);
  *(undefined1 *)(iVar1 + 0x83) = 0xff;
  fn_0031f954(iVar1,0);
  return;
}



void fn_005c2070(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  fn_00411cb8();
  (**(code **)(*param_1 + 0x148))(param_1,param_2);
  *(undefined1 *)(param_1[0x1d] + 0x81) = 0;
  fn_0031f3f4();
  iVar1 = param_1[0x1d];
  *(undefined1 *)(iVar1 + 0x83) = 0xff;
  fn_0031f954(iVar1,0);
  return;
}



int fn_005c1d84(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  iVar1 = fn_006b4f84(*(undefined4 *)(DAT_00897804 + 0x18));
  if (0 < iVar1) {
    do {
      iVar1 = fn_0024222c(*(undefined4 *)(DAT_00897804 + 0x18),iVar2);
      iVar2 = iVar2 + 1;
      if (*(short *)(iVar1 + 4) == param_2) {
        iVar3 = iVar3 + 1;
      }
      iVar1 = fn_006b4f84(*(undefined4 *)(DAT_00897804 + 0x18));
    } while (iVar2 < iVar1);
  }
  return iVar3;
}



void fn_005c1d48(int param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = fn_00689210(*(undefined4 *)(param_1 + 0x70),(char *)&DAT_005c1d70);
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | param_2;
  return;
}



void fn_005c1d18(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x74);
  *(undefined1 *)(iVar1 + 0x81) = 1;
  fn_0031f3f4(iVar1,0);
  *(undefined1 *)(*(int *)(param_1 + 0x74) + 0x83) = 0;
  fn_0031f954();
  return;
}



void fn_005c1bd0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = fn_002b0af8(*(undefined4 *)(DAT_00897804 + 100));
  uVar2 = fn_0068897c(*(undefined4 *)(param_1 + 0x70),(char *)&DAT_005c1bb8);
  uVar3 = fn_0068897c(*(undefined4 *)(param_1 + 0x70),(char *)&DAT_005c1bc0);
  uVar4 = fn_00192cb4(DAT_00897800,0xa4,0);
  fn_00190d50(uVar2,uVar4);
  fn_00688c04(uVar3,uVar1,0);
  return;
}



void fn_005c1b58(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = fn_0068897c(*(undefined4 *)(param_1 + 0x70),(char *)&DAT_005c1bb8);
  uVar2 = fn_0068897c(*(undefined4 *)(param_1 + 0x70),(char *)&DAT_005c1bc0);
  uVar3 = fn_00192cb4(DAT_00897800,0xa4,0);
  fn_00190d50(uVar1,uVar3);
  fn_00688c04(uVar2,param_2,0);
  return;
}


