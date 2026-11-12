#include "006cfba8_006d30f0.h"



/* WARNING: Removing unreachable block (ram,0x006d3214) */
/* WARNING: Removing unreachable block (ram,0x006d3218) */
/* WARNING: Removing unreachable block (ram,0x006d321c) */
/* WARNING: Removing unreachable block (ram,0x006d3220) */
/* WARNING: Removing unreachable block (ram,0x006d323c) */
/* WARNING: Removing unreachable block (ram,0x006d3254) */

void fn_006d30f0(undefined4 param_1,int *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  undefined1 auStack_258 [4];
  undefined4 local_254;
  uint local_44;
  undefined1 auStack_40 [11];
  undefined1 local_35;
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [12];
  
  uVar2 = fn_0013d3e8(auStack_30,&DAT_006d34b4);
  puVar5 = (undefined4 *)*param_2;
  puVar11 = (undefined4 *)param_2[1];
  uVar1 = (int)puVar11 - (int)puVar5 >> 3;
  if (uVar1 < 6) {
    iVar13 = 6 - uVar1;
    if (iVar13 != 0) {
      uVar3 = iVar13 + uVar1;
      if ((uint)(param_2[2] - (int)puVar5 >> 3) < uVar3) {
        uVar6 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
        if (uVar6 < uVar1 + 0x20) {
          uVar6 = uVar1 + 0x20;
        }
        local_44 = uVar3;
        if (uVar3 < uVar6) {
          local_44 = uVar6;
        }
        iVar4 = fn_0015ece0(local_44 << 3);
        iVar12 = iVar4;
        for (puVar5 = (undefined4 *)*param_2; puVar5 != puVar11; puVar5 = puVar5 + 2) {
          if (iVar12 != 0) {
            fn_004b637c(iVar12,puVar5);
          }
          iVar12 = iVar12 + 8;
        }
        iVar9 = ((int)puVar11 - *param_2 & 0xfffffff8U) + iVar4;
        for (iVar12 = iVar13; iVar12 != 0; iVar12 = iVar12 + -1) {
          if (iVar9 != 0) {
            fn_004b637c(iVar9,uVar2);
          }
          iVar9 = iVar9 + 8;
        }
        puVar5 = (undefined4 *)param_2[1];
        iVar12 = iVar4 + (iVar13 + ((int)puVar11 - *param_2 >> 3)) * 8;
        for (; puVar11 != puVar5; puVar11 = puVar11 + 2) {
          if (iVar12 != 0) {
            fn_004b637c(iVar12,puVar11);
          }
          iVar12 = iVar12 + 8;
        }
        puVar11 = (undefined4 *)*param_2;
        puVar5 = (undefined4 *)param_2[1];
        iVar12 = (int)puVar5 - (int)puVar11;
        for (; puVar11 != puVar5; puVar11 = puVar11 + 2) {
          (**(code **)*puVar11)(puVar11);
        }
        fn_0014f1bc(*param_2);
        param_2[2] = iVar4 + local_44 * 8;
        param_2[1] = iVar4 + (iVar12 >> 3) * 8 + iVar13 * 8;
        *param_2 = iVar4;
      }
      else {
        puVar5 = puVar11 + iVar13 * 2;
        param_2[1] = (int)(puVar11 + iVar13 * 2);
        if (puVar5 < puVar11) {
          puVar7 = puVar11 + iVar13 * -2;
          puVar10 = puVar11;
          for (puVar8 = puVar7; puVar8 != puVar11; puVar8 = puVar8 + 2) {
            if (puVar10 != (undefined4 *)0x0) {
              fn_004b637c(puVar10,puVar8);
            }
            puVar10 = puVar10 + 2;
          }
          puVar10 = puVar11;
          for (; puVar11 != puVar7; puVar7 = puVar7 + -2) {
            puVar10 = puVar10 + -2;
            fn_00170fa4(puVar10);
          }
          for (; puVar11 != puVar5; puVar11 = puVar11 + 2) {
            fn_00170fa4(puVar11,uVar2);
          }
        }
        else {
          for (; iVar13 != 0; iVar13 = iVar13 + -1) {
            if (puVar11 != (undefined4 *)0x0) {
              fn_004b637c(puVar11,uVar2);
            }
            puVar11 = puVar11 + 2;
          }
        }
      }
    }
  }
  else if (6 < uVar1) {
    puVar10 = puVar5 + 0xc;
    if (puVar5 != puVar11) {
      for (; puVar10 != puVar11; puVar10 = puVar10 + 2) {
        (**(code **)*puVar10)(puVar10);
      }
      param_2[1] = param_2[1] - ((int)puVar11 - (int)(puVar5 + 0xc) & 0xfffffff8U);
    }
  }
  fn_00170f54(auStack_30);
  fn_0013d438(*param_2,&DAT_006d34b8);
  fn_0045f27c(auStack_258);
  uVar2 = fn_00454388();
  fn_0045f058(auStack_258,uVar2);
  fn_0013d438(*param_2 + 8,local_254);
  iVar13 = fn_00453d8c(uVar2);
  if (iVar13 != 0) {
    fn_004b63a4(*param_2 + 0x10);
  }
  fn_0045f228(auStack_258);
  uVar2 = fn_00453af8();
  fn_0045f058(auStack_258,uVar2);
  fn_0013d438(*param_2 + 0x18,local_254);
  iVar13 = fn_004542f4(auStack_34,uVar2);
  if (-1 < iVar13) {
    fn_004b63a4(*param_2 + 0x20,auStack_34);
  }
  iVar13 = fn_0044c328(auStack_40);
  if (-1 < iVar13) {
    local_35 = 0;
    fn_004b63a4(*param_2 + 0x28,auStack_40);
  }
  fn_0045f2ec(auStack_258);
  return;
}



