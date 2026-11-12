#include "00309dd4_00309dd4.h"



void fn_00309dd4(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  undefined **ppuVar14;
  uint in_fpscr;
  float fVar15;
  
  *(undefined1 *)(param_1 + 0x14) = 1;
  if (*(int *)(param_1 + 0x18) == -1) {
    uVar2 = fn_001481c8(*(undefined4 *)(param_1 + 0x10),DAT_00890410,&DAT_0030a1d8,1,1);
    *(undefined4 *)(param_1 + 0x18) = uVar2;
  }
  if (*(int *)(param_1 + 0x1c) == -1) {
    uVar2 = fn_001c8abc(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18),
                         (char *)&DAT_0030a1e0);
    *(undefined4 *)(param_1 + 0x1c) = uVar2;
    iVar3 = fn_00178f9c(*(undefined4 *)(param_1 + 0x10),uVar2);
    uVar10 = 0;
    *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(iVar3 + 0x10);
    do {
      uVar2 = (**(code **)(**(int **)(param_1 + 0xa4) + 0x2c))
                        (*(int **)(param_1 + 0xa4),(&DAT_00890504)[uVar10 * 7],1);
      uVar1 = *(int *)(param_1 + 0xac) - *(int *)(param_1 + 0xa8) >> 2;
      if (uVar1 <= uVar10) {
        fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,uVar10,uVar1);
      }
      *(undefined4 *)(*(int *)(param_1 + 0xa8) + uVar10 * 4) = uVar2;
      uVar2 = (**(code **)(**(int **)(param_1 + 0xa4) + 0x2c))
                        (*(int **)(param_1 + 0xa4),(&DAT_00890508)[uVar10 * 7],1);
      uVar1 = *(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0xb4) >> 2;
      if (uVar1 <= uVar10) {
        fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,uVar10,uVar1);
      }
      *(undefined4 *)(*(int *)(param_1 + 0xb4) + uVar10 * 4) = uVar2;
      uVar2 = (**(code **)(**(int **)(param_1 + 0xa4) + 0x2c))
                        (*(int **)(param_1 + 0xa4),(&DAT_0089050c)[uVar10 * 7],1);
      uVar1 = *(int *)(param_1 + 0xc4) - *(int *)(param_1 + 0xc0) >> 2;
      if (uVar1 <= uVar10) {
        fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,uVar10,uVar1);
      }
      *(undefined4 *)(*(int *)(param_1 + 0xc0) + uVar10 * 4) = uVar2;
      uVar2 = (**(code **)(**(int **)(param_1 + 0xa4) + 0x2c))
                        (*(int **)(param_1 + 0xa4),(&DAT_00890510)[uVar10 * 7],1);
      uVar1 = *(int *)(param_1 + 0xd0) - *(int *)(param_1 + 0xcc) >> 2;
      if (uVar1 <= uVar10) {
        fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,uVar10,uVar1);
      }
      *(undefined4 *)(*(int *)(param_1 + 0xcc) + uVar10 * 4) = uVar2;
      uVar2 = (**(code **)(**(int **)(param_1 + 0xa4) + 0x2c))
                        (*(int **)(param_1 + 0xa4),(&DAT_00890514)[uVar10 * 7],1);
      uVar1 = *(int *)(param_1 + 0xdc) - *(int *)(param_1 + 0xd8) >> 2;
      if (uVar1 <= uVar10) {
        fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,uVar10,uVar1);
      }
      *(undefined4 *)(*(int *)(param_1 + 0xd8) + uVar10 * 4) = uVar2;
      uVar2 = (**(code **)(**(int **)(param_1 + 0xa4) + 0x2c))
                        (*(int **)(param_1 + 0xa4),(&DAT_00890518)[uVar10 * 7],1);
      uVar1 = *(int *)(param_1 + 0xe8) - *(int *)(param_1 + 0xe4) >> 2;
      if (uVar1 <= uVar10) {
        fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,uVar10,uVar1);
      }
      *(undefined4 *)(*(int *)(param_1 + 0xe4) + uVar10 * 4) = uVar2;
      uVar2 = (**(code **)(**(int **)(param_1 + 0xa4) + 0x2c))
                        (*(int **)(param_1 + 0xa4),(&DAT_0089051c)[uVar10 * 7],1);
      uVar1 = *(int *)(param_1 + 0xf4) - *(int *)(param_1 + 0xf0) >> 2;
      if (uVar1 <= uVar10) {
        fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,uVar10,uVar1);
      }
      *(undefined4 *)(*(int *)(param_1 + 0xf0) + uVar10 * 4) = uVar2;
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < 4);
    fn_0018a69c(*(undefined4 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa4));
    uVar2 = (**(code **)(**(int **)(param_1 + 0xa4) + 0x2c))
                      (*(int **)(param_1 + 0xa4),
                       (&PTR_s_Null_status_base_s_007babac)[*(char *)(param_1 + 0x4d)],1);
    *(undefined4 *)(param_1 + 0x184) = uVar2;
    if (*(char *)(param_1 + 0x4e) == '\0') {
      uVar2 = fn_001853ec(*(undefined4 *)(param_1 + 0x10),(char *)&DAT_0086b2ac,*(undefined4 *)(param_1 + 0x1c))
      ;
      *(undefined4 *)(param_1 + 0x204) = uVar2;
      piVar4 = (int *)fn_001854ac(*(undefined4 *)(param_1 + 0x10),uVar2);
      *(int **)(param_1 + 0x188) = piVar4;
      (**(code **)(*piVar4 + 0x10))(piVar4,0);
    }
    else {
      uVar2 = fn_001853ec(*(undefined4 *)(param_1 + 0x10),(char *)&DAT_0085d1dc,
                           *(undefined4 *)(param_1 + 0x1c));
      *(undefined4 *)(param_1 + 0x204) = uVar2;
      piVar4 = (int *)fn_001854ac(*(undefined4 *)(param_1 + 0x10),uVar2);
      *(int **)(param_1 + 0x188) = piVar4;
      (**(code **)(*piVar4 + 0x10))(piVar4,0);
    }
    uVar2 = fn_001853ec(*(undefined4 *)(param_1 + 0x10),(char *)&DAT_0085d130,*(undefined4 *)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x208) = uVar2;
    piVar4 = (int *)fn_001854ac(*(undefined4 *)(param_1 + 0x10),uVar2);
    *(int **)(param_1 + 0x18c) = piVar4;
    (**(code **)(*piVar4 + 0x10))(piVar4,0);
    uVar2 = fn_001853ec(*(undefined4 *)(param_1 + 0x10),&DAT_0085d1e8,
                         *(undefined4 *)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x20c) = uVar2;
    piVar4 = (int *)fn_001854ac(*(undefined4 *)(param_1 + 0x10),uVar2);
    *(int **)(param_1 + 400) = piVar4;
    (**(code **)(*piVar4 + 0x10))(piVar4,0);
    iVar3 = (int)*(char *)(param_1 + 0x4d);
    if (*(char *)(param_1 + 0x4f) != '\0') {
      iVar9 = (int)*(char *)(param_1 + 0x4b);
      if (iVar3 < *(char *)(param_1 + 0x4b)) {
        iVar9 = iVar3;
      }
      iVar13 = 0;
      do {
        iVar11 = 0;
        if (*(char *)(param_1 + 0x50) == '\0') {
          ppuVar14 = (undefined **)(&DAT_00890434 + iVar13 * 4);
        }
        else {
          ppuVar14 = &PTR_s_win_li_iconframe_ss_00_00890474 + iVar13 * 4;
        }
        do {
          if ((ppuVar14[iVar11] != (undefined *)0x0) &&
             (iVar5 = fn_00689210(*(undefined4 *)(param_1 + 0xa4)), iVar5 != 0)) {
            *(byte *)(iVar5 + 0x44) =
                 (iVar13 == iVar3 && iVar11 == iVar9) | *(byte *)(iVar5 + 0x44) & 0xfe;
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < 4);
        iVar13 = iVar13 + 1;
      } while (iVar13 < 4);
    }
    fn_003096b8(param_1);
    iVar3 = (int)*(char *)(param_1 + 0x4d);
    if (*(char *)(param_1 + 0x53) != '\0') {
      iVar9 = (int)*(char *)(param_1 + 0x4b);
      if (iVar3 < *(char *)(param_1 + 0x4b)) {
        iVar9 = iVar3;
      }
      iVar13 = 0;
      do {
        iVar11 = 0;
        do {
          if (((&DAT_008904b4)[iVar13 * 4 + iVar11] != 0) &&
             (iVar5 = fn_00689210(*(undefined4 *)(param_1 + 0xa4)), iVar5 != 0)) {
            *(byte *)(iVar5 + 0x44) =
                 (iVar13 == iVar3 && iVar11 == iVar9) | *(byte *)(iVar5 + 0x44) & 0xfe;
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < 4);
        iVar13 = iVar13 + 1;
      } while (iVar13 < 4);
    }
  }
  iVar3 = fn_00145b00(0x34,&DAT_00812c8c);
  if (iVar3 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)fn_0022d948(iVar3,*(undefined4 *)(param_1 + 4),(int)*(short *)(param_1 + 0x48),
                                 (int)*(char *)(param_1 + 0x4c),(int)*(char *)(param_1 + 0x4a));
  }
  piVar6 = *(int **)(param_1 + 0xfc);
  if (piVar6 != piVar4) {
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 4))();
    }
    *(int **)(param_1 + 0xfc) = piVar4;
  }
  (**(code **)(**(int **)(param_1 + 0xfc) + 0x10))(*(int **)(param_1 + 0xfc),param_2);
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(*(int *)(param_1 + 0xfc) + 0x1c);
  uVar2 = (**(code **)(**(int **)(param_1 + 0xa4) + 0x2c))
                    (*(int **)(param_1 + 0xa4),
                     (&PTR_s_mon_icon_s_007babbc)[*(char *)(param_1 + 0x4d)],1);
  fn_0018a69c(uVar2,*(undefined4 *)(param_1 + 0x100));
  if (*(int *)(param_1 + 0x20) == -1) {
    uVar2 = fn_001481c8(*(undefined4 *)(param_1 + 0x10),DAT_00890414,&DAT_0030a1d8,1,1);
    *(undefined4 *)(param_1 + 0x20) = uVar2;
  }
  piVar4 = (int *)0x0;
  if (*(int *)(param_1 + 0x24) == -1) {
    uVar2 = fn_001c8abc(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x20),
                         (char *)&DAT_0030a7ac);
    *(undefined4 *)(param_1 + 0x24) = uVar2;
    iVar3 = fn_00178f9c(*(undefined4 *)(param_1 + 0x10),uVar2);
    piVar6 = *(int **)(iVar3 + 0x10);
    uVar2 = (**(code **)(*piVar6 + 0x2c))(piVar6,(char *)&DAT_0030a7c0,1);
    uVar10 = 0;
    *(undefined4 *)(param_1 + 0x104) = uVar2;
    do {
      uVar2 = (**(code **)(*piVar6 + 0x2c))(piVar6,(&DAT_008905b0)[uVar10],1);
      uVar1 = *(int *)(param_1 + 0x10c) - *(int *)(param_1 + 0x108) >> 2;
      if (uVar1 <= uVar10) {
        fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,uVar10,uVar1);
      }
      iVar3 = uVar10 * 4;
      uVar10 = uVar10 + 1;
      *(undefined4 *)(*(int *)(param_1 + 0x108) + iVar3) = uVar2;
    } while ((int)uVar10 < 6);
    uVar10 = 0;
    do {
      uVar2 = (**(code **)(*piVar6 + 0x2c))(piVar6,(&DAT_008905c8)[uVar10],1);
      uVar1 = *(int *)(param_1 + 0x118) - *(int *)(param_1 + 0x114) >> 2;
      if (uVar1 <= uVar10) {
        fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,uVar10,uVar1);
      }
      *(undefined4 *)(*(int *)(param_1 + 0x114) + uVar10 * 4) = uVar2;
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < 0x16);
    uVar2 = fn_001480d0(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x20),
                         (char *)&DAT_0030a7d4,"",1,1,3);
    *(undefined4 *)(param_1 + 0x28) = uVar2;
    iVar3 = fn_00178f9c(*(undefined4 *)(param_1 + 0x10),uVar2);
    piVar12 = *(int **)(iVar3 + 0x10);
    uVar2 = (**(code **)(*piVar12 + 0x2c))(piVar12,(char *)&DAT_0030a7e0,1);
    *(undefined4 *)(param_1 + 0x130) = uVar2;
    piVar7 = (int *)(**(code **)(*piVar12 + 0x2c))(piVar12,(char *)&DAT_0030a7ec,1);
    if (piVar7 != (int *)0x0) {
      puVar8 = (undefined4 *)(**(code **)(*piVar7 + 8))(piVar7);
      do {
        if (puVar8 == &DAT_0089a930) {
          piVar4 = piVar7;
          break;
        }
        puVar8 = (undefined4 *)*puVar8;
      } while (puVar8 != (undefined4 *)0x0);
    }
    *(int **)(param_1 + 0x134) = piVar4;
    fn_0018a69c(*(undefined4 *)(param_1 + 0xa4),piVar6);
    iVar3 = *(int *)(param_1 + 0xa0);
    iVar9 = *(int *)(iVar3 + 0x20);
    iVar13 = *(int *)(iVar3 + 0x24);
    piVar12[7] = *(int *)(iVar3 + 0x1c);
    piVar12[8] = iVar9;
    piVar12[9] = iVar13;
    *(byte *)(piVar12 + 0x11) = *(byte *)(piVar12 + 0x11) & 0xef | 0x10;
  }
  if (*(int *)(param_1 + 0x2c) == -1) {
    uVar2 = fn_001481c8(*(undefined4 *)(param_1 + 0x10),DAT_00890418,&DAT_0030a7fc,1,1);
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
  }
  uVar10 = 0;
  do {
    uVar1 = *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2;
    if (uVar1 <= uVar10) {
      fn_002ff628(9,&DAT_008c7670,&DAT_008c7670,uVar10,uVar1);
    }
    iVar9 = *(int *)(param_1 + 0x3c);
    iVar3 = uVar10 * 4;
    uVar2 = fn_001c8c60(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x2c),
                         (&DAT_00890640)[uVar10]);
    uVar10 = uVar10 + 1;
    *(undefined4 *)(iVar9 + iVar3) = uVar2;
  } while ((int)uVar10 < 10);
  if (*(int *)(param_1 + 0x30) == -1) {
    uVar2 = fn_001c8abc(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x2c),
                         (char *)&DAT_0030a808);
    *(undefined4 *)(param_1 + 0x30) = uVar2;
    iVar3 = fn_00178f9c(*(undefined4 *)(param_1 + 0x10),uVar2);
    piVar4 = *(int **)(iVar3 + 0x10);
    uVar2 = (**(code **)(*piVar4 + 0x2c))(piVar4,(char *)&DAT_0030a820,1);
    *(undefined4 *)(param_1 + 0x138) = uVar2;
    uVar2 = (**(code **)(*piVar4 + 0x2c))(piVar4,(char *)&DAT_0030a830,1);
    uVar10 = 0;
    *(undefined4 *)(param_1 + 0x13c) = uVar2;
    do {
      uVar2 = (**(code **)(*piVar4 + 0x2c))(piVar4,(&DAT_00890620)[uVar10],1);
      uVar1 = *(int *)(param_1 + 0x144) - *(int *)(param_1 + 0x140) >> 2;
      if (uVar1 <= uVar10) {
        fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,uVar10,uVar1);
      }
      iVar3 = uVar10 * 4;
      uVar10 = uVar10 + 1;
      *(undefined4 *)(*(int *)(param_1 + 0x140) + iVar3) = uVar2;
    } while ((int)uVar10 < 4);
    uVar10 = 0;
    do {
      uVar2 = (**(code **)(*piVar4 + 0x2c))(piVar4,(&DAT_00890630)[uVar10],1);
      uVar1 = *(int *)(param_1 + 0x150) - *(int *)(param_1 + 0x14c) >> 2;
      if (uVar1 <= uVar10) {
        fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,uVar10,uVar1);
      }
      iVar3 = uVar10 * 4;
      uVar10 = uVar10 + 1;
      *(undefined4 *)(*(int *)(param_1 + 0x14c) + iVar3) = uVar2;
    } while ((int)uVar10 < 4);
    uVar2 = (**(code **)(*piVar4 + 0x2c))(piVar4,(char *)&DAT_0030ab44,1);
    *(undefined4 *)(param_1 + 0x158) = uVar2;
    uVar2 = (**(code **)(*piVar4 + 0x2c))(piVar4,(char *)&DAT_0030ab50,1);
    *(undefined4 *)(param_1 + 0x15c) = uVar2;
    uVar2 = (**(code **)(*piVar4 + 0x2c))(piVar4,(char *)&DAT_0030ab5c,1);
    *(undefined4 *)(param_1 + 0x160) = uVar2;
    uVar2 = (**(code **)(*piVar4 + 0x2c))(piVar4,(char *)&DAT_0030ab64,1);
    *(undefined4 *)(param_1 + 0x164) = uVar2;
    uVar2 = (**(code **)(*piVar4 + 0x2c))(piVar4,(char *)&DAT_0030ab74,1);
    *(undefined4 *)(param_1 + 0x168) = uVar2;
    uVar2 = (**(code **)(*piVar4 + 0x2c))(piVar4,(char *)&DAT_0030ab80,1);
    *(undefined4 *)(param_1 + 0x16c) = uVar2;
    uVar2 = (**(code **)(*piVar4 + 0x2c))(piVar4,(char *)&DAT_0030ab90,1);
    *(undefined4 *)(param_1 + 0x170) = uVar2;
    uVar2 = (**(code **)(*piVar4 + 0x2c))(piVar4,(char *)&DAT_0030aba4,1);
    *(undefined4 *)(param_1 + 0x174) = uVar2;
    uVar2 = (**(code **)(*piVar4 + 0x2c))(piVar4,(char *)&DAT_0030abb8,1);
    *(undefined4 *)(param_1 + 0x178) = uVar2;
    uVar2 = (**(code **)(*piVar4 + 0x2c))(piVar4,(char *)&DAT_0030abc8,1);
    *(undefined4 *)(param_1 + 0x17c) = uVar2;
    uVar2 = (**(code **)(*piVar4 + 0x2c))(piVar4,(char *)&DAT_0030abe0,1);
    *(undefined4 *)(param_1 + 0x180) = uVar2;
    iVar3 = *(int *)(param_1 + 0x138);
    fVar15 = (float)VectorSignedToFloat((int)*(char *)(param_1 + 0x4d),(byte)(in_fpscr >> 0x16) & 3)
    ;
    *(undefined4 *)(iVar3 + 0x1c) = 0;
    *(float *)(iVar3 + 0x20) = fVar15 * -44.0;
    *(undefined4 *)(iVar3 + 0x24) = 0;
    *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xef | 0x10;
    fn_0018a69c(*(undefined4 *)(param_1 + 0xa4),piVar4);
    uVar2 = fn_001853ec(*(undefined4 *)(param_1 + 0x10),(char *)&DAT_0085d1d0,*(undefined4 *)(param_1 + 0x30))
    ;
    *(undefined4 *)(param_1 + 0x210) = uVar2;
    piVar4 = (int *)fn_001854ac(*(undefined4 *)(param_1 + 0x10),uVar2);
    *(int **)(param_1 + 0x194) = piVar4;
    (**(code **)(*piVar4 + 100))();
    *(byte *)(*(int *)(param_1 + 0x160) + 0x44) = *(byte *)(*(int *)(param_1 + 0x160) + 0x44) & 0xfe
    ;
    *(byte *)(*(int *)(param_1 + 0x164) + 0x44) = *(byte *)(*(int *)(param_1 + 0x164) + 0x44) & 0xfe
    ;
    *(byte *)(*(int *)(param_1 + 0x168) + 0x44) = *(byte *)(*(int *)(param_1 + 0x168) + 0x44) & 0xfe
    ;
    *(byte *)(*(int *)(param_1 + 0x16c) + 0x44) = *(byte *)(*(int *)(param_1 + 0x16c) + 0x44) & 0xfe
    ;
    *(byte *)(*(int *)(param_1 + 0x170) + 0x44) = *(byte *)(*(int *)(param_1 + 0x170) + 0x44) & 0xfe
    ;
    *(byte *)(*(int *)(param_1 + 0x174) + 0x44) = *(byte *)(*(int *)(param_1 + 0x174) + 0x44) & 0xfe
    ;
  }
  if (*(int *)(param_1 + 0x34) == -1) {
    uVar2 = fn_001481c8(*(undefined4 *)(param_1 + 0x10),DAT_0089041c,&DAT_0030a7fc,1,1);
    *(undefined4 *)(param_1 + 0x34) = uVar2;
  }
  if (*(int *)(param_1 + 0x38) == -1) {
    uVar2 = fn_001c8abc(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x34),
                         (char *)&DAT_0030abfc);
    *(undefined4 *)(param_1 + 0x38) = uVar2;
    iVar3 = fn_00178f9c(*(undefined4 *)(param_1 + 0x10),uVar2);
    fn_0018a69c(*(undefined4 *)(param_1 + 0xa4),*(undefined4 *)(iVar3 + 0x10));
    uVar2 = fn_001853ec(*(undefined4 *)(param_1 + 0x10),(char *)&DAT_0085d140,*(undefined4 *)(param_1 + 0x38))
    ;
    *(undefined4 *)(param_1 + 0x214) = uVar2;
    piVar4 = (int *)fn_001854ac(*(undefined4 *)(param_1 + 0x10),uVar2);
    *(int **)(param_1 + 0x198) = piVar4;
    (**(code **)(*piVar4 + 0x68))();
  }
  fn_00308fb8(param_1,1);
  fn_00309438(param_1);
  fn_0068aeac(param_1,param_2);
  return;
}


