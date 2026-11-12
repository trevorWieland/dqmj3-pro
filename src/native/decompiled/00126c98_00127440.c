#include "00126c98_00127440.h"



void fn_00127440(int param_1)

{
  if (*(char *)(param_1 + 500) != '\0') {
    *(undefined1 *)(param_1 + 0x1f7) = 1;
    fn_0015f270();
    *(undefined1 *)(param_1 + 500) = 0;
  }
  return;
}



void fn_00127410(int param_1,int param_2)

{
  fn_00170704(param_1 + 0x1c4);
  fn_0017d90c(param_1 + 0x1d0,param_2 + 4);
  fn_001707b4(param_1 + 0x1c4);
  return;
}



void fn_001273e0(int param_1)

{
  fn_00170704(param_1 + 0x1c4);
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  *(undefined4 *)(param_1 + 0x1bc) = 0;
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  fn_001707b4(param_1 + 0x1c4);
  return;
}



void fn_001273d0(undefined4 *param_1)

{
  *param_1 = &DAT_0085828c;
  return;
}



void fn_00127398(int param_1)

{
  fn_00158768();
  fn_00158768(param_1 + 0xb4);
  *(undefined1 *)(param_1 + 0x18d) = 0;
  return;
}



void fn_00127334(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  do {
    piVar1 = (int *)fn_00158690(param_1 + 0xb4);
    *(int *)(param_1 + 0x178) = piVar1[2];
    piVar4 = piVar1;
    if (piVar1 != (int *)0x0) {
      do {
        piVar2 = piVar4;
        piVar4 = (int *)*piVar2;
      } while (piVar4 != (int *)0x0);
      iVar3 = piVar2[3];
      *(int *)(param_1 + 0x188) = iVar3;
      *(undefined1 *)(param_1 + 0x18c) = 0;
      if (*(int *)(param_1 + 0x184) == iVar3) {
        *(undefined4 *)(param_1 + 0x188) = 0;
        *(undefined4 *)(param_1 + 0x184) = 0;
      }
    }
  } while (piVar1[2] != param_2);
  return;
}



undefined4 fn_001271e8(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *local_18;
  
  local_18 = param_4;
  if (*(int *)(param_1 + 0x16c) == 0) {
    if (param_2 == 0) {
      return 0;
    }
    puVar1 = (undefined4 *)fn_001411dc(param_1,4);
    while (puVar1 == (undefined4 *)0x0) {
      fn_0012d6a4(1000000,0);
      while (iVar3 = fn_001585d4(param_1 + 0xb4,&local_18), iVar3 != 0) {
        *(int *)(param_1 + 0x178) = local_18[2];
        piVar2 = local_18;
        if (local_18 != (int *)0x0) {
          while ((int *)*piVar2 != (int *)0x0) {
            piVar2 = (int *)*piVar2;
          }
          iVar3 = piVar2[3];
          *(int *)(param_1 + 0x188) = iVar3;
          *(undefined1 *)(param_1 + 0x18c) = 0;
          if (*(int *)(param_1 + 0x184) == iVar3) {
            *(undefined4 *)(param_1 + 0x188) = 0;
            *(undefined4 *)(param_1 + 0x184) = 0;
          }
        }
      }
      puVar1 = (undefined4 *)fn_001411dc(param_1,4);
    }
    puVar1[3] = *(undefined4 *)(param_1 + 0x184);
    *(undefined1 *)(puVar1 + 1) = 0;
    if (*(undefined4 **)(param_1 + 0x170) == (undefined4 *)0x0) {
      *(undefined4 **)(param_1 + 0x16c) = puVar1;
    }
    else {
      **(undefined4 **)(param_1 + 0x170) = puVar1;
    }
    *(undefined4 **)(param_1 + 0x170) = puVar1;
    *puVar1 = 0;
  }
  uVar4 = *(undefined4 *)(param_1 + 0x174);
  coproc_moveto_Data_Memory_Barrier(0);
  if (param_2 == 0) {
    iVar3 = fn_001839ac(param_1,*(undefined4 *)(param_1 + 0x16c));
    if (iVar3 == 0) {
      return 0;
    }
  }
  else {
    fn_001675c4();
  }
  *(undefined4 *)(*(int *)(param_1 + 0x16c) + 8) = uVar4;
  *(int *)(param_1 + 0x174) = *(int *)(param_1 + 0x174) + 1;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  return uVar4;
}



