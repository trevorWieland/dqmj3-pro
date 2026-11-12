#include "002cd878_002ce220.h"



undefined4 fn_002ce220(int *param_1,int param_2,int param_3)

{
  param_1[0x16] = param_2;
  param_1[0x17] = param_3;
  param_1[0x12] = 0x41200000;
  param_1[0xf] = 0;
  param_1[0x10] = 0x41200000;
  param_1[0x11] = 0;
  (**(code **)(*param_1 + 0x18))(param_1,param_2 + 8);
  (**(code **)(*param_1 + 0x24))(param_1,param_2 + 0x20);
  fn_00260640(param_1,0xa029);
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x21] = 0;
  fn_0026009c(param_1,param_2,1);
  return 1;
}



void fn_002ce1a4(int *param_1)

{
  int iVar1;
  
  fn_00260014(param_1,1);
  (**(code **)(*param_1 + 0x44))(param_1,0xa02a,1);
  fn_0014481c(DAT_008977e8);
  iVar1 = fn_00263814();
  fn_00660790(0xf,iVar1 + 8,param_1 + 2);
  *(undefined1 *)(param_1 + 0x22) = 1;
  param_1[0x21] = 0;
  return;
}



void fn_002cde7c(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  uVar4 = 0;
  *param_1 = &DAT_0081fc70;
  if ((int)(param_1[8] - param_1[7]) >> 3 != 0) {
    do {
      piVar1 = (int *)(param_1[7] + uVar4 * 8);
      iVar3 = *piVar1 + -1;
      *piVar1 = iVar3;
      if (iVar3 == 0) {
        fn_0012f208(param_1,uVar4);
        puVar5 = (undefined4 *)(param_1[7] + uVar4 * 8);
        if (puVar5[1] != 0) {
          fn_0012d73c();
        }
        puVar5[1] = 0;
        *puVar5 = 0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)((int)(param_1[8] - param_1[7]) >> 3));
  }
  uVar2 = param_1[7];
  uVar4 = uVar2;
  if ((uint)param_1[8] < uVar2) {
    do {
      uVar4 = uVar4 + 8;
    } while (uVar4 != param_1[8]);
  }
  fn_001008c4(uVar2,(int)(param_1[9] - uVar2) >> 3,0);
  fn_00241ddc(param_1);
  fn_002feef8();
  return;
}



