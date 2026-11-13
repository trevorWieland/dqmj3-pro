#include "00491590_0049470c.h"



void fn_0049470c(void)

{
  fn_00494738();
  return;
}



void fn_0049339c(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &PTR_FUN_00854330;
  iVar1 = fn_00170f54(param_1 + 0x28);
  iVar1 = fn_0046f0bc(iVar1 + -0x30);
  fn_0014f1bc(*(undefined4 *)(iVar1 + -0x10));
  fn_0014f1bc(*(undefined4 *)(iVar1 + -0x24));
  fn_0014f1bc(*(undefined4 *)(iVar1 + -0x38));
  fn_004bb560(iVar1 + -0x70);
  return;
}



void fn_00493134(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 local_38;
  undefined4 uStack_34;
  int local_30 [4];
  undefined4 local_20;
  undefined4 uStack_1c;
  
  fn_004732fc();
  if (*(char *)(param_1 + 4) == '\0') {
    *(undefined1 *)(param_2 + 0x30) = 0;
    cVar1 = *(char *)(param_1 + 0x3b);
    local_30[0] = 0;
    if (((cVar1 != '\0') ||
        ((fn_0074a4c8(param_1,param_2 + 0x30), *(char *)(param_1 + 4) == '\0' &&
         (fn_0074a528(param_1,local_30), *(char *)(param_1 + 4) == '\0')))) &&
       ((iVar3 = *(int *)(param_1 + 0xc), *(char *)(param_1 + 4) == '\0' &&
        ((((((fn_0074a528(param_1,param_2 + 0x34), *(char *)(param_1 + 4) == '\0' &&
             (fn_0074b4b8(param_1,param_2 + 0x38), *(char *)(param_1 + 4) == '\0')) &&
            (fn_00454da8(param_1,param_2 + 0x44), *(char *)(param_1 + 4) == '\0')) &&
           ((fn_0074a528(param_1,param_2 + 0x48), *(char *)(param_1 + 4) == '\0' &&
            (fn_0074af34(param_1,param_2 + 0x4c), *(char *)(param_1 + 4) == '\0')))) &&
          ((fn_0074a528(param_1,param_2 + 0x58), *(char *)(param_1 + 4) == '\0' &&
           ((fn_0074a4c8(param_1,param_2 + 0x5c), *(char *)(param_1 + 4) == '\0' &&
            (fn_0074af34(param_1,param_2 + 0x60), *(char *)(param_1 + 4) == '\0')))))) &&
         (fn_0074a528(param_1,param_2 + 0x6c), *(char *)(param_1 + 4) == '\0')))))) {
      if (*(char *)(param_2 + 0x30) != '\0') {
        fn_0048d004(param_1,param_2 + 0x70);
        if (*(char *)(param_1 + 4) != '\0') {
          return;
        }
        fn_0074a5fc(param_1,&local_20);
        local_38 = local_20;
        uStack_34 = uStack_1c;
        fn_0014f510(param_2 + 0x98,&local_38);
        if (*(char *)(param_1 + 4) != '\0') {
          return;
        }
        if (1 < *(byte *)(param_2 + 0x30)) {
          fn_0045f7f0(param_1,param_2 + 0xa0);
          if (*(char *)(param_1 + 4) != '\0') {
            return;
          }
          if (2 < *(byte *)(param_2 + 0x30)) {
            fn_0074a528(param_1,param_2 + 0xa8);
            if (*(char *)(param_1 + 4) != '\0') {
              return;
            }
            fn_00454da8(param_1,param_2 + 0xac);
            if (*(char *)(param_1 + 4) != '\0') {
              return;
            }
            fn_00454da8(param_1,param_2 + 0xad);
            if (*(char *)(param_1 + 4) != '\0') {
              return;
            }
          }
        }
      }
      if (cVar1 == '\0') {
        uVar2 = local_30[0] + iVar3;
        if ((uVar2 < *(uint *)(param_1 + 0xc)) || (*(uint *)(*(int *)(param_1 + 8) + 0x10) < uVar2))
        {
          *(undefined1 *)(param_1 + 4) = 1;
        }
        else {
          *(uint *)(param_1 + 0xc) = uVar2;
        }
      }
    }
  }
  return;
}



void fn_00492e98(int param_1,int param_2)

