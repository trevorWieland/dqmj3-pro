#include "004842e0_00484f24.h"



undefined1 * fn_00484f24(int param_1,int *param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined1 auStack_50 [32];
  undefined *local_30;
  code *local_2c;
  undefined *local_28;
  code *local_24;
  undefined4 uStack_20;
  undefined *local_1c;
  
  puVar5 = (undefined1 *)*param_2;
  if ((undefined1 *)*param_2 == *(undefined1 **)(param_1 + 0x2c0)) {
    fn_00456a78(auStack_50);
    fn_004569e8(auStack_50,param_2[2]);
    fn_00456a1c(auStack_50,param_2[1] & 0xffff);
    switch(*param_2) {
    case 1:
      fn_004b4218(&local_30);
      *(int *)(param_1 + 700) = (int)local_30 - *(int *)(param_1 + 0x2d8);
      fn_00456aa0(param_1 + 0x148,auStack_50);
      iVar2 = fn_006d0ce0(param_1 + 0x148);
      iVar3 = fn_006d0ce0(param_1 + 0x128);
      if (iVar2 == iVar3) {
        *(undefined1 *)(param_1 + 0x310) = 1;
      }
      if (*(char *)(param_1 + 0x311) == '\0') {
        uVar1 = fn_006d0ce0(auStack_50);
        *(undefined2 *)(param_1 + 0x316) = uVar1;
      }
      else {
        uVar1 = fn_006d0ce0(auStack_50);
        *(undefined2 *)(param_1 + 0x312) = uVar1;
      }
      uVar4 = DAT_008b6898;
      if ((*(int *)(param_1 + 0x150) == *(int *)(param_1 + 0x130)) &&
         (*(short *)(param_1 + 0x14e) == *(short *)(param_1 + 0x12e))) {
        *(undefined4 *)(param_1 + 0x2c4) = DAT_008b6898;
        *(undefined4 *)(param_1 + 0x2c8) = uVar4;
        local_24 = fn_004858f0;
      }
      else {
        local_24 = fn_0048666c;
      }
      uStack_20 = 0;
      local_1c = &DAT_00485278;
      local_28 = &DAT_00853500;
      fn_00479c98(param_1,&local_28);
      break;
    case 2:
      *(undefined4 *)(param_1 + 0x2c8) = DAT_008b6898;
      local_2c = fn_00486704;
      local_28 = (undefined *)0x0;
      local_30 = &DAT_00853500;
      local_24 = (code *)&DAT_00485278;
      fn_00479c98(param_1,&local_30);
      break;
    case 3:
      *(undefined4 *)(param_1 + 0x2c8) = DAT_008b689c;
      local_2c = fn_00486704;
      local_28 = (undefined *)0x0;
      local_24 = (code *)&DAT_00485278;
      local_30 = &DAT_00853500;
      fn_00479c98(param_1,&local_30);
      break;
    case 4:
      iVar2 = fn_006d0ce0(auStack_50);
      iVar3 = fn_006d0ce0(param_1 + 0x148);
      if (iVar2 == iVar3) {
        if (*(char *)(param_1 + 0x311) == '\0') {
          uVar1 = fn_006d0ce0(auStack_50);
          *(undefined2 *)(param_1 + 0x318) = uVar1;
        }
        else {
          uVar1 = fn_006d0ce0(auStack_50);
          *(undefined2 *)(param_1 + 0x314) = uVar1;
        }
        *(undefined4 *)(param_1 + 0x2c4) = DAT_008b6898;
        local_2c = fn_004858f0;
        local_28 = (undefined *)0x0;
        local_24 = (code *)&DAT_00485278;
        local_30 = &DAT_00853500;
        fn_00479c98(param_1,&local_30);
      }
      else {
        fn_00456aa0(param_1 + 0x148,auStack_50);
        local_2c = fn_00486814;
        local_28 = (undefined *)0x0;
        local_24 = (code *)&DAT_00485278;
        local_30 = &DAT_00853500;
        fn_00479c98(param_1,&local_30);
      }
      break;
    case 5:
      if (*(char *)(param_1 + 0x311) == '\0') {
        uVar1 = fn_006d0ce0(auStack_50);
        *(undefined2 *)(param_1 + 0x318) = uVar1;
      }
      else {
        uVar1 = fn_006d0ce0(auStack_50);
        *(undefined2 *)(param_1 + 0x314) = uVar1;
      }
      iVar2 = fn_006d0ce0(auStack_50);
      iVar3 = fn_006d0ce0(param_1 + 0x148);
      if (iVar2 == iVar3) {
        uVar4 = DAT_008b689c;
      }
      else {
        uVar4 = DAT_008b68a0;
      }
      *(undefined4 *)(param_1 + 0x2c4) = uVar4;
      fn_00456aa0(param_1 + 0x148,auStack_50);
      local_2c = fn_004858f0;
      local_28 = (undefined *)0x0;
      local_24 = (code *)&DAT_00485278;
      local_30 = &DAT_00853500;
      fn_00479c98(param_1,&local_30);
    }
    puVar5 = auStack_50;
  }
  return puVar5;
}