void fn_002cdbfc(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  ushort uVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  
  if (((((((*(char *)(param_1 + 0x29) != *(char *)(param_2 + 1)) ||
          (*(short *)(param_1 + 0x2a) != *(short *)(param_2 + 2))) ||
         (*(short *)(param_1 + 0x2c) != *(short *)(param_2 + 4))) ||
        ((*(char *)(param_1 + 0x2f) != *(char *)(param_2 + 7) ||
         (*(short *)(param_1 + 0x30) != *(short *)(param_2 + 8))))) ||
       ((*(short *)(param_1 + 0x32) != *(short *)(param_2 + 10) ||
        ((*(char *)(param_1 + 0x35) != *(char *)(param_2 + 0xd) ||
         (*(short *)(param_1 + 0x36) != *(short *)(param_2 + 0xe))))))) ||
      (*(short *)(param_1 + 0x38) != *(short *)(param_2 + 0x10))) ||
     ((((*(char *)(param_1 + 0x3b) != *(char *)(param_2 + 0x13) ||
        (*(short *)(param_1 + 0x3c) != *(short *)(param_2 + 0x14))) ||
       (*(short *)(param_1 + 0x3e) != *(short *)(param_2 + 0x16))) ||
      (((*(char *)(param_1 + 0x41) != *(char *)(param_2 + 0x19) ||
        (*(short *)(param_1 + 0x42) != *(short *)(param_2 + 0x1a))) ||
       (*(short *)(param_1 + 0x44) != *(short *)(param_2 + 0x1c))))))) {
    fn_00301a9c(param_1 + 0x28,param_2,0x1e);
    piVar1 = *(int **)(param_1 + 0x1c);
    if (0 < *piVar1) {
      bVar5 = *(int *)(param_1 + 0x20) - (int)piVar1 >> 3 != 0;
      if (bVar5) {
        piVar1 = (int *)piVar1[1];
      }
      if (bVar5 && piVar1 != (int *)0x0) {
        fn_0012f208(param_1,0);
        iVar4 = *(int *)(param_1 + 0x1c);
        if (*(int *)(iVar4 + 4) != 0) {
          fn_0012d73c();
        }
        *(undefined4 *)(iVar4 + 4) = 0;
        uVar2 = fn_001287b4();
        uVar2 = fn_0011c184(L"rom:/data/Model/Break.bch",uVar2,0x80,5);
        iVar4 = fn_00145ac0();
        if (iVar4 != 0) {
          *(undefined4 *)(*(int *)(param_1 + 0x1c) + 4) = uVar2;
        }
        uVar2 = fn_00145ac0(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 4));
        fn_00179dc0(param_1,0,uVar2);
        uVar3 = (ushort)*(byte *)(param_1 + 0x29);
        bVar5 = uVar3 == 0;
        if (bVar5) {
          uVar3 = *(ushort *)(param_1 + 0x2a);
        }
        bVar6 = bVar5 && uVar3 == 0;
        if (bVar5 && uVar3 == 0) {
          bVar6 = *(short *)(param_1 + 0x2c) == 0;
        }
        uVar3 = (ushort)*(byte *)(param_1 + 0x2f);
        bVar5 = uVar3 == 0;
        if (bVar5) {
          uVar3 = *(ushort *)(param_1 + 0x30);
        }
        bVar7 = bVar5 && uVar3 == 0;
        if (bVar5 && uVar3 == 0) {
          bVar7 = *(short *)(param_1 + 0x32) == 0;
        }
        uVar3 = (ushort)*(byte *)(param_1 + 0x35);
        if (!bVar7) {
          bVar6 = false;
        }
        bVar5 = uVar3 == 0;
        if (bVar5) {
          uVar3 = *(ushort *)(param_1 + 0x36);
        }
        bVar7 = bVar5 && uVar3 == 0;
        if (bVar5 && uVar3 == 0) {
          bVar7 = *(short *)(param_1 + 0x38) == 0;
        }
        uVar3 = (ushort)*(byte *)(param_1 + 0x3b);
        if (!bVar7) {
          bVar6 = false;
        }
        bVar5 = uVar3 == 0;
        if (bVar5) {
          uVar3 = *(ushort *)(param_1 + 0x3c);
        }
        bVar7 = bVar5 && uVar3 == 0;
        if (bVar5 && uVar3 == 0) {
          bVar7 = *(short *)(param_1 + 0x3e) == 0;
        }
        uVar3 = (ushort)*(byte *)(param_1 + 0x41);
        if (!bVar7) {
          bVar6 = false;
        }
        bVar5 = uVar3 == 0;
        if (bVar5) {
          uVar3 = *(ushort *)(param_1 + 0x42);
        }
        bVar7 = bVar5 && uVar3 == 0;
        if (bVar5 && uVar3 == 0) {
          bVar7 = *(short *)(param_1 + 0x44) == 0;
        }
        if ((!bVar7) || (!bVar6)) {
          fn_00294228(0,param_1 + 0x28);
          return;
        }
      }
    }
  }
  return;
}



void fn_002cdb8c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (((1 < (uint)(*(int *)(param_1 + 0x20) - iVar1 >> 3)) && (*(int *)(iVar1 + 0xc) != 0)) &&
     (iVar2 = *(int *)(iVar1 + 8) + -1, *(int *)(iVar1 + 8) = iVar2, iVar2 == 0)) {
    fn_0012f208(param_1,1);
    iVar1 = *(int *)(param_1 + 0x1c);
    if (*(int *)(iVar1 + 0xc) != 0) {
      fn_0012d73c();
    }
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
  }
  return;
}



undefined4 fn_002cdae0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  *(int *)(*(int *)(param_1 + 0x1c) + 8) = *(int *)(*(int *)(param_1 + 0x1c) + 8) + 1;
  if (((uint)(*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) >> 3) < 2) ||
     (*(int *)(*(int *)(param_1 + 0x1c) + 0xc) == 0)) {
    uVar1 = fn_001287b4();
    uVar1 = fn_0011c184(L"rom:/data/Mask/Break.bch",uVar1,0x80,5);
    iVar2 = fn_00145ac0();
    if (iVar2 != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xc) = uVar1;
    }
  }
  return 1;
}



void fn_002cda84(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  bool bVar4;
  
  piVar2 = *(int **)(param_1 + 0x1c);
  bVar4 = *(int *)(param_1 + 0x20) - (int)piVar2 >> 3 != 0;
  iVar1 = 0;
  if (bVar4) {
    iVar1 = piVar2[1];
  }
  if ((bVar4 && iVar1 != 0) && (iVar1 = *piVar2, *piVar2 = iVar1 + -1, iVar1 + -1 == 0)) {
    fn_0012f208(param_1);
    puVar3 = *(undefined4 **)(param_1 + 0x1c);
    if (puVar3[1] != 0) {
      fn_0012d73c();
    }
    puVar3[1] = 0;
    *puVar3 = 0;
  }
  return;
}



