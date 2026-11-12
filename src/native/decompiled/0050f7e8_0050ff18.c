#include "0050f7e8_0050ff18.h"



undefined1 * fn_0050ff18(void)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  if (DAT_008c0678 == 0) {
    puVar2 = (undefined4 *)fn_004ecfe0(0x48);
    iVar3 = 0;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = &DAT_00857124;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      iVar3 = fn_004edc74(puVar2 + 5,0xffffffff);
      *(undefined4 *)(iVar3 + 0xc) = 0;
      *(undefined4 *)(iVar3 + 0x10) = 0;
      *(undefined4 *)(iVar3 + 0x14) = 0;
      *(undefined4 *)(iVar3 + 0x18) = 0;
      iVar4 = fn_004edc74(iVar3 + 0x1c,0xffffffff);
      iVar3 = iVar4 + -0x30;
      *(undefined4 *)(iVar4 + 0x10) = 0;
      *(undefined4 *)(iVar4 + 0x14) = 0;
    }
    puVar1 = (undefined1 *)0x0;
    DAT_008c0678 = iVar3;
  }
  else {
    puVar1 = &DAT_d8a1482e;
  }
  return puVar1;
}



void fn_0050fde4(int param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint local_28;
  int iStack_24;
  
  local_28 = 0;
  iStack_24 = 0;
  fn_004f01f4(&local_28);
  iVar6 = local_28 - *(uint *)(param_1 + 0x40);
  iVar4 = iStack_24 - (*(int *)(param_1 + 0x44) + (uint)(local_28 < *(uint *)(param_1 + 0x40)));
  puVar1 = (undefined4 *)fn_004f0ce8();
  uVar2 = fn_0011c134(iVar6,iVar4,*puVar1,puVar1[1]);
  if (*(int *)(param_1 + 0x28) == 0) {
    *(undefined2 *)(param_2 + 8) = 0;
  }
  else {
    *(ushort *)(param_2 + 8) = (ushort)((uVar2 & 0xffff) << 8) | (ushort)((uVar2 & 0xffff) >> 8);
  }
  uVar5 = 0;
  iVar4 = fn_006d6e30(param_2 + 0x5c4);
  if (iVar4 != 0) {
    fn_004edc34();
    if ((((*(int *)(param_1 + 0xc) != 0) &&
         (uVar3 = fn_006f4e34((uint *)(param_1 + 4),param_2 + 0x5c4,&LAB_0050fddc), -1 < (int)uVar3
         )) && (uVar3 < *(uint *)(param_1 + 4))) &&
       (((iVar4 = *(int *)(*(int *)(param_1 + 0xc) + uVar3 * 4), iVar4 != 0 &&
         (uVar2 = uVar2 - *(int *)(iVar4 + 0x10), uVar2 < 10000)) &&
        (uVar5 = *(ushort *)(iVar4 + 0x14) + uVar2 & 0xffff, uVar5 == 0)))) {
      uVar5 = 0xffff;
    }
    fn_004edc70(param_1 + 0x14);
  }
  *(ushort *)(param_2 + 10) = (ushort)(uVar5 << 8) | (ushort)(uVar5 >> 8);
  return;
}



