#include "00457b2c_004581acb.h"



void fn_004581ac(int param_1,int param_2,int param_3)

{
  byte bVar1;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  byte local_28 [4];
  byte local_24 [4];
  byte local_20 [4];
  
  if (*(char *)(param_2 + 0x24) == *(char *)(param_1 + 0xf4)) {
    *(char *)(param_3 + 0x24) = *(char *)(param_1 + 0xf4);
  }
  else {
    *(char *)(param_3 + 0x24) = *(char *)(param_2 + 0x24);
  }
  if (*(char *)(param_3 + 0x24) == '\0') {
    *(undefined4 *)(param_3 + 0x8c) = 0;
    goto LAB_0045828c;
  }
  local_24[0] = (byte)*(undefined4 *)(param_2 + 0x8c);
  if (DAT_008b637e == '\0') {
LAB_0045825c:
    pbVar3 = &DAT_008e9328;
  }
  else {
    piVar2 = (int *)fn_001775e8(DAT_008b63d8);
    if (*piVar2 == 0) goto LAB_0045825c;
    pbVar3 = (byte *)(*piVar2 + DAT_008e9324);
  }
  if (local_24[0] <= *pbVar3) {
    pbVar3 = local_24;
  }
  bVar1 = *pbVar3;
  uVar5 = DAT_008b64a0 & *(uint *)(param_2 + 0x8c) >> 8;
  if ((*(char *)(param_1 + 4) != '\n' && *(char *)(param_1 + 4) != '\x02') ||
     (iVar4 = fn_004b616c(), *(char *)(iVar4 + 0x99) != '\x01')) {
    uVar5 = uVar5 & 0xfffffffe;
  }
  *(uint *)(param_3 + 0x8c) = (uint)bVar1 | uVar5 << 8;
LAB_0045828c:
  local_28[0] = *(byte *)(param_2 + 0x67);
  iVar4 = fn_004b616c(*(undefined1 *)(param_1 + 4));
  local_20[0] = *(byte *)(iVar4 + 0x98);
  pbVar3 = local_28;
  if (*(byte *)(iVar4 + 0x98) < local_28[0]) {
    pbVar3 = local_20;
  }
  *(byte *)(param_3 + 0x67) = *pbVar3;
  return;
}



bool fn_00458160(undefined4 param_1,int param_2)

{
  if (*(char *)(param_2 + 100) == '\0') {
    fn_0014ea80(param_2);
  }
  return *(char *)(param_2 + 8) == '\x01';
}



void fn_004580f4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (DAT_008b6389 == '\0') {
    fn_004582d0(param_1);
    return;
  }
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  fn_004582d0(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0045814c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar3 + 0xc))(piVar3);
  return;
}



int fn_00457df4(int param_1,int param_2,undefined2 param_3)

