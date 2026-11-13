#include "004684e8_0046de90.h"



void fn_0046de90(void)

{
  int iVar1;
  int *piVar2;
  undefined1 auStack_20 [4];
  undefined4 local_1c;
  undefined1 auStack_18 [4];
  undefined4 local_14;
  
  do {
    piVar2 = (int *)**(int **)(DAT_008bad58 + 0x10);
    if (piVar2 == *(int **)(DAT_008bad58 + 0x10)) {
      return;
    }
    (**(code **)(*(int *)piVar2[2] + 0xc))(auStack_20);
    for (piVar2 = (int *)**(undefined4 **)(DAT_008bad58 + 0x10);
        piVar2 != *(int **)(DAT_008bad58 + 0x10); piVar2 = (int *)*piVar2) {
      (**(code **)(*(int *)piVar2[2] + 0xc))(auStack_18);
      iVar1 = fn_004b626c(local_14,local_1c);
      fn_00170f54(auStack_18);
      if (iVar1 != 0) {
        if ((int *)piVar2[2] != (int *)0x0) {
          (**(code **)(*(int *)piVar2[2] + 4))();
        }
        iVar1 = DAT_008bad58;
        if (piVar2 != *(int **)(DAT_008bad58 + 0x10)) {
          *(int *)piVar2[1] = *piVar2;
          *(int *)(*piVar2 + 4) = piVar2[1];
          *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + -1;
          *piVar2 = *(int *)(iVar1 + 4);
          *(int **)(iVar1 + 4) = piVar2;
        }
        break;
      }
    }
    fn_00170f54(auStack_20);
  } while( true );
}



undefined4
fn_0046cbbc(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined *local_48;
  code *local_44;
  undefined4 uStack_40;
  undefined *local_3c;
  undefined1 auStack_38 [24];
  
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  uVar8 = 0;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  iVar2 = fn_00455e10(param_2);
  if (iVar2 == 0) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
    return 0;
  }
  iVar2 = fn_0015ecdc(0x1a0);
  if (iVar2 == 0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    uVar9 = *(undefined4 *)(param_2 + 0x44);
    puVar7 = (undefined4 *)fn_00479cd8(iVar2,2,auStack_38);
    *puVar7 = &DAT_00855400;
    iVar2 = fn_004565fc(puVar7 + 0x1e);
    iVar2 = fn_004b3294(iVar2 + 0x60);
    *(undefined4 *)(iVar2 + 0x24) = param_7;
    iVar2 = fn_0048cc04(iVar2 + 0x28,0);
    puVar4 = (undefined4 *)fn_0014f1e0(iVar2 + 0x78);
    *puVar4 = &DAT_00855a18;
    uVar5 = fn_0014f470();
    fn_0014f440(puVar4,uVar5,0);
    puVar7 = puVar4 + -0x5e;
    puVar4[-0x44] = uVar9;
    puVar4[-0x43] = param_1;
    puVar4[-0x21] = param_5;
    puVar4[-0x20] = param_6;
    puVar4[8] = param_3;
    iVar2 = fn_002febd8(param_4);
    piVar6 = (int *)fn_0015ece0(iVar2 + 5);
    *piVar6 = iVar2 + 1;
    puVar4[-0x22] = piVar6 + 1;
    fn_002fec40(piVar6 + 1,param_4);
    local_44 = fn_004a9c04;
    uStack_40 = 0;
    local_3c = &DAT_007dde00;
    local_48 = &DAT_00853500;
    fn_00479c98(puVar7,&local_48);
  }
  iVar2 = fn_001249d0();
  if (iVar2 != 0) {
    uVar8 = *(undefined4 *)(iVar2 + 0xc);
  }
  fn_004bdba4(uVar8,puVar7,0);
  (**(code **)(*piVar3 + 0xc))(piVar3);
  return 1;
}



