#include "0048ab7c_0048fad0.h"



void fn_0048fad0(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  code *pcVar5;
  int *piVar6;
  int *piVar7;
  
  *param_1 = &DAT_00854078;
  fn_0048f7e8(param_1);
  piVar7 = param_1 + 8;
  piVar6 = (int *)param_1[0xc];
  if (piVar6 != (int *)0x0) {
    piVar2 = (int *)*piVar6;
    while (piVar1 = piVar2, piVar1 != piVar6) {
      piVar2 = (int *)param_1[0xc];
      if (piVar1 != (int *)param_1[0xc]) {
        piVar2 = (int *)*piVar1;
        *(int *)piVar1[1] = *piVar1;
        *(int *)(*piVar1 + 4) = piVar1[1];
        param_1[0xd] = param_1[0xd] + -1;
        *piVar1 = param_1[9];
        param_1[9] = piVar1;
      }
    }
    puVar3 = (undefined4 *)param_1[0xc];
    *puVar3 = param_1[9];
    param_1[9] = puVar3;
    piVar6 = (int *)*piVar7;
    while (piVar6 != (int *)0x0) {
      *piVar7 = *piVar6;
      if (piVar6[2] != 0) {
        pcVar5 = *(code **)(piVar6[2] + -8);
        if (pcVar5 == (code *)0x0) {
          fn_0030233c();
        }
        else {
          (*pcVar5)();
        }
      }
      if (piVar6 != (int *)0x0) {
        if ((code *)piVar6[-2] == (code *)0x0) {
          fn_0030233c(piVar6 + -2);
        }
        else {
          (*(code *)piVar6[-2])();
        }
      }
      piVar6 = (int *)*piVar7;
    }
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
  }
  *param_1 = &DAT_0085355c;
  if (param_1[7] != 0) {
    param_1[7] = 0;
  }
  iVar4 = fn_00170f54(param_1 + 3);
  *(undefined **)(iVar4 + -0xc) = &DAT_00853740;
  *(undefined4 *)(iVar4 + -8) = 0;
  return;
}



void fn_0048cc74(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint *puVar4;
  bool bVar5;
  
  *param_1 = &DAT_00853b6c;
  if (*(char *)(param_1 + 4) == '\x01') {
    iVar1 = fn_001249d0();
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(iVar1 + 0xc);
    }
    piVar2 = (int *)(iVar1 + 0x50);
    (**(code **)(*piVar2 + 8))();
    if (*(char *)(param_1 + 4) == '\x01') {
      fn_00456510(param_1,4);
    }
    (**(code **)(*piVar2 + 0xc))(piVar2);
  }
  piVar2 = (int *)param_1[0x1d];
  if (piVar2 != (int *)0x0) {
    puVar4 = (uint *)(piVar2 + 1);
    do {
      uVar3 = *puVar4 - 1;
      bVar5 = (bool)hasExclusiveAccess(puVar4);
    } while (!bVar5);
    *puVar4 = uVar3;
    bVar5 = uVar3 == 0;
    if (bVar5) {
      uVar3 = (uint)*(byte *)(piVar2 + 2);
    }
    if (bVar5 && uVar3 == 0) {
      *(undefined1 *)(piVar2 + 2) = 1;
      (**(code **)(*piVar2 + 4))(piVar2);
    }
    param_1[0x1d] = 0;
  }
  if (0 < (int)(param_1[0x19] - param_1[0x18]) >> 2) {
    for (iVar1 = (int)(param_1[0x19] - param_1[0x18]) >> 3; iVar1 != 0; iVar1 = iVar1 + -1) {
    }
  }
  fn_0014f1bc();
  fn_00456728(param_1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x004b49e4) */
/* WARNING: Removing unreachable block (ram,0x004b49f4) */
/* WARNING: Removing unreachable block (ram,0x004b4a0c) */

