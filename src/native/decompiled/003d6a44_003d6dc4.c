#include "003d6a44_003d6dc4.h"



undefined4 * fn_003d6dc4(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 local_28;
  int local_24;
  undefined1 auStack_20 [8];
  
  *param_1 = &PTR_FUN_0083147c;
  fn_001218d4(DAT_00897800,L"rom:/data/Message/DiscMessage.mes");
  fn_001218d4(DAT_00897800,DAT_0089878c);
  uVar1 = param_1[0x1e];
  uVar2 = uVar1;
  if ((uint)param_1[0x1f] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[0x1f]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x20] - uVar1) >> 2,0);
  iVar7 = param_1[0x1c];
  iVar3 = local_24;
  for (iVar6 = param_1[0x1b]; iVar6 != iVar7; iVar6 = iVar6 + 0x28) {
    local_24 = *(int *)(iVar6 + 0x14);
    piVar5 = (int *)(iVar6 + 4);
    if (local_24 != 0) {
      local_28 = *(undefined4 *)(local_24 + 8);
      fn_00772324(auStack_20,piVar5,&local_28,&local_24);
      iVar3 = *(int *)(iVar6 + 0x14);
      *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar6 + 8);
      *(int *)(iVar6 + 8) = iVar3;
      piVar4 = (int *)*piVar5;
      while (iVar3 = local_24, piVar4 != (int *)0x0) {
        *piVar5 = *piVar4;
        fn_001008c4(piVar4[2],piVar4[1],0);
        fn_001008c4(piVar4,1,0);
        piVar4 = (int *)*piVar5;
      }
    }
    local_24 = iVar3;
    iVar3 = local_24;
  }
  iVar6 = param_1[0x1b];
  local_24 = iVar3;
  fn_001008c4(iVar6,(param_1[0x1d] - iVar6) / 0x28,0);
  uVar1 = param_1[0x18];
  uVar2 = uVar1;
  if ((uint)param_1[0x19] <= uVar1) {
    for (; uVar2 != param_1[0x19]; uVar2 = uVar2 + 2) {
    }
  }
  fn_001008c4(uVar1,(int)(param_1[0x1a] - uVar1) >> 1,0);
  uVar1 = param_1[0x15];
  uVar2 = uVar1;
  if ((uint)param_1[0x16] <= uVar1) {
    for (; uVar2 != param_1[0x16]; uVar2 = uVar2 + 2) {
    }
  }
  fn_001008c4(uVar1,(int)(param_1[0x17] - uVar1) >> 1,0);
  iVar3 = param_1[0x10];
  for (iVar6 = param_1[0xf]; iVar6 != iVar3; iVar6 = iVar6 + 0x430) {
    uVar1 = *(uint *)(iVar6 + 0x420);
    uVar2 = uVar1;
    if (*(uint *)(iVar6 + 0x424) <= uVar1) {
      for (; uVar2 != *(uint *)(iVar6 + 0x424); uVar2 = uVar2 + 2) {
      }
    }
    fn_001008c4(uVar1,(int)(*(int *)(iVar6 + 0x428) - uVar1) >> 1,0);
  }
  iVar6 = param_1[0xf];
  fn_001008c4(iVar6,(param_1[0x11] - iVar6) / 0x430,0);
  uVar1 = param_1[0xc];
  uVar2 = uVar1;
  if ((uint)param_1[0xd] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[0xd]);
  }
  fn_001008c4(uVar1,(int)(param_1[0xe] - uVar1) >> 2,0);
  return param_1;
}



undefined4 * fn_003d6ce8(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00318bc4(param_1,2);
  puVar1[3] = 0;
  *puVar1 = &PTR_FUN_0083147c;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined1 *)(puVar1 + 8) = 1;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  fn_00121838(DAT_00897800,DAT_0089878c);
  fn_00121838(DAT_00897800,L"rom:/data/Message/DiscMessage.mes",1);
  return puVar1;
}



