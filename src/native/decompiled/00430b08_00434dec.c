#include "00430b08_00434dec.h"



void fn_00434dec(int *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  fn_002c263c();
  if (param_2 == 1) {
    cVar1 = (char)param_1[0x1f];
    bVar3 = cVar1 == '\0';
    if (bVar3) {
      cVar1 = *(char *)((int)param_1 + 0xe5);
    }
    if (bVar3 && cVar1 == '\0') {
      param_1[0x50] = 1;
      (**(code **)(*param_1 + 0x110))(param_1,7,0,0,1);
      return;
    }
LAB_00434e80:
    (**(code **)(*param_1 + 0x110))(param_1,param_1[0x50],0,0,1);
    return;
  }
  if (param_2 == 4) {
    iVar2 = fn_00430f14(param_1,param_3,1);
    if (iVar2 == 0) {
      if ((char)param_1[0x1f] == '\0') {
        param_1[0x51] = param_3;
        (**(code **)(*param_1 + 0x110))(param_1,7,1,0);
      }
      else {
        fn_0042fea4(param_1,param_3);
        fn_0068ab44(param_1,0x100094f);
      }
    }
    if ((*(uint *)(param_1[0x45] + 0xc) & 8) != 0) {
LAB_00434e64:
      fn_0043243c();
      return;
    }
    if ((*(uint *)(param_1[0x45] + 0xc) & 4) == 0) {
      return;
    }
  }
  else {
    if (param_2 != 7) {
      return;
    }
    if (param_3 == 0) goto LAB_00434e80;
    (**(code **)(*param_1 + 0x110))(param_1,4,param_1[0x51],0);
    fn_0042fea4(param_1,param_1[0x51]);
    if ((*(uint *)(param_1[0x45] + 0xc) & 8) != 0) goto LAB_00434e64;
    if ((*(uint *)(param_1[0x45] + 0xc) & 4) == 0) {
      return;
    }
  }
  fn_00433620(param_1);
  return;
}



void fn_004349f0(int *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  fn_002c2070();
  if (param_2 == 1) {
    cVar1 = (char)param_1[0x1f];
    bVar3 = cVar1 == '\0';
    if (bVar3) {
      cVar1 = *(char *)((int)param_1 + 0xe5);
    }
    if (bVar3 && cVar1 == '\0') {
      param_1[0x50] = 1;
      (**(code **)(*param_1 + 0x110))(param_1,7,0,0,1);
      return;
    }
    (**(code **)(*param_1 + 0x110))(param_1,1,3,0,1);
  }
  else {
    if (param_2 == 4) {
      iVar2 = fn_0043100c(param_1,param_3);
      if (iVar2 == 0) {
        if ((char)param_1[0x1f] == '\0') {
          param_1[0x51] = param_3;
          (**(code **)(*param_1 + 0x110))(param_1,7,1,0);
        }
        else {
          fn_0042fdf8(param_1,param_3);
          fn_0068ab44(param_1,0x100094f);
        }
      }
      if ((*(uint *)(param_1[0x45] + 0xc) & 8) == 0) {
        if ((*(uint *)(param_1[0x45] + 0xc) & 4) == 0) {
          return;
        }
LAB_00434b74:
        fn_00433620(param_1);
        return;
      }
LAB_00434a68:
      fn_0043243c();
      return;
    }
    if (param_2 == 7) {
      if (param_3 == 0) {
        (**(code **)(*param_1 + 0x110))(param_1,param_1[0x50],3,0);
        return;
      }
      (**(code **)(*param_1 + 0x110))(param_1,4,param_1[0x51],0);
      fn_0042fdf8(param_1,param_1[0x51]);
      if ((*(uint *)(param_1[0x45] + 0xc) & 8) != 0) goto LAB_00434a68;
      if ((*(uint *)(param_1[0x45] + 0xc) & 4) != 0) goto LAB_00434b74;
    }
  }
  return;
}



void fn_004344d0(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (param_2 != 0) {
    fn_0068ab44(param_1,0x100094c);
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x114) + 0x10);
    goto LAB_004344f0;
  }
  if (*(char *)(*(int *)(param_1 + 0x118) + 0x24) == '\0') {
    fn_0068ab44(param_1,0x100094d);
    return;
  }
  uVar1 = *(uint *)(*(int *)(param_1 + 0x114) + 0xc);
  if ((uVar1 & 1) == 0) {
    if ((uVar1 & 6) == 0) {
      if ((uVar1 & 8) == 0) {
        if ((uVar1 & 0x70) != 0) goto LAB_0043457c;
      }
      else {
        fn_00432620(param_1);
      }
    }
    else {
LAB_0043457c:
      fn_00432fdc(param_1);
    }
  }
  else {
    fn_0043213c(param_1);
  }
  fn_0068ab44(param_1,0x100094b);
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x114) + 0x14);
LAB_004344f0:
  fn_006899f4(param_1,uVar2,0,1);
  (**(code **)(**(int **)(param_1 + 0x114) + 0xc))();
  *(undefined1 *)(param_1 + 0x14c) = 4;
  return;
}



