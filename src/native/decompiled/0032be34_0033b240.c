#include "0032be34_0033b240.h"



undefined4
fn_0033b240(int param_1,undefined1 param_2,int *param_3,undefined4 param_4,undefined4 param_5,
            uint param_6)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  undefined1 auStack_78 [96];
  
  uVar7 = (ulonglong)param_6;
  *(undefined1 *)(param_1 + 0x20) = param_2;
  piVar1 = *(int **)(param_1 + 0x40);
  if (piVar1 != param_3) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    *(int **)(param_1 + 0x40) = param_3;
  }
  (**(code **)(**(int **)(param_1 + 0x40) + 8))();
  iVar2 = (**(code **)(**(int **)(param_1 + 0x40) + 0x1c))();
  uVar3 = 0;
  if (iVar2 != 0) {
    (**(code **)(**(int **)(param_1 + 0x40) + 0x10))();
    uVar3 = fn_0022f750(param_4);
    uVar4 = (**(code **)(**(int **)(param_1 + 0x40) + 0x1c))();
    iVar2 = 0;
    do {
      fn_00305bc8(*(undefined4 *)(param_1 + 0x1c),iVar2,0);
      uVar6 = (undefined4)uVar7;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 10);
    puVar5 = (undefined4 *)fn_002cab9c(auStack_78);
    puVar5[1] = 10;
    *puVar5 = uVar4;
    iVar2 = fn_002cab28(puVar5,1,0);
    *(undefined1 *)(iVar2 + 8) = 1;
    *(undefined1 *)(iVar2 + 9) = 1;
    *(undefined1 *)(iVar2 + 0xc) = 1;
    *(undefined4 *)(iVar2 + 0x10) = param_5;
    *(undefined1 *)(iVar2 + 0x14) = 1;
    *(undefined4 *)(iVar2 + 0x18) = uVar6;
    fn_002cabdc(param_1,*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),iVar2);
    fn_00305bb8(*(undefined4 *)(param_1 + 0x1c),uVar3);
    uVar3 = fn_006ba320(param_1);
    fn_00305a4c(*(undefined4 *)(param_1 + 0x1c),uVar3);
    fn_00305b48(*(undefined4 *)(param_1 + 0x1c),param_5);
    (**(code **)(**(int **)(param_1 + 0x1c) + 0x20))(*(int **)(param_1 + 0x1c),1);
    uVar3 = (**(code **)(**(int **)(param_1 + 0x40) + 0x20))();
    uVar3 = fn_0016ba34(DAT_00897800,DAT_00898228,uVar3,0);
    fn_00305b50(*(undefined4 *)(param_1 + 0x1c),uVar3);
    uVar3 = 1;
  }
  return uVar3;
}



