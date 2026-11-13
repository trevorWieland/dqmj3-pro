#include "006613b4_00661770.h"



int fn_00661770(int param_1)

{
  return (int)*(short *)(DAT_00892804 + param_1 * 0x78 + 0x24);
}



void fn_00661758(void)

{
  DAT_00892804 = 0;
  DAT_00892808 = 0;
  return;
}



int fn_0066173c(int param_1)

{
  return (int)*(char *)(DAT_00892804 + param_1 * 0x78 + 0x30);
}



undefined1 fn_00661714(int param_1)

{
  return *(undefined1 *)(DAT_00892804 + param_1 * 0x78 + 0x22);
}



int fn_006616f4(int param_1,int param_2)

{
  return (int)*(short *)(DAT_00892804 + param_1 * 0x78 + param_2 * 2 + 0x32);
}



int fn_006616e0(void)

{
  return (int)(short)DAT_00892808;
}



int fn_006616c4(int param_1)

{
  return (int)*(char *)(DAT_00892804 + param_1 * 0x78 + 0x62);
}



int fn_006616a8(int param_1)

{
  return (int)*(short *)(DAT_00892804 + param_1 * 0x78 + 0x66);
}



int fn_0066168c(int param_1)

{
  return (int)*(char *)(DAT_00892804 + param_1 * 0x78 + 0x61);
}



int fn_00661670(int param_1)

{
  return (int)*(char *)(DAT_00892804 + param_1 * 0x78 + 99);
}



int fn_00661654(int param_1)

{
  return (int)*(char *)(DAT_00892804 + param_1 * 0x78 + 0x60);
}



int fn_00661638(int param_1)

{
  return (int)*(char *)(DAT_00892804 + param_1 * 0x78 + 0x5f);
}



int fn_0066161c(int param_1)

{
  return (int)*(short *)(DAT_00892804 + param_1 * 0x78 + 0x6a);
}



int fn_00661600(int param_1)

{
  return (int)*(char *)(DAT_00892804 + param_1 * 0x78 + 0x68);
}



int fn_006615e4(int param_1)

{
  return (int)*(char *)(DAT_00892804 + param_1 * 0x78 + 100);
}



int fn_006615d4(void)

{
  return (int)DAT_00892800;
}



undefined4 fn_0066158c(undefined4 param_1)

{
  switch(param_1) {
  case 0:
  case 1:
    return 2;
  case 2:
    return 3;
  case 3:
    return 4;
  case 4:
    return 5;
  default:
    return 1;
  }
}



int fn_00661570(int param_1)

{
  return (int)*(char *)(DAT_00892804 + param_1 * 0x78 + 0x5e);
}



int fn_00661550(void)

{
  return (int)DAT_008927fe;
}



int fn_00661534(int param_1)

{
  return (int)*(char *)(DAT_00892804 + param_1 * 0x78 + 0x6c);
}



int fn_00661518(int param_1)

{
  return (int)*(short *)(DAT_00892804 + param_1 * 0x78 + 0x76);
}



int fn_006614fc(int param_1)

{
  return (int)*(short *)(DAT_00892804 + param_1 * 0x78 + 0x74);
}



int fn_006614d0(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1 < (int)(&DAT_007c4510)[uVar1]) break;
    uVar1 = uVar1 + 1;
  } while (uVar1 < 3);
  return (int)(short)uVar1;
}



int fn_006614b4(int param_1)

{
  return (int)*(short *)(DAT_00892804 + param_1 * 0x78 + 0x70);
}



uint fn_00661430(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  short asStack_80 [32];
  short local_40 [32];
  
  uVar1 = (uint)*(char *)(DAT_00892804 + param_1 * 0x78 + param_2 + 0x44);
  if (7 < (int)uVar1) {
    iVar2 = 0;
    if (param_3 < 100) {
      if (param_3 < 0x32) {
        if (0x18 < param_3) {
          iVar2 = 1;
        }
      }
      else {
        iVar2 = 2;
      }
    }
    else {
      iVar2 = 3;
    }
    local_40[0] = 0;
    local_40[1] = 0;
    local_40[2] = 0;
    local_40[3] = 1;
    local_40[4] = 0;
    local_40[5] = 1;
    local_40[6] = 1;
    local_40[7] = 2;
    local_40[8] = 0;
    local_40[9] = 1;
    local_40[10] = 2;
    local_40[0xb] = 3;
    local_40[0xc] = 0;
    local_40[0xd] = 1;
    local_40[0xe] = 2;
    local_40[0xf] = 4;
    local_40[0x10] = 1;
    local_40[0x11] = 2;
    local_40[0x12] = 3;
    local_40[0x13] = 5;
    local_40[0x14] = 1;
    local_40[0x15] = 2;
    local_40[0x16] = 4;
    local_40[0x17] = 6;
    local_40[0x18] = 1;
    local_40[0x19] = 2;
    local_40[0x1a] = 5;
    local_40[0x1b] = 6;
    local_40[0x1c] = 1;
    local_40[0x1d] = 3;
    local_40[0x1e] = 5;
    local_40[0x1f] = 7;
    uVar1 = (uint)asStack_80[uVar1 * 4 + iVar2];
  }
  return uVar1 & 0xff;
}



int fn_00661414(int param_1)

{
  return (int)*(short *)(DAT_00892804 + param_1 * 0x78 + 0x6e);
}



int fn_006613ec(int param_1,uint param_2)

{
  if (4 < param_2) {
    param_2 = 0;
  }
  return (int)*(short *)(DAT_00892804 + param_1 * 0x78 + param_2 * 2 + 0x32);
}



int fn_006613d0(int param_1)

{
  return (int)*(short *)(DAT_00892804 + param_1 * 0x78 + 0x72);
}



int fn_006613b4(int param_1)

{
  return (int)*(short *)(DAT_00892804 + param_1 * 0x78 + 0x2a);
}