int * fn_006d2a44(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (*(code **)(param_1 + 0x324) == (code *)0x0) {
    iVar2 = fn_0015ecdc(0x2c);
    if (iVar2 == 0) {
      piVar1 = (int *)0x0;
    }
    else {
      fn_004b7748();
      piVar1 = (int *)fn_0046c3cc(iVar2,10);
      *piVar1 = (int)&DAT_00853aa8;
      piVar1[10] = 0;
      iVar2 = fn_0015ecdc(0x94);
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        puVar4 = (undefined4 *)fn_004ab57c();
        *puVar4 = &DAT_00855104;
        iVar2 = fn_004b43d0(puVar4 + 0x18);
        iVar3 = fn_004955c8(iVar2 + 0x20);
        iVar2 = iVar3 + -0x80;
        *(undefined4 *)(iVar3 + -4) = 0;
        *(undefined4 *)(iVar3 + 0xc) = 3;
      }
      piVar1[5] = iVar2;
    }
  }
  else {
    piVar1 = (int *)(**(code **)(param_1 + 0x324))();
  }
  iVar2 = *(int *)(param_1 + 0x198);
  iVar2 = fn_0046c180(piVar1,*(undefined2 *)(iVar2 + 0x7c),*(undefined1 *)(iVar2 + 0x7e),
                       *(undefined4 *)(iVar2 + 0x80));
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 0x324) == 0) {
      fn_00481930(piVar1);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))(piVar1);
      }
      piVar1 = (int *)0x0;
    }
  }
  else {
    iVar3 = fn_0015ecdc(0x24);
    iVar2 = 0;
    if (iVar3 != 0) {
      iVar2 = fn_0045eb90();
    }
    *(int *)(iVar2 + 0x14) = piVar1[3];
    fn_0046c394(piVar1,iVar2,&LAB_0045ea3c);
  }
  return piVar1;
}



undefined4 fn_006d1330(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined1 auStack_20 [4];
  undefined4 local_1c;
  
  piVar2 = (int *)**(int **)(DAT_008bad58 + 0x10);
  while( true ) {
    if (piVar2 == (int *)*(int *)(DAT_008bad58 + 0x10)) {
      return 0;
    }
    (**(code **)(*(int *)piVar2[2] + 0xc))(auStack_20);
    iVar1 = fn_004b626c(local_1c,*(undefined4 *)(param_2 + 4));
    fn_00170f54(auStack_20);
    if (iVar1 != 0) break;
    piVar2 = (int *)*piVar2;
  }
  return piVar2[2];
}



