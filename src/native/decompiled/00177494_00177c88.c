#include "00177494_00177c88.h"



int fn_00177c88(int *param_1,undefined4 *param_2,uint param_3,undefined4 *param_4,
                undefined4 *param_5,undefined4 *param_6,uint param_7)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 **ppuVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  undefined4 *local_48;
  undefined4 *puStack_44;
  int local_40;
  int local_3c;
  int *piStack_34;
  undefined4 *puStack_30;
  uint local_2c;
  undefined4 *puStack_28;
  
  puVar1 = *(undefined4 **)(*param_1 + -4);
  piStack_34 = param_1;
  puStack_30 = param_2;
  local_2c = param_3;
  puStack_28 = param_4;
  if (puVar1 < param_2 || param_5 < param_6) {
    if (param_5 < puVar1) {
      local_48 = puVar1;
    }
    else {
      local_48 = param_5;
    }
    if (puVar1 < param_2) {
      puVar1 = param_2;
    }
    else {
      puVar1 = param_6;
    }
    fn_002ff628(9,&DAT_008c7610,&DAT_008c7610,puVar1);
  }
  uVar7 = *(int *)(*param_1 + -4) - (int)param_2;
  if (local_2c < uVar7) {
    uVar7 = local_2c;
  }
  if ((uint)((int)param_5 - (int)param_6) <= param_7) {
    param_7 = (int)param_5 - (int)param_6;
  }
  if ((undefined4 *)(-param_7 - 0xf) < (undefined4 *)(*(int *)(*param_1 + -4) - uVar7)) {
    local_48 = (undefined4 *)(-param_7 - 0xf);
    fn_002ff628(8,&DAT_008c7610);
  }
  puVar1 = (undefined4 *)*param_1;
  iVar4 = puVar1[-1] - uVar7;
  puVar8 = (undefined4 *)(iVar4 + param_7);
  if (puVar8 == (undefined4 *)0x0) {
    if (puVar1 != &DAT_008f9cf4) {
      piVar3 = puVar1 + -3;
      iVar4 = *piVar3;
      if ((iVar4 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar4 + -1, iVar4 == 0)))) {
        fn_001008c4(*param_1 + -0xc,*(int *)(*param_1 + -8) + 8,0);
      }
    }
    *param_1 = (int)&DAT_008f9cf4;
    goto LAB_00177f34;
  }
  iVar4 = iVar4 - (int)param_2;
  uVar7 = puVar1[-3] + 1;
  local_3c = (int)param_2 * 2;
  puVar5 = puVar1 + -3;
  local_40 = local_3c + local_2c * 2;
  bVar11 = puVar1[-3] != -1;
  bVar10 = uVar7 == 1;
  if (uVar7 < 2) {
    puVar5 = (undefined4 *)puVar1[-2];
  }
  iVar9 = (int)param_4 + (int)param_6 * 2;
  if (uVar7 < 2) {
    bVar11 = puVar5 <= puVar8;
    bVar10 = puVar8 == puVar5;
  }
  if (bVar11 && !bVar10) {
LAB_00177d9c:
    uVar7 = puVar1[-1];
    local_48 = (undefined4 *)(uVar7 + (uVar7 >> 1) + (uVar7 >> 3));
    if (local_48 < (undefined4 *)(uVar7 + 0x80)) {
      local_48 = (undefined4 *)(uVar7 + 0x80);
    }
    ppuVar6 = &puStack_44;
    if (puVar8 <= local_48) {
      ppuVar6 = &local_48;
    }
    puStack_44 = puVar8;
    iVar2 = fn_00168984(param_1,*ppuVar6,puVar8);
    if (param_2 != (undefined4 *)0x0) {
      fn_00301a9c(iVar2 + 0xc,*param_1,local_3c);
    }
    if (param_7 != 0) {
      fn_00301a9c(iVar2 + (int)param_2 * 2 + 0xc,iVar9,param_7 << 1);
    }
    if (iVar4 != 0) {
      fn_00301a9c(iVar2 + (int)param_2 * 2 + param_7 * 2 + 0xc,*param_1 + local_40,iVar4 * 2);
    }
    if ((undefined4 *)*param_1 != &DAT_008f9cf4) {
      piVar3 = (undefined4 *)*param_1 + -3;
      iVar4 = *piVar3;
      if ((iVar4 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar4 + -1, iVar4 == 0)))) {
        fn_001008c4(*param_1 + -0xc,*(int *)(*param_1 + -8) + 8,0);
      }
    }
    *param_1 = iVar2 + 0xc;
  }
  else {
    if (param_4 != (undefined4 *)0x0) {
      bVar10 = param_4 <= puVar1;
      if (puVar1 <= param_4) {
        bVar10 = (undefined4 *)((int)puVar1 + puVar1[-1] * 2) <= param_4;
      }
      if (!bVar10) goto LAB_00177d9c;
    }
    if (iVar4 != 0) {
      fn_001006ac(local_3c + param_7 * 2 + (int)puVar1,local_40 + (int)puVar1,iVar4);
    }
    if (param_7 != 0) {
      fn_001006ac(*param_1 + (int)param_2 * 2,iVar9,param_7);
    }
    *(undefined4 **)(*param_1 + -4) = puVar8;
    *(undefined2 *)(*param_1 + (int)puVar8 * 2) = 0;
  }
