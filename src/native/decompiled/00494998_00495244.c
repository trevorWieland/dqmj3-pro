#include "00494998_00495244.h"



void fn_00495244(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = fn_0074c2b8(param_1 + 4);
  piVar2 = (int *)**(int **)(iVar1 + 0x10);
  if (piVar2 != *(int **)(iVar1 + 0x10)) {
    *(int *)piVar2[1] = *piVar2;
    *(int *)(*piVar2 + 4) = piVar2[1];
    *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + -1;
    (**(code **)piVar2[2])(piVar2 + 2);
    *piVar2 = *(int *)(iVar1 + 4);
    *(int **)(iVar1 + 4) = piVar2;
  }
  return;
}



undefined4 fn_004951fc(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_r4;
  
  iVar1 = fn_001249d0();
  if (iVar1 != 0) {
    unaff_r4 = *(int *)(iVar1 + 0x18);
  }
  if (iVar1 != 0 && unaff_r4 != 0) {
    iVar1 = fn_007803e4(unaff_r4 + 4);
    uVar2 = 0;
    if (*(int *)(iVar1 + 0x14) != 0) {
      iVar1 = fn_007803e4(unaff_r4 + 4);
      uVar2 = *(undefined4 *)(**(int **)(iVar1 + 0x10) + 0xc);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 fn_004951b4(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_r4;
  
  iVar1 = fn_001249d0();
  if (iVar1 != 0) {
    unaff_r4 = *(int *)(iVar1 + 0x18);
  }
  if (iVar1 != 0 && unaff_r4 != 0) {
    iVar1 = fn_007803e4(unaff_r4 + 4);
    uVar2 = 0;
    if (*(int *)(iVar1 + 0x14) != 0) {
      iVar1 = fn_007803e4(unaff_r4 + 4);
      uVar2 = *(undefined4 *)(**(int **)(iVar1 + 0x10) + 0x10);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 fn_004951a0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_001249d0();
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 0x18);
  }
  return uVar2;
}



void fn_00495170(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &DAT_008544cc;
  fn_0046dd70();
  iVar1 = fn_0046e758(param_1 + 4);
  fn_0046b3fc(iVar1 + -0x10);
  fn_00455018();
  return;
}



void fn_00495020(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  
  uVar1 = fn_004b7748();
  fn_006d39a4(uVar1,param_2);
  iVar2 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 8) + 0x24);
  }
  iVar2 = fn_0045a1bc(*(int *)(iVar2 + 0x18) + 0x58,L"prudp");
  piVar5 = (int *)**(int **)(param_2 + 0x10);
  do {
    if (piVar5 == (int *)*(int *)(param_2 + 0x10)) {
      return;
    }
    fn_004550d4(piVar5 + 2,*(undefined1 *)(iVar2 + 0x10));
    fn_004550fc(piVar5 + 2,0);
    fn_0045544c(piVar5 + 2,0);
    fn_004553fc(piVar5 + 2,0);
    fn_0045549c(piVar5 + 2,0);
    fn_00455474(piVar5 + 2);
    if ((DAT_008b637e == '\0') || (uVar3 = fn_0074cbe4(DAT_008b63d8), uVar3 == 0)) {
      iVar4 = DAT_008e76a8;
LAB_0049511c:
      uVar1 = 0;
      if (iVar4 != 0) goto LAB_00495124;
    }
    else {
      if (uVar3 < (uint)(DAT_008e76e4[1] - *DAT_008e76e4 >> 2)) {
        iVar4 = *(int *)(*(int *)(*DAT_008e76e4 + uVar3 * 4) + 8);
        goto LAB_0049511c;
      }
      fn_0015ebe4(L"D:\\home\\jenkins\\workspace\\Manual-Pack\\5129d543\\.\\OnlineCore/src/Core/InstanceTable.h"
                   ,0x48,0xe0000003,0);
      iVar4 = -1;
LAB_00495124:
      uVar1 = *(undefined4 *)(iVar4 + 0xc);
    }
    fn_004b78f0(uVar1,piVar5 + 2);
    piVar5 = (int *)*piVar5;
  } while( true );
}



undefined4 fn_00494ebc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_006d0978(param_3);
  if ((iVar1 != 0) && (iVar1 = fn_006d0978(param_4), iVar1 != 0)) {
    uVar2 = fn_004b7748();
    iVar1 = fn_004b7ad0(uVar2,param_3,param_4);
    if (iVar1 != 0) {
      uVar2 = fn_004ab9a4(param_1 + 0x10,param_2,param_3,param_4);
      return uVar2;
    }
  }
  return 0;
}



undefined4
fn_00494998(int param_1,undefined4 param_2,int param_3,undefined4 *param_4,undefined4 *param_5)

