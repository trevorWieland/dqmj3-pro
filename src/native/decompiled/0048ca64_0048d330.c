#include "0048ca64_0048d330.h"



undefined4 * fn_0048d330(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_18;
  int local_14;
  undefined1 auStack_10 [4];
  
  piVar1 = param_1 + 2;
  *param_1 = &DAT_00853b98;
  local_14 = param_1[6];
  if (local_14 != 0) {
    local_18 = *(undefined4 *)(local_14 + 8);
    fn_0076a024(auStack_10,piVar1,&local_18,&local_14);
    iVar2 = param_1[6];
    *(undefined4 *)(iVar2 + 0xc) = param_1[3];
    param_1[3] = iVar2;
    piVar3 = (int *)*piVar1;
    while (piVar3 != (int *)0x0) {
      *piVar1 = *piVar3;
      fn_0014f1bc(piVar3[2]);
      fn_0014f1bc(piVar3);
      piVar3 = (int *)*piVar1;
    }
  }
  return param_1;
}



void fn_0048d004(int param_1,int param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  bool bVar10;
  undefined4 local_ac;
  int iStack_a8;
  char *local_a4 [3];
  uint local_98 [2];
  int local_90;
  int local_8c;
  char *local_88;
  bool local_84;
  uint local_7c;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [16];
  char *local_30;
  char *local_2c [2];
  
  *(undefined1 *)(param_2 + 4) = 0;
  local_7c = (uint)*(char *)(param_1 + 0x3b);
  local_90 = 0;
  if (((local_7c != 0) ||
      ((fn_0074a4c8(param_1,param_2 + 4), *(char *)(param_1 + 4) == '\0' &&
       (fn_0074a528(param_1,&local_90), *(char *)(param_1 + 4) == '\0')))) &&
     (local_8c = *(int *)(param_1 + 0xc), *(char *)(param_1 + 4) == '\0')) {
    iStack_a8 = *(int *)(param_2 + 0x18);
    iVar6 = param_2 + 8;
    local_ac = *(undefined4 *)(iStack_a8 + 8);
    fn_0076a024(local_a4,iVar6,&local_ac,&iStack_a8);
    local_98[0] = 0;
    fn_0074a528(param_1,local_98);
    uVar7 = 0;
    if (local_98[0] != 0) {
      do {
        fn_0013d40c(auStack_48);
        fn_004b87b0(auStack_78);
        fn_0045f7f0(param_1,auStack_48);
        fn_0046d8e8(param_1,auStack_78);
        uVar2 = fn_004b87b0(auStack_40);
        iVar3 = fn_004b637c(auStack_60,auStack_48);
        iVar4 = fn_004b8770(iVar3 + 8,uVar2);
        iVar4 = iVar4 + -8;
        iVar3 = 1;
        pcVar1 = *(char **)(param_2 + 0x18);
        pcVar8 = *(char **)(*(char **)(param_2 + 0x18) + 4);
        while (pcVar8 != (char *)0x0) {
          iVar3 = fn_00190ef0(iVar4,pcVar8 + 0x10);
          pcVar1 = pcVar8;
          if (iVar3 == 0) {
            pcVar8 = *(char **)(pcVar8 + 0xc);
          }
          else {
            pcVar8 = *(char **)(pcVar8 + 8);
          }
        }
        if (*(char *)(param_2 + 0x20) == '\0') {
          pcVar8 = pcVar1;
          if (iVar3 != 0) {
            if (pcVar1 == *(char **)(*(int *)(param_2 + 0x18) + 8)) {
              fn_0076a914(&local_30,iVar6,0,pcVar1,iVar4);
              local_88 = local_30;
              local_84 = true;
              goto LAB_0048d288;
            }
            if ((*pcVar1 == '\0') && (*(char **)(*(int *)(pcVar1 + 4) + 4) == pcVar1)) {
              pcVar8 = *(char **)(pcVar1 + 0xc);
            }
            else {
              pcVar8 = *(char **)(pcVar1 + 8);
              if (pcVar8 == (char *)0x0) {
                pcVar8 = *(char **)(pcVar1 + 4);
                pcVar9 = pcVar8;
                if (pcVar1 == *(char **)(pcVar8 + 8)) {
                  do {
                    pcVar8 = *(char **)(pcVar9 + 4);
                    bVar10 = pcVar9 == *(char **)(pcVar8 + 8);
                    pcVar9 = pcVar8;
                  } while (bVar10);
                }
              }
              else {
                for (pcVar9 = *(char **)(pcVar8 + 0xc); pcVar9 != (char *)0x0;
                    pcVar9 = *(char **)(pcVar9 + 0xc)) {
                  pcVar8 = pcVar9;
                }
              }
            }
          }
          iVar3 = fn_00190ef0(pcVar8 + 0x10,iVar4);
          if (iVar3 == 0) {
            local_88 = pcVar8;
          }
          else {
            fn_0076a914(local_2c,iVar6,0,pcVar1,iVar4);
            local_88 = local_2c[0];
          }
          local_84 = iVar3 != 0;
        }
        else {
          fn_0076a914(local_a4,iVar6,0,pcVar1,iVar4);
          local_88 = local_a4[0];
          local_84 = true;
        }
LAB_0048d288:
        pcVar1 = local_88;
        iVar3 = fn_004b87dc(auStack_58);
        fn_00170f54(iVar3 + -8);
        fn_004b87dc(auStack_40);
        fn_004b8820(pcVar1 + 0x18,auStack_78);
        fn_004b87dc(auStack_78);
        fn_00170f54(auStack_48);
        uVar7 = uVar7 + 1;
      } while (uVar7 < local_98[0]);
    }
    uVar5 = (uint)*(byte *)(param_1 + 4);
    uVar7 = uVar5;
    if (uVar5 == 0) {
      uVar7 = local_7c;
    }
    if (uVar5 == 0 && uVar7 == 0) {
      uVar7 = local_8c + local_90;
      if ((uVar7 < *(uint *)(param_1 + 0xc)) || (*(uint *)(*(int *)(param_1 + 8) + 0x10) < uVar7)) {
        *(undefined1 *)(param_1 + 4) = 1;
      }
      else {
        *(uint *)(param_1 + 0xc) = uVar7;
      }
    }
  }
  return;
}



