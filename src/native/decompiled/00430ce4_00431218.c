#include "00430ce4_00431218.h"



void fn_00431218(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar1 = fn_00172c98(param_2,(char *)&DAT_004313a8);
  if (iVar1 == 0) {
    iVar1 = fn_00172c98(param_2,(char *)&DAT_004313b4);
    if (iVar1 != 0) {
      iVar2 = fn_00145b00(0x2c,&DAT_00812c8c);
      piVar3 = (int *)0x0;
      if (iVar2 != 0) {
        piVar3 = (int *)fn_00305958(iVar2,*(undefined4 *)(param_1 + 4),iVar1,
                                     (int)*(char *)(param_3 + 0x5d));
      }
      piVar4 = *(int **)(param_1 + 0xd0);
      if (piVar4 != piVar3) {
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 4))(piVar4);
        }
        *(int **)(param_1 + 0xd0) = piVar3;
      }
      (**(code **)(**(int **)(param_1 + 0xd0) + 0x10))();
      fn_0043109c(param_1);
    }
    iVar1 = fn_00172c98(param_2,(char *)&DAT_004313c0);
    if (iVar1 == 0) {
      return;
    }
    iVar2 = fn_00145b00(0x4c,&DAT_00812c8c);
    piVar3 = (int *)0x0;
    if (iVar2 != 0) {
      piVar3 = (int *)fn_00348b68(iVar2,*(undefined4 *)(param_1 + 4),iVar1,
                                   (int)*(char *)(param_3 + 0x5d));
    }
    piVar4 = *(int **)(param_1 + 0xd0);
    if (piVar4 == piVar3) goto LAB_00431388;
  }
  else {
    iVar2 = fn_00145b00(0x4c,&DAT_00812c8c);
    piVar3 = (int *)0x0;
    if (iVar2 != 0) {
      piVar3 = (int *)fn_002b4d9c(iVar2,*(undefined4 *)(param_1 + 4),iVar1,
                                   (int)*(char *)(param_3 + 0x5d));
    }
    piVar4 = *(int **)(param_1 + 0xd0);
    if (piVar4 == piVar3) goto LAB_00431388;
  }
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))(piVar4);
  }
  *(int **)(param_1 + 0xd0) = piVar3;
LAB_00431388:
  (**(code **)(**(int **)(param_1 + 0xd0) + 0x10))();
  fn_0043109c(param_1);
  return;
}



void fn_0043109c(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  iVar1 = fn_00145b00(0xe4,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_001caa80(iVar1,*(undefined4 *)(param_1 + 4),1);
  }
  piVar5 = *(int **)(param_1 + 0xe0);
  if (piVar5 != piVar2) {
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
    *(int **)(param_1 + 0xe0) = piVar2;
  }
  *(int *)(*(int *)(param_1 + 0xe0) + 8) = param_1;
  piVar2 = *(int **)(param_1 + 0xd0);
  piVar5 = *(int **)(param_1 + 0xe0);
  iVar1 = piVar2[6];
  iVar6 = piVar2[5];
  uVar3 = (**(code **)(*piVar2 + 0x30))();
  (**(code **)(*piVar5 + 0x24))(piVar5,uVar3,iVar1 - iVar6 >> 2);
  iVar1 = 0;
  *(undefined1 *)(*(int *)(param_1 + 0xe0) + 0x45) = 1;
  *(undefined1 *)(*(int *)(param_1 + 0xe0) + 0x44) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0xe0) + 0x10) = 0x100094e;
  if (0 < *(int *)(*(int *)(param_1 + 0xd0) + 0x18) - *(int *)(*(int *)(param_1 + 0xd0) + 0x14) >> 2
     ) {
    do {
      iVar6 = 0;
      while( true ) {
        iVar4 = (**(code **)(**(int **)(param_1 + 0xd0) + 0x30))();
        piVar2 = *(int **)(param_1 + 0xd0);
        if (iVar4 <= iVar6) break;
        iVar4 = (**(code **)(*piVar2 + 0x30))();
        iVar4 = iVar1 * iVar4 + iVar6;
        uVar3 = fn_002b4fbc(*(undefined4 *)(param_1 + 0xd0),iVar4);
        fn_001c9d44(*(undefined4 *)(param_1 + 0xe0),iVar4,uVar3,0);
        iVar6 = iVar6 + 1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < piVar2[6] - piVar2[5] >> 2);
  }
  *(undefined1 *)(*(int *)(param_1 + 0xe0) + 0x46) = 0;
  fn_0066023c(*(undefined4 *)(param_1 + 0xe0));
  fn_00245330(param_1,*(undefined4 *)(param_1 + 0xe0));
  return;
}



