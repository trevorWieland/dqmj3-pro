#include "005a07e4_005a12a4.h"



void fn_005a12a4(int param_1,undefined4 param_2)

{
  fn_004309c4();
  fn_0042ff80(param_1,*(int *)(param_1 + 0xb0) + 4,param_2,0);
  (**(code **)**(undefined4 **)(param_1 + 0xb0))(*(undefined4 **)(param_1 + 0xb0),0);
  fn_00430b80(param_1);
  return;
}



void fn_005a11fc(int param_1,int param_2)

{
  *(undefined1 *)(param_1 + 0x138) = 0;
  if (param_2 != 0) {
    fn_0025f354(*(undefined4 *)(param_1 + 0x10c));
    fn_0025f354(*(undefined4 *)(param_1 + 0x110),param_2);
    if (*(int *)(*(int *)(param_1 + 0x10c) + 0x460) != 0) {
      *(undefined1 *)(param_1 + 0x138) = 1;
    }
  }
  if (*(char *)(param_1 + 0x138) == '\0') {
    fn_00689efc(param_1,0x2d,0);
  }
  else {
    fn_00689efc(param_1,0x2e,0);
  }
  if (*(char *)(param_1 + 0x138) == '\0') {
    fn_0025f354(*(undefined4 *)(param_1 + 0x10c),param_2);
    fn_0025f354(*(undefined4 *)(param_1 + 0x110),param_2);
    return;
  }
  return;
}



undefined4 fn_005a0ba8(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  int *piVar8;
  wchar16 *local_84;
  char *local_80;
  undefined4 *local_7c;
  undefined4 *local_78;
  int local_74;
  undefined1 local_70;
  undefined1 local_6e;
  undefined1 local_6d;
  uint local_68;
  uint local_64;
  int local_60;
  undefined1 local_5a;
  uint local_54;
  uint uStack_50;
  int local_4c;
  undefined1 local_48;
  undefined1 local_46;
  undefined1 local_45;
  undefined1 local_44;
  undefined1 local_43;
  undefined4 local_3c;
  undefined1 local_32;
  undefined4 *local_30;
  undefined4 local_2c;
  undefined4 *local_24;
  undefined4 *local_20;
  undefined1 local_1b;
  
  fn_003808c0(&local_84);
  local_84 = L"rom:/data/Layout/menu/fusion_check.arc";
  local_80 = "fusion_check.bflyt";
  local_6e = 0;
  local_70 = 1;
  local_3c = 5;
  local_44 = 1;
  local_6d = 1;
  *local_7c = *(undefined4 *)(param_1[0x45] + 0x1c);
  local_7c[1] = *(undefined4 *)(param_1[0x45] + 0x20);
  local_5a = 0;
  local_46 = 1;
  local_48 = 1;
  local_45 = 1;
  local_43 = 1;
  local_32 = 1;
  uVar1 = fn_0016ba34(DAT_00897800,DAT_00898228,*(undefined4 *)(&DAT_007c703c + param_1[0x4c] * 4),
                       0);
  fn_00147974(&local_30,uVar1);
  local_2c = 0x46;
  uVar1 = fn_0022f584((char *)&DAT_005a1008,0);
  fn_00147974(&local_20,uVar1);
  local_1b = 0;
  fn_0037ffb4(param_1,&local_84);
  uVar1 = fn_00178f9c(param_1[0x20],param_1[0x22]);
  uVar2 = fn_00172c98(uVar1,(char *)&DAT_005a1028);
  iVar3 = fn_00145b00(0x30,&DAT_00812c8c);
  piVar4 = (int *)0x0;
  if (iVar3 != 0) {
    piVar4 = (int *)fn_002b20c0(iVar3,param_1[1],uVar2,1,param_1[0x12],1,0);
  }
  piVar8 = (int *)param_1[0x46];
  if (piVar8 != piVar4) {
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 4))(piVar8);
    }
    param_1[0x46] = (int)piVar4;
  }
  (**(code **)(*(int *)param_1[0x46] + 0x10))();
  fn_002b20a4(param_1[0x46],0);
  fn_002b1f48(param_1[0x46],0);
  fn_002b1f0c(param_1[0x46],1);
  uVar1 = fn_00172c98(uVar1,(char *)&DAT_005a1038);
  iVar3 = fn_00145b00(0x30,&DAT_00812c8c);
  piVar4 = (int *)0x0;
  if (iVar3 != 0) {
    piVar4 = (int *)fn_002b20c0(iVar3,param_1[1],uVar1,1,param_1[0x12],1,0);
  }
  piVar8 = (int *)param_1[0x47];
  if (piVar8 != piVar4) {
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 4))(piVar8);
    }
    param_1[0x47] = (int)piVar4;
  }
  (**(code **)(*(int *)param_1[0x47] + 0x10))();
  fn_002b20a4(param_1[0x47],0);
  iVar3 = fn_00145b00(0xe4,&DAT_00812c8c);
  piVar4 = (int *)0x0;
  if (iVar3 != 0) {
    piVar4 = (int *)fn_001caa80(iVar3,param_1[1],1);
  }
  piVar8 = (int *)param_1[0x48];
  if (piVar8 != piVar4) {
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 4))(piVar8);
    }
    param_1[0x48] = (int)piVar4;
  }
  *(int **)(param_1[0x48] + 8) = param_1;
  (**(code **)(*(int *)param_1[0x48] + 0x24))((int *)param_1[0x48],2,1);
  iVar3 = 0;
  *(undefined1 *)(param_1[0x48] + 0x45) = 0;
  *(undefined1 *)(param_1[0x48] + 0x44) = 1;
  *(undefined4 *)(param_1[0x48] + 0x10) = 0x100094e;