void fn_0046beb4(int param_1,undefined2 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(char *)(param_1 + 0x1d) = (char)param_1;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  piVar1 = (int *)fn_0015ece0(0xc);
  iVar2 = fn_0015ece0(0x380);
  piVar1[2] = iVar2;
  *piVar1 = *(int *)(param_1 + 4);
  piVar1[1] = 0x20;
  *(int *)(param_1 + 4) = (int)piVar1;
  iVar2 = piVar1[2];
  *(int *)(param_1 + 0xc) = iVar2;
  *(int *)(param_1 + 0x10) = iVar2 + 0x380;
  puVar3 = *(undefined1 **)(param_1 + 0xc);
  *(undefined1 **)(param_1 + 0xc) = puVar3 + 0x1c;
  *(undefined4 *)(puVar3 + 8) = 0;
  *(undefined4 *)(puVar3 + 0xc) = 0;
  *puVar3 = 0;
  *(undefined1 **)(param_1 + 0x14) = puVar3;
  *(undefined4 *)(puVar3 + 4) = 0;
  *(int *)(*(int *)(param_1 + 0x14) + 8) = *(int *)(param_1 + 0x14);
  *(int *)(*(int *)(param_1 + 0x14) + 0xc) = *(int *)(param_1 + 0x14);
  *(undefined **)(param_1 + 0x24) = &DAT_00853688;
  *(undefined2 *)(param_1 + 0x28) = 0;
  *(undefined **)(param_1 + 0x2c) = &DAT_00853688;
  *(undefined2 *)(param_1 + 0x30) = 0;
  *(undefined **)(param_1 + 0x34) = &DAT_00853688;
  *(undefined2 *)(param_1 + 0x38) = 0;
  iVar2 = fn_004745d8(param_1 + 0x44,0x20000000);
  *(undefined2 *)(iVar2 + -0x24) = param_2;
  *(undefined2 *)(iVar2 + -0x1c) = 1;
  *(undefined2 *)(iVar2 + -0x14) = 1;
  *(undefined2 *)(iVar2 + -0xc) = 1;
  *(undefined4 *)(iVar2 + -4) = param_3;
  *(undefined4 *)(iVar2 + -8) = 0;
  return;
}



