#include "002241e4_00224ae8.h"



void fn_00224ae8(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  
  puVar5 = (uint *)(param_1 + 0x200);
  uVar1 = *puVar5;
  puVar6 = (uint *)(param_1 + 0x1fc);
  if (uVar1 == *(uint *)(param_1 + 0x204)) {
    uVar4 = (int)(uVar1 - *puVar6) / 0x44;
    if (uVar4 < (uint)((int)(*(uint *)(param_1 + 0x204) - *puVar6) / 0x44)) {
      *puVar5 = uVar1 + 0x44;
      if (uVar1 != 0) {
        fn_0017821c(uVar1,uVar1 - 0x44,0x44);
      }
      uVar4 = uVar1 - 0x44;
      uVar8 = uVar1;
      if (uVar1 < uVar4) {
        if (0 < (int)(uVar4 - uVar1)) {
          uVar8 = (int)(uVar4 - uVar1) / 0x44;
          uVar2 = uVar1;
          if ((uVar8 & 1) != 0) {
            uVar4 = uVar1 - 0x88;
            uVar2 = uVar1 - 0x44;
            fn_0017821c(uVar2,uVar4,0x44);
          }
          for (iVar7 = (int)uVar8 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
            fn_0017821c(uVar2 - 0x44,uVar4 - 0x44,0x44);
            uVar4 = uVar4 - 0x88;
            uVar2 = uVar2 - 0x88;
            fn_0017821c(uVar2,uVar4,0x44);
          }
        }
      }
      else {
        while (uVar1 != uVar4) {
          uVar4 = uVar4 - 0x44;
          fn_0017821c(uVar8 - 0x44,uVar4,0x44);
          uVar8 = uVar8 - 0x44;
        }
      }
      fn_0017821c(uVar1,param_2,0x44);
      return;
    }
    uVar8 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
    if (uVar8 < uVar4 + 0x20) {
      uVar8 = uVar4 + 0x20;
    }
    uVar3 = fn_00100fc6(uVar8 * 0x44,0);
    uVar2 = uVar3;
    for (uVar4 = *puVar6; uVar4 != uVar1; uVar4 = uVar4 + 0x44) {
      if (uVar2 != 0) {
        fn_0017821c(uVar2,uVar4,0x44);
      }
      uVar2 = uVar2 + 0x44;
    }
    iVar7 = uVar3 + ((int)(uVar1 - *puVar6) / 0x44) * 0x44;
    if (iVar7 != 0) {
      fn_0017821c(iVar7,param_2);
    }
    uVar4 = *puVar5;
    iVar7 = uVar3 + ((int)(uVar1 - *puVar6) / 0x44) * 0x44;
    for (; uVar1 != uVar4; uVar1 = uVar1 + 0x44) {
      iVar7 = iVar7 + 0x44;
      if (iVar7 != 0) {
        fn_0017821c(iVar7,uVar1,0x44);
      }
    }
    uVar4 = *puVar6;
    uVar2 = *puVar5;
    uVar1 = uVar4;
    if (uVar2 < uVar4) {
      do {
        uVar1 = uVar1 + 0x44;
      } while (uVar1 != uVar2);
    }
    fn_001008c4(uVar4,(int)(*(int *)(param_1 + 0x204) - uVar4) / 0x44,0);
    *puVar6 = uVar3;
    *puVar5 = uVar3 + ((int)(uVar2 - uVar4) / 0x44) * 0x44 + 0x44;
    *(uint *)(param_1 + 0x204) = uVar3 + uVar8 * 0x44;
  }
  else {
    *puVar5 = uVar1 + 0x44;
    if (uVar1 != 0) {
      fn_0017821c(uVar1,param_2,0x44);
      return;
    }
  }
  return;
}



