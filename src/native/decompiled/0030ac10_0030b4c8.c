#include "0030ac10_0030b4c8.h"



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_0030b4c8(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  iVar7 = (int)*(short *)(param_1 + 0x8c);
  iVar2 = param_1;
  if (param_2 == 0) {
    iVar2 = (int)*(short *)(param_1 + 0x8a);
  }
  if (param_2 != 0 || iVar2 != iVar7) {
    iVar2 = fn_00300f74(*(short *)(param_1 + 0x8c) * 100,(int)*(short *)(param_1 + 0x1fe),param_3,
                         param_4,param_4);
    uVar6 = 0;
    do {
      if ((iVar7 < 1) && (uVar6 != 0)) {
        uVar1 = *(int *)(param_1 + 0x144) - *(int *)(param_1 + 0x140) >> 2;
        if (uVar1 <= uVar6) {
          fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,uVar6,uVar1);
        }
        iVar3 = *(int *)(*(int *)(param_1 + 0x140) + uVar6 * 4);
        bVar5 = *(byte *)(iVar3 + 0x44) & 0xfe;
      }
      else {
        uVar8 = iVar7 % 10;
        uVar1 = *(int *)(param_1 + 0x144) - *(int *)(param_1 + 0x140) >> 2;
        if (uVar1 <= uVar6) {
          fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,uVar6,uVar1);
        }
        iVar3 = fn_006e1ee8(*(undefined4 *)(*(int *)(param_1 + 0x140) + uVar6 * 4));
        uVar1 = *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2;
        if (uVar1 <= uVar8) {
          fn_002ff628(9,&DAT_008c7670,&DAT_008c7670,uVar8,uVar1);
        }
        uVar4 = fn_001c8888(*(undefined4 *)(param_1 + 0x10),
                             *(undefined4 *)(*(int *)(param_1 + 0x3c) + uVar8 * 4));
        fn_0019501c(*(undefined4 *)(iVar3 + 0x78),uVar4);
        *(byte *)(iVar3 + 0x7c) = *(byte *)(iVar3 + 0x7c) & 0xf7;
        if (iVar2 < 0x15) {
          uVar4 = _DAT_00890424;
        }
        else {
          uVar4 = _DAT_00890428;
        }
        *(undefined4 *)(iVar3 + 0x70) = uVar4;
        uVar1 = *(int *)(param_1 + 0x144) - *(int *)(param_1 + 0x140) >> 2;
        if (uVar1 <= uVar6) {
          fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,uVar6,uVar1);
        }
        iVar3 = *(int *)(*(int *)(param_1 + 0x140) + uVar6 * 4);
        bVar5 = *(byte *)(iVar3 + 0x44) & 0xfe | 1;
      }
      *(byte *)(iVar3 + 0x44) = bVar5;
      uVar6 = uVar6 + 1;
      iVar7 = (int)(short)iVar7 / 10;
    } while ((int)uVar6 < 4);
  }
  return;
}



