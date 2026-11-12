#include "00382358_00382d04.h"



undefined1 * fn_00382d04(int param_1,int *param_2,undefined4 param_3)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint local_30;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  
  puVar2 = *(uint **)(param_1 + 0xfc);
  if (puVar2 == (uint *)0x0) {
    uVar4 = 0;
    uVar5 = 0;
    do {
      uVar1 = param_2[1] - *param_2 >> 2;
      if (uVar1 <= uVar5) {
        local_30 = uVar1;
        fn_002ff628(9,&DAT_008c7672,&DAT_008c7672,uVar5);
      }
      iVar3 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),*(undefined4 *)(*param_2 + uVar5 * 4)
                          );
      puVar2 = (uint *)(undefined1 *)0x0;
      if (iVar3 != 0) {
        fn_0020bbc4(&local_30);
        fn_006bfe90(auStack_2c);
        iVar3 = fn_001cab7c();
        uVar4 = uVar4 + iVar3;
        puVar2 = &local_30;
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < 4);
    if ((int)uVar4 < 4) {
      uVar6 = *(undefined4 *)(*(int *)(param_1 + 0xd4) + 0xc);
      iVar3 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),uVar6);
      puVar2 = (uint *)0x0;
      if (iVar3 != 0) {
        fn_0020bbc4(auStack_28);
        fn_006bfe90(auStack_24);
        iVar3 = fn_001cab7c();
        if ((int)(iVar3 + uVar4) < 5) {
          local_30 = param_2[1] - *param_2 >> 2;
          if (local_30 <= uVar4) {
            fn_002ff628(9,&DAT_008c7672,&DAT_008c7672,uVar4);
          }
          *(undefined4 *)(*param_2 + uVar4 * 4) = uVar6;
          *(undefined4 *)(param_1 + 0xfc) = param_3;
          *(uint *)(param_1 + 0x100) = uVar4;
        }
        puVar2 = (uint *)auStack_28;
      }
    }
  }
  return (undefined1 *)puVar2;
}



undefined1 * fn_00382ce0(int param_1,int *param_2)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uStack_30;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [16];
  
  fn_002c0020();
  puVar2 = *(uint **)(param_1 + 0xfc);
  if (puVar2 == (uint *)0x0) {
    uVar4 = 0;
    uVar5 = 0;
    do {
      uVar1 = param_2[1] - *param_2 >> 2;
      if (uVar1 <= uVar5) {
        uStack_30 = uVar1;
        fn_002ff628(9,&DAT_008c7672,&DAT_008c7672,uVar5);
      }
      iVar3 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),*(undefined4 *)(*param_2 + uVar5 * 4)
                          );
      puVar2 = (uint *)(undefined1 *)0x0;
      if (iVar3 != 0) {
        fn_0020bbc4(&uStack_30);
        fn_006bfe90(auStack_2c);
        iVar3 = fn_001cab7c();
        uVar4 = uVar4 + iVar3;
        puVar2 = &uStack_30;
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < 4);
    if ((int)uVar4 < 4) {
      uVar6 = *(undefined4 *)(*(int *)(param_1 + 0xd4) + 0xc);
      iVar3 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),uVar6);
      puVar2 = (uint *)0x0;
      if (iVar3 != 0) {
        fn_0020bbc4(auStack_28);
        fn_006bfe90(auStack_24);
        iVar3 = fn_001cab7c();
        if ((int)(iVar3 + uVar4) < 5) {
          uStack_30 = param_2[1] - *param_2 >> 2;
          if (uStack_30 <= uVar4) {
            fn_002ff628(9,&DAT_008c7672,&DAT_008c7672,uVar4);
          }
          *(undefined4 *)(*param_2 + uVar4 * 4) = uVar6;
          *(undefined4 *)(param_1 + 0xfc) = 1;
          *(uint *)(param_1 + 0x100) = uVar4;
        }
        puVar2 = (uint *)auStack_28;
      }
    }
  }
  return (undefined1 *)puVar2;
}



void fn_00382c44(int *param_1,int param_2,undefined4 param_3)

{
  fn_002c265c();
  if (param_2 == 1) {
    (**(code **)(*param_1 + 0x110))(param_1,2,param_3,0,1);
    return;
  }
  if (param_2 == 2) {
    (**(code **)(*param_1 + 0x110))(param_1,4,param_3,0,1);
    return;
  }
  if (param_2 == 4) {
    (**(code **)(*param_1 + 0x110))(param_1,1,param_3,0,1);
  }
  return;
}



bool fn_00382bb0(int param_1,int param_2)

{
  undefined4 uVar1;
  int in_stack_00000004;
  
  if (param_2 == 1 && in_stack_00000004 == 0) {
    uVar1 = fn_0022f584((char *)&DAT_00382c24,0);
    fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar1,1,0,1,1,0,0,1);
    fn_00689bd0(param_1,0x48,0);
  }
  return param_2 == 1 && in_stack_00000004 == 0;
}



void fn_00382b14(int *param_1,int param_2,undefined4 param_3)

{
  fn_002c2648();
  if (param_2 == 1) {
    (**(code **)(*param_1 + 0x110))(param_1,4,param_3,0,1);
    return;
  }
  if (param_2 == 2) {
    (**(code **)(*param_1 + 0x110))(param_1,1,param_3,0,1);
    return;
  }
  if (param_2 == 4) {
    (**(code **)(*param_1 + 0x110))(param_1,2,param_3,0,1);
  }
  return;
}



