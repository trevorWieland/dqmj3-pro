#include "004b6900_004bad60.h"



/* WARNING: Removing unreachable block (ram,0x004baea8) */
/* WARNING: Removing unreachable block (ram,0x004baeb4) */
/* WARNING: Removing unreachable block (ram,0x004baed4) */
/* WARNING: Removing unreachable block (ram,0x004baed8) */
/* WARNING: Removing unreachable block (ram,0x004baedc) */
/* WARNING: Removing unreachable block (ram,0x004baef8) */
/* WARNING: Removing unreachable block (ram,0x004baefc) */
/* WARNING: Removing unreachable block (ram,0x004baf00) */
/* WARNING: Removing unreachable block (ram,0x004baf08) */
/* WARNING: Removing unreachable block (ram,0x004baf1c) */
/* WARNING: Removing unreachable block (ram,0x004baf24) */
/* WARNING: Removing unreachable block (ram,0x004baf2c) */
/* WARNING: Removing unreachable block (ram,0x004baf30) */
/* WARNING: Removing unreachable block (ram,0x004baf40) */

void fn_004bad60(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  
  uVar1 = param_3 * param_4 * 8;
  iVar3 = *(int *)(param_1 + 0xc);
  if (*(uint *)(param_1 + 0x14) < (7 - *(int *)(param_1 + 0x10)) + iVar3 * 8 + uVar1) {
    *(undefined1 *)(param_1 + 4) = 1;
  }
  else {
    iVar6 = 0;
    if (*(int *)(param_1 + 0x10) == 7) {
      iVar6 = *(int *)(param_1 + 8);
      uVar1 = param_3 * param_4 & 0x1fffffff;
      if (*(uint *)(iVar6 + 0x10) < iVar3 + uVar1) {
        fn_0015ebe4(L"D:/home/jenkins/workspace/Manual-Pack/5129d543/OnlineCore/src/Core/Buffer.cpp"
                     ,0xc6,0xe0000019,0);
      }
      else {
        fn_00301a9c(param_2,*(int *)(iVar6 + 0x18) + *(int *)(iVar6 + 0xc) + iVar3);
      }
      *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + uVar1;
    }
    else {
      iVar3 = 0;
      if (7 < uVar1) {
        do {
          if (*(uint *)(param_1 + 0x14) <
              (*(int *)(param_1 + 0xc) * 8 - *(int *)(param_1 + 0x10)) + 0xfU) {
            *(undefined1 *)(param_1 + 4) = 1;
          }
          else {
            uVar7 = *(int *)(param_1 + 0x10) + 1U & 0xff;
            pcVar4 = (char *)fn_004b55dc(*(undefined4 *)(param_1 + 8),*(int *)(param_1 + 0xc));
            cVar2 = *pcVar4;
            pbVar5 = (byte *)fn_004b55dc(*(undefined4 *)(param_1 + 8),*(int *)(param_1 + 0xc) + 1);
            *(byte *)(param_2 + iVar6) = cVar2 << (8 - uVar7 & 0xff) | *pbVar5 >> uVar7;
            *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
          }
          uVar7 = iVar3 + 0x10;
          iVar6 = iVar6 + 1;
          iVar3 = iVar3 + 8;
        } while (uVar7 <= uVar1);
      }
    }
  }
  return;
}



void fn_004b9b58(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                 uint param_7)

{
  uint uVar1;
  
  uVar1 = param_2 >> 6 & 0xff;
  param_1[1] = uVar1;
  *param_1 = (param_6 & 0x3f) << 6 |
             (param_5 & 0x1f) << 0xc |
             param_2 << 0x1a | (param_3 & 0xf) << 0x16 | (param_4 & 0x1f) << 0x11 | param_7 & 0x3f;
  if (param_2 < 0x76c) {
    uVar1 = uVar1 | 0x100;
    param_1[1] = uVar1;
  }
  if ((((9999 < param_2) || (param_3 == 0)) || (0xc < param_3)) ||
     ((param_4 == 0 || (0x1f < param_4)))) {
    param_1[1] = uVar1 & 0xfffffcff | 0x100;
    uVar1 = DAT_008b64f8[1];
    *param_1 = *DAT_008b64f8;
    param_1[1] = uVar1;
  }
  return;
}



