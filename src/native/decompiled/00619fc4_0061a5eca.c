#include "00619fc4_0061a5eca.h"



void fn_0061a1ec(undefined4 param_1,int param_2,int param_3,int param_4,uint *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  char cVar6;
  
  uVar3 = 1;
  uVar4 = 1;
  iVar1 = fn_00692098();
  if (iVar1 != 0) {
    iVar1 = param_4 + param_2 * 0x418;
    uVar2 = 0;
    do {
      if ((&DAT_007f0404)[uVar2 * 3] == (int)*(char *)(iVar1 + -0x4015)) {
        cVar6 = *(char *)(iVar1 + -0x3fe6);
        cVar5 = cVar6;
        if (cVar6 < '\x01') {
          cVar5 = *(char *)(iVar1 + -0x3fe5);
        }
        param_4 = param_4 + param_3 * 0x418;
        if (cVar6 < '\x01') {
          cVar6 = cVar5;
        }
        if (cVar6 < '\x01') {
          cVar6 = *(char *)(iVar1 + -0x3fe4);
          if (cVar6 < '\x01') {
            cVar6 = *(char *)(param_4 + -0x3fe6);
          }
          if (cVar6 < '\x01') {
            cVar6 = *(char *)(param_4 + -0x3fe5);
          }
          uVar3 = (uint)(cVar6 < '\x01');
          if ((cVar6 < '\x01') &&
             (uVar3 = (&DAT_007f0408)[uVar2 * 3], '\0' < *(char *)(param_4 + -0x3fe4)))
          goto LAB_0061a278;
        }
        else {
LAB_0061a278:
          uVar3 = (&DAT_007f040c)[uVar2 * 3];
        }
        uVar4 = (&DAT_007f040c)[uVar2 * 3];
        break;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 4);
  }
  *param_5 = uVar3;
  param_5[1] = uVar4;
  return;
}



void fn_0061a1a4(int param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = fn_006f44fc(param_1,0x1b3);
  if (iVar2 != 0) {
    bVar1 = *(byte *)(param_1 + 0x120);
    if (bVar1 < 0x6e) {
      *(byte *)(param_1 + 0x120) = bVar1 + 1;
      *(undefined2 *)(param_1 + (uint)bVar1 * 2 + 0x124) = 4;
    }
  }
  return;
}



void fn_0061a0a0(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_1 == 0) {
    return;
  }
  iVar3 = fn_006f44fc(param_1,0x1b3);
  if (iVar3 != 0) {
    bVar1 = *(byte *)(param_1 + 0x120);
    if (bVar1 < 0x6e) {
      *(byte *)(param_1 + 0x120) = bVar1 + 1;
      *(undefined2 *)(param_1 + (uint)bVar1 * 2 + 0x124) = 4;
    }
  }
  iVar3 = fn_006f44fc(param_1,0x1d3);
  param_2 = param_2 + 0x180388;
  if (iVar3 != 0) {
    fn_0063b0d8(param_2,0,1);
  }
  iVar3 = fn_006f44fc(param_1,0x1d4);
  if (iVar3 != 0) {
    fn_0063b0d8(param_2,1);
  }
  iVar3 = fn_006f44fc(param_1,0x1d1);
  if ((iVar3 != 0) || (iVar3 = fn_006f44fc(param_1,499), iVar3 != 0)) {
    fn_0063b0d8(param_2,2,1);
  }
  iVar3 = param_1 + 0x3a4;
  uVar6 = 0;
  do {
    uVar5 = uVar6 & 0xff;
    cVar4 = *(char *)(iVar3 + uVar5);
    if (uVar5 == 4) {
      iVar2 = fn_006f44fc(param_1,0x1e4);
joined_r0x0061a068:
      if (iVar2 != 0) {
LAB_0061a06c:
        cVar4 = '\x05';
      }
    }
    else if (uVar5 == 9) {
      iVar2 = fn_006f44fc(param_1,0x1d6);
      if (iVar2 != 0) {
        cVar4 = '\0';
      }
    }
    else if (uVar5 == 0x19) {
      iVar2 = fn_006f44fc(param_1,0x1c4);
      if (iVar2 == 0) {
        iVar2 = fn_006f44fc(param_1,0x1ea);
        goto joined_r0x0061a068;
      }
      goto LAB_0061a06c;
    }
    if (*(char *)(iVar3 + uVar5) != cVar4) {
      *(char *)(iVar3 + uVar5) = cVar4;
      *(undefined1 *)(iVar3 + uVar5 + 0x1a) = 1;
    }
    uVar6 = uVar6 + 1;
    if (0x19 < uVar6) {
      return;
    }
  } while( true );
}



void fn_00619fc4(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = param_1 + 0x3a4;
  uVar5 = 0;
  do {
    uVar4 = uVar5 & 0xff;
    cVar3 = *(char *)(iVar2 + uVar4);
    if (uVar4 == 4) {
      iVar1 = fn_006f44fc(param_1,0x1e4);
joined_r0x0061a068:
      if (iVar1 != 0) {
LAB_0061a06c:
        cVar3 = '\x05';
      }
    }
    else if (uVar4 == 9) {
      iVar1 = fn_006f44fc(param_1,0x1d6);
      if (iVar1 != 0) {
        cVar3 = '\0';
      }
    }
    else if (uVar4 == 0x19) {
      iVar1 = fn_006f44fc(param_1,0x1c4);
      if (iVar1 == 0) {
        iVar1 = fn_006f44fc(param_1,0x1ea);
        goto joined_r0x0061a068;
      }
      goto LAB_0061a06c;
    }
    if (*(char *)(iVar2 + uVar4) != cVar3) {
      *(char *)(iVar2 + uVar4) = cVar3;
      *(undefined1 *)(iVar2 + uVar4 + 0x1a) = 1;
    }
    uVar5 = uVar5 + 1;
    if (0x19 < uVar5) {
      return;
    }
  } while( true );
}


