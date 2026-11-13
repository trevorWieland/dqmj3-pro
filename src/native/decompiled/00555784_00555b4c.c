#include "00555784_00555b4c.h"



undefined4
fn_00555b4c(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,int param_5,
            undefined4 param_6,int *param_7)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_78;
  undefined4 uStack_74;
  undefined4 *puStack_70;
  undefined4 uStack_6c;
  int local_58;
  undefined4 local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined1 local_44;
  undefined4 local_40;
  uint local_3c;
  int iStack_34;
  int iStack_30;
  undefined4 *local_2c;
  undefined4 *puStack_28;
  
  bVar1 = false;
  iVar5 = 0;
  local_3c = (uint)(*(int *)(*(int *)(param_2 + 0x10) + 0x38) != 0);
  local_50 = 0xffffffff;
  iStack_4c = 0;
  iStack_34 = param_1;
  iStack_30 = param_2;
  local_2c = param_3;
  puStack_28 = param_4;
  if ((*(int *)(param_1 + 0x114) == 0) ||
     (local_58 = fn_006e2b3c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_2 + 0xb0)),
     local_58 == 0)) {
LAB_00555c5c:
    iVar3 = fn_006e2cf0(*(undefined4 *)(param_1 + 0x110),*local_2c);
  }
  else {
    piVar2 = *(int **)(param_1 + 0x114);
    if ((char)piVar2[1] == '\0') {
      iVar3 = 0;
    }
    else {
      local_78 = 0;
      iVar3 = (**(code **)(*piVar2 + 0x18))(piVar2,local_58,&DAT_00807cbc,(char *)&DAT_00807cca);
    }
    piVar2 = *(int **)(param_1 + 0x114);
    if ((char)piVar2[1] == '\0') {
      iVar4 = 0;
    }
    else {
      local_78 = 0;
      iVar4 = (**(code **)(*piVar2 + 0x18))(piVar2,local_58,&DAT_00807cbc,(char *)&DAT_00807cdc);
    }
    if (iVar3 == 0 || iVar4 == 0) goto LAB_00555c5c;
    fn_00162118(&puStack_70,iVar4,0);
    iVar5 = fn_001566bc(&puStack_70,*param_4);
    if (iVar5 == 0) goto LAB_00555c5c;
  }
  local_50 = *(undefined4 *)(param_2 + 0xb0);
  iStack_4c = iVar3;
  if (iVar3 == 0) {
    if (local_3c == 0) {
      return 7;
    }
  }
  else {
    if (iVar5 != 0) goto LAB_00555cf0;
    if (param_7 == (int *)0x0) {
      iVar5 = fn_0055a000(iVar3,*param_4,*(undefined4 *)(param_1 + 4));
    }
    else {
      iVar5 = *param_7;
    }
    if (iVar5 != 0) goto LAB_00555cf0;
    if (local_3c == 0) {
      return 8;
    }
  }
  bVar1 = true;
LAB_00555cf0:
  if (param_5 == 0) {
    local_44 = 1;
  }
  else if ((param_5 == 1) || (param_5 != 2)) {
    local_44 = 0;
    param_6 = 0;
  }
  else {
    local_44 = 0;
  }
  local_48 = *param_4;
  local_40 = param_6;
  if (bVar1) {
    local_78 = *(int *)(param_1 + 4);
    uStack_6c = *(undefined4 *)(param_2 + 0x10);
    uStack_74 = *(undefined4 *)(param_1 + 0x110);
    puStack_70 = &local_50;
    fn_0055f344(param_2,&local_78,&local_48);
  }
  else {
    local_78 = 0;
    if (param_7 != (int *)0x0) {
      local_78 = (int)(char)param_7[1];
    }
    fn_0055f4bc(param_2,iVar3,iVar5,&local_48);
  }
  fn_0055f3c4(param_2,*(undefined1 *)(param_4 + 2),(int)*(char *)((int)param_4 + 9));
  return 0;
}



undefined1 fn_00555b1c(void)

{
  undefined1 uVar1;
  
  uVar1 = fn_00555db0();
  return uVar1;
}



