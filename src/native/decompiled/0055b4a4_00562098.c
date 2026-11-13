#include "0055b4a4_00562098.h"



void fn_00562098(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[1] = 1;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



void fn_0055e2fc(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0055e328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x80) + 8))(*(int **)(param_1 + 0x80),param_1,param_2,param_3);
  return;
}



int fn_0055d060(int param_1)

{
  int iVar1;
  
  fn_0055be4c();
  fn_00141804(param_1 + 0x90,param_1 + 0x94,0xb00);
  fn_00100414(param_1 + 0x94,&DAT_001273cc,0x58,0x20);
  iVar1 = fn_001273d0(param_1 + 100);
  return iVar1 + -100;
}



undefined4 fn_0055cc3c(int param_1,int param_2,undefined4 *param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  undefined4 local_68 [2];
  undefined4 local_60 [11];
  int iStack_34;
  int iStack_30;
  undefined4 *puStack_2c;
  undefined4 local_28;
  
  iVar7 = 0;
  local_68[0] = 0;
  iStack_34 = param_1;
  iStack_30 = param_2;
  puStack_2c = param_3;
  local_28 = param_4;
  if ((*(uint *)(param_1 + 0x3c) < *(uint *)(param_1 + 0x38)) &&
     (*(char *)(*(int *)(param_1 + 0x18) + 8) != '\0')) {
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x40);
    (**(code **)(**(int **)(param_1 + 0x14) + 0x40))
              (*(int **)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x48),0);
    if (*(int *)(param_1 + 0x40) != 0) {
      uVar6 = *(uint *)(param_1 + 0x20);
      if (uVar6 != 0) {
        uVar1 = uVar6 & 1;
        if (uVar1 == 1) {
          local_60[0] = *param_3;
        }
        uVar5 = (uint)(uVar1 == 1);
        if (uVar1 < uVar6) {
          do {
            uVar1 = uVar1 + 2;
            local_60[uVar5] = param_3[uVar5];
            local_60[uVar5 + 1] = param_3[uVar5 + 1];
            uVar5 = uVar5 + 2;
          } while (uVar1 < *(uint *)(param_1 + 0x20));
        }
      }
      iVar2 = (**(code **)(*DAT_008c3cc4 + 0x10))
                        (DAT_008c3cc4,*(undefined4 *)(param_1 + 0x14),
                         *(undefined4 *)(param_1 + 0x20),local_60);
      if (iVar2 == 0) {
        return 0;
      }
    }
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0xc);
    *(undefined1 *)(param_1 + 0x50) = 1;
  }
  if (param_5 == 0) {
    if (*(char *)(param_1 + 0x50) != '\0') {
      iVar7 = *(int *)(param_1 + 0x4c);
    }
  }
  else {
    iVar7 = fn_0055befc(param_1,param_5,local_68);
    if (iVar7 == 0) {
      *(undefined4 *)(param_2 + 0x1c) = 0;
      return 1;
    }
    uVar3 = fn_00169f1c(*(undefined4 *)(param_1 + 0x58),
                         *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x1c));
    *(undefined4 *)(param_1 + 0x38) = uVar3;
    (**(code **)(**(int **)(param_1 + 0x14) + 0x40))(*(int **)(param_1 + 0x14),0);
    uVar1 = 0;
    uVar6 = 0;
    if (*(int *)(param_1 + 0x38) != 0) {
      do {
        if ((*(int *)(param_1 + 0x40) != 0) && (*(int *)(param_1 + 0x40) - 1U == uVar1)) {
          uVar3 = (**(code **)(**(int **)(param_1 + 0x14) + 0x54))();
          *(undefined4 *)(param_1 + 0x48) = uVar3;
        }
        (**(code **)(*DAT_008c3cc4 + 0xc))(DAT_008c3cc4,*(undefined4 *)(param_1 + 0x14));
        uVar6 = *(uint *)(param_1 + 0x38);
        uVar1 = uVar1 + 1;
      } while (uVar1 < uVar6);
    }
    iVar7 = *(int *)(param_1 + 0x58) - uVar6 * *(int *)(*(int *)(param_1 + 0x18) + 0x1c);
  }
  if ((*(int *)(param_1 + 0x40) != 0) && (*(int *)(param_1 + 0x40) + -1 == *(int *)(param_1 + 0x38))
     ) {
    uVar3 = (**(code **)(**(int **)(param_1 + 0x14) + 0x54))();
    *(undefined4 *)(param_1 + 0x48) = uVar3;
  }
  uVar8 = (ulonglong)*(uint *)(param_1 + 0x58);
  if (*(int *)(param_1 + 0x38) == *(int *)(param_1 + 0x3c)) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x18) + 0x28);
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0x18) + 0x1c);
  }
  uVar6 = (**(code **)(**(int **)(param_1 + 0x14) + 0x54))();
  uVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 0x3c))();
  if (uVar6 < uVar1) {
    if (iVar2 != 0) {
      uVar6 = *(uint *)(param_1 + 0x20);
      if (uVar6 != 0) {
        uVar1 = uVar6 & 1;
        if (uVar1 == 1) {
          local_60[0] = *param_3;
        }
        uVar5 = (uint)(uVar1 == 1);
        if (uVar1 < uVar6) {
          do {
            uVar1 = uVar1 + 2;
            local_60[uVar5] = param_3[uVar5];
            local_60[uVar5 + 1] = param_3[uVar5 + 1];
            uVar5 = uVar5 + 2;
          } while (uVar1 < *(uint *)(param_1 + 0x20));
        }
      }
      iVar4 = (**(code **)(*DAT_008c3cc4 + 0x10))
                        (DAT_008c3cc4,*(undefined4 *)(param_1 + 0x14),
                         *(undefined4 *)(param_1 + 0x20),local_60);
      if (iVar4 == 0) {
        return 0;
      }
      uVar6 = (**(code **)(**(int **)(param_1 + 0x14) + 0x54))();
      uVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 0x3c))();
      if (uVar1 <= uVar6) {
        *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x38);
      }
    }
  }
  else {
    iVar2 = 0;
  }
  uVar3 = (undefined4)uVar8;
  *(undefined1 *)(param_1 + 0x50) = 0;
  uVar6 = *(int *)(param_1 + 0x38) + 1;
  *(uint *)(param_1 + 0x38) = uVar6;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar2;
  if (*(uint *)(param_1 + 0x3c) < uVar6) {
    if (*(char *)(param_1 + 0x27) == '\0') {
      if (*(char *)(*(int *)(param_1 + 0x18) + 8) == '\0') {
        *(undefined1 *)(param_1 + 0x51) = 1;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x58) = 0;
      uVar3 = fn_00169f1c(0,*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x1c));
      *(undefined4 *)(param_1 + 0x38) = uVar3;
      (**(code **)(**(int **)(param_1 + 0x14) + 0x40))(*(int **)(param_1 + 0x14),0);
      uVar3 = (undefined4)uVar8;
      uVar6 = 0;
      if (*(int *)(param_1 + 0x38) != 0) {
        do {
          if ((*(int *)(param_1 + 0x40) != 0) && (*(int *)(param_1 + 0x40) - 1U == uVar6)) {
            uVar3 = (**(code **)(**(int **)(param_1 + 0x14) + 0x54))();
            *(undefined4 *)(param_1 + 0x48) = uVar3;
          }
          (**(code **)(*DAT_008c3cc4 + 0xc))(DAT_008c3cc4,*(undefined4 *)(param_1 + 0x14));
          uVar3 = (undefined4)uVar8;
          uVar6 = uVar6 + 1;
        } while (uVar6 < *(uint *)(param_1 + 0x38));
      }
    }
  }
  *(undefined1 *)(param_2 + 0x28) = 0;
  *(undefined4 *)(param_2 + 0x18) = local_28;
  *(int *)(param_2 + 0x1c) = iVar2;
  *(undefined4 *)(param_2 + 0x20) = uVar3;
  *(int *)(param_2 + 0x24) = iVar7;
  *(undefined4 *)(param_2 + 0x5c) = local_68[0];
  *(undefined1 *)(param_2 + 0x60) = *(undefined1 *)(param_1 + 0x51);
  return 1;
}



