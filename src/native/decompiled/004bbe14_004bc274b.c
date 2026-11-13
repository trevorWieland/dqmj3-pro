#include "004bbe14_004bc274b.h"



void fn_004bc274(void)

{
  int iVar1;
  
  iVar1 = fn_004bc2a4();
  if (iVar1 == 0) {
    return;
  }
  if (*(code **)(iVar1 + -8) == (code *)0x0) {
    fn_0030233c();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004bc294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + -8))();
  return;
}



undefined4 *
fn_004bc1a4(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,
            undefined8 param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)fn_004b579c();
  *puVar1 = &DAT_00855d98;
  puVar1[0x4a] = 0;
  puVar1[0x4b] = 0;
  puVar1[0x50] = 0;
  puVar1[0x51] = 0;
  puVar2 = (undefined4 *)0x0;
  if (((param_4 & 0x40) != 0) &&
     (puVar2 = (undefined4 *)fn_0015ece0(0x28), puVar2 != (undefined4 *)0x0)) {
    *puVar2 = &DAT_00855b94;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[1] = 0;
    uVar3 = fn_001249d0();
    puVar2[8] = uVar3;
  }
  fn_004bbfa4(puVar1,param_2,param_3,param_4,(int)param_5,(int)((ulonglong)param_5 >> 0x20),puVar2)
  ;
  return puVar1;
}



undefined4 fn_004bc094(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  uint local_28;
  int iStack_24;
  
  if ((((*(ushort *)(param_1 + 0x3c) & 0xf) != 7) &&
      (bVar1 = *(byte *)(param_1 + 0x25) >> 4, *(char *)(param_1 + 0x130) == '\0')) &&
     (iVar2 = fn_004b616c(bVar1), *(char *)(iVar2 + 0x1c) != '\0')) {
    uVar10 = *(uint *)(param_1 + 0x108);
    uVar9 = *(uint *)(param_1 + 0x10c);
    iVar3 = fn_004b616c(bVar1);
    iVar4 = fn_001249d0();
    iVar2 = 0;
    if (iVar4 != 0) {
      iVar2 = *(int *)(iVar4 + 0xc);
    }
    iVar7 = 0;
    if (iVar4 == 0) {
      iVar2 = 0;
    }
    piVar5 = (int *)(iVar2 + 0x50);
    (**(code **)(*piVar5 + 8))();
    iVar2 = fn_001249d0();
    if (iVar2 != 0) {
      iVar7 = *(int *)(iVar2 + 0xc);
    }
    piVar6 = (int *)(iVar7 + 0x50);
    (**(code **)(*piVar6 + 8))();
    fn_0013d0fc(&local_28);
    uVar11 = *(uint *)(iVar3 + 0x20);
    iVar4 = iStack_24 - (*(int *)(iVar3 + 0x2c) + (uint)(local_28 < *(uint *)(iVar3 + 0x28)));
    bVar12 = uVar11 < local_28 - *(uint *)(iVar3 + 0x28);
    iVar2 = (int)uVar11 >> 0x1f;
    if ((int)(iVar2 - (iVar4 + (uint)bVar12)) < 0 !=
        (SBORROW4(iVar2,iVar4) != SBORROW4(iVar2 - iVar4,(uint)bVar12))) {
      *(uint *)(iVar3 + 0x28) = local_28;
      *(int *)(iVar3 + 0x2c) = iStack_24;
    }
    (**(code **)(*piVar6 + 0xc))(piVar6);
    uVar8 = *(uint *)(iVar3 + 0x28);
    uVar11 = *(uint *)(iVar3 + 0x2c);
    (**(code **)(*piVar5 + 0xc))(piVar5);
    if (uVar11 <= uVar9 && (uint)(uVar10 <= uVar8) <= uVar11 - uVar9) {
      return 0;
    }
  }
  return 1;
}


