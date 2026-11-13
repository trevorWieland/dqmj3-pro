#include "00576ab0_00578204.h"



void fn_00578204(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0xdc);
  if (iVar1 == 0) {
    return;
  }
  if (iVar1 == 1) {
    iVar1 = fn_00251dd8(*(undefined4 *)(param_1 + 0x1bc));
    if (iVar1 != 0) {
      fn_00251dcc(*(undefined4 *)(param_1 + 0x1bc));
    }
    *(undefined4 *)(param_1 + 0x1cc) = 0;
    *(undefined4 *)(param_1 + 0x1d0) = 0;
    uVar2 = fn_0066eb80(DAT_00898840,2);
    fn_0066f2f0(uVar2,param_1 + 0x1cc,0x14);
    fn_00675bb8(*(undefined4 *)(*(int *)(param_1 + 0x1b0) + 0x44));
    fn_0066de6c(*(undefined4 *)(param_1 + 0x1c4));
    uVar2 = 2;
  }
  else {
    if (iVar1 != 2) {
      return;
    }
    fn_005f6270(*(undefined4 *)(param_1 + 0x1c4));
    iVar1 = (**(code **)(**(int **)(param_1 + 0x1c4) + 0x14))();
    if (iVar1 != 0) {
      return;
    }
    if (*(int *)(*(int *)(param_1 + 0x1c4) + 0x44) == 0) {
      *(undefined4 *)(param_1 + 0xdc) = 3;
      return;
    }
    fn_005f3b74(DAT_00897850,*(undefined4 *)(*(int *)(param_1 + 0x1c4) + 0x48));
    uVar2 = 4;
  }
  *(undefined4 *)(param_1 + 0xdc) = uVar2;
  return;
}



void fn_00577f4c(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  char local_2a0 [4];
  int local_29c [10];
  int local_274 [8];
  char local_254 [564];
  
  if ((*(int *)(param_1 + 0xd0) < 9) &&
     ((*(int *)(param_1 + 0xf0) != 1 || (1 < *(int *)(param_1 + 0xd4))))) {
    iVar2 = *(int *)(param_1 + 0xd4);
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0xd4) = 1;
      *(undefined4 *)(param_1 + 0xec) = 0x1e;
      return;
    }
    if (iVar2 == 1) {
      if (0x1d < *(int *)(param_1 + 0xec)) {
        fn_00673b04(*(undefined4 *)(param_1 + 0x1c0));
        *(undefined4 *)(param_1 + 0xd4) = 2;
        return;
      }
      *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 1;
    }
    else if (iVar2 == 2) {
      iVar2 = fn_0066eb80(DAT_00898840,2);
      if ((*(byte *)(iVar2 + 0x4c) & 8) != 0) {
        fn_00301f50(param_1 + 0x1e0,0x284);
        uVar3 = fn_00673914(*(undefined4 *)(param_1 + 0x1c0));
        uVar5 = 0;
        *(undefined4 *)(param_1 + 0x460) = uVar3;
        do {
          uVar3 = fn_006739a0(*(undefined4 *)(param_1 + 0x1c0),uVar5 & 0xff);
          fn_0017821c(local_2a0 + uVar5 * 0x50,uVar3,0x50);
          uVar5 = uVar5 + 1;
        } while (uVar5 < 8);
        iVar2 = *(int *)(param_1 + 0x460);
        uVar5 = 0;
        iVar6 = 0;
        if (0 < iVar2) {
          do {
            iVar2 = local_274[uVar5 * 0x14 + 3];
            if (uVar5 < 8) {
              cVar1 = '\0';
              if (local_254[uVar5 * 0x50] != '\0') {
                cVar1 = local_2a0[uVar5 * 0x50];
              }
              if (((local_254[uVar5 * 0x50] != '\0' && cVar1 != '\0') &&
                  (local_274[uVar5 * 0x14] == 4)) &&
                 ((char)local_274[uVar5 * 0x14 + 5] != *(char *)(*(int *)(param_1 + 0x1ac) + 8))) {
                iVar4 = fn_0052c888();
                if (iVar4 == iVar2) {
                  if ((*(int *)(param_1 + 0xf8) != 0) &&
                     (*(int *)(param_1 + 0xf8) == local_29c[uVar5 * 0x14])) {
                    *(undefined4 *)(param_1 + 0xe0) = 2;
                  }
                }
                fn_0017821c(param_1 + iVar6 * 0x50 + 0x1e0,local_2a0 + uVar5 * 0x50,0x50);
                iVar6 = iVar6 + 1;
              }
            }
            iVar2 = *(int *)(param_1 + 0x460);
            uVar5 = uVar5 + 1;
          } while ((int)uVar5 < iVar2);
        }
        uVar5 = 0;
        if (0 < iVar2) {
          do {
            if (uVar5 < 8) {
              cVar1 = '\0';
              if (local_254[uVar5 * 0x50] != '\0') {
                cVar1 = local_2a0[uVar5 * 0x50];
              }
              if (((local_254[uVar5 * 0x50] == '\0' || cVar1 == '\0') ||
                  (local_274[uVar5 * 0x14] != 4)) ||
                 ((char)local_274[uVar5 * 0x14 + 5] == *(char *)(*(int *)(param_1 + 0x1ac) + 8)))
              goto LAB_00578190;
            }
            else {
LAB_00578190:
              iVar4 = param_1 + iVar6 * 0x50;
              fn_0017821c(iVar4 + 0x1e0,local_2a0 + uVar5 * 0x50,0x50);
              iVar2 = *(int *)(param_1 + 0xe0);
              iVar6 = iVar6 + 1;
              bVar7 = iVar2 == 1;
              if (bVar7) {
                iVar2 = *(int *)(param_1 + 0xf8);
              }
              if (bVar7 && iVar2 == *(int *)(iVar4 + 0x1e4)) {
                *(undefined4 *)(param_1 + 0xe0) = 4;
              }
            }
            uVar5 = uVar5 + 1;
          } while ((int)uVar5 < *(int *)(param_1 + 0x460));
        }
        *(undefined4 *)(param_1 + 0xd4) = 3;
        return;
      }
    }
    else if (iVar2 == 3) {
      if ((*(int **)(param_1 + 0x1c0) != (int *)0x0) &&
         (iVar2 = (**(code **)(**(int **)(param_1 + 0x1c0) + 0x14))(), iVar2 == 0)) {
        if (*(int *)(param_1 + 0xf0) == 1) {
          *(undefined4 *)(param_1 + 0xd4) = 0;
        }
        else {
          *(undefined4 *)(param_1 + 0xd4) = 1;
        }
        if (*(char *)(param_1 + 0x1c9) == '\0') {
          *(undefined1 *)(param_1 + 0x1c9) = 1;
        }
      }
      *(undefined4 *)(param_1 + 0xec) = 0;
    }
  }
  return;
}



