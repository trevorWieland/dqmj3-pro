#include "006956f4_006956f4.h"



undefined4 fn_006956f4(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  
  if ((*(code **)(param_1 + 0x1ac) != (code *)0x0) &&
     ((**(code **)(param_1 + 0x1ac))(), *(char *)(param_1 + 0x19c) != '\0')) {
    *(undefined4 *)(param_1 + 0x1ac) = 0;
    *(undefined1 *)(param_1 + 0x19c) = 0;
  }
  iVar1 = fn_00145b00(0x78,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_002414a4(iVar1,DAT_008977dc);
  }
  piVar6 = *(int **)(param_1 + 8);
  if (piVar6 != piVar2) {
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 4))(piVar6);
    }
    *(int **)(param_1 + 8) = piVar2;
  }
  iVar1 = fn_00145b00(0x40,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_0023e8ec(iVar1,1);
  }
  piVar6 = *(int **)(param_1 + 0x2c);
  if (piVar6 != piVar2) {
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 4))(piVar6);
    }
    *(int **)(param_1 + 0x2c) = piVar2;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x2c) + 4) = *(undefined4 *)(param_1 + 8);
  iVar1 = fn_00145b00(0x78,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_00241510(iVar1,0x10000);
  }
  piVar6 = *(int **)(param_1 + 0xc);
  if (piVar6 != piVar2) {
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 4))(piVar6);
    }
    *(int **)(param_1 + 0xc) = piVar2;
  }
  iVar1 = fn_00145b00(0x48,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_001138cc(iVar1,&DAT_00695bb8);
  }
  piVar6 = *(int **)(param_1 + 0x10);
  if (piVar6 != piVar2) {
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 4))(piVar6);
    }
    *(int **)(param_1 + 0x10) = piVar2;
  }
  iVar1 = fn_00145b00(0x48,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_001138ac(iVar1,&DAT_00695bb8);
  }
  piVar6 = *(int **)(param_1 + 0x14);
  if (piVar6 != piVar2) {
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 4))(piVar6);
    }
    *(int **)(param_1 + 0x14) = piVar2;
  }
  iVar1 = fn_00145b00(8,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_005e1058();
  }
  piVar6 = *(int **)(param_1 + 0x18);
  if (piVar6 != piVar2) {
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 4))(piVar6);
    }
    *(int **)(param_1 + 0x18) = piVar2;
  }
  iVar1 = fn_00145b00(0x38,&DAT_00812c8c);
  if ((iVar1 == 0) || (iVar1 = fn_0027a08c(), iVar1 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = iVar1 + 0x1c;
  }
  uVar3 = fn_002b0148(*(undefined4 *)(param_1 + 4),iVar1);
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  iVar1 = fn_00145b00(100,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar1 != 0) {
    uVar3 = fn_00302dac();
  }
  uVar3 = fn_002b0148(*(undefined4 *)(param_1 + 4),uVar3);
  *(undefined4 *)(param_1 + 0x60) = uVar3;
  iVar4 = fn_00145b00(4,&DAT_00812c8c);
  iVar1 = 0;
  if (iVar4 != 0) {
    iVar1 = fn_002345c8();
  }
  iVar4 = *(int *)(param_1 + 0x34);
  if (iVar4 != iVar1) {
    if (iVar4 != 0) {
      fn_00234604(iVar4);
      fn_002feef8();
    }
    *(int *)(param_1 + 0x34) = iVar1;
  }
  *(undefined4 *)(*(int *)(param_1 + 8) + 0x5c) = *(undefined4 *)(param_1 + 0x34);
  iVar1 = fn_00145b00(0x74,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar1 != 0) {
    uVar3 = fn_00685390();
  }
  uVar3 = fn_002b0148(*(undefined4 *)(param_1 + 4),uVar3);
  *(undefined4 *)(param_1 + 0x70) = uVar3;
  iVar1 = fn_00145b00(0xc,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar1 != 0) {
    uVar3 = fn_004094a8();
  }
  uVar3 = fn_002b0148(*(undefined4 *)(param_1 + 4),uVar3);
  *(undefined4 *)(param_1 + 0x74) = uVar3;
  iVar1 = fn_00145b00(0x180,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar1 != 0) {
    uVar3 = fn_001d9328();
  }
  uVar3 = fn_002b0148(*(undefined4 *)(param_1 + 4),uVar3);
  *(undefined4 *)(param_1 + 0x78) = uVar3;
  iVar1 = fn_00145b00(0x6bc,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar1 != 0) {
    uVar3 = fn_00220410();
  }
  uVar3 = fn_002b0148(*(undefined4 *)(param_1 + 4),uVar3);
  *(undefined4 *)(param_1 + 0x84) = uVar3;
  iVar1 = fn_00145b00(0x88,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar1 != 0) {
    uVar3 = fn_002db95c();
  }
  uVar3 = fn_002b0148(*(undefined4 *)(param_1 + 4),uVar3);
  *(undefined4 *)(param_1 + 0x90) = uVar3;
  iVar1 = fn_00145b00(0x48,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar1 != 0) {
    uVar3 = fn_00367b10();
  }
  uVar3 = fn_002b0148(*(undefined4 *)(param_1 + 4),uVar3);
  *(undefined4 *)(param_1 + 100) = uVar3;
  iVar1 = fn_00145b00(0x4c,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar1 != 0) {
    uVar3 = fn_002fdb40();
  }
  uVar3 = fn_002b0148(*(undefined4 *)(param_1 + 4),uVar3);
  *(undefined4 *)(param_1 + 0x68) = uVar3;
  iVar1 = fn_00145b00(0x34,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar1 != 0) {
    uVar3 = fn_00361ba0();
  }
  uVar3 = fn_002b0148(*(undefined4 *)(param_1 + 4),uVar3);
  *(undefined4 *)(param_1 + 0x6c) = uVar3;
  uVar3 = fn_001b92b8();
  uVar3 = fn_002b0148(*(undefined4 *)(param_1 + 4),uVar3);
  *(undefined4 *)(param_1 + 0x88) = uVar3;
  iVar1 = fn_00145b00(0x10,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar1 != 0) {
    uVar3 = fn_00390174();
  }
  uVar3 = fn_002b0148(*(undefined4 *)(param_1 + 4),uVar3);
  *(undefined4 *)(param_1 + 0x8c) = uVar3;
  iVar1 = fn_00145b00(0x14,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar1 != 0) {
    uVar3 = fn_00319ce0(iVar1,*(undefined4 *)(param_1 + 8));
  }
  uVar3 = fn_002b0148(*(undefined4 *)(param_1 + 4),uVar3);
  *(undefined4 *)(param_1 + 0x98) = uVar3;
  iVar1 = fn_00145b00(100,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar1 != 0) {
    uVar3 = fn_001f662c();
  }
  uVar3 = fn_002b0148(*(undefined4 *)(param_1 + 4),uVar3);
  *(undefined4 *)(param_1 + 0x9c) = uVar3;
  iVar1 = fn_00145b00(0x60,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar1 != 0) {
    uVar3 = fn_00341a28();
  }
  uVar3 = fn_002b0148(*(undefined4 *)(param_1 + 4),uVar3);
  *(undefined4 *)(param_1 + 0xa0) = uVar3;
  iVar4 = fn_00145b00(4,&DAT_00812c8c);
  iVar1 = 0;
  if (iVar4 != 0) {
    iVar1 = fn_00304cd8();
  }
  iVar4 = *(int *)(param_1 + 0x94);
  if (iVar4 != iVar1) {
    if (iVar4 != 0) {
      fn_00304d48(iVar4);
      fn_002feef8();
    }
    *(int *)(param_1 + 0x94) = iVar1;
  }
  fn_003045c0(*(undefined4 *)(param_1 + 0x94));
  *(undefined4 *)(*(int *)(param_1 + 8) + 100) = *(undefined4 *)(param_1 + 0x94);
  iVar1 = fn_00145b00(0x80,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_00110518();
  }
  piVar6 = *(int **)(param_1 + 0x20);
  if (piVar6 != piVar2) {
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 4))(piVar6);
    }
    *(int **)(param_1 + 0x20) = piVar2;
  }
  fn_0011050c(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x10),
               *(undefined4 *)(param_1 + 0x14));
  iVar1 = fn_00145b00(0x30,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_002a8214(iVar1,0);
  }
  piVar6 = *(int **)(param_1 + 0x24);
  if (piVar6 != piVar2) {
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 8))(piVar6);
    }
    *(int **)(param_1 + 0x24) = piVar2;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x24) + 8) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x10) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x14) = *(undefined4 *)(param_1 + 0x2c);
  iVar1 = fn_00145b00(0x60,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_002a87dc(iVar1,*(undefined4 *)(param_1 + 0x24));
  }
  piVar6 = *(int **)(param_1 + 0x28);
  if (piVar6 != piVar2) {
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 4))(piVar6);
    }
    *(int **)(param_1 + 0x28) = piVar2;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x4c) = *(undefined4 *)(DAT_008977e0 + 0x94);
  iVar1 = fn_00145b00(8,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_00227180();
  }
  piVar6 = *(int **)(param_1 + 0x38);
  if (piVar6 != piVar2) {
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 4))(piVar6);
    }
    *(int **)(param_1 + 0x38) = piVar2;
  }
  fn_00226f7c(*(undefined4 *)(param_1 + 0x38));
  iVar4 = fn_00145b00(4,&DAT_00812c8c);
  iVar1 = 0;
  if (iVar4 != 0) {
    iVar1 = fn_00683294();
  }
  iVar4 = *(int *)(param_1 + 0x3c);
  if (iVar4 != iVar1) {
    if (iVar4 != 0) {
      fn_00683308(iVar4);
      fn_002feef8();
    }
    *(int *)(param_1 + 0x3c) = iVar1;
  }
  iVar4 = fn_00145b00(0x14,&DAT_00812c8c);
  iVar1 = 0;
  if (iVar4 != 0) {
    iVar1 = fn_006934b8();
  }
  iVar4 = *(int *)(param_1 + 0x40);
  if (iVar4 != iVar1) {
    if (iVar4 != 0) {
      fn_006934d4(iVar4);
      fn_002feef8();
    }
    *(int *)(param_1 + 0x40) = iVar1;
  }
  iVar1 = fn_00145b00(0x3c,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_002fbb18();
  }
  piVar6 = *(int **)(param_1 + 0x44);
  if (piVar6 != piVar2) {
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 4))(piVar6);
    }
    *(int **)(param_1 + 0x44) = piVar2;
  }
  iVar1 = fn_00145b00(0x18,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_003f506c();
  }
  piVar6 = *(int **)(param_1 + 0x50);
  if (piVar6 != piVar2) {
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 4))(piVar6);
    }
    *(int **)(param_1 + 0x50) = piVar2;
  }
  iVar1 = fn_00145b00(0x20,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_002a5478();
  }
  piVar6 = *(int **)(param_1 + 0x48);
  if (piVar6 != piVar2) {
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 4))(piVar6);
    }
    *(int **)(param_1 + 0x48) = piVar2;
  }
  iVar4 = fn_00145b00(0x18,&DAT_00812c8c);
  iVar1 = 0;
  if (iVar4 != 0) {
    iVar1 = fn_003b692c();
  }
  iVar4 = *(int *)(param_1 + 0x54);
  if (iVar4 != iVar1) {
    if (iVar4 != 0) {
      fn_003b6a3c(iVar4);
      fn_002feef8();
    }
    *(int *)(param_1 + 0x54) = iVar1;
  }
  iVar4 = fn_00145b00(0x70,&DAT_00812c8c);
  iVar1 = 0;
  if (iVar4 != 0) {
    fn_00301f50(iVar4,0x70);
    iVar1 = fn_00120ea0(iVar4 + 0x60);
    iVar1 = iVar1 + -0x60;
  }
  iVar4 = *(int *)(param_1 + 0x58);
  if (iVar4 != iVar1) {
    if (iVar4 != 0) {
      iVar4 = fn_00120ec8(iVar4 + 0x60);
      fn_002feef8(iVar4 + -0x60);
    }
    *(int *)(param_1 + 0x58) = iVar1;
  }
  uVar5 = fn_002cd904(DAT_00897844);
  iVar1 = fn_00145b00(0x47c,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar1 != 0) {
    uVar3 = fn_001eada8();
  }
  fn_00302930(*(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x60) * 4),
               uVar3,uVar5);
  fn_0031a6b0(DAT_008977d8);
  fn_0036a60c(DAT_00897824);
  uVar3 = DAT_008977d0;
  fn_0025af84(DAT_008977d0);
  fn_00173b98(uVar3,0);
  *(undefined4 *)(*(int *)(param_1 + 8) + 0x54) = uVar3;
  fn_002cd71c();
  fn_002b0048(*(undefined4 *)(param_1 + 4));
  iVar1 = fn_00145b00(0xf9c,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_001f5dc8();
  }
  piVar6 = *(int **)(param_1 + 0x30);
  if (piVar6 != piVar2) {
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 4))(piVar6);
    }
    *(int **)(param_1 + 0x30) = piVar2;
  }
  (**(code **)(**(int **)(param_1 + 0x30) + 0x3c))();
  fn_005e0fb4(*(undefined4 *)(param_1 + 0x18));
  fn_00220a9c();
  fn_001d95bc();
  return 1;
}