undefined4 fn_0050fca4(int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint local_30;
  int iStack_2c;
  
  iVar11 = param_1 + 0x30;
  fn_004edc34(iVar11);
  if ((((*(int *)(param_1 + 0x28) == 0) ||
       (uVar3 = fn_006f4e34((uint *)(param_1 + 0x20),param_2,&LAB_0050fde0), (int)uVar3 < 0)) ||
      (*(uint *)(param_1 + 0x20) <= uVar3)) ||
     (iVar8 = *(int *)(*(int *)(param_1 + 0x28) + uVar3 * 4), iVar8 == 0)) {
    fn_004edc70(iVar11);
    return 0;
  }
  local_30 = 0;
  iStack_2c = 0;
  fn_004f01f4(&local_30);
  iVar9 = local_30 - *(uint *)(param_1 + 0x40);
  iVar12 = iStack_2c - (*(int *)(param_1 + 0x44) + (uint)(local_30 < *(uint *)(param_1 + 0x40)));
  puVar4 = (undefined4 *)fn_004f0ce8();
  uVar5 = fn_0011c134(iVar9,iVar12,*puVar4,puVar4[1]);
  fn_005105b4(iVar8,uVar5);
  iVar9 = 0;
  piVar6 = (int *)(iVar8 + 8);
  piVar7 = (int *)(iVar8 + 0x10);
  iVar8 = 0;
  iVar13 = 0;
  iVar12 = 0;
  iVar10 = 8;
  do {
    piVar1 = piVar6 + 4;
    piVar2 = piVar7 + 4;
    piVar6 = piVar6 + 8;
    piVar7 = piVar7 + 8;
    iVar10 = iVar10 + -1;
    iVar9 = iVar9 + *piVar1;
    iVar8 = iVar8 + *piVar2;
    iVar12 = iVar12 + *piVar6;
    iVar13 = iVar13 + *piVar7;
  } while (iVar10 != 0);
  if (iVar8 + iVar13 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = fn_00169f1c(iVar9 + iVar12,iVar8 + iVar13);
  }
  fn_004edc70(iVar11);
  return uVar5;
}



void fn_0050fc24(char *param_1,uint param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar1 = DAT_008bf4cc;
  if (*param_1 != '\0' && param_2 != 0) {
    uVar4 = 0;
    do {
      if (((param_2 & 1 << (uVar4 & 0xff)) != 0) &&
         (iVar2 = fn_0050b080(uVar1,uVar4 & 0xff), iVar2 - 0x100000U < 0x3ff00000)) {
        uVar3 = param_3[1];
        *(undefined4 *)(iVar2 + 0x60) = *param_3;
        *(undefined4 *)(iVar2 + 100) = uVar3;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 0xc);
  }
  return;
}



uint fn_0050fbd8(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint local_10;
  
  if ((DAT_008bf4d4 - 0x100000U < 0x3ff00000) &&
     (local_10 = param_4, iVar1 = fn_006dbecc(DAT_008bf4d4,&local_10,param_1,param_2), -1 < iVar1))
  {
    local_10 = local_10 & 0xff;
  }
  else {
    local_10 = 0xfd;
  }
  return local_10;
}



void fn_0050fbd4(undefined4 *param_1)

{
  *param_1 = &DAT_00856ce8;
  return;
}



void fn_0050fb7c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_004eddf4();
  *puVar1 = &PTR_FUN_008570fc;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x13] = 0;
  puVar1[0x12] = 15000;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  *(undefined1 *)((int)puVar1 + 0x59) = 0;
  return;
}



void fn_0050fb58(int *param_1)

{
  int in_stack_00000004;
  
  param_1[0x12] = in_stack_00000004;
  (**(code **)(*param_1 + 0x18))();
  return;
}



void fn_0050faac(int *param_1)

{
  char cVar1;
  int iVar2;
  
  (**(code **)(*param_1 + 0x1c))(param_1);
  param_1[0x15] = 0;
  if (param_1[0x13] != 0) {
    if (DAT_008c0690 != 0) {
      fn_005196a0();
    }
    param_1[0x13] = 0;
  }
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  if ((char *)param_1[0x14] != (char *)0x0) {
    cVar1 = *(char *)param_1[0x14];
    if ((cVar1 != '\x02' && cVar1 != '\x03') && (cVar1 != '\x04')) {
      fn_004ed068();
    }
    param_1[0x14] = 0;
  }
  iVar2 = fn_006d897c(param_1);
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0050fb4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,0);
  return;
}