void fn_0030b034(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  
  if ((param_2 != 0) || (*(char *)(param_1 + 0x54) != *(char *)(param_1 + 0x55))) {
    uVar4 = (uint)*(char *)(param_1 + 0x4d);
    if (*(char *)(param_1 + 0x4e) == '\0') {
      uVar1 = *(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0xb4) >> 2;
      if (uVar1 <= uVar4) {
        fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,uVar4,uVar1);
      }
      iVar2 = *(int *)(*(int *)(param_1 + 0xb4) + uVar4 * 4);
      *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe | 1;
      uVar1 = *(int *)(param_1 + 0xc4) - *(int *)(param_1 + 0xc0) >> 2;
      if (uVar1 <= uVar4) {
        fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,uVar4,uVar1);
      }
      iVar2 = *(int *)(*(int *)(param_1 + 0xc0) + uVar4 * 4);
      *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe;
      uVar1 = *(int *)(param_1 + 0xd0) - *(int *)(param_1 + 0xcc) >> 2;
      if (*(char *)(param_1 + 0x55) == '\0') {
        if (uVar1 <= uVar4) {
          fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,uVar4,uVar1);
        }
        iVar2 = *(int *)(*(int *)(param_1 + 0xcc) + uVar4 * 4);
        *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe | 1;
        uVar1 = *(int *)(param_1 + 0xdc) - *(int *)(param_1 + 0xd8) >> 2;
        if (uVar1 <= uVar4) {
          fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,uVar4,uVar1);
        }
        iVar2 = *(int *)(*(int *)(param_1 + 0xd8) + uVar4 * 4);
        *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe;
        iVar2 = *(int *)(param_1 + 0xe8) - *(int *)(param_1 + 0xe4);
      }
      else {
        if (uVar1 <= uVar4) {
          fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,uVar4,uVar1);
        }
        iVar2 = *(int *)(*(int *)(param_1 + 0xcc) + uVar4 * 4);
        *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe;
        uVar1 = *(int *)(param_1 + 0xdc) - *(int *)(param_1 + 0xd8) >> 2;
        if (uVar1 <= uVar4) {
          fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,uVar4,uVar1);
        }
        iVar2 = *(int *)(*(int *)(param_1 + 0xd8) + uVar4 * 4);
        *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe | 1;
        iVar2 = *(int *)(param_1 + 0xe8) - *(int *)(param_1 + 0xe4);
      }
      if ((uint)(iVar2 >> 2) <= uVar4) {
        fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,uVar4,iVar2 >> 2);
      }
      iVar2 = *(int *)(*(int *)(param_1 + 0xe4) + uVar4 * 4);
      *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe;
    }
    else if (*(char *)(param_1 + 0x4e) == '\x01') {
      uVar1 = *(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0xb4) >> 2;
      if (uVar1 <= uVar4) {
        fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,uVar4,uVar1);
      }
      iVar2 = *(int *)(*(int *)(param_1 + 0xb4) + uVar4 * 4);
      *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe;
      uVar1 = *(int *)(param_1 + 0xc4) - *(int *)(param_1 + 0xc0) >> 2;
      if (uVar1 <= uVar4) {
        fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,uVar4,uVar1);
      }
      iVar2 = *(int *)(*(int *)(param_1 + 0xc0) + uVar4 * 4);
      *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe | 1;
      uVar1 = *(int *)(param_1 + 0xd0) - *(int *)(param_1 + 0xcc) >> 2;
      if (*(char *)(param_1 + 0x55) == '\0') {
        if (uVar1 <= uVar4) {
          fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,uVar4,uVar1);
        }
        iVar2 = *(int *)(*(int *)(param_1 + 0xcc) + uVar4 * 4);
        *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe | 1;
        uVar1 = *(int *)(param_1 + 0xdc) - *(int *)(param_1 + 0xd8) >> 2;
        if (uVar1 <= uVar4) {
          fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,uVar4,uVar1);
        }
        iVar2 = *(int *)(*(int *)(param_1 + 0xd8) + uVar4 * 4);
        *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe;
        uVar1 = *(int *)(param_1 + 0xe8) - *(int *)(param_1 + 0xe4) >> 2;
        if (uVar1 <= uVar4) {
          fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,uVar4,uVar1);
        }
        iVar2 = *(int *)(*(int *)(param_1 + 0xe4) + uVar4 * 4);
        bVar3 = *(byte *)(iVar2 + 0x44) & 0xfe;
      }
      else {
        if (uVar1 <= uVar4) {
          fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,uVar4,uVar1);
        }
        iVar2 = *(int *)(*(int *)(param_1 + 0xcc) + uVar4 * 4);
        *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe;
        uVar1 = *(int *)(param_1 + 0xdc) - *(int *)(param_1 + 0xd8) >> 2;
        if (uVar1 <= uVar4) {
          fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,uVar4,uVar1);
        }
        iVar2 = *(int *)(*(int *)(param_1 + 0xd8) + uVar4 * 4);
        *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe;
        uVar1 = *(int *)(param_1 + 0xe8) - *(int *)(param_1 + 0xe4) >> 2;
        if (uVar1 <= uVar4) {
          fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,uVar4,uVar1);
        }
        iVar2 = *(int *)(*(int *)(param_1 + 0xe4) + uVar4 * 4);
        bVar3 = *(byte *)(iVar2 + 0x44) & 0xfe | 1;
      }
      *(byte *)(iVar2 + 0x44) = bVar3;
    }
    if (*(int *)(param_1 + 0xfc) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0xfc) + 0x29) = *(undefined1 *)(param_1 + 0x55);
      return;
    }
  }
  return;
}



void fn_0030b018(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  
  *(char *)(param_1 + 0x4c) = (char)param_2;
  uVar1 = fn_0068b334(param_2);
  *(undefined1 *)(param_1 + 0x4d) = uVar1;
  return;
}



void fn_0030aef8(int param_1)