void fn_0048bd0c(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uStack_20;
  int iStack_1c;
  undefined1 auStack_18 [12];
  
  iVar1 = fn_004b7748();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x90);
  }
  piVar4 = (int *)0x0;
  if (iVar1 == 0 || iVar2 == 0) {
    return;
  }
  iVar2 = fn_004b7748();
  if (iVar2 != 0) {
    piVar4 = *(int **)(iVar2 + 0x90);
  }
  iVar2 = (**(code **)(*piVar4 + 0x2c))(piVar4);
  *(undefined1 *)(iVar2 + 8) = 0;
  if (*(char *)(iVar2 + 9) == '\0') {
    return;
  }
  iVar1 = *(int *)(*(int *)(iVar2 + 4) + 8);
  if (iVar1 != 0) {
    iVar1 = fn_0049599c(iVar1 + 0x94,*(undefined1 *)(*(int *)(iVar2 + 4) + 4),0xf);
    *(bool *)(iVar2 + 9) = iVar1 == 0;
  }
  iVar1 = fn_001249d0();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + 0xc);
  }
  piVar4 = (int *)(iVar1 + 0x50);
  (**(code **)(*piVar4 + 8))();
  iStack_1c = *(int *)(*(int *)(iVar2 + 4) + 0x24);
  uStack_20 = *(undefined4 *)(iStack_1c + 8);
  fn_007654a4(auStack_18,*(int *)(iVar2 + 4) + 0x14,&uStack_20,&iStack_1c);
  *(undefined4 *)(*(int *)(iVar2 + 4) + 0x44) = 0xffffffff;
  *(undefined4 *)(*(int *)(iVar2 + 4) + 0x40) = 0xffffffff;
  iVar2 = fn_004b7748();
  if (iVar2 != 0) {
    iVar2 = fn_004b7748();
    if (*(int *)(iVar2 + 0x100) != 0) {
      iVar2 = fn_004b7748();
      iVar2 = *(int *)(iVar2 + 0x100);
      uVar3 = fn_004b6318(&uStack_20,&DAT_004b4b5c);
      fn_00170fa4(iVar2 + 0x110,uVar3);
      fn_00170f54(&uStack_20);
      iVar2 = fn_004b7748();
      *(undefined2 *)(*(int *)(iVar2 + 0x100) + 0x118) = 0;
    }
    iVar2 = fn_004b7748();
    if (iVar2 != -0x104) {
      iVar2 = fn_004b7748();
      *(undefined4 *)(*(int *)(iVar2 + 0x114) + 8) = 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x004b4b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar4 + 0xc))(piVar4);
  return;
}