LAB_00177f34:
  return *param_1 + (int)param_2 * 2;
}



void fn_00177798(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return;
  }
  do {
    fn_00177798(param_1,*(undefined4 *)(param_2 + 0xc));
    iVar1 = *(int *)(param_2 + 8);
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 4);
    fn_00170f54(param_2 + 0x10);
    *(int *)(param_1 + 4) = param_2;
    param_2 = iVar1;
  } while (iVar1 != 0);
  return;
}



void fn_00177740(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return;
  }
  do {
    fn_00177740(param_1,*(undefined4 *)(param_2 + 0xc));
    iVar1 = *(int *)(param_2 + 8);
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 4);
    fn_00170f54(param_2 + 0x18);
    fn_00170f54(param_2 + 0x10);
    *(int *)(param_1 + 4) = param_2;
    param_2 = iVar1;
  } while (iVar1 != 0);
  return;
}



int fn_001775e8(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint local_28 [2];
  uint local_20 [3];
  
  piVar1 = (int *)(param_1 + 0x10);
  (**(code **)(*piVar1 + 8))();
  iVar2 = fn_00169c08(local_28,0xffff8000);
  if (iVar2 < 0) {
    fn_0015e294();
  }
  iVar4 = *(int *)(param_1 + 0x48);
  iVar2 = iVar4;
  iVar3 = *(int *)(iVar4 + 4);
  while (iVar3 != 0) {
    if (*(uint *)(iVar3 + 0x10) < local_28[0]) {
      iVar3 = *(int *)(iVar3 + 0xc);
    }
    else {
      iVar2 = iVar3;
      iVar3 = *(int *)(iVar3 + 8);
    }
  }
  if ((iVar2 == iVar4) || (local_28[0] < *(uint *)(iVar2 + 0x10))) {
    iVar2 = iVar4;
  }
  if (iVar2 != iVar4) {
    (**(code **)(*piVar1 + 0xc))(piVar1);
    return iVar2 + 0x14;
  }
  iVar2 = fn_00169c08(local_28,0xffff8000);
  if (iVar2 < 0) {
    fn_0015e294();
  }
  local_20[0] = local_28[0];
  local_20[1] = 0;
  fn_001777e0(local_28,param_1 + 0x38,local_20);
  *(undefined4 *)(local_28[0] + 0x14) = *(undefined4 *)(param_1 + 0xc);
  iVar2 = fn_00169c08(local_28,0xffff8000);
  if (iVar2 < 0) {
    fn_0015e294();
  }
  local_20[0] = local_28[0];
  local_20[1] = 0;
  fn_001777e0(local_28,param_1 + 0x38,local_20);
  (**(code **)(*piVar1 + 0xc))(piVar1);
  return local_28[0] + 0x14;
}



