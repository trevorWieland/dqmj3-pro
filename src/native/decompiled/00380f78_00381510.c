#include "00380f78_00381510.h"



undefined4 fn_00381510(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  undefined4 local_8c;
  undefined4 local_88;
  uint local_84;
  uint local_80;
  int local_7c;
  undefined1 local_76;
  uint local_70;
  uint local_6c;
  int local_68;
  undefined1 local_62;
  uint local_5c;
  uint uStack_58;
  int local_54;
  undefined1 local_4e;
  int local_44;
  int local_40;
  int local_30 [3];
  undefined4 local_24;
  undefined1 local_20;
  
  fn_002bf4f4(&local_8c);
  local_8c = DAT_008946a0;
  local_88 = DAT_008946a4;
  local_76 = 1;
  local_62 = 1;
  local_4e = 1;
  local_44 = param_1[0x3f];
  local_40 = param_1[0x40];
  fn_002be0c4(param_1,&local_8c);
  iVar1 = fn_00178f9c(param_1[0x20],param_1[0x22]);
  param_1[0x38] = *(int *)(iVar1 + 0x10);
  iVar1 = fn_006b846c(*(undefined4 *)(DAT_00897804 + 0xc));
  param_1[0x36] = iVar1;
  iVar1 = fn_006b8600(*(undefined4 *)(DAT_00897804 + 0xc));
  param_1[0x37] = iVar1;
  uVar2 = fn_00178f9c(param_1[0x20],param_1[0x22]);
  uVar3 = fn_00172c98(uVar2,(char *)&DAT_00381948);
  iVar1 = fn_00145b00(0x30,&DAT_00812c8c);
  piVar4 = (int *)0x0;
  if (iVar1 != 0) {
    piVar4 = (int *)fn_002b20c0(iVar1,param_1[1],uVar3,1,param_1[0x12],1,0);
  }
  piVar6 = (int *)param_1[0x39];
  if (piVar6 != piVar4) {
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 4))(piVar6);
    }
    param_1[0x39] = (int)piVar4;
  }
  (**(code **)(*(int *)param_1[0x39] + 0x10))();
  fn_002b20a4(param_1[0x39],0);
  fn_002b1f48(param_1[0x39],0);
  uVar2 = fn_00172c98(uVar2,(char *)&DAT_00381958);
  iVar1 = fn_00145b00(0x88,&DAT_00812c8c);
  piVar4 = (int *)0x0;
  if (iVar1 != 0) {
    piVar4 = (int *)fn_0031fee0(iVar1,param_1[1],uVar2,1,param_1[0x12]);
  }
  piVar6 = (int *)param_1[0x3a];
  if (piVar6 != piVar4) {
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 4))(piVar6);
    }
    param_1[0x3a] = (int)piVar4;
  }
  (**(code **)(*(int *)param_1[0x3a] + 0x10))();
  fn_0031f8fc(param_1[0x3a],1,0,0,0xffffffff);
  iVar1 = param_1[0x3a];
  *(undefined1 *)(iVar1 + 0x7f) = 0;
  fn_0031ef00(iVar1,0,0);
  iVar1 = param_1[0x3a];
  *(undefined1 *)(iVar1 + 0x81) = 1;
  fn_0031f3f4(iVar1,0);
  iVar1 = fn_00145b00(0xe4,&DAT_00812c8c);
  piVar4 = (int *)0x0;
  if (iVar1 != 0) {
    piVar4 = (int *)fn_001caa80(iVar1,param_1[1],1);
  }
  piVar6 = (int *)param_1[0x3b];
  if (piVar6 != piVar4) {
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 4))(piVar6);
    }
    param_1[0x3b] = (int)piVar4;
  }
  *(int **)(param_1[0x3b] + 8) = param_1;
  (**(code **)(*(int *)param_1[0x3b] + 0x24))((int *)param_1[0x3b],1);
  *(undefined1 *)(param_1[0x3b] + 0x45) = 0;
  *(undefined1 *)(param_1[0x3b] + 0x44) = 0;
  *(undefined4 *)(param_1[0x3b] + 0x10) = 0x100094e;
  fn_001c9d44(param_1[0x3b],0,*(undefined4 *)(param_1[0x39] + 0x1c),0);
  *(undefined1 *)(param_1[0x3b] + 0x46) = 0;
  fn_00245330(param_1,param_1[0x3b]);
  fn_00381e08(param_1);
  if (((*(char *)((int)param_1 + 0x105) != '\0') && ((char)param_1[0x41] == '\0')) &&
     (iVar1 = param_1[0x3a], iVar1 != 0)) {
    *(undefined1 *)(iVar1 + 0x7f) = 0;
    fn_0031ef00(iVar1,0,0);
  }
  fn_002c07c0(local_30);
  local_30[0] = param_1[0x3f];
  local_30[1] = 0;
  local_30[2] = param_1[0x40];
  local_24 = *(undefined4 *)(param_1[0x35] + 0xc);
  local_20 = fn_0068b2a8();
  (**(code **)(*param_1 + 0x110))(param_1,local_30[0],local_30[2],0,0);
  if (param_1[0x3f] == 4) {
    piVar4 = (int *)(param_1[0x2b] + 4);
    if (*(int *)(param_1[0x2b] + 8) - *piVar4 >> 2 == 0) {
      fn_002ff628(9,&DAT_008c7672,&DAT_008c7672,0,0);
    }
    *(undefined4 *)*piVar4 = local_24;
    (*(code *)**(undefined4 **)param_1[0x2b])((undefined4 *)param_1[0x2b],0);
  }
  fn_002c14e4(param_1,local_30);
  iVar1 = fn_00154ac8(0x1e2);
  if (iVar1 == 0) {
    fn_00144834(0x1e2,1);
    uVar2 = fn_0022f584((char *)&DAT_00381978,0);
    fn_0068974c(param_1,uVar2,0,1);
  }
  uVar5 = local_5c;
  if (uStack_58 < local_5c) {
    do {
      uVar5 = uVar5 + 4;
    } while (uVar5 != uStack_58);
  }
  fn_001008c4(local_5c,(int)(local_54 - local_5c) >> 2,0);
  uVar5 = local_70;
  if (local_6c < local_70) {
    do {
      uVar5 = uVar5 + 4;
    } while (uVar5 != local_6c);
  }
  fn_001008c4(local_70,(int)(local_68 - local_70) >> 2,0);
  uVar5 = local_84;
  if (local_80 < local_84) {
    do {
      uVar5 = uVar5 + 4;
    } while (uVar5 != local_80);
  }
  fn_001008c4(local_84,(int)(local_7c - local_84) >> 2,0);
  return 1;
}



