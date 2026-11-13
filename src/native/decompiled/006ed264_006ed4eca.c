#include "006ed264_006ed4eca.h"



int fn_006ed264(int param_1,int param_2,int param_3,int *param_4,undefined4 param_5,
                undefined4 param_6)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int local_44;
  int iStack_40;
  int iStack_3c;
  int *local_38;
  int iStack_34;
  int local_30;
  int local_2c;
  int *piStack_28;
  
  iVar4 = 0;
  iVar5 = 0;
  iStack_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  piStack_28 = param_4;
  if (0 < *param_4) {
    do {
      iVar1 = *(int *)(param_1 + 4);
      uVar6 = (uint)*(ushort *)(param_4[1] + iVar5 * 2);
      iVar3 = *(int *)(param_1 + 0xc);
      piVar7 = (int *)(iVar1 + uVar6 * 0x1c + 0xc);
      local_38 = (int *)(iVar3 + *(int *)(iVar1 + uVar6 * 0x1c) * 0xc);
      piVar8 = (int *)(iVar3 + *(int *)(iVar1 + uVar6 * 0x1c + 4) * 0xc);
      piVar9 = (int *)(iVar3 + *(int *)(iVar1 + uVar6 * 0x1c + 8) * 0xc);
      iVar1 = fn_005f2d8c(&local_44,param_5,param_6,local_38,piVar8,piVar9,piVar7);
      if (iVar1 != 0) {
        if (local_30 == 0) {
          return 1;
        }
        if (iVar4 < local_2c) {
          piVar2 = (int *)(local_30 + iVar4 * 0x48);
          *piVar2 = iVar5;
          piVar2[1] = (int)*(short *)(*(int *)(param_1 + 4) + uVar6 * 0x1c + 0x18);
          piVar2[2] = local_44;
          piVar2[3] = iStack_40;
          piVar2[4] = iStack_3c;
          iVar1 = local_38[1];
          iVar3 = local_38[2];
          piVar2[5] = *local_38;
          piVar2[6] = iVar1;
          piVar2[7] = iVar3;
          iVar1 = piVar8[1];
          iVar3 = piVar8[2];
          piVar2[8] = *piVar8;
          piVar2[9] = iVar1;
          piVar2[10] = iVar3;
          iVar1 = piVar9[1];
          iVar3 = piVar9[2];
          piVar2[0xb] = *piVar9;
          piVar2[0xc] = iVar1;
          piVar2[0xd] = iVar3;
          iVar1 = piVar7[1];
          iVar3 = piVar7[2];
          piVar2[0xe] = *piVar7;
          piVar2[0xf] = iVar1;
          piVar2[0x10] = iVar3;
          piVar2[0x11] = *(int *)(param_1 + 0x2c);
        }
        iVar4 = iVar4 + 1;
        if (local_2c <= iVar4) {
          return iVar4;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *param_4);
  }
  return iVar4;
}


