#include "002a8654_002a8c38.h"



void fn_002a8c38(int *param_1,uint param_2)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint local_30 [2];
  undefined4 *local_28;
  
  piVar1 = (int *)fn_002c11d0(param_1,2,0);
  piVar9 = piVar1 + 1;
  local_30[0] = piVar1[2] - *piVar9 >> 2;
  local_30[1] = 0x20;
  puVar2 = local_30 + 1;
  if (0x1f < local_30[0]) {
    puVar2 = local_30;
  }
  uVar11 = *puVar2;
  puVar3 = (undefined4 *)fn_00100fc6(uVar11 << 2,0);
  puVar6 = (undefined4 *)piVar1[2];
  puVar8 = puVar3;
  for (puVar7 = (undefined4 *)*piVar9; puVar7 != puVar6; puVar7 = puVar7 + 1) {
    if (puVar8 != (undefined4 *)0x0) {
      *puVar8 = *puVar7;
    }
    puVar8 = puVar8 + 1;
  }
  uVar10 = param_2 ^ 1;
  puVar7 = puVar3 + (piVar1[2] - *piVar9 >> 2);
  local_28 = puVar3 + uVar11;
  iVar12 = 0;
  iVar5 = (int)puVar7 - (int)puVar3 >> 2;
  if (0 < iVar5) {
    do {
      iVar4 = (**(code **)(*piVar1 + 0xc))(piVar1,iVar12);
      iVar12 = iVar12 + 1;
      *(byte *)(iVar4 + 0x35) = (byte)uVar10;
    } while (iVar12 < iVar5);
  }
  (**(code **)(*param_1 + 0x198))(param_1,uVar10);
  fn_002a977c(param_1,uVar10);
  iVar5 = fn_002c11d0(param_1,1,0);
  *(byte *)(*(int *)(iVar5 + 0x10) + 0xe7) = (byte)param_2;
  *(byte *)(param_1[0x3f] + 0x44) = *(byte *)(param_1[0x3f] + 0x44) & 0xfe | (byte)param_2;
  *(byte *)(param_1[0x3d] + 0x44) = *(byte *)(param_1[0x3d] + 0x44) & 0xfe | (byte)uVar10;
  if ((param_2 == 0) && ((char)param_1[0x42] != '\0')) {
    fn_0028ad24(*(undefined4 *)(DAT_00897804 + 0xc));
    fn_0028ad18(*(undefined4 *)(DAT_00897804 + 0xc),param_1[0x40]);
    fn_0028b680(*(undefined4 *)(DAT_00897804 + 0xc));
    fn_0028b674(*(undefined4 *)(DAT_00897804 + 0xc),param_1[0x41]);
  }
  puVar8 = puVar3;
  if (puVar7 < puVar3) {
    do {
      puVar8 = puVar8 + 1;
    } while (puVar8 != puVar7);
  }
  fn_002feef8(puVar3,(int)local_28 - (int)puVar3 >> 2,0);
  return;
}



void fn_002a89b4(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  iVar2 = fn_003467f8(*(undefined4 *)(param_1 + 0xb0),*(undefined4 *)(param_2 + 8));
  puVar6 = (undefined4 *)0x0;
  if (*(int *)(param_2 + 0xc) != 0) {
    iVar3 = fn_002b2a48();
    if (iVar3 != 0) {
      fn_002906e0(*(undefined4 *)(param_2 + 0xc));
      uVar4 = fn_00290544(*(undefined4 *)(param_2 + 0xc));
      fn_002b2cbc(iVar2,uVar4);
    }
    if (*(int *)(param_2 + 0xc) != 0) {
      iVar3 = fn_0025a258();
      cVar1 = '\0';
      if (iVar3 != 0) {
        cVar1 = *(char *)(iVar2 + 0x33);
      }
      if (iVar3 != 0 && cVar1 != '\0') {
        puVar7 = *(undefined4 **)(param_1 + 0x18);
        if (puVar7 != (undefined4 *)0x0) {
          puVar5 = (undefined4 *)(**(code **)*puVar7)(puVar7);
          do {
            if (puVar5 == &DAT_00891e28) goto LAB_002a8a68;
            puVar5 = (undefined4 *)*puVar5;
          } while (puVar5 != (undefined4 *)0x0);
        }
        puVar7 = (undefined4 *)0x0;
LAB_002a8a68:
        puVar7[2] = *(undefined4 *)(param_2 + 8);
        puVar7 = (undefined4 *)fn_001f74ec(param_1,iVar3);
        if (puVar7 != (undefined4 *)0x0) {
          puVar5 = (undefined4 *)(**(code **)*puVar7)(puVar7);
          do {
            if (puVar5 == &DAT_00893b1c) {
              if (puVar7 != (undefined4 *)0x0) {
                puVar7[2] = 0xd4;
              }
              break;
            }
            puVar5 = (undefined4 *)*puVar5;
          } while (puVar5 != (undefined4 *)0x0);
        }
        if (iVar3 == 0x51) {
          puVar7 = (undefined4 *)fn_001f74ec(param_1,0x51);
          if (puVar7 != (undefined4 *)0x0) {
            puVar5 = (undefined4 *)(**(code **)*puVar7)(puVar7);
            do {
              if (puVar5 == &DAT_008944a8) {
                puVar6 = puVar7;
                break;
              }
              puVar5 = (undefined4 *)*puVar5;
            } while (puVar5 != (undefined4 *)0x0);
          }
          *(undefined1 *)(puVar6 + 3) = 2;
        }
        else if (iVar3 == 0x9f) {
          fn_0028f54c(1);
        }
        else if (iVar3 == 0xe3) {
                    /* WARNING: Subroutine does not return */
          fn_001638a0();
        }
        fn_006899f4(param_1,iVar3,0,1);
        fn_0068ab44(param_1,0x100094b);
        return;
      }
    }
  }
  fn_0068ab44(param_1,0x100094d);
  uVar4 = fn_0022f584((char *)&DAT_002a8c10,0);
  fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar4,1,0,1,1,0,0,1);
  *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x38) = 0;
  fn_00689bd0(param_1,0x48,0);
  return;
}