void fn_004b6a88(int param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  code *pcVar5;
  char **ppcVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  char *local_68;
  undefined1 *local_64;
  undefined1 *local_60;
  undefined1 *local_5c;
  undefined4 uStack_58;
  undefined *local_54;
  undefined1 *puStack_50;
  undefined *local_4c;
  undefined *local_48 [2];
  undefined1 *local_40 [4];
  char local_30 [12];
  
  ppcVar6 = &local_68;
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68));
  if (iVar1 == 0) {
    local_68 = (char *)0x80010004;
    local_64 = &DAT_007dba44;
    local_60 = &DAT_00000071;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    puVar4 = puVar8;
LAB_004b6d64:
    iVar1 = (**(code **)(**(int **)(param_1 + 0x6c) + 0x18))();
    if (((iVar1 == 0) || (iVar1 = (**(code **)(**(int **)(param_1 + 0x6c) + 0x20))(), iVar1 != 0))
       || (puVar9 = puVar4 + 1, (undefined1 *)0x64 < puVar4)) goto LAB_004b6d94;
    puVar2 = (undefined *)(**(code **)(**(int **)(param_1 + 0x6c) + 0x38))();
    puVar10 = *(undefined **)(param_1 + 0x90);
    if (puVar2 < puVar10) {
      puVar10 = (undefined *)(**(code **)(**(int **)(param_1 + 0x6c) + 0x38))();
    }
    if (puVar10 == (undefined *)0x0) goto LAB_004b6d94;
    ppuVar3 = local_48;
    if (puVar10 < (undefined *)0x20) {
      ppuVar3 = &local_4c;
    }
    local_48[0] = puVar10;
    local_4c = (undefined *)0x20;
    puVar11 = *ppuVar3;
    local_64 = puVar8;
    local_60 = puVar8;
    local_5c = puVar8;
    local_64 = (undefined1 *)fn_0015ece0(puVar11);
    local_30[0] = '\0';
    puVar4 = local_64;
    for (puVar2 = local_48[0]; puVar2 != (undefined *)0x0; puVar2 = puVar2 + -1) {
      if (puVar4 != (undefined1 *)0x0) {
        *puVar4 = 0;
      }
      puVar4 = puVar4 + 1;
    }
    local_60 = local_64 + (int)local_48[0];
    local_5c = local_64 + (int)puVar11;
    local_68 = local_30;
    puVar2 = (undefined *)
             (**(code **)(**(int **)(param_1 + 0x8c) + 0xc))
                       (*(int **)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x6c),local_64,
                        (int)local_60 - (int)local_64);
    if (puVar10 < puVar2) {
      uStack_58 = 0x80010004;
      local_54 = &DAT_007dba44;
      puStack_50 = (undefined1 *)0x71;
      fn_004b6850(param_1,&uStack_58);
      if (local_64 == (undefined1 *)0x0) {
        return;
      }
      pcVar5 = *(code **)(local_64 + -8);
joined_r0x004b6be4:
      if (pcVar5 == (code *)0x0) {
        fn_0030233c();
        return;
      }
      (*pcVar5)();
      return;
    }
    iVar1 = fn_001249d0();
    iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68));
    if (iVar1 == 0) {
      uStack_58 = 0x80010004;
      local_54 = &DAT_007dba44;
      puStack_50 = (undefined1 *)0x71;
      fn_004b6850(param_1,&uStack_58);
      if (local_64 == (undefined1 *)0x0) {
        return;
      }
      pcVar5 = *(code **)(local_64 + -8);
      goto joined_r0x004b6be4;
    }
    fn_0079c308(&local_64,puVar2,0);
    if ((local_64 != local_60) &&
       ((**(code **)(**(int **)(param_1 + 0x6c) + 0x34))
                  (&local_4c,*(int **)(param_1 + 0x6c),local_64,(int)local_60 - (int)local_64),
       (int)local_4c < 0)) {
      fn_004b6850(param_1,&local_4c);
      if (local_64 == (undefined1 *)0x0) {
        return;
      }
      pcVar5 = *(code **)(local_64 + -8);
      goto joined_r0x004b6be4;
    }
    if (local_30[0] == '\0') {
      if (puVar2 == (undefined *)0x0) {
        if (local_64 != (undefined1 *)0x0) {
          pcVar5 = *(code **)(local_64 + -8);
          goto joined_r0x004b6d38;
        }
        goto LAB_004b6d94;
      }
      puVar4 = puVar9;
      if (local_64 != (undefined1 *)0x0) {
        if (*(code **)(local_64 + -8) == (code *)0x0) {
          fn_0030233c();
        }
        else {
          (**(code **)(local_64 + -8))();
        }
      }
      goto LAB_004b6d64;
    }
    (**(code **)(**(int **)(param_1 + 0x6c) + 0x1c))();
    if (local_64 != (undefined1 *)0x0) {
      pcVar5 = *(code **)(local_64 + -8);
joined_r0x004b6d38:
      if (pcVar5 == (code *)0x0) {
        fn_0030233c();
      }
      else {
        (*pcVar5)();
      }
    }
