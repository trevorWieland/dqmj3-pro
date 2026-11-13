#include "0059884c_00598eec.h"



void fn_00598eec(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  fn_003d4048();
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0xd6);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00890b08) goto LAB_00598f3c;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_00598f3c:
  fn_00601670(puVar1);
  fn_006899f4(param_1,0xd6,0,1);
  fn_0068ab44(param_1,0x100094c);
  return;
}



undefined4 fn_00598af0(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 *local_40;
  undefined1 auStack_38 [32];
  
  fn_003d3c40(&local_4c);
  local_4c = DAT_00890b44;
  local_48 = DAT_00890b48;
  uStack_44 = 1;
  fn_003d363c(param_1,&local_4c);
  fn_00689efc(param_1,0xe1,0);
  iVar3 = fn_00178f9c(param_1[0x19],param_1[0x1b]);
  uVar9 = *(undefined4 *)(iVar3 + 0x10);
  uVar8 = 0;
  do {
    fn_0017d96c(auStack_38,0x20,0x1f,(char *)&DAT_00598cb4,uVar8);
    uVar2 = param_1[0x29] - param_1[0x28] >> 2;
    if (uVar2 <= uVar8) {
      fn_002ff628(9,&DAT_008c7667,&DAT_008c7667,uVar8,uVar2);
    }
    iVar4 = param_1[0x28];
    iVar1 = uVar8 * 4;
    uVar5 = fn_0068897c(uVar9,auStack_38);
    uVar8 = uVar8 + 1;
    *(undefined4 *)(iVar4 + iVar1) = uVar5;
  } while ((int)uVar8 < 9);
  uVar9 = fn_00172c98(iVar3,(char *)&DAT_00598cc8);
  iVar3 = fn_00145b00(0x3c,&DAT_00812c8c);
  piVar6 = (int *)0x0;
  if (iVar3 != 0) {
    piVar6 = (int *)fn_003943e4(iVar3,param_1[1],uVar9,1,param_1[0x12]);
  }
  piVar7 = (int *)param_1[0x2b];
  if (piVar7 != piVar6) {
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 4))(piVar7);
    }
    param_1[0x2b] = (int)piVar6;
  }
  (**(code **)(*(int *)param_1[0x2b] + 0x10))();
  (**(code **)(*param_1 + 0x120))(param_1);
  fn_00598ce4(param_1);
  if (local_40 != &DAT_008f9cf4) {
    piVar6 = local_40 + -3;
    iVar3 = *piVar6;
    if ((iVar3 == -1) || ((piVar6 != &DAT_008f9ce8 && (*piVar6 = iVar3 + -1, iVar3 == 0)))) {
      fn_001008c4(local_40 + -3,local_40[-2] + 8,0);
    }
  }
  return 1;
}



void fn_00598ce4(int param_1)

{
  uint uVar1;
  short sVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  short sVar9;
  short sVar10;
  undefined1 auStack_124 [16];
  undefined1 auStack_114 [68];
  short local_d0 [90];
  
  puVar4 = (undefined4 *)fn_001f74ec(param_1,0xd8);
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = (undefined4 *)(**(code **)*puVar4)(puVar4);
    do {
      if (puVar5 == &DAT_00890afc) goto LAB_00598d30;
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != (undefined4 *)0x0);
  }
  puVar4 = (undefined4 *)0x0;