LAB_005a0e74:
  iVar5 = param_1[0x46];
  do {
    uVar1 = *(undefined4 *)(iVar5 + 0x1c);
    do {
      fn_001c9d44(param_1[0x48],iVar3,uVar1,0);
      iVar3 = iVar3 + 1;
      if (1 < iVar3) {
        *(undefined1 *)(param_1[0x48] + 0x46) = 0;
        fn_00245330(param_1,param_1[0x48]);
        fn_0031f8fc(param_1[0x3c],1,0,0,0xffffffff);
        iVar3 = param_1[0x3c];
        *(undefined1 *)(iVar3 + 0x81) = 0;
        fn_0031f3f4(iVar3,0);
        iVar3 = param_1[0x3c];
        *(undefined1 *)(iVar3 + 0x7f) = 0;
        fn_0031ef00(iVar3,0,0);
        iVar3 = fn_00154ac8(0x9b);
        if (iVar3 == 0) {
          fn_00144834(0x9b,1);
          *(undefined1 *)((int)param_1 + 0x139) = 1;
          iVar3 = param_1[0x17];
          uVar1 = fn_0022f584((char *)&DAT_005a1048,0);
          fn_0036c5f4(iVar3,uVar1,1,0,1,1,0,0,1);
          uVar1 = fn_0022f584((char *)&DAT_005a1064,0);
          fn_0036c140(iVar3,uVar1);
          uVar1 = fn_0022f584((char *)&DAT_005a1080,0);
          fn_0036c140(iVar3,uVar1);
          fn_00689bd0(param_1,0x48,0);
        }
        else {
          *(undefined1 *)((int)param_1 + 0x139) = 0;
        }
        (**(code **)(*param_1 + 0x1a8))(param_1,0);
        (*(code *)**(undefined4 **)param_1[0x2c])((undefined4 *)param_1[0x2c],0);
        if (local_20 != &DAT_008f9cf4) {
          piVar4 = local_20 + -3;
          iVar3 = *piVar4;
          if ((iVar3 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar3 + -1, iVar3 == 0)))) {
            fn_001008c4(local_20 + -3,local_20[-2] + 8,0);
          }
        }
        if (local_24 != &DAT_008f9cf4) {
          piVar4 = local_24 + -3;
          iVar3 = *piVar4;
          if ((iVar3 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar3 + -1, iVar3 == 0)))) {
            fn_001008c4(local_24 + -3,local_24[-2] + 8,0);
          }
        }
        if (local_30 != &DAT_008f9cf4) {
          piVar4 = local_30 + -3;
          iVar3 = *piVar4;
          if ((iVar3 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar3 + -1, iVar3 == 0)))) {
            fn_001008c4(local_30 + -3,local_30[-2] + 8,0);
          }
        }
        uVar6 = local_54;
        if (uStack_50 < local_54) {
          do {
            uVar6 = uVar6 + 4;
          } while (uVar6 != uStack_50);
        }
        fn_001008c4(local_54,(int)(local_4c - local_54) >> 2,0);
        uVar6 = local_68;
        if (local_64 < local_68) {
          do {
            uVar6 = uVar6 + 4;
          } while (uVar6 != local_64);
        }
        fn_001008c4(local_68,(int)(local_60 - local_68) >> 2,0);
        puVar7 = local_7c;
        if (local_78 < local_7c) {
          do {
            puVar7 = puVar7 + 1;
          } while (puVar7 != local_78);
        }
        fn_001008c4(local_7c,local_74 - (int)local_7c >> 2,0);
        return 1;
      }
      uVar1 = 0;
      if (iVar3 == 0) goto LAB_005a0e74;
    } while (iVar3 != 1);
    iVar5 = param_1[0x47];
  } while( true );
}