undefined4 fn_006d0e70(int param_1,uint param_2,undefined4 *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int extraout_r1;
  uint extraout_r1_00;
  uint uVar3;
  int iVar4;
  uint local_48;
  int local_44;
  uint uStack_40;
  int iStack_3c;
  int iStack_34;
  uint uStack_30;
  undefined4 *local_2c;
  int local_28;
  
  iStack_34 = param_1;
  uStack_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  fn_0013d0fc(&local_48);
  do {
    piVar1 = (int *)(param_1 + 4);
    (**(code **)(*(int *)(param_1 + 4) + 8))();
    uVar3 = 0;
    if (*(int *)(param_1 + 0x34) != 0) {
      do {
        fn_00169f1c(DAT_008b64e4 + uVar3,*(undefined4 *)(param_1 + 0x34));
        iVar2 = fn_006d0df8(param_1,*(undefined4 *)(*(int *)(param_1 + 0x30) + extraout_r1 * 4));
        if (*(char *)(**(int **)(param_1 + 0x2c) + iVar2) != '\0') {
          fn_00169f1c(DAT_008b64e4 + uVar3,*(undefined4 *)(param_1 + 0x34));
          (**(code **)(*piVar1 + 0xc))(piVar1);
          uVar3 = extraout_r1_00 & 0xffff;
          goto LAB_006d0f48;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(param_1 + 0x34));
    }
    DAT_008b64e4 = DAT_008b64e4 + 1;
    (**(code **)(*piVar1 + 0xc))(piVar1);
    uVar3 = 0xffff;
LAB_006d0f48:
    if (uVar3 != 0xffff) {
      iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 0x30) + uVar3 * 4) + 4);
      iVar2 = fn_006d0df8(iVar4);
      *(undefined1 *)(**(int **)(iVar4 + 0x2c) + iVar2) = 0;
      *local_2c = *(undefined4 *)(*(int *)(param_1 + 0x30) + uVar3 * 4);
      return 1;
    }
    if ((param_2 != 0xffffffff) &&
       (fn_0013d0fc(&uStack_40),
       (int)(uint)(uStack_40 - local_48 < param_2) <=
       (int)(iStack_3c - (local_44 + (uint)(uStack_40 < local_48))))) {
      if (local_28 == 0) {
        fn_0015ebe4(L"D:/home/jenkins/workspace/Manual-Pack/5129d543/OnlineCore/src/Platform/Core/EventHandler.cpp"
                     ,0x137,0xe000000c,0);
      }
      return 0;
    }
    fn_00735640(1000000,0);
  } while( true );
}



void fn_006d0ae4(undefined4 param_1)

{
  fn_006d0810(param_1,L"RVCID",0);
  return;
}



void fn_006d09e4(undefined4 param_1)

{
  fn_006d0810(param_1,&DAT_007d9e40,0);
  return;
}



void fn_006d09d4(undefined4 param_1)

{
  fn_006d0810(param_1,&DAT_007d9e38,0);
  return;
}



void fn_006cff0c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  
  iVar1 = fn_004533a0(param_2,param_3,param_4,param_5,param_6);
  if ((iVar1 < 0) && (iVar1 == -0x375ef410)) {
    fn_0044fd88(1,0);
    DAT_0089a619 = 1;
    fn_004533a0(param_2,param_3,param_4,param_5,param_6);
  }
  return;
}



int fn_006cfba8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar2 = 0;
  uVar3 = param_2;
  uVar4 = param_3;
  do {
    iVar1 = fn_00452818(param_2,param_3,param_4,param_5,param_6,param_1,uVar3,uVar4);
    if (iVar1 != -0x375ef410) {
      return iVar1;
    }
    fn_0044fd88(1,0);
    iVar2 = iVar2 + 1;
    DAT_0089a619 = 1;
  } while (iVar2 < 3);
  DAT_0089a619 = 1;
  return iVar1;
}


