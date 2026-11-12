#include "00748d08_0074ce70.h"



void fn_0074ce70(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int local_18;
  
  *(undefined1 *)(param_2 + 4) = 0;
  cVar1 = *(char *)(param_1 + 0x3b);
  local_18 = 0;
  if ((((cVar1 != '\0') ||
       ((fn_0074a4c8(param_1,param_2 + 4), *(char *)(param_1 + 4) == '\0' &&
        (fn_0074a528(param_1,&local_18), *(char *)(param_1 + 4) == '\0')))) &&
      (iVar3 = *(int *)(param_1 + 0xc), *(char *)(param_1 + 4) == '\0')) &&
     ((fn_0074a4c8(param_1,param_2 + 5), *(char *)(param_1 + 4) == '\0' &&
      (fn_0074b4b8(param_1,param_2 + 8), *(char *)(param_1 + 4) == '\0' && cVar1 == '\0')))) {
    uVar2 = local_18 + iVar3;
    if ((uVar2 < *(uint *)(param_1 + 0xc)) || (*(uint *)(*(int *)(param_1 + 8) + 0x10) < uVar2)) {
      *(undefined1 *)(param_1 + 4) = 1;
    }
    else {
      *(uint *)(param_1 + 0xc) = uVar2;
    }
  }
  return;
}



void fn_0074b7d8(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 *local_48;
  undefined1 local_44 [4];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  int local_30;
  int local_2c;
  uint local_28;
  
  puVar8 = (undefined4 *)*param_2;
  puVar10 = (undefined4 *)param_2[1];
  puVar3 = puVar8;
  if (puVar8 != puVar10) {
    do {
      (**(code **)*puVar3)(puVar3);
      puVar3 = puVar3 + 6;
    } while (puVar3 != puVar10);
    param_2[1] = param_2[1] + (((int)puVar10 - (int)puVar8) / 0x18) * -0x18;
  }
  iVar2 = fn_0074a528(param_1,&local_28);
  uVar7 = local_28;
  if (iVar2 != 0) {
    if (0xaaaaaaa < local_28) {
      local_48 = (undefined4 *)0xaaaaaaa;
      fn_002ff628(8,&DAT_0074bb80,&DAT_0074bb80,local_28);
    }
    if ((uint)((param_2[2] - *param_2) / 0x18) < uVar7) {
      uVar5 = (param_2[1] - *param_2) / 0x18;
      uVar6 = uVar5 + (uVar5 >> 1) + (uVar5 >> 3);
      uVar11 = uVar5 + 0x20;
      if (uVar5 + 0x20 <= uVar6) {
        uVar11 = uVar6;
      }
      if (uVar11 <= uVar7) {
        uVar11 = uVar7;
      }
      puVar3 = (undefined4 *)fn_0015ece0(uVar11 * 0x18);
      iVar9 = param_2[1];
      local_48 = puVar3;
      for (iVar2 = *param_2; iVar2 != iVar9; iVar2 = iVar2 + 0x18) {
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = &DAT_00854534;
          *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(iVar2 + 4);
          iVar4 = fn_004b637c(puVar3 + 2,iVar2 + 8);
          iVar4 = fn_004b637c(iVar4 + 8,iVar2 + 0x10);
          *(undefined **)(iVar4 + -0x10) = &DAT_00853860;
        }
        puVar3 = puVar3 + 6;
      }
      puVar8 = (undefined4 *)param_2[1];
      for (puVar3 = (undefined4 *)*param_2; puVar3 != puVar8; puVar3 = puVar3 + 6) {
        (**(code **)*puVar3)(puVar3);
      }
      fn_0014f1bc(*param_2);
      iVar2 = *param_2;
      *param_2 = (int)local_48;
      param_2[1] = (int)(local_48 + ((param_2[1] - iVar2) / 0x18) * 6);
      param_2[2] = (int)(local_48 + uVar11 * 6);
    }
    for (uVar7 = 0; uVar7 < local_28; uVar7 = uVar7 + 1) {
      if (*(char *)(param_1 + 4) != '\0') {
        return;
      }
      local_48 = &DAT_00854534;
      local_44[0] = 0;
      iVar2 = fn_0013d40c(auStack_40);
      iVar2 = fn_0013d40c(iVar2 + 8);
      *(undefined **)(iVar2 + -0x10) = &DAT_00853860;
      local_44[0] = 0;
      cVar1 = *(char *)(param_1 + 0x3b);
      local_30 = 0;
      if ((((cVar1 == '\0') &&
           ((fn_0074a4c8(param_1,local_44), *(char *)(param_1 + 4) != '\0' ||
            (fn_0074a528(param_1,&local_30), *(char *)(param_1 + 4) != '\0')))) ||
          (local_2c = *(int *)(param_1 + 0xc), *(char *)(param_1 + 4) != '\0')) ||
         ((fn_0045f7f0(param_1,auStack_40), *(char *)(param_1 + 4) != '\0' ||
          (fn_0045f7f0(param_1,auStack_38), *(char *)(param_1 + 4) != '\0')))) {
LAB_0074bb04:
        puVar8 = (undefined4 *)*param_2;
        puVar10 = (undefined4 *)param_2[1];
        puVar3 = puVar8;
        if (puVar8 != puVar10) {
          do {
            (**(code **)*puVar3)(puVar3);
            puVar3 = puVar3 + 6;
          } while (puVar3 != puVar10);
          param_2[1] = param_2[1] + (((int)puVar10 - (int)puVar8) / 0x18) * -0x18;
        }
        local_48 = &DAT_00854534;
        iVar2 = fn_00170f54(auStack_38);
        fn_00170f54(iVar2 + -8);
        return;
      }
      if (cVar1 == '\0') {
        uVar5 = local_2c + local_30;
        if ((uVar5 < *(uint *)(param_1 + 0xc)) || (*(uint *)(*(int *)(param_1 + 8) + 0x10) < uVar5))
        {
          *(undefined1 *)(param_1 + 4) = 1;
          goto LAB_0074bb04;
        }
        *(uint *)(param_1 + 0xc) = uVar5;
      }
      puVar3 = (undefined4 *)param_2[1];
      if (puVar3 == (undefined4 *)param_2[2]) {
        fn_00792354(param_2,puVar3,&local_48);
      }
      else {
        param_2[1] = (int)(puVar3 + 6);
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = &DAT_00854534;
          *(undefined1 *)(puVar3 + 1) = local_44[0];
          iVar2 = fn_004b637c(puVar3 + 2,auStack_40);
          iVar2 = fn_004b637c(iVar2 + 8,auStack_38);
          *(undefined **)(iVar2 + -0x10) = &DAT_00853860;
        }
      }
      local_48 = &DAT_00854534;
      iVar2 = fn_00170f54(auStack_38);
      fn_00170f54(iVar2 + -8);
    }
  }
  return;
}



