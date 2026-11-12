#include "004a9d34_004aa380.h"



void fn_004aa380(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_250;
  undefined4 local_24c;
  undefined1 auStack_248 [524];
  int local_3c;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 4));
  if (iVar1 != 0) {
    param_2[2] = *(int *)(param_1 + 0x14);
    (**(code **)(*param_2 + 0x58))(param_2,*(undefined4 *)(param_1 + 0x18));
    iVar1 = **(int **)(param_1 + 8);
    if ((*(int **)(param_1 + 8))[1] != iVar1) {
      do {
        fn_00156234(iVar1 + 8,&local_250);
        fn_00156234(iVar1 + 0x10,&local_24c);
        (**(code **)(*param_2 + 0xc))(auStack_248,param_2,local_250,local_24c);
        fn_0014f4d8(local_250);
        fn_0014f4d8(local_24c);
        iVar1 = iVar1 + 0x18;
      } while (*(int *)(*(int *)(param_1 + 8) + 4) != iVar1);
    }
    iVar1 = **(int **)(param_1 + 0x10);
    iVar4 = (*(int **)(param_1 + 0x10))[1];
    if (iVar1 != iVar4) {
      (**(code **)(*param_2 + 0x54))(param_2,iVar1,iVar4 - iVar1);
    }
    iVar1 = **(int **)(param_1 + 0xc);
    if ((*(int **)(param_1 + 0xc))[1] != iVar1) {
      do {
        uVar2 = fn_006d162c(param_2);
        uVar2 = fn_004b6318(auStack_28,uVar2);
        fn_0045f27c(&local_250);
        uVar3 = fn_0045f3dc(&local_250,&DAT_004aa760);
        uVar2 = fn_004be9cc(uVar3,uVar2);
        uVar2 = fn_0045f3dc(uVar2,&DAT_007d88ac);
        uVar2 = fn_0045f3dc(uVar2,L"Content-Disposition: form-data; name=\"");
        uVar2 = fn_004be9cc(uVar2,iVar1 + 8);
        uVar2 = fn_0045f3dc(uVar2,&DAT_004aa770);
        uVar2 = fn_0045f3dc(uVar2,&DAT_007d88ac);
        uVar2 = fn_0045f3dc(uVar2,&DAT_007d88ac);
        uVar2 = fn_004be9cc(uVar2,iVar1 + 0x10);
        fn_0045f3dc(uVar2,&DAT_007d88ac);
        fn_0013d3e8(auStack_30,local_24c);
        fn_00156234(auStack_30,&local_3c);
        iVar4 = fn_002febd8(local_3c);
        fn_0079c078(param_1 + 0x2c,*(undefined4 *)(param_1 + 0x30),local_3c,iVar4 + local_3c);
        fn_0014f4d8(local_3c);
        fn_00170f54(auStack_30);
        fn_0045f2ec(&local_250);
        fn_00170f54(auStack_28);
        iVar1 = iVar1 + 0x18;
      } while (*(int *)(*(int *)(param_1 + 0xc) + 4) != iVar1);
    }
    uVar2 = fn_006d162c(param_2);
    uVar2 = fn_004b6318(auStack_38,uVar2);
    fn_0045f27c(&local_250);
    uVar3 = fn_0045f3dc(&local_250,&DAT_004aa760);
    uVar2 = fn_004be9cc(uVar3,uVar2);
    uVar2 = fn_0045f3dc(uVar2,&DAT_007d88ac);
    uVar2 = fn_0045f3dc(uVar2,L"Content-Disposition: form-data; name=\"file\"");
    uVar2 = fn_0045f3dc(uVar2,&DAT_007d88ac);
    fn_0045f3dc(uVar2,&DAT_007d88ac);
    fn_0013d3e8(auStack_30,local_24c);
    fn_00156234(auStack_30,&local_3c);
    iVar1 = fn_002febd8(local_3c);
    fn_0079c078(param_1 + 0x2c,*(undefined4 *)(param_1 + 0x30),local_3c,iVar1 + local_3c);
    fn_0014f4d8(local_3c);
    fn_00170f54(auStack_30);
    fn_0045f2ec(&local_250);
    fn_00170f54(auStack_38);
    uVar2 = fn_006d162c(param_2);
    uVar2 = fn_004b6318(auStack_38,uVar2);
    fn_0045f27c(&local_250);
    uVar3 = fn_0045f3dc(&local_250,&DAT_007d88ac);
    uVar3 = fn_0045f3dc(uVar3,&DAT_004aa760);
    uVar2 = fn_004be9cc(uVar3,uVar2);
    uVar2 = fn_0045f3dc(uVar2,&DAT_004aa760);
    fn_0045f3dc(uVar2,&DAT_007d88ac);
    fn_0013d3e8(auStack_30,local_24c);
    fn_00156234(auStack_30,&local_3c);
    iVar1 = fn_002febd8(local_3c);
    fn_0079c078(param_1 + 0x38,*(undefined4 *)(param_1 + 0x3c),local_3c,iVar1 + local_3c);
    fn_0014f4d8(local_3c);
    fn_00170f54(auStack_30);
    fn_0045f2ec(&local_250);
    fn_00170f54(auStack_38);
    (**(code **)(*param_2 + 0x14))
              (param_2,(*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c)) +
                       (*(int *)(param_1 + 0x3c) - *(int *)(param_1 + 0x38)) +
                       *(int *)(param_1 + 0x20));
  }
  return;
}



