#include "0026d2c4_0026d960.h"

static void svc_0xa(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0xa }
#endif
}


undefined4 fn_0026d960(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 *local_8 [2];
  
  local_8[0] = &DAT_008f9cf4;
  fn_006b72dc(*param_1,local_8,param_2);
  local_1c = 0;
  local_20 = &DAT_0085238c;
  local_10 = 0;
  local_c = 0;
  local_18 = 0;
  local_14 = 0;
  uVar2 = fn_0014d6cc(&local_1c,local_8[0],1);
  if ((uVar2 & 0x80000000) == 0) {
    fn_00193004(&local_20,0);
    fn_001588d4(local_8);
    return 0;
  }
  uVar1 = (uVar2 & 0x3fc00) >> 10;
  if ((((uVar1 != 0x11) || ((uVar2 & 0x3ff) < 0x154)) || (0x167 < (uVar2 & 0x3ff))) &&
     (((uVar1 != 0x11 || ((uVar2 & 0x3ff) < 0x186)) || (399 < (uVar2 & 0x3ff))))) {
    if (((uVar1 == 0x11) && (99 < (uVar2 & 0x3ff))) && ((uVar2 & 0x3ff) < 0xb4)) {
      fn_00193004(&local_20,0);
      fn_001588d4(local_8);
      return 0xfffffff8;
    }
    if ((((uVar1 == 0x11) && (0x153 < (uVar2 & 0x3ff))) && ((uVar2 & 0x3ff) < 0x168)) ||
       (((uVar1 == 0x11 && (0x185 < (uVar2 & 0x3ff))) && ((uVar2 & 0x3ff) < 400)))) {
      fn_00193004(&local_20,0);
      fn_001588d4(local_8);
      return 0xfffffff5;
    }
  }
  fn_00193004(&local_20,0);
  fn_001588d4(local_8);
  return 0xffffff80;
}



undefined4 *
fn_0026d83c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined8 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *local_20 [3];
  
  local_20[0] = &DAT_008f9cf4;
  fn_006b72dc(param_1,local_20,param_2);
  puVar1 = (undefined4 *)fn_00145b00(0xc,&DAT_00812c8c);
  puVar4 = local_20[0];
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = &DAT_0081e074;
    puVar1[1] = 0;
    iVar2 = fn_00145b00(8,&DAT_00812c8c);
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = fn_0026e47c(iVar2,puVar4);
    }
    iVar2 = puVar1[1];
    if (iVar2 != iVar3) {
      if (iVar2 != 0) {
        iVar2 = fn_001588d4(iVar2 + 4);
        fn_002feef8(iVar2 + -4);
      }
      puVar1[1] = iVar3;
    }
    puVar1[2] = 0;
    *puVar1 = &DAT_0081c540;
    puVar4 = (undefined4 *)fn_00145b00(0x18,&DAT_00812c8c);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4[2] = 0xffffffff;
      puVar4[1] = param_4;
      *puVar4 = param_3;
      puVar4[3] = 0xffffffff;
      puVar4[4] = (int)param_5;
      puVar4[5] = (int)((ulonglong)param_5 >> 0x20);
    }
    if ((undefined4 *)puVar1[2] != puVar4) {
      fn_002feef8();
      puVar1[2] = puVar4;
    }
  }
  fn_001588d4(local_20);
  return puVar1;
}



void fn_0026d71c(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint extraout_r1;
  int iVar4;
  int *piVar5;
  
  uVar2 = (uint)*(byte *)(param_1 + 0x1008);
  if (uVar2 != 0) {
    iVar4 = param_1 + 0x100c;
    do {
      fn_00170704(iVar4,uVar2);
      if (*(int *)(param_1 + 0x1018) == 0) {
        fn_001707b4(iVar4);
LAB_0026d81c:
        fn_0012d6a4(10000000,0);
        uVar2 = extraout_r1;
      }
      else {
        piVar5 = *(int **)(**(int **)(*(int *)(param_1 + 0x1018) + 0x10) + 8);
        *(int **)(param_1 + 0x101c) = piVar5;
        iVar3 = *(int *)(param_1 + 0x1018);
        piVar1 = (int *)**(int **)(iVar3 + 0x10);
        if (piVar1 != *(int **)(iVar3 + 0x10)) {
          *(int *)piVar1[1] = *piVar1;
          *(int *)(*piVar1 + 4) = piVar1[1];
          *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + -1;
          *piVar1 = *(undefined4 *)(iVar3 + 4);
          *(int **)(iVar3 + 4) = piVar1;
        }
        if (*(int *)(*(int *)(param_1 + 0x1018) + 0x14) == 0) {
          if (*(int *)(param_1 + 0x1018) != 0) {
            fn_00787044();
            fn_002feef8();
          }
          *(undefined4 *)(param_1 + 0x1018) = 0;
        }
        fn_001707b4(iVar4);
        if (piVar5 == (int *)0x0) goto LAB_0026d81c;
        (**(code **)(*piVar5 + 8))();
        uVar2 = 0;
        *(undefined4 *)(param_1 + 0x101c) = 0;
        svc_0xa();
      }
    } while (*(char *)(param_1 + 0x1008) != '\0');
  }
  return;
}



void fn_0026d700(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_2;
  *param_1 = &DAT_008f9cf4;
  fn_006b72dc(uVar1);
  return;
}



void fn_0026d6bc(int *param_1)

{
  if (*(char *)(*param_1 + 0x1034) != '\0') {
    fn_0016e9e0(*(undefined4 *)(*param_1 + 0x1024));
    *(undefined1 *)(*param_1 + 0x1034) = 0;
  }
  return;
}



