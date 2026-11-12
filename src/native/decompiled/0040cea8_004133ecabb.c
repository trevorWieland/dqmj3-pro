#include "0040cea8_004133ecabb.h"



/* WARNING: Removing unreachable block (ram,0x0040fe18) */
/* WARNING: Removing unreachable block (ram,0x0040fe28) */
/* WARNING: Removing unreachable block (ram,0x0040fe38) */
/* WARNING: Removing unreachable block (ram,0x0040fe48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_0040fde8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_10 [8];
  
  fn_0069e710();
  iVar1 = fn_00154ac8(0x19);
  if (((iVar1 == 0) && (*(char *)(param_1 + 0x35) != '\0')) ||
     ((iVar1 = fn_00154ac8(0x463), iVar1 == 0 && (*(char *)(param_1 + 0x37) != '\0')))) {
    uVar2 = fn_0022f5d8();
    fn_00190d50(*(undefined4 *)(param_1 + 0x28),uVar2);
    uVar2 = fn_0022f5d8();
    fn_00190d50(*(undefined4 *)(param_1 + 0x2c),uVar2);
    uVar2 = _DAT_0089369c;
    iVar1 = *(int *)(param_1 + 0x28);
    *(undefined4 *)(iVar1 + 0xac) = _DAT_0089369c;
    *(undefined4 *)(iVar1 + 0xb0) = uVar2;
    iVar1 = *(int *)(param_1 + 0x2c);
    *(undefined4 *)(iVar1 + 0xac) = uVar2;
    *(undefined4 *)(iVar1 + 0xb0) = uVar2;
    return;
  }
  uVar3 = fn_00246858(*(undefined1 *)(param_1 + 0x33),(int)*(char *)(param_1 + 0x37));
  uVar4 = (uint)*(byte *)(param_1 + 0x31);
  if (uVar4 < uVar3) {
    fn_002309d8(auStack_10,4,uVar4,0);
  }
  else {
    fn_002309d8(auStack_10,4,uVar4,1);
  }
  fn_00190d50(*(undefined4 *)(param_1 + 0x28),auStack_10);
  return;
}



void fn_0040f478(int param_1)

{
  undefined4 uVar1;
  
  fn_0022eb14(param_1 + 0xb4,(&DAT_007c4da8)[*(int *)(param_1 + 0xc0) * 2]);
  uVar1 = fn_00231cb8((&DAT_007c4da9)[*(int *)(param_1 + 0xc0) * 2]);
  fn_00243550(*(undefined4 *)(param_1 + 0xa4),uVar1);
  fn_003f59b4(param_1,3);
  fn_003f5990(param_1);
  return;
}


