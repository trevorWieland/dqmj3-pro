#include "002f8e14_002f9b00.h"



void fn_002f9b00(int *param_1)

{
  undefined1 uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  fn_0020bbc4(&local_38,param_1);
  fn_006bfda8(&local_34);
  iVar3 = fn_001a46f4();
  if (iVar3 == 0) {
    *(undefined1 *)(param_1 + 0x3c) = 0xd;
  }
  else {
    uVar7 = *(undefined4 *)(DAT_00897804 + 0xc);
    iVar3 = fn_0028a284(uVar7,param_1);
    if (iVar3 != 0) {
      *param_1 = iVar3;
      uVar7 = fn_0028aad0(uVar7,iVar3);
      fn_0024f108(uVar7,0);
      if ((*(byte *)(param_1 + 0x43) & 2) == 0) {
        fn_0020bbc4(&local_38,param_1);
        fn_006bfe90(&local_34);
        iVar3 = fn_001cab7c();
        uVar6 = 0;
        bVar2 = 0;
        uVar7 = *(undefined4 *)(DAT_00897804 + 0xc);
        do {
          iVar4 = fn_0028b0a0(uVar7,bVar2);
          if (iVar4 != 0) {
            fn_0020bbc4(&uStack_30);
            fn_006bfe90(&local_2c);
            iVar4 = fn_001cab7c();
            uVar6 = iVar4 + uVar6 & 0xff;
          }
          bVar2 = bVar2 + 1;
        } while (bVar2 < 4);
        if (iVar3 <= (int)(4 - uVar6)) {
          uVar5 = fn_006bf5e0(&local_34);
          fn_0028b7ac(uVar7,uVar5);
          (**(code **)(**(int **)(param_1[0x3d] + 0x10) + 0x24))
                    (*(int **)(param_1[0x3d] + 0x10),0,0);
          *(undefined1 *)(param_1 + 0x3c) = 0xd;
          return;
        }
        fn_0044538c(param_1[0x42],0,*param_1);
        (**(code **)(**(int **)(param_1[0x3d] + 0x10) + 0x24))
                  (*(int **)(param_1[0x3d] + 0x10),0x4d,0);
        iVar3 = fn_0028eac8(*(undefined4 *)(param_1[0x3d] + 0x14),0x2d);
        if (iVar3 == 0) {
          fn_0025f3f4(param_1[0x3f],param_1);
          (**(code **)(**(int **)(param_1[0x3d] + 0x14) + 0x24))
                    (*(int **)(param_1[0x3d] + 0x14),0x2d,0);
        }
        uVar1 = 9;
      }
      else {
        fn_0015b0dc(param_1 + 1);
        uVar7 = fn_0022f584((char *)&DAT_002f9d80,0);
        local_34 = 1;
        uStack_30 = 0;
        local_28 = 1;
        local_2c = 0;
        local_38 = 1;
        fn_0036c5f4(param_1[0x3e],uVar7,1,0);
        fn_001f749c(param_1[0x3d],0x48,0);
        uVar1 = 0xb;
      }
      *(undefined1 *)(param_1 + 0x3c) = uVar1;
      return;
    }
    *(undefined1 *)(param_1 + 0x3c) = 0xd;
  }
  return;
}



void fn_002f99d8(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  cVar1 = *(char *)(*(int *)(param_1 + 0xf8) + 0x31);
  if (cVar1 != '\x02') {
    if (cVar1 == '\x03') {
      *(undefined2 *)(*(int *)(param_1 + 0x100) + 0x1c) = *(undefined2 *)(param_1 + 0x1c);
      piVar3 = *(int **)(*(int *)(param_1 + 0xf4) + 0x10);
      (**(code **)(*piVar3 + 0x24))(piVar3,0x58,0);
      *(undefined1 *)(param_1 + 0xf0) = 5;
    }
    return;
  }
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  fn_00231700(&local_28,0xc,(int)*(short *)(param_1 + 0x1c),0);
  fn_0015b0dc(&local_28);
  uVar4 = fn_0022f584((char *)&DAT_002f9ae4,0);
  fn_0036c5f4(*(undefined4 *)(param_1 + 0xf8),uVar4,1,0,1,1,0,0,1);
  fn_001f749c(*(undefined4 *)(param_1 + 0xf4),0x48,0);
  *(undefined1 *)(param_1 + 0x110) = 1;
  if ((*(byte *)(param_1 + 0x10c) & 4) == 0) {
    uVar2 = 0xb;
  }
  else {
    uVar2 = 10;
  }
  *(undefined1 *)(param_1 + 0xf0) = uVar2;
  return;
}



