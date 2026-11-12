#include "002b24f4_002b2a58.h"



void fn_002b2a58(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(*(int *)(*(int *)(param_1 + 8) + 0xac) + 0x10);
  *(int **)(param_1 + 0x48) = piVar3;
  uVar1 = (**(code **)(*piVar3 + 0x2c))(piVar3,DAT_0089357c,1);
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  uVar1 = (**(code **)(*piVar3 + 0x2c))(piVar3,DAT_00893580,1);
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  uVar1 = (**(code **)(*piVar3 + 0x2c))(piVar3,DAT_00893584,1);
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  uVar1 = (**(code **)(*piVar3 + 0x2c))(piVar3,DAT_00893588,1);
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  uVar1 = (**(code **)(*piVar3 + 0x2c))(piVar3,DAT_0089358c,1);
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  uVar1 = (**(code **)(*piVar3 + 0x2c))(piVar3,DAT_00893590,1);
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  uVar1 = (**(code **)(*piVar3 + 0x2c))(piVar3,DAT_00893598,1);
  *(undefined4 *)(param_1 + 100) = uVar1;
  uVar1 = (**(code **)(*piVar3 + 0x2c))(piVar3,DAT_0089359c,1);
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  uVar1 = (**(code **)(*piVar3 + 0x2c))(piVar3,DAT_008935a4,1);
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  iVar2 = (**(code **)(*piVar3 + 0x2c))(piVar3,DAT_00893594,1);
  *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe;
  iVar2 = (**(code **)(*piVar3 + 0x2c))(piVar3,DAT_008935a0,1);
  *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe;
  uVar1 = fn_0068897c(piVar3,DAT_008935a8);
  *(undefined4 *)(param_1 + 0xb8) = uVar1;
  uVar1 = fn_0068897c(piVar3,DAT_008935ac);
  *(undefined4 *)(param_1 + 0xbc) = uVar1;
  fn_002b3dd8(param_1,0);
  fn_002b3850(param_1,param_1 + 0x78,0);
  fn_002b3850(param_1,param_1 + 0x84,1);
  fn_002b3850(param_1,param_1 + 0x90,2);
  fn_002b3850(param_1,param_1 + 0x9c,3);
  uVar1 = (**(code **)(*piVar3 + 0x2c))(piVar3,DAT_008935b0,1);
  *(undefined4 *)(param_1 + 0xcc) = uVar1;
  uVar1 = (**(code **)(*piVar3 + 0x2c))(piVar3,DAT_008935b4,1);
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  uVar1 = (**(code **)(*piVar3 + 0x2c))(piVar3,DAT_008935b8,1);
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  fn_0069e710(param_1);
  *(byte *)(*(int *)(param_1 + 0xb8) + 0x44) = *(byte *)(*(int *)(param_1 + 0xb8) + 0x44) & 0xfe;
  *(byte *)(*(int *)(param_1 + 0xbc) + 0x44) = *(byte *)(*(int *)(param_1 + 0xbc) + 0x44) & 0xfe;
  fn_002b2f5c(param_1,1);
  if (*(short *)(param_1 + 0x14) != *(short *)(param_1 + 0x16)) {
    *(short *)(param_1 + 0x14) = *(short *)(param_1 + 0x16);
  }
  if (*(char *)(param_1 + 0x18) != *(char *)(param_1 + 0x19)) {
    *(char *)(param_1 + 0x18) = *(char *)(param_1 + 0x19);
  }
  if (*(char *)(param_1 + 0x1a) != *(char *)(param_1 + 0x1b)) {
    *(char *)(param_1 + 0x1a) = *(char *)(param_1 + 0x1b);
  }
  if (*(char *)(param_1 + 0x1c) != *(char *)(param_1 + 0x1d)) {
    *(char *)(param_1 + 0x1c) = *(char *)(param_1 + 0x1d);
  }
  if (*(char *)(param_1 + 0x1e) != *(char *)(param_1 + 0x1f)) {
    *(char *)(param_1 + 0x1e) = *(char *)(param_1 + 0x1f);
  }
  if (*(char *)(param_1 + 0x26) != *(char *)(param_1 + 0x27)) {
    *(char *)(param_1 + 0x26) = *(char *)(param_1 + 0x27);
  }
  if (*(char *)(param_1 + 0x20) != *(char *)(param_1 + 0x21)) {
    *(char *)(param_1 + 0x20) = *(char *)(param_1 + 0x21);
  }
  if (*(char *)(param_1 + 0x28) != *(char *)(param_1 + 0x29)) {
    *(char *)(param_1 + 0x28) = *(char *)(param_1 + 0x29);
  }
  if (*(char *)(param_1 + 0x22) != *(char *)(param_1 + 0x23)) {
    *(char *)(param_1 + 0x22) = *(char *)(param_1 + 0x23);
  }
  if (*(char *)(param_1 + 0x24) != *(char *)(param_1 + 0x25)) {
    *(char *)(param_1 + 0x24) = *(char *)(param_1 + 0x25);
  }
  if (*(char *)(param_1 + 0x2a) != *(char *)(param_1 + 0x2b)) {
    *(char *)(param_1 + 0x2a) = *(char *)(param_1 + 0x2b);
  }
  if (*(char *)(param_1 + 0x2c) != *(char *)(param_1 + 0x2d)) {
    *(char *)(param_1 + 0x2c) = *(char *)(param_1 + 0x2d);
  }
  if (*(char *)(param_1 + 0x2e) != *(char *)(param_1 + 0x2f)) {
    *(char *)(param_1 + 0x2e) = *(char *)(param_1 + 0x2f);
  }
  if (*(char *)(param_1 + 0x30) != *(char *)(param_1 + 0x31)) {
    *(char *)(param_1 + 0x30) = *(char *)(param_1 + 0x31);
  }
  if (*(char *)(param_1 + 0x32) != *(char *)(param_1 + 0x33)) {
    *(char *)(param_1 + 0x32) = *(char *)(param_1 + 0x33);
  }
  if (*(char *)(param_1 + 0x34) != *(char *)(param_1 + 0x35)) {
    *(char *)(param_1 + 0x34) = *(char *)(param_1 + 0x35);
  }
  if (*(char *)(param_1 + 0x36) != *(char *)(param_1 + 0x37)) {
    *(char *)(param_1 + 0x36) = *(char *)(param_1 + 0x37);
  }
  if (*(char *)(param_1 + 0x38) != *(char *)(param_1 + 0x39)) {
    *(char *)(param_1 + 0x38) = *(char *)(param_1 + 0x39);
  }
  if (*(char *)(param_1 + 0x3a) != *(char *)(param_1 + 0x3b)) {
    *(char *)(param_1 + 0x3a) = *(char *)(param_1 + 0x3b);
  }
  if (*(char *)(param_1 + 0x3c) != *(char *)(param_1 + 0x3d)) {
    *(char *)(param_1 + 0x3c) = *(char *)(param_1 + 0x3d);
  }
  if (*(char *)(param_1 + 0x3e) != *(char *)(param_1 + 0x3f)) {
    *(char *)(param_1 + 0x3e) = *(char *)(param_1 + 0x3f);
  }
  if (*(char *)(param_1 + 0x40) != *(char *)(param_1 + 0x41)) {
    *(char *)(param_1 + 0x40) = *(char *)(param_1 + 0x41);
  }
  if (*(char *)(param_1 + 0x42) != *(char *)(param_1 + 0x43)) {
    *(char *)(param_1 + 0x42) = *(char *)(param_1 + 0x43);
  }
  if (*(char *)(param_1 + 0x44) != *(char *)(param_1 + 0x45)) {
    *(char *)(param_1 + 0x44) = *(char *)(param_1 + 0x45);
  }
  return;
}