void fn_00484be8(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  bool bVar11;
  undefined *puStack_98;
  code *pcStack_94;
  undefined4 uStack_90;
  undefined1 *local_8c [23];
  int local_30;
  char local_2c;
  char local_2b;
  char local_2a;
  char local_29;
  undefined1 auStack_28 [4];
  
  iVar2 = fn_001249d0();
  local_30 = fn_0048a058(*(undefined4 *)(iVar2 + 0x10),*(undefined4 *)(param_1 + 0x1e0));
  if (local_30 == 0) {
    fn_004b2f04(param_1);
    return;
  }
  iVar3 = fn_004b7748();
  iVar2 = 0;
  if (iVar3 != 0) {
    iVar2 = *(int *)(iVar3 + 0x90);
  }
  if (iVar3 != 0 && iVar2 != 0) {
    iVar2 = fn_004b7748();
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar2 + 0x90);
    }
    if (*(char *)(iVar2 + 0xfc) != '\0') {
      fn_00527f9c(&local_2c,auStack_28);
      bVar11 = (local_29 != '\0' || local_2a != '\0') || (local_2c != '\0' || local_2b != '\0');
      cVar1 = '\0';
      if (bVar11) {
        cVar1 = *(char *)(param_1 + 0x188);
      }
      if (bVar11 && cVar1 != '\0') {
        iVar2 = fn_004b7748();
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(iVar2 + 0x90);
        }
        piVar8 = *(int **)(iVar2 + 0x104);
        if (piVar8 < *(int **)(iVar2 + 0x108)) {
          do {
            iVar3 = fn_006d1124(*piVar8);
            if (iVar3 != 0) {
              fn_00455c50(&puStack_98,*(undefined4 *)(*piVar8 + 4));
              uVar4 = fn_006d09b8();
              piVar9 = *(int **)(param_1 + 0x114);
              iVar3 = *(int *)(param_1 + 0x120);
              if (piVar9 == (int *)0x0) {
                piVar9 = *(int **)(param_1 + 0x118);
                if (piVar9 == *(int **)(param_1 + 0x11c)) {
                  if (*(int *)(param_1 + 0x110) == 0) {
                    uVar10 = 0x20;
                  }
                  else {
                    uVar5 = *(uint *)(*(int *)(param_1 + 0x110) + 4);
                    uVar10 = uVar5 + (uVar5 >> 1) + (uVar5 >> 3);
                    if (uVar10 < uVar5 + 0x20) {
                      uVar10 = uVar5 + 0x20;
                    }
                  }
                  puVar6 = (undefined4 *)fn_0015ece0(0xc);
                  uVar7 = fn_0015ece0(uVar10 * 0x28);
                  puVar6[2] = uVar7;
                  *puVar6 = *(undefined4 *)(param_1 + 0x110);
                  puVar6[1] = uVar10;
                  *(undefined4 **)(param_1 + 0x110) = puVar6;
                  piVar9 = (int *)puVar6[2];
                  *(int **)(param_1 + 0x118) = piVar9;
                  *(int **)(param_1 + 0x11c) = piVar9 + uVar10 * 10;
                }
                *(int **)(param_1 + 0x118) = piVar9 + 10;
              }
              else {
                *(int *)(param_1 + 0x114) = *piVar9;
              }
              if (piVar9 + 2 != (int *)0x0) {
                fn_00456a28(piVar9 + 2,uVar4);
              }
              *piVar9 = iVar3;
              piVar9[1] = *(int *)(iVar3 + 4);
              **(undefined4 **)(iVar3 + 4) = piVar9;
              *(int **)(iVar3 + 4) = piVar9;
              *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x124) + 1;
              fn_0013ce98(&puStack_98);
            }
            piVar8 = piVar8 + 1;
          } while (piVar8 < *(int **)(iVar2 + 0x108));
        }
        if (*(int *)(param_1 + 0x124) != 0) {
          fn_004b5f40(param_1 + 0x19c,1);
          iVar2 = fn_006d0ce0(param_1 + 0x128);
          if ((iVar2 != 0) && (iVar2 = fn_004b5ebc(param_1 + 0x19c,param_1 + 0x128,0), iVar2 != 0))
          {
LAB_00484e88:
            cVar1 = *(char *)(param_1 + 0x188);
            if (cVar1 == '\x03' || cVar1 == '\x01') {
              pcStack_94 = fn_00486100;
            }
            else {
              if (cVar1 != '\x02') {
                return;
              }
              pcStack_94 = fn_004865c0;
            }
            uStack_90 = 0;
            local_8c[0] = &DAT_00484f1c;
            puStack_98 = &DAT_00853500;
            fn_00479c98(param_1,&puStack_98);
            return;
          }
          uVar10 = 0;
          do {
            uVar4 = fn_00468f84();
            fn_00456a1c(param_1 + 0x128,uVar4);
            iVar2 = fn_004b5ebc(param_1 + 0x19c,param_1 + 0x128,0);
            if (iVar2 != 0) goto LAB_00484e88;
            uVar10 = uVar10 + 1;
          } while (uVar10 < 5);
          fn_004b604c(param_1 + 0x19c);
        }
      }
    }
  }
  local_8c[0] = &DAT_80010001;
  uVar4 = fn_004b8d4c(&puStack_98,local_8c);
  fn_00455e8c(local_30,3,uVar4,0);
  fn_004b2f04(param_1);
  return;
}