undefined4 fn_00576ab0(int *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  int *piVar10;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 local_28;
  
  uVar2 = fn_0043c608();
  puVar8 = (undefined4 *)param_1[6];
  if (puVar8 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar8)(puVar8);
    do {
      if (puVar3 == &DAT_00899224) goto LAB_00576b04;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar8 = (undefined4 *)0x0;
LAB_00576b04:
  param_1[0x6b] = (int)puVar8;
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1);
  if (puVar8 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar8)(puVar8);
    do {
      if (puVar3 == &DAT_008963ac) goto LAB_00576b4c;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar8 = (undefined4 *)0x0;
LAB_00576b4c:
  param_1[0x6c] = (int)puVar8;
  puVar8 = (undefined4 *)fn_001f74ec(param_1,0xdf);
  if (puVar8 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar8)(puVar8);
    do {
      if (puVar3 == &DAT_008964a0) goto LAB_00576b90;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar8 = (undefined4 *)0x0;
LAB_00576b90:
  param_1[0x6d] = (int)puVar8;
  puVar8 = (undefined4 *)fn_001f74d8(param_1,0x7a);
  if (puVar8 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar8)(puVar8);
    do {
      if (puVar3 == &DAT_00893d20) goto LAB_00576bd4;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar8 = (undefined4 *)0x0;
LAB_00576bd4:
  param_1[0x6e] = (int)puVar8;
  *(undefined1 *)(DAT_00897850 + 0x3c) = 1;
  uVar4 = (**(code **)(**(int **)(*(int *)(*(int *)(param_1[0x6c] + 0x3c) + 4) + 8) + 0x14))();
  fn_0066e4a4(DAT_00897850,0,uVar4);
  local_40 = 0;
  if (*(char *)(param_1[0x6b] + 8) == '\0') {
    fn_0068993c(param_1,0x7a,0x39,0);
    *(undefined1 *)(param_1[0x6e] + 0xc) = 0;
  }
  else {
    fn_0068993c(param_1,0x39,0x7a,0);
    puVar8 = *(undefined4 **)(*(int *)(param_1[0x6c] + 0x3c) + 8);
    local_3c = *puVar8;
    local_38 = puVar8[1];
    local_34 = puVar8[2];
    local_30 = puVar8[3];
    local_2c = puVar8[4];
    local_28 = *(undefined2 *)(puVar8 + 5);
    *(undefined1 *)((int)param_1 + 0x1d5) = (undefined1)local_3c;
    uVar1 = fn_006c4734(&local_3c);
    *(undefined1 *)((int)param_1 + 0x1d6) = uVar1;
    uVar1 = fn_006c40c8(&local_3c);
    *(undefined1 *)((int)param_1 + 0x1d7) = uVar1;
    uVar1 = fn_006c41e4(&local_3c);
    *(undefined1 *)(param_1 + 0x76) = uVar1;
    uVar1 = fn_006c4094(&local_3c);
    *(undefined1 *)((int)param_1 + 0x1da) = uVar1;
    uVar1 = fn_006c417c(&local_3c);
    *(undefined1 *)((int)param_1 + 0x1db) = uVar1;
    uVar1 = fn_006c4120(&local_3c);
    *(undefined1 *)(param_1 + 0x77) = uVar1;
  }
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  *(undefined1 *)(param_1 + 0x75) = *(undefined1 *)(param_1[0x6b] + 8);
  uVar4 = fn_0066eb80(DAT_00898840,2);
  fn_0066f2f0(uVar4,param_1 + 0x73,0x14);
  iVar5 = fn_00145b00(0x9c,&DAT_00812c8c);
  if (iVar5 == 0) {
    piVar10 = (int *)0x0;
  }
  else {
    puVar8 = (undefined4 *)fn_005f62c0();
    puVar8[8] = &DAT_00859420;
    puVar8[9] = 0;
    puVar8[10] = 0;
    puVar8[0xb] = 0;
    puVar8[0xc] = 0;
    puVar8[0xd] = 0;
    *puVar8 = &DAT_00859b38;
    iVar5 = fn_00119b40(puVar8 + 0x10);
    piVar10 = (int *)(iVar5 + -0x40);
    fn_0066ddbc();
    fn_002fec40(iVar5 + 0x18,s_TaskFriendSearch_008c6e1a);
    *piVar10 = (int)&DAT_00859e2c;
    fn_00673a70(piVar10);
  }
  piVar6 = (int *)param_1[0x70];
  if (piVar6 != piVar10) {
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 4))();
    }
    param_1[0x70] = (int)piVar10;
  }
  fn_00673a10(param_1[0x70],4);
  iVar7 = fn_00145b00(0x78c8,&DAT_00812c8c);
  iVar5 = 0;
  if (iVar7 != 0) {
    iVar5 = fn_00251e64(iVar7,*(undefined4 *)(*(int *)(param_1[0x6c] + 0x3c) + 4),DAT_00897830);
  }
  iVar7 = param_1[0x6f];
  if (iVar7 != iVar5) {
    if (iVar7 != 0) {
      fn_00251ec8(iVar7);
      fn_002feef8();
    }
    param_1[0x6f] = iVar5;
  }
  iVar5 = fn_00145b00(0x9c,&DAT_00812c8c);
  if (iVar5 == 0) {
    piVar10 = (int *)0x0;
  }
  else {
    puVar8 = (undefined4 *)fn_005f62c0();
    puVar8[8] = &DAT_00859420;
    puVar8[9] = 0;
    puVar8[10] = 0;
    puVar8[0xb] = 0;
    puVar8[0xc] = 0;
    puVar8[0xd] = 0;
    *puVar8 = &DAT_00859b38;
    iVar5 = fn_00119b40(puVar8 + 0x10);
    piVar10 = (int *)(iVar5 + -0x40);
    fn_0066ddbc(piVar10);
    fn_002fec40(iVar5 + 0x18,s_TaskEndMatchmake_008c6e09);
    *piVar10 = (int)&DAT_00859e00;
    fn_00673818(piVar10);
  }
  piVar6 = (int *)param_1[0x71];
  if (piVar6 != piVar10) {
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 4))();
    }
    param_1[0x71] = (int)piVar10;
  }
  uVar9 = 0;
  if (param_1[0x30] - param_1[0x2f] >> 4 != 0) {
    do {
      local_40 = 0xff808080;
      fn_0031b590(*(undefined4 *)(param_1[0x1e] + uVar9 * 4),0,&local_40);
      uVar9 = uVar9 + 1;
    } while (uVar9 < (uint)(param_1[0x30] - param_1[0x2f] >> 4));
  }
  if (*(char *)(param_1[0x6b] + 8) != '\0') {
    param_1[0x36] = 1;
  }
  *(undefined1 *)((int)param_1 + 0x1c9) = 0;
  *(undefined4 *)(param_1[0x6d] + 0x10) = DAT_00897830;
  return uVar2;
}