void fn_004699ec(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  code *pcVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  undefined4 local_20;
  int local_1c;
  undefined1 auStack_18 [8];
  
  iVar11 = 0;
  *param_1 = &PTR_FUN_00852f04;
  do {
    piVar1 = *(int **)(param_1[0x41] + iVar11 * 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    iVar11 = iVar11 + 1;
  } while (iVar11 < 4);
  iVar11 = param_1[0x40];
  if (iVar11 != 0) {
    piVar1 = (int *)(iVar11 + 4);
    iVar2 = *(int *)(iVar11 + 0x14);
    if (iVar2 != 0) {
      local_20 = *(undefined4 *)(iVar2 + 8);
      local_1c = iVar2;
      fn_00764660(auStack_18,piVar1,&local_20,&local_1c);
      iVar2 = *(int *)(iVar11 + 0x14);
      *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar11 + 8);
      *(int *)(iVar11 + 8) = iVar2;
      piVar3 = (int *)*piVar1;
      while (piVar3 != (int *)0x0) {
        *piVar1 = *piVar3;
        if (piVar3[2] != 0) {
          pcVar8 = *(code **)(piVar3[2] + -8);
          if (pcVar8 == (code *)0x0) {
            fn_0030233c();
          }
          else {
            (*pcVar8)();
          }
        }
        if (piVar3 != (int *)0x0) {
          if ((code *)piVar3[-2] == (code *)0x0) {
            fn_0030233c(piVar3 + -2);
          }
          else {
            (*(code *)piVar3[-2])();
          }
        }
        piVar3 = (int *)*piVar1;
      }
    }
    if (iVar11 != 0) {
      if (*(code **)(iVar11 + -8) == (code *)0x0) {
        fn_0030233c();
      }
      else {
        (**(code **)(iVar11 + -8))();
      }
    }
  }
  uVar12 = fn_00170f54(param_1 + 0x4c);
  uVar9 = (uint)((ulonglong)uVar12 >> 0x20);
  iVar11 = (int)uVar12;
  uVar4 = *(uint *)(iVar11 + -0x2c);
  uVar10 = *(uint *)(iVar11 + -0x28);
  if (uVar4 < uVar10) {
    uVar9 = uVar10 - uVar4;
  }
  if (uVar4 < uVar10) {
    uVar9 = uVar9 << 0x1d;
  }
  if (uVar4 < uVar10) {
    uVar9 = uVar9 >> 0x1f;
  }
  else {
    uVar9 = 0;
  }
  iVar2 = uVar9 + 1;
  if (iVar2 < ((int)(uVar10 - uVar4) >> 2) + 1) {
    do {
      iVar2 = iVar2 + 2;
    } while (iVar2 < ((int)(uVar10 - uVar4) >> 2) + 1);
  }
  if (uVar4 != 0) {
    if (*(code **)(uVar4 - 8) == (code *)0x0) {
      fn_0030233c();
    }
    else {
      (**(code **)(uVar4 - 8))();
    }
  }
  *(undefined **)(iVar11 + -100) = &DAT_00852db4;
  iVar11 = fn_00170f54(iVar11 + -0x54);
  iVar11 = fn_00170f54(iVar11 + -0xc);
  piVar1 = *(int **)(iVar11 + -0xc);
  piVar3 = (int *)(iVar11 + -0x1c);
  if (piVar1 != (int *)0x0) {
    piVar6 = (int *)*piVar1;
    while (piVar5 = piVar6, piVar5 != piVar1) {
      piVar6 = *(int **)(iVar11 + -0xc);
      if (piVar5 != *(int **)(iVar11 + -0xc)) {
        piVar6 = (int *)*piVar5;
        *(int *)piVar5[1] = *piVar5;
        *(int *)(*piVar5 + 4) = piVar5[1];
        *(int *)(iVar11 + -8) = *(int *)(iVar11 + -8) + -1;
        *piVar5 = *(int *)(iVar11 + -0x18);
        *(int **)(iVar11 + -0x18) = piVar5;
      }
    }
    puVar7 = *(undefined4 **)(iVar11 + -0xc);
    *puVar7 = *(undefined4 *)(iVar11 + -0x18);
    *(undefined4 **)(iVar11 + -0x18) = puVar7;
    piVar1 = (int *)*piVar3;
    while (piVar1 != (int *)0x0) {
      *piVar3 = *piVar1;
      if (piVar1[2] != 0) {
        pcVar8 = *(code **)(piVar1[2] + -8);
        if (pcVar8 == (code *)0x0) {
          fn_0030233c();
        }
        else {
          (*pcVar8)();
        }
      }
      if (piVar1 != (int *)0x0) {
        if ((code *)piVar1[-2] == (code *)0x0) {
          fn_0030233c(piVar1 + -2);
        }
        else {
          (*(code *)piVar1[-2])();
        }
      }
      piVar1 = (int *)*piVar3;
    }
    *(undefined4 *)(iVar11 + -0x18) = 0;
    *(undefined4 *)(iVar11 + -0x14) = 0;
    *(undefined4 *)(iVar11 + -0x10) = 0;
  }
  iVar11 = fn_00495f88(iVar11 + -0x3c);
  *(undefined ***)(iVar11 + -0x68) = &PTR_LAB_008533fc;
  *(undefined **)(iVar11 + -100) = &DAT_0085319c;
  *(undefined ***)(iVar11 + -0x90) = &PTR_LAB_008533fc;
  *(undefined **)(iVar11 + -0x8c) = &DAT_0085319c;
  return;
}



int fn_004684e8(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  
  *param_1 = &DAT_00852e70;
  piVar1 = (int *)(uint)*(byte *)(param_1 + 1);
  bVar3 = piVar1 != (int *)0x3;
  if (bVar3) {
    piVar1 = (int *)param_1[0xf];
  }
  if (bVar3 && piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
    *(undefined1 *)(param_1 + 1) = 3;
  }
  param_1[0x40] = &DAT_008529d4;
  fn_00459c64(param_1 + 0x40);
  iVar2 = fn_00754778(param_1 + 0x41);
  iVar2 = fn_0074a944(iVar2 + -0x34);
  *(undefined **)(iVar2 + -0x28) = &DAT_00852d4c;
  iVar2 = fn_0074a944();
  iVar2 = fn_0074a944(iVar2 + -0x30);
  *(undefined **)(iVar2 + -0x28) = &DAT_00852d4c;
  iVar2 = fn_0074a944();
  *(undefined **)(iVar2 + -0x50) = &DAT_00855a58;
  piVar1 = (int *)(uint)*(byte *)(iVar2 + -0x4c);
  bVar3 = piVar1 != (int *)0x3;
  if (bVar3) {
    piVar1 = *(int **)(iVar2 + -0x14);
  }
  if (bVar3 && piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
    *(undefined1 *)(iVar2 + -0x4c) = 3;
  }
  if (DAT_008b6504 != (int *)0x0) {
    (**(code **)(*DAT_008b6504 + 0xc))(DAT_008b6504,*(undefined4 *)(iVar2 + -0x14));
  }
  return iVar2 + -0x50;
}


