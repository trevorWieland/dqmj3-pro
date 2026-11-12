/* Byte-exact functions recovered by the draft-repair loop.
 * Compiled with the measured original profile; each function below was
 * re-scored in this exact unit and kept only when its placed bytes equal
 * the original extent byte for byte. */
#include "decompiled.h"
#include "repair_00.h"

void fn_001074cc(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 4);
  if (*(char *)(iVar4 + 0x7d) == '\0') {
    return;
  }
  fn_0010d5fc();
  fn_0010d5b8(1);
  fn_00117590(*(undefined4 *)(iVar4 + 0x60));
  uVar1 = fn_0015e218();
  uVar2 = fn_0015e284();
  fn_0014ff08(uVar2,uVar1);
  if (*(char *)(iVar4 + 0x7d) == '\0') {
    fn_0010d83c(iVar4 + 100);
  }
  fn_0010d8dc(iVar4 + 0x6c);
  iVar3 = fn_0011838c(1);
  fn_0012bc84(0x203,iVar4 + iVar3 * 4 + 0x98);
  fn_0010fa70(0xffffffff);
  fn_0010d590();
  fn_0010d5b8(0);
  return;
}
void fn_0017dbc0(uint param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  code *local_18;
  undefined1 auStack_14 [4];
  
  uVar1 = fn_00166ad8(0x20000);
  if ((uVar1 > param_1) || (uVar1 = fn_00166a9c(0x20000), uVar1 <= param_1)) {
    uVar1 = fn_00166ad8(0x30000);
    if (uVar1 > param_1) {
      return;
    }
    uVar1 = fn_00166a9c(0x30000);
    if (uVar1 <= param_1) {
      return;
    }
    uVar3 = 0x30000;
  }
  else {
    uVar3 = 0x20000;
  }
  iVar2 = fn_0018387c();
  if ((iVar2 != 0) && (fn_00191540(auStack_14,&local_18), local_18 != (code *)0x0)) {
    (*local_18)(uVar3,param_2,0,param_1);
  }
  return;
}
void fn_0042f6e4(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  
  uVar1 = fn_006e9d4c(*(undefined4 *)(param_1 + 0x98),1);
  { byte c_ad = *(byte *)(param_1 + 0x71); if (uVar1 != c_ad) {
    iVar2 = fn_006e9d4c(*(undefined4 *)(param_1 + 0x98),1);
    *(char *)(param_1 + 0x71) = (char)iVar2;
    iVar3 = *(int *)(param_1 + 0x78);
    bVar5 = *(byte *)(iVar3 + 0x44) & 0xfe;
    if (iVar2 != 0) {
      *(byte *)(iVar3 + 0x44) = bVar5 | 1;
      *(byte *)(*(int *)(param_1 + 0x90) + 0x44) =
           *(byte *)(*(int *)(param_1 + 0x90) + 0x44) & 0xfe | 1;
      uVar4 = fn_00344d44(*(undefined1 *)(param_1 + 0x71));
      fn_00190d50(*(undefined4 *)(param_1 + 0x90),uVar4);
      uVar4 = fn_00230374(*(undefined1 *)(param_1 + 0x71));
      fn_00190d50(*(undefined4 *)(param_1 + 0x78),uVar4);
      return;
    }
    *(byte *)(iVar3 + 0x44) = bVar5;
    *(byte *)(*(int *)(param_1 + 0x90) + 0x44) = *(byte *)(*(int *)(param_1 + 0x90) + 0x44) & 0xfe;
  } }
  return;
}
void fn_0042f790(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = fn_006e9d4c(*(undefined4 *)(param_1 + 0x98),2);
  { byte c_92 = *(byte *)(param_1 + 0x72); if (uVar1 != c_92) {
    iVar2 = fn_006e9d4c(*(undefined4 *)(param_1 + 0x98),2);
    *(char *)(param_1 + 0x72) = (char)iVar2;
    if (iVar2 != 0) {
      *(byte *)(*(int *)(param_1 + 0x94) + 0x44) =
           *(byte *)(*(int *)(param_1 + 0x94) + 0x44) & 0xfe | 1;
      *(byte *)(*(int *)(param_1 + 0x7c) + 0x44) =
           *(byte *)(*(int *)(param_1 + 0x7c) + 0x44) & 0xfe | 1;
      uVar3 = fn_00344dc4(*(undefined1 *)(param_1 + 0x72));
      fn_00190d50(*(undefined4 *)(param_1 + 0x94),uVar3);
      uVar3 = fn_00230374(*(undefined1 *)(param_1 + 0x72));
      fn_00190d50(*(undefined4 *)(param_1 + 0x7c),uVar3);
      return;
    }
    *(byte *)(*(int *)(param_1 + 0x7c) + 0x44) = *(byte *)(*(int *)(param_1 + 0x7c) + 0x44) & 0xfe;
    *(byte *)(*(int *)(param_1 + 0x94) + 0x44) = *(byte *)(*(int *)(param_1 + 0x94) + 0x44) & 0xfe;
  } }
  return;
}
void fn_004dc130(int param_1)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    fn_004e32c0();
    (**(code **)(**(int **)(param_1 + 0x20) + 8))(*(int **)(param_1 + 0x20),0);
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    fn_004e5db0();
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(*(int **)(param_1 + 0x24),0);
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    fn_004e2c9c();
    (**(code **)(**(int **)(param_1 + 0x28) + 8))(*(int **)(param_1 + 0x28),0);
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    fn_004e535c();
    (**(code **)(**(int **)(param_1 + 0x2c) + 8))(*(int **)(param_1 + 0x2c),0);
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    fn_004e7e6c();
    (**(code **)(**(int **)(param_1 + 0x30) + 8))(*(int **)(param_1 + 0x30),0);
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    fn_004e9da8();
    (**(code **)(**(int **)(param_1 + 0x34) + 8))(*(int **)(param_1 + 0x34),0);
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x38) + 0x30) = 1;
    fn_004edd1c(*(undefined4 *)(param_1 + 0x38),2);
    fn_004e78b8(*(undefined4 *)(param_1 + 0x38));
  }
  fn_004ed13c(param_1 + 0x60);
  *(undefined1 *)(param_1 + 0x74) = 0;
  return;
}
void fn_004e4f6c(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 != 0) {
    fn_00656b0c(iVar1);
    fn_00656b7c(iVar1);
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 != 0) {
    fn_00656b0c(iVar1);
    fn_00656b7c(iVar1);
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  puVar2 = *(undefined4 **)(param_1 + 0xc);
  if (puVar2 + -0x40000 < (undefined4 *)0x3ff00000) {
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(puVar2);
      fn_00656b7c(puVar2);
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    fn_00656b0c(iVar1);
    fn_00656b7c(iVar1);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != 0) {
    fn_00656b0c(iVar1);
    fn_00656b7c(iVar1);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}
void fn_005260cc(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined2 *)(param_1 + 8) = 65000;
  *(undefined2 *)((int)param_1 + 0x22) = 0;
  *(undefined2 *)(param_1 + 9) = 0;
  fn_00158f6c((int)param_1 + 0x26,0x66);
  param_1[0x23] = 0;
  fn_00301f50(param_1 + 0x24,0x82);
  *(undefined1 *)((int)param_1 + 0x112) = 0;
  *(undefined1 *)((int)param_1 + 0x113) = 1;
  *(undefined1 *)(param_1 + 0x45) = 0;
  *(undefined1 *)((int)param_1 + 0x115) = 1;
  *(undefined1 *)((int)param_1 + 0x116) = 0;
  *(undefined1 *)((int)param_1 + 0x117) = 1;
  *(undefined1 *)(param_1 + 0x46) = 0;
  *(undefined1 *)((int)param_1 + 0x119) = 0;
  *(undefined1 *)((int)param_1 + 0x11a) = 0;
  *(undefined1 *)((int)param_1 + 0x11b) = 0;
  *(undefined1 *)(param_1 + 0x47) = 1;
  *(undefined1 *)((int)param_1 + 0x11d) = 0;
  *(undefined1 *)(param_1 + 0xd5) = 0;
  param_1[0x48] = 0xffffffff;
  param_1[0x49] = 0xffffffff;
  param_1[0x4a] = 0xffffffff;
  param_1[0x4b] = 0xffffffff;
  param_1[0x4c] = 0;
  *(undefined2 *)(param_1 + 0x4d) = 0;
  param_1[0x4e] = 0xffffffff;
  param_1[0x4f] = 0xffffffff;
  param_1[0x50] = 0xffffffff;
  param_1[0x51] = 0xffffffff;
  *(undefined2 *)(param_1 + 0x52) = 0;
  param_1[0x53] = 0;
  fn_00301f50(param_1 + 0x54,0x202);
  return;
}
int * fn_0054a9e0(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_10;
  
  local_10 = 0;
  iVar1 = (**(code **)(*param_1 + 0xc))(param_1,0x666f6e74,param_2,&local_10);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = local_10;
  }
  if (((iVar1 != 0 && iVar2 != 0) && (iVar2 = fn_00194ee4(0x48,4), iVar2 != 0)) &&
     (piVar3 = (int *)fn_00127ab0(), piVar3 != (int *)0x0)) {
    iVar2 = fn_001422a0(piVar3,iVar1);
    if (iVar2 != 0) {
      return piVar3;
    }
    (**(code **)(*piVar3 + 4))(piVar3);
    fn_0019fb94(piVar3);
  }
  return (int *)0x0;
}
void fn_00664500(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  return;
}
void fn_006a1bf0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*param_1 + 0xa4))(param_1);
  if (iVar1 == 0) {
    iVar1 = param_1[0x4b];
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0xa0))(param_1);
    iVar1 = ((200 - iVar1) * param_1[0x4b]) / 100;
  }
  *(undefined1 *)(param_1 + 100) = 0;
  iVar1 = (iVar1 * param_2) / 100;
  while( true ) {
    iVar2 = (**(code **)(*param_1 + 0xa4))(param_1);
    if (iVar2 == 0) {
      iVar2 = param_1[0x4b];
    }
    else {
      iVar2 = (**(code **)(*param_1 + 0xa0))(param_1);
      iVar2 = ((200 - iVar2) * param_1[0x4b]) / 100;
    }
    if (iVar1 < iVar2) break;
    *(char *)(param_1 + 100) = *(char *)(param_1 + 100) + '\x01';
    iVar2 = (**(code **)(*param_1 + 0xa4))(param_1);
    if (iVar2 == 0) {
      iVar2 = param_1[0x4b];
    }
    else {
      iVar2 = (**(code **)(*param_1 + 0xa0))(param_1);
      iVar2 = ((200 - iVar2) * param_1[0x4b]) / 100;
    }
    iVar1 = iVar1 - iVar2;
  }
  param_1[99] = iVar1;
  return;
}