#include "00763700_00763d5c.h"



void fn_00763d5c(undefined4 *param_1,undefined4 *param_2,code *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  if (param_1 != param_2) {
    fn_007ab8ac(param_1,param_2,((int)param_2 - (int)param_1) / 0x34,param_3);
    if ((int)param_2 - (int)param_1 < 0x341) {
      fn_007a3ae0(param_1,param_2,param_3);
      return;
    }
    fn_007a3ae0(param_1,param_1 + 0xd0,param_3);
    for (param_1 = param_1 + 0xd0; param_1 != param_2; param_1 = param_1 + 0xd) {
      local_50 = *param_1;
      uStack_4c = param_1[1];
      uStack_48 = param_1[2];
      uStack_44 = param_1[3];
      uStack_40 = param_1[4];
      uStack_3c = param_1[5];
      uStack_38 = param_1[6];
      uStack_34 = param_1[7];
      local_30 = param_1[8];
      uStack_2c = param_1[9];
      uStack_28 = param_1[10];
      uStack_24 = param_1[0xb];
      uStack_20 = param_1[0xc];
      iVar4 = (*param_3)(&local_50,param_1 + -0xd);
      puVar3 = param_1 + -0xd;
      puVar2 = param_1;
      while (puVar1 = puVar3, iVar4 != 0) {
        uVar5 = puVar1[1];
        uVar6 = puVar1[2];
        uVar7 = puVar1[3];
        uVar8 = puVar1[4];
        uVar9 = puVar1[5];
        uVar10 = puVar1[6];
        uVar11 = puVar1[7];
        *puVar2 = *puVar1;
        puVar2[1] = uVar5;
        puVar2[2] = uVar6;
        puVar2[3] = uVar7;
        puVar2[4] = uVar8;
        puVar2[5] = uVar9;
        puVar2[6] = uVar10;
        puVar2[7] = uVar11;
        uVar5 = puVar1[9];
        uVar6 = puVar1[10];
        uVar7 = puVar1[0xb];
        uVar8 = puVar1[0xc];
        puVar2[8] = puVar1[8];
        puVar2[9] = uVar5;
        puVar2[10] = uVar6;
        puVar2[0xb] = uVar7;
        puVar2[0xc] = uVar8;
        iVar4 = (*param_3)(&local_50);
        puVar3 = puVar1 + -0xd;
        puVar2 = puVar1;
      }
      *puVar2 = local_50;
      puVar2[1] = uStack_4c;
      puVar2[2] = uStack_48;
      puVar2[3] = uStack_44;
      puVar2[4] = uStack_40;
      puVar2[5] = uStack_3c;
      puVar2[6] = uStack_38;
      puVar2[7] = uStack_34;
      puVar2[8] = local_30;
      puVar2[9] = uStack_2c;
      puVar2[10] = uStack_28;
      puVar2[0xb] = uStack_24;
      puVar2[0xc] = uStack_20;
    }
  }
  return;
}



void fn_00763c50(undefined4 *param_1,undefined4 *param_2,code *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  if (param_1 != param_2) {
    fn_007aa1c8(param_1,param_2,((int)param_2 - (int)param_1) / 0x2c,param_3);
    if ((int)param_2 - (int)param_1 < 0x2c1) {
      fn_007a307c(param_1,param_2,param_3);
      return;
    }
    fn_007a307c(param_1,param_1 + 0xb0,param_3);
    for (param_1 = param_1 + 0xb0; param_1 != param_2; param_1 = param_1 + 0xb) {
      local_48 = *param_1;
      uStack_44 = param_1[1];
      uStack_40 = param_1[2];
      uStack_3c = param_1[3];
      uStack_38 = param_1[4];
      uStack_34 = param_1[5];
      uStack_30 = param_1[6];
      uStack_2c = param_1[7];
      local_28 = param_1[8];
      uStack_24 = param_1[9];
      uStack_20 = param_1[10];
      iVar4 = (*param_3)(&local_48,param_1 + -0xb);
      puVar3 = param_1 + -0xb;
      puVar2 = param_1;
      while (puVar1 = puVar3, iVar4 != 0) {
        uVar5 = puVar1[1];
        uVar6 = puVar1[2];
        uVar7 = puVar1[3];
        uVar8 = puVar1[4];
        uVar9 = puVar1[5];
        uVar10 = puVar1[6];
        uVar11 = puVar1[7];
        *puVar2 = *puVar1;
        puVar2[1] = uVar5;
        puVar2[2] = uVar6;
        puVar2[3] = uVar7;
        puVar2[4] = uVar8;
        puVar2[5] = uVar9;
        puVar2[6] = uVar10;
        puVar2[7] = uVar11;
        uVar5 = puVar1[9];
        uVar6 = puVar1[10];
        puVar2[8] = puVar1[8];
        puVar2[9] = uVar5;
        puVar2[10] = uVar6;
        iVar4 = (*param_3)(&local_48,puVar1 + -0xb);
        puVar3 = puVar1 + -0xb;
        puVar2 = puVar1;
      }
      *puVar2 = local_48;
      puVar2[1] = uStack_44;
      puVar2[2] = uStack_40;
      puVar2[3] = uStack_3c;
      puVar2[4] = uStack_38;
      puVar2[5] = uStack_34;
      puVar2[6] = uStack_30;
      puVar2[7] = uStack_2c;
      puVar2[8] = local_28;
      puVar2[9] = uStack_24;
      puVar2[10] = uStack_20;
    }
  }
  return;
}