LAB_00598d30:
  fn_0017821c(auStack_124,puVar4 + 2,0x104);
  sVar9 = 0;
  sVar10 = 0;
  iVar7 = 0;
  do {
    if (local_d0[iVar7] != 0) {
      sVar9 = sVar9 + 1;
      sVar2 = fn_00660c64();
      sVar10 = sVar10 + sVar2;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 9);
  *(short *)(*(int *)(param_1 + 0xac) + 0x2e) = sVar10;
  iVar7 = *(int *)(param_1 + 0xac);
  uVar3 = fn_0020de2c(auStack_114);
  *(undefined2 *)(iVar7 + 0x32) = uVar3;
  *(short *)(*(int *)(param_1 + 0xac) + 0x36) = sVar9;
  iVar7 = *(int *)(param_1 + 0xac);
  uVar3 = fn_0020cb0c(auStack_114);
  *(undefined2 *)(iVar7 + 0x3a) = uVar3;
  uVar8 = 0;
  do {
    sVar9 = local_d0[1];
    while( true ) {
      if (sVar9 == 0) {
        uVar1 = *(int *)(param_1 + 0xa4) - *(int *)(param_1 + 0xa0) >> 2;
        if (uVar1 <= uVar8) {
          fn_002ff628(9,&DAT_008c7667,&DAT_008c7667,uVar8,uVar1);
        }
        iVar7 = *(int *)(*(int *)(param_1 + 0xa0) + uVar8 * 4);
        *(byte *)(iVar7 + 0x44) = *(byte *)(iVar7 + 0x44) & 0xfe;
      }
      else {
        uVar1 = *(int *)(param_1 + 0xa4) - *(int *)(param_1 + 0xa0) >> 2;
        if (uVar1 <= uVar8) {
          fn_002ff628(9,&DAT_008c7667,&DAT_008c7667,uVar8,uVar1);
        }
        iVar7 = *(int *)(*(int *)(param_1 + 0xa0) + uVar8 * 4);
        *(byte *)(iVar7 + 0x44) = *(byte *)(iVar7 + 0x44) & 0xfe | 1;
        uVar6 = fn_0016a7c4((int)sVar9);
        uVar1 = *(int *)(param_1 + 0xa4) - *(int *)(param_1 + 0xa0) >> 2;
        if (uVar1 <= uVar8) {
          fn_002ff628(9,&DAT_008c7667,&DAT_008c7667,uVar8,uVar1);
        }
        fn_00190d50(*(undefined4 *)(*(int *)(param_1 + 0xa0) + uVar8 * 4),uVar6);
      }
      uVar8 = uVar8 + 1;
      if (8 < (int)uVar8) {
        return;
      }
      if (uVar8 == 0) break;
      if (uVar8 == 1) {
        sVar9 = local_d0[0];
      }
      else {
        sVar9 = local_d0[uVar8];
      }
    }
  } while( true );
}



void fn_00598940(int param_1)

