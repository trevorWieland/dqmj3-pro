#include "00734c5c_00737d6cbab.h"



int fn_0073560c(int param_1)

{
  return *(int *)(param_1 + 0xc) + *(int *)(param_1 + 8);
}



void fn_00735398(uint param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  undefined4 local_20;
  
  puVar1 = DAT_008bfab0;
  local_20 = param_4;
  fn_00146578();
  param_1 = param_1 & ~puVar1[2];
  if ((puVar1[1] & param_1 & 0x2000) != 0) {
    fn_007458f4();
  }
  if (((param_1 & 0x80) != 0) && (local_20 = 0x1c00, (*puVar1 & 0x1c00) != 0)) {
    fn_00729300(&local_20);
  }
  if (((param_1 & 0x100) != 0) && (local_20 = 1, (*puVar1 & 1) != 0)) {
    fn_006f96b8(&local_20);
  }
  if (((param_1 & 0x200) != 0) && ((*(uint *)(DAT_0089a51c + 8) & *puVar1) != 0)) {
    fn_00157994(puVar1);
  }
  if ((param_1 & 0x1e7f) != 0) {
    *(undefined1 *)(puVar1 + 6) = 1;
    if (param_2 == 0) {
      *(undefined1 *)((int)puVar1 + 0x19) = 1;
    }
    fn_006fb25c(puVar1,param_1);
    *(undefined1 *)(puVar1 + 6) = 0;
    *(undefined1 *)((int)puVar1 + 0x19) = 0;
  }
  if ((param_1 & 1) != 0) {
    *puVar1 = *puVar1 & 0xffefffff;
  }
  if ((param_1 & 4) != 0) {
    *puVar1 = *puVar1 & 0xfe7fffff;
  }
  if ((param_1 & 8) != 0) {
    *puVar1 = *puVar1 & 0xff9fffff;
  }
  if ((param_1 & 0x10) != 0) {
    *puVar1 = *puVar1 & 0xfffeffff;
  }
  if ((param_1 & 0x20) != 0) {
    *puVar1 = *puVar1 & 0xfff7ffff;
  }
  if ((param_1 & 0x40) != 0) {
    *puVar1 = *puVar1 & 0xfdffbfc7;
  }
  if ((param_1 & 0x80) != 0) {
    *puVar1 = *puVar1 & 0xffffe3ff;
  }
  if ((param_1 & 0x100) != 0) {
    *puVar1 = *puVar1 & 0xfffffffe;
  }
  if ((param_1 & 0x200) != 0) {
    *puVar1 = *puVar1 & 0xffff7f3d;
  }
  if ((param_1 & 0x400) != 0) {
    *puVar1 = *puVar1 & 0xfffffffb;
  }
  if ((param_1 & 0x800) != 0) {
    *puVar1 = *puVar1 & 0xfffffeff;
  }
  if ((param_1 & 0x1000) != 0) {
    *puVar1 = *puVar1 & 0xfffffdff;
  }
  puVar1[1] = puVar1[1] & ~param_1;
  fn_00146578();
  return;
}