void fn_005a0848(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_28;
  int local_24 [2];
  int local_1c;
  
  fn_0042fb68();
  if ((char)param_1[0x1f] == '\0') {
    iVar1 = (**(code **)(*(int *)param_1[0x48] + 0x90))();
    if (-1 < iVar1) {
      fn_002c07c0(local_24);
      local_24[0] = 7;
      local_1c = iVar1;
      iVar1 = (**(code **)(*(int *)param_1[0x48] + 0xa0))();
      if (iVar1 < 0) {
        (**(code **)(*param_1 + 0x154))(param_1,local_24[0],local_1c);
        if (param_1[0x19] != local_24[0]) {
          local_28 = 1;
          (**(code **)(*param_1 + 0x110))(param_1,local_24[0],local_1c,0);
        }
      }
      else {
        (**(code **)(*param_1 + 0x130))(param_1,local_24);
      }
    }
    iVar1 = (**(code **)(*(int *)param_1[0x48] + 0x6c))();
    if (-1 < iVar1) {
      if (param_1[0x19] == 7) {
        fn_005a13cc(param_1,iVar1,0);
      }
      else {
        local_28 = 1;
        (**(code **)(*param_1 + 0x110))(param_1,7,0);
      }
    }
    iVar1 = (**(code **)(*(int *)param_1[0x48] + 100))();
    if (-1 < iVar1) {
      if (param_1[0x19] == 7) {
        fn_005a13cc(param_1,iVar1,1);
      }
      else {
        local_28 = 1;
        (**(code **)(*param_1 + 0x110))(param_1,7,iVar1,0);
      }
    }
  }
  if (param_1[0x19] == 7) {
    iVar1 = (**(code **)(*(int *)param_1[0x48] + 0xa8))();
    if (-1 < iVar1) {
                    /* WARNING: Could not recover jumptable at 0x005a09c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x158))(param_1);
      return;
    }
    iVar1 = (**(code **)(*(int *)param_1[0x48] + 0xb8))();
    if (iVar1 < 0) {
      iVar1 = (**(code **)(*(int *)param_1[0x48] + 0xc0))();
      if (-1 < iVar1) {
        fn_002c07c0(&local_28);
        (**(code **)(*param_1 + 0x140))(param_1,&local_28);
        return;
      }
      iVar1 = (**(code **)(*(int *)param_1[0x48] + 100))();
      if (-1 < iVar1) {
        if ((iVar1 == 0) && (*(char *)(param_1[0x46] + 0x24) == '\0')) {
          (**(code **)(*(int *)param_1[0x48] + 0x70))();
        }
        else {
          iVar1 = (**(code **)(*(int *)param_1[0x48] + 0x6c))();
          if (-1 < iVar1) {
            fn_005a13cc(param_1,iVar1,0);
          }
          iVar1 = (**(code **)(*(int *)param_1[0x48] + 100))();
          if (-1 < iVar1) {
            fn_005a13cc(param_1,iVar1,1);
          }
        }
      }
      iVar1 = (**(code **)(*(int *)param_1[0x48] + 0x34))();
      if (iVar1 != 0) {
        uVar2 = (**(code **)(*(int *)param_1[0x48] + 0x5c))();
        (**(code **)(*param_1 + 0x144))(param_1,param_1[0x19],uVar2);
      }
      iVar1 = (**(code **)(*(int *)param_1[0x48] + 0x38))();
      if (iVar1 != 0) {
        uVar2 = (**(code **)(*(int *)param_1[0x48] + 0x5c))();
                    /* WARNING: Could not recover jumptable at 0x005a0b98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x148))(param_1,param_1[0x19],uVar2);
        return;
      }
    }
    else {
      fn_002c07c0(&local_28);
      (**(code **)(*param_1 + 0x13c))(param_1,&local_28);
    }
  }
  return;
}



void fn_005a07e4(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &DAT_00846418;
  uVar1 = param_1[0x3c];
  uVar2 = uVar1;
  if ((uint)param_1[0x3d] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[0x3d]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x3e] - uVar1) >> 2,0);
  fn_00397a78(param_1);
  fn_002feef8();
  return;
}