/* WARNING: Removing unreachable block (ram,0x003814f0) */
/* WARNING: Removing unreachable block (ram,0x0038150c) */

undefined4 fn_003813f4(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  
  uVar1 = fn_002bf534();
  if (*(char *)(param_1 + 0x105) != '\0') {
    bVar5 = *(int *)(param_1 + 0x68) != 1;
    iVar2 = 1;
    if (bVar5) {
      iVar2 = *param_2;
    }
    if (!bVar5 || iVar2 == 1) {
      if (*(int *)(param_1 + 0xd8) != 0) {
        uVar3 = fn_002c11d0(param_1,1,0);
        iVar2 = 0;
        do {
          iVar4 = fn_002e3e9c(uVar3,0,iVar2);
          if (iVar4 == *(int *)(param_1 + 0xd8)) goto LAB_0038147c;
          iVar2 = iVar2 + 1;
        } while (iVar2 < 4);
      }
      *(undefined4 *)(param_1 + 0xd8) = 0;
LAB_0038147c:
      if (*(int *)(param_1 + 0xd8) != 0) {
        uVar3 = fn_002c11d0(param_1,1,0);
        iVar2 = 0;
        do {
          iVar4 = fn_002e3e9c(uVar3,0,iVar2);
          if (iVar4 == *(int *)(param_1 + 0xdc)) goto LAB_003814e0;
          iVar2 = iVar2 + 1;
        } while (iVar2 < 4);
      }
      *(undefined4 *)(param_1 + 0xdc) = 0;
LAB_003814e0:
      fn_00381e08(param_1);
    }
  }
  return uVar1;
}