bool fn_00433aec(int param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  
  iVar1 = fn_00433f60();
  if (iVar1 == 0) {
    iVar1 = fn_004341e8(param_1,param_2,param_3,param_4);
    if (iVar1 == 0) {
      return false;
    }
    iVar1 = fn_002e84d4(*param_4);
  }
  else {
    iVar1 = fn_002e84d4(*param_4);
  }
  if (iVar1 == 0) {
    uVar2 = fn_002e8628(*param_4);
    uVar2 = fn_00168a24(auStack_28,uVar2,auStack_24);
    fn_00380424(param_1,uVar2);
    fn_001588d4(auStack_28);
    *param_4 = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x14e) = 1;
  }
  return iVar1 == 0;
}



void fn_00433818(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined2 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *local_2c;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [8];
  
  if (((*(byte *)(*(int *)(param_1 + 0x114) + 0xc) & 8) != 0) &&
     (*(char *)(param_1 + 0x14e) != '\0')) {
    *(undefined1 *)(param_1 + 0x14e) = 0;
    uVar1 = fn_002e8628(*(undefined1 *)(param_1 + 0x14d));
    puVar2 = (undefined4 *)fn_00168a24(auStack_28,uVar1,auStack_24);
    local_2c = (undefined4 *)*puVar2;
    puVar6 = &DAT_008f9ce8;
    if (local_2c[-3] == -1) {
      uVar5 = local_2c[-1];
      if (0xfffffff1 < uVar5) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar5,0xfffffff1);
      }
      if (uVar5 != 0) {
        puVar6 = (undefined4 *)fn_00100fc6((uVar5 + 8) * 2,0);
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = 0;
          puVar6[1] = 0;
          puVar6[2] = 0;
        }
        puVar6[1] = uVar5;
        puVar4 = (undefined2 *)((int)puVar6 + uVar5 * 2 + 0xc);
        puVar6[2] = uVar5;
        *puVar6 = 0;
        if (puVar4 != (undefined2 *)0x0) {
          *puVar4 = 0;
        }
      }
      local_2c = puVar6 + 3;
      fn_00301a9c(local_2c,*puVar2,uVar5 << 1);
    }
    else {
      piVar3 = local_2c + -3;
      if (piVar3 != &DAT_008f9ce8) {
        *piVar3 = *piVar3 + 1;
      }
    }
    fn_00380424(param_1,&local_2c);
    fn_001588d4(&local_2c);
    fn_00380308(param_1);
    fn_001588d4(auStack_28);
    *(undefined1 *)(param_1 + 0x14d) = 0;
  }
  uVar5 = *(uint *)(*(int *)(param_1 + 0x114) + 0xc);
  if ((uVar5 & 8) != 0) {
    fn_0043243c();
    return;
  }
  if ((uVar5 & 4) == 0) {
    return;
  }
  fn_00433620(param_1);
  return;
}



void fn_004328f4(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined2 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *local_2c;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [8];
  
  if (((*(byte *)(*(int *)(param_1 + 0x114) + 0xc) & 8) != 0) &&
     (*(char *)(param_1 + 0x14e) != '\0')) {
    *(undefined1 *)(param_1 + 0x14e) = 0;
    uVar1 = fn_002e8628(*(undefined1 *)(param_1 + 0x14d));
    puVar2 = (undefined4 *)fn_00168a24(auStack_28,uVar1,auStack_24);
    local_2c = (undefined4 *)*puVar2;
    puVar6 = &DAT_008f9ce8;
    if (local_2c[-3] == -1) {
      uVar5 = local_2c[-1];
      if (0xfffffff1 < uVar5) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar5,0xfffffff1);
      }
      if (uVar5 != 0) {
        puVar6 = (undefined4 *)fn_00100fc6((uVar5 + 8) * 2,0);
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = 0;
          puVar6[1] = 0;
          puVar6[2] = 0;
        }
        puVar6[1] = uVar5;
        puVar4 = (undefined2 *)((int)puVar6 + uVar5 * 2 + 0xc);
        puVar6[2] = uVar5;
        *puVar6 = 0;
        if (puVar4 != (undefined2 *)0x0) {
          *puVar4 = 0;
        }
      }
      local_2c = puVar6 + 3;
      fn_00301a9c(local_2c,*puVar2,uVar5 << 1);
    }
    else {
      piVar3 = local_2c + -3;
      if (piVar3 != &DAT_008f9ce8) {
        *piVar3 = *piVar3 + 1;
      }
    }
    fn_00380424(param_1,&local_2c);
    fn_001588d4(&local_2c);
    fn_00380308(param_1);
    fn_001588d4(auStack_28);
    *(undefined1 *)(param_1 + 0x14d) = 0;
  }
  uVar5 = *(uint *)(*(int *)(param_1 + 0x114) + 0xc);
  if ((uVar5 & 8) != 0) {
    fn_0043243c();
    return;
  }
  if ((uVar5 & 4) == 0) {
    return;
  }
  fn_00433620(param_1);
  return;
}



void fn_00430b08(void)

{
  int iVar1;
  
  iVar1 = fn_002bf4f4();
  *(undefined4 **)(iVar1 + 0x54) = &DAT_008f9cf4;
  *(undefined4 *)(iVar1 + 0x58) = 0;
  *(undefined1 *)(iVar1 + 0x5c) = 1;
  *(undefined1 *)(iVar1 + 0x5d) = 1;
  *(undefined1 *)(iVar1 + 0x5e) = 1;
  return;
}