void fn_003d6b28(int param_1,undefined4 param_2,undefined1 param_3)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 uVar7;
  uint local_1c;
  uint local_18;
  int local_14;
  
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined1 *)(param_1 + 0x20) = param_3;
  iVar3 = fn_00129dd4(DAT_008977fc,0x23);
  iVar4 = fn_00147e6c(iVar3,&DAT_003d6cd0,4);
  if (iVar4 == 0) {
    uVar7 = fn_00129e04(DAT_008977fc,0x23);
    uVar5 = fn_0011c134((uint)uVar7 - 4,(int)((ulonglong)uVar7 >> 0x20) - (uint)((uint)uVar7 < 4),
                         0x40,0);
    *(int *)(param_1 + 0x24) = iVar3 + 4;
    *(undefined4 *)(param_1 + 0x14) = uVar5;
    iVar3 = fn_00129dd4(DAT_008977fc,0x24);
    iVar4 = fn_00147e6c(iVar3,&DAT_003d6cd8,4);
    if (iVar4 == 0) {
      uVar7 = fn_00129e04(DAT_008977fc,0x24);
      uVar5 = fn_0011c134((uint)uVar7 - 4,(int)((ulonglong)uVar7 >> 0x20) - (uint)((uint)uVar7 < 4)
                           ,0x2a,0);
      *(int *)(param_1 + 0x2c) = iVar3 + 4;
      *(undefined4 *)(param_1 + 0x1c) = uVar5;
      iVar3 = fn_00129dd4(DAT_008977fc,0x22);
      iVar4 = fn_00147e6c(iVar3,&DAT_003d6ce0,4);
      if (iVar4 == 0) {
        uVar7 = fn_00129e04(DAT_008977fc,0x22);
        uVar5 = fn_0011c134((uint)uVar7 - 4,
                             (int)((ulonglong)uVar7 >> 0x20) - (uint)((uint)uVar7 < 4),0x12,0);
        *(undefined4 *)(param_1 + 0x18) = uVar5;
        *(int *)(param_1 + 0x28) = iVar3 + 4;
        local_1c = 0;
        local_18 = 0;
        local_14 = 0;
        iVar3 = fn_001d4f28(*(undefined1 *)(*(int *)(param_1 + 8) + 9));
        cVar2 = *(char *)(iVar3 + 7);
        iVar3 = fn_001d4f28(*(undefined1 *)(*(int *)(param_1 + 8) + 9));
        uVar1 = *(undefined1 *)(iVar3 + 6);
        iVar3 = fn_001d4f28(*(undefined1 *)(*(int *)(param_1 + 8) + 8));
        fn_003d5670(param_1,&local_1c,*(undefined2 *)(iVar3 + 4),uVar1,(int)cVar2);
        fn_003d4efc(param_1,&local_1c);
        uVar6 = local_1c;
        if (local_18 < local_1c) {
          do {
            uVar6 = uVar6 + 4;
          } while (uVar6 != local_18);
        }
        fn_001008c4(local_1c,(int)(local_14 - local_1c) >> 2,0);
      }
    }
  }
  return;
}



void fn_003d6a44(int param_1,short param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                 ,int param_6)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  
  iVar4 = 0x7a44c6b;
  iVar1 = (*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c)) / 0x430;
  if (0 < iVar1) {
    iVar4 = *(int *)(param_1 + 0x3c);
  }
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      if (*(short *)(iVar4 + iVar2 * 0x430) == param_2) {
        psVar3 = (short *)(iVar4 + iVar2 * 0x430);
        goto LAB_003d6ad0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  psVar3 = (short *)0x0;
LAB_003d6ad0:
  if ((param_6 != 0) || (*(int *)(psVar3 + 0x212) - *(int *)(psVar3 + 0x210) >> 1 == 0)) {
    fn_0079e608(psVar3 + 0x210);
    fn_003d61f0(param_1,psVar3 + 4,psVar3 + 0x210,(int)*psVar3,param_3,param_4,param_5,0);
  }
  return;
}