void fn_00381320(int *param_1,byte param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  *(byte *)(param_1 + 0x41) = param_2;
  piVar2 = (int *)fn_002c11d0(param_1,4,0,param_4,param_4);
  iVar5 = 0;
  do {
    iVar3 = (**(code **)(*piVar2 + 0xc))(piVar2,iVar5);
    iVar5 = iVar5 + 1;
    *(byte *)(iVar3 + 0x35) = param_2 ^ 1;
  } while (iVar5 < 8);
  fn_00382058(param_1,(int)(char)param_1[0x41]);
  iVar5 = param_1[0x41];
  iVar3 = fn_002c11d0(param_1,1,0);
  *(char *)(*(int *)(iVar3 + 0x10) + 0xe7) = (char)iVar5;
  cVar1 = (char)param_1[0x41];
  if ((int)cVar1 == 0) {
    uVar4 = 1;
  }
  else {
    uVar4 = 3;
  }
  fn_0031f8fc(param_1[0x3a],uVar4);
  iVar5 = param_1[0x3a];
  *(char *)(iVar5 + 0x85) = cVar1;
  fn_0031ee10(iVar5,0);
                    /* WARNING: Could not recover jumptable at 0x003813f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x198))(param_1,(int)cVar1 ^ 1);
  return;
}



void fn_00381044(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_28;
  int local_24 [2];
  int local_1c;
  
  fn_002bf2cc();
  if ((char)param_1[0x1f] == '\0') {
    iVar1 = (**(code **)(*(int *)param_1[0x3b] + 0x90))();
    if (-1 < iVar1) {
      fn_002c07c0(local_24);
      local_24[0] = 6;
      local_1c = iVar1;
      iVar1 = (**(code **)(*(int *)param_1[0x3b] + 0xa0))();
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
    iVar1 = (**(code **)(*(int *)param_1[0x3b] + 0x6c))();
    if (-1 < iVar1) {
      if (param_1[0x19] == 6) {
        fn_002b20a4(param_1[0x39],0);
        (**(code **)(*param_1 + 0x168))(param_1,*(undefined4 *)(param_1[0x39] + 0x1c));
      }
      else {
        local_28 = 1;
        (**(code **)(*param_1 + 0x110))(param_1,6,0);
      }
    }
    iVar1 = (**(code **)(*(int *)param_1[0x3b] + 100))();
    if (-1 < iVar1) {
      if (param_1[0x19] == 6) {
        fn_002b20a4(param_1[0x39],1);
        (**(code **)(*param_1 + 0x168))(param_1,*(undefined4 *)(param_1[0x39] + 0x1c));
      }
      else {
        local_28 = 1;
        (**(code **)(*param_1 + 0x110))(param_1,6,iVar1,1);
      }
    }
  }
  if (param_1[0x19] == 6) {
    iVar1 = (**(code **)(*(int *)param_1[0x3b] + 0xb8))();
    if (iVar1 < 0) {
      iVar1 = (**(code **)(*(int *)param_1[0x3b] + 0x6c))();
      if (-1 < iVar1) {
        fn_002b20a4(param_1[0x39],0);
        (**(code **)(*param_1 + 0x168))(param_1,*(undefined4 *)(param_1[0x39] + 0x1c));
      }
      iVar1 = (**(code **)(*(int *)param_1[0x3b] + 100))();
      if (-1 < iVar1) {
        fn_002b20a4(param_1[0x39],1);
        (**(code **)(*param_1 + 0x168))(param_1,*(undefined4 *)(param_1[0x39] + 0x1c));
      }
      iVar1 = (**(code **)(*(int *)param_1[0x3b] + 0x34))();
      if (iVar1 != 0) {
        uVar2 = (**(code **)(*(int *)param_1[0x3b] + 0x5c))();
        (**(code **)(*param_1 + 0x144))(param_1,param_1[0x19],uVar2);
      }
      iVar1 = (**(code **)(*(int *)param_1[0x3b] + 0x38))();
      if (iVar1 != 0) {
        uVar2 = (**(code **)(*(int *)param_1[0x3b] + 0x5c))();
                    /* WARNING: Could not recover jumptable at 0x0038131c. Too many branches */
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



void fn_00380f78(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  *param_1 = &PTR_FUN_00829520;
  puVar1 = (undefined4 *)param_1[0x41];
  if (puVar1 != &DAT_008f9cf4) {
    piVar2 = puVar1 + -3;
    iVar3 = *piVar2;
    if ((iVar3 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar3 + -1, iVar3 == 0)))) {
      iVar3 = param_1[0x41];
      fn_001008c4(iVar3 + -0xc,*(int *)(iVar3 + -8) + 8,0);
    }
  }
  puVar1 = (undefined4 *)param_1[0x40];
  if (puVar1 == &DAT_008f9cf4) goto LAB_00381018;
  piVar2 = puVar1 + -3;
  iVar3 = *piVar2;
  if (iVar3 != -1) {
    if (piVar2 == &DAT_008f9ce8) goto LAB_00381018;
    *piVar2 = iVar3 + -1;
    if (iVar3 != 0) goto LAB_00381018;
  }
  iVar3 = param_1[0x40];
  fn_001008c4(iVar3 + -0xc,*(int *)(iVar3 + -8) + 8,0);
LAB_00381018:
  if ((int *)param_1[0x3c] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x3c] + 4))();
  }
  fn_00431574(param_1);
  return;
}


