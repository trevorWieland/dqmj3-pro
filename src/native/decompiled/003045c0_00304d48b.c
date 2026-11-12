#include "003045c0_00304d48b.h"



undefined4 * fn_00304d48(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    fn_00304a00(piVar1);
    if ((int *)piVar1[0x22] != (int *)0x0) {
      (**(code **)(*(int *)piVar1[0x22] + 4))();
    }
    if ((int *)piVar1[0x21] != (int *)0x0) {
      (**(code **)(*(int *)piVar1[0x21] + 4))();
    }
    if ((int *)piVar1[0x20] != (int *)0x0) {
      (**(code **)(*(int *)piVar1[0x20] + 0x10))();
    }
    if ((int *)piVar1[2] != (int *)0x0) {
      (**(code **)(*(int *)piVar1[2] + 4))();
    }
    if ((int *)piVar1[1] != (int *)0x0) {
      (**(code **)(*(int *)piVar1[1] + 4))();
    }
    if ((int *)*piVar1 != (int *)0x0) {
      (**(code **)(*(int *)*piVar1 + 4))();
    }
    fn_002feef8(piVar1);
  }
  return param_1;
}



int * fn_00304cd8(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_00145b00(0x8c,&DAT_00812c8c);
  iVar2 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
    *(undefined1 *)((int)puVar1 + 0xd) = 0;
    *(undefined1 *)((int)puVar1 + 0xe) = 0;
    puVar1[4] = 0;
    iVar2 = fn_001283fc(puVar1 + 6);
    iVar2 = fn_001283fc(iVar2 + 0x34);
    *(undefined4 *)(iVar2 + 0x34) = 0;
    *(undefined4 *)(iVar2 + 0x38) = 0;
    *(undefined4 *)(iVar2 + 0x3c) = 0;
    iVar2 = iVar2 + -0x4c;
  }
  *param_1 = iVar2;
  return param_1;
}



void fn_00304cc0(int *param_1)

{
  *(undefined1 *)(*param_1 + 0xd) = 0;
  *(undefined1 *)(*param_1 + 0xe) = 0;
  return;
}



bool fn_00304c94(uint *param_1)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = *param_1;
  bVar2 = *(char *)(uVar1 + 0xd) != '\0';
  if (bVar2) {
    uVar1 = (uint)*(byte *)(uVar1 + 0xe);
  }
  return bVar2 && uVar1 != 0;
}



void fn_00304b18(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  
  iVar1 = fn_006eb610(*(undefined4 *)*param_1);
  uVar2 = fn_006eb278(param_2);
  fn_005e2a6c(uVar2,0,iVar1);
  fn_005e5e5c(param_2,0);
  fn_005e5f50(param_2,iVar1 + 0x1a8,iVar1 + 0x148,param_3);
  fn_005e1b70(uVar2,param_3);
  fn_005ea270(((undefined4 *)*param_1)[2],*(undefined4 *)*param_1);
  if (*(char *)(*param_1 + 0xe) == '\0') {
    fn_00117984();
    uVar2 = fn_006ec6e8();
    fn_005e6268(param_2,*(undefined4 *)(*param_1 + 0x80),uVar2,param_3);
    local_1c = 0;
    local_1b = 0;
    local_1a = 0;
    local_19 = 0xff;
    fn_005ea348(*(undefined4 *)(*param_1 + 4),0,&local_1c);
    fn_005ea2ac(*(undefined4 *)(*param_1 + 4),0,*(undefined4 *)(*param_1 + 0x84));
    fn_005e6fa0(*(undefined4 *)(*param_1 + 4),param_2,param_3);
  }
  uVar2 = fn_00117984();
  fn_005efee0(uVar2,param_3);
  local_20 = 0;
  local_1f = 0;
  local_1e = 0;
  local_1d = 0xff;
  fn_005ea348(*(undefined4 *)(*param_1 + 8),0,&local_20);
  fn_005ea2ac(*(undefined4 *)(*param_1 + 8),0,*(undefined4 *)(*param_1 + 0x88));
  fn_005e6fa0(*(undefined4 *)(*param_1 + 8),param_2,param_3);
  fn_005e6088(param_2);
  *(undefined1 *)(*param_1 + 0xe) = 1;
  return;
}