void fn_002a88cc(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int iVar5;
  uint uVar6;
  undefined4 unaff_r6;
  int *piVar7;
  
  iVar5 = 0;
  do {
    uVar1 = fn_002e3e9c(*(undefined4 *)(param_1 + 0xb0),0,iVar5);
    uVar3 = *(uint *)(DAT_00897804 + 0x20);
    fn_002e2d78(uVar3,iVar5,uVar1);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0xc);
  if (*(char *)(param_1 + 0x108) != '\0') {
    fn_0028ad24(*(undefined4 *)(DAT_00897804 + 0xc));
    fn_0028ad18(*(undefined4 *)(DAT_00897804 + 0xc),*(undefined4 *)(param_1 + 0x100));
    fn_0028b680(*(undefined4 *)(DAT_00897804 + 0xc));
    fn_0028b674(*(undefined4 *)(DAT_00897804 + 0xc),*(undefined4 *)(param_1 + 0x104));
  }
  fn_002a99f4(param_1);
  fn_00159f34(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0xe8));
  *(undefined4 *)(param_1 + 0xe8) = 0xffffffff;
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
  uVar6 = 0;
  if (*(int *)(param_1 + 0xa4) - *(int *)(param_1 + 0xa0) >> 2 != 0) {
    do {
      uVar4 = *(int *)(param_1 + 0xa4) - *(int *)(param_1 + 0xa0) >> 2;
      if (uVar4 <= uVar6) {
        fn_002ff628(9,&DAT_008c7655,&DAT_008c7655,uVar6,uVar4,unaff_r4,unaff_r5,unaff_r6);
        uVar3 = uVar4;
      }
      piVar7 = *(int **)(*(int *)(param_1 + 0xa0) + uVar6 * 4);
      (**(code **)(*piVar7 + 0x24))(piVar7);
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 0x20))(piVar7);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < (uint)(*(int *)(param_1 + 0xa4) - *(int *)(param_1 + 0xa0) >> 2));
  }
  uVar6 = *(uint *)(param_1 + 0xa4);
  uVar4 = *(uint *)(param_1 + 0xa0);
  if (uVar4 != uVar6) {
    uVar2 = uVar4;
    if (uVar6 <= uVar4) {
      do {
        uVar2 = uVar2 + 4;
      } while (uVar2 != uVar6);
    }
    *(uint *)(param_1 + 0xa4) = uVar6 - (uVar6 - uVar4 & 0xfffffffc);
  }
  uVar2 = *(uint *)(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0xa0) = 0;
  uVar4 = *(uint *)(param_1 + 0xa4);
  *(undefined4 *)(param_1 + 0xa4) = 0;
  iVar5 = *(int *)(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  uVar6 = uVar2;
  if (uVar4 < uVar2) {
    do {
      uVar6 = uVar6 + 4;
    } while (uVar6 != uVar4);
  }
  fn_001008c4(uVar2,(int)(iVar5 - uVar2) >> 2,0,iVar5,uVar3);
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



undefined4 * fn_002a87dc(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)fn_001f7e18();
  *puVar1 = &DAT_0081e998;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  iVar2 = fn_00145b00(0x10,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_002d193c();
  }
  puVar1[0x14] = uVar3;
  *(undefined1 *)(puVar1 + 0x15) = 0xff;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  fn_0028e434(puVar1[4],&DAT_007bfd80);
  fn_0028e434(puVar1[5],&DAT_007c053c);
  fn_0028e434(puVar1[3],&DAT_007c0b7c);
  fn_0028e434(puVar1[6],&DAT_007c0be0);
  return puVar1;
}



undefined4 fn_002a8780(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((char)param_1[0x15] == -1) {
    uVar1 = 1;
  }
  else {
    iVar2 = (**(code **)(*param_1 + 0x2c))(param_1);
    if (iVar2 == 0) {
      fn_006941e8(DAT_008977e0,(int)(char)param_1[0x15],0);
      *(undefined1 *)(param_1 + 0x15) = 0xff;
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



void fn_002a8654(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x48) != 0) &&
     ((*(int *)(param_1 + 0x4c) == 0 || (iVar1 = fn_00304c94(), iVar1 != 0)))) {
    fn_001f748c(param_1,*(undefined4 *)(param_1 + 0x48),0);
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  fn_001f7a98(param_1);
  if ((*(int *)(param_1 + 0x58) != 0) && (iVar1 = fn_002f9da0(), iVar1 != 0)) {
    iVar2 = fn_006ad87c(param_1,1);
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = *(int *)(param_1 + 0x58);
    }
    if (iVar2 != 0 && iVar1 != 0) {
      fn_002feef8(iVar1);
      *(undefined4 *)(param_1 + 0x58) = 0;
      fn_001f749c(param_1,0,0);
      fn_001f748c(param_1,*(undefined4 *)(param_1 + 0x5c),1);
      fn_001f7438(param_1,0,0);
      fn_001f73a0(param_1,0);
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
  }
  return;
}


