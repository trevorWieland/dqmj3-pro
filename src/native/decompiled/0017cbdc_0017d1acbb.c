#include "0017cbdc_0017d1acbb.h"



undefined4 fn_0017d1ac(int param_1,int param_2,ushort *param_3)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  
  fn_00193374();
  iVar1 = fn_00189e18();
  if (iVar1 == 0) {
    fn_00193380();
    return 0;
  }
  puVar2 = *(uint **)(param_1 + (uint)*(ushort *)(param_1 + 0x1322) * 4 + 0x10a4);
  if ((*param_3 & 1) != 0) {
    *(ushort *)((int)puVar2 + param_2 * 0x14 + 0x2e) = param_3[1];
  }
  if ((*param_3 & 4) != 0) {
    iVar1 = param_2 * 0x14;
    *(ushort *)((int)puVar2 + iVar1 + 0x32) = param_3[3];
    *(ushort *)(puVar2 + param_2 * 5 + 0xe) = param_3[6];
    *(ushort *)((int)puVar2 + iVar1 + 0x3a) = param_3[7];
    *(ushort *)(puVar2 + param_2 * 5 + 0xf) = param_3[8];
    *(ushort *)((int)puVar2 + iVar1 + 0x3e) = param_3[9];
  }
  if ((*param_3 & 2) != 0) {
    puVar2[param_2 * 5 + 0xd] = *(uint *)(param_3 + 4);
  }
  *(ushort *)(puVar2 + param_2 * 5 + 0xb) = *param_3 | (ushort)puVar2[param_2 * 5 + 0xb];
  if (param_2 == 0) {
    uVar3 = *puVar2 | 0x400;
  }
  else {
    if (param_2 != 1) goto code_r0x0017d2a0;
    uVar3 = *puVar2 | 0x800;
  }
  *puVar2 = uVar3;
code_r0x0017d2a0:
  fn_00193380();
  return 1;
}



undefined4 fn_0017d130(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  uint in_s0;
  
  fn_00193374();
  iVar1 = fn_00189e18();
  if (iVar1 == 0) {
    fn_00193380();
    return 0;
  }
  puVar2 = *(uint **)(param_1 + (*(ushort *)(param_1 + 0x131e) & 1) * 0x60 + param_2 * 4 + 0x10b4);
  puVar2[0xd] = in_s0;
  *puVar2 = *puVar2 | 0x40000;
  fn_00193380();
  return 1;
}



undefined4 fn_0017d0b0(int param_1,int param_2,int param_3,undefined1 param_4)

{
  int iVar1;
  uint *puVar2;
  
  fn_00193374();
  iVar1 = fn_00189e18();
  if (iVar1 == 0) {
    fn_00193380();
    return 0;
  }
  puVar2 = *(uint **)(param_1 + (*(ushort *)(param_1 + 0x131e) & 1) * 0x60 + param_2 * 4 + 0x10b4);
  *(char *)(puVar2 + 0xe) = (char)param_3;
  if (param_3 == 0) {
    *(undefined1 *)((int)puVar2 + 0x39) = param_4;
  }
  *puVar2 = *puVar2 | 0x20000;
  fn_00193380();
  return 1;
}


