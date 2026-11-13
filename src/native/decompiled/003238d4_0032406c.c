#include "003238d4_0032406c.h"



void fn_0032406c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  
  if (*(int *)(param_1 + 300) == 0) {
    fn_0030ea44(*(undefined4 *)(param_1 + 0xec));
    *(undefined4 *)(param_1 + 300) = 1;
    return;
  }
  if (*(int *)(param_1 + 300) == 1) {
    iVar1 = fn_006b7258(*(undefined4 *)(param_1 + 0xec));
    if (iVar1 == 0) {
      iVar1 = fn_0030e4dc(*(undefined4 *)(param_1 + 0xec),0);
      if (iVar1 < 0) {
        if (*(char *)(param_1 + 0xf8) != '\0') {
          uVar5 = 0;
          uVar6 = uVar5;
          do {
            iVar1 = fn_0030e2e0(*(undefined4 *)(param_1 + 0xec),uVar5);
            if (((iVar1 != 0) &&
                (iVar1 = fn_006c48e0(*(undefined4 *)(param_1 + 0xec),uVar5), iVar1 == 0)) &&
               (iVar1 = *(int *)(param_1 + 0xec) + uVar5 * 0x2ec, *(int *)(iVar1 + 0x138) == 7)) {
              iVar2 = fn_006c4988(iVar1 + 0x2b8);
              if (iVar2 == 0) {
                fn_00388df8(iVar1 + 0x2b8,iVar1 + 0x13c);
              }
              iVar1 = fn_006c4918(iVar1 + 0x2b8);
              if (iVar1 != 0) {
                uVar6 = uVar6 + 1;
                fn_0030e6d0(*(undefined4 *)(param_1 + 0xec),uVar5,8);
                iVar2 = *(int *)(param_1 + 0xec) + uVar5 * 0x2ec;
                iVar1 = fn_006c4988(iVar2 + 0x2b8);
                if (iVar1 == 0) {
                  fn_00388df8(iVar2 + 0x2b8,iVar2 + 0x13c);
                }
                fn_003223e4(param_1,iVar2 + 0x2b8);
                fn_0030e3b8(*(undefined4 *)(param_1 + 0xec),uVar5,*(undefined4 *)(param_1 + 0xf0));
                fn_00388ed0(*(undefined4 *)(param_1 + 0xec),uVar5,*(undefined4 *)(param_1 + 0x108))
                ;
                uVar3 = fn_006c496c(*(undefined4 *)(param_1 + 0xec),uVar5);
                uVar4 = fn_0030e2cc(*(undefined4 *)(param_1 + 0xec),uVar5);
                fn_0030e828(*(undefined4 *)(param_1 + 0xec),uVar4);
                iVar2 = *(int *)(param_1 + 0xec) + uVar5 * 0x2ec;
                iVar1 = fn_006c4988(iVar2 + 0x2b8);
                if (iVar1 == 0) {
                  fn_00388df8(iVar2 + 0x2b8,iVar2 + 0x13c);
                }
                fn_003221d0(param_1,iVar2 + 0x2b8,uVar3);
              }
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < 5);
          if (uVar6 == 0) {
            *(undefined1 *)(param_1 + 0x104) = 1;
            uVar3 = 0x1b;
          }
          else {
            uVar3 = 0x17;
          }
          *(undefined4 *)(param_1 + 0xd8) = uVar3;
          fn_0036c340(*(undefined4 *)(param_1 + 0x5c));
          *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x51) = 0;
          return;
        }
      }
      else {
        *(undefined4 *)(param_1 + 300) = 0;
      }
    }
    else {
      iVar1 = fn_006b72c0();
      if (iVar1 != 0) {
        *(undefined4 *)(param_1 + 0x100) = DAT_00895b70;
        *(undefined1 *)(param_1 + 0x104) = 1;
        *(undefined4 *)(param_1 + 0xe4) = 0x1c;
        *(undefined4 *)(param_1 + 0xd8) = 0x1a;
      }
    }
  }
  return;
}



void fn_00323fc8(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*(char *)(*(int *)(param_1 + 0x5c) + 0x31) == '\x01') {
    *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x31) = 0;
    if (param_2 != 0) {
      uVar1 = fn_0022f584(param_2);
      fn_00328be0(param_1,uVar1,param_4,1,1,0);
    }
    *(undefined4 *)(param_1 + 0xd8) = param_3;
  }
  return;
}



