#include "00373764_003740acbb.h"



undefined4 fn_003740ac(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char *pcVar5;
  
  uVar2 = fn_001481c8(*(undefined4 *)(param_1 + 0x7c),L"rom:/data/Layout/common/back_ground_u.arc",
                       &DAT_0037417c,1,1);
  *(undefined4 *)(param_1 + 0x80) = uVar2;
  uVar2 = fn_001480d0(*(undefined4 *)(param_1 + 0x7c),uVar2,(char *)&DAT_00374188,&DAT_00374184,1,1
                       ,0);
  *(undefined4 *)(param_1 + 0x84) = uVar2;
  puVar3 = (undefined4 *)fn_001f74d8(param_1,0x7e);
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar4 == &DAT_00894a9c) goto LAB_00374140;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_00374140:
  pcVar5 = (char *)fn_0068c7f4(DAT_008977e8);
  uVar1 = 0;
  if (*pcVar5 != '\0') {
    uVar1 = 2;
  }
  *(undefined1 *)(puVar3 + 2) = uVar1;
  fn_00689930(param_1,0x7e,0);
  return 1;
}



undefined4 * fn_00374048(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002c4694();
  *puVar1 = &DAT_00828348;
  puVar1[0x2d] = 0;
  puVar1[0x2c] = &DAT_00859420;
  puVar1[0x2e] = 0;
  puVar1[0x2f] = 0;
  puVar1[0x30] = 0;
  puVar1[0x31] = 0;
  return puVar1;
}



void fn_00373e70(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  if (param_2 != 0) {
    if (param_2 == 1) {
      fn_0068ab44(param_1,0x100094b);
      fn_00689930(param_1,0xc5,0);
      return;
    }
    return;
  }
  iVar1 = fn_002962d0(DAT_0089783c + 0x3c);
  if (iVar1 != 0) {
    fn_006899f4(param_1,0xbd,0,1);
    fn_0068ab44(param_1,0x100094b);
    return;
  }
  *(undefined4 *)(param_1 + 0xbc) = 1;
  fn_00689930(param_1,0xc3,0);
  puVar2 = (undefined4 *)fn_001f7510(param_1,0x48);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_008942d0) goto LAB_00373f4c;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_00373f4c:
  fn_0036c658(puVar2,0);
  uVar4 = fn_0022f584((char *)&DAT_00373f98,0);
  fn_0036c13c(puVar2,uVar4);
  fn_00689bd0(param_1,0x48,0);
  return;
}