LAB_004b6d94:
    if (*(char *)(param_1 + 0x88) == '\0') {
      (**(code **)(**(int **)(param_1 + 0x6c) + 0x40))(&local_64);
      if ((int)local_64 < 0) {
        if (local_64 != &DAT_80010001) {
          puVar4 = (undefined1 *)0x80050002;
          if (local_64 != (undefined1 *)0x80050002) {
            ppcVar6 = &local_64;
            goto LAB_004b6df8;
          }
LAB_004b6de0:
          local_4c = &DAT_007dba44;
          local_48[0] = (undefined *)0x71;
          puStack_50 = puVar4;
          fn_004b6850(param_1);
          return;
        }
        goto LAB_004b6e94;
      }
      *(undefined1 *)(param_1 + 0x88) = 1;
      iVar1 = (**(code **)(**(int **)(param_1 + 0x6c) + 0x2c))(*(int **)(param_1 + 0x6c),&local_54);
      if ((-iVar1 & (uint)local_54) == 0) {
        puVar4 = (undefined1 *)0x8005000b;
        goto LAB_004b6de0;
      }
      (**(code **)(**(int **)(param_1 + 0x8c) + 0x10))
                (*(int **)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x6c));
      iVar1 = fn_001249d0();
      iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68));
      if (iVar1 == 0) {
        ppcVar6 = &puStack_50;
        puStack_50 = (undefined1 *)0x80010004;
        local_4c = &DAT_007dba44;
        local_48[0] = (undefined *)0x71;
        goto LAB_004b6df8;
      }
      (**(code **)(**(int **)(param_1 + 0x6c) + 0x50))();
    }
    fn_004b6ee4(local_40,param_1);
    if (local_40[0] == (undefined1 *)0x80050016) {
LAB_004b6e94:
      uVar7 = *(undefined4 *)(param_1 + 0x94);
      fn_004b301c(param_1,1);
      *(undefined4 *)(param_1 + 0x24) = uVar7;
      return;
    }
    ppcVar6 = local_40;
  }
LAB_004b6df8:
  fn_004b6850(param_1,ppcVar6);
  return;
}



void fn_004b6900(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  if (DAT_008b6464 != (int *)0x0) {
    (**(code **)(*DAT_008b6464 + 8))();
  }
  DAT_008b6460 = DAT_008b6460 + 1;
  iVar1 = fn_0015ece0(0x10d0);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_00480b24();
  }
  *(undefined4 *)(param_2 + 0x6c) = uVar2;
  iVar1 = *(int *)(param_2 + 0x74);
  if (iVar1 == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    iVar3 = fn_00100b58(iVar1);
    piVar4 = (int *)fn_0015ece0(iVar3 + 5);
    piVar5 = piVar4 + 1;
    *piVar4 = iVar3 + 1;
    fn_00173bf4(iVar1,piVar5,iVar3 + 1);
  }
  piVar4 = (int *)(**(code **)(**(int **)(param_2 + 0x6c) + 8))
                            (&local_30,*(int **)(param_2 + 0x6c),piVar5,
                             *(undefined1 *)(param_2 + 0x78));
  bVar6 = piVar5 == (int *)0x0;
  if (!bVar6) {
    piVar4 = piVar5 + -1;
    bVar6 = piVar4 == (int *)0x0;
  }
  if (!bVar6) {
    if ((code *)piVar4[-2] == (code *)0x0) {
      fn_0030233c();
    }
    else {
      (*(code *)piVar4[-2])();
    }
  }
  if (local_30 < 0) {
LAB_004b6a54:
    *param_1 = local_30;
    param_1[1] = local_2c;
    param_1[2] = local_28;
    return;
  }
  (**(code **)(**(int **)(param_2 + 0x8c) + 8))
            (*(int **)(param_2 + 0x8c),*(undefined4 *)(param_2 + 0x6c));
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_2 + 0x68));
  if (iVar1 == 0) {
    iVar1 = -0x7ffefffc;
  }
  else {
    (**(code **)(**(int **)(param_2 + 0x6c) + 0x24))(&local_24);
    local_2c = local_20;
    local_28 = local_1c;
    local_30 = local_24;
    if (local_24 < 0) goto LAB_004b6a54;
    iVar1 = 0x10001;
  }
  *param_1 = iVar1;
  param_1[1] = (int)&DAT_007dba44;
  param_1[2] = 0x71;
  return;
}