void fn_0048ab7c(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  int *piVar6;
  int iVar7;
  int local_40;
  undefined4 local_3c;
  undefined1 auStack_38 [4];
  undefined1 *puStack_34;
  undefined *puStack_30;
  undefined4 local_2c;
  int local_24;
  undefined1 auStack_20 [8];
  
  *param_1 = &DAT_00853a60;
  if (DAT_008b6384 == '\0') {
    iVar2 = *(int *)(param_1[0xc] + 8);
    while (iVar2 != param_1[0xc]) {
      iVar1 = *(int *)(iVar2 + 0xc);
      if (*(int *)(iVar2 + 0xc) == 0) {
        iVar1 = *(int *)(iVar2 + 4);
        iVar4 = iVar2;
        if (iVar2 == *(int *)(iVar1 + 0xc)) {
          do {
            iVar4 = iVar1;
            iVar1 = *(int *)(iVar4 + 4);
          } while (iVar4 == *(int *)(iVar1 + 0xc));
        }
        if (*(int *)(iVar4 + 0xc) != iVar1) {
          iVar4 = iVar1;
        }
      }
      else {
        do {
          iVar4 = iVar1;
          iVar1 = *(int *)(iVar4 + 8);
        } while (*(int *)(iVar4 + 8) != 0);
      }
      local_2c = 0x6a;
      puStack_34 = &DAT_80010001;
      puStack_30 = &DAT_007dba44;
      fn_00455e8c(*(undefined4 *)(iVar2 + 0x14),4,&puStack_34,1);
      iVar2 = iVar4;
    }
  }
  iVar2 = param_1[0x13];
  piVar6 = param_1 + 0xf;
  if (iVar2 != 0) {
    local_3c = *(undefined4 *)(iVar2 + 8);
    local_40 = iVar2;
    fn_0077ba40(auStack_38,piVar6,&local_3c,&local_40);
    iVar2 = param_1[0x13];
    *(undefined4 *)(iVar2 + 0xc) = param_1[0x10];
    param_1[0x10] = iVar2;
    piVar3 = (int *)*piVar6;
    while (piVar3 != (int *)0x0) {
      *piVar6 = *piVar3;
      if (piVar3[2] != 0) {
        pcVar5 = *(code **)(piVar3[2] + -8);
        if (pcVar5 == (code *)0x0) {
          fn_0030233c();
        }
        else {
          (*pcVar5)();
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
      piVar3 = (int *)*piVar6;
    }
  }
  iVar2 = param_1[0xc];
  piVar6 = param_1 + 8;
  if (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    if (param_1[0xd] == 0) {
      while (iVar1 != iVar2) {
        iVar4 = *(int *)(iVar1 + 0xc);
        if (*(int *)(iVar1 + 0xc) == 0) {
          iVar4 = *(int *)(iVar1 + 4);
          iVar7 = iVar1;
          if (iVar1 == *(int *)(iVar4 + 0xc)) {
            do {
              iVar7 = iVar4;
              iVar4 = *(int *)(iVar7 + 4);
            } while (iVar7 == *(int *)(iVar4 + 0xc));
          }
          if (*(int *)(iVar7 + 0xc) != iVar4) {
            iVar7 = iVar4;
          }
        }
        else {
          do {
            iVar7 = iVar4;
            iVar4 = *(int *)(iVar7 + 8);
          } while (*(int *)(iVar7 + 8) != 0);
        }
        local_24 = iVar1;
        fn_0077700c(auStack_20,piVar6,&local_24);
        iVar1 = iVar7;
      }
    }
    else {
      iVar2 = *(int *)(iVar2 + 4);
      while (iVar2 != 0) {
        fn_0077766c(piVar6,*(undefined4 *)(iVar2 + 0xc));
        iVar1 = *(int *)(iVar2 + 8);
        *(undefined4 *)(iVar2 + 0xc) = param_1[9];
        param_1[9] = iVar2;
        iVar2 = iVar1;
      }
      *(undefined4 *)(param_1[0xc] + 8) = param_1[0xc];
      *(undefined4 *)(param_1[0xc] + 4) = 0;
      *(undefined4 *)(param_1[0xc] + 0xc) = param_1[0xc];
      param_1[0xd] = 0;
    }
    iVar2 = param_1[0xc];
    *(undefined4 *)(iVar2 + 0xc) = param_1[9];
    param_1[9] = iVar2;
    piVar3 = (int *)*piVar6;
    while (piVar3 != (int *)0x0) {
      *piVar6 = *piVar3;
      if (piVar3[2] != 0) {
        pcVar5 = *(code **)(piVar3[2] + -8);
        if (pcVar5 == (code *)0x0) {
          fn_0030233c();
        }
        else {
          (*pcVar5)();
        }
      }
      if (piVar3 != (int *)0x0) {
        pcVar5 = (code *)piVar3[-2];
        if (pcVar5 == (code *)0x0) {
          fn_0030233c(piVar3 + -2);
        }
        else {
          (*pcVar5)();
        }
      }
      piVar3 = (int *)*piVar6;
    }
  }
  *param_1 = &DAT_0085355c;
  if (param_1[7] != 0) {
    param_1[7] = 0;
  }
  iVar2 = fn_00170f54(param_1 + 3);
  *(undefined **)(iVar2 + -0xc) = &DAT_00853740;
  *(undefined4 *)(iVar2 + -8) = 0;
  return;
}


