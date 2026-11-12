#include "0056c1b4_0056c1b4.h"



undefined4 fn_0056c1b4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  undefined4 in_s0;
  undefined4 local_40;
  int local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  local_40 = 1;
  uVar1 = fn_001481c8(*(undefined4 *)(param_1 + 0x68),DAT_008945b4,&DAT_0056c574,1);
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  local_40 = 1;
  local_3c = 1;
  uStack_38 = 0;
  uVar1 = fn_001480d0(*(undefined4 *)(param_1 + 0x68),uVar1,DAT_008945b8,&DAT_0056c57c);
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  iVar2 = fn_00178f9c(*(undefined4 *)(param_1 + 0x68),uVar1);
  piVar7 = *(int **)(iVar2 + 0x10);
  *(int **)(param_1 + 0x74) = piVar7;
  iVar3 = (**(code **)(*piVar7 + 0x2c))(piVar7,(char *)&DAT_0056c580,1);
  *(int *)(param_1 + 0x78) = iVar3;
  *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe;
  iVar3 = (**(code **)(*piVar7 + 0x2c))(piVar7,(char *)&DAT_0056c590,1);
  *(int *)(param_1 + 0x7c) = iVar3;
  iVar6 = 0;
  *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe;
  do {
    uVar1 = fn_006b51d8(*(undefined4 *)(DAT_00897804 + 0x1c),(&DAT_007c6fb8)[iVar6]);
    *(undefined4 *)(*(int *)(param_1 + 0x80) + iVar6 * 4) = uVar1;
    *(undefined4 *)(*(int *)(param_1 + 0x8c) + iVar6 * 4) = uVar1;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 3);
  uVar1 = fn_006b51d8(*(undefined4 *)(DAT_00897804 + 0x1c),3);
  *(undefined4 *)(param_1 + 0x11c) = uVar1;
  *(undefined1 *)(param_1 + 0x124) = 1;
  uVar1 = fn_006b51c0(*(undefined4 *)(DAT_00897804 + 0x1c));
  *(undefined4 *)(*(int *)(param_1 + 0x80) + 0xc) = uVar1;
  uVar1 = fn_006b51c0(*(undefined4 *)(DAT_00897804 + 0x1c));
  *(undefined4 *)(*(int *)(param_1 + 0x8c) + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 0xa4) = 1;
  iVar3 = fn_00154ac8(0x40);
  if (iVar3 != 0) {
    *(undefined1 *)(param_1 + 0x125) = 1;
  }
  iVar3 = (**(code **)(*piVar7 + 0x2c))(piVar7,(char *)&DAT_0056c5a8,1);
  if (iVar3 != 0) {
    *(byte *)(iVar3 + 0x44) = *(byte *)(param_1 + 0x124) | *(byte *)(iVar3 + 0x44) & 0xfe;
  }
  iVar3 = (**(code **)(*piVar7 + 0x2c))(piVar7,(char *)&DAT_0056c5c0,1);
  if (iVar3 != 0) {
    *(byte *)(iVar3 + 0x44) = *(byte *)(param_1 + 0x124) | *(byte *)(iVar3 + 0x44) & 0xfe;
  }
  iVar3 = (**(code **)(*piVar7 + 0x2c))(piVar7,(char *)&DAT_0056c5cc,1);
  if (iVar3 != 0) {
    *(byte *)(iVar3 + 0x44) = *(byte *)(param_1 + 0x124) | *(byte *)(iVar3 + 0x44) & 0xfe;
  }
  iVar3 = (**(code **)(*piVar7 + 0x2c))(piVar7,(char *)&DAT_0056c5d8,1);
  if (iVar3 != 0) {
    *(byte *)(iVar3 + 0x44) = *(byte *)(param_1 + 0x124) | *(byte *)(iVar3 + 0x44) & 0xfe;
  }
  iVar3 = (**(code **)(*piVar7 + 0x2c))(piVar7,(char *)&DAT_0056c5e4,1);
  if (iVar3 != 0) {
    *(byte *)(iVar3 + 0x44) = *(char *)(param_1 + 0x124) == '\0' | *(byte *)(iVar3 + 0x44) & 0xfe;
  }
  iVar3 = (**(code **)(*piVar7 + 0x2c))(piVar7,(char *)&DAT_0056c5f0,1);
  if (iVar3 != 0) {
    *(byte *)(iVar3 + 0x44) = *(char *)(param_1 + 0x124) == '\0' | *(byte *)(iVar3 + 0x44) & 0xfe;
  }
  uVar1 = fn_00172c98(iVar2,(char *)&DAT_0056c5fc);
  iVar3 = fn_00145b00(0x38,&DAT_00812c8c);
  if (iVar3 == 0) {
    piVar9 = (int *)0x0;
  }
  else {
    local_40 = *(undefined4 *)(param_1 + 0x48);
    local_3c = param_1 + 0x8c;
    uStack_38 = 1;
    local_34 = 1;
    uStack_30 = 0;
    piVar9 = (int *)fn_00307738(iVar3,*(undefined4 *)(param_1 + 4),uVar1,1);
  }
  piVar4 = *(int **)(param_1 + 0xac);
  if (piVar4 != piVar9) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))();
    }
    *(int **)(param_1 + 0xac) = piVar9;
  }
  (**(code **)(**(int **)(param_1 + 0xac) + 0x10))();
  iVar3 = fn_0030772c(*(undefined4 *)(param_1 + 0xac),3);
  if (iVar3 != 0) {
    *(byte *)(iVar3 + 0x44) = *(byte *)(param_1 + 0x124) | *(byte *)(iVar3 + 0x44) & 0xfe;
  }
  uVar1 = fn_00172c98(iVar2,(char *)&DAT_0056c610);
  iVar3 = fn_00145b00(0x60,&DAT_00812c8c);
  piVar9 = (int *)0x0;
  if (iVar3 != 0) {
    local_34 = *(undefined4 *)(param_1 + 0xa8);
    local_40 = *(undefined4 *)(param_1 + 0x48);
    uStack_30 = 1;
    uStack_2c = 0;
    local_3c = param_1 + 0x98;
    local_28 = 0;
    uStack_38 = *(undefined4 *)(param_1 + 0xa4);
    piVar9 = (int *)fn_00347d78(iVar3,*(undefined4 *)(param_1 + 4),uVar1,1);
  }
  piVar4 = *(int **)(param_1 + 0xb0);
  if (piVar4 != piVar9) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    *(int **)(param_1 + 0xb0) = piVar9;
  }
  (**(code **)(**(int **)(param_1 + 0xb0) + 0x10))();
  uVar1 = fn_00172c98(iVar2,(char *)&DAT_0056ca14);
  iVar3 = fn_00145b00(0x44,&DAT_00812c8c);
  piVar9 = (int *)0x0;
  if (iVar3 != 0) {
    local_40 = *(undefined4 *)(param_1 + 0x48);
    piVar9 = (int *)fn_00307cc4(iVar3,*(undefined4 *)(param_1 + 4),uVar1,1);
  }
  piVar4 = *(int **)(param_1 + 0xb4);
  if (piVar4 != piVar9) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    *(int **)(param_1 + 0xb4) = piVar9;
  }
  (**(code **)(**(int **)(param_1 + 0xb4) + 0x10))();
  *(undefined4 *)(*(int *)(param_1 + 0xb4) + 0x34) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(*(int *)(param_1 + 0xb4) + 0x3c) = *(undefined4 *)(param_1 + 0xa8);
  uVar1 = fn_00172c98(iVar2,(char *)&DAT_0056ca20);
  iVar3 = fn_00145b00(0x88,&DAT_00812c8c);
  piVar9 = (int *)0x0;
  if (iVar3 != 0) {
    local_40 = *(undefined4 *)(param_1 + 0x48);
    piVar9 = (int *)fn_0031fee0(iVar3,*(undefined4 *)(param_1 + 4),uVar1,1);
  }
  piVar4 = *(int **)(param_1 + 0xb8);
  if (piVar4 != piVar9) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    *(int **)(param_1 + 0xb8) = piVar9;
  }
  (**(code **)(**(int **)(param_1 + 0xb8) + 0x10))();
  local_40 = 0xffffffff;
  fn_0031f8fc(*(undefined4 *)(param_1 + 0xb8),1,0);
  iVar3 = *(int *)(param_1 + 0xb8);
  *(undefined1 *)(iVar3 + 0x81) = 1;
  fn_0031f3f4(iVar3,0);
  iVar3 = *(int *)(param_1 + 0xb8);
  *(undefined1 *)(iVar3 + 0x83) = 0;
  fn_0031f954(iVar3,0);
  uVar1 = fn_00172c98(iVar2,(char *)&DAT_0056ca34);
  iVar3 = fn_00145b00(0x30,&DAT_00812c8c);
  piVar9 = (int *)0x0;
  if (iVar3 != 0) {
    local_40 = *(undefined4 *)(param_1 + 0x48);
    local_3c = 1;
    uStack_38 = 0;
    piVar9 = (int *)fn_002b20c0(iVar3,*(undefined4 *)(param_1 + 4),uVar1,1);
  }
  piVar4 = *(int **)(param_1 + 0xbc);
  if (piVar4 != piVar9) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    *(int **)(param_1 + 0xbc) = piVar9;
  }
  (**(code **)(**(int **)(param_1 + 0xbc) + 0x10))();
  fn_002b20a4(*(undefined4 *)(param_1 + 0xbc),0);
  fn_002b1f48(*(undefined4 *)(param_1 + 0xbc),1);
  uVar1 = fn_00172c98(iVar2,(char *)&DAT_0056ca40);
  iVar3 = fn_00145b00(0x30,&DAT_00812c8c);
  if (iVar3 == 0) {
    piVar9 = (int *)0x0;
  }
  else {
    local_40 = *(undefined4 *)(param_1 + 0x48);
    local_3c = 1;
    uStack_38 = 0;
    piVar9 = (int *)fn_002b20c0(iVar3,*(undefined4 *)(param_1 + 4),uVar1,1);
  }
  piVar4 = *(int **)(param_1 + 0xc0);
  if (piVar4 != piVar9) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))();
    }
    *(int **)(param_1 + 0xc0) = piVar9;
  }
  (**(code **)(**(int **)(param_1 + 0xc0) + 0x10))();
  fn_002b20a4(*(undefined4 *)(param_1 + 0xc0),0);
  fn_002b1f48(*(undefined4 *)(param_1 + 0xc0),1);
  uVar1 = fn_00172c98(iVar2,(char *)&DAT_0056ca4c);
  iVar3 = fn_00145b00(0xd4,&DAT_00812c8c);
  piVar9 = (int *)0x0;
  if (iVar3 != 0) {
    local_40 = *(undefined4 *)(param_1 + 0x48);
    piVar9 = (int *)fn_002b44c0(iVar3,*(undefined4 *)(param_1 + 4),uVar1,0);
  }
  piVar4 = *(int **)(param_1 + 0xc4);
  if (piVar4 != piVar9) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    *(int **)(param_1 + 0xc4) = piVar9;
  }
  (**(code **)(**(int **)(param_1 + 0xc4) + 0x10))();
  fn_002b427c(*(undefined4 *)(param_1 + 0xc4),0);
  *(undefined1 *)(*(int *)(param_1 + 0xc4) + 0x2f) = 1;
  uVar1 = fn_00172c98(iVar2,(char *)&DAT_0056ca54);
  iVar3 = fn_00145b00(0x4c,&DAT_00812c8c);
  piVar9 = (int *)0x0;
  if (iVar3 != 0) {
    local_40 = *(undefined4 *)(param_1 + 0x48);
    piVar9 = (int *)fn_002b4d9c(iVar3,*(undefined4 *)(param_1 + 4),uVar1,1);
  }
  piVar4 = *(int **)(param_1 + 200);
  if (piVar4 != piVar9) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    *(int **)(param_1 + 200) = piVar9;
  }
  (**(code **)(**(int **)(param_1 + 200) + 0x10))();
  uVar1 = fn_00172c98(iVar2,&DAT_0056ca5c);
  iVar2 = fn_00145b00(0x24,&DAT_00812c8c);
  piVar9 = (int *)0x0;
  if (iVar2 != 0) {
    local_40 = *(undefined4 *)(param_1 + 0x48);
    in_s0 = 0x428c0000;
    piVar9 = (int *)fn_00243834(iVar2,*(undefined4 *)(param_1 + 4),uVar1,1);
  }
  piVar4 = *(int **)(param_1 + 0xcc);
  if (piVar4 != piVar9) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    *(int **)(param_1 + 0xcc) = piVar9;
  }
  (**(code **)(**(int **)(param_1 + 0xcc) + 0x10))();
  uVar10 = 0;
  do {
    fn_002b4fc8(*(undefined4 *)(param_1 + 200),uVar10 & 0xff,1);
    uVar10 = uVar10 + 1;
  } while ((int)uVar10 < 4);
  (**(code **)(**(int **)(param_1 + 200) + 0x28))(*(int **)(param_1 + 200),0);
  iVar2 = fn_00145b00(0x5c,&DAT_00812c8c);
  piVar9 = (int *)0x0;
  if (iVar2 != 0) {
    piVar9 = (int *)fn_0025e920(iVar2,*(undefined4 *)(param_1 + 4),piVar7);
  }
  piVar7 = *(int **)(param_1 + 0xd0);
  if (piVar7 != piVar9) {
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 4))(piVar7);
    }
    *(int **)(param_1 + 0xd0) = piVar9;
  }
  (**(code **)(**(int **)(param_1 + 0xd0) + 0x10))
            (*(int **)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0x48));
  fn_0025e3d4(*(undefined4 *)(param_1 + 0xd0),0);
  iVar2 = fn_00145b00(0xe4,&DAT_00812c8c);
  piVar7 = (int *)0x0;
  if (iVar2 != 0) {
    piVar7 = (int *)fn_001caa80(iVar2,*(undefined4 *)(param_1 + 4),0);
  }
  piVar9 = *(int **)(param_1 + 0xec);
  if (piVar9 != piVar7) {
    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 4))(piVar9);
    }
    *(int **)(param_1 + 0xec) = piVar7;
  }
  *(int *)(*(int *)(param_1 + 0xec) + 8) = param_1;
  (**(code **)(**(int **)(param_1 + 0xec) + 0x24))(*(int **)(param_1 + 0xec),4);
  iVar3 = 0;
  *(undefined1 *)(*(int *)(param_1 + 0xec) + 0x45) = 0;
  iVar2 = 0;
  *(undefined1 *)(*(int *)(param_1 + 0xec) + 0x44) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0xec) + 0x48) = 1;
