#include "001d36fc_001d42e4baa.h"



void fn_001d3ae8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1 + 0x998;
  if (*(char *)(param_1 + 0x127c) != '\0') {
    if (*(char *)(param_1 + 0x11e2) == '\0') {
      fn_001d1f2c(param_1,iVar3);
      iVar1 = fn_00174828(DAT_008977e4);
      iVar2 = fn_00174870(param_1);
      *(undefined1 *)(iVar1 + 0xb) = *(undefined1 *)(iVar2 + 0x10);
      fn_001d1e60(param_1,iVar3);
      fn_001d2810(param_1,(int)*(char *)(param_1 + 0x1a35));
      if (*(char *)(param_1 + 0x11e0) == '\0') {
        fn_001d3e48(param_1);
        fn_001d2428(param_1,iVar3);
      }
      else {
        fn_001d2428(param_1,iVar3);
        fn_001d3e48(param_1);
      }
      fn_001d2128(param_1,iVar3);
      iVar3 = fn_00182988(DAT_008977e4);
      *(undefined4 *)(iVar3 + 0x3a8) = *(undefined4 *)(param_1 + 0x1274);
      iVar3 = fn_00182988(DAT_008977e4);
      *(undefined4 *)(iVar3 + 0x3ac) = *(undefined4 *)(param_1 + 0x1278);
      iVar3 = fn_00182988(DAT_008977e4);
      *(undefined1 *)(iVar3 + 0x3a3) = *(undefined1 *)(param_1 + 0x127c);
    }
    else {
      fn_001d1f2c(param_1,iVar3);
      iVar1 = fn_00174828(DAT_008977e4);
      iVar2 = fn_00174870(param_1);
      *(undefined1 *)(iVar1 + 0xb) = *(undefined1 *)(iVar2 + 0x10);
      fn_001d1e60(param_1,iVar3);
      fn_001d2810(param_1,(int)*(char *)(param_1 + 0x1a35));
      fn_001d3e48(param_1);
      if (*(char *)(param_1 + 0x11e3) == '\0') {
        fn_001d2cac(param_1);
      }
      else {
        fn_001d2428(param_1,iVar3);
      }
      fn_001d2128(param_1,iVar3);
      iVar3 = fn_00174858(DAT_008977e4);
      *(undefined1 *)(iVar3 + 0x9a) = 1;
      iVar3 = fn_00182988(DAT_008977e4);
      *(undefined1 *)(iVar3 + 0x3a4) = 1;
      iVar3 = fn_00182988(DAT_008977e4);
      *(undefined4 *)(iVar3 + 0x3a8) = *(undefined4 *)(param_1 + 0x1274);
      iVar3 = fn_00182988(DAT_008977e4);
      *(undefined1 *)(iVar3 + 0x3a3) = *(undefined1 *)(param_1 + 0x127c);
    }
    iVar3 = fn_00182988(DAT_008977e4);
    *(undefined1 *)(iVar3 + 0x3a2) = 1;
    iVar3 = fn_00182988(DAT_008977e4);
    *(undefined1 *)(iVar3 + 0x3a3) = 1;
    return;
  }
  if (*(char *)(param_1 + 0x11e2) == '\0') {
    iVar1 = fn_00174828(DAT_008977e4);
    iVar2 = fn_00174870(param_1);
    *(undefined1 *)(iVar1 + 0xb) = *(undefined1 *)(iVar2 + 0x10);
    fn_001d1e60(param_1,iVar3);
    if (*(char *)(param_1 + 0x11e0) == '\0') {
      fn_001d43b4(param_1);
      fn_001d2428(param_1,iVar3);
    }
    else {
      fn_001d2428(param_1,iVar3);
      fn_001d43b4(param_1);
    }
    fn_001d1f2c(param_1,iVar3);
    fn_001d2128(param_1,iVar3);
    iVar3 = fn_00182988(DAT_008977e4);
    *(undefined4 *)(iVar3 + 0x3a8) = *(undefined4 *)(param_1 + 0x1274);
    iVar3 = fn_00182988(DAT_008977e4);
    *(undefined4 *)(iVar3 + 0x3ac) = *(undefined4 *)(param_1 + 0x1278);
    iVar3 = fn_00182988(DAT_008977e4);
    *(undefined1 *)(iVar3 + 0x3a3) = *(undefined1 *)(param_1 + 0x127c);
    iVar3 = fn_00182988(DAT_008977e4);
    *(undefined1 *)(iVar3 + 0x3a2) = 1;
    return;
  }
  iVar1 = fn_00174828(DAT_008977e4);
  iVar2 = fn_00174870(param_1);
  *(undefined1 *)(iVar1 + 0xb) = *(undefined1 *)(iVar2 + 0x10);
  fn_001d1e60(param_1,iVar3);
  fn_001d43b4(param_1);
  if (*(char *)(param_1 + 0x11e3) == '\0') {
    fn_001d2cac(param_1);
  }
  else {
    fn_001d2428(param_1,iVar3);
  }
  fn_001d1f2c(param_1,iVar3);
  fn_001d2128(param_1,iVar3);
  iVar3 = fn_00174858(DAT_008977e4);
  *(undefined1 *)(iVar3 + 0x9a) = 1;
  iVar3 = fn_00182988(DAT_008977e4);
  *(undefined1 *)(iVar3 + 0x3a2) = 1;
  iVar3 = fn_00182988(DAT_008977e4);
  *(undefined1 *)(iVar3 + 0x3a4) = 1;
  return;
}


