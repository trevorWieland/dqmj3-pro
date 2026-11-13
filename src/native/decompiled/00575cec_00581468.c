#include "00575cec_00581468.h"



void fn_00581468(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_00231cb8((&DAT_007c6d64)[*(int *)(param_1 + 0xd0)]);
  fn_00243550(*(undefined4 *)(param_1 + 0xa4),uVar1);
  return;
}



void fn_00580e58(void)

{
  int iVar1;
  
  iVar1 = fn_003f8258();
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  return;
}



void fn_0057ca24(undefined4 param_1,undefined4 param_2,byte *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)fn_003b17d4(param_1,param_2,0xb);
  uVar2 = 0;
  *puVar1 = &DAT_00841cd8;
  *(undefined1 *)((int)puVar1 + 0x65) = 0;
  puVar1[0x1b] = 0;
  if (param_3 != (byte *)0x0) {
    uVar2 = (uint)*param_3;
  }
  puVar1[0x1a] = uVar2;
  return;
}



void fn_0057c700(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,6);
  *puVar1 = &DAT_00841cb0;
  return;
}



void fn_0057c490(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0037bd5c(param_1,param_2,0);
  *puVar1 = &DAT_00841c88;
  puVar1[2] = 0x10;
  return;
}



void fn_0057bdf8(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,0x24);
  *puVar1 = &DAT_00841c14;
  return;
}



undefined4 fn_0057b13c(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 local_3c;
  undefined1 auStack_34 [16];
  undefined1 local_24;
  
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0x2c);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008951d8) goto LAB_0057b18c;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_0057b18c:
  *(undefined4 **)(param_1 + 0xb8) = puVar1;
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00891bc4) goto LAB_0057b1c8;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_0057b1c8:
  *(undefined4 **)(param_1 + 0xb4) = puVar1;
  fn_002c330c(&local_50);
  local_50 = DAT_00891c1c;
  uStack_4c = DAT_00891c20;
  local_3c = 1;
  uStack_48 = 1;
  local_44 = *(undefined4 *)(*(int *)(param_1 + 0xb4) + 8);
  uVar3 = fn_0022f584(DAT_00891c24,0);
  fn_00147974(auStack_34,uVar3);
  local_24 = 0;
  fn_002c29a0(param_1,&local_50);
  uVar3 = fn_0022f750(DAT_00891c2c);
  fn_0031b78c(param_1,0,1,uVar3);
  fn_002c3378(&local_50);
  return 1;
}



void fn_00576f8c(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 == 0) {
    fn_0031b7c4(*(undefined4 *)(*(int *)(param_1 + 0x78) + param_2 * 4),4,&DAT_00577018);
    fn_0031b6ec(*(undefined4 *)(*(int *)(param_1 + 0x78) + param_2 * 4),4,0);
    return;
  }
  uVar1 = fn_0022f750((char *)&DAT_00577004);
  fn_0031b7c4(*(undefined4 *)(*(int *)(param_1 + 0x78) + param_2 * 4),4,uVar1);
  fn_0031b6ec(*(undefined4 *)(*(int *)(param_1 + 0x78) + param_2 * 4),4,1);
  return;
}



void fn_00576234(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  uVar1 = fn_00311508(*(undefined4 *)(*(int *)(param_1 + 0x100) + 0x2c));
  uVar2 = fn_0022f750(DAT_00898ab4);
  uVar3 = fn_0022f750(DAT_00898ab8);
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  fn_00101a50(&local_20,10,L"%ls%d%ls",uVar2,uVar1,uVar3);
  fn_00182810(*(undefined4 *)(param_1 + 0x108),&local_20);
  return;
}



void fn_0057609c(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar10;
  int *piVar9;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  iVar1 = fn_005828a4();
  uVar8 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = fn_002e3e9c(*(undefined4 *)(param_1 + 0xb4),*(undefined4 *)(iVar1 + 0x10),uVar8);
  piVar5 = *(int **)(param_1 + 0x10c);
  if (*(int **)(param_1 + 0x110) != piVar5) {
    do {
      if (*piVar5 == iVar1) {
        piVar6 = *(int **)(param_1 + 0x110);
        if (*(int **)(param_1 + 0x10c) != piVar6) {
          piVar9 = piVar5 + 1;
          if (piVar6 != piVar9) {
            piVar2 = piVar5;
            if (piVar6 < piVar9) {
              do {
                piVar10 = piVar9 + 1;
                *piVar2 = *piVar9;
                piVar2 = piVar2 + 1;
                piVar9 = piVar10;
              } while (piVar10 != piVar6);
            }
            else {
              iVar7 = (int)piVar6 - (int)piVar9;
              if (0 < iVar7) {
                piVar6 = piVar5;
                piVar2 = piVar5 + -1;
                if (iVar7 * 0x20000000 < 0) {
                  *piVar5 = *piVar9;
                  piVar6 = piVar9;
                  piVar2 = piVar5;
                }
                for (iVar7 = iVar7 >> 3; iVar7 != 0; iVar7 = iVar7 + -1) {
                  piVar2[1] = piVar6[1];
                  piVar6 = piVar6 + 2;
                  piVar2 = piVar2 + 2;
                  *piVar2 = *piVar6;
                }
              }
            }
          }
          *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x110) + -4;
        }
        piVar5 = piVar5 + -1;
      }
      piVar5 = piVar5 + 1;
    } while (*(int **)(param_1 + 0x110) != piVar5);
  }
  uVar8 = fn_00346ed0(*(undefined4 *)(param_1 + 0xb4),uVar8);
  fn_002b325c(uVar8,0xffffffff);
  fn_002b0bcc(*(undefined4 *)(*(int *)(param_1 + 0x100) + 0x2c),0xffffffff);
  uVar8 = fn_00311508(*(undefined4 *)(*(int *)(param_1 + 0x100) + 0x2c));
  uVar3 = fn_0022f750(DAT_00898ab4);
  uVar4 = fn_0022f750(DAT_00898ab8);
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  fn_00101a50(&local_28,10,L"%ls%d%ls",uVar3,uVar8,uVar4);
  fn_00182810(*(undefined4 *)(param_1 + 0x108),&local_28);
  fn_00582f2c(param_1);
  return;
}