uint fn_0050f9a0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_a0 [120];
  undefined1 local_28 [20];
  
  iVar4 = *(int *)(param_1 + 0x54);
  iVar5 = *(int *)(iVar4 + 0x28);
  if (iVar5 == 0) {
    uVar1 = 0;
  }
  else {
    fn_00301f50(auStack_a0,0x74);
    fn_006da340(iVar5,auStack_a0,*(undefined1 *)(iVar4 + 0x50),0,(int)*(char *)(param_1 + 0x58));
    fn_0014f590(local_28);
    if (((*(int *)(DAT_008bf4d4 + 100) - 0x100000U < 0x3ff00000) ||
        (bVar3 = *(byte *)(*(int *)(param_1 + 0x54) + 0x14), bVar3 == 0xfe)) || (0xb < bVar3)) {
      fn_004ed810(local_28,*(int *)(param_1 + 0x54) + 4);
      bVar3 = 0xfd;
    }
    uVar2 = fn_006da454(iVar5);
    uVar1 = fn_00519798(DAT_008c0690,param_1 + 0x4c,auStack_a0,uVar2,bVar3,local_28,
                         *(undefined4 *)(iVar5 + 0xc));
    uVar1 = uVar1 >> 0x1f ^ 1;
  }
  return uVar1;
}



uint fn_0050f7e8(int param_1,uint param_2)

{
  longlong lVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  uint uVar6;
  uint extraout_r1;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  uint unaff_r7;
  undefined1 auStack_88 [116];
  
  pbVar2 = *(byte **)(param_1 + 0x50);
  if (pbVar2 != (byte *)0x0) {
    param_2 = (uint)pbVar2[0x10];
  }
  if (pbVar2 == (byte *)0x0 || param_2 == 0) {
    iVar11 = *(int *)(param_1 + 0x54);
    iVar3 = *(int *)(iVar11 + 0x28);
    if ((iVar3 != 0) && (*(byte *)(iVar11 + 0x14) < 0xc)) {
      fn_00301f50(auStack_88,0x74);
      fn_006da340(iVar3,auStack_88,*(undefined1 *)(iVar11 + 0x50),1,(int)*(char *)(param_1 + 0x58))
      ;
      uVar4 = fn_006da454(iVar3);
      iVar3 = fn_00519798(DAT_008c0690,param_1 + 0x4c,auStack_88,uVar4,
                           *(undefined1 *)(*(int *)(param_1 + 0x54) + 0x14),
                           *(int *)(param_1 + 0x54) + 4,*(undefined4 *)(iVar3 + 0xc));
      if (-1 < iVar3) {
        *(undefined1 *)(param_1 + 0x59) = 0;
        iVar3 = DAT_008bf49c;
        uVar10 = *(uint *)(param_1 + 0x48);
        puVar12 = (uint *)(DAT_008bf49c + 0x30);
        puVar5 = (uint *)fn_004f0ce8();
        uVar7 = *puVar5;
        uVar9 = puVar5[1];
        lVar1 = (ulonglong)uVar10 * (ulonglong)uVar7;
        uVar6 = (uint)lVar1;
        uVar8 = *puVar12;
        iVar3 = *(int *)(iVar3 + 0x34);
        *(uint *)(param_1 + 0x40) = uVar6 + uVar8;
        *(uint *)(param_1 + 0x44) =
             uVar7 * ((int)uVar10 >> 0x1f) + uVar9 * uVar10 + (int)((ulonglong)lVar1 >> 0x20) +
             iVar3 + (uint)CARRY4(uVar6,uVar8);
        *(code **)(param_1 + 0x24) = fn_0050f08c;
        *(undefined4 *)(param_1 + 0x28) = 0;
        *(char **)(param_1 + 0x2c) = "ConnectStationJob::WaitRequestAck";
        return unaff_r7 & 0xff00 | 5;
      }
    }
    return unaff_r7 & 0xff00 | 5;
  }
  uVar6 = (uint)*pbVar2;
  if ((uVar6 != 2 && uVar6 != 3) && (uVar6 != 4)) {
    fn_004ed068();
    uVar6 = extraout_r1;
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  iVar3 = *(int *)(param_1 + 0x54);
  if ((iVar3 != 0) && (*(char *)(iVar3 + 0x20) == '\x04')) {
    *(undefined1 *)(iVar3 + 0x20) = 6;
  }
  return uVar6 & 0xff00 | 1;
}