void fn_0048ceb8(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_28;
  undefined1 local_24 [4];
  undefined4 local_20 [2];
  
  cVar1 = *(char *)(param_1 + 0x3b);
  iVar6 = 0;
  if (cVar1 == '\0') {
    local_24[0] = 0;
    piVar3 = &local_28;
    if (*(char *)(param_2 + 4) != '\0') {
      piVar3 = (int *)local_24;
    }
    local_28 = CONCAT31(((unsigned int)(local_28) >> 8) & 0xffffff,*(char *)(param_2 + 4));
    fn_0015ef4c(param_1,piVar3,1);
    iVar6 = *(int *)(*(int *)(param_1 + 8) + 0x10);
    local_20[0] = 0;
    fn_0015ef4c(param_1,local_20,4);
  }
  local_28 = *(int *)(param_2 + 0x1c);
  fn_0015ef4c(param_1,&local_28,4);
  iVar5 = *(int *)(param_2 + 0x18);
  iVar4 = *(int *)(iVar5 + 8);
  while (iVar4 != iVar5) {
    fn_0045f6f0(param_1,iVar4 + 0x10);
    fn_0046d794(param_1,iVar4 + 0x18);
    iVar2 = *(int *)(iVar4 + 0xc);
    if (*(int *)(iVar4 + 0xc) == 0) {
      iVar2 = *(int *)(iVar4 + 4);
      if (iVar4 == *(int *)(iVar2 + 0xc)) {
        do {
          iVar4 = iVar2;
          iVar2 = *(int *)(iVar4 + 4);
        } while (iVar4 == *(int *)(iVar2 + 0xc));
      }
      if (*(int *)(iVar4 + 0xc) != iVar2) {
        iVar4 = iVar2;
      }
    }
    else {
      do {
        iVar4 = iVar2;
        iVar2 = *(int *)(iVar4 + 8);
      } while (*(int *)(iVar4 + 8) != 0);
    }
  }
  if (cVar1 == '\0') {
    iVar4 = *(int *)(*(int *)(param_1 + 8) + 0x10);
    fn_00454cbc(param_1,iVar6);
    local_28 = (iVar4 - iVar6) + -4;
    fn_0015ef4c(param_1,&local_28,4);
    fn_00454cbc(param_1,iVar4);
  }
  return;
}



