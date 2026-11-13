#include "single_001c19e8_r.h"


extern undefined4 _local_3c;

void fn_001c19e8(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 *local_40;
  char local_3c;
  undefined3 uStack_3b;
  undefined1 local_38;
  undefined1 local_37;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  piVar7 = (int *)*param_1;
  fn_0010d8dc(piVar7 + 0x3a);
  iVar1 = fn_00129004();
  *(undefined4 *)(iVar1 + 0x5c) = 300;
  *(undefined1 *)(piVar7 + 0x14) = 0;
  fn_00110c80(piVar7 + 0x1c);
  iVar1 = fn_00145b00(0x5b38,&DAT_00812c8c);
  piVar7[1] = iVar1;
  fn_00301f50(iVar1,0x5b38);
  iVar1 = fn_00145b00(0x7a,&DAT_00812c8c);
  piVar7[2] = iVar1;
  fn_00158f6c(iVar1,0x7a);
  piVar2 = (int *)fn_001d3a94(*piVar7);
  piVar7[0x7a] = (int)piVar2;
  if (piVar2 == (int *)0x0) {
    iVar1 = fn_00145b00(0x185ef8,&DAT_00812c8c);
  }
  else {
    iVar1 = (**(code **)(*piVar2 + 8))(piVar2,0x185ef8,4);
  }
  piVar7[3] = iVar1;
  fn_00301f50(iVar1,0x185ef8);
  iVar3 = fn_00145b00(0x3c0,&DAT_00812c8c);
  iVar1 = 0;
  if (iVar3 != 0) {
    iVar1 = fn_0026a584();
  }
  piVar7[0x18] = iVar1;
  iVar3 = fn_00145b00(0xb0,&DAT_00812c8c);
  iVar1 = 0;
  if (iVar3 != 0) {
    iVar1 = fn_00254550();
  }
  piVar7[9] = iVar1;
  fn_00253d18();
  iVar3 = fn_00145b00(0x98,&DAT_00812c8c);
  iVar1 = 0;
  if (iVar3 != 0) {
    iVar1 = fn_00204250();
  }
  piVar7[10] = iVar1;
  fn_00204208();
  iVar3 = fn_00145b00(0x78,&DAT_00812c8c);
  iVar1 = 0;
  if (iVar3 != 0) {
    iVar1 = fn_002414a4(iVar3,DAT_008977dc);
  }
  piVar7[4] = iVar1;
  iVar3 = fn_00145b00(0x40,&DAT_00812c8c);
  iVar1 = 0;
  if (iVar3 != 0) {
    iVar1 = fn_00312a7c();
  }
  piVar7[0x12] = iVar1;
  fn_0024146c(piVar7[4],*(undefined4 *)(piVar7[10] + 4));
  uVar8 = *(undefined4 *)(piVar7[0x12] + 0x3c);
  uVar4 = fn_00129004();
  fn_00241760(uVar4,piVar7[4],uVar8);
  *(int *)(piVar7[0x12] + 4) = piVar7[4];
  uVar4 = DAT_008977d0;
  fn_0025af84(DAT_008977d0);
  fn_00173b98(uVar4,0);
  *(undefined4 *)(piVar7[4] + 0x54) = uVar4;
  iVar1 = DAT_008977d8;
  fn_0031a6b0(DAT_008977d8);
  *(undefined1 *)(iVar1 + 0x44) = 0;
  iVar3 = fn_00145b00(0x48,&DAT_00812c8c);
  iVar1 = 0;
  if (iVar3 != 0) {
    iVar1 = fn_001138cc(iVar3,&DAT_00869f50);
  }
  piVar7[5] = iVar1;
  iVar3 = fn_00145b00(0x48,&DAT_00812c8c);
  iVar1 = 0;
  if (iVar3 != 0) {
    iVar1 = fn_001138ac(iVar3,&DAT_00869f50);
  }
  piVar7[6] = iVar1;
  uVar4 = fn_00129004();
  fn_002416b4(uVar4,piVar7[5],piVar7[6]);
  uVar4 = fn_00118290();
  local_37 = 1;
  local_34 = 4;
  uStack_30 = 8;
  uStack_2c = 1;
  local_38 = 0;
  puVar5 = (undefined4 *)fn_00542fec(&local_38,uVar4);
  piVar2 = piVar7 + 7;
  _local_3c = CONCAT31(uStack_3b,1);
  local_40 = puVar5;
  if ((undefined4 **)piVar2 != &local_40) {
    local_40 = (undefined4 *)*piVar2;
    _local_3c = CONCAT31(uStack_3b,(char)piVar7[8]);
    *piVar2 = (int)puVar5;
    *(undefined1 *)(piVar7 + 8) = 1;
  }
  puVar5 = local_40;
  if ((local_40 != (undefined4 *)0x0) && (local_3c != '\0')) {
    (**(code **)*local_40)(local_40);
    piVar2 = (int *)puVar5[1];
    (**(code **)(*piVar2 + 0xc))(piVar2,puVar5);
  }
  fn_001969a4(*(undefined4 *)(piVar7[4] + 0x24),piVar7[7]);
  if ((DAT_00897850 != 0) && (*(int *)(DAT_00897850 + 0x34) != 0)) {
    iVar1 = fn_00145b00(0xc,&DAT_00812c8c);
    piVar2 = (int *)0x0;
    if (iVar1 != 0) {
      piVar2 = (int *)fn_00339888();
    }
    piVar6 = (int *)piVar7[0x1a];
    if (piVar6 != piVar2) {
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 0xc))(piVar6);
      }
      piVar7[0x1a] = (int)piVar2;
    }
  }
  if (piVar7[0x12] != 0) {
    uVar9 = 0;
    do {
      uVar4 = fn_001c2a7c(uVar9);
      fn_002a4648(piVar7[0x12],uVar4);
      uVar9 = uVar9 + 1;
    } while (uVar9 < 10);
    uVar9 = 0;
    do {
      fn_002a4648(piVar7[0x12],(&DAT_007ba210)[uVar9]);
      uVar9 = uVar9 + 1;
    } while (uVar9 < 10);
  }
  iVar3 = fn_00145b00(0x10,&DAT_00812c8c);
  iVar1 = 0;
  if (iVar3 != 0) {
    iVar1 = fn_00313bcc();
  }
  piVar7[0xc] = iVar1;
  iVar3 = fn_00145b00(0xb4,&DAT_00812c8c);
  iVar1 = 0;
  if (iVar3 != 0) {
    iVar1 = fn_00313928();
  }
  piVar7[0x10] = iVar1;
  fn_0011050c(iVar1,piVar7[5],piVar7[6]);
  iVar3 = fn_00145b00(0x80,&DAT_00812c8c);
  iVar1 = 0;
  if (iVar3 != 0) {
    iVar1 = fn_00110518();
  }
  piVar7[0x11] = iVar1;
  fn_0011050c(iVar1,piVar7[5],piVar7[6]);
  iVar1 = fn_00145b00(0x40,&DAT_00812c8c);
  if (iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)fn_002d3f28(iVar1,0);
  }
  piVar6 = (int *)piVar7[0xd];
  if (piVar6 != piVar2) {
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 8))();
    }
    piVar7[0xd] = (int)piVar2;
  }
  fn_002d3f1c(piVar7[0xd],piVar7[0x10]);
  *(int *)(piVar7[0xd] + 0xc) = piVar7[0x11];
  iVar1 = fn_00145b00(0xa0,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_002d4b34(iVar1,piVar7[0xd]);
  }
  piVar6 = (int *)piVar7[0xe];
  if (piVar6 != piVar2) {
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 4))(piVar6);
    }
    piVar7[0xe] = (int)piVar2;
  }
  iVar1 = fn_00145b00(0x100,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_00209a44(iVar1,piVar7 + 0x38);
  }
  piVar7[0xf] = (int)piVar2;
  (**(code **)(*piVar2 + 0x3c))();
  iVar3 = fn_00145b00(8,&DAT_00812c8c);
  iVar1 = 0;
  if (iVar3 != 0) {
    iVar1 = fn_00107170();
  }
  piVar7[0x13] = iVar1;
  *(undefined1 *)(*piVar7 + 0x23f0) = 0;
  puVar5 = (undefined4 *)fn_00145b00(8,&DAT_00812c8c);
  if (puVar5 != (undefined4 *)0x0) {
    puVar5[1] = *piVar7;
    *puVar5 = &DAT_00828b40;
  }
  fn_005df94c(piVar7[0x13],puVar5,2);
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  uStack_1c = 0x3f000000;
  piVar2 = (int *)fn_002b059c(&local_28,piVar7[4]);
  piVar6 = (int *)piVar7[0x15];
  if (piVar6 != piVar2) {
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 4))();
    }
    piVar7[0x15] = (int)piVar2;
  }
  iVar3 = fn_00145b00(8,&DAT_00812c8c);
  iVar1 = 0;
  if (iVar3 != 0) {
    iVar1 = fn_003d276c(iVar3,piVar7[10]);
  }
  if (piVar7[0x16] != iVar1) {
    fn_002feef8(piVar7[0x16]);
    piVar7[0x16] = iVar1;
  }
  *(int *)(piVar7[0x15] + 0xc) = piVar7[0x16];
  iVar3 = fn_00145b00(0x1c,&DAT_00812c8c);
  iVar1 = 0;
  if (iVar3 != 0) {
    iVar1 = fn_00692b88();
  }
  piVar7[0xb] = iVar1;
  fn_00692708();
  fn_002cd71c();
  iVar3 = fn_00145b00(0xc,&DAT_00812c8c);
  iVar1 = 0;
  if (iVar3 != 0) {
    iVar1 = fn_002fa680();
  }
  piVar7[0x17] = iVar1;
  fn_002fa62c();
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}