undefined4 fn_0026d2e8(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  while( true ) {
    iVar3 = *param_1;
    if (*(char *)(iVar3 + 0x1034) != '\0') {
      return 0;
    }
    uVar4 = fn_0044ca90(*(undefined4 *)(iVar3 + 0x1024),iVar3 + 0x1000,
                         *(undefined4 *)(iVar3 + 0x1020),0);
    if ((uVar4 & 0x80000000) == 0) {
      *(undefined1 *)(*param_1 + 0x1034) = 1;
      return 0;
    }
    uVar1 = (uVar4 & 0x3fc00) >> 10;
    if (((uVar1 == 0x11) && (uVar2 = uVar4 & 0x3ff, 99 < uVar2)) && (uVar2 < 0xb4)) {
      if ((0x81 < uVar2) && (uVar2 < 0xb4)) {
        return 0xffffffff;
      }
      if (param_2 == 1) {
        return 0xfffffff4;
      }
    }
    else {
      if ((((uVar1 != 0x11) || ((uVar4 & 0x3ff) < 0x154)) || (0x167 < (uVar4 & 0x3ff))) &&
         (((uVar1 != 0x11 || ((uVar4 & 0x3ff) < 0x186)) || (399 < (uVar4 & 0x3ff))))) {
        if (((uVar1 == 0x11) && (0x167 < (uVar4 & 0x3ff))) && ((uVar4 & 0x3ff) < 0x186)) {
          return 0xfffffffe;
        }
        if (uVar1 != 0x11) {
          return 0xffffff9c;
        }
        uVar4 = uVar4 & 0x3ff;
        if (uVar4 < 0xe6) {
          return 0xffffff9c;
        }
        if (0x153 < uVar4) {
          return 0xffffff9c;
        }
        if ((0x103 < uVar4) && (uVar4 < 0x118)) {
          return 0xfffffffd;
        }
        bVar7 = SBORROW4(uVar4,0x118);
        iVar3 = uVar4 - 0x118;
        if (0x117 < uVar4) {
          bVar7 = SBORROW4(0x14e,uVar4);
          iVar3 = 0x14e - uVar4;
        }
        if (iVar3 < 0 == bVar7) {
          return 0xfffffffc;
        }
        return 0xfffffffb;
      }
      if (param_2 == 1) {
        return 0xfffffff5;
      }
      uVar4 = fn_0044cbc0(*(undefined4 *)(*param_1 + 0x1020),0);
      if ((uVar4 & 0x80000000) != 0) {
        uVar1 = (uVar4 & 0x3fc00) >> 10;
        if (((uVar1 == 0x11) && (0x103 < (uVar4 & 0x3ff))) && ((uVar4 & 0x3ff) < 0x118)) {
          return 0xfffffffd;
        }
        if (uVar1 != 0x11) {
          return 0xfffffffb;
        }
        uVar4 = uVar4 & 0x3ff;
        bVar7 = SBORROW4(uVar4,0x118);
        iVar3 = uVar4 - 0x118;
        if (0x117 < uVar4) {
          bVar7 = SBORROW4(0x14e,uVar4);
          iVar3 = 0x14e - uVar4;
        }
        if (iVar3 < 0 == bVar7) {
          return 0xfffffffc;
        }
        return 0xfffffffb;
      }
    }
    iVar3 = (**(code **)(*(int *)param_1[1] + 0x1c))();
    if (iVar3 == 0) {
      iVar3 = (**(code **)(*(int *)param_1[1] + 8))();
      if (iVar3 == 0) {
        return 0xffffff9c;
      }
      do {
        iVar3 = (**(code **)(*(int *)param_1[1] + 0xc))();
      } while (iVar3 == 0);
    }
    uVar8 = *(undefined4 *)(*param_1 + 0x102c);
    uVar9 = *(undefined4 *)(*param_1 + 0x1030);
    uVar5 = (**(code **)(*(int *)param_1[1] + 0x14))();
    uVar6 = (**(code **)(*(int *)param_1[1] + 0x10))();
    uVar4 = fn_0044cb2c(*(undefined4 *)(*param_1 + 0x1020),0,uVar6,uVar5,uVar8,uVar9);
    (**(code **)(*(int *)param_1[1] + 0x18))();
    if ((uVar4 & 0x80000000) != 0) break;
    param_2 = 1;
  }
  uVar1 = (uVar4 & 0x3fc00) >> 10;
  if (((uVar1 == 0x11) && (199 < (uVar4 & 0x3ff))) && ((uVar4 & 0x3ff) < 0xdc)) {
    return 0xfffffffa;
  }
  if (((uVar1 == 0x11) && (0x153 < (uVar4 & 0x3ff))) && ((uVar4 & 0x3ff) < 0x168)) {
    return 0xfffffff9;
  }
  if (((uVar1 != 0x11) || (uVar2 = uVar4 & 0x3ff, uVar2 < 0xe6)) || (0x153 < uVar2)) {
    if (((uVar1 == 0x11) && (0x81 < (uVar4 & 0x3ff))) && ((uVar4 & 0x3ff) < 0xb4)) {
      return 0xffffffff;
    }
    return 0xffffff80;
  }
  if ((0x103 < uVar2) && (uVar2 < 0x118)) {
    return 0xfffffffd;
  }
  bVar7 = SBORROW4(uVar2,0x118);
  iVar3 = uVar2 - 0x118;
  if (0x117 < uVar2) {
    bVar7 = SBORROW4(0x14e,uVar2);
    iVar3 = 0x14e - uVar2;
  }
  if (iVar3 < 0 == bVar7) {
    return 0xfffffffc;
  }
  return 0xfffffffb;
}



int fn_0026d2c4(int param_1)

{
  int iVar1;
  
  iVar1 = fn_00796b7c(&DAT_008c964c + (param_1 + -1) * 3);
  return iVar1 + 2;
}