void fn_004849c4(void)

{
  int iVar1;
  
  iVar1 = fn_004849f4();
  if (iVar1 == 0) {
    return;
  }
  if (*(code **)(iVar1 + -8) == (code *)0x0) {
    fn_0030233c();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004849e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + -8))();
  return;
}



void fn_004843e4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  code *pcVar4;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  if (*(int *)(param_1 + 0xb0) == 0) {
    pcVar4 = fn_004834e8;
    uVar2 = 0;
    fn_0013d0fc(&local_20);
    *(undefined4 *)(param_1 + 0x40) = local_20;
    *(undefined4 *)(param_1 + 0x44) = uStack_1c;
    *(code **)(param_1 + 0x50) = pcVar4;
    *(undefined4 *)(param_1 + 0x54) = uVar2;
    *(undefined1 **)(param_1 + 0x58) = &LAB_004844c0;
    return;
  }
  iVar1 = **(int **)(param_1 + 0xac);
  fn_0013d0fc(&local_20);
  *(undefined4 *)(param_1 + 0x40) = local_20;
  *(undefined4 *)(param_1 + 0x44) = uStack_1c;
  uVar2 = *(undefined4 *)(iVar1 + 0x10);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar1 + 0xc);
  *(undefined4 *)(param_1 + 0x54) = uVar2;
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar1 + 0x14);
  piVar3 = (int *)**(int **)(param_1 + 0xac);
  if (piVar3 != *(int **)(param_1 + 0xac)) {
    *(int *)piVar3[1] = *piVar3;
    *(int *)(*piVar3 + 4) = piVar3[1];
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + -1;
    (**(code **)piVar3[2])(piVar3 + 2);
    *piVar3 = *(int *)(param_1 + 0xa0);
    *(int **)(param_1 + 0xa0) = piVar3;
  }
  return;
}



void fn_004842e0(int param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_2c;
  undefined1 local_28 [4];
  undefined4 local_24;
  undefined2 local_20 [4];
  
  iVar1 = fn_004b7748();
  if (((iVar1 != 0) && (iVar1 = fn_004b7748(), *(int *)(iVar1 + 0x100) != 0)) &&
     (*(char *)(param_1 + 0x1b0) == '\0')) {
    iVar1 = fn_004b7748();
    iVar1 = *(int *)(iVar1 + 0x100);
    local_2c = 0;
    piVar3 = (int *)**(int **)(param_1 + 0x1a0);
    if (piVar3 != *(int **)(param_1 + 0x1a0)) {
      do {
        iVar2 = fn_006d0810(piVar3 + 2,L"RVCID",0);
        if (iVar2 != 0) {
          local_2c = fn_006d0810(piVar3 + 2,L"RVCID",0);
          break;
        }
        piVar3 = (int *)*piVar3;
      } while (piVar3 != (int *)*(int *)(param_1 + 0x1a0));
    }
    if ((iVar1 != 0 && local_2c != 0) &&
       (local_24 = *(undefined4 *)(param_1 + 0x1b8), *(int *)(iVar1 + 8) != 0)) {
      local_28[0] = param_2;
      local_20[0] = fn_00488000(iVar1,local_2c);
      (**(code **)(**(int **)(iVar1 + 8) + 0x30))
                (*(int **)(iVar1 + 8),&local_2c,local_28,local_20,&local_24);
    }
  }
  return;
}