void fn_002b29b4(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  
  piVar4 = (int *)param_1[5];
  *param_1 = &DAT_0081ed04;
  if ((int *)param_1[6] != piVar4) {
    do {
      if ((int *)*piVar4 != (int *)0x0) {
        (**(code **)(*(int *)*piVar4 + 4))();
      }
      piVar4 = piVar4 + 1;
    } while ((int *)param_1[6] != piVar4);
  }
  uVar1 = param_1[5];
  uVar3 = param_1[6];
  if (uVar1 != uVar3) {
    uVar2 = uVar1;
    if (uVar3 <= uVar1) {
      do {
        uVar2 = uVar2 + 4;
      } while (uVar2 != uVar3);
    }
    param_1[6] = uVar3 - (uVar3 - uVar1 & 0xfffffffc);
  }
  *param_1 = &DAT_0081d398;
  if ((int *)param_1[10] != (int *)0x0) {
    (**(code **)(*(int *)param_1[10] + 4))();
  }
  if ((int *)param_1[9] != (int *)0x0) {
    (**(code **)(*(int *)param_1[9] + 4))();
  }
  if ((int *)param_1[8] != (int *)0x0) {
    (**(code **)(*(int *)param_1[8] + 4))();
  }
  uVar3 = param_1[5];
  uVar1 = uVar3;
  if ((uint)param_1[6] <= uVar3) {
    for (; uVar1 != param_1[6]; uVar1 = uVar1 + 4) {
    }
  }
  fn_001008c4(uVar3,(int)(param_1[7] - uVar3) >> 2,0);
  fn_0069e808(param_1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x002b26ac) */
/* WARNING: Removing unreachable block (ram,0x002b26b8) */
/* WARNING: Removing unreachable block (ram,0x002b2684) */
/* WARNING: Removing unreachable block (ram,0x002b2688) */
/* WARNING: Removing unreachable block (ram,0x002b268c) */
/* WARNING: Removing unreachable block (ram,0x002b2690) */
/* WARNING: Removing unreachable block (ram,0x002b2694) */
/* WARNING: Removing unreachable block (ram,0x002b26d4) */
/* WARNING: Removing unreachable block (ram,0x002b26e4) */
/* WARNING: Removing unreachable block (ram,0x002b26bc) */
/* WARNING: Removing unreachable block (ram,0x002b26c4) */
/* WARNING: Removing unreachable block (ram,0x002b26c8) */
/* WARNING: Removing unreachable block (ram,0x002b26cc) */

undefined4 *
fn_002b24f4(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4,uint param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;
  uint *puVar15;
  int iVar16;
  uint local_68;
  uint local_64 [12];
  undefined4 uStack_34;
  undefined4 local_30;
  int *piStack_2c;
  undefined4 local_28;
  
  local_68 = param_5;
  uStack_34 = param_1;
  local_30 = param_2;
  piStack_2c = param_3;
  local_28 = param_4;
  puVar1 = (undefined4 *)fn_002430c4(param_1,param_2,param_3,param_4);
  puVar10 = (undefined4 *)&DAT_0000000a;
  *puVar1 = &DAT_0081ed04;
  puVar1[0xb] = 10;
  puVar14 = (undefined4 *)puVar1[6];
  puVar7 = (undefined4 *)puVar1[5];
  puVar15 = puVar1 + 5;
  local_68 = (int)puVar14 - (int)puVar7 >> 2;
  if (local_68 < 10) {
    iVar16 = 10 - local_68;
    if (iVar16 != 0) {
      local_68 = iVar16 + local_68;
      if ((uint)(puVar1[7] - (int)puVar7 >> 2) < local_68) {
        uVar13 = (int)(puVar1[6] - *puVar15) >> 2;
        local_64[0] = uVar13 + (uVar13 >> 1) + (uVar13 >> 3);
        if (local_64[0] < uVar13 + 0x20) {
          local_64[0] = uVar13 + 0x20;
        }
        puVar11 = local_64;
        if (local_64[0] <= local_68) {
          puVar11 = &local_68;
        }
        uVar13 = *puVar11;
        puVar3 = (undefined4 *)fn_00100fc6(uVar13 << 2,0);
        puVar7 = puVar3;
        for (puVar10 = (undefined4 *)*puVar15; puVar10 != puVar14; puVar10 = puVar10 + 1) {
          if (puVar7 != (undefined4 *)0x0) {
            *puVar7 = *puVar10;
          }
          puVar7 = puVar7 + 1;
        }
        puVar10 = (undefined4 *)(((int)puVar14 - *puVar15 & 0xfffffffc) + (int)puVar3);
        for (iVar8 = iVar16; iVar8 != 0; iVar8 = iVar8 + -1) {
          if (puVar10 != (undefined4 *)0x0) {
            *puVar10 = 0;
          }
          puVar10 = puVar10 + 1;
        }
        puVar7 = (undefined4 *)puVar1[6];
        puVar10 = puVar3 + iVar16 + ((int)((int)puVar14 - *puVar15) >> 2);
        for (; puVar14 != puVar7; puVar14 = puVar14 + 1) {
          if (puVar10 != (undefined4 *)0x0) {
            *puVar10 = *puVar14;
          }
          puVar10 = puVar10 + 1;
        }
        uVar9 = puVar1[6];
        uVar12 = *puVar15;
        uVar4 = uVar12;
        if (uVar9 < uVar12) {
          do {
            uVar4 = uVar4 + 4;
          } while (uVar4 != uVar9);
        }
        fn_001008c4(uVar12,(int)(puVar1[7] - uVar12) >> 2,0);
        puVar1[7] = puVar3 + uVar13;
        puVar1[6] = puVar3 + ((int)(uVar9 - uVar12) >> 2) + iVar16;
        *puVar15 = (uint)puVar3;
      }
      else {
        puVar10 = puVar14 + iVar16;
        puVar1[6] = puVar14 + iVar16;
        if (puVar10 < puVar14) {
          puVar2 = puVar14 + -iVar16;
          puVar3 = puVar14;
          for (puVar7 = puVar2; puVar7 != puVar14; puVar7 = puVar7 + 1) {
            if (puVar3 != (undefined4 *)0x0) {
              *puVar3 = *puVar7;
            }
            puVar3 = puVar3 + 1;
          }
          puVar7 = puVar14;
          if (puVar14 < puVar2) {
            if (0 < (int)puVar2 - (int)puVar14) {
              iVar16 = (int)puVar2 - (int)puVar14 >> 2;
              iVar8 = 0;
              do {
                iVar16 = iVar16 + -1;
                puVar14[iVar8 + -1] = puVar2[iVar8 + -1];
                iVar8 = iVar8 + -1;
              } while (iVar16 != 0);
            }
          }
          else {
            while (puVar14 != puVar2) {
              puVar2 = puVar2 + -1;
              puVar7[-1] = *puVar2;
              puVar7 = puVar7 + -1;
            }
          }
          if (puVar14 < puVar10) {
            iVar16 = (int)puVar10 - (int)puVar14;
            if (0 < iVar16) {
              puVar10 = puVar14;
              if (iVar16 * 0x20000000 < 0) {
                puVar10 = puVar14 + 1;
                *puVar14 = 0;
              }
              for (iVar16 = iVar16 >> 3; iVar16 != 0; iVar16 = iVar16 + -1) {
                puVar14 = puVar10 + 1;
                *puVar10 = 0;
                puVar10 = puVar10 + 2;
                *puVar14 = 0;
              }
            }
          }
          else {
            for (; puVar14 != puVar10; puVar14 = puVar14 + 1) {
              *puVar14 = 0;
            }
          }
        }
        else {
          for (; iVar16 != 0; iVar16 = iVar16 + -1) {
            if (puVar14 != (undefined4 *)0x0) {
              *puVar14 = 0;
            }
            puVar14 = puVar14 + 1;
          }
        }
      }
    }
  }
  else {
    if (local_68 != 10) {
      puVar10 = puVar7 + 10;
    }
    if (local_68 != 10 && puVar7 != puVar14) {
      puVar7 = puVar10;
      if (puVar14 <= puVar10) {
        for (; puVar7 != puVar14; puVar7 = puVar7 + 1) {
        }
      }
      puVar1[6] = (int)puVar14 - ((int)puVar14 - (int)puVar10 & 0xfffffffcU);
    }
  }
  uVar13 = 0;
  do {
    local_64[1] = 0;
    local_64[2] = 0;
    local_64[3] = 0;
    local_64[4] = 0;
    local_64[5] = 0;
    local_64[6] = 0;
    local_64[7] = 0;
    local_64[8] = 0;
    local_68 = uVar13;
    fn_0017d96c(local_64 + 1,0x20,0x1f,(char *)&DAT_002b298c);
    piVar5 = (int *)(**(code **)(*param_3 + 0x2c))(param_3,local_64 + 1,1);
    if (piVar5 != (int *)0x0) {
      puVar10 = (undefined4 *)(**(code **)(*piVar5 + 8))(piVar5);
      do {
        if (puVar10 == &DAT_0089a928) goto LAB_002b28ec;
        puVar10 = (undefined4 *)*puVar10;
      } while (puVar10 != (undefined4 *)0x0);
    }
    piVar5 = (int *)0x0;
LAB_002b28ec:
    iVar16 = fn_00145b00(0x2c,&DAT_00812c8c);
    piVar6 = (int *)0x0;
    if (iVar16 != 0) {
      local_68 = puVar1[4];
      piVar6 = (int *)fn_0031d050(iVar16,local_30,piVar5,local_28);
    }
    (**(code **)(*piVar6 + 0x10))(piVar6);
    local_68 = (int)(puVar1[6] - puVar1[5]) >> 2;
    if (local_68 <= uVar13) {
      fn_002ff628(9,&DAT_008c764f,&DAT_008c764f,uVar13);
    }
    *(int **)(puVar1[5] + uVar13 * 4) = piVar6;
    uVar13 = uVar13 + 1;
    if (9 < (int)uVar13) {
      return puVar1;
    }
  } while( true );
}


