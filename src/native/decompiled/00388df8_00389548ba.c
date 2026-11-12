#include "00388df8_00389548ba.h"



void fn_00389054(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  float fVar8;
  undefined8 uVar9;
  float local_58;
  float local_54;
  float local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  iVar1 = fn_0068cafc(DAT_008977e8);
  fVar8 = (float)param_1[0x1f];
  param_1[0x1f] = (int)(fVar8 - 0.4);
  local_58 = (float)param_1[2] + (float)param_1[0x1e];
  local_54 = (float)param_1[3] + (fVar8 - 0.4);
  local_50 = (float)param_1[4] + (float)param_1[0x20];
  fn_0068e960(DAT_008977e8);
  uVar2 = fn_00664c4c();
  iVar3 = fn_0023bc18(uVar2,param_1 + 2,&local_58,param_1 + 0x21);
  (**(code **)(*param_1 + 0x1c))(param_1,&local_58);
  iVar4 = param_1[0x15];
  uVar2 = fn_0068c7e8(DAT_008977e8);
  fn_0023e574(uVar2,iVar4);
  uVar2 = fn_0068c7e8(DAT_008977e8);
  fn_0023e6a8(uVar2,iVar4);
  fn_0014481c(DAT_008977e8);
  iVar5 = fn_006b6bc4();
  iVar4 = 0;
  uVar9 = 0;
  uVar7 = 0;
  if (0 < iVar5) {
    do {
      uVar2 = fn_0014481c(DAT_008977e8);
      iVar4 = fn_006b71a8(uVar2,uVar7 & 0xff);
      iVar6 = fn_0026005c(param_1,iVar4);
      if (iVar6 == 0) {
        local_48 = *(undefined4 *)(iVar4 + 0x3c);
        uStack_44 = *(undefined4 *)(iVar4 + 0x40);
        uStack_40 = *(undefined4 *)(iVar4 + 0x44);
        uStack_3c = *(undefined4 *)(iVar4 + 0x48);
        iVar6 = fn_006a8a84(param_1,&local_48,iVar4 + 8,1);
        iVar4 = (int)uVar9;
        if (iVar6 != 0) {
          fn_00260014(param_1,1);
          if ((((byte)DAT_008c62fc & 1) != 0) || (iVar1 = fn_00303afc(&DAT_008c62fc), iVar1 == 0))
          goto LAB_0038929c;
          goto LAB_003891e0;
        }
      }
      iVar4 = (int)uVar9;
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < iVar5);
  }
  if ((iVar3 == 0) && (0x40a00000 < param_1[3])) {
    iVar3 = param_1[0x24];
    param_1[0x24] = iVar3 + 1;
    if (iVar3 + 1 < *(int *)(iVar1 + 0xb4)) {
      return;
    }
    fn_00260014(param_1,1);
    if (((byte)DAT_008c62fc & 1) != 0) goto LAB_0038929c;
    iVar1 = fn_00303afc(&DAT_008c62fc);
  }
  else {
    fn_00260014(param_1,1);
    if (((byte)DAT_008c62fc & 1) != 0) goto LAB_0038929c;
    iVar1 = fn_00303afc(&DAT_008c62fc);
  }
  if (iVar1 != 0) {
LAB_003891e0:
    DAT_008f9e2c = iVar4;
    DAT_008f9e30 = iVar4;
    DAT_008f9e34 = iVar4;
  }
LAB_0038929c:
  iVar1 = DAT_008f9e34;
  iVar4 = DAT_008f9e30;
  param_1[0x1e] = DAT_008f9e2c;
  param_1[0x1f] = iVar4;
  param_1[0x20] = iVar1;
  *(undefined1 *)(param_1 + 0x25) = 2;
  return;
}



undefined4 * fn_0038903c(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = &DAT_0082a7fc;
  param_1[1] = param_2;
  param_1[2] = param_3;
  return param_1;
}