void fn_004aa248(int param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int local_28;
  undefined1 local_24 [4];
  undefined4 local_20 [2];
  
  cVar1 = *(char *)(param_1 + 0x3b);
  iVar4 = 0;
  if (cVar1 == '\0') {
    local_24[0] = 0;
    piVar2 = &local_28;
    if (*(char *)(param_2 + 4) != '\0') {
      piVar2 = (int *)local_24;
    }
    local_28 = CONCAT31(((unsigned int)(local_28) >> 8) & 0xffffff,*(char *)(param_2 + 4));
    fn_0015ef4c(param_1,piVar2,1);
    iVar4 = *(int *)(*(int *)(param_1 + 8) + 0x10);
    local_20[0] = 0;
    fn_0015ef4c(param_1,local_20,4);
  }
  fn_0015ef4c(param_1,param_2 + 5,1);
  fn_0015ef4c(param_1,param_2 + 6,1);
  fn_0015ef4c(param_1,param_2 + 7,1);
  fn_0015ef4c(param_1,param_2 + 8,8);
  fn_0015ef4c(param_1,param_2 + 0x10,4);
  fn_0015ef4c(param_1,param_2 + 0x14,4);
  fn_0015ef4c(param_1,param_2 + 0x18,1);
  fn_0015ef4c(param_1,param_2 + 0x1a,2);
  if (cVar1 == '\0') {
    iVar3 = *(int *)(*(int *)(param_1 + 8) + 0x10);
    fn_00454cbc(param_1,iVar4);
    local_28 = (iVar3 - iVar4) + -4;
    fn_0015ef4c(param_1,&local_28,4);
    fn_00454cbc(param_1,iVar3);
  }
  return;
}



undefined4 * fn_004aa1fc(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *param_1 = &DAT_008554c0;
  puVar2 = (undefined4 *)param_1[0xd];
  for (puVar1 = (undefined4 *)param_1[0xc]; puVar1 != puVar2; puVar1 = puVar1 + 2) {
    (**(code **)*puVar1)(puVar1);
  }
  fn_0014f1bc(param_1[0xc]);
  return param_1;
}



