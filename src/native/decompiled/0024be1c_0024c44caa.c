#include "0024be1c_0024c44caa.h"



undefined4 fn_0024be1c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_290 [4];
  undefined4 local_280;
  undefined4 local_27c;
  undefined4 local_278;
  undefined1 auStack_270 [594];
  char local_1e;
  char local_1d;
  
  fn_00144810(DAT_008977e8);
  iVar1 = fn_006a89a8();
  if (iVar1 == 0) {
    fn_00144810(DAT_008977e8);
    iVar1 = fn_006a8694();
  }
  else {
    iVar1 = fn_006f6c60();
  }
  if (iVar1 == 4) {
    uVar2 = 3;
  }
  else if (iVar1 == 5) {
    uVar2 = 1;
  }
  else {
    uVar2 = 2;
  }
  fn_0068c2e4(auStack_270);
  fn_0068c6c4(DAT_008977e8,auStack_270);
  if (local_1d == '\0') {
    uVar2 = 0;
  }
  else if (local_1e == '\x02') {
    uVar2 = 1;
  }
  else if (local_1d == '\x02') {
    uVar2 = 3;
  }
  local_290[0] = uVar2;
  fn_00144810(DAT_008977e8);
  iVar1 = fn_006a89a8();
  if (iVar1 == 0) {
    fn_00144810(DAT_008977e8);
    fn_006a8694();
  }
  else {
    fn_006f6c60();
  }
  uVar2 = 1;
  fn_0068c2e4(auStack_270);
  fn_0068c6c4(DAT_008977e8,auStack_270);
  if ((local_1d != '\x02') && (local_1d == '\0')) {
    uVar2 = 0;
  }
  local_290[1] = uVar2;
  fn_00144810(DAT_008977e8);
  iVar1 = fn_006a89a8();
  if (iVar1 == 0) {
    fn_00144810(DAT_008977e8);
    fn_006a8694();
  }
  else {
    fn_006f6c60();
  }
  uVar2 = 1;
  fn_0068c2e4(auStack_270);
  fn_0068c6c4(DAT_008977e8,auStack_270);
  if ((local_1d != '\x02') && (local_1d == '\0')) {
    uVar2 = 0;
  }
  local_290[2] = uVar2;
  fn_00144810(DAT_008977e8);
  iVar1 = fn_006a89a8();
  if (iVar1 == 0) {
    fn_00144810(DAT_008977e8);
    fn_006a8694();
  }
  else {
    fn_006f6c60();
  }
  uVar2 = 1;
  fn_0068c2e4(auStack_270);
  fn_0068c6c4(DAT_008977e8,auStack_270);
  if ((local_1d != '\x02') && (local_1d == '\0')) {
    uVar2 = 0;
  }
  local_290[3] = uVar2;
  fn_00144810(DAT_008977e8);
  iVar1 = fn_006a89a8();
  if (iVar1 == 0) {
    fn_00144810(DAT_008977e8);
    fn_006a8694();
  }
  else {
    fn_006f6c60();
  }
  uVar2 = 2;
  fn_0068c2e4(auStack_270);
  fn_0068c6c4(DAT_008977e8,auStack_270);
  if ((local_1d != '\x02') && (local_1d == '\0')) {
    uVar2 = 0;
  }
  local_280 = uVar2;
  fn_00144810(DAT_008977e8);
  iVar1 = fn_006a89a8();
  if (iVar1 == 0) {
    fn_00144810(DAT_008977e8);
    fn_006a8694();
  }
  else {
    fn_006f6c60();
  }
  uVar2 = 1;
  fn_0068c2e4(auStack_270);
  fn_0068c6c4(DAT_008977e8,auStack_270);
  if ((local_1d != '\x02') && (local_1d == '\0')) {
    uVar2 = 0;
  }
  local_27c = uVar2;
  fn_00144810(DAT_008977e8);
  iVar1 = fn_006a89a8();
  if (iVar1 == 0) {
    fn_00144810(DAT_008977e8);
    fn_006a8694();
  }
  else {
    fn_006f6c60();
  }
  uVar2 = 1;
  fn_0068c2e4(auStack_270);
  fn_0068c6c4(DAT_008977e8,auStack_270);
  if ((local_1d != '\x02') && (local_1d == '\0')) {
    uVar2 = 0;
  }
  local_278 = uVar2;
  return local_290[param_1];
}