void fn_002f9980(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0xf4) + 0x14);
  (**(code **)(*piVar1 + 0x30))(piVar1,0x2d,0);
  piVar1 = *(int **)(*(int *)(param_1 + 0xf4) + 0x10);
  if (*(char *)(param_1 + 0x110) == '\0') {
    uVar2 = 0x4d;
  }
  else {
    uVar2 = 0x58;
  }
                    /* WARNING: Could not recover jumptable at 0x002f99d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x30))(piVar1,uVar2,0);
  return;
}



undefined4 fn_002f95b8(int param_1)

{
  undefined4 uVar1;
  
  fn_00689878(param_1,0xd9);
  uVar1 = fn_001481c8(*(undefined4 *)(param_1 + 100),L"rom:/data/Layout/title/upper/title_logo.arc"
                       ,&DAT_002f9618,1,1);
  uVar1 = fn_001480d0(*(undefined4 *)(param_1 + 100),uVar1,(char *)&DAT_002f9624,&DAT_002f9620,0,1,0);
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  return 1;
}



void fn_002f9484(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0xc) == '\x03') {
    if (*(char *)(param_1 + 0x90) == '\0') {
      fn_002f9124(param_1);
    }
    else if ((*(char *)(param_1 + 0x90) == '\x02') &&
            (iVar1 = fn_00269b38(DAT_00897818), iVar1 == 2)) {
      *(undefined1 *)(param_1 + 0x90) = 0;
    }
  }
  fn_002c89dc(param_1);
  return;
}



void fn_002f93bc(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (*(char *)(param_1 + 0x90) == '\0') {
    if (*(char *)(param_1 + 0xa8) != '\0') {
      return;
    }
    uVar1 = fn_006f6a38(param_1);
    if ((uVar1 & 0x20000) != 0) {
      puVar2 = (undefined4 *)fn_001f74ec(param_1,0xd6);
      if (puVar2 != (undefined4 *)0x0) {
        puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
        do {
          if (puVar3 == &DAT_00898c58) goto LAB_002f9434;
          puVar3 = (undefined4 *)*puVar3;
        } while (puVar3 != (undefined4 *)0x0);
      }
      puVar2 = (undefined4 *)0x0;
LAB_002f9434:
      puVar2[3] = 0;
      fn_006899f4(param_1,0xd6,0);
      fn_0068ab44(param_1,0x100094c);
    }
  }
  if (*(char *)(param_1 + 0xa8) == '\0') {
    fn_002c89b0(param_1);
    return;
  }
  return;
}



void fn_002f9124(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_28;
  undefined4 local_24 [3];
  
  cVar1 = *(char *)(param_1 + 0xa8);
  puVar6 = (undefined4 *)0x0;
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      if (*(int *)(DAT_00897808 + 0x14) == *(int *)(DAT_00897808 + 0xc)) {
        if (*(int *)(DAT_0089780c + 0x14) == *(int *)(DAT_0089780c + 0xc)) {
          *(undefined1 *)(param_1 + 0xa8) = 2;
        }
        return;
      }
    }
    else if (cVar1 == '\x02') {
      local_24[0] = 0;
      fn_00163988(DAT_00897808,local_24,10);
      local_24[0] = 0;
      fn_00163988(DAT_0089780c,local_24,10);
      fn_0025b35c(*(undefined4 *)(DAT_00897804 + 8));
      fn_006992a0(DAT_008977e0);
      uVar2 = fn_00615ee4();
      fn_0010706c(uVar2,&LAB_001b5788,2);
    }
    return;
  }
  iVar3 = (**(code **)(**(int **)(param_1 + 0x70) + 0x90))();
  if (-1 < iVar3) {
    if (iVar3 == 0) {
      local_28 = 0xff000000;
      fn_00163988(DAT_00897808,&local_28,10);
      local_28 = 0xff000000;
      fn_00163988(DAT_0089780c,&local_28,10);
      *(undefined1 *)(param_1 + 0xa8) = 1;
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
    puVar4 = (undefined4 *)fn_001f74ec(param_1,0xd6);
    if (puVar4 != (undefined4 *)0x0) {
      puVar5 = (undefined4 *)(**(code **)*puVar4)(puVar4);
      do {
        if (puVar5 == &DAT_00898c58) {
          puVar6 = puVar4;
          break;
        }
        puVar5 = (undefined4 *)*puVar5;
      } while (puVar5 != (undefined4 *)0x0);
    }
    puVar6[3] = 0;
    fn_006899f4(param_1,0xd6,0);
    fn_0068ab44(param_1,0x100094c);
  }
  iVar3 = (**(code **)(**(int **)(param_1 + 0x70) + 0x6c))();
  if (-1 < iVar3) {
    fn_0031b3c4(*(undefined4 *)(*(int *)(param_1 + 0x74) + iVar3 * 4),1);
  }
  iVar3 = (**(code **)(**(int **)(param_1 + 0x70) + 100))();
  if (-1 < iVar3) {
    fn_002c8a38(param_1);
  }
  return;
}



undefined4 *
fn_002f8fd0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  
  *param_1 = &DAT_008213bc;
  param_1[1] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)((int)param_1 + 0x1d) = 0xbc;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  piVar1 = (int *)fn_00100fc6(0xc,0,param_3,param_4,param_4);
  iVar2 = fn_00100fc6(0x300,0);
  piVar1[2] = iVar2;
  *piVar1 = param_1[1];
  piVar1[1] = 0x20;
  param_1[1] = piVar1;
  puVar3 = (undefined1 *)piVar1[2];
  param_1[3] = puVar3;
  param_1[4] = puVar3 + 0x300;
  param_1[3] = puVar3 + 0x18;
  *(undefined4 *)(puVar3 + 8) = 0;
  *(undefined4 *)(puVar3 + 0xc) = 0;
  *puVar3 = 0;
  param_1[5] = puVar3;
  *(undefined4 *)(puVar3 + 4) = 0;
  *(undefined4 *)(param_1[5] + 8) = param_1[5];
  *(undefined4 *)(param_1[5] + 0xc) = param_1[5];
  return param_1;
}



void fn_002f8f38(int param_1)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  fn_00234690();
  local_18 = *(undefined4 *)(param_1 + 0x20);
  uStack_14 = *(undefined4 *)(param_1 + 0x24);
  uStack_10 = *(undefined4 *)(param_1 + 0x28);
  fn_001f52f0(*(undefined4 *)(DAT_008977e0 + 0x30),*(undefined4 *)(param_1 + 0x40),&local_18);
  fn_001f52b8(*(undefined4 *)(DAT_008977e0 + 0x30),*(undefined4 *)(param_1 + 0x40));
  return;
}



undefined4 * fn_002f8e14(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00118dcc();
  *puVar1 = &DAT_0082138c;
  puVar1[2] = &DAT_00859060;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  return puVar1;
}