void fn_0074b108(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint local_34;
  undefined1 auStack_30 [12];
  
  puVar5 = (undefined4 *)param_2[1];
  puVar7 = (undefined4 *)*param_2;
  puVar4 = puVar7;
  if (puVar7 != puVar5) {
    do {
      (**(code **)*puVar4)(puVar4);
      puVar4 = puVar4 + 2;
    } while (puVar4 != puVar5);
    param_2[1] = param_2[1] - ((int)puVar5 - (int)puVar7 & 0xfffffff8U);
  }
  iVar2 = fn_0074a528(param_1,&local_34);
  uVar10 = local_34;
  if (iVar2 != 0) {
    if (0x1fffffff < local_34) {
      fn_002ff628(8,&DAT_0074b4b4,&DAT_0074b4b4,local_34,0x1fffffff);
    }
    if ((uint)(param_2[2] - *param_2 >> 3) < uVar10) {
      uVar1 = param_2[1] - *param_2 >> 3;
      uVar9 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
      if (uVar9 < uVar1 + 0x20) {
        uVar9 = uVar1 + 0x20;
      }
      if (uVar9 <= uVar10) {
        uVar9 = uVar10;
      }
      iVar3 = fn_0015ece0(uVar9 << 3);
      iVar8 = param_2[1];
      iVar6 = iVar3;
      for (iVar2 = *param_2; iVar2 != iVar8; iVar2 = iVar2 + 8) {
        if (iVar6 != 0) {
          fn_004b637c(iVar6,iVar2);
        }
        iVar6 = iVar6 + 8;
      }
      puVar5 = (undefined4 *)param_2[1];
      for (puVar4 = (undefined4 *)*param_2; puVar4 != puVar5; puVar4 = puVar4 + 2) {
        (**(code **)*puVar4)(puVar4);
      }
      fn_0014f1bc(*param_2);
      iVar2 = *param_2;
      *param_2 = iVar3;
      param_2[1] = (param_2[1] - iVar2 & 0xfffffff8U) + iVar3;
      param_2[2] = iVar3 + uVar9 * 8;
    }
    for (uVar10 = 0; uVar10 < local_34; uVar10 = uVar10 + 1) {
      if (*(char *)(param_1 + 4) != '\0') {
        return;
      }
      fn_0013d40c(auStack_30);
      fn_0045f7f0(param_1,auStack_30);
      if (*(char *)(param_1 + 4) != '\0') {
        puVar5 = (undefined4 *)*param_2;
        puVar7 = (undefined4 *)param_2[1];
        puVar4 = puVar5;
        if (puVar5 != puVar7) {
          do {
            (**(code **)*puVar4)(puVar4);
            puVar4 = puVar4 + 2;
          } while (puVar4 != puVar7);
          param_2[1] = param_2[1] - ((int)puVar7 - (int)puVar5 & 0xfffffff8U);
        }
        fn_00170f54(auStack_30);
        return;
      }
      iVar2 = param_2[1];
      if (iVar2 == param_2[2]) {
        uVar1 = iVar2 - *param_2 >> 3;
        if (uVar1 < (uint)(param_2[2] - *param_2 >> 3)) {
          param_2[1] = iVar2 + 8;
          iVar6 = iVar2;
          if (iVar2 != 0) {
            fn_004b637c(iVar2,iVar2 + -8);
          }
          while (iVar2 != iVar6 + -8) {
            fn_00170fa4();
            iVar6 = iVar6 + -8;
          }
          fn_00170fa4(iVar2,auStack_30);
        }
        else {
          uVar9 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
          if (uVar9 < uVar1 + 0x20) {
            uVar9 = uVar1 + 0x20;
          }
          iVar8 = fn_0015ece0(uVar9 << 3);
          iVar3 = iVar8;
          for (iVar6 = *param_2; iVar6 != iVar2; iVar6 = iVar6 + 8) {
            if (iVar3 != 0) {
              fn_004b637c(iVar3,iVar6);
            }
            iVar3 = iVar3 + 8;
          }
          iVar6 = (iVar2 - *param_2 & 0xfffffff8U) + iVar8;
          if (iVar6 != 0) {
            fn_004b637c(iVar6,auStack_30);
          }
          iVar3 = param_2[1];
          iVar6 = (iVar2 - *param_2 & 0xfffffff8U) + iVar8;
          for (; iVar2 != iVar3; iVar2 = iVar2 + 8) {
            iVar6 = iVar6 + 8;
            if (iVar6 != 0) {
              fn_004b637c(iVar6,iVar2);
            }
          }
          puVar4 = (undefined4 *)*param_2;
          puVar5 = (undefined4 *)param_2[1];
          iVar2 = (int)puVar5 - (int)puVar4;
          for (; puVar4 != puVar5; puVar4 = puVar4 + 2) {
            (**(code **)*puVar4)(puVar4);
          }
          fn_0014f1bc(*param_2);
          *param_2 = iVar8;
          param_2[1] = iVar8 + (iVar2 >> 3) * 8 + 8;
          param_2[2] = iVar8 + uVar9 * 8;
        }
      }
      else {
        param_2[1] = iVar2 + 8;
        if (iVar2 != 0) {
          fn_004b637c(iVar2,auStack_30);
        }
      }
      fn_00170f54(auStack_30);
    }
  }
  return;
}