undefined4 fn_0048cd74(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  iVar4 = *(int *)(param_1 + 0x14);
  iVar2 = iVar4;
  if (*(int *)(iVar4 + 4) != 0) {
    iVar6 = *(int *)(param_2 + 8);
    iVar3 = *(int *)(iVar4 + 4);
    do {
      iVar5 = *(int *)(iVar3 + 0x18);
      bVar7 = *(ushort *)(iVar3 + 0x16) < *(ushort *)(param_2 + 6);
      if ((int)(iVar5 - (iVar6 + (uint)bVar7)) < 0 ==
          (SBORROW4(iVar5,iVar6) != SBORROW4(iVar5 - iVar6,(uint)bVar7))) {
        iVar5 = *(int *)(iVar3 + 8);
        iVar2 = iVar3;
      }
      else {
        iVar5 = *(int *)(iVar3 + 0xc);
      }
      iVar3 = iVar5;
    } while (iVar5 != 0);
  }
  if (iVar2 != iVar4) {
    iVar6 = *(int *)(param_2 + 8);
    iVar3 = *(int *)(iVar2 + 0x18);
    bVar7 = *(ushort *)(param_2 + 6) < *(ushort *)(iVar2 + 0x16);
    if ((int)(iVar6 - (iVar3 + (uint)bVar7)) < 0 ==
        (SBORROW4(iVar6,iVar3) != SBORROW4(iVar6 - iVar3,(uint)bVar7))) {
      iVar4 = iVar2;
    }
  }
  if (iVar4 == *(int *)(param_1 + 0x14)) {
    uVar1 = *(ushort *)(param_2 + 6);
    iVar3 = *(int *)(param_1 + 0x14);
    iVar2 = iVar3;
    iVar4 = *(int *)(iVar3 + 4);
    while (iVar4 != 0) {
      if (*(int *)(iVar4 + 0x18) < (int)(uint)(*(ushort *)(iVar4 + 0x16) < uVar1)) {
        iVar4 = *(int *)(iVar4 + 0xc);
      }
      else {
        iVar2 = iVar4;
        iVar4 = *(int *)(iVar4 + 8);
      }
    }
    if ((iVar2 == iVar3) ||
       (iVar4 = *(int *)(iVar2 + 0x18), bVar7 = uVar1 < *(ushort *)(iVar2 + 0x16),
       (int)-(iVar4 + (uint)bVar7) < 0 != (SBORROW4(0,iVar4) != SBORROW4(-iVar4,(uint)bVar7)))) {
      iVar2 = iVar3;
    }
    if (iVar2 == iVar3) {
      return 0;
    }
  }
  return 1;
}



void fn_0048ca64(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  
  puVar2 = *(undefined4 **)(param_1 + 100);
  if (puVar2 != *(undefined4 **)(param_1 + 0x68)) {
    *(undefined4 **)(param_1 + 100) = puVar2 + 1;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = param_2;
    }
    return;
  }
  uVar1 = (int)puVar2 - *(int *)(param_1 + 0x60) >> 2;
  if (uVar1 < (uint)((int)*(undefined4 **)(param_1 + 0x68) - *(int *)(param_1 + 0x60) >> 2)) {
    *(undefined4 **)(param_1 + 100) = puVar2 + 1;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = puVar2[-1];
    }
    puVar5 = puVar2 + -1;
    iVar7 = (int)puVar5 - (int)puVar2;
    if (0 < iVar7 >> 2) {
      puVar6 = puVar2;
      if (iVar7 * 0x20000000 < 0) {
        puVar5 = puVar2 + -2;
        puVar6 = puVar2 + -1;
        *puVar6 = *puVar5;
      }
      for (iVar7 = iVar7 >> 3; iVar7 != 0; iVar7 = iVar7 + -1) {
        puVar6[-1] = puVar5[-1];
        puVar5 = puVar5 + -2;
        puVar6 = puVar6 + -2;
        *puVar6 = *puVar5;
      }
    }
    *puVar2 = param_2;
    return;
  }
  uVar8 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
  if (uVar8 < uVar1 + 0x20) {
    uVar8 = uVar1 + 0x20;
  }
  puVar3 = (undefined4 *)fn_0015ece0(uVar8 << 2);
  puVar6 = puVar3;
  for (puVar5 = *(undefined4 **)(param_1 + 0x60); puVar5 != puVar2; puVar5 = puVar5 + 1) {
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = *puVar5;
    }
    puVar6 = puVar6 + 1;
  }
  puVar5 = (undefined4 *)(((int)puVar2 - *(int *)(param_1 + 0x60) & 0xfffffffcU) + (int)puVar3);
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = param_2;
  }
  puVar6 = *(undefined4 **)(param_1 + 100);
  puVar5 = (undefined4 *)(((int)puVar2 - *(int *)(param_1 + 0x60) & 0xfffffffcU) + (int)puVar3);
  for (; puVar2 != puVar6; puVar2 = puVar2 + 1) {
    puVar5 = puVar5 + 1;
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = *puVar2;
    }
  }
  iVar4 = *(int *)(param_1 + 100) - *(int *)(param_1 + 0x60);
  iVar7 = iVar4 >> 2;
  if (0 < iVar7) {
    for (iVar4 = iVar4 >> 3; iVar4 != 0; iVar4 = iVar4 + -1) {
    }
  }
  fn_0014f1bc(*(int *)(param_1 + 0x60));
  *(undefined4 **)(param_1 + 0x60) = puVar3;
  *(undefined4 **)(param_1 + 100) = puVar3 + iVar7 + 1;
  *(undefined4 **)(param_1 + 0x68) = puVar3 + uVar8;
  return;
}