undefined4 fn_0043100c(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  
  piVar2 = *(int **)(param_1 + 0xb0);
  bVar3 = piVar2 == (int *)0x0;
  if (bVar3) {
    piVar2 = *(int **)(param_1 + 0xb4);
  }
  if ((bVar3 && piVar2 == (int *)0x0) || (iVar1 = (**(code **)(*piVar2 + 0x30))(piVar2), iVar1 == 0)
     ) {
    return 0;
  }
  *(int *)(*(int *)(param_1 + 0xd4) + 0x3c) = piVar2[10];
  fn_00430be0(param_1,piVar2,param_2,0,1,4);
  fn_0068ab44(param_1,0x100094f);
  return 1;
}



void fn_00430fb0(int param_1)

{
  fn_002c246c();
  if (*(int **)(param_1 + 0xd0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xd0) + 0x14))();
  }
  if (*(int **)(param_1 + 0xd4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xd4) + 0x14))();
  }
  if (*(int **)(param_1 + 0xdc) == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00431004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0xdc) + 0x14))();
  return;
}



undefined4 fn_00430f14(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  
  piVar2 = *(int **)(param_1 + 0xb0);
  bVar3 = piVar2 == (int *)0x0;
  if (bVar3) {
    piVar2 = *(int **)(param_1 + 0xb4);
  }
  if ((bVar3 && piVar2 == (int *)0x0) || (iVar1 = (**(code **)(*piVar2 + 0x2c))(piVar2), iVar1 == 0)
     ) {
    return 0;
  }
  *(int *)(*(int *)(param_1 + 0xd4) + 0x3c) = piVar2[10];
  fn_00430be0(param_1,piVar2,param_2,1,1,4);
  if (param_3 != 0) {
    fn_0068ab44(param_1,0x100094f);
  }
  return 1;
}