{
  if (*(char *)(param_1 + 0x14) != '\0') {
    fn_00308fb8(param_1,0);
    fn_00309438(param_1);
    if (*(int **)(param_1 + 0x188) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x188) + 0xc))();
      (**(code **)(**(int **)(param_1 + 0x188) + 0x14))();
    }
    if (*(int **)(param_1 + 0x18c) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x18c) + 0xc))();
      (**(code **)(**(int **)(param_1 + 0x18c) + 0x14))();
    }
    if (*(int **)(param_1 + 400) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 400) + 0xc))();
      (**(code **)(**(int **)(param_1 + 400) + 0x14))();
    }
    if (*(int **)(param_1 + 0x194) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x194) + 0xc))();
      (**(code **)(**(int **)(param_1 + 0x194) + 0x14))();
    }
    if (*(int **)(param_1 + 0x198) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x198) + 0xc))();
                    /* WARNING: Could not recover jumptable at 0x0030b008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(int **)(param_1 + 0x198) + 0x14))();
      return;
    }
  }
  return;
}



byte fn_0030aec0(int param_1)

{
  byte bVar1;
  byte bVar2;
  
  if (*(char *)(param_1 + 0x52) == '\0') {
    bVar1 = *(byte *)(*(int *)(param_1 + 0x160) + 0x44);
  }
  else {
    bVar1 = *(byte *)(*(int *)(param_1 + 0x16c) + 0x44);
  }
  bVar2 = bVar1 & 1;
  if ((bVar1 & 1) != 0) {
    bVar2 = 1;
  }
  return bVar2;
}



void fn_0030ac10(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  *(undefined1 *)(param_1 + 0x14) = 0;
  fn_0068af3c();
  if (*(int *)(param_1 + 0x204) != -1) {
    fn_00159f34(*(undefined4 *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x204) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x208) != -1) {
    fn_00159f34(*(undefined4 *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x208) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x20c) != -1) {
    fn_00159f34(*(undefined4 *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x20c) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x210) != -1) {
    fn_00159f34(*(undefined4 *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x210) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x214) != -1) {
    fn_00159f34(*(undefined4 *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x214) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x30) != -1) {
    iVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 0x10));
    fn_00151954(*(undefined4 *)(param_1 + 0xa4),*(undefined4 *)(iVar1 + 0x10));
    fn_0016a43c(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x30));
    *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x38) != -1) {
    iVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 0x10));
    fn_00151954(*(undefined4 *)(param_1 + 0xa4),*(undefined4 *)(iVar1 + 0x10));
    fn_0016a43c(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x38));
    *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x34) != -1) {
                    /* WARNING: Subroutine does not return */
    fn_001482f4(*(undefined4 *)(param_1 + 0x10));
  }
  uVar2 = 0;
  do {
    uVar3 = *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2;
    if (uVar3 <= uVar2) {
      fn_002ff628(9,&DAT_008c7670,&DAT_008c7670,uVar2,uVar3);
    }
    fn_00148348(*(undefined4 *)(param_1 + 0x10),
                 *(undefined4 *)(*(int *)(param_1 + 0x3c) + uVar2 * 4));
    uVar3 = *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2;
    if (uVar3 <= uVar2) {
      fn_002ff628(9,&DAT_008c7670,&DAT_008c7670,uVar2,uVar3);
    }
    uVar3 = uVar2 + 1;
    *(undefined4 *)(*(int *)(param_1 + 0x3c) + uVar2 * 4) = 0xffffffff;
    uVar2 = uVar3;
  } while ((int)uVar3 < 10);
  if (*(int *)(param_1 + 0x2c) != -1) {
                    /* WARNING: Subroutine does not return */
    fn_001482f4(*(undefined4 *)(param_1 + 0x10));
  }
  if (*(int *)(param_1 + 0x24) != -1) {
    iVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 0x10));
    fn_00151954(*(undefined4 *)(param_1 + 0xa4),*(undefined4 *)(iVar1 + 0x10));
    fn_0016a43c(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x24));
    *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x28) != -1) {
    fn_0016a43c(*(undefined4 *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x20) != -1) {
                    /* WARNING: Subroutine does not return */
    fn_001482f4(*(undefined4 *)(param_1 + 0x10));
  }
  if (*(int *)(param_1 + 0x100) != 0) {
    fn_00151954(*(undefined4 *)(*(int *)(param_1 + 0x100) + 0xc));
    *(undefined4 *)(param_1 + 0x100) = 0;
  }
  if (*(int **)(param_1 + 0xfc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xfc) + 0x14))();
    if (*(int **)(param_1 + 0xfc) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xfc) + 4))();
      *(undefined4 *)(param_1 + 0xfc) = 0;
    }
  }
  if (*(int *)(param_1 + 0x1c) != -1) {
    if (*(int *)(param_1 + 0xa0) != 0) {
      fn_00151954(*(int *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa4));
    }
    fn_0016a43c(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x18) != -1) {
                    /* WARNING: Subroutine does not return */
    fn_001482f4(*(undefined4 *)(param_1 + 0x10));
  }
  return;
}


