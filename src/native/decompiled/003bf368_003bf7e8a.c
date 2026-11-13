#include "003bf368_003bf7e8a.h"



void fn_003bf5d8(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xf8,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003bf7e8(iVar1,param_1);
  return;
}



void fn_003bf43c(int param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined1 auStack_a8 [140];
  
  iVar1 = fn_006b630c(*(undefined4 *)(DAT_00897804 + 8),param_3 & 0xff);
  if (iVar1 != 0) {
    iVar2 = fn_00178f9c(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x6c));
    piVar6 = *(int **)(iVar2 + 0x10);
    fn_00301f50(auStack_a8,0x80);
    fn_0018a618(auStack_a8,0x40,0x3f,*(undefined4 *)(&DAT_008957a0 + param_3 * 0x10),iVar1 + -1);
    uVar3 = fn_001481c8(*(undefined4 *)(param_1 + 100),auStack_a8,&DAT_003bf5d0,1,1);
    *param_2 = uVar3;
    piVar5 = (int *)0x0;
    local_e8 = 0;
    local_dc = 0;
    local_e4 = 0;
    local_e0 = 0;
    local_d8 = 0;
    local_d4 = 0;
    local_c8 = 0;
    local_d0 = 0;
    local_cc = 0;
    local_c4 = 0;
    local_c0 = 0;
    local_b4 = 0;
    local_bc = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_ac = 0;
    fn_0017d96c(&local_e8,0x40,0x3f,*(undefined4 *)(&DAT_008957a4 + param_3 * 0x10),iVar1 + -1);
    uVar3 = fn_001c8c60(*(undefined4 *)(param_1 + 100),*param_2,&local_e8);
    param_2[1] = uVar3;
    piVar6 = (int *)(**(code **)(*piVar6 + 0x2c))(piVar6,(&DAT_008957a8)[param_3 * 4],1);
    if (piVar6 != (int *)0x0) {
      puVar4 = (undefined4 *)(**(code **)(*piVar6 + 8))(piVar6);
      do {
        if (puVar4 == &DAT_0089a92c) {
          piVar5 = piVar6;
          break;
        }
        puVar4 = (undefined4 *)*puVar4;
      } while (puVar4 != (undefined4 *)0x0);
    }
    uVar3 = fn_001c8888(*(undefined4 *)(param_1 + 100),param_2[1]);
    iVar1 = fn_006e1ee8(piVar5);
    fn_0019501c(*(undefined4 *)(iVar1 + 0x78),uVar3);
    *(byte *)(iVar1 + 0x7c) = *(byte *)(iVar1 + 0x7c) & 0xf7;
  }
  return;
}



void fn_003bf368(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int local_28;
  char *pcStack_24;
  undefined4 uStack_20;
  char *pcStack_1c;
  undefined4 uStack_18;
  
  iVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x6c));
  piVar2 = (int *)(**(code **)(**(int **)(iVar1 + 0x10) + 0x2c))
                            (*(int **)(iVar1 + 0x10),(char *)&DAT_003bf428,1);
  uVar3 = fn_006b51cc(*(undefined4 *)(DAT_00897804 + 0x1c));
  if (uVar3 == 0) {
    *(byte *)(piVar2 + 0x11) = *(byte *)(piVar2 + 0x11) & 0xfe;
    return;
  }
  uVar4 = 0;
  local_28 = 0;
  pcStack_24 = (char *)&DAT_00860cb4;
  uStack_20 = 0;
  pcStack_1c = "ic_partner_02";
  uStack_18 = 0;
  do {
    if ((&local_28)[uVar4] != 0) {
      iVar1 = (**(code **)(*piVar2 + 0x2c))(piVar2,(&local_28)[uVar4],1);
      *(byte *)(iVar1 + 0x44) = uVar4 == uVar3 | *(byte *)(iVar1 + 0x44) & 0xfe;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 5);
  return;
}


