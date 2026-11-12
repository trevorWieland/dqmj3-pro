#include "001fb760_00204650.h"



void fn_00204650(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  uVar2 = fn_006a7b84(DAT_008977e4);
  switch(*(undefined1 *)(param_1 + 0x54)) {
  case 1:
    fn_002a4648(uVar2,5);
    uVar1 = 2;
    goto LAB_002046b8;
  case 2:
    iVar4 = fn_002a4c38(uVar2,5);
    if (iVar4 != 0) {
      uVar2 = fn_006a7b84(DAT_008977e4);
      uVar3 = fn_0023ddec(uVar2,5);
      fn_0023dd30(uVar2,uVar3);
      fn_001639b8((char *)&DAT_00204d50);
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
    break;
  case 3:
    fn_0018367c(*(undefined4 *)(param_1 + 4));
    iVar4 = fn_0018367c(*(undefined4 *)(param_1 + 4));
    fVar6 = *(float *)(iVar4 + 4);
    fVar7 = *(float *)(iVar4 + 0xc);
    fVar5 = fVar6 / fVar7;
    if (0x3f19999a < (int)fVar5) {
      *(undefined1 *)(param_1 + 0x60) = 1;
      fn_001829a0(param_1);
      *(float *)(param_1 + 0xc) = fVar5;
      *(float *)(param_1 + 0x10) = fVar6;
      *(float *)(param_1 + 0x14) = fVar7;
    }
    if (*(char *)(param_1 + 0x60) != '\0') {
      *(undefined1 *)(param_1 + 0x54) = 4;
      goto switchD_00204684_caseD_4;
    }
    break;
  case 4:
switchD_00204684_caseD_4:
    fn_001794fc(param_1,*(undefined4 *)(param_1 + 0x58));
    uVar2 = fn_006a7b84(DAT_008977e4);
    uVar3 = fn_0023ddec(uVar2,5);
    fn_0023dd30(uVar2,uVar3);
    fn_001639b8((char *)&DAT_00204d50);
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  case 5:
    iVar4 = fn_006b4cd0(uVar2,*(undefined4 *)(param_1 + 0x5c));
    if (iVar4 == 0) {
      return;
    }
    uVar1 = 7;
    *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
LAB_002046b8:
    *(undefined1 *)(param_1 + 0x54) = uVar1;
    break;
  case 7:
    fn_0023d3e8(DAT_008977e4,5);
    *(undefined1 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x60) = 0;
    *(undefined1 *)(param_1 + 0x41) = 0;
    return;
  }
  return;
}



void fn_00202818(int param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = DAT_008987c4;
  *(int **)(param_1 + 4) = DAT_008987c4;
  uVar2 = fn_001adef4(param_5);
  uVar2 = (**(code **)(*piVar1 + 8))(piVar1,uVar2,4);
  *(undefined4 *)(param_1 + 8) = uVar2;
  fn_001ae364(param_1 + 0xc,param_2,param_3,param_4,0x10000,uVar2,0xe0,param_5,param_6);
  fn_001aea1c(param_1 + 0xc,0x2701);
  fn_001ae9c0(param_1 + 0xc,0);
  fn_0011b40c();
  fn_0011b5fc();
  return;
}



void fn_0020230c(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  int local_24 [2];
  
  if (DAT_008987d8 == 0) {
    DAT_008987c4 = param_1;
    DAT_008987c8 = param_2;
    iVar2 = fn_00183660(param_2,0);
    piVar1 = DAT_008987c4;
    uVar6 = *(undefined4 *)(*(int *)(iVar2 + 8) + 0x24);
    if (DAT_008987d4 == 0) {
      fn_001237bc();
      fn_0051e854();
      uVar3 = fn_001adf40();
      DAT_008987cc = (**(code **)(*piVar1 + 8))(piVar1,uVar3,4);
      fn_001ae660();
      uVar4 = fn_001ae310(1);
      DAT_008987d0 = (**(code **)(*piVar1 + 8))(piVar1,uVar4,4);
      fn_001ae500(DAT_008987d0,DAT_008987cc,uVar3,1);
    }
    DAT_008987d4 = DAT_008987d4 + 1;
    fn_001760dc(uVar6,&DAT_008987dc,(char *)&DAT_002025fc);
    fn_001760dc(uVar6,&DAT_008987e4,(char *)&DAT_00202608);
    fn_001760dc(uVar6,&DAT_0089880c,(char *)&DAT_00202614);
    fn_001760dc(uVar6,&DAT_008987ec,(char *)&DAT_00202620);
    fn_001760dc(uVar6,&DAT_00898804,(char *)&DAT_0020262c);
    fn_001760dc(uVar6,&DAT_008987fc,(char *)&DAT_00202638);
    fn_001760dc(uVar6,&DAT_008987f4,(char *)&DAT_00202644);
    fn_001760dc(uVar6,&DAT_00898814,(char *)&DAT_00202650);
    fn_001760dc(uVar6,&DAT_0089881c,(char *)&DAT_0020265c);
    fn_001760dc(uVar6,&DAT_00898824,(char *)&DAT_00202668);
    fn_001760dc(uVar6,&DAT_0089882c,(char *)&DAT_00202678);
    fn_001760dc(uVar6,&DAT_00898834,(char *)&DAT_00202684);
    fn_005df0ac(uVar6,(char *)&DAT_00202690,0);
    fn_005df0ac(uVar6,(char *)&DAT_00202698,0);
    fn_005df0ac(uVar6,(char *)&DAT_002026a0,0);
    fn_005df0ac(uVar6,(char *)&DAT_002026a8,0);
    fn_005df0ac(uVar6,(char *)&DAT_002026b0,0);
    fn_005df0ac(uVar6,(char *)&DAT_002026b8,0);
    fn_005df0ac(uVar6,(char *)&DAT_002026c0,1);
    fn_005df0ac(uVar6,(char *)&DAT_002026c8,0);
    fn_005df0ac(uVar6,(char *)&DAT_002026d0,0);
    fn_005df0ac(uVar6,(char *)&DAT_002026d8,0);
    fn_005df0ac(uVar6,(char *)&DAT_002026e0,0);
    fn_005df0ac(uVar6,(char *)&DAT_002026e8,0);
    fn_005df0ac(uVar6,(char *)&DAT_002026f0,1);
    fn_001aebc8(DAT_008987e6,DAT_008987ee,DAT_00898806,DAT_008987f6,0,DAT_00898826,DAT_0089882e,
                 DAT_00898836,0x84c0);
    fn_0012bc84(0x208,local_24);
    iVar2 = fn_00175e10(uVar6,local_24[0]);
    uVar5 = iVar2 - local_24[0];
    local_24[0] = iVar2;
    fn_001467e4(uVar5 & 0xfffffffc);
  }
  DAT_008987d8 = DAT_008987d8 + 1;
  return;
}



void fn_001fb760(int param_1)

{
  int *piVar1;
  
  piVar1 = DAT_00896cc0;
  DAT_00896cbc = (undefined1)param_1;
  if (param_1 == 0) {
    DAT_00896cc0[2] = -1;
    piVar1[1] = 0;
    *(undefined2 *)(piVar1 + 8) = 0xffff;
    *(undefined2 *)((int)piVar1 + 0x22) = 0xffff;
    *(undefined2 *)(piVar1 + 9) = 0xffff;
    *(undefined2 *)((int)piVar1 + 0x26) = 0xffff;
    *(undefined1 *)(piVar1 + 10) = 0xff;
    *(undefined1 *)((int)piVar1 + 0x2a) = 0;
    *(undefined1 *)((int)piVar1 + 0x2b) = 0;
    *(undefined1 *)(piVar1 + 0xb) = 0xff;
    *(undefined1 *)((int)piVar1 + 0x2d) = 0xff;
    *(undefined1 *)((int)piVar1 + 0x2e) = 0;
    *(undefined1 *)((int)piVar1 + 0x2f) = 0;
    *(undefined1 *)((int)piVar1 + 0x31) = 1;
    *piVar1 = 0;
    return;
  }
  if (param_1 == 5) {
    DAT_00896cc0[1] = 0;
    piVar1[2] = 0;
    piVar1[3] = 0;
    piVar1[4] = 0;
    piVar1[5] = 0;
    piVar1[6] = 0;
    *(undefined2 *)(piVar1 + 7) = 0xffff;
    *(undefined1 *)((int)piVar1 + 0x1e) = 1;
    *piVar1 = 5;
    return;
  }
  if (param_1 - 1U < 4) {
    fn_00301f50(DAT_00896cc0 + 1,0x1a);
    *piVar1 = param_1;
    *(undefined1 *)((int)piVar1 + 0x1e) = 0;
    *(undefined1 *)((int)piVar1 + 0x1f) = 0;
  }
  return;
}