void fn_00323c38(int param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  char *apcStack_48 [4];
  char *pcStack_38;
  char *pcStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  bVar2 = false;
  apcStack_48[0] = "presentcodemes_Authentication";
  apcStack_48[1] = (char *)&DAT_008671c0;
  apcStack_48[2] = (char *)&DAT_008671dc;
  apcStack_48[3] = (char *)&DAT_008671c0;
  pcStack_38 = (char *)&DAT_008671c0;
  pcStack_34 = (char *)&DAT_008671dc;
  uStack_30 = 0;
  uStack_2c = 0;
  uVar15 = 5;
  uVar12 = 0;
  local_28 = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  do {
    iVar3 = fn_0030e2e0(*(undefined4 *)(param_1 + 0xec),uVar12);
    if ((iVar3 != 0) && (iVar3 = fn_006c48e0(*(undefined4 *)(param_1 + 0xec),uVar12), iVar3 == 0))
    {
      iVar13 = *(int *)(*(int *)(param_1 + 0xec) + uVar12 * 0x2ec + 0x138);
      iVar3 = fn_0030dea8(*(int *)(param_1 + 0xec),uVar12);
      if (iVar3 == 0) {
        bVar2 = true;
      }
      else {
        if (uVar15 == 5) {
          uVar15 = uVar12;
        }
        uVar4 = fn_0030e2cc(*(undefined4 *)(param_1 + 0xec),uVar12);
        fn_0016ba84(DAT_00897800,uVar4);
        uVar4 = fn_0022f584(apcStack_48[iVar13],0);
        fn_0030e3b8(*(undefined4 *)(param_1 + 0xec),uVar12,uVar4);
        *(uint *)(param_1 + *(int *)(param_1 + 0x110) * 4 + 0x114) = uVar12;
        uVar4 = fn_0030e3a4(*(undefined4 *)(param_1 + 0xec),uVar12);
        puVar14 = (uint *)(param_1 + 0x138);
        puVar5 = *(undefined4 **)(param_1 + 0x13c);
        if (puVar5 == *(undefined4 **)(param_1 + 0x140)) {
          uVar1 = (int)((int)puVar5 - *puVar14) >> 2;
          if (uVar1 < (uint)((int)((int)*(undefined4 **)(param_1 + 0x140) - *puVar14) >> 2)) {
            *(undefined4 **)(param_1 + 0x13c) = puVar5 + 1;
            if (puVar5 != (undefined4 *)0x0) {
              *puVar5 = puVar5[-1];
            }
            puVar8 = puVar5 + -1;
            puVar9 = puVar5;
            if (puVar5 < puVar8) {
              if (0 < (int)puVar8 - (int)puVar5) {
                iVar3 = (int)puVar8 - (int)puVar5 >> 2;
                iVar13 = 0;
                do {
                  iVar3 = iVar3 + -1;
                  puVar5[iVar13 + -1] = puVar8[iVar13 + -1];
                  iVar13 = iVar13 + -1;
                } while (iVar3 != 0);
              }
            }
            else {
              while (puVar5 != puVar8) {
                puVar8 = puVar8 + -1;
                puVar9[-1] = *puVar8;
                puVar9 = puVar9 + -1;
              }
            }
            *puVar5 = uVar4;
          }
          else {
            uVar7 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
            if (uVar7 < uVar1 + 0x20) {
              uVar7 = uVar1 + 0x20;
            }
            puVar6 = (undefined4 *)fn_00100fc6(uVar7 << 2,0);
            puVar9 = puVar6;
            for (puVar8 = (undefined4 *)*puVar14; puVar8 != puVar5; puVar8 = puVar8 + 1) {
              if (puVar9 != (undefined4 *)0x0) {
                *puVar9 = *puVar8;
              }
              puVar9 = puVar9 + 1;
            }
            puVar8 = (undefined4 *)((int)puVar6 + ((int)puVar5 - *puVar14 & 0xfffffffc));
            if (puVar8 != (undefined4 *)0x0) {
              *puVar8 = uVar4;
            }
            puVar9 = *(undefined4 **)(param_1 + 0x13c);
            puVar8 = (undefined4 *)((int)puVar6 + ((int)puVar5 - *puVar14 & 0xfffffffc));
            for (; puVar5 != puVar9; puVar5 = puVar5 + 1) {
              puVar8 = puVar8 + 1;
              if (puVar8 != (undefined4 *)0x0) {
                *puVar8 = *puVar5;
              }
            }
            uVar10 = *(uint *)(param_1 + 0x13c);
            uVar11 = *puVar14;
            uVar1 = uVar11;
            if (uVar10 <= uVar11) {
              for (; uVar1 != uVar10; uVar1 = uVar1 + 4) {
              }
            }
            fn_001008c4(uVar11,(int)(*(int *)(param_1 + 0x140) - uVar11) >> 2,0);
            *(undefined4 **)(param_1 + 0x140) = puVar6 + uVar7;
            *puVar14 = (uint)puVar6;
            *(undefined4 **)(param_1 + 0x13c) = puVar6 + ((int)(uVar10 - uVar11) >> 2) + 1;
          }
        }
        else {
          *(undefined4 **)(param_1 + 0x13c) = puVar5 + 1;
          if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = uVar4;
          }
        }
        *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x110) + 1;
      }
    }
    uVar12 = uVar12 + 1;
  } while (uVar12 < 5);
  *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x31) = 0;
  if (bVar2) {
    uVar4 = fn_0022f584((char *)&DAT_0032451c);
    fn_00328be0(param_1,uVar4,0,1,0,0);
    *(undefined4 *)(param_1 + 0xf4) = 0x3c;
    *(undefined1 *)(param_1 + 0xf8) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x51) = 1;
    uVar4 = 0x16;
    *(undefined4 *)(param_1 + 300) = 0;
  }
  else {
    iVar3 = fn_0030e6e4(*(undefined4 *)(param_1 + 0xec));
    if (iVar3 == 0) {
      fn_00328be0(param_1,**(undefined4 **)(param_1 + 0x138),0,1,1,0);
      *(undefined4 *)(param_1 + 0xe4) = 6;
      *(undefined4 *)(param_1 + 0xd8) = 9;
      return;
    }
    *(undefined1 *)(param_1 + 0x128) = 1;
    uVar4 = 0xb;
  }
  *(undefined4 *)(param_1 + 0xd8) = uVar4;
  return;
}