{
  char cVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined4 local_180;
  undefined4 local_17c;
  undefined1 auStack_178 [32];
  undefined1 auStack_158 [32];
  undefined1 auStack_138 [36];
  int local_114;
  undefined1 auStack_110 [8];
  undefined4 local_108;
  undefined1 auStack_f8 [4];
  char local_f4;
  undefined1 auStack_e0 [4];
  char local_dc;
  undefined1 auStack_c8 [12];
  int local_bc;
  undefined4 uStack_b8;
  int local_b0;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [8];
  undefined4 local_68;
  int local_58;
  undefined4 local_54;
  int local_50 [2];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [12];
  int iStack_34;
  undefined4 local_30;
  int iStack_2c;
  undefined4 *puStack_28;
  
  iStack_34 = param_1;
  local_30 = param_2;
  iStack_2c = param_3;
  puStack_28 = param_4;
  puVar3 = (undefined4 *)fn_0014f1e0(auStack_178);
  *puVar3 = &DAT_00855a18;
  uVar4 = fn_0014f470();
  fn_0014f440(puVar3,uVar4,0);
  fn_004bb340(param_1,auStack_178);
  fn_004bb16c(auStack_f8,auStack_178);
  puVar3 = (undefined4 *)fn_0014f1e0(auStack_c8);
  *puVar3 = &DAT_00855a18;
  uVar4 = fn_0014f470();
  fn_0014f440(puVar3,uVar4,0);
  fn_004bb340(auStack_f8,auStack_c8);
  fn_0014f24c(auStack_a8,local_b0 + local_bc,uStack_b8);
  puVar3 = (undefined4 *)fn_0014f1e0(auStack_158);
  *puVar3 = &DAT_00855a18;
  uVar4 = fn_0014f470();
  fn_0014f440(puVar3,uVar4,0);
  fn_004bb340(auStack_f8,auStack_158);
  cVar1 = *(char *)(param_1 + 4);
  cVar2 = cVar1;
  if (cVar1 == '\0') {
    cVar2 = local_f4;
  }
  if (cVar1 != '\0' || cVar2 != '\0') {
    fn_004bb1c4(auStack_70);
    local_180 = 0;
    fn_004baf64(auStack_70,&local_180,4,1);
    fn_004bb2f0(local_30,local_68);
    fn_004bb288(auStack_70);
    fn_0014f480(auStack_158);
    fn_0014f2b0(auStack_a8);
    fn_0014f480(auStack_c8);
    fn_004bb288(auStack_f8);
    fn_0014f480(auStack_178);
    return 0;
  }
  iVar5 = fn_0015ecdc(0x58);
  if (iVar5 == 0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = (int *)fn_004b66ac(iVar5,auStack_158,*(undefined4 *)(param_3 + 0x1c));
  }
  fn_004b6460(piVar6,*(undefined4 *)(param_3 + 0x14),auStack_a8);
  fn_00124be8(auStack_48);
  fn_004b9850(auStack_48);
  fn_004b9b4c(auStack_40,piVar6 + 0x14);
  uVar8 = fn_006d3e90(auStack_48,auStack_40);
  iVar5 = (int)((ulonglong)uVar8 >> 0x20);
  bVar7 = 120000 < (uint)uVar8;
  if (((int)-(iVar5 + (uint)bVar7) < 0 != (SBORROW4(0,iVar5) != SBORROW4(-iVar5,(uint)bVar7))) ||
     (*(char *)((int)piVar6 + 9) == '\0')) {
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 4))(piVar6);
    }
    fn_004bb1c4(auStack_70);
    local_17c = 0;
    fn_004baf64(auStack_70,&local_17c,4,1);
    fn_004bb2f0(local_30,local_68);
    fn_004bb288(auStack_70);
    fn_0014f480(auStack_158);
    fn_0014f2b0(auStack_a8);
    fn_0014f480(auStack_c8);
    fn_004bb288(auStack_f8);
    fn_0014f480(auStack_178);
    return 0;
  }
  puVar3 = (undefined4 *)fn_0014f1e0(auStack_138);
  *puVar3 = &DAT_00855a18;
  uVar4 = fn_0014f470();
  fn_0014f440(puVar3,uVar4,0);
  fn_004bb340(param_1,auStack_138);
  puVar3 = (undefined4 *)fn_0014f1e0(auStack_90);
  *puVar3 = &DAT_00855a18;
  uVar4 = fn_0014f470();
  fn_0014f440(puVar3,uVar4,0);
  fn_00487018(*(undefined4 *)(param_3 + 0x14),auStack_138,auStack_90,piVar6 + 0xd);
  fn_004bb16c(auStack_e0,auStack_90);
  fn_004bad60(auStack_e0,&local_58,4,1);
  fn_004bad60(auStack_e0,&local_54,4,1);
  fn_004bad60(auStack_e0,&local_114,4,1);
  if ((local_dc == '\0') && (piVar6[0xb] == local_58)) {
    *param_4 = local_54;
    fn_004bb1c4(auStack_110);
    local_50[0] = local_114 + 1;
    fn_004baf64(auStack_110,local_50,4,1);
    fn_004bb2f0(local_30,local_108);
    *param_5 = piVar6;
    fn_004bb288(auStack_110);
    fn_004bb288(auStack_e0);
    fn_0014f480(auStack_90);
    fn_0014f480(auStack_138);
    fn_0014f480(auStack_158);
    fn_0014f2b0(auStack_a8);
    fn_0014f480(auStack_c8);
    fn_004bb288(auStack_f8);
    fn_0014f480(auStack_178);
    return 1;
  }
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 4))(piVar6);
  }
  fn_004bb1c4(auStack_70);
  local_17c = 0;
  fn_004baf64(auStack_70,&local_17c,4,1);
  fn_004bb2f0(local_30,local_68);
  fn_004bb288(auStack_70);
  fn_004bb288(auStack_e0);
  fn_0014f480(auStack_90);
  fn_0014f480(auStack_138);
  fn_0014f480(auStack_158);
  fn_0014f2b0(auStack_a8);
  fn_0014f480(auStack_c8);
  fn_004bb288(auStack_f8);
  fn_0014f480(auStack_178);
  return 0;
}