void fn_00430ce4(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 unaff_r4;
  uint uVar4;
  undefined4 unaff_r5;
  int *piVar5;
  undefined4 unaff_r6;
  
  (**(code **)(**(int **)(param_1 + 0xf0) + 0x18))();
  if (*(int **)(param_1 + 0xf0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xf0) + 4))();
    *(undefined4 *)(param_1 + 0xf0) = 0;
  }
  (**(code **)(**(int **)(param_1 + 0xf4) + 0x18))();
  if (*(int **)(param_1 + 0xf4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xf4) + 4))();
    *(undefined4 *)(param_1 + 0xf4) = 0;
  }
  fn_002454a4(param_1,*(undefined4 *)(param_1 + 0x100));
  if (*(int **)(param_1 + 0x100) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x100) + 4))();
    *(undefined4 *)(param_1 + 0x100) = 0;
  }
  (**(code **)(**(int **)(param_1 + 0xf8) + 0x18))();
  if (*(int **)(param_1 + 0xf8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xf8) + 4))();
    *(undefined4 *)(param_1 + 0xf8) = 0;
  }
  (**(code **)(**(int **)(param_1 + 0xfc) + 0x18))();
  if (*(int **)(param_1 + 0xfc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xfc) + 4))();
    *(undefined4 *)(param_1 + 0xfc) = 0;
  }
  if (*(char *)(param_1 + 0x118) != '\0') {
    fn_0011ddb8();
  }
  if (*(int **)(param_1 + 0xd0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xd0) + 0x18))();
    if (*(int **)(param_1 + 0xd0) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xd0) + 4))();
      *(undefined4 *)(param_1 + 0xd0) = 0;
    }
  }
  if (*(int **)(param_1 + 0xd4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xd4) + 0x18))();
    if (*(int **)(param_1 + 0xd4) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xd4) + 4))();
      *(undefined4 *)(param_1 + 0xd4) = 0;
    }
  }
  if (*(int *)(param_1 + 0xd8) != 0) {
    fn_002454a4(param_1);
    if (*(int **)(param_1 + 0xd8) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xd8) + 4))();
      *(undefined4 *)(param_1 + 0xd8) = 0;
    }
  }
  if (*(int **)(param_1 + 0xdc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xdc) + 0x18))();
    if (*(int **)(param_1 + 0xdc) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xdc) + 4))();
      *(undefined4 *)(param_1 + 0xdc) = 0;
    }
  }
  if (*(int *)(param_1 + 0xe0) != 0) {
    fn_002454a4(param_1);
    if (*(int **)(param_1 + 0xe0) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xe0) + 4))();
      *(undefined4 *)(param_1 + 0xe0) = 0;
    }
  }
  if (*(int **)(param_1 + 0x8c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x8c) + 4))();
    *(undefined4 *)(param_1 + 0x8c) = 0;
  }
  if (*(int **)(param_1 + 0x98) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x98) + 0x14))();
    if (*(int **)(param_1 + 0x98) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x98) + 4))();
      *(undefined4 *)(param_1 + 0x98) = 0;
    }
  }
  uVar4 = 0;
  if (*(int *)(param_1 + 0xa4) - *(int *)(param_1 + 0xa0) >> 2 != 0) {
    do {
      uVar2 = *(int *)(param_1 + 0xa4) - *(int *)(param_1 + 0xa0) >> 2;
      if (uVar2 <= uVar4) {
        fn_002ff628(9,&DAT_008c7655,&DAT_008c7655,uVar4,uVar2,unaff_r4,unaff_r5,unaff_r6);
        param_4 = uVar2;
      }
      piVar5 = *(int **)(*(int *)(param_1 + 0xa0) + uVar4 * 4);
      (**(code **)(*piVar5 + 0x24))(piVar5);
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 0x20))(piVar5);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)(*(int *)(param_1 + 0xa4) - *(int *)(param_1 + 0xa0) >> 2));
  }
  uVar4 = *(uint *)(param_1 + 0xa4);
  uVar2 = *(uint *)(param_1 + 0xa0);
  if (uVar2 != uVar4) {
    uVar1 = uVar2;
    if (uVar4 <= uVar2) {
      do {
        uVar1 = uVar1 + 4;
      } while (uVar1 != uVar4);
    }
    *(uint *)(param_1 + 0xa4) = uVar4 - (uVar4 - uVar2 & 0xfffffffc);
  }
  uVar1 = *(uint *)(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0xa0) = 0;
  uVar2 = *(uint *)(param_1 + 0xa4);
  *(undefined4 *)(param_1 + 0xa4) = 0;
  iVar3 = *(int *)(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  uVar4 = uVar1;
  if (uVar2 < uVar1) {
    do {
      uVar4 = uVar4 + 4;
    } while (uVar4 != uVar2);
  }
  fn_001008c4(uVar1,(int)(iVar3 - uVar1) >> 2,0,iVar3,param_4);
  if (*(int **)(param_1 + 0x9c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x9c) + 0x24))();
    if (*(int **)(param_1 + 0x9c) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x9c) + 0x20))();
      *(undefined4 *)(param_1 + 0x9c) = 0;
    }
  }
  if (*(int **)(param_1 + 0xac) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xac) + 0x24))();
    if (*(int **)(param_1 + 0xac) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xac) + 0x20))();
      *(undefined4 *)(param_1 + 0xac) = 0;
    }
  }
  if (*(int **)(param_1 + 0xb0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xb0) + 0x24))();
    if (*(int **)(param_1 + 0xb0) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xb0) + 0x20))();
      *(undefined4 *)(param_1 + 0xb0) = 0;
    }
  }
  if (*(int **)(param_1 + 0xb4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xb4) + 0x24))();
    if (*(int **)(param_1 + 0xb4) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xb4) + 0x20))();
      *(undefined4 *)(param_1 + 0xb4) = 0;
    }
  }
  if (*(int **)(param_1 + 0xb8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xb8) + 0x24))();
    if (*(int **)(param_1 + 0xb8) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xb8) + 0x20))();
      *(undefined4 *)(param_1 + 0xb8) = 0;
    }
  }
  if (*(int **)(param_1 + 0xbc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xbc) + 0x24))();
    if (*(int **)(param_1 + 0xbc) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xbc) + 0x20))();
      *(undefined4 *)(param_1 + 0xbc) = 0;
    }
  }
  if (*(int **)(param_1 + 0x94) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x94) + 0x18))();
    if (*(int **)(param_1 + 0x94) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x94) + 4))();
      *(undefined4 *)(param_1 + 0x94) = 0;
    }
  }
  if (*(int *)(param_1 + 0x88) != -1) {
    fn_0016a43c(*(undefined4 *)(param_1 + 0x80));
    *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x84) != -1) {
                    /* WARNING: Subroutine does not return */
    fn_001482f4(*(undefined4 *)(param_1 + 0x80));
  }
  return;
}