{
  char cVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte local_40 [8];
  undefined8 local_38;
  int local_30;
  undefined4 local_2c [2];
  int local_24 [2];
  
  fn_00473198();
  cVar1 = *(char *)(param_1 + 0x3b);
  iVar5 = 0;
  if (cVar1 == '\0') {
    local_30 = CONCAT31(((unsigned int)(local_30) >> 8) & 0xffffff,3);
    local_40[0] = *(byte *)(param_2 + 0x30);
    pbVar2 = (byte *)&local_30;
    if (local_40[0] < 4) {
      pbVar2 = local_40;
    }
    fn_0015ef4c(param_1,pbVar2,1);
    iVar5 = *(int *)(*(int *)(param_1 + 8) + 0x10);
    local_2c[0] = 0;
    fn_0015ef4c(param_1,local_2c,4);
  }
  fn_0015ef4c(param_1,param_2 + 0x34,4);
  local_24[0] = *(int *)(param_2 + 0x3c) - *(int *)(param_2 + 0x38) >> 2;
  fn_0015ef4c(param_1,local_24,4);
  iVar4 = *(int *)(param_2 + 0x3c);
  for (iVar3 = *(int *)(param_2 + 0x38); iVar3 != iVar4; iVar3 = iVar3 + 4) {
    fn_0015ef4c(param_1,iVar3,4);
  }
  fn_00454d74(param_1,param_2 + 0x44);
  fn_0015ef4c(param_1,param_2 + 0x48,4);
  local_24[0] = *(int *)(param_2 + 0x50) - *(int *)(param_2 + 0x4c);
  fn_0015ef4c(param_1,local_24,4);
  iVar4 = *(int *)(param_2 + 0x50);
  for (iVar3 = *(int *)(param_2 + 0x4c); iVar3 != iVar4; iVar3 = iVar3 + 1) {
    fn_0015ef4c(param_1,iVar3,1);
  }
  fn_0015ef4c(param_1,param_2 + 0x58,4);
  fn_0015ef4c(param_1,param_2 + 0x5c,1);
  local_24[0] = *(int *)(param_2 + 100) - *(int *)(param_2 + 0x60);
  fn_0015ef4c(param_1,local_24,4);
  iVar4 = *(int *)(param_2 + 100);
  for (iVar3 = *(int *)(param_2 + 0x60); iVar3 != iVar4; iVar3 = iVar3 + 1) {
    fn_0015ef4c(param_1,iVar3,1);
  }
  fn_0015ef4c(param_1,param_2 + 0x6c,4);
  if (cVar1 == '\0') {
    if (*(char *)(param_2 + 0x30) != '\0') {
      fn_0048ceb8(param_1,param_2 + 0x70);
      local_38 = fn_006d3e5c(param_2 + 0x98);
      fn_0015ef4c(param_1,&local_38,8);
      if ((1 < *(byte *)(param_2 + 0x30)) &&
         (fn_0045f6f0(param_1,param_2 + 0xa0), 2 < *(byte *)(param_2 + 0x30))) {
        fn_0015ef4c(param_1,param_2 + 0xa8,4);
        fn_00454d74(param_1,param_2 + 0xac);
        fn_00454d74(param_1,param_2 + 0xad);
      }
    }
    iVar3 = *(int *)(*(int *)(param_1 + 8) + 0x10);
    fn_00454cbc(param_1,iVar5);
    local_30 = (iVar3 - iVar5) + -4;
    fn_0015ef4c(param_1,&local_30,4);
    fn_00454cbc(param_1,iVar3);
  }
  return;
}



undefined4 * fn_0049293c(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  
  puVar1 = (undefined4 *)fn_0046e6d0(param_1,1);
  *puVar1 = &DAT_00854264;
  if (param_2 == 0) {
    return puVar1;
  }
  *(short *)(puVar1 + 8) = (short)param_2;
  iVar2 = fn_0015ecdc(0x44);
  if (iVar2 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = fn_0049293c(iVar2,0);
  }
  uVar3 = 0;
  if (DAT_008b637e != '\0') {
    uVar3 = fn_0074cbe4(DAT_008b63d8);
  }
  if (uVar3 == 0) {
    puVar4 = &DAT_008e76a0;
LAB_00492a00:
    iVar5 = puVar4[0xd];
    iVar2 = 0;
    if (iVar5 == 0) goto LAB_004929e8;
  }
  else {
    if (uVar3 < (uint)(DAT_008e76e4[1] - *DAT_008e76e4 >> 2)) {
      puVar4 = *(undefined4 **)(*DAT_008e76e4 + uVar3 * 4);
      goto LAB_00492a00;
    }
    fn_0015ebe4(L"D:\\home\\jenkins\\workspace\\Manual-Pack\\5129d543\\.\\OnlineCore/src/Core/InstanceTable.h"
                 ,0x48,0xe0000003,0);
    iVar5 = -1;
  }
  iVar2 = *(int *)(iVar5 + 0xc);
LAB_004929e8:
  fn_0047f194(*(undefined4 *)(iVar2 + 0xc),param_2,uVar6);
  return puVar1;
}



