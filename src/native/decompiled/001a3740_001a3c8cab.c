#include "001a3740_001a3c8cab.h"



void fn_001a38dc(uint *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  
  if ((*(char *)((int)param_1 + 0xe) == '\x01') && (0 < param_3 + -0x9ffc4)) {
    param_2 = param_2 - (param_3 + -0x9ffc4);
  }
  fn_00170704(param_1 + 4);
  for (puVar4 = (uint *)param_1[1]; puVar4 != (uint *)0x0; puVar4 = (uint *)puVar4[10]) {
    uVar1 = puVar4[0x1a];
    if ((*(char *)(uVar1 + 0xd) == '\0') && (*(int *)(uVar1 + 0x30) != 0)) {
      iVar2 = *(int *)(uVar1 + 0x2c);
      if ((param_2 < iVar2) && (puVar4[8] != 0x7fff)) {
        if ((*param_1 & 1 << (*puVar4 & 0xff)) != 0) {
          if ((char)puVar4[1] != '\x01') {
            fn_0019f2a8(puVar4,1);
          }
          fn_00170704();
          uVar1 = puVar4[9];
          uVar3 = puVar4[10];
          if (uVar1 == 0 && uVar3 == 0) {
            param_1[1] = 0;
            param_1[2] = 0;
          }
          else {
            if ((uVar3 != 0) && (*(uint *)(uVar3 + 0x24) = uVar1, uVar1 == 0)) {
              param_1[1] = uVar3;
            }
            if ((uVar1 != 0) && (uVar3 = puVar4[10], *(uint *)(uVar1 + 0x28) = uVar3, uVar3 == 0)) {
              param_1[2] = uVar1;
            }
          }
          *param_1 = *param_1 & ~(1 << (*puVar4 & 0xff));
          *(short *)(param_1 + 3) = (short)param_1[3] + -1;
          fn_001707b4(param_1 + 4);
        }
        if ((code *)puVar4[0xb] != (code *)0x0) {
          (*(code *)puVar4[0xb])(puVar4,puVar4[0xc]);
        }
      }
      else {
        fn_001a80f0(puVar4[0x1a]);
        if (*(char *)(puVar4[0x1a] + 0xc) == '\0') {
          fn_001a82cc();
        }
        param_2 = param_2 - iVar2;
      }
    }
  }
  fn_001707b4(param_1 + 4);
  return;
}



void fn_001a38a8(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    fn_00194004(*(undefined4 *)(*(int *)(param_1 + iVar1 * 4 + 0x18dc) + 0x68));
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x18);
  return;
}



int fn_001a3834(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  iVar1 = 0;
  do {
    iVar3 = (char)iVar1 + param_1;
    if (*(char *)(iVar3 + 4) == '\0') {
      iVar3 = 0;
    }
    else {
      iVar3 = (int)*(char *)(iVar3 + 8);
    }
    iVar4 = (int)(char)iVar1 + param_1 + 2;
    iVar1 = iVar1 + 1;
    if (*(char *)(iVar4 + 4) == '\0') {
      iVar4 = 0;
    }
    else {
      iVar4 = (int)*(char *)(iVar4 + 8);
    }
    iVar2 = iVar2 + iVar3 * 10000 + iVar4 * 40000;
  } while (iVar1 < 2);
  return iVar2;
}