void fn_00555990(int *param_1,uint param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  undefined4 local_44;
  uint local_40;
  char local_3c;
  undefined1 auStack_38 [20];
  
  if (((int *)param_1[0x86] != (int *)0x0) && (uVar2 = 0, *(int *)param_1[0x86] != 0)) {
    do {
      iVar6 = uVar2 * 4 + 4;
      uVar2 = uVar2 + 1;
      uVar5 = *(uint *)(param_1[0x86] + iVar6);
      bVar9 = uVar5 <= param_2;
      bVar8 = param_2 == uVar5;
      if (!bVar9 || bVar8) {
        bVar9 = param_3 <= uVar5;
        bVar8 = uVar5 == param_3;
      }
      if (!bVar9 || bVar8) {
        *(undefined4 *)(param_1[0x86] + iVar6) = 0;
      }
    } while (uVar2 < *(uint *)param_1[0x86]);
  }
  iVar6 = param_1[4];
  if (iVar6 != 0) {
    uVar2 = fn_006e41e4();
    uVar5 = 0;
    if (uVar2 != 0) {
      do {
        local_3c = '\0';
        local_44 = 0xffffffff;
        iVar3 = fn_00156328(iVar6,uVar5 | 0x5000000,&local_44);
        cVar1 = '\0';
        if (iVar3 != 0) {
          cVar1 = local_3c;
        }
        if ((iVar3 != 0 && cVar1 != '\0') &&
           (iVar3 = (**(code **)(*param_1 + 0x10))(param_1,local_44), iVar3 != 0)) {
          fn_00162118(auStack_38,iVar3,1);
          uVar7 = 0;
          if (local_40 != 0) {
            do {
              uVar4 = fn_001566bc(auStack_38,uVar7);
              if (((uVar4 != 0) && (param_2 <= uVar4)) && (uVar4 <= param_3)) {
                fn_0015252c(auStack_38,uVar7,0);
              }
              uVar7 = uVar7 + 1;
            } while (uVar7 < local_40);
          }
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar2);
    }
  }
  return;
}



void fn_00555970(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00857ef0;
  return;
}



undefined1 * fn_0055590c(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0x7f;
  param_1[7] = 0x40;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  fn_00158f40(param_1 + 0xb,2,0xffffffff);
  *(undefined2 *)(param_1 + 5) = 0;
  return param_1;
}



int fn_005558e0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  fn_00150c1c(param_1 + 0x18);
  return iVar1 + -0x1c;
}



void fn_005558ac(int param_1,int param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x02') {
    fn_0017d948(param_1 + 0x18,param_1 + 0x1c,param_2 + 0x1c);
    return;
  }
  fn_0017d948(param_1 + 0x24,param_1 + 0x28,param_2 + 0x1c);
  return;
}



undefined4 fn_00555844(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1[0xc] != 0) {
    if (*param_1 < param_1[0xc]) {
      return 1;
    }
    iVar2 = param_1[4];
    if (iVar2 != 0x108) {
      iVar2 = (uint)*(byte *)(iVar2 + -0x6b) + *(int *)(iVar2 + -0xb8);
      if ((char)param_1[0x16] == '\0') {
        iVar1 = UnsignedSaturate(iVar2,7);
        UnsignedDoesSaturate(iVar2,7);
        if (iVar1 <= param_2) {
          return 1;
        }
      }
      else {
        iVar1 = UnsignedSaturate(iVar2,7);
        UnsignedDoesSaturate(iVar2,7);
        if (iVar1 < param_2) {
          return 1;
        }
      }
    }
  }
  return 0;
}



undefined4 fn_00555784(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (uint)*(byte *)(param_2 + 0x9d) + *(int *)(param_2 + 0x50);
  iVar1 = UnsignedSaturate(iVar3,7);
  UnsignedDoesSaturate(iVar3,7);
  if (param_1[0xc] != 0) {
    while( true ) {
      if (*param_1 < param_1[0xc]) {
        fn_0017d948(param_1,param_1 + 1,param_2 + 0x100);
        fn_0017deb4(param_1,param_2);
        *(int **)(param_2 + 0x10) = param_1;
        return 1;
      }
      iVar3 = param_1[4];
      if ((int *)(iVar3 + -0x108) == (int *)0x0) break;
      iVar4 = (uint)*(byte *)(iVar3 + -0x6b) + *(int *)(iVar3 + -0xb8);
      if ((char)param_1[0x16] == '\0') {
        iVar2 = UnsignedSaturate(iVar4,7);
        UnsignedDoesSaturate(iVar4,7);
        if (iVar1 < iVar2) {
          return 0;
        }
      }
      else {
        iVar2 = UnsignedSaturate(iVar4,7);
        UnsignedDoesSaturate(iVar4,7);
        if (iVar1 <= iVar2) {
          return 0;
        }
      }
      (**(code **)(*(int *)(iVar3 + -0x108) + 0x10))();
    }
  }
  return 0;
}


