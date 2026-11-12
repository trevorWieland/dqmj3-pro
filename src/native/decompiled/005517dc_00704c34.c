#include "005517dc_00704c34.h"



void fn_00704c34(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined2 *puVar5;
  int iVar6;
  uint uVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  
  DAT_008e7660 = &DAT_00855ad4;
  DAT_008e7664 = 0;
  DAT_008e7668 = 0;
  DAT_008e766c = 0;
  DAT_008e7670 = 0;
  fn_004745d8(&DAT_008e7674,0x20000000,0x100000);
  DAT_008b6548 = 0;
  DAT_008b654c = 0;
  DAT_008b64f8 = &DAT_008b6548;
  DAT_008b64fc = fn_004b9b58(&DAT_008b6550,9999,0xc,0x1f,0x17,0x3b,0x3b);
  fn_004745d8(&DAT_008e76e8,0x20000000);
  DAT_008b6500 = 0;
  DAT_008e6c90 = &PTR_u_Insufficient_Memory_008b6568;
  DAT_008e6c88 = &DAT_00854100;
  DAT_008e6c8c = 0;
  DAT_008b6558 = &DAT_008e6c88;
  DAT_008e7658 = 0;
  DAT_008e765c = 0x9908b0df;
  DAT_008e6c94 = 1;
  DAT_008e7654 = 1;
  do {
    (&DAT_008e6c94)[DAT_008e7654] = (int)(&DAT_008e6c90)[DAT_008e7654] * 0x10dcd;
    DAT_008e7654 = DAT_008e7654 + 1;
  } while (DAT_008e7654 < 0x270);
  DAT_008e7738 = &DAT_00855ab4;
  DAT_008e773c = 0;
  DAT_008e7740 = 0;
  DAT_008e7744 = 0;
  DAT_008e7748 = 0;
  fn_004745d8(&DAT_008e774c,0x20000000,0x100000);
  DAT_008b63a1 = 1;
  fn_004745d8(&DAT_008e7710,1,0x100000);
  puVar1 = (undefined4 *)fn_004745d8(&DAT_008e932c,1,0x100000);
  *puVar1 = &PTR_LAB_00854110;
  DAT_008e6a94 = &DAT_00853d3c;
  DAT_008e6a98 = 0;
  puVar1 = (undefined4 *)fn_004745d8(&DAT_008e6aa4,0x20000000,0x100000);
  puVar1[10] = 0;
  *puVar1 = &PTR_LAB_00854110;
  puVar1[0x29] = 0;
  fn_00301f50(puVar1 + 0xb,0x78);
  puVar1 = (undefined4 *)fn_004745d8(puVar1 + 0x2b,0x20000000);
  puVar1[10] = 0;
  *puVar1 = &PTR_LAB_00854110;
  puVar1[0x29] = 0;
  fn_00301f50(puVar1 + 0xb,0x78);
  puVar1[-0x21] = puVar1[10];
  fn_0017821c(puVar1 + -0x20,puVar1 + 0xb,0x78);
  puVar1[-2] = puVar1[0x29];
  puVar1[-0x2d] = 0;
  fn_004a18ac(&DAT_008b6508,puVar1 + -0x2f);
  if (1 < DAT_008b6400) {
    if ((DAT_008b6400 == 0xffffffff) &&
       (puVar2 = (undefined4 *)fn_0015ece0(0xffffff5c), puVar2 != (undefined4 *)0x0)) {
      *puVar2 = 0xac;
      puVar2[1] = 0xffffffff;
      fn_00101a1c(puVar2 + 2,&LAB_00310bfc,0xac,0xffffffff);
    }
    uVar3 = fn_0015ece0(DAT_008b6400 * 0xac);
    puVar1[-0x2d] = uVar3;
    uVar7 = 0;
    if (DAT_008b6400 != 0) {
      ppuVar8 = &PTR_LAB_008533fc;
      puVar9 = &DAT_0085319c;
      do {
        iVar4 = puVar1[-0x2d] + uVar7 * 0xac;
        if (iVar4 != 0) {
          *(undefined4 *)(iVar4 + 4) = ppuVar8;
          *(undefined **)(iVar4 + 8) = puVar9;
          *(undefined4 *)(iVar4 + 0xc) = 0;
          *(undefined4 *)(iVar4 + 0x14) = 0xffffffff;
          *(undefined4 *)(iVar4 + 0x10) = 0;
          fn_0013c500(iVar4 + 0xc);
          *(undefined **)(iVar4 + 0x18) = &DAT_0085290c;
          *(undefined1 *)(iVar4 + 0x1c) = 0;
          *(undefined4 *)(iVar4 + 0x20) = puVar1[7];
          *(undefined4 *)(iVar4 + 0x24) = 0;
          *(undefined4 *)(iVar4 + 4) = &PTR_LAB_00854110;
          *(undefined4 *)(iVar4 + 0x28) = 0;
          *(undefined4 *)(iVar4 + 0x2c) = puVar1[10];
          fn_0017821c(iVar4 + 0x30,puVar1 + 0xb,0x78);
          *(undefined4 *)(iVar4 + 0xa8) = puVar1[0x29];
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < DAT_008b6400);
    }
  }
  DAT_008b64f4 = &DAT_00853c18;
  DAT_008b6504 = DAT_008b63ec;
  DAT_008b6564 = 0;
  DAT_008b6468 = &DAT_008b6560;
  DAT_008b6560 = &DAT_0085281c;
  fn_0046c7f0(&DAT_008e92e4,L"CallContextRegisterCheckExpiredCalls",100);
  fn_0046c7f0(&DAT_008e7774,L"ConnectionEncoding",1);
  iVar4 = 1;
  DAT_008e769c = &DAT_00852d6c;
  DAT_008e76a0 = &DAT_00853c90;
  uVar7 = 1;
  DAT_008e76a4 = 0;
  do {
    iVar6 = iVar4 + 1;
    uVar7 = uVar7 + 2;
    (&DAT_008e76a4)[iVar4] = 0;
    iVar4 = iVar4 + 2;
    (&DAT_008e76a4)[iVar6] = 0;
  } while (uVar7 < 0xf);
  DAT_008e76e0 = 1;
  DAT_008e76e4 = 0;
  DAT_008b6508 = &DAT_00854b88;
  fn_004745d8(&DAT_008e778c,2,0x100000);
  DAT_008e92fc = &DAT_00853fe8;
  DAT_008e9300 = 0;
  DAT_008e9309 = 0;
  DAT_008e9308 = 0;
  DAT_008e9304 = 0;
  fn_004a18ac(&DAT_008b6508,&DAT_008e92fc);
  if (1 < DAT_008b6400) {
    if (DAT_008b6400 == 0xffffffff) {
      fn_001287d4();
    }
    DAT_008e9304 = fn_0015ece0(DAT_008b6400);
    uVar7 = 0;
    if (DAT_008b6400 != 0) {
      do {
        if ((undefined1 *)(DAT_008e9304 + uVar7) != (undefined1 *)0x0) {
          *(undefined1 *)(DAT_008e9304 + uVar7) = DAT_008e9309;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < DAT_008b6400);
    }
  }
  DAT_008e6bf8 = &DAT_00853798;
  DAT_008e6c00 = &DAT_008528bc;
  DAT_008e6c08 = 0;
  DAT_008e6c04 = 0x200;
  DAT_008e6c20 = &DAT_008528bc;
  DAT_008e6c28 = 0;
  DAT_008e6c24 = 0x200;
  DAT_008e6c40 = &DAT_008528bc;
  DAT_008e6c48 = 0;
  DAT_008e6c44 = 0x200;
  DAT_008e6c60 = 0;
  DAT_008e6bfc = 2;
  DAT_008e6c74 = L"";
  DAT_008e6c70 = L"";
  DAT_008e6c64 = &DAT_00853fc4;
  DAT_008e6c68 = 0;
  DAT_008e6c6c = 0;
  fn_004a18ac(&DAT_008b6508,&DAT_008e6c64);
  if (1 < DAT_008b6400) {
    if (DAT_008b6400 == 0xffffffff) {
      fn_001287d4(0xfffffffc);
    }
    DAT_008e6c6c = fn_0015ece0(DAT_008b6400 << 2);
    uVar7 = 0;
    if (DAT_008b6400 != 0) {
      do {
        puVar1 = (undefined4 *)(DAT_008e6c6c + uVar7 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = DAT_008e6c74;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < DAT_008b6400);
    }
  }
  DAT_008e6c78 = &DAT_00854054;
  DAT_008e6c7c = 0;
  DAT_008e6c86 = 0x23f3;
  DAT_008e6c84 = 0x23f3;
  DAT_008e6c80 = 0;
  fn_004a18ac(&DAT_008b6508,&DAT_008e6c78);
  if (1 < DAT_008b6400) {
    if (DAT_008b6400 == 0xffffffff) {
      fn_001287d4(0xfffffffe);
    }
    DAT_008e6c80 = fn_0015ece0(DAT_008b6400 << 1);
    uVar7 = 0;
    if (DAT_008b6400 != 0) {
      do {
        puVar5 = (undefined2 *)(DAT_008e6c80 + uVar7 * 2);
        if (puVar5 != (undefined2 *)0x0) {
          *puVar5 = DAT_008e6c86;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < DAT_008b6400);
    }
  }
  DAT_008e92d8 = 0;
  DAT_008e92dc = 0;
  DAT_008e92e0 = 0;
  fn_00101a1c(&DAT_008e77b8,&LAB_0074d360,0x1b0,0x10);
  DAT_008e930c = &DAT_0085400c;
  DAT_008e9310 = 0;
  DAT_008e9319 = 0;
  DAT_008e9318 = 0;
  DAT_008e9314 = 0;
  fn_004a18ac(&DAT_008b6508,&DAT_008e930c);
  if (1 < DAT_008b6400) {
    if (DAT_008b6400 == 0xffffffff) {
      fn_001287d4();
    }
    DAT_008e9314 = fn_0015ece0(DAT_008b6400);
    uVar7 = 0;
    if (DAT_008b6400 != 0) {
      do {
        if ((undefined1 *)(DAT_008e9314 + uVar7) != (undefined1 *)0x0) {
          *(undefined1 *)(DAT_008e9314 + uVar7) = DAT_008e9319;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < DAT_008b6400);
    }
  }
  DAT_008e931c = &DAT_0085400c;
  DAT_008e9320 = 0;
  DAT_008e9329 = 4;
  DAT_008e9328 = 4;
  DAT_008e9324 = 0;
  fn_004a18ac(&DAT_008b6508,&DAT_008e931c);
  if (1 < DAT_008b6400) {
    if (DAT_008b6400 == 0xffffffff) {
      fn_001287d4();
    }
    DAT_008e9324 = fn_0015ece0(DAT_008b6400);
    uVar7 = 0;
    if (DAT_008b6400 != 0) {
      do {
        if ((undefined1 *)(DAT_008e9324 + uVar7) != (undefined1 *)0x0) {
          *(undefined1 *)(DAT_008e9324 + uVar7) = DAT_008e9329;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < DAT_008b6400);
    }
  }
  fn_00303b10(&DAT_008e931c,fn_0074e0d4,0x100000);
  return;
}



undefined4 fn_006bd958(void)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*(int *)(*DAT_00897818 + 0x14) != 0) {
    cVar1 = *(char *)(*(int *)(*DAT_00897818 + 0x14) + 0x31);
    if ((cVar1 == '\x01' || cVar1 == '\x02') || (cVar1 == '\x03')) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}



void fn_006a29cc(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = fn_0068cafc(DAT_008977e8);
  if (param_1[0x6e] == 0) {
    iVar2 = (**(code **)(*param_1 + 0x40))(param_1,0xa03f,0);
    param_1[0x6f] = iVar2;
    fn_0014481c(DAT_008977e8);
    iVar2 = fn_00263814();
    iVar2 = fn_00660790(0x10,iVar2 + 8,param_1 + 2);
    param_1[0x7c] = iVar2;
  }
  if (param_1[0x6e] == *(int *)(iVar1 + 0x4c)) {
    uVar3 = fn_0068c7e8(DAT_008977e8);
    fn_0023e640(uVar3,param_1[0x6f],0);
    iVar2 = (**(code **)(*param_1 + 0x40))(param_1,0xa040,0);
    param_1[0x6f] = iVar2;
  }
  if (param_1[0x6e] == *(int *)(iVar1 + 0x50)) {
    uVar3 = fn_0068c7e8(DAT_008977e8);
    fn_0023e640(uVar3,param_1[0x6f],0);
    iVar1 = (**(code **)(*param_1 + 0x40))(param_1,0xa041,0);
    param_1[0x6f] = iVar1;
  }
  param_1[0x6e] = param_1[0x6e] + 1;
  fn_00144810(DAT_008977e8);
  iVar1 = fn_006a8714();
  if ((iVar1 != 0) && (iVar1 = (**(code **)(*param_1 + 0x98))(param_1), iVar1 != 0)) {
                    /* WARNING: Subroutine does not return */
    fn_006a8660(*(undefined4 *)(*DAT_008977e8 + 0x58));
  }
  return;
}



undefined4 fn_00670370(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = param_3;
  local_c = param_2;
  uVar1 = (**(code **)*DAT_008bf4f4)(DAT_008bf4f4,&local_10);
  return uVar1;
}



int * fn_005517dc(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_b0;
  int local_ac;
  undefined1 auStack_a8 [140];
  
  local_b0 = *(undefined4 *)(param_1 + 0x20);
  local_ac = param_2;
  fn_0017d96c(auStack_a8,0x88,0x87,(char *)&DAT_007d8878);
  uVar2 = (**(code **)(**(int **)(param_1 + 0x24) + 0xc))
                    (*(int **)(param_1 + 0x24),0x616e696d,auStack_a8,0);
  fn_0017dcb0(&local_b0,uVar2);
  iVar1 = local_ac;
  if (local_ac == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    iVar3 = (**(code **)(*DAT_0089a918 + 8))(DAT_0089a918,0x34,4);
    if (iVar3 == 0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)fn_0019530c();
      *piVar4 = (int)&DAT_00857950;
      piVar4[0xc] = 0;
      fn_0017d948(param_1 + 4,param_1 + 8,piVar4 + 1);
    }
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0x20))(piVar4,iVar1,*(undefined4 *)(param_1 + 0x24));
    }
  }
  fn_0054a630(piVar4,param_3,param_4);
  return piVar4;
}