void fn_003829f8(int *param_1,int param_2,int param_3)

{
  fn_002c263c();
  if ((param_2 == 1 || param_2 == 2) || param_2 == 4) {
    if ((char)param_1[0x1f] == '\0') {
      if ((char)param_1[0x41] == '\0') {
        param_1[0x3d] = param_2;
        param_1[0x3e] = param_3;
        (**(code **)(*param_1 + 0x110))(param_1,6,0,0,1);
        return;
      }
    }
    else if ((char)param_1[0x41] == '\0') {
      (**(code **)(*param_1 + 0x110))(param_1,param_2,param_3,0,1);
      return;
    }
    (**(code **)(*param_1 + 0x110))(param_1,param_2,0,0,1);
    return;
  }
  if (param_2 == 6) {
    if (param_1[0x3d] == 4) {
      (**(code **)(*param_1 + 0x110))(param_1,4,param_1[0x3e] % 2,0,1);
      return;
    }
    (**(code **)(*param_1 + 0x110))(param_1,param_1[0x3d],0,0,1);
  }
  return;
}



void fn_003829c8(int param_1)

{
  fn_002c246c();
  (**(code **)(**(int **)(param_1 + 0xe4) + 0x14))();
                    /* WARNING: Could not recover jumptable at 0x003829f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0xe8) + 0x14))();
  return;
}



void fn_0038294c(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  if (((char)param_1[0x1f] == '\0') && ((char)param_1[0x41] == '\0')) {
    param_1[0x3d] = *param_2;
    param_1[0x3e] = param_2[2];
    (**(code **)(*param_1 + 0x110))(param_1,6,0);
    fn_0068ab44(param_1,0x100094e);
    return;
  }
  fn_0068ab44(param_1,0x100094d,param_3,param_4);
  return;
}



void fn_003828f0(int param_1)

{
  uint uVar1;
  
  uVar1 = fn_006f6a5c();
  if ((uVar1 & 0x100000) == 0) {
    if ((uVar1 & 0x200000) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0xd0) + 0x18) = 2;
    }
  }
  else {
    *(undefined1 *)(*(int *)(param_1 + 0xd0) + 0x18) = 1;
  }
  (**(code **)(**(int **)(param_1 + 0xec) + 0x1c))();
                    /* WARNING: Could not recover jumptable at 0x00382948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0xec) + 0x20))();
  return;
}



void fn_003827d0(int *param_1,int param_2,int param_3)

{
  fn_002c2070();
  if ((param_2 != 1 && param_2 != 2) && param_2 != 4) {
    if (param_2 == 6) {
      (**(code **)(*param_1 + 0x110))(param_1);
    }
    return;
  }
  if ((char)param_1[0x1f] == '\0') {
    if ((char)param_1[0x41] == '\0') {
      param_1[0x3d] = param_2;
      param_1[0x3e] = param_3;
      (**(code **)(*param_1 + 0x110))(param_1,6,0,0,1);
      return;
    }
  }
  else if ((char)param_1[0x41] == '\0') {
    (**(code **)(*param_1 + 0x110))(param_1,param_2,param_3,0,1);
    return;
  }
  (**(code **)(*param_1 + 0x110))(param_1,param_1[0x3d],3,0,1);
  return;
}



void fn_00382358(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  if (*(char *)(param_1 + 0x105) != '\0') {
    if (*param_2 == 1) {
      if ((*(char *)(param_1 + 0x106) == '\0') ||
         (iVar2 = fn_006b51cc(*(undefined4 *)(DAT_00897804 + 0x1c)), iVar2 != 1)) {
        iVar2 = param_2[3];
        if (*(char *)(param_1 + 0x105) != '\0') {
          if (*(int *)(param_1 + 0xd8) == iVar2) {
            iVar2 = 0;
          }
          *(int *)(param_1 + 0xd8) = iVar2;
          if ((iVar2 != 0) && (iVar2 == *(int *)(param_1 + 0xdc))) {
            *(undefined4 *)(param_1 + 0xdc) = 0;
          }
          fn_00381e08(param_1);
          fn_0068ab44(param_1,0x100094b);
          return;
        }
      }
      else {
        bVar3 = *(char *)(param_1 + 0x105) != '\0';
        cVar1 = '\0';
        if (bVar3) {
          cVar1 = *(char *)(param_1 + 0x106);
        }
        if ((bVar3 && cVar1 != '\0') &&
           (iVar2 = fn_006b51cc(*(undefined4 *)(DAT_00897804 + 0x1c)), iVar2 == 1)) {
          fn_00381320(param_1,*(char *)(param_1 + 0x104) != '\x01');
          iVar2 = *(int *)(param_1 + 0xe4);
          if (*(char *)(param_1 + 0x104) == '\x01') {
            if (iVar2 != 0) {
              fn_002b1f48(iVar2,0);
              fn_002b1f0c(iVar2,1);
            }
          }
          else if (iVar2 != 0) {
            fn_002b1f48(iVar2,1);
            fn_002b1f0c(iVar2,0);
          }
          fn_0068ab44(param_1,0x100094b);
          return;
        }
      }
    }
    else if (*param_2 != 4) {
      fn_0068ab44(param_1,0x100094d);
      return;
    }
  }
  return;
}