void fn_0055b4a4(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if (*(char *)(param_1 + 0xa0) == '\x01') {
    iVar5 = *(int *)(param_1 + 0xa4);
    if (iVar5 == 0) {
      return;
    }
    if (*(int *)(iVar5 + 0x14) == 0) {
      return;
    }
    iVar2 = *(int *)(iVar5 + 0x18);
    fn_00150c1c(iVar5 + 0x14);
    if (iVar2 + -0x44 == 0) {
      return;
    }
    *(int *)(param_1 + 0xa8) = iVar2 + -0x44;
    *(undefined1 *)(param_1 + 0xa0) = 2;
    *(undefined1 *)(iVar2 + -0x30) = 0;
    *(undefined4 *)(iVar2 + -0xc) = 0;
    *(undefined4 *)(iVar2 + -0x10) = 0;
    *(undefined1 *)(iVar2 + -4) = 0;
    uVar9 = *(undefined4 *)(param_1 + 0xac);
    uVar10 = *(undefined4 *)(param_1 + 0xb0);
    uVar3 = *(undefined4 *)(param_1 + 0xb4);
    uVar4 = *(undefined4 *)(param_1 + 0xb8);
    uVar6 = *(undefined4 *)(param_1 + 0xbc);
    uVar7 = *(undefined4 *)(param_1 + 0xc0);
    *(undefined4 *)(iVar2 + -8) = 0;
    *(undefined4 *)(iVar2 + -0x28) = uVar9;
    *(undefined4 *)(iVar2 + -0x24) = uVar10;
    *(undefined4 *)(iVar2 + -0x20) = uVar3;
    *(undefined4 *)(iVar2 + -0x1c) = uVar4;
    *(undefined4 *)(iVar2 + -0x18) = uVar6;
    *(undefined4 *)(iVar2 + -0x14) = uVar7;
LAB_0055b534:
    iVar5 = *(int *)(param_1 + 0xa8);
    if (*(int *)(iVar5 + 0x3c) == 0) {
      iVar2 = fn_005558e0(*(undefined4 *)(iVar5 + 0x24));
      *(int *)(iVar5 + 0x3c) = iVar2;
      if (iVar2 == 0) {
        return;
      }
      fn_005582d8();
    }
    cVar1 = *(char *)(iVar5 + 0x14);
    if (cVar1 == '\0') {
      iVar2 = fn_00172e2c();
      fn_00170704(iVar2 + 0x2c);
      fn_0013c428(iVar5 + 0xc);
      *(undefined1 *)(iVar5 + 0x14) = 1;
      fn_0017d948(iVar2 + 0xc,iVar2 + 0x10,iVar5 + 4);
      fn_001839ac(iVar2 + 0x38,0);
      fn_001707b4(iVar2 + 0x2c);
      return;
    }
    if (cVar1 != '\x03' && cVar1 != '\x04') {
      return;
    }
    if (*(char *)(*(int *)(param_1 + 0xa8) + 0x40) != '\0') {
      uVar9 = *(undefined4 *)(*(int *)(param_1 + 0xa8) + 0x34);
      uVar10 = *(undefined4 *)(*(int *)(param_1 + 0xa8) + 0x38);
      if (*(char *)(param_1 + 0xc) != '\0') {
        *(undefined1 *)(param_1 + 0xf) = 1;
        if (*(char *)(param_1 + 0xa2) != '\0') {
          uVar3 = fn_00172fc4();
          fn_001a071c(uVar3,param_1 + 0x50);
          *(undefined1 *)(param_1 + 0xa2) = 0;
        }
        if (*(char *)(param_1 + 0xd) != '\0') {
          *(undefined1 *)(param_1 + 0xd) = 0;
        }
      }
      *(undefined1 *)(param_1 + 0xa0) = 3;
      *(undefined1 *)(param_1 + 0x5f) = 0;
      *(undefined1 *)(param_1 + 0xc) = 1;
      *(undefined4 *)(param_1 + 100) = uVar9;
      *(undefined4 *)(param_1 + 0x68) = uVar10;
      uVar9 = fn_0018c8e8();
      fn_00196754(uVar9,param_1 + 0x44);
      goto LAB_0055b600;
    }
    *(undefined1 *)(param_1 + 0xf) = 1;
    if (*(char *)(param_1 + 0xa2) != '\0') {
      uVar9 = fn_00172fc4();
      fn_001a071c(uVar9,param_1 + 0x50);
      *(undefined1 *)(param_1 + 0xa2) = 0;
    }
    cVar1 = *(char *)(param_1 + 0xd);
  }
  else {
    if (*(char *)(param_1 + 0xa0) == '\x02') goto LAB_0055b534;
LAB_0055b600:
    bVar8 = *(char *)(param_1 + 0xc) == '\0';
    cVar1 = '\0';
    if (!bVar8) {
      cVar1 = *(char *)(param_1 + 0xd);
    }
    if (bVar8 || cVar1 == '\0') {
      return;
    }
    if (*(char *)(param_1 + 0xe) != '\0') {
LAB_0055b6d4:
      fn_0055b1c4(param_1);
      return;
    }
    if (*(char *)(param_1 + 0x5c) == '\0') {
      iVar5 = fn_0055b068(param_1);
      if (iVar5 != 0) goto LAB_0055b6d4;
      *(undefined1 *)(param_1 + 0xf) = 1;
      if (*(char *)(param_1 + 0xa2) != '\0') {
        uVar9 = fn_00172fc4();
        fn_001a071c(uVar9,param_1 + 0x50);
        *(undefined1 *)(param_1 + 0xa2) = 0;
      }
      cVar1 = *(char *)(param_1 + 0xd);
    }
    else {
      if (*(int *)(param_1 + 0x9c) != 0) goto LAB_0055b6d4;
      *(undefined1 *)(param_1 + 0xf) = 1;
      if (*(char *)(param_1 + 0xa2) == '\0') goto LAB_0055b714;
      uVar9 = fn_00172fc4();
      fn_001a071c(uVar9,param_1 + 0x50);
      *(undefined1 *)(param_1 + 0xa2) = 0;
      cVar1 = *(char *)(param_1 + 0xd);
    }
  }
  if (cVar1 == '\0') {
    return;
  }
LAB_0055b714:
  *(undefined1 *)(param_1 + 0xd) = 0;
  return;
}