void fn_00748d08(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 local_20;
  
  local_20 = param_4;
  fn_002c3e78();
  iVar6 = 0;
  iVar1 = fn_006ba274(param_1);
  if (0 < iVar1) {
    do {
      iVar1 = fn_006ba284(param_1);
      iVar2 = fn_006ba274(param_1);
      uVar3 = iVar1 * iVar2 + iVar6;
      if ((int)uVar3 < 0) {
        return;
      }
      if ((uint)(*(int *)(param_1 + 0xf4) - *(int *)(param_1 + 0xf0) >> 4) <= uVar3) {
        return;
      }
      puVar4 = (undefined4 *)(*(int *)(param_1 + 0xf0) + uVar3 * 0x10);
      if (puVar4 == (undefined4 *)0x0) {
        return;
      }
      uVar7 = *(undefined4 *)(*(int *)(param_1 + 0x78) + iVar6 * 4);
      uVar5 = fn_0022f750(*puVar4);
      fn_0031b78c(param_1,iVar6,0,uVar5);
      iVar1 = fn_006ba284(param_1);
      iVar2 = fn_006ba274(param_1);
      uVar3 = iVar1 * iVar2 + iVar6;
      if (((int)uVar3 < 0) ||
         ((uint)(*(int *)(param_1 + 0xf4) - *(int *)(param_1 + 0xf0) >> 4) <= uVar3)) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(param_1 + 0xf0) + uVar3 * 0x10;
      }
      if (*(int *)(iVar1 + 8) == 0) {
        local_20 = DAT_0089657c;
        fn_0031b554(uVar7,&local_20);
      }
      iVar6 = iVar6 + 1;
      iVar1 = fn_006ba274(param_1);
    } while (iVar6 < iVar1);
  }
  return;
}