undefined4 fn_002cd904(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ushort uVar4;
  uint extraout_r1;
  uint uVar5;
  int *piVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  
  piVar6 = *(int **)(param_1 + 0x1c);
  iVar1 = *piVar6;
  *piVar6 = iVar1 + 1;
  iVar2 = *(int *)(param_1 + 0x1c);
  bVar7 = *(int *)(param_1 + 0x20) - iVar2 >> 3 == 0;
  if (!bVar7) {
    iVar2 = *(int *)(iVar2 + 4);
  }
  if (bVar7 || iVar2 == 0) {
    uVar3 = fn_001287b4();
    uVar3 = fn_0011c184(L"rom:/data/Model/Break.bch",uVar3,0x80,5);
    iVar2 = fn_00145ac0();
    if (iVar2 != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x1c) + 4) = uVar3;
    }
    uVar3 = fn_00145ac0(piVar6[1]);
    fn_00179dc0(param_1,0,uVar3);
    if (iVar1 == 0) {
      bVar7 = *(char *)(param_1 + 0x29) == '\0';
      uVar5 = extraout_r1;
      if (bVar7) {
        uVar5 = (uint)*(ushort *)(param_1 + 0x2a);
      }
      bVar8 = bVar7 && uVar5 == 0;
      if (bVar7 && uVar5 == 0) {
        bVar8 = *(short *)(param_1 + 0x2c) == 0;
      }
      uVar4 = (ushort)*(byte *)(param_1 + 0x2f);
      bVar7 = uVar4 == 0;
      if (bVar7) {
        uVar4 = *(ushort *)(param_1 + 0x30);
      }
      bVar9 = bVar7 && uVar4 == 0;
      if (bVar7 && uVar4 == 0) {
        bVar9 = *(short *)(param_1 + 0x32) == 0;
      }
      uVar4 = (ushort)*(byte *)(param_1 + 0x35);
      if (!bVar9) {
        bVar8 = false;
      }
      bVar7 = uVar4 == 0;
      if (bVar7) {
        uVar4 = *(ushort *)(param_1 + 0x36);
      }
      bVar9 = bVar7 && uVar4 == 0;
      if (bVar7 && uVar4 == 0) {
        bVar9 = *(short *)(param_1 + 0x38) == 0;
      }
      uVar4 = (ushort)*(byte *)(param_1 + 0x3b);
      if (!bVar9) {
        bVar8 = false;
      }
      bVar7 = uVar4 == 0;
      if (bVar7) {
        uVar4 = *(ushort *)(param_1 + 0x3c);
      }
      bVar9 = bVar7 && uVar4 == 0;
      if (bVar7 && uVar4 == 0) {
        bVar9 = *(short *)(param_1 + 0x3e) == 0;
      }
      uVar4 = (ushort)*(byte *)(param_1 + 0x41);
      if (!bVar9) {
        bVar8 = false;
      }
      bVar7 = uVar4 == 0;
      if (bVar7) {
        uVar4 = *(ushort *)(param_1 + 0x42);
      }
      bVar9 = bVar7 && uVar4 == 0;
      if (bVar7 && uVar4 == 0) {
        bVar9 = *(short *)(param_1 + 0x44) == 0;
      }
      if ((!bVar9) || (!bVar8)) {
        fn_00294228(0,param_1 + 0x28);
      }
    }
  }
  return 0;
}



bool fn_002cd878(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = fn_0044fcfc();
  uVar2 = fn_006b625c(*(undefined4 *)(DAT_00897804 + 8));
  *(undefined4 *)(param_1 + 4) = uVar2;
  uVar3 = fn_0044fcfc();
  if (uVar3 < *(uint *)(param_1 + 4)) {
    uVar2 = fn_0044fcfc();
    *(undefined4 *)(param_1 + 4) = uVar2;
    fn_0025b2dc(*(undefined4 *)(DAT_00897804 + 8),uVar2);
  }
  uVar3 = iVar1 - *(int *)(param_1 + 4);
  if (2999 < uVar3) {
    uVar2 = fn_0044fcfc(uVar3);
    fn_0025b2dc(*(undefined4 *)(DAT_00897804 + 8),uVar2);
  }
  return 2999 < uVar3;
}


