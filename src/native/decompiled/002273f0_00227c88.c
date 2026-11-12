#include "002273f0_00227c88.h"



undefined4 fn_00227c88(void)

{
  return DAT_008978a8;
}



void fn_00227988(undefined4 param_1,undefined4 param_2)

{
  fn_00227ca8(DAT_00897894,8,param_1,param_2);
  return;
}



undefined4 fn_002277d8(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0) || (iVar1 = fn_003035b0(param_2,(char *)&DAT_0086a0ac), iVar1 == 0)) {
    iVar1 = (**(code **)(*param_1 + 0x18))(param_1,(char *)&DAT_0086a0ac);
    if (iVar1 == 0) {
      (**(code **)(*param_1 + 8))(param_1,(char *)&DAT_0086a0ac,(char *)&DAT_0086a140,0x18,0x15,0);
    }
    else {
      (**(code **)(*param_1 + 0x24))(param_1,(char *)&DAT_0086a0ac,0x15);
    }
    uVar2 = 1;
    if (param_2 != 0) goto LAB_00227850;
LAB_00227894:
    iVar1 = (**(code **)(*param_1 + 0x18))(param_1,(char *)&DAT_0086a0bc);
    if (iVar1 == 0) {
      (**(code **)(*param_1 + 8))(param_1,(char *)&DAT_0086a0bc,(char *)&DAT_0086a120,0x18,0x15,0);
    }
    else {
      (**(code **)(*param_1 + 0x24))(param_1,(char *)&DAT_0086a0bc,0x15);
    }
    uVar2 = 1;
    if (param_2 == 0) goto LAB_00227918;
  }
  else {
LAB_00227850:
    iVar1 = fn_003035b0(param_2,(char *)&DAT_0086a0bc);
    if (iVar1 == 0) goto LAB_00227894;
  }
  iVar1 = fn_003035b0(param_2,(char *)&DAT_0086a0b4);
  if (iVar1 != 0) {
    return uVar2;
  }
LAB_00227918:
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1,(char *)&DAT_0086a0b4);
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 8))(param_1,(char *)&DAT_0086a0b4,(char *)&DAT_0086a100,0x18,0x15,0);
  }
  else {
    (**(code **)(*param_1 + 0x24))(param_1,(char *)&DAT_0086a0b4,0x15);
  }
  return 1;
}



/* WARNING: Removing unreachable block (ram,0x002274e8) */