void fn_003238d4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  
  uVar12 = 0;
  do {
    iVar1 = fn_0030de48(*(undefined4 *)(param_1 + 0xec),uVar12);
    if (iVar1 != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x31) = 0;
      uVar2 = fn_0030e2cc(*(undefined4 *)(param_1 + 0xec),uVar12);
      fn_0016ba84(DAT_00897800,uVar2);
      uVar2 = fn_0022f584((char *)&DAT_00323b40,0);
      fn_0030e3b8(*(undefined4 *)(param_1 + 0xec),uVar12,uVar2);
      uVar2 = fn_0030e3a4(*(undefined4 *)(param_1 + 0xec),uVar12);
      puVar10 = *(undefined4 **)(param_1 + 0x13c);
      puVar11 = (uint *)(param_1 + 0x138);
      if (puVar10 == *(undefined4 **)(param_1 + 0x140)) {
        uVar5 = (int)((int)puVar10 - *puVar11) >> 2;
        if (uVar5 < (uint)((int)((int)*(undefined4 **)(param_1 + 0x140) - *puVar11) >> 2)) {
          *(undefined4 **)(param_1 + 0x13c) = puVar10 + 1;
          if (puVar10 != (undefined4 *)0x0) {
            *puVar10 = puVar10[-1];
          }
          puVar7 = puVar10 + -1;
          puVar8 = puVar10;
          if (puVar10 < puVar7) {
            if (0 < (int)puVar7 - (int)puVar10) {
              iVar1 = (int)puVar7 - (int)puVar10 >> 2;
              iVar6 = 0;
              do {
                iVar1 = iVar1 + -1;
                puVar10[iVar6 + -1] = puVar7[iVar6 + -1];
                iVar6 = iVar6 + -1;
              } while (iVar1 != 0);
            }
          }
          else {
            while (puVar10 != puVar7) {
              puVar7 = puVar7 + -1;
              puVar8[-1] = *puVar7;
              puVar8 = puVar8 + -1;
            }
          }
          *puVar10 = uVar2;
        }
        else {
          uVar13 = uVar5 + (uVar5 >> 1) + (uVar5 >> 3);
          if (uVar13 < uVar5 + 0x20) {
            uVar13 = uVar5 + 0x20;
          }
          puVar3 = (undefined4 *)fn_00100fc6(uVar13 << 2,0);
          puVar8 = puVar3;
          for (puVar7 = (undefined4 *)*puVar11; puVar7 != puVar10; puVar7 = puVar7 + 1) {
            if (puVar8 != (undefined4 *)0x0) {
              *puVar8 = *puVar7;
            }
            puVar8 = puVar8 + 1;
          }
          puVar7 = (undefined4 *)(((int)puVar10 - *puVar11 & 0xfffffffc) + (int)puVar3);
          if (puVar7 != (undefined4 *)0x0) {
            *puVar7 = uVar2;
          }
          puVar8 = *(undefined4 **)(param_1 + 0x13c);
          puVar7 = (undefined4 *)(((int)puVar10 - *puVar11 & 0xfffffffc) + (int)puVar3);
          for (; puVar10 != puVar8; puVar10 = puVar10 + 1) {
            puVar7 = puVar7 + 1;
            if (puVar7 != (undefined4 *)0x0) {
              *puVar7 = *puVar10;
            }
          }
          uVar4 = *puVar11;
          uVar9 = *(uint *)(param_1 + 0x13c);
          uVar5 = uVar4;
          if (uVar9 < uVar4) {
            do {
              uVar5 = uVar5 + 4;
            } while (uVar5 != uVar9);
          }
          fn_001008c4(uVar4,(int)(*(int *)(param_1 + 0x140) - uVar4) >> 2,0);
          *(undefined4 **)(param_1 + 0x140) = puVar3 + uVar13;
          *(undefined4 **)(param_1 + 0x13c) = puVar3 + ((int)(uVar9 - uVar4) >> 2) + 1;
          *puVar11 = (uint)puVar3;
        }
      }
      else {
        *(undefined4 **)(param_1 + 0x13c) = puVar10 + 1;
        if (puVar10 != (undefined4 *)0x0) {
          *puVar10 = uVar2;
        }
      }
    }
    uVar12 = uVar12 + 1;
  } while (uVar12 < 5);
  fn_00328be0(param_1,**(undefined4 **)(param_1 + 0x138),0,1,1,0);
  *(undefined4 *)(param_1 + 0xe4) = 6;
  *(undefined4 *)(param_1 + 0xd8) = 9;
  return;
}