undefined4 fn_003389a0(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  if ((*(int *)(param_1 + 0x7c) == 0) ||
     (iVar2 = fn_0031390c(*(undefined4 *)(param_1 + 0x68),9), iVar2 == 0)) {
    return 0;
  }
  if (*(int *)(param_1 + 0x8c) == -1) {
    iVar2 = fn_00313844(*(undefined4 *)(param_1 + 0x68),9,1,1,0x14);
    *(int *)(param_1 + 0x8c) = iVar2;
    if (iVar2 == -1) {
      return 0;
    }
    iVar2 = fn_00178f9c(*(undefined4 *)(param_1 + 0x68),iVar2);
    *(int *)(param_1 + 0x80) = iVar2;
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(iVar2 + 0x10);
  }
  piVar3 = (int *)fn_0017dd54(*(undefined4 *)(param_1 + 0x80),(char *)&DAT_0085caf0,1);
  *(int **)(param_1 + 0x90) = piVar3;
  (**(code **)(*piVar3 + 100))();
  iVar2 = *(int *)(param_1 + 0x7c);
  piVar3 = (int *)fn_001828f0(*(undefined4 *)(param_1 + 0x80),(char *)&DAT_0085d8fc);
  if (piVar3 != (int *)0x0) {
    puVar4 = (undefined4 *)(**(code **)(*piVar3 + 8))(piVar3);
    do {
      if (puVar4 == &DAT_0089a92c) goto LAB_00338a88;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  piVar3 = (int *)0x0;
LAB_00338a88:
  *(int **)(param_1 + 0x88) = piVar3;
  *(byte *)(piVar3 + 0x11) = *(byte *)(piVar3 + 0x11) & 0xfe;
  fn_0028ad24(*(undefined4 *)(DAT_00897804 + 0xc));
  fn_0028b680(*(undefined4 *)(DAT_00897804 + 0xc));
  uVar8 = *(undefined4 *)(*(int *)(param_1 + 100) + 0x30);
  local_44 = CONCAT31(((unsigned int)(local_44) >> 8) & 0xffffff,0x10);
  do {
    iVar5 = fn_00353a38(*(undefined4 *)(param_1 + 0x7c),local_44);
    if (iVar5 != 0) {
      cVar1 = (char)local_44 + -0x10;
      iVar6 = fn_00145b00(0x8c,&DAT_00812c8c);
      uVar7 = 0;
      if (iVar6 != 0) {
        uVar7 = fn_003d1c2c(iVar6,*(undefined4 *)(param_1 + 100));
      }
      iVar6 = param_1 + cVar1 * 4;
      *(undefined4 *)(iVar6 + 0x6c) = uVar7;
      local_40 = 0;
      local_3c = 0;
      local_38 = 0;
      local_34 = 0;
      local_30 = 0;
      local_2c = 0;
      local_28 = 0;
      local_24 = 0;
      fn_001028d4(&local_40,(char *)&DAT_00338bc0,iVar2 + 0x28,(int)cVar1);
      uVar7 = (**(code **)(**(int **)(param_1 + 0x84) + 0x2c))
                        (*(int **)(param_1 + 0x84),&local_40,1);
      fn_00309c20(iVar5);
      *(undefined4 *)(*(int *)(iVar6 + 0x6c) + 0xc) = uVar7;
      fn_003d1238(*(undefined4 *)(iVar6 + 0x6c),iVar5,&local_44,uVar8);
    }
    cVar1 = (char)local_44 + '\x01';
    local_44 = CONCAT31(((unsigned int)(local_44) >> 8) & 0xffffff,cVar1);
  } while (cVar1 < '\x14');
  return 1;
}



undefined4 fn_0032be34(int param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar10;
  undefined1 auStack_f8 [12];
  int local_ec [47];
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  
  fn_0038903c(auStack_f8,0);
  uVar1 = fn_006b282c(param_1 + 0x24,3);
  uVar2 = fn_006b282c(param_1 + 0x24,1);
  iVar3 = fn_006c5298(param_1 + 4,uVar2,uVar1);
  if (iVar3 == 0) {
    uVar1 = fn_0022876c(&DAT_0032c184);
    iVar8 = fn_006c5298(param_1 + 4,uVar1,0);
    uVar1 = fn_0022876c(&DAT_0032c188);
    iVar3 = fn_006c5298(param_1 + 4,uVar1,0);
    if (iVar8 != 0) {
      iVar3 = iVar8;
    }
    fn_00389030(auStack_f8,iVar3,0);
  }
  else {
    fn_00389030(auStack_f8,iVar3,param_1 + 4);
  }
  uVar4 = fn_006c4a70(auStack_f8);
  switch(uVar4) {
  case 0:
    fn_006c4a90(local_ec + 9,auStack_f8);
    piVar9 = local_ec + 1;
    local_ec[1] = local_ec[9];
    local_ec[2] = local_ec[10];
    uVar4 = fn_0011a314(param_1 + 0x70);
    uVar6 = fn_0011a3c4(param_1 + 0x70);
    uVar7 = fn_0011a36c(param_1 + 0x70);
    iVar3 = fn_00114150(uVar7,uVar6,uVar4);
    uVar4 = fn_0011a314(piVar9);
    uVar6 = fn_0011a3c4(piVar9);
    uVar7 = fn_0011a36c(piVar9);
    iVar8 = fn_00114150(uVar7,uVar6,uVar4);
    piVar9 = local_ec + 8;
    if (-1 < iVar3 - iVar8) {
      piVar9 = local_ec + 4;
    }
    local_ec[4] = iVar3 - iVar8;
    local_ec[8] = 0;
    iVar3 = *piVar9;
    uVar4 = fn_006c4a64(auStack_f8);
    fn_00300f74(iVar3,uVar4);
    uVar10 = extraout_r1;
    break;
  case 1:
    fn_006c4a64(auStack_f8);
    uVar10 = fn_00163868();
    break;
  case 2:
    fn_0017821c(local_ec,&PTR_DAT_007c77a0,0xbc);
    local_20 = 0xffffffff;
    uVar10 = 0;
    do {
      iVar3 = fn_006b27a8(param_1 + 0x24,5,local_ec[uVar10]);
      if (iVar3 != 0) {
        local_20 = uVar10;
        break;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < 0x2f);
    local_2c = 0;
    iVar3 = fn_006c4a64(auStack_f8);
    local_28 = iVar3 - 1;
    if ((int)local_28 < (int)local_2c) goto code_r0x0032c13c;
    puVar5 = &local_2c;
    if ((int)local_2c <= (int)local_20) {
      puVar5 = &local_20;
    }
    if ((int)local_28 < (int)*puVar5) {
      puVar5 = &local_28;
    }
    uVar10 = *puVar5;
    break;
  case 3:
    iVar3 = fn_00163868(2);
    if (iVar3 != 0) {
      iVar3 = fn_006c4a64(auStack_f8);
      uVar4 = fn_006c4a7c(auStack_f8,iVar3 + -1);
      return uVar4;
    }
    fn_0017821c(local_ec,&PTR_DAT_007c77a0,0xbc);
    local_20 = 0xffffffff;
    uVar10 = 0;
    do {
      iVar3 = fn_006b27a8(param_1 + 0x24,5,local_ec[uVar10]);
      if (iVar3 != 0) {
        local_20 = uVar10;
        break;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < 0x2f);
    local_30 = 0;
    iVar3 = fn_006c4a64(auStack_f8);
    local_24 = iVar3 - 1;
    if ((int)local_30 <= (int)local_24) {
      puVar5 = &local_30;
      if ((int)local_30 <= (int)local_20) {
        puVar5 = &local_20;
      }
      if ((int)local_24 < (int)*puVar5) {
        puVar5 = &local_24;
      }
      uVar4 = fn_006c4a7c(auStack_f8,*puVar5);
      return uVar4;
    }
code_r0x0032c13c:
                    /* WARNING: Subroutine does not return */
    fn_00146590();
  case 4:
    uVar4 = fn_0032b758(param_1,auStack_f8);
    return uVar4;
  default:
    fn_006c4a90(local_ec + 9,auStack_f8);
    piVar9 = local_ec + 3;
    local_ec[3] = local_ec[9];
    local_ec[4] = local_ec[10];
    uVar4 = fn_0011a314(param_1 + 0x70);
    uVar6 = fn_0011a3c4(param_1 + 0x70);
    uVar7 = fn_0011a36c(param_1 + 0x70);
    iVar3 = fn_00114150(uVar7,uVar6,uVar4);
    uVar4 = fn_0011a314(piVar9);
    uVar6 = fn_0011a3c4(piVar9);
    uVar7 = fn_0011a36c(piVar9);
    iVar8 = fn_00114150(uVar7,uVar6,uVar4);
    piVar9 = local_ec + 1;
    if (iVar3 - iVar8 < 0) {
      piVar9 = local_ec + 5;
    }
    local_ec[1] = iVar3 - iVar8;
    local_ec[5] = 0;
    iVar3 = *piVar9;
    uVar4 = fn_006c4a64(auStack_f8);
    fn_00300f74(iVar3,uVar4);
    uVar10 = extraout_r1_00;
  }
  uVar4 = fn_006c4a7c(auStack_f8,uVar10);
  return uVar4;
}