undefined4 fn_002273f0(int *param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  undefined4 uVar8;
  int *piVar9;
  int iVar10;
  bool bVar11;
  undefined1 auStack_38 [36];
  
  uVar8 = 0;
  if (*param_1 != 0x54445342) {
    return 0;
  }
  if (6 < *(byte *)(param_1 + 1)) {
    return 0;
  }
  if ((param_2 == 0) && (3 < (*(byte *)((int)param_1 + 5) & 0x7f))) {
    return 0;
  }
  if ((*(int *)(&DAT_008978ac + (uint)*(byte *)(param_1 + 1) * 4) != 0) &&
     (iVar2 = fn_0025097c(param_1,*(undefined2 *)((int)param_1 + 6),
                           *(int *)(&DAT_008978ac + (uint)*(byte *)(param_1 + 1) * 4),0x20),
     iVar2 == 0)) {
    return 0;
  }
  uVar3 = (uint)*(byte *)(param_1 + 1);
  switch(uVar3) {
  default:
    return 0;
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
    break;
  }
  switch(uVar3) {
  default:
    goto switchD_00227474_caseD_0;
  case 1:
  case 2:
    piVar9 = param_1 + 2;
    if (uVar3 == 1) {
      iVar2 = 4;
    }
    else {
      iVar2 = 0x28;
    }
    pbVar7 = (byte *)((int)param_1 + 7);
    pbVar4 = (byte *)(*(int *)(&DAT_008978c8 + uVar3 * 4) + -1);
    for (iVar2 = iVar2 >> 1; iVar2 != 0; iVar2 = iVar2 + -1) {
      pbVar5 = pbVar7 + 1;
      pbVar7 = pbVar7 + 2;
      *pbVar5 = pbVar4[1] ^ *pbVar5;
      pbVar4 = pbVar4 + 2;
      *pbVar7 = *pbVar4 ^ *pbVar7;
    }
    if ((char)param_1[1] == '\x01') {
      iVar2 = fn_00163940((int)(short)*piVar9);
      if (iVar2 == 0) {
        return 0;
      }
      if (99 < *(byte *)((int)param_1 + 0xb)) {
        return 0;
      }
    }
    else {
      iVar2 = fn_001a46f4((int)(short)param_1[3]);
      if (iVar2 == 0) {
        return 0;
      }
      if (0x32 < *(byte *)((int)param_1 + 0xe)) {
        return 0;
      }
      iVar2 = fn_0012f254((int)(short)param_1[3],*piVar9);
      if (iVar2 == 0) {
        return 0;
      }
      uVar3 = 0;
      do {
        if ((*(short *)((int)piVar9 + uVar3 * 2 + 8) != 0) &&
           (iVar2 = fn_0068f818((int)*(short *)((int)piVar9 + uVar3 * 2 + 8)), iVar2 == 0)) {
          return 0;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < 6);
    }
    break;
  case 3:
    pbVar4 = (byte *)((int)param_1 + 7);
    iVar2 = 4;
    pbVar7 = (byte *)(DAT_008978d4 + -1);
    do {
      pbVar5 = pbVar4 + 1;
      iVar2 = iVar2 + -1;
      pbVar4 = pbVar4 + 2;
      *pbVar5 = pbVar7[1] ^ *pbVar5;
      pbVar7 = pbVar7 + 2;
      *pbVar4 = *pbVar7 ^ *pbVar4;
    } while (iVar2 != 0);
    iVar2 = fn_0013add0((int)(short)param_1[2]);
    if ((iVar2 == 0) || (iVar2 = fn_0013add0((int)*(short *)((int)param_1 + 10)), iVar2 == 0)) {
      return 0;
    }
    uVar8 = fn_002ea524((int)*(short *)((int)param_1 + 10));
    iVar2 = fn_0012f254(uVar8,param_1[3]);
    if (iVar2 == 0) {
      return 0;
    }
    break;
  case 4:
    pbVar4 = (byte *)((int)param_1 + 7);
    iVar2 = 0x2a;
    pbVar7 = (byte *)(DAT_008978d8 + -1);
    do {
      pbVar5 = pbVar4 + 1;
      iVar2 = iVar2 + -1;
      pbVar4 = pbVar4 + 2;
      *pbVar5 = *pbVar5 ^ pbVar7[1];
      pbVar7 = pbVar7 + 2;
      *pbVar4 = *pbVar7 ^ *pbVar4;
    } while (iVar2 != 0);
    iVar2 = fn_0013add0((int)(short)param_1[0xd]);
    if (iVar2 == 0) {
      return 0;
    }
    uVar3 = 0;
    do {
      if ((*(short *)((int)(param_1 + 2) + uVar3 * 2 + 0x24) != 0) &&
         (iVar2 = fn_0013add0(), iVar2 == 0)) {
        return 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 4);
    uVar8 = fn_002ea524((int)(short)param_1[0xd]);
    iVar2 = fn_0012f254(uVar8,param_1[2]);
    if (iVar2 == 0) {
      return 0;
    }
    if (3 < *(byte *)((int)param_1 + 0x36)) {
      return 0;
    }
    break;
  case 5:
    fn_003a0014(auStack_38,param_1);
    iVar2 = fn_006c548c(auStack_38);
    if (iVar2 == 0) {
      fn_003a030c(auStack_38);
      return 0;
    }
    fn_003a030c(auStack_38);
    return 1;
  case 6:
    iVar2 = 0;
    do {
      iVar10 = 0;
      do {
        if ((short)param_1[2] != 1) {
          return 0;
        }
        iVar6 = fn_00163940((int)*(short *)((int)param_1 + 10));
        if (iVar6 == 0) {
          return 0;
        }
        uVar1 = *(ushort *)(param_1 + 3);
        bVar11 = 999 < uVar1;
        if (!bVar11) {
          uVar1 = *(ushort *)((int)param_1 + 0xe);
        }
        if (bVar11 || 999 < uVar1) {
          return 0;
        }
        uVar1 = *(ushort *)(param_1 + 4);
        bVar11 = uVar1 < 1000;
        if (bVar11) {
          uVar1 = *(ushort *)((int)param_1 + 0x12);
        }
        if (!bVar11 || 999 < uVar1) {
          return 0;
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < 0x2a);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 7);
  }
  uVar8 = 1;
switchD_00227474_caseD_0:
  return uVar8;
}