void fn_00763be4(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00844298;
  if (param_1[0x4c] != 0) {
    fn_00251ec8();
    fn_002feef8();
  }
  if ((int *)param_1[0x4b] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x4b] + 4))();
  }
  if ((int *)param_1[0x4a] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x4a] + 4))();
  }
  fn_00749820(param_1);
  return;
}



void fn_00763b10(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0043d884();
  puVar1[0x41] = 0;
  puVar1[0x3d] = 0x39;
  puVar1[0x3c] = 0x3c;
  *puVar1 = &PTR_FUN_00844298;
  puVar1[0x42] = 0;
  puVar1[0x43] = 0;
  puVar1[0x47] = 0;
  puVar1[0x48] = 0;
  puVar1[0x49] = 0;
  puVar1[0x4a] = 0;
  puVar1[0x4b] = 0;
  puVar1[0x4c] = 0;
  *(undefined1 *)(puVar1 + 0x4d) = 0;
  *(undefined1 *)((int)puVar1 + 0x135) = 0;
  *(undefined1 *)((int)puVar1 + 0x136) = 1;
  return;
}



void fn_00763700(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  fn_007495b0();
  iVar1 = (**(code **)(*param_1 + 0x1d0))(param_1);
  if (iVar1 != 0) {
    return;
  }
  if (param_1[0x41] == 0xc) {
    return;
  }
  (**(code **)(*param_1 + 0x164))(param_1);
  if ((char)param_1[0x4d] != '\0') {
    if (param_1[0x41] == 0xb) {
      if (param_1[0x43] < 0x1f) {
        param_1[0x43] = param_1[0x43] + 1;
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00763808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1cc))(param_1);
      return;
    }
    if (param_1[0x41] == 6) {
      iVar1 = param_1[0x43];
      param_1[0x43] = iVar1 + 1;
      if (iVar1 + 1 < 0x97) {
        return;
      }
      (**(code **)(*param_1 + 0x1c8))(param_1);
      param_1[0x41] = 0xb;
      return;
    }
    iVar1 = fn_0077f7d0(*(undefined4 *)(*(int *)(param_1[0x48] + 0x3c) + 4),1);
    if ((iVar1 != 0) && (iVar1 = fn_0040f628(*(undefined4 *)(param_1[0x48] + 0x3c)), iVar1 == 2)) {
      *(undefined1 *)(param_1[0x17] + 0x31) = 0;
      fn_00749218(param_1,DAT_00898214,s_MenuMessageWirelessBattle0011_008c64ba);
      param_1[0x41] = 6;
      *(undefined4 *)(param_1[0x44] + 0xc) = 0;
      return;
    }
  }
  (**(code **)(*param_1 + 0x160))(param_1);
  switch(param_1[0x41]) {
  case 0:
    (**(code **)(*param_1 + 0x170))(param_1);
    break;
  case 1:
    (**(code **)(*param_1 + 0x174))(param_1);
    break;
  case 2:
    (**(code **)(*param_1 + 0x178))(param_1);
    break;
  case 3:
    (**(code **)(*param_1 + 0x17c))(param_1);
    break;
  case 4:
    (**(code **)(*param_1 + 0x180))(param_1);
    break;
  case 5:
    (**(code **)(*param_1 + 0x184))(param_1);
    break;
  case 6:
    (**(code **)(*param_1 + 0x188))(param_1);
    break;
  case 7:
    (**(code **)(*param_1 + 0x18c))(param_1);
    break;
  case 8:
    iVar1 = (**(code **)(*param_1 + 0x194))(param_1);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x1c4))(param_1);
    }
    break;
  case 9:
    iVar1 = (**(code **)(*param_1 + 400))(param_1);
    if (iVar1 == 0) break;
    iVar1 = 10;
    goto LAB_0076395c;
  case 10:
    iVar1 = (**(code **)(*param_1 + 0x198))(param_1);
    if (iVar1 == 0) break;
    iVar1 = 0xc;
LAB_0076395c:
    param_1[0x41] = iVar1;
  }
  if (((*(char *)((int)param_1 + 0x136) == '\x01') &&
      (iVar1 = fn_006896fc(param_1,param_1[0x3c]), iVar1 != 0)) &&
     (iVar1 = fn_006896fc(param_1,param_1[0x3c]), *(char *)(iVar1 + 0x1d) == '\0')) {
    iVar1 = fn_0028eac8(*(undefined4 *)(*(int *)(param_1[1] + 0x18) + 0xc),0x48);
    if (iVar1 != 0) {
      uVar2 = fn_006f6a38();
      iVar1 = fn_0028eac8(*(undefined4 *)(*(int *)(param_1[1] + 0x18) + 0xc),0x48);
      if ((*(char *)(iVar1 + 0xc) == '\x03') && ((uVar2 & 0x100000) != 0)) {
        *(undefined1 *)(param_1[0x46] + 0x18) = 1;
        return;
      }
    }
    iVar1 = fn_0028eac8(*(undefined4 *)(*(int *)(param_1[1] + 0x18) + 0xc),0x48);
    if (iVar1 != 0) {
      uVar2 = fn_006f6a38();
      iVar1 = fn_0028eac8(*(undefined4 *)(*(int *)(param_1[1] + 0x18) + 0xc),0x48);
      if ((*(char *)(iVar1 + 0xc) == '\x03') && ((uVar2 & 0x200000) != 0)) {
        *(undefined1 *)(param_1[0x46] + 0x18) = 2;
        return;
      }
    }
  }
  return;
}