LAB_0056cc24:
  do {
    iVar6 = (**(code **)(**(int **)(param_1 + 0xac) + 0x2c))(*(int **)(param_1 + 0xac),0,iVar3);
    uVar1 = DAT_008945c8;
    *(undefined4 *)(iVar6 + 0x3c) = DAT_008945c4;
    *(undefined4 *)(iVar6 + 0x40) = uVar1;
    *(byte *)(iVar6 + 0x44) = *(byte *)(iVar6 + 0x44) & 0xef | 0x10;
    while( true ) {
      iVar8 = iVar2;
      fn_001c9d44(*(undefined4 *)(param_1 + 0xec),iVar8 + iVar3 * 4,iVar6);
      iVar2 = iVar8 + 1;
      if (3 < iVar2) break;
      iVar6 = 0;
      if (iVar2 == 0) goto LAB_0056cc24;
      if ((iVar2 == 1 || iVar2 == 2) || iVar2 == 3) {
        iVar6 = (**(code **)(**(int **)(param_1 + 0xb0) + 0x2c))
                          (*(int **)(param_1 + 0xb0),iVar8,iVar3);
      }
    }
    iVar3 = iVar3 + 1;
    if (3 < iVar3) break;
    iVar2 = 0;
  } while( true );
  iVar2 = fn_00145b00(0xe4,&DAT_00812c8c);
  if (iVar2 == 0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = (int *)fn_001caa80(iVar2,*(undefined4 *)(param_1 + 4),0);
  }
  piVar9 = *(int **)(param_1 + 0xf0);
  if (piVar9 != piVar7) {
    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 4))();
    }
    *(int **)(param_1 + 0xf0) = piVar7;
  }
  *(int *)(*(int *)(param_1 + 0xf0) + 8) = param_1;
  (**(code **)(**(int **)(param_1 + 0xf0) + 0x24))(*(int **)(param_1 + 0xf0),2,1);
  *(undefined1 *)(*(int *)(param_1 + 0xf0) + 0x45) = 0;
  iVar3 = 0;
  *(undefined1 *)(*(int *)(param_1 + 0xf0) + 0x44) = 1;
  *(undefined4 *)(*(int *)(param_1 + 0xf0) + 0x10) = 0x100094e;
  iVar2 = *(int *)(param_1 + 0xf0);
  *(undefined1 *)(iVar2 + 0x48) = 1;
  do {
    if (iVar3 == 0) {
      iVar2 = *(int *)(param_1 + 0xbc);
    }
    uVar1 = 0;
    if (iVar3 == 0) {
LAB_0056cd78:
      uVar1 = *(undefined4 *)(iVar2 + 0x1c);
    }
    else if (iVar3 == 1) {
      iVar2 = *(int *)(param_1 + 0xc0);
      goto LAB_0056cd78;
    }
    iVar2 = fn_001c9d44(*(undefined4 *)(param_1 + 0xf0),iVar3,uVar1,0);
    iVar3 = iVar3 + 1;
    if (1 < iVar3) {
      iVar2 = fn_00145b00(0xe4,&DAT_00812c8c);
      if (iVar2 == 0) {
        piVar7 = (int *)0x0;
      }
      else {
        piVar7 = (int *)fn_001caa80(iVar2,*(undefined4 *)(param_1 + 4),0);
      }
      piVar9 = *(int **)(param_1 + 0xf4);
      if (piVar9 != piVar7) {
        if (piVar9 != (int *)0x0) {
          (**(code **)(*piVar9 + 4))();
        }
        *(int **)(param_1 + 0xf4) = piVar7;
      }
      *(int *)(*(int *)(param_1 + 0xf4) + 8) = param_1;
      (**(code **)(**(int **)(param_1 + 0xf4) + 0x24))(*(int **)(param_1 + 0xf4),1,4);
      *(undefined1 *)(*(int *)(param_1 + 0xf4) + 0x45) = 1;
      iVar2 = 0;
      *(undefined1 *)(*(int *)(param_1 + 0xf4) + 0x44) = 0;
      do {
        uVar1 = fn_002b4fbc(*(undefined4 *)(param_1 + 200),iVar2);
        fn_001c9d44(*(undefined4 *)(param_1 + 0xf4),iVar2,uVar1,0);
        iVar2 = iVar2 + 1;
      } while (iVar2 < 4);
      (**(code **)(**(int **)(param_1 + 0xf4) + 0x2c))(*(int **)(param_1 + 0xf4),0,0);
      *(undefined1 *)(*(int *)(param_1 + 0xf4) + 0x48) = 1;
      *(undefined4 *)(*(int *)(param_1 + 0xf4) + 0x10) = 0x100094e;
      *(undefined1 *)(*(int *)(param_1 + 0xf4) + 0x48) = 1;
      iVar2 = fn_00145b00(0xd0,&DAT_00812c8c);
      piVar7 = (int *)0x0;
      if (iVar2 != 0) {
        piVar7 = (int *)fn_0029011c(iVar2,*(undefined4 *)(param_1 + 4),1);
      }
      piVar9 = *(int **)(param_1 + 0xd4);
      if (piVar9 != piVar7) {
        if (piVar9 != (int *)0x0) {
          (**(code **)(*piVar9 + 4))(piVar9);
        }
        *(int **)(param_1 + 0xd4) = piVar7;
      }
      *(int *)(*(int *)(param_1 + 0xd4) + 8) = param_1;
      *(undefined4 *)(*(int *)(param_1 + 0xd4) + 200) = *(undefined4 *)(param_1 + 0xa4);
      fn_00290100(*(undefined4 *)(param_1 + 0xd4),*(undefined4 *)(param_1 + 0xa8));
      iVar2 = 0;
      *(undefined1 *)(*(int *)(param_1 + 0xd4) + 0x48) = 1;
      do {
        uVar1 = fn_00307ba8(*(undefined4 *)(param_1 + 0xb4),iVar2);
        fn_00660200(*(undefined4 *)(param_1 + 0xd4),iVar2,uVar1,0);
        iVar2 = iVar2 + 1;
      } while (iVar2 < 2);
      (**(code **)(**(int **)(param_1 + 0xec) + 0x2c))(*(int **)(param_1 + 0xec),0,0);
      *(undefined4 *)(*(int *)(param_1 + 0xec) + 0x10) = 0x100094e;
      iVar2 = (**(code **)(**(int **)(param_1 + 0xec) + 0x5c))();
      iVar2 = fn_0056b8b0(param_1,iVar2 % 4,(int)(iVar2 + ((uint)(iVar2 >> 0x1f) >> 0x1e)) >> 2);
      *(undefined1 *)(iVar2 + 0x2f) = 1;
      fn_00688ff8(*(undefined4 *)(iVar2 + 0x4c));
      local_40 = in_s0;
      fn_0025e7cc(*(undefined4 *)(param_1 + 0xd0),&local_40);
      fn_0025e3d4(*(undefined4 *)(param_1 + 0xd0),0);
      uVar1 = (**(code **)(**(int **)(param_1 + 0xec) + 0x5c))();
      fn_0056d5f4(param_1,uVar1);
      fn_0022da78(param_1 + 0x98,(&DAT_007c6fb0)[*(int *)(param_1 + 0x114)],0);
      uVar1 = fn_0016ba34(DAT_00897800,DAT_00898228,
                           *(undefined4 *)(&DAT_008945cc + *(int *)(param_1 + 0x114) * 4),0);
      fn_00243550(*(undefined4 *)(param_1 + 0xcc),uVar1);
      iVar2 = *(int *)(param_1 + 0xb8);
      if (iVar2 != 0) {
        *(undefined1 *)(iVar2 + 0x83) = 0;
        fn_0031f954(iVar2,0);
      }
      fn_0056e6ac(param_1,0);
      iVar2 = 0;
      do {
        iVar3 = 0;
        do {
          if (iVar2 == 0) {
            piVar7 = *(int **)(param_1 + 0xac);
            pcVar5 = *(code **)(*piVar7 + 0x30);
            iVar6 = 0;
LAB_0056d0a4:
            iVar6 = (*pcVar5)(piVar7,iVar6,iVar3);
            if (iVar6 != 0) {
              fn_002b325c(iVar6,3);
            }
          }
          else if ((iVar2 == 1 || iVar2 == 2) || iVar2 == 3) {
            piVar7 = *(int **)(param_1 + 0xb0);
            pcVar5 = *(code **)(*piVar7 + 0x30);
            iVar6 = iVar2 + -1;
            goto LAB_0056d0a4;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < 4);
        iVar2 = iVar2 + 1;
        if (3 < iVar2) {
          fn_0056e984(param_1);
          fn_0056c080(param_1);
          return 1;
        }
      } while( true );
    }
  } while( true );
}