{
  ushort uVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  bool bVar7;
  undefined4 uVar8;
  char *local_84 [3];
  undefined *local_78;
  undefined4 local_74;
  int local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  byte local_58;
  int local_54;
  char *local_50;
  char *local_48;
  undefined1 local_44;
  undefined1 local_40 [28];
  
  iVar6 = 0;
  iVar3 = fn_001249d0();
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(iVar3 + 0xc);
  }
  (**(code **)(*(int *)(iVar3 + 0x50) + 8))();
  if (*(char *)(param_2 + 100) == '\0') {
    fn_0014ea80(param_2);
  }
  if (*(char *)(param_2 + 0x66) == '\0') goto LAB_004580ac;
  local_40[0] = fn_006d0810(param_2,&DAT_007d9e30,0);
  if (*(char *)(param_2 + 100) == '\0') {
    fn_0014ea80(param_2);
  }
  iVar6 = fn_0047edec(param_1 + 0x54,*(undefined4 *)(param_2 + 4),local_40);
  if (iVar6 != 0) goto LAB_004580ac;
  iVar6 = fn_0015ece0(0x360);
  if (iVar6 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = fn_00465dd8(iVar6,param_1,param_2,param_1 + 0xa4,*(undefined1 *)(param_1 + 0xf4));
  }
  *(undefined2 *)(iVar6 + 0x8e) = param_3;
  local_58 = fn_006d0810(param_2,&DAT_007d9e30,0);
  if (*(char *)(iVar6 + 0x6c) == '\0') {
    fn_0014ea80(iVar6 + 8);
  }
  iVar4 = *(int *)(iVar6 + 0xc);
  uVar8 = *(undefined4 *)(iVar4 + 4);
  local_70 = *(int *)(iVar4 + 8);
  uStack_6c = *(undefined4 *)(iVar4 + 0xc);
  uStack_68 = *(undefined4 *)(iVar4 + 0x10);
  uStack_64 = *(undefined4 *)(iVar4 + 0x14);
  uStack_60 = *(undefined4 *)(iVar4 + 0x18);
  uStack_5c = *(undefined4 *)(iVar4 + 0x1c);
  local_78 = &DAT_008528bc;
  local_50 = *(char **)(param_1 + 100);
  bVar7 = true;
  local_74 = (local_74 & ~((unsigned int)0xffff << 16)) | (((unsigned int)((ushort)((uint)uVar8 >> 0x10)) & 0xffff) << 16);
  pcVar2 = local_50;
  pcVar5 = *(char **)(local_50 + 4);
  while (pcVar5 != (char *)0x0) {
    uVar1 = *(ushort *)(pcVar5 + 0x16);
    iVar4 = *(int *)(pcVar5 + 0x18);
    pcVar2 = pcVar5;
    if ((int)(local_70 - (iVar4 + (uint)(((unsigned int)(local_74) >> 16) & 0xffff < uVar1))) < 0 ==
        (SBORROW4(local_70,iVar4) != SBORROW4(local_70 - iVar4,(uint)(((unsigned int)(local_74) >> 16) & 0xffff < uVar1)))) {
      if (local_70 == iVar4 && ((unsigned int)(local_74) >> 16) & 0xffff == uVar1) {
        bVar7 = local_58 < (byte)pcVar5[0x30];
        if (bVar7) goto LAB_00457f94;
      }
      else {
        bVar7 = false;
      }
      pcVar5 = *(char **)(pcVar5 + 0xc);
    }
    else {
      bVar7 = true;
LAB_00457f94:
      pcVar5 = *(char **)(pcVar5 + 8);
    }
  }
  local_74 = uVar8;
  local_54 = iVar6;
  if (*(char *)(param_1 + 0x6c) == '\0') {
    local_48 = pcVar2;
    if (bVar7) {
      if (pcVar2 == *(char **)(local_50 + 8)) goto LAB_00458080;
      if ((*pcVar2 == '\0') && (*(char **)(*(int *)(pcVar2 + 4) + 4) == pcVar2)) {
        local_48 = *(char **)(pcVar2 + 0xc);
      }
      else {
        local_48 = *(char **)(pcVar2 + 8);
        if (local_48 == (char *)0x0) {
          local_48 = *(char **)(pcVar2 + 4);
          pcVar5 = local_48;
          if (pcVar2 == *(char **)(local_48 + 8)) {
            do {
              local_48 = *(char **)(pcVar5 + 4);
              bVar7 = pcVar5 == *(char **)(local_48 + 8);
              pcVar5 = local_48;
            } while (bVar7);
          }
        }
        else {
          for (pcVar2 = *(char **)(local_48 + 0xc); pcVar2 != (char *)0x0;
              pcVar2 = *(char **)(pcVar2 + 0xc)) {
            local_48 = pcVar2;
          }
        }
      }
    }
    uVar1 = *(ushort *)(local_48 + 0x16);
    iVar4 = *(int *)(local_48 + 0x18);
    if (((int)(iVar4 - (local_70 + (uint)(uVar1 < ((unsigned int)(local_74) >> 16) & 0xffff))) < 0 ==
         (SBORROW4(iVar4,local_70) != SBORROW4(iVar4 - local_70,(uint)(uVar1 < ((unsigned int)(local_74) >> 16) & 0xffff)))) &&
       ((iVar4 != local_70 || uVar1 != ((unsigned int)(local_74) >> 16) & 0xffff || (local_58 <= (byte)local_48[0x30])))) {
      local_44 = 0;
      goto LAB_004580ac;
    }
  }
LAB_00458080:
  fn_00767040(local_84);
  local_48 = local_84[0];
  local_44 = 1;
LAB_004580ac:
  (**(code **)(*(int *)(iVar3 + 0x50) + 0xc))();
  return iVar6;
}


