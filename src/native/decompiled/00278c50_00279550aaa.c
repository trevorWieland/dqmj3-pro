#include "00278c50_00279550aaa.h"



undefined4
fn_00278c50(undefined4 param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5,
            int param_6,int param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_128;
  undefined4 local_124;
  uint local_120;
  undefined1 auStack_a8 [136];
  
  if (param_4 == 0) {
    fn_00301f50(&local_128,0x80);
    fn_001f835c(&local_128,0x80,param_3,param_7);
    fn_00101a50(auStack_a8,0x80,L"patch:/data/Model/%s.bch",&local_128);
  }
  else if (param_4 == 1) {
    fn_00301f50(&local_128,0x80);
    fn_001f8424(&local_128,0x80,param_3,param_7);
    fn_00101a50(auStack_a8,0x80,L"patch:/data/Motion/%s.bch",&local_128);
    iVar1 = fn_00147fd4(auStack_a8,5);
    if (iVar1 == 0) {
      return 0xffffffff;
    }
  }
  else if (param_4 == 2) {
    fn_00301f50(&local_128,0x80);
    fn_001f835c(&local_128,0x80,param_3,param_7);
    fn_00101a50(auStack_a8,0x80,L"rom:/data/Mask/%s.bch",&local_128);
    iVar1 = fn_00147fd4(auStack_a8,5);
    if (iVar1 == 0) {
      return 0xffffffff;
    }
    uVar2 = 3;
    local_120 = 0;
    local_128 = param_5;
    goto LAB_00278dec;
  }
  local_120 = param_3;
  if (param_6 == 0) {
    uVar2 = 0;
    if (param_4 != 0) {
      if (param_4 == 1) {
        local_120 = param_3 | 0x2000;
      }
      else if (param_4 == 2) {
        local_120 = param_3 | 0x4000;
      }
    }
  }
  else {
    uVar2 = 2;
    if (param_4 != 0) {
      if (param_4 == 1) {
        local_120 = param_3 | 0x2000;
      }
      else if (param_4 == 2) {
        local_120 = param_3 | 0x4000;
      }
    }
  }
  if (param_7 != 0) {
    local_120 = (uint)(short)((ushort)local_120 | 0x8000);
  }
  local_128 = param_5;
LAB_00278dec:
  local_124 = 0x80;
  fn_002775a0(param_1,param_2,auStack_a8,uVar2);
  return param_2;
}