void fn_00224908(int *param_1,undefined4 param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  float in_s0;
  int local_28;
  float local_24;
  int local_20;
  
  iVar2 = fn_006b51cc(*(undefined4 *)(DAT_00897804 + 0x1c));
  if ((iVar2 == 1) && (iVar2 = fn_006f7358(DAT_008977e0), iVar2 == 0)) {
    uVar4 = *(undefined4 *)(DAT_00897804 + 0x1c);
    iVar2 = fn_00154ac8(0x23);
    if (iVar2 != 0) {
      fn_00144834(0x23,0);
      iVar2 = fn_006b51c0(uVar4);
      if (iVar2 != 0) {
        param_1[100] = 0;
      }
    }
    iVar2 = fn_006b51c0(uVar4);
    if (param_1[100] != iVar2) {
      if ((char)param_1[0x65] != -1) {
        fn_00225fd8(param_1,param_2,0);
        iVar3 = fn_006a99b0(param_1);
        if (iVar3 != 0) {
          local_28 = param_1[8];
          local_24 = (float)param_1[9];
          local_20 = param_1[10];
          fn_006b26ac(param_1);
          local_24 = ((float)param_1[0x6d] - in_s0) + local_24;
          (**(code **)(*param_1 + 0x10))(param_1,&local_28);
        }
      }
      iVar3 = fn_006a7f8c(param_1 + 0x66);
      if (iVar3 != 0) {
        fn_00223510(param_1);
      }
    }
    uVar5 = 0;
    if ((param_1[0x60] == 0) && (iVar2 != 0)) {
      iVar3 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),iVar2);
      sVar1 = *(short *)(iVar3 + 0x1c);
      uVar4 = fn_006f7a9c(DAT_008977e0);
      uVar5 = 1;
      iVar3 = fn_006a7f8c(param_1 + 0x66);
      if (iVar3 == 0) {
        fn_001c6c54(&local_28,uVar4,(int)sVar1,0);
        param_1[100] = iVar2;
        param_1[0x66] = local_28;
        param_1[0x67] = (int)local_24;
        param_1[0x68] = local_20;
      }
      else {
        uVar4 = fn_006f7a9c(DAT_008977e0);
        iVar2 = fn_00278bc8(uVar4,param_1 + 0x66);
        if (iVar2 != 0) {
          fn_002235c4(param_1);
          uVar5 = 0;
        }
      }
    }
    else {
      param_1[100] = iVar2;
    }
    *(undefined1 *)((int)param_1 + 0x23a) = uVar5;
  }
  return;
}



void fn_00224680(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x23c) != '\0') {
    if (param_2 == 0) {
      if (*(char *)(param_1 + 0x243) == '\0') {
        uVar1 = *(undefined4 *)(param_1 + 0x184);
      }
      else {
        uVar1 = *(undefined4 *)(param_1 + 0x17c);
      }
      param_2 = fn_0017fde4(uVar1);
    }
    iVar2 = fn_006ebf84(*(undefined4 *)(*(int *)(DAT_008977e0 + 8) + 0x24),param_2);
    if (iVar2 != 0) {
      fn_00162d54(*(undefined4 *)(*(int *)(DAT_008977e0 + 8) + 0x24),param_2);
      *(undefined1 *)(param_1 + 0x23c) = 0;
    }
  }
  return;
}



void fn_0022455c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  *(undefined4 *)(param_1 + 0xe4) = param_2;
  fn_001fa164(*(undefined4 *)(param_1 + 0x1f8));
  fn_001fa18c(*(undefined4 *)(param_1 + 0x1f8),param_3);
  uVar1 = fn_002266b4(param_1,param_5,param_4);
  iVar2 = fn_006eb378();
  iVar3 = fn_006eb368(uVar1);
  if (param_5 == 0) {
    uVar4 = 0;
    if (iVar2 != iVar3) goto LAB_00224654;
    do {
      uVar1 = (&DAT_007c0efc)[uVar4 * 2];
      while( true ) {
        fn_001da490(param_1,(&DAT_007c0ef8)[uVar4 * 2],(&DAT_007c0efc)[uVar4 * 2],uVar1,0xffffffff)
        ;
        uVar4 = uVar4 + 1;
        if (10 < uVar4) {
          return;
        }
        if (iVar2 == iVar3) break;
LAB_00224654:
        uVar1 = 0xffffffff;
      }
    } while( true );
  }
  uVar4 = 0;
  if (iVar2 == iVar3) goto LAB_002245ec;
  do {
    uVar1 = 0xffffffff;
    while( true ) {
      fn_001da490(param_1,(&DAT_007c0ea0)[uVar4 * 2],(&DAT_007c0ea4)[uVar4 * 2],uVar1,0xffffffff);
      uVar4 = uVar4 + 1;
      if (10 < uVar4) {
        return;
      }
      if (iVar2 != iVar3) break;
LAB_002245ec:
      uVar1 = (&DAT_007c0ea4)[uVar4 * 2];
    }
  } while( true );
}