{
  uint uVar1;
  int iVar2;
  uint in_s0;
  uint uVar3;
  
  uVar1 = fn_006f6a38();
  if (*(char *)(param_1 + 0x110) == '\0') {
    fn_00408534(param_1);
    if (((uVar1 & 0x40000) != 0) &&
       (iVar2 = fn_006c4f9c(*(undefined4 *)(param_1 + 0x7c)), iVar2 == 0)) {
      *(undefined1 *)(param_1 + 0x111) = 1;
      *(undefined1 *)(param_1 + 0x110) = 1;
                    /* WARNING: Subroutine does not return */
      fn_0011dda8();
    }
    return;
  }
  fn_006f6a90();
  uVar3 = in_s0;
  fn_006f6a9c(param_1);
  if (0xbf400000 < uVar3) {
    fn_005d2a74(*(undefined4 *)(param_1 + 0xc4));
    return;
  }
  if (0x3f400000 < (int)uVar3) {
    *(float *)(*(int *)(param_1 + 0xc4) + 0x544) =
         *(float *)(*(int *)(param_1 + 0xc4) + 0x544) + 0.05;
    return;
  }
  if (0x3f400000 < (int)in_s0) {
    *(float *)(*(int *)(param_1 + 0xc4) + 0x548) =
         *(float *)(*(int *)(param_1 + 0xc4) + 0x548) + 0.06981317;
    return;
  }
  if (0xbf400000 < in_s0) {
    *(float *)(*(int *)(param_1 + 0xc4) + 0x548) =
         *(float *)(*(int *)(param_1 + 0xc4) + 0x548) - 0.06981317;
    return;
  }
  if ((uVar1 & 0x40000) != 0) {
    *(undefined1 *)(param_1 + 0x111) = 0;
    *(undefined1 *)(param_1 + 0x110) = 0;
                    /* WARNING: Subroutine does not return */
    fn_0011dda8();
  }
  fn_00408534(param_1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00598400) */
/* WARNING: Removing unreachable block (ram,0x0059843c) */

void fn_0059884c(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 auStack_110 [244];
  
  switch(*(undefined4 *)(param_1 + 0x108)) {
  case 0:
    fn_004086e4(param_1);
    return;
  case 1:
    if (*(char *)(*(int *)(param_1 + 0x5c) + 0x31) == '\0') {
      return;
    }
    *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x31) = 0;
    *(undefined4 *)(param_1 + 0x108) = 0;
    return;
  case 2:
    cVar1 = *(char *)(*(int *)(param_1 + 0x5c) + 0x31);
    if (cVar1 == '\x03') {
      *(undefined4 *)(param_1 + 0x108) = 3;
      iVar5 = fn_00178f9c(*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x78));
      iVar5 = fn_00688920(*(undefined4 *)(iVar5 + 0x10),(char *)&DAT_005980a8);
      *(byte *)(iVar5 + 0x44) = *(byte *)(iVar5 + 0x44) & 0xfe | 1;
      fn_0031e0f4(*(undefined4 *)(param_1 + 0x7c),0);
      return;
    }
    if (cVar1 == '\x02') {
      *(undefined4 *)(param_1 + 0x108) = 0;
    }
    return;
  case 3:
    fn_00597b88(param_1);
    return;
  default:
    return;
  case 5:
    break;
  case 6:
    if (*(char *)(*(int *)(param_1 + 0x5c) + 0x31) == '\x01') {
      *(undefined4 *)(param_1 + 0x108) = 5;
    }
    return;
  }
  fn_0025f3f4(*(undefined4 *)(param_1 + 0xc0),0);
  fn_00689efc(param_1,0x2d,0);
  iVar5 = 0;
  do {
    fn_002573b0(*(undefined4 *)(param_1 + 0xb4),iVar5,0);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 2);
  fn_0031dfc8(*(undefined4 *)(param_1 + 0x7c),0);
  fn_0031e0f4(*(undefined4 *)(param_1 + 0x7c),1);
  (**(code **)(**(int **)(param_1 + 0x7c) + 8))();
  fn_00406564(param_1,0);
  iVar5 = fn_00178f9c(*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x78));
  iVar5 = fn_00688920(*(undefined4 *)(iVar5 + 0x10),(char *)&DAT_005980a8);
  *(byte *)(iVar5 + 0x44) = *(byte *)(iVar5 + 0x44) & 0xfe;
  fn_00301f50(auStack_110,0xf0);
  puVar2 = (undefined4 *)fn_001f74ec(param_1,0x50);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_00890b2c) goto LAB_005983a0;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_005983a0:
  uVar7 = *(undefined4 *)(DAT_00897804 + 0xc);
  iVar5 = fn_0028af90(uVar7,*(undefined4 *)(param_1 + 0x114));
  if (iVar5 != 0) {
    iVar5 = fn_006b83e4(uVar7);
    iVar6 = 0;
    if (0 < iVar5) {
      do {
        iVar4 = fn_00144df4(uVar7,iVar6);
        if (*(int *)(param_1 + 0x114) == iVar4) {
          fn_0028b7e4();
          break;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar5);
    }
  }
  iVar5 = fn_0028b0f8(uVar7,*(undefined4 *)(param_1 + 0x114));
  if (iVar5 != 0) {
    iVar5 = fn_006b84b0(uVar7);
    iVar6 = 0;
    if (0 < iVar5) {
      do {
        iVar4 = fn_006b8538(uVar7,iVar6);
        if (*(int *)(param_1 + 0x114) == iVar4) {
          fn_0028a9cc(uVar7,iVar6);
          break;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar5);
    }
  }
  fn_00604994(puVar2,*(undefined4 *)(param_1 + 0x114),0,auStack_110,0);
  puVar2[5] = 0xe0;
  fn_006899f4(param_1,0x50,0);
  fn_005aaa24(*(undefined4 *)(param_1 + 0x6c));
  *(undefined4 *)(param_1 + 0x108) = 8;
  return;
}