void fn_001777e0(undefined4 *param_1,int param_2,uint *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  undefined4 local_1c [2];
  
  pcVar2 = *(char **)(param_2 + 0x10);
  bVar4 = true;
  pcVar3 = pcVar2;
  if (*(char **)(pcVar2 + 4) != (char *)0x0) {
    pcVar1 = *(char **)(pcVar2 + 4);
    do {
      pcVar3 = pcVar1;
      bVar4 = *param_3 < *(uint *)(pcVar3 + 0x10);
      if (bVar4) {
        pcVar1 = *(char **)(pcVar3 + 8);
      }
      else {
        pcVar1 = *(char **)(pcVar3 + 0xc);
      }
    } while (pcVar1 != (char *)0x0);
  }
  if (*(char *)(param_2 + 0x18) == '\0') {
    pcVar1 = pcVar3;
    if (bVar4) {
      if (pcVar3 == *(char **)(pcVar2 + 8)) goto LAB_001778d8;
      if ((*pcVar3 == '\0') && (*(char **)(*(int *)(pcVar3 + 4) + 4) == pcVar3)) {
        pcVar1 = *(char **)(pcVar3 + 0xc);
      }
      else {
        pcVar1 = *(char **)(pcVar3 + 8);
        if (pcVar1 == (char *)0x0) {
          pcVar1 = *(char **)(pcVar3 + 4);
          pcVar2 = pcVar1;
          if (pcVar3 == *(char **)(pcVar1 + 8)) {
            do {
              pcVar1 = *(char **)(pcVar2 + 4);
              bVar4 = pcVar2 == *(char **)(pcVar1 + 8);
              pcVar2 = pcVar1;
            } while (bVar4);
          }
        }
        else {
          for (pcVar3 = *(char **)(pcVar1 + 0xc); pcVar3 != (char *)0x0;
              pcVar3 = *(char **)(pcVar3 + 0xc)) {
            pcVar1 = pcVar3;
          }
        }
      }
    }
    if (*param_3 <= *(uint *)(pcVar1 + 0x10)) {
      *param_1 = pcVar1;
      *(undefined1 *)(param_1 + 1) = 0;
      return;
    }
  }
LAB_001778d8:
  fn_0017790c(local_1c);
  *param_1 = local_1c[0];
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



undefined4 fn_0017750c(int param_1)

{
  uint uVar1;
  short sVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  uVar4 = 0;
  uVar5 = 0;
  iVar6 = 0;
  do {
    sVar2 = *(short *)(param_1 + iVar6 * 2);
    if (sVar2 == 0x3a) goto LAB_00177558;
    uVar1 = uVar4 >> 0x18;
    uVar7 = (uint)(char)sVar2;
    iVar6 = iVar6 + 1;
    uVar4 = uVar7 | uVar4 << 8;
    uVar5 = uVar1 | uVar5 << 8 | (int)uVar7 >> 0x1f;
  } while (iVar6 < 8);
  uVar4 = 0;
  uVar5 = 0;
LAB_00177558:
  if (uVar4 != 0 || uVar5 != 0) {
    iVar6 = 0;
    do {
      if ((&DAT_008e3470)[iVar6 * 4] == uVar4 && (&DAT_008e3474)[iVar6 * 4] == uVar5) {
        puVar3 = &DAT_008e3470 + iVar6 * 4;
LAB_001775ac:
        if (puVar3 == (undefined4 *)0x0) {
          return 0;
        }
        return puVar3[2];
      }
      if ((&DAT_008e3484)[iVar6 * 4] == uVar5 && (&DAT_008e3480)[iVar6 * 4] == uVar4) {
        puVar3 = &DAT_008e3480 + iVar6 * 4;
        goto LAB_001775ac;
      }
      iVar6 = iVar6 + 2;
    } while (iVar6 < 0x20);
  }
  return 0;
}



undefined * fn_00177494(undefined4 param_1,char *param_2)

{
  int iVar1;
  
  if (((param_2 == (char *)0x0) || (*param_2 == '\0')) ||
     (iVar1 = fn_003035b0(&DAT_008864d4), iVar1 == 0)) {
    return &DAT_008864dc;
  }
  return (undefined *)0x0;
}