void fn_004aa010(int param_1,int param_2)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_30;
  undefined1 local_2c [4];
  undefined4 local_28;
  
  cVar1 = *(char *)(param_1 + 0x3b);
  iVar6 = 0;
  if (cVar1 == '\0') {
    local_2c[0] = 0;
    piVar3 = (int *)local_2c;
    if (*(char *)(param_2 + 4) == '\0') {
      piVar3 = &local_30;
    }
    local_30 = CONCAT31(((unsigned int)(local_30) >> 8) & 0xffffff,*(char *)(param_2 + 4));
    fn_0015ef4c(param_1,piVar3,1);
    iVar6 = *(int *)(*(int *)(param_1 + 8) + 0x10);
    local_28 = 0;
    fn_0015ef4c(param_1,&local_28,4);
  }
  fn_0015ef4c(param_1,param_2 + 8,8);
  fn_0015ef4c(param_1,param_2 + 0x10,4);
  cVar2 = *(char *)(param_1 + 0x3b);
  iVar5 = 0;
  if (cVar2 == '\0') {
    local_2c[0] = 0;
    piVar3 = &local_30;
    if (*(char *)(param_2 + 0x18) != '\0') {
      piVar3 = (int *)local_2c;
    }
    local_30 = CONCAT31(((unsigned int)(local_30) >> 8) & 0xffffff,*(char *)(param_2 + 0x18));
    fn_0015ef4c(param_1,piVar3,1);
    iVar5 = *(int *)(*(int *)(param_1 + 8) + 0x10);
    local_28 = 0;
    fn_0015ef4c(param_1,&local_28,4);
  }
  fn_0015ef4c(param_1,param_2 + 0x1c,4);
  fn_0015ef4c(param_1,param_2 + 0x20,2);
  if (cVar2 == '\0') {
    iVar4 = *(int *)(*(int *)(param_1 + 8) + 0x10);
    fn_00454cbc(param_1,iVar5);
    local_30 = (iVar4 - iVar5) + -4;
    fn_0015ef4c(param_1,&local_30,4);
    fn_00454cbc(param_1,iVar4);
  }
  fn_0015ef4c(param_1,param_2 + 0x28,8);
  local_30 = *(int *)(param_2 + 0x34) - *(int *)(param_2 + 0x30) >> 3;
  fn_0015ef4c(param_1,&local_30,4);
  iVar4 = *(int *)(param_2 + 0x34);
  for (iVar5 = *(int *)(param_2 + 0x30); iVar5 != iVar4; iVar5 = iVar5 + 8) {
    fn_0045f6f0(param_1,iVar5);
  }
  if (cVar1 == '\0') {
    iVar5 = *(int *)(*(int *)(param_1 + 8) + 0x10);
    fn_00454cbc(param_1,iVar6);
    local_30 = (iVar5 - iVar6) + -4;
    fn_0015ef4c(param_1,&local_30,4);
    fn_00454cbc(param_1,iVar5);
  }
  return;
}



void fn_004a9fbc(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &DAT_00854d08;
  if ((int *)param_1[0x11] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x11] + 4))();
    param_1[0x11] = 0;
  }
  iVar1 = fn_0046e758(param_1 + 0x12);
  fn_0047a554(iVar1 + -0x48);
  fn_00455018();
  return;
}



void fn_004a9f48(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &DAT_00855400;
  if (param_1[0x3c] != 0) {
    fn_0014f1bc(param_1[0x3c] + -4);
  }
  iVar1 = fn_0014f480(param_1 + 0x5e);
  iVar1 = fn_0048cc74(iVar1 + -0x78);
  iVar1 = fn_0014f2b0(iVar1 + -0x28);
  iVar1 = fn_00456728(iVar1 + -0x60);
  fn_00479d5c(iVar1 + -0x78);
  fn_00455018();
  return;
}



void fn_004a9d34(int param_1)

{
  int iVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined *local_18;
  code *local_14;
  undefined4 uStack_10;
  undefined *local_c;
  
  if (*(char *)(param_1 + 0x110) != '\x02') {
    local_20 = *(undefined4 *)(param_1 + 0x138);
    local_1c = *(undefined4 *)(param_1 + 0x13c);
    local_18 = *(undefined **)(param_1 + 0x140);
    fn_004a9a5c(param_1,3,&local_20);
    return;
  }
  local_20 = CONCAT31(((unsigned int)(local_20) >> 8) & 0xffffff,1);
  iVar1 = fn_006d3b54(*(undefined4 *)(param_1 + 0x198),&local_20);
  if (iVar1 == 0) {
    local_1c = *(undefined4 *)(param_1 + 0x138);
    local_18 = *(undefined **)(param_1 + 0x13c);
    local_14 = *(code **)(param_1 + 0x140);
    fn_004a9a5c(param_1,*(undefined1 *)(param_1 + 0x110),&local_1c);
    return;
  }
  local_14 = fn_004a9df4;
  uStack_10 = 0;
  local_c = &DAT_004a9dec;
  local_18 = &DAT_00853500;
  fn_00479c98(param_1,&local_18);
  return;
}


