#include "004daa68_004db800.h"



void fn_004db800(int param_1)

{
  if (*(char *)(param_1 + 4) != '\0') {
    fn_004dedec(DAT_008bf504);
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



undefined1 * fn_004db778(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined1 local_20 [4];
  undefined1 auStack_1c [16];
  
  puVar1 = DAT_008bf4e0;
  if (param_1 == 1) {
    if (DAT_008bf4e0 != (undefined1 *)0x0) {
      fn_0014f590(local_20);
      fn_004ed6f4(local_20,param_2);
      fn_00505d00(DAT_008bf4e0,local_20);
      puVar1 = auStack_1c;
    }
  }
  else if ((param_1 == 2) && (DAT_008bf4e0 != (undefined1 *)0x0)) {
    puVar1 = (undefined1 *)fn_00505d4c(DAT_008bf4e0,1);
    return puVar1;
  }
  return puVar1;
}



undefined1 * fn_004db520(void)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = fn_004df23c();
  if (iVar1 == 0) {
    puVar2 = &DAT_e0a1482b;
  }
  else {
    iVar1 = fn_004df22c(iVar1);
    puVar2 = &DAT_e0a14827;
    if (iVar1 != 0) {
      if (DAT_008bf4fc != (undefined4 *)0x0) {
        return &DAT_d8a1482e;
      }
      if (DAT_008bf504 - 0x100000U < 0x3ff00000) {
        DAT_008bf4fc = (undefined4 *)fn_004ecfe0(8);
        if (DAT_008bf4fc != (undefined4 *)0x0) {
          *(undefined1 *)(DAT_008bf4fc + 1) = 0;
          *DAT_008bf4fc = &DAT_008563a8;
        }
        return (undefined1 *)0x0;
      }
    }
  }
  return puVar2;
}



undefined1 * fn_004db3c8(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined *local_18;
  char *local_14;
  
  iVar1 = fn_004ed5b0(0,0x4000194);
  if (iVar1 == 0) {
    return &DAT_e0a14827;
  }
  if (DAT_008bf4fa == '\0') {
    local_14 = "pia local heap";
    local_18 = &DAT_00859700;
    fn_004ed230(3,0,&local_18);
    puVar2 = (undefined1 *)0x0;
    DAT_008bf4fa = '\x01';
  }
  else {
    puVar2 = &DAT_e0a14821;
  }
  return puVar2;
}



longlong fn_004db2b4(void)

{
  undefined1 *puVar1;
  uint uVar2;
  uint extraout_r1;
  
  if (DAT_008bf4fa == '\0') {
    puVar1 = &DAT_e0a1482b;
    uVar2 = 0;
  }
  else {
    uVar2 = (uint)DAT_008bf4fb;
    if (uVar2 == 0) {
      DAT_008bf4fb = 1;
      fn_004ed204(3);
      return (ulonglong)extraout_r1 << 0x20;
    }
    if (DAT_008c0630 != 0) {
      uVar2 = 8;
    }
    puVar1 = &DAT_e0a14827;
  }
  return CONCAT44(uVar2,puVar1);
}



int fn_004daa68(int *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  if (-1 < *param_1) {
    return 0;
  }
  iVar1 = fn_004da66c(param_1);
  if (iVar1 != 0) {
    puVar2 = (undefined1 *)*param_1;
    if (puVar2 == (undefined1 *)0xf8a148c4) {
      if (DAT_008bf508 != 0) {
        return DAT_008bf508;
      }
    }
    else {
      if (puVar2 == (undefined1 *)0xe0614820) {
        return 0x2bf21;
      }
      if (puVar2 == &DAT_e0a14821) {
        return 0x2bf22;
      }
      if (puVar2 == (undefined1 *)0xe0e14823) {
        return 0x2bf23;
      }
      if (puVar2 == (undefined1 *)0xd9614822) {
        return 0x2bf24;
      }
      if (puVar2 == (undefined1 *)0xd9214824) {
        return 0x2bf25;
      }
      if (puVar2 == (undefined1 *)0xd8a14825) {
        return 0x2bf26;
      }
      if (puVar2 == (undefined1 *)0xe0e14826) {
        return 0x2bf27;
      }
      if (puVar2 == &DAT_e0a14827) {
        return 0x2bf28;
      }
      if (puVar2 == (undefined1 *)0xd1614828) {
        return 0x2bf29;
      }
      if (puVar2 == &DAT_d8814829) {
        return 0x2bf2a;
      }
      if (puVar2 == (undefined1 *)0xe161482a) {
        return 0x2bf2b;
      }
      if (puVar2 == &DAT_e0a1482b) {
        return 0x2bf2c;
      }
      if (puVar2 == (undefined1 *)0xd861482c) {
        return 0x2bf2d;
      }
      if (puVar2 == (undefined1 *)0xd941482d) {
        return 0x2bf2e;
      }
      if (puVar2 == &DAT_d8a1482e) {
        return 0x2bf2f;
      }
      if (puVar2 == (undefined1 *)0xd8a1482f) {
        return 0x2bf30;
      }
      if (puVar2 == (undefined1 *)0xd0a14830) {
        return 0x2bf31;
      }
      if (puVar2 == (undefined1 *)0xc8a14831) {
        return 0x2bf32;
      }
      if (puVar2 == (undefined1 *)0xd8a14832) {
        return 0x2bf33;
      }
      if (puVar2 == (undefined1 *)0xe1614840) {
        return 0x2bf85;
      }
      if (puVar2 == (undefined1 *)0xd8a148c1) {
        return 0x2bfe9;
      }
      if (puVar2 == (undefined1 *)0xd8a148c2) {
        return 0x2bfea;
      }
      if (puVar2 == (undefined1 *)0xd8a148c3) {
        return 0x2bfeb;
      }
      if (puVar2 == (undefined1 *)0xd0814864) {
        return 0x2c04d;
      }
      if (puVar2 == (undefined1 *)0xd8814865) {
        return 0x2c04e;
      }
      if (puVar2 == (undefined1 *)0xd0814866) {
        return 0x2c04f;
      }
      if (puVar2 == (undefined1 *)0xd0a14867) {
        return 0x2c050;
      }
      if (puVar2 == (undefined1 *)0xd8a14868) {
        return 0x2c051;
      }
      if (puVar2 == (undefined1 *)0xd9414869) {
        return 0x2c052;
      }
      if (puVar2 == (undefined1 *)0xd8a1486a) {
        return 0x2c053;
      }
      if (puVar2 == (undefined1 *)0xd8a1486b) {
        return 0x2c054;
      }
      if (puVar2 == (undefined1 *)0xd8a1486c) {
        return 0x2c055;
      }
      if (puVar2 == (undefined1 *)0xd8a1486d) {
        return 0x2c056;
      }
      if (puVar2 == (undefined1 *)0xd9614881) {
        return 0x2c0b1;
      }
      if (puVar2 == (undefined1 *)0xd9614882) {
        return 0x2c0b2;
      }
      if (puVar2 == (undefined1 *)0xd8a14883) {
        return 0x2c0b3;
      }
      if (puVar2 == (undefined1 *)0xd8a14884) {
        return 0x2c0b4;
      }
      if (puVar2 == (undefined1 *)0xd8a14885) {
        return 0x2c0b5;
      }
      if (puVar2 == (undefined1 *)0xd8a148e0) {
        return 0x2c115;
      }
      if (puVar2 == (undefined1 *)0xd8a148e1) {
        return 0x2c116;
      }
      if (puVar2 == (undefined1 *)0xd8a148e2) {
        return 0x2c117;
      }
      if (puVar2 == (undefined1 *)0xd8a148e3) {
        return 0x2c118;
      }
      if (puVar2 == (undefined1 *)0xd8a148e4) {
        return 0x2c119;
      }
      if (puVar2 == (undefined1 *)0xd8a148e5) {
        return 0x2c11a;
      }
      if (puVar2 == (undefined1 *)0xd8a148e6) {
        return 0x2c11b;
      }
      if (puVar2 == (undefined1 *)0xd8a148e7) {
        return 0x2c11e;
      }
      if (puVar2 == (undefined1 *)0xd8a148e8) {
        return 0x2c11f;
      }
      if (puVar2 == (undefined1 *)0xd8a148e9) {
        return 0x2c120;
      }
      if (puVar2 == (undefined1 *)0xd8a148ea) {
        return 0x2c121;
      }
      if (puVar2 == (undefined1 *)0xd8a148ed) {
        return 0x2c122;
      }
      if (puVar2 == (undefined1 *)0xd8a148eb) {
        return 0x2c123;
      }
      if (puVar2 == (undefined1 *)0xd8a148ec) {
        return 0x2c124;
      }
      if (puVar2 == (undefined1 *)0xd8a148ee) {
        return 0x2c125;
      }
      if (puVar2 == (undefined1 *)0xd8a148ef) {
        return 0x2c126;
      }
      if (puVar2 == (undefined1 *)0xd8a148f0) {
        return 0x2c127;
      }
      if (puVar2 == (undefined1 *)0xd8a148f1) {
        return 0x2c128;
      }
      if (puVar2 == (undefined1 *)0xd8a148f2) {
        return 0x2c129;
      }
      if (puVar2 == (undefined1 *)0xd8a148f3) {
        return 0x2c13d;
      }
      if (puVar2 == (undefined1 *)0xd8a148f4) {
        return 0x2c13e;
      }
      if (puVar2 == (undefined1 *)0xd8a148f5) {
        return 0x2c13f;
      }
      if (puVar2 == (undefined1 *)0xd8a148f6) {
        return 0x2c140;
      }
      if (puVar2 == (undefined1 *)0xd8a148f9) {
        return 0x2c141;
      }
      if (puVar2 == (undefined1 *)0xd8a148fa) {
        return 0x2c142;
      }
      if (puVar2 == (undefined1 *)0xd8a148f8) {
        return 0x2c143;
      }
      if (puVar2 == (undefined1 *)0xd8a148fb) {
        return 0x2c144;
      }
      if (puVar2 == (undefined1 *)0xd8a148fc) {
        return 0x2c145;
      }
      if (puVar2 == (undefined1 *)0xd8a148fd) {
        return 0x2c146;
      }
      if (puVar2 == (undefined1 *)0xd8a148fe) {
        return 0x2c147;
      }
      if (puVar2 == (undefined1 *)0xd8a14900) {
        return 0x2c148;
      }
      if (puVar2 == (undefined1 *)0xd8a14901) {
        return 0x2c149;
      }
      if (puVar2 == (undefined1 *)0xd8a14902) {
        return 0x2c14a;
      }
      if (puVar2 == (undefined1 *)0xd8a14904) {
        return 0x2c14b;
      }
      if (puVar2 == (undefined1 *)0xd8a14905) {
        return 0x2c14c;
      }
      if (puVar2 == (undefined1 *)0xd8a14906) {
        return 0x2c14d;
      }
      if (puVar2 == (undefined1 *)0xd8a148f7) {
        return 0x2c151;
      }
      if (puVar2 == (undefined1 *)0xd8a14903) {
        return 0x2c152;
      }
      if (puVar2 == (undefined1 *)0xd82148a4) {
        return 0x2c17a;
      }
      if (puVar2 == (undefined1 *)0xd82148aa) {
        return 0x2c17e;
      }
      if (puVar2 == (undefined1 *)0xd8a14981) {
        return 0x2c241;
      }
    }
  }
  return 180000;
}


