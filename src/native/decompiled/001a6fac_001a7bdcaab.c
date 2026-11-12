#include "001a6fac_001a7bdcaab.h"



void fn_001a7040(int *param_1)

{
  int iVar1;
  
  fn_001a2d50();
  while (iVar1 = *param_1, (iVar1 == 0x25 || iVar1 == 0x2a) || iVar1 == 0x2f) {
    fn_001a6fac(param_1,0x11,fn_001a2d50,0,iVar1);
  }
  while (iVar1 = *param_1, iVar1 == 0x2b || iVar1 == 0x2d) {
    fn_001a6fac(param_1,0x11,fn_001cd91c,0,iVar1);
  }
  while( true ) {
    while( true ) {
      while (iVar1 = *param_1, iVar1 == 0x128) {
        fn_001a6fac(param_1,0x12,fn_001cd968,0,4);
      }
      if (iVar1 != 0x129) break;
      fn_001a6fac(param_1,0x12,fn_001cd968,0,5);
    }
    if (iVar1 != 0x132) break;
    fn_001a6fac(param_1,0x12,fn_001cd968,0,6);
  }
  while( true ) {
    while( true ) {
      while( true ) {
        while (iVar1 = *param_1, iVar1 == 0x109) {
          fn_001a6fac(param_1,0x10,fn_001cd9e4,0,0);
        }
        if (0x108 < iVar1) break;
        if (iVar1 == 0x3c) {
          fn_001a6fac(param_1,0x28,fn_001cd9e4,0,3);
        }
        else if (iVar1 == 0x3e) {
          fn_001a6fac(param_1,0x28,fn_001cd9e4,0,0);
        }
        else {
          if (iVar1 != 0x108) {
            return;
          }
          fn_001a6fac(param_1,0xf,fn_001cd9e4,0,0);
        }
      }
      if (iVar1 != 0x10a) break;
      fn_001a6fac(param_1,0x28,fn_001cd9e4,0,4);
    }
    if (iVar1 != 0x10b) break;
    fn_001a6fac(param_1,0x28,fn_001cd9e4,0,2);
  }
  return;
}


