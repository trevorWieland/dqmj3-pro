#include "0042ed0c_0042f848b.h"



void fn_0042f848(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  
  if (*(char *)(*(int *)(param_1 + 0x98) + 0xb) != *(char *)(param_1 + 0x73)) {
    cVar1 = *(char *)(*(int *)(param_1 + 0x98) + 0xb);
    *(char *)(param_1 + 0x73) = cVar1;
    iVar2 = *(int *)(param_1 + 0x80);
    bVar4 = *(byte *)(iVar2 + 0x44) & 0xfe;
    if (cVar1 != '\0') {
      *(byte *)(iVar2 + 0x44) = bVar4 | 1;
      *(byte *)(*(int *)(param_1 + 0x84) + 0x44) =
           *(byte *)(*(int *)(param_1 + 0x84) + 0x44) & 0xfe | 1;
      *(byte *)(*(int *)(param_1 + 0x88) + 0x44) =
           *(byte *)(*(int *)(param_1 + 0x88) + 0x44) & 0xfe | 1;
      uVar3 = fn_0034514c(*(undefined1 *)(param_1 + 0x73));
      fn_00688c04(*(undefined4 *)(param_1 + 0x88),uVar3,0);
      fn_00688c04(*(undefined4 *)(param_1 + 0x80),*(undefined1 *)(param_1 + 0x73),0);
      fn_00688c04(*(undefined4 *)(param_1 + 0x84),*(undefined1 *)(param_1 + 0x73),0);
      return;
    }
    *(byte *)(iVar2 + 0x44) = bVar4;
    *(byte *)(*(int *)(param_1 + 0x84) + 0x44) = *(byte *)(*(int *)(param_1 + 0x84) + 0x44) & 0xfe;
    *(byte *)(*(int *)(param_1 + 0x88) + 0x44) = *(byte *)(*(int *)(param_1 + 0x88) + 0x44) & 0xfe;
  }
  return;
}



undefined4 fn_0042f4c4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  
  fn_00121838(DAT_00897800,DAT_0089878c,1,param_4,param_4);
  iVar1 = (**(code **)(*param_1 + 8))(param_1);
  uVar4 = *(undefined4 *)(iVar1 + 8);
  iVar1 = fn_001481c8(uVar4,DAT_00893f70,&DAT_0042f5ac,1,1);
  param_1[0x1a] = iVar1;
  iVar1 = fn_001923e0(uVar4,DAT_00893f74,0,1,0);
  param_1[0x1b] = iVar1;
  iVar1 = fn_00178f9c(uVar4,iVar1);
  param_1[0x19] = iVar1;
  uVar4 = *(undefined4 *)(iVar1 + 0x10);
  iVar1 = 0;
  do {
    iVar2 = fn_0068897c(uVar4,(&DAT_00893f88)[iVar1]);
    iVar5 = iVar1 + 1;
    param_1[iVar1 + 0x1d] = iVar2;
    iVar1 = iVar5;
  } while (iVar5 < 9);
  piVar3 = (int *)fn_0017dd54(param_1[0x19],&DAT_0042f5b4,1);
  param_1[0x27] = (int)piVar3;
  (**(code **)(*piVar3 + 0x54))();
  return 1;
}



void fn_0042f454(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  fn_001218d4(DAT_00897800,DAT_0089878c);
  iVar1 = (**(code **)(*param_1 + 8))(param_1);
  uVar2 = *(undefined4 *)(iVar1 + 8);
  if (param_1[0x1b] != -1) {
    fn_0016a43c(uVar2);
    param_1[0x1b] = -1;
  }
  if (param_1[0x1a] != -1) {
                    /* WARNING: Subroutine does not return */
    fn_001482f4(uVar2);
  }
  return;
}


