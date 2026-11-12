#include "00240fe8_00241510.h"



int fn_00241510(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined4 *)fn_00117720(param_1,&DAT_00241598);
  *puVar1 = &PTR_FUN_0081d30c;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  iVar2 = fn_0044eebc(puVar1 + 0xc);
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  *(undefined4 *)(iVar2 + 0x34) = 0;
  *(undefined4 *)(iVar2 + 0x38) = 0;
  *(undefined4 *)(iVar2 + 0x3c) = 0;
  *(undefined4 *)(iVar2 + 0x40) = 0;
  fn_002411a0(iVar2 + -0x30);
  iVar3 = fn_00145b00(4,&DAT_00812c8c);
  uVar4 = 0;
  if (iVar3 != 0) {
    uVar4 = fn_0010c67c(iVar3,param_2,0x10);
  }
  *(undefined4 *)(iVar2 + -0x10) = uVar4;
  *(undefined1 *)(iVar2 + 0x45) = 1;
  return iVar2 + -0x30;
}



int fn_002414a4(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_00117720(param_1,&DAT_00241508);
  *puVar1 = &PTR_FUN_0081d30c;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  iVar2 = fn_0044eebc(puVar1 + 0xc);
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  *(undefined4 *)(iVar2 + 0x34) = 0;
  *(undefined4 *)(iVar2 + 0x38) = 0;
  *(undefined4 *)(iVar2 + 0x3c) = 0;
  *(undefined4 *)(iVar2 + 0x40) = 0;
  fn_002411a0(iVar2 + -0x30);
  *(undefined4 *)(iVar2 + -0x10) = param_2;
  *(undefined1 *)(iVar2 + 0x45) = 0;
  return iVar2 + -0x30;
}



void fn_0024146c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = fn_00176d68(param_2);
  fn_001969a4(*(undefined4 *)(param_1 + 0x24),uVar1);
  *(undefined4 *)(param_1 + 0x48) = param_2;
  uVar1 = fn_00176d68(param_2);
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  return;
}



void fn_002411a0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  uint *puVar10;
  int *piVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  uint *puVar15;
  uint uVar16;
  undefined4 uVar17;
  uint local_80;
  uint local_7c;
  uint uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined1 auStack_5c [20];
  undefined1 auStack_48 [12];
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [12];
  
  puVar1 = (undefined4 *)fn_00123600(auStack_5c,0);
  uVar9 = puVar1[1];
  uVar12 = puVar1[2];
  uVar14 = puVar1[3];
  uVar17 = puVar1[4];
  *(undefined4 *)(param_1 + 0x30) = *puVar1;
  *(undefined4 *)(param_1 + 0x34) = uVar9;
  *(undefined4 *)(param_1 + 0x38) = uVar12;
  *(undefined4 *)(param_1 + 0x3c) = uVar14;
  *(undefined4 *)(param_1 + 0x40) = uVar17;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(int **)(param_1 + 0x4c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x4c) + 4))();
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined1 *)(param_1 + 0x74) = 0;
  *(undefined1 *)(param_1 + 0x75) = 0;
  *(undefined1 *)(param_1 + 0x76) = 1;
  *(undefined1 *)(param_1 + 0x77) = 0;
  local_80 = 0x1e;
  puVar15 = (uint *)(param_1 + 0x68);
  if ((uint)(*(int *)(param_1 + 0x70) - *(int *)(param_1 + 0x68) >> 2) < 0x1e) {
    uVar16 = *(int *)(param_1 + 0x6c) - *(int *)(param_1 + 0x68) >> 2;
    local_7c = uVar16 + (uVar16 >> 1) + (uVar16 >> 3);
    if (local_7c < uVar16 + 0x20) {
      local_7c = uVar16 + 0x20;
    }
    puVar10 = &local_7c;
    if (local_7c < 0x1f) {
      puVar10 = &local_80;
    }
    uVar16 = *puVar10;
    puVar2 = (undefined4 *)fn_00100fc6(uVar16 << 2,0);
    puVar13 = *(undefined4 **)(param_1 + 0x6c);
    puVar8 = puVar2;
    for (puVar1 = (undefined4 *)*puVar15; puVar1 != puVar13; puVar1 = puVar1 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar1;
      }
      puVar8 = puVar8 + 1;
    }
    uVar3 = *puVar15;
    uVar4 = uVar3;
    if (*(uint *)(param_1 + 0x6c) < uVar3) {
      do {
        uVar4 = uVar4 + 4;
      } while (uVar4 != *(uint *)(param_1 + 0x6c));
    }
    fn_001008c4(uVar3,(int)(*(int *)(param_1 + 0x70) - uVar3) >> 2,0);
    uVar4 = *puVar15;
    *(undefined4 **)(param_1 + 0x68) = puVar2;
    *(int *)(param_1 + 0x6c) = (*(int *)(param_1 + 0x6c) - uVar4 & 0xfffffffc) + (int)puVar2;
    *(undefined4 **)(param_1 + 0x70) = puVar2 + uVar16;
  }
  iVar5 = fn_00145b00(8,&DAT_00812c8c);
  piVar6 = (int *)0x0;
  if (iVar5 != 0) {
    piVar6 = (int *)fn_005ecfe4(iVar5,0x200,0x100);
  }
  piVar11 = *(int **)(param_1 + 0x24);
  if (piVar11 != piVar6) {
    if (piVar11 != (int *)0x0) {
      (**(code **)(*piVar11 + 4))(piVar11);
    }
    *(int **)(param_1 + 0x24) = piVar6;
  }
  iVar7 = fn_00145b00(0x18,&DAT_00812c8c);
  iVar5 = 0;
  if (iVar7 != 0) {
    iVar5 = fn_001ccea8();
  }
  iVar7 = *(int *)(param_1 + 0x28);
  if (iVar7 != iVar5) {
    if (iVar7 != 0) {
      fn_001cd614(iVar7);
      fn_002feef8();
    }
    *(int *)(param_1 + 0x28) = iVar5;
  }
  iVar5 = fn_00145b00(4,&DAT_00812c8c);
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    puVar1 = (undefined4 *)fn_005e3590(auStack_24,1);
    puVar8 = (undefined4 *)fn_005e3590(auStack_30,1);
    uVar9 = fn_006a8b3c(*(undefined4 *)(param_1 + 0x28),0);
    puVar15 = (uint *)fn_005e35a0(auStack_3c,uVar9,0);
    puVar2 = (undefined4 *)fn_005e3590(auStack_48,4);
    local_68 = *puVar1;
    uStack_64 = puVar1[1];
    uStack_60 = puVar1[2];
    local_74 = *puVar8;
    uStack_70 = puVar8[1];
    uStack_6c = puVar8[2];
    local_80 = *puVar15;
    local_7c = puVar15[1];
    uStack_78 = puVar15[2];
    iVar5 = fn_005e3e48(iVar5,*puVar2,puVar2[1],puVar2[2]);
  }
  if (*(int *)(param_1 + 0x2c) != iVar5) {
    if (*(int *)(param_1 + 0x2c) != 0) {
      fn_005e40b4();
      fn_002feef8();
    }
    *(int *)(param_1 + 0x2c) = iVar5;
  }
  return;
}