void fn_0022434c(int *param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  
  cVar1 = (char)param_1[0x87];
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      iVar3 = fn_001c7160(param_1);
      if (iVar3 != 0) {
        (**(code **)(*param_1 + 0x44))(param_1,9,4,0);
        uVar2 = 3;
LAB_00224434:
        *(undefined1 *)((int)param_1 + 0x21e) = uVar2;
        return;
      }
    }
    else if (cVar1 == '\x02') {
      iVar3 = fn_001c7160(param_1);
      if (iVar3 != 0) {
        (**(code **)(*param_1 + 0x44))(param_1,4,4,0);
        uVar2 = 0;
        goto LAB_00224434;
      }
    }
    else if ((cVar1 == '\x03') && (iVar3 = (**(code **)(*param_1 + 0x48))(param_1), iVar3 != 0)) {
      (**(code **)(*param_1 + 0x44))(param_1,10,4,0);
      *(undefined1 *)((int)param_1 + 0x21e) = 0;
    }
  }
  return;
}



void fn_00224300(int *param_1,int param_2)

{
  param_1[0x8a] = param_2;
  (**(code **)(*param_1 + 0x10))(param_1,param_2 + 0x20);
  param_1[0xc] = *(int *)(param_1[0x8a] + 0x30);
  fn_0078b030(param_1 + 0x7f);
  *(undefined1 *)((int)param_1 + 0x20e) = 0;
  *(undefined1 *)((int)param_1 + 0x20d) = 0;
  *(undefined1 *)(param_1 + 0x83) = 0;
  param_1[0x85] = 0;
  return;
}



void fn_002241e4(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = fn_006b51cc(*(undefined4 *)(DAT_00897804 + 0x1c));
  if (iVar1 == 1) {
    uVar5 = *(undefined4 *)(DAT_00897804 + 0x1c);
    iVar1 = fn_006b51c0(uVar5);
    if (iVar1 != 0) {
      *(int *)(param_1 + 400) = iVar1;
      iVar2 = fn_006a7f8c(param_1 + 0x198);
      if (iVar2 == 0) {
        iVar2 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),iVar1);
        uVar3 = fn_006f7a9c(DAT_008977e0);
        fn_001c6c54(&local_28,uVar3,(int)*(short *)(iVar2 + 0x1c),0);
        *(undefined4 *)(param_1 + 0x198) = local_28;
        *(undefined4 *)(param_1 + 0x19c) = uStack_24;
        *(undefined4 *)(param_1 + 0x1a0) = uStack_20;
        fn_002235c4(param_1);
      }
    }
    iVar2 = fn_006b51ec(uVar5);
    iVar4 = fn_006f7530(DAT_008977e0);
    if (iVar4 != 0) {
      iVar2 = fn_006f7a84(DAT_008977e0);
      iVar2 = *(int *)(iVar2 + 0x3f0);
    }
    iVar4 = fn_006f7a20(DAT_008977e0);
    if ((((iVar4 == 0) && (*(char *)(param_1 + 0x243) == '\0')) && (-1 < iVar2)) && (iVar1 != 0)) {
      fn_00225b04(param_1,1);
      return;
    }
  }
  return;
}


