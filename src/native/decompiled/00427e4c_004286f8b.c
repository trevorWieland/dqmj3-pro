#include "00427e4c_004286f8b.h"



uint * fn_004286f8(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = uVar1;
  if (param_1[1] < uVar1) {
    do {
      uVar2 = uVar2 + 6;
    } while (uVar2 != param_1[1]);
  }
  fn_001008c4(uVar1,(int)(param_1[2] - uVar1) / 6,0);
  return param_1;
}



uint * fn_004285cc(uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint local_28;
  uint local_24;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  local_28 = 0x20;
  uVar4 = (int)-*param_1 / 6;
  if (uVar4 < 0x20) {
    local_24 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
    if (local_24 < uVar4 + 0x20) {
      local_24 = uVar4 + 0x20;
    }
    puVar2 = &local_24;
    if (local_24 < 0x21) {
      puVar2 = &local_28;
    }
    uVar5 = *puVar2;
    uVar1 = fn_00100fc6(uVar5 * 6,0);
    uVar6 = param_1[1];
    uVar3 = uVar1;
    for (uVar4 = *param_1; uVar4 != uVar6; uVar4 = uVar4 + 6) {
      if (uVar3 != 0) {
        fn_0019bc50(uVar3,uVar4);
      }
      uVar3 = uVar3 + 6;
    }
    uVar3 = *param_1;
    uVar4 = uVar3;
    if (param_1[1] < uVar3) {
      do {
        uVar4 = uVar4 + 6;
      } while (uVar4 != param_1[1]);
    }
    fn_001008c4(uVar3,(int)(param_1[2] - uVar3) / 6,0);
    uVar4 = *param_1;
    *param_1 = uVar1;
    param_1[2] = uVar1 + uVar5 * 6;
    param_1[1] = uVar1 + ((int)(param_1[1] - uVar4) / 6) * 6;
  }
  return param_1;
}



/* WARNING: Type propagation algorithm not settling */

byte fn_0042838c(undefined4 *param_1,int param_2)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  short *psVar4;
  undefined4 uVar5;
  short *psVar6;
  ushort uVar7;
  int iVar8;
  byte bVar9;
  bool bVar10;
  
  iVar2 = fn_00154ac8(0x47);
  if ((iVar2 == 0) || (iVar2 = fn_002d8370(0xffffffff), iVar2 != 0)) {
    return 0;
  }
  uVar3 = **(uint **)(DAT_008977e0 + 0x40);
  bVar10 = uVar3 != 0;
  if (!bVar10) {
    uVar3 = (uint)*(byte *)(param_1 + 3);
  }
  if (bVar10 || uVar3 != 0) {
    return 0;
  }
  psVar4 = (short *)*param_1;
  psVar6 = (short *)param_1[1];
  if (psVar4 < psVar6) {
    iVar2 = (int)psVar6 - (int)psVar4;
    iVar8 = 1;
    if (1 < iVar2 / 6 + 1) {
LAB_00428450:
      uVar7 = psVar4[1];
      bVar10 = uVar7 < 100;
      if (bVar10) {
        uVar7 = (ushort)*(byte *)(psVar4 + 2);
      }
      if (bVar10 && uVar7 < 100) goto LAB_00428478;
      sVar1 = *psVar4;
joined_r0x0042846c:
      if (sVar1 != param_2) {
        return 0;
      }
    }
  }
  else {
    for (; psVar4 != psVar6; psVar4 = psVar4 + 3) {
      uVar7 = psVar4[1];
      bVar10 = uVar7 < 100;
      if (bVar10) {
        uVar7 = (ushort)*(byte *)(psVar4 + 2);
      }
      if (!bVar10 || 99 < uVar7) {
        sVar1 = *psVar4;
        goto joined_r0x0042846c;
      }
    }
  }
LAB_00428488:
  psVar4 = (short *)fn_004282d0(param_1,param_2);
  if (psVar4 == (short *)0x0) {
    psVar4 = (short *)fn_00427ee4(param_1,param_2);
  }
  if (*(char *)((int)psVar4 + 5) != '\0') {
    if (*(char *)((int)psVar4 + 5) != '\x01') {
      return 0;
    }
    if (99 < *(byte *)(psVar4 + 2)) {
      bVar9 = 2;
      goto LAB_004284f4;
    }
  }
  iVar2 = fn_00163868(100);
  if ((int)(uint)(ushort)psVar4[1] <= iVar2) {
    return 0;
  }
  bVar9 = 1;
LAB_004284f4:
  *(undefined1 *)(param_1 + 3) = 1;
  if (bVar9 <= *(byte *)((int)psVar4 + 5)) {
    return bVar9;
  }
  *(byte *)((int)psVar4 + 5) = bVar9;
  if (bVar9 == 1) {
    psVar4[1] = 100;
    fn_0015b064((int)*psVar4);
    fn_0015b0dc();
    uVar5 = fn_006945fc(DAT_008977e0,DAT_008914ac);
    fn_003b679c(*(undefined4 *)(DAT_008977e0 + 0x54),uVar5);
    return 1;
  }
  if (bVar9 == 2) {
    fn_0015b064((int)*psVar4);
    fn_0015b0dc();
    uVar5 = fn_006945fc(DAT_008977e0,DAT_008914b0);
    fn_003b679c(*(undefined4 *)(DAT_008977e0 + 0x54),uVar5);
    return 2;
  }
  return bVar9;
LAB_00428478:
  iVar8 = iVar8 + 1;
  psVar4 = psVar4 + 3;
  if (iVar2 / 6 + 1 <= iVar8) goto LAB_00428488;
  goto LAB_00428450;
}



void fn_00428358(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if (param_3 != 1) {
    if (param_3 != 2) {
      return;
    }
    iVar1 = fn_004282d0();
    if (iVar1 != 0) {
      *(undefined1 *)(iVar1 + 5) = 1;
    }
  }
  *(undefined1 *)(param_1 + 0xc) = 0;
  return;
}


