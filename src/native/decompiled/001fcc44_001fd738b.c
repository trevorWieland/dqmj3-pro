#include "001fcc44_001fd738b.h"



void fn_001fd738(undefined4 *param_1)

{
  fn_001fce04(*param_1);
  return;
}



void fn_001fd4b8(int param_1,int param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (param_2 == 0) {
    return;
  }
  iVar5 = 0;
  do {
    iVar3 = fn_00689210(param_2,(&DAT_008c42f4)[iVar5]);
    iVar5 = iVar5 + 1;
    *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe;
  } while (iVar5 < 4);
  iVar5 = 0;
  do {
    iVar3 = fn_00689210(param_2,(&DAT_008c430c)[iVar5]);
    iVar5 = iVar5 + 1;
    *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe;
  } while (iVar5 < 4);
  iVar5 = 0;
  do {
    iVar3 = fn_00689210(param_2,(&DAT_008c4304)[iVar5]);
    iVar5 = iVar5 + 1;
    *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe;
  } while (iVar5 < 2);
  iVar5 = 0;
  do {
    iVar3 = fn_00689210(param_2,(&DAT_008c431c)[iVar5]);
    iVar5 = iVar5 + 1;
    *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe;
  } while (iVar5 < 2);
  fn_0014481c(DAT_008977e8);
  iVar5 = fn_00263814();
  cVar2 = *(char *)(iVar5 + 0x104);
  iVar3 = 0;
  fn_0014481c(DAT_008977e8);
  iVar5 = fn_006b6bc4();
  if (0 < iVar5) {
    do {
      if (cVar2 == iVar3) {
        uVar4 = fn_00689210(param_2,(&DAT_008c42f4)[iVar3]);
        *(undefined4 *)(param_1 + iVar3 * 4 + 0x7c) = uVar4;
      }
      else if ((*(char *)(param_1 + 0xe4c) == '\0') || (iVar3 < 2)) {
        uVar4 = fn_00689210(param_2,(&DAT_008c430c)[iVar3]);
        *(undefined4 *)(param_1 + iVar3 * 4 + 0x7c) = uVar4;
      }
      else {
        cVar1 = (char)iVar3 + -2;
        if ((char)(cVar2 + '\x02') == iVar3) {
          uVar4 = fn_00689210(param_2,(&DAT_008c4304)[cVar1]);
          *(undefined4 *)(param_1 + iVar3 * 4 + 0x7c) = uVar4;
        }
        else {
          uVar4 = fn_00689210(param_2,(&DAT_008c431c)[cVar1]);
          *(undefined4 *)(param_1 + iVar3 * 4 + 0x7c) = uVar4;
        }
      }
      iVar3 = iVar3 + 1;
      fn_0014481c(DAT_008977e8);
      iVar5 = fn_006b6bc4();
    } while (iVar3 < iVar5);
  }
  iVar5 = *(int *)(param_1 + 0x7c);
  if (iVar5 != 0) {
    *(byte *)(iVar5 + 0x44) = *(byte *)(iVar5 + 0x44) & 0xfe | 1;
  }
  iVar5 = *(int *)(param_1 + 0x80);
  if (iVar5 != 0) {
    *(byte *)(iVar5 + 0x44) = *(byte *)(iVar5 + 0x44) & 0xfe | 1;
  }
  iVar5 = *(int *)(param_1 + 0x84);
  if (iVar5 != 0) {
    *(byte *)(iVar5 + 0x44) = *(byte *)(iVar5 + 0x44) & 0xfe | 1;
  }
  iVar5 = *(int *)(param_1 + 0x88);
  if (iVar5 != 0) {
    *(byte *)(iVar5 + 0x44) = *(byte *)(iVar5 + 0x44) & 0xfe | 1;
  }
  uVar4 = fn_00689210(param_2,DAT_008c42f0);
  *(undefined4 *)(param_1 + 0xe20) = uVar4;
  return;
}



void fn_001fd428(void)

{
  undefined1 local_18 [4];
  undefined1 local_14 [12];
  
  fn_0017fe34();
  fn_0052534c(local_18,local_14);
  return;
}