void fn_00575cec(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  iVar1 = fn_005828a4();
  uVar12 = *(undefined4 *)(iVar1 + 0xc);
  uVar2 = fn_002e3e9c(*(undefined4 *)(param_1 + 0xb4),*(undefined4 *)(iVar1 + 0x10),uVar12);
  puVar10 = *(undefined4 **)(param_1 + 0x110);
  puVar11 = (uint *)(param_1 + 0x10c);
  if (puVar10 == *(undefined4 **)(param_1 + 0x114)) {
    uVar6 = (int)((int)puVar10 - *puVar11) >> 2;
    if (uVar6 < (uint)((int)((int)*(undefined4 **)(param_1 + 0x114) - *puVar11) >> 2)) {
      *(undefined4 **)(param_1 + 0x110) = puVar10 + 1;
      if (puVar10 != (undefined4 *)0x0) {
        *puVar10 = puVar10[-1];
      }
      puVar4 = puVar10 + -1;
      puVar8 = puVar10;
      if (puVar10 < puVar4) {
        iVar1 = (int)puVar4 - (int)puVar10;
        if (0 < iVar1) {
          if (iVar1 * 0x20000000 < 0) {
            puVar4 = puVar10 + -2;
            puVar8 = puVar10 + -1;
            *puVar8 = *puVar4;
          }
          for (iVar1 = iVar1 >> 3; iVar1 != 0; iVar1 = iVar1 + -1) {
            puVar8[-1] = puVar4[-1];
            puVar4 = puVar4 + -2;
            puVar8 = puVar8 + -2;
            *puVar8 = *puVar4;
          }
        }
      }
      else {
        while (puVar10 != puVar4) {
          puVar4 = puVar4 + -1;
          puVar8[-1] = *puVar4;
          puVar8 = puVar8 + -1;
        }
      }
      *puVar10 = uVar2;
    }
    else {
      uVar13 = uVar6 + (uVar6 >> 1) + (uVar6 >> 3);
      if (uVar13 < uVar6 + 0x20) {
        uVar13 = uVar6 + 0x20;
      }
      puVar3 = (undefined4 *)fn_00100fc6(uVar13 << 2,0);
      puVar8 = puVar3;
      for (puVar4 = (undefined4 *)*puVar11; puVar4 != puVar10; puVar4 = puVar4 + 1) {
        if (puVar8 != (undefined4 *)0x0) {
          *puVar8 = *puVar4;
        }
        puVar8 = puVar8 + 1;
      }
      puVar4 = (undefined4 *)(((int)puVar10 - *puVar11 & 0xfffffffc) + (int)puVar3);
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = uVar2;
      }
      puVar8 = *(undefined4 **)(param_1 + 0x110);
      puVar4 = (undefined4 *)(((int)puVar10 - *puVar11 & 0xfffffffc) + (int)puVar3);
      for (; puVar10 != puVar8; puVar10 = puVar10 + 1) {
        puVar4 = puVar4 + 1;
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = *puVar10;
        }
      }
      uVar5 = *puVar11;
      uVar9 = *(uint *)(param_1 + 0x110);
      uVar6 = uVar5;
      if (uVar9 < uVar5) {
        do {
          uVar6 = uVar6 + 4;
        } while (uVar6 != uVar9);
      }
      fn_001008c4(uVar5,(int)(*(int *)(param_1 + 0x114) - uVar5) >> 2,0);
      *(undefined4 **)(param_1 + 0x114) = puVar3 + uVar13;
      *(undefined4 **)(param_1 + 0x110) = puVar3 + ((int)(uVar9 - uVar5) >> 2) + 1;
      *puVar11 = (uint)puVar3;
    }
  }
  else {
    *(undefined4 **)(param_1 + 0x110) = puVar10 + 1;
    if (puVar10 != (undefined4 *)0x0) {
      *puVar10 = uVar2;
    }
  }
  uVar2 = fn_00346ed0(*(undefined4 *)(param_1 + 0xb4),uVar12);
  fn_002b325c(uVar2,2);
  fn_002b0bcc(*(undefined4 *)(*(int *)(param_1 + 0x100) + 0x2c),1);
  uVar2 = fn_00311508(*(undefined4 *)(*(int *)(param_1 + 0x100) + 0x2c));
  uVar12 = fn_0022f750(DAT_00898ab4);
  uVar7 = fn_0022f750(DAT_00898ab8);
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  fn_00101a50(&local_30,10,L"%ls%d%ls",uVar12,uVar2,uVar7);
  fn_00182810(*(undefined4 *)(param_1 + 0x108),&local_30);
  fn_00582f2c(param_1);
  return;
}