void fn_004918b8(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar2 = fn_001249d0();
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0xc);
  }
  piVar4 = (int *)(iVar3 + 0x50);
  (**(code **)(*piVar4 + 8))();
  piVar1 = DAT_008bad48;
  if ((DAT_008bad48 != (int *)0x0) &&
     (iVar3 = (**(code **)(*DAT_008bad48 + 0x14))(DAT_008bad48), iVar3 != 0)) {
    (**(code **)(*piVar1 + 0x10))(piVar1,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x0049192c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar4 + 0xc))(piVar4);
  return;
}



undefined4 *
fn_004916dc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined *local_40;
  code *local_3c;
  undefined4 uStack_38;
  undefined *local_34;
  undefined1 auStack_30 [20];
  
  puVar1 = (undefined4 *)fn_00479cd8(param_1,2,auStack_30);
  *puVar1 = &DAT_00854204;
  iVar2 = fn_004565fc(puVar1 + 0x1e);
  iVar2 = fn_004b3294(iVar2 + 0x60);
  iVar2 = fn_0013d40c(iVar2 + 0x18);
  iVar2 = fn_0048cc04(iVar2 + 0x20,0);
  puVar1 = (undefined4 *)fn_0014f1e0(iVar2 + 0x78);
  *puVar1 = &DAT_00855a18;
  uVar3 = fn_0014f470();
  fn_0014f440(puVar1,uVar3,0);
  puVar1[-0x48] = param_2;
  puVar1[-0x47] = param_3;
  fn_00170fa4(puVar1 + -0x26,param_5);
  iVar2 = fn_002febd8(param_6);
  piVar4 = (int *)fn_0015ece0(iVar2 + 5);
  *piVar4 = iVar2 + 1;
  puVar1[-0x24] = piVar4 + 1;
  fn_002fec40(piVar4 + 1,param_6);
  puVar1[-0x23] = param_7;
  puVar1[8] = param_4;
  puVar1[-0x22] = param_9;
  puVar1[-0x21] = param_8;
  puVar1[-0x20] = param_10;
  local_3c = fn_00491328;
  uStack_38 = 0;
  local_34 = &DAT_007dde00;
  local_40 = &DAT_00853500;
  fn_00479c98(puVar1 + -0x62,&local_40);
  return puVar1 + -0x62;
}



void fn_00491590(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *local_28;
  code *pcStack_24;
  undefined4 uStack_20;
  undefined *local_1c [3];
  
  if (DAT_008b6385 == '\0') {
    iVar2 = *(int *)(*(int *)(param_1 + 0x6c) + 0x20);
    uVar3 = *(undefined4 *)(iVar2 + 0x24);
    *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)(param_1 + 0xd4) = uVar3;
    iVar2 = fn_004871b4(param_1 + 0x78,**(undefined4 **)(param_1 + 0xfc),
                         *(undefined4 *)(param_1 + 0xf8),param_1 + 0xd8);
    if (iVar2 == 0) {
      local_1c[0] = &DAT_80010001;
      uVar3 = fn_004b8d4c(&local_28,local_1c);
      fn_00491160(param_1,3,uVar3);
      return;
    }
  }
  else {
    fn_004871fc(&local_28,**(undefined4 **)(param_1 + 0xfc),*(undefined4 *)(param_1 + 0xf8));
    fn_0015ed58(param_1 + 0xd8,&local_28);
    fn_0014f2b0(&local_28);
  }
  if (*(char *)(param_1 + 0x88) != '\x01') {
    pcStack_24 = fn_004911b0;
    uStack_20 = 0;
    local_28 = &DAT_00853500;
    local_1c[0] = &DAT_004916d4;
    fn_00479c98(param_1,&local_28);
    return;
  }
  fn_004b2f0c(param_1);
  puVar1 = (undefined4 *)fn_0015ecdc(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &DAT_00853500;
    puVar1[1] = fn_004911b0;
    puVar1[2] = 0;
    puVar1[3] = &DAT_004916d4;
  }
  fn_00479b1c(param_1,param_1 + 0x78,puVar1);
  return;
}


