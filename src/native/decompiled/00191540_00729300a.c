#include "00191540_00729300a.h"



bool fn_002ce908(int param_1)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  
  cVar1 = *(char *)(param_1 + 8);
  cVar2 = *(char *)(param_1 + 10);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  *(char *)(param_1 + 9) = cVar1;
  *(char *)(param_1 + 8) = cVar2;
  if (cVar1 == cVar2) {
    iVar5 = *(int *)(param_1 + 0x10) + 1;
  }
  else {
    iVar5 = 0;
  }
  *(int *)(param_1 + 0x10) = iVar5;
  if (cVar2 == '\x01') {
    if ((iVar5 == 0) && (*(char *)(param_1 + 0x14) != '\0')) {
      fn_0030f990(*(undefined4 *)(param_1 + 0x18));
    }
    *(undefined1 *)(param_1 + 10) = 2;
  }
  else if (cVar2 == '\x02') {
    if (iVar5 == 0) {
      uVar3 = fn_001603f8(auStack_1c,0xff);
      uVar4 = fn_001603f8(auStack_20,0);
      fn_0068869c(DAT_00897808,uVar4,uVar3,0x14);
      uVar3 = fn_001603f8(auStack_20,0xff);
      uVar4 = fn_001603f8(auStack_1c,0);
      fn_0068869c(DAT_0089780c,uVar4,uVar3,0x14);
    }
    if (DAT_0089780c[5] == DAT_0089780c[3] && DAT_00897808[5] == DAT_00897808[3]) {
      *(undefined1 *)(param_1 + 10) = 3;
    }
  }
  else if (cVar2 == '\x03') {
    if (iVar5 == 0) {
      fn_00129004();
      fn_00121084();
      fn_00129004();
      fn_00120f74();
      fn_00129004();
      fn_001210e8();
    }
    if (2 < *(uint *)(param_1 + 0x10)) {
      *(undefined1 *)(param_1 + 10) = 4;
    }
  }
  else if (cVar2 == '\x04' && iVar5 == 0) {
    if (*(int *)(param_1 + 0x2c) != 0) {
      fn_002ceeb8();
      fn_002feef8();
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
    fn_0034f07c(*(undefined4 *)(param_1 + 0x20));
  }
  (**(code **)(*DAT_00897808 + 8))(DAT_00897808,1);
  (**(code **)(*DAT_0089780c + 8))(DAT_0089780c,1);
  return *(char *)(param_1 + 8) == '\x04';
}



void fn_00191540(undefined4 *param_1,undefined4 *param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = DAT_0089a520;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = DAT_0089a524;
  }
  return;
}


