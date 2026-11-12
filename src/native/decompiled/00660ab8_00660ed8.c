#include "00660ab8_00660ed8.h"



undefined4 fn_00660ed8(int param_1)

{
  return *(undefined4 *)(DAT_008994c4 + param_1 * 0x40 + 0x1c);
}



undefined1 fn_00660ec0(int param_1)

{
  return *(undefined1 *)(DAT_008994c4 + param_1 * 0x40 + 0x11);
}



undefined1 fn_00660ea8(int param_1)

{
  return *(undefined1 *)(DAT_008994c4 + param_1 * 0x40 + 0x12);
}



bool fn_00660e88(int param_1)

{
  return *(short *)(DAT_008994c4 + param_1 * 0x40 + 0x16) != 0;
}



bool fn_00660e64(int param_1)

{
  return *(char *)(DAT_008994c4 + param_1 * 0x40 + 0x11) == '#';
}



bool fn_00660e44(int param_1)

{
  return *(char *)(DAT_008994c4 + param_1 * 0x40 + 0x26) != '\0';
}



undefined1 fn_00660e2c(int param_1)

{
  return *(undefined1 *)(DAT_008994c4 + param_1 * 0x40 + 0x10);
}



bool fn_00660e0c(int param_1)

{
  return *(char *)(DAT_008994c4 + param_1 * 0x40 + 0x13) != '\0';
}



undefined4 fn_00660d78(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  
  if (((param_1 == 0) || (param_4 < (int)(uint)(param_3 == 0))) ||
     (iVar1 = fn_00147e6c(param_1,&DAT_00660e00), iVar1 != 0)) {
    DAT_008994c4 = 0;
  }
  else {
    DAT_008994c4 = param_1 + 4;
  }
  if ((param_3 - 4 & 0x3f) != 0) {
    DAT_008994c4 = 0;
  }
  if ((int)-(param_4 + (uint)(4 < param_3)) < 0 ==
      (SBORROW4(0,param_4) != SBORROW4(-param_4,(uint)(4 < param_3)))) {
    DAT_008994c8 = 0;
  }
  else {
    DAT_008994c8 = fn_0011c134(param_3 - 4,param_4 - (uint)(param_3 < 4),0x40,0);
  }
  return 1;
}



int fn_00660d60(int param_1)

{
  return (int)*(short *)(DAT_008994c4 + param_1 * 0x40 + 0x14);
}



uint fn_00660d3c(int param_1)

{
  return (*(byte *)(DAT_008994b0 + param_1 * 0x48 + 4) & 0xf) >> 3;
}



undefined1 fn_00660d20(int param_1)

{
  return *(undefined1 *)(DAT_008994b0 + param_1 * 0x48 + 0x10);
}



undefined4 fn_00660d04(int param_1)

{
  return *(undefined4 *)(DAT_008994b0 + param_1 * 0x48 + 0x1c);
}



void fn_00660ce8(void)

{
  DAT_008994b0 = 0;
  DAT_008994b4 = 0;
  DAT_008994b8 = 0;
  return;
}



undefined4 fn_00660ccc(int param_1)

{
  return *(undefined4 *)(DAT_008994b0 + param_1 * 0x48 + 0x18);
}



undefined4 fn_00660c80(undefined4 param_1)

{
  switch(param_1) {
  default:
    return 0;
  case 0x47:
    return 1;
  case 0x48:
    return 2;
  case 0x49:
    return 3;
  case 0x4a:
    return 4;
  }
}



undefined4 fn_00660c64(int param_1)

{
  return *(undefined4 *)(DAT_008994b0 + param_1 * 0x48 + 8);
}



int fn_00660c48(void)

{
  return (int)(short)DAT_008994b4;
}



undefined4 fn_00660c24(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 0) || (param_1 != 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0x1a9;
  }
  return uVar1;
}



undefined4 fn_00660c04(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0x1a9) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



int fn_00660be8(int param_1)

{
  return (int)*(short *)(DAT_008994b0 + param_1 * 0x48 + 0x20);
}



undefined * fn_00660bd8(int param_1)

{
  return &UNK_007d5e7a + param_1 * 4;
}



int fn_00660bbc(int param_1)

{
  return (int)*(short *)(DAT_008994b0 + param_1 * 0x48 + 0x22);
}



int fn_00660ba0(int param_1)

{
  return (int)*(short *)(DAT_008994b0 + param_1 * 0x48 + 0x24);
}



undefined4 fn_00660ac4(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      switch(*(undefined2 *)(param_1 + iVar1 * 2)) {
      case 0xae:
        return 0x19b;
      case 0xaf:
        return 0x19c;
      case 0xb0:
        return 0x19d;
      case 0xb1:
        return 0x19e;
      case 0xb2:
        return 0x19f;
      case 0xb3:
        return 0x1a0;
      case 0xb4:
        return 0x1a1;
      case 0xb5:
        return 0x1a2;
      case 0xb6:
        return 0x1a3;
      case 0xb7:
        return 0x1a4;
      case 0xb8:
        return 0x1a5;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return 1;
}



undefined4 fn_00660ab8(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    switch(*(undefined2 *)(param_1 + 0x284 + iVar1 * 2)) {
    case 0xae:
      return 0x19b;
    case 0xaf:
      return 0x19c;
    case 0xb0:
      return 0x19d;
    case 0xb1:
      return 0x19e;
    case 0xb2:
      return 0x19f;
    case 0xb3:
      return 0x1a0;
    case 0xb4:
      return 0x1a1;
    case 0xb5:
      return 0x1a2;
    case 0xb6:
      return 0x1a3;
    case 0xb7:
      return 0x1a4;
    case 0xb8:
      return 0x1a5;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x4c);
  return 1;
}