void fn_00241154(int *param_1)

{
  int iVar1;
  int *unaff_r4;
  
  fn_006dc7b8(param_1[9]);
  (**(code **)(*param_1 + 0x18))(param_1);
  iVar1 = fn_001f828c();
  if (iVar1 != 0) {
    unaff_r4 = (int *)param_1[0x1a];
    param_1 = (int *)param_1[0x1b];
  }
  if (iVar1 != 0 && unaff_r4 != param_1) {
    do {
      fn_00661fb4(*unaff_r4);
      unaff_r4 = unaff_r4 + 1;
    } while (unaff_r4 != param_1);
  }
  return;
}



void fn_00240fe8(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  
  piVar4 = *(int **)(param_1 + 0x68);
  piVar9 = *(int **)(param_1 + 0x6c);
  while( true ) {
    if (piVar4 != piVar9) {
      param_3 = *piVar4;
    }
    if (piVar4 == piVar9 || param_3 == param_2) break;
    piVar4 = piVar4 + 1;
  }
  if (piVar4 != piVar9) {
    piVar8 = piVar4 + 1;
    if (piVar8 < piVar9) {
      iVar5 = (int)piVar9 - (int)piVar8;
      if (0 < iVar5) {
        piVar9 = piVar4;
        if (iVar5 * 0x20000000 < 0) {
          iVar6 = *piVar8;
          piVar8 = piVar4 + 2;
          if (iVar6 != param_2) {
            piVar9 = piVar4 + 1;
            *piVar4 = iVar6;
          }
        }
        piVar4 = piVar9;
        for (iVar5 = iVar5 >> 3; iVar5 != 0; iVar5 = iVar5 + -1) {
          piVar9 = piVar4;
          if (*piVar8 != param_2) {
            piVar9 = piVar4 + 1;
            *piVar4 = *piVar8;
          }
          piVar2 = piVar8 + 1;
          piVar8 = piVar8 + 2;
          piVar4 = piVar9;
          if (*piVar2 != param_2) {
            piVar4 = piVar9 + 1;
            *piVar9 = *piVar2;
          }
        }
      }
    }
    else {
      while (piVar8 != piVar9) {
        iVar5 = *piVar8;
        piVar8 = piVar8 + 1;
        if (iVar5 != param_2) {
          *piVar4 = iVar5;
          piVar4 = piVar4 + 1;
        }
      }
    }
  }
  piVar8 = *(int **)(param_1 + 0x6c);
  piVar9 = *(int **)(param_1 + 0x6c);
  if (*(int **)(param_1 + 0x68) != piVar9) {
    piVar2 = piVar8;
    piVar3 = piVar4;
    if (piVar8 < piVar9) {
      uVar7 = (int)piVar9 - (int)piVar8;
      if (0 < (int)uVar7) {
        uVar1 = (uVar7 & 7) >> 2;
        if (uVar1 != 0) {
          *piVar4 = *piVar8;
        }
        uVar10 = (uint)(uVar1 != 0);
        for (; (int)uVar1 < (int)uVar7 >> 2; uVar1 = uVar1 + 2) {
          piVar4[uVar10] = piVar8[uVar10];
          piVar4[uVar10 + 1] = piVar8[uVar10 + 1];
          uVar10 = uVar10 + 2;
        }
        piVar3 = (int *)((uVar7 & 0xfffffffc) + (int)piVar4);
      }
    }
    else {
      for (; piVar2 != piVar9; piVar2 = piVar2 + 1) {
        *piVar3 = *piVar2;
        piVar3 = piVar3 + 1;
      }
    }
    piVar9 = *(int **)(param_1 + 0x6c);
    if (piVar9 < piVar3) {
      do {
        piVar3 = piVar3 + 1;
      } while (piVar3 != piVar9);
    }
    *(uint *)(param_1 + 0x6c) = (int)piVar9 - ((int)piVar8 - (int)piVar4 & 0xfffffffcU);
  }
  return;
}