void fn_001271b0(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = &DAT_0085820c;
  *(undefined2 *)(param_1 + 0x82) = 0;
  *(undefined1 *)((int)param_1 + 0x20a) = 0;
  return;
}



undefined4 fn_00126c98(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint unaff_r8;
  int *unaff_r9;
  undefined8 uVar5;
  undefined4 local_a8;
  int local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  undefined1 local_8c;
  undefined1 local_8b;
  uint local_88;
  uint local_84 [5];
  undefined1 local_70;
  undefined1 local_6f;
  uint local_6c;
  uint local_68;
  uint *local_64 [3];
  uint local_58;
  uint local_54;
  undefined4 local_50;
  uint local_4c;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [20];
  
  fn_001405f8(local_64);
  uVar3 = 0;
  uVar4 = *local_64[0];
  if (uVar4 != 0) {
    do {
      iVar1 = fn_00145878(local_64,&local_a8,uVar3);
      if (iVar1 == 0) {
        return 0;
      }
      if (local_a4 == 0) {
        if (uVar3 == 0) {
          uVar3 = fn_00145828(local_64);
          uVar4 = 0;
          if (uVar3 == 0) {
            return 1;
          }
          while ((iVar1 = fn_00145838(local_64,&local_a0,uVar4), iVar1 == 0 ||
                 (iVar1 = fn_00116ab8(param_1,local_a0,param_3,local_9c,param_4), iVar1 != 0))) {
            uVar4 = uVar4 + 1;
            if (uVar3 <= uVar4) {
              return 1;
            }
          }
          return 0;
        }
      }
      else {
        (**(code **)(*param_1 + 8))(param_1,local_a8,local_a4);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  local_68 = fn_00145828(local_64);
  if (local_68 != 0) {
    unaff_r9 = &local_a4;
    unaff_r8 = 0xffffffff;
  }
  local_6c = 0;
  if (local_68 != 0) {
    do {
      iVar1 = fn_00145838(local_64,&local_58,local_6c);
      if ((iVar1 != 0) && ((local_54 & 8) != 0)) {
        uVar3 = local_58 >> 0x18;
        if (uVar3 == 1) {
          iVar1 = fn_00145a08(param_1[1],local_58);
          if (iVar1 == 1) {
            local_70 = 0;
            local_88 = 0;
            local_6f = 0;
            local_84[4] = 0;
            local_84[0] = unaff_r8;
            local_84[1] = unaff_r8;
            local_84[2] = unaff_r8;
            local_84[3] = unaff_r8;
            iVar1 = fn_001456b4(param_1[1],local_58,&local_88);
            if (iVar1 != 0) {
              uVar3 = 0;
              do {
                if (((local_84[uVar3] != 0xffffffff) &&
                    (local_90 = unaff_r8, iVar1 = fn_00145604(param_1[1],local_84[uVar3],&local_90)
                    , iVar1 != 0)) &&
                   (iVar1 = (**(code **)(*param_1 + 0x10))(param_1,local_90), iVar1 != 0)) {
                  fn_00140594(&local_50,iVar1);
                  uVar5 = fn_0014580c(&local_50);
                  iVar1 = (int)((ulonglong)uVar5 >> 0x20);
                  piVar2 = (int *)uVar5;
                  if (piVar2 != (int *)0x0) {
                    iVar1 = *piVar2;
                  }
                  if ((piVar2 != (int *)0x0 && iVar1 != 0) && (piVar2 + 1 != (int *)0x0)) {
                    fn_0014096c(param_1,piVar2[1],param_3);
                  }
                }
                uVar3 = uVar3 + 1;
              } while (uVar3 < 4);
            }
          }
        }
        else if (uVar3 == 2) {
          local_84[1] = 0;
          local_88 = unaff_r8;
          local_84[0] = unaff_r8;
          iVar1 = fn_00145764(param_1[1],local_58,&local_88);
          uVar3 = 0;
          if (iVar1 != 0) {
            uVar3 = local_88;
          }
          if (iVar1 != 0 && uVar3 != 0xffffffff) {
            iVar1 = fn_00145a08(param_1[1],uVar3);
            uVar3 = local_88;
            if (iVar1 == 1) {
              if (local_88 <= local_84[0]) {
                do {
                  local_8c = 0;
                  local_a4 = 0;
                  local_8b = 0;
                  local_90 = 0;
                  local_a0 = unaff_r8;
                  local_9c = unaff_r8;
                  local_98 = unaff_r8;
                  local_94 = unaff_r8;
                  iVar1 = fn_001456b4(param_1[1],uVar3,&local_a4);
                  if (iVar1 != 0) {
                    uVar4 = 0;
                    do {
                      if (((unaff_r9[uVar4 + 1] != -1) &&
                          (local_4c = unaff_r8,
                          iVar1 = fn_00145604(param_1[1],unaff_r9[uVar4 + 1],&local_4c), iVar1 != 0
                          )) && (iVar1 = (**(code **)(*param_1 + 0x10))(param_1,local_4c),
                                iVar1 != 0)) {
                        fn_00140594(auStack_48);
                        uVar5 = fn_0014580c(auStack_48);
                        iVar1 = (int)((ulonglong)uVar5 >> 0x20);
                        piVar2 = (int *)uVar5;
                        if (piVar2 != (int *)0x0) {
                          iVar1 = *piVar2;
                        }
                        if ((piVar2 != (int *)0x0 && iVar1 != 0) && (piVar2 + 1 != (int *)0x0)) {
                          fn_0014096c(param_1,piVar2[1],param_3);
                        }
                      }
                      uVar4 = uVar4 + 1;
                    } while (uVar4 < 4);
                  }
                  uVar3 = uVar3 + 1;
                } while (uVar3 <= local_84[0]);
              }
            }
            else if (((iVar1 == 3) && (local_88 != 0xffffffff)) &&
                    (iVar1 = fn_0014565c(param_1[1],local_88,&local_50), iVar1 != 0)) {
              local_84[3] = 0;
              local_84[4] = local_84[4] & 0xffff0000;
              iVar1 = fn_0014570c(param_1[1],uVar3,local_84 + 2);
              if ((iVar1 != 0) &&
                 (iVar1 = (**(code **)(*param_1 + 0x10))(param_1,local_50), iVar1 != 0)) {
                fn_00140dd8(auStack_38,iVar1);
                local_a0 = 0;
                local_9c = local_9c & 0xffffff00;
                iVar1 = fn_0014594c(auStack_38,&local_a8,local_84[2],0);
                if (iVar1 != 0) {
                  fn_0014096c(param_1,local_a8,param_3);
                }
              }
            }
          }
        }
        else if (((uVar3 == 3) && (local_58 != 0xffffffff)) &&
                ((local_98 = unaff_r8, iVar1 = fn_00145604(param_1[1],local_58,&local_98),
                 iVar1 != 0 &&
                 (iVar1 = (**(code **)(*param_1 + 0x10))(param_1,local_98), iVar1 != 0)))) {
          fn_00140594(&local_a4);
          uVar5 = fn_0014580c(&local_a4);
          iVar1 = (int)((ulonglong)uVar5 >> 0x20);
          piVar2 = (int *)uVar5;
          if (piVar2 != (int *)0x0) {
            iVar1 = *piVar2;
          }
          if ((piVar2 != (int *)0x0 && iVar1 != 0) && (piVar2 + 1 != (int *)0x0)) {
            fn_0014096c(param_1,piVar2[1],param_3);
          }
        }
      }
      local_6c = local_6c + 1;
    } while (local_6c < local_68);
  }
  return 1;
}


