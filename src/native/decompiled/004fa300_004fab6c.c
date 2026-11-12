#include "004fa300_004fab6c.h"



undefined1 * fn_004fab6c(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  puVar3 = &DAT_e0a14827;
  if ((DAT_008bf4e0 - 0x100000U < 0x3ff00000) &&
     (((0xb < *(byte *)(DAT_008bf4e0 + 99) ||
       (*(byte *)(DAT_008bf4e0 + 99) != *(byte *)(DAT_008bf4e0 + 0x62))) &&
      (piVar2 = *(int **)(param_1 + 0x10), piVar2 + -0x40000 < (int *)0x3ff00000)))) {
    local_20 = 0;
    uStack_1c = 0;
    fn_004f01f4(&local_20);
    local_30 = fn_004f0d34(local_20,uStack_1c);
    local_28 = fn_004f0d34(0,0);
    local_34 = *(undefined4 *)(param_1 + 0xc);
    iVar1 = (**(code **)(*piVar2 + 0x10))(piVar2,&local_34,0xfe,0x10,0);
    puVar3 = (undefined1 *)0x0;
    if (iVar1 != 0) {
      fn_001694d4(iVar1,&local_30);
      puVar3 = (undefined1 *)fn_0050a490(piVar2);
      if ((int)puVar3 < 0) {
        return puVar3;
      }
      puVar3 = (undefined1 *)0x0;
    }
  }
  return puVar3;
}



longlong fn_004fa7e4(int param_1,uint param_2)

{
  uint uVar1;
  
  if (*(byte *)(param_1 + 0x30) == 0xfd) {
    if (DAT_008c0630 != 0) {
      param_2 = 8;
    }
LAB_004fa920:
    return CONCAT44(param_2,&DAT_e0a14827);
  }
  uVar1 = (uint)*(byte *)(param_2 + 5);
  if (uVar1 < 0xc) {
    if (uVar1 != *(byte *)(param_1 + 0x30)) {
      if (DAT_008bf4e0 - 0x100000U < 0x3ff00000) {
        if ((0xb < *(byte *)(DAT_008bf4e0 + 99)) ||
           (*(byte *)(DAT_008bf4e0 + 99) != *(byte *)(DAT_008bf4e0 + 0x62))) {
          param_2 = (uint)*(byte *)(param_2 + 4);
          if (param_2 == 0) {
            param_2 = (uint)*(byte *)(DAT_008bf4e0 + 0x62);
            if (uVar1 == param_2) {
              param_2 = 1;
              *(undefined1 *)(param_1 + 0x40) = 1;
              *(undefined1 *)(param_1 + 0x41) = 0;
            }
          }
          else {
            if (param_2 != 1) {
              if (DAT_008c0630 != 0) {
                param_2 = 8;
              }
              goto LAB_004fa988;
            }
            param_2 = (uint)*(byte *)(DAT_008bf4e0 + 0x62);
            if (uVar1 == param_2) {
              *(undefined1 *)(param_1 + 0x40) = 0;
            }
          }
        }
        return (ulonglong)param_2 << 0x20;
      }
      if (DAT_008c0630 != 0) {
        param_2 = 8;
      }
      goto LAB_004fa920;
    }
    if (DAT_008c0630 != 0) {
      param_2 = 8;
    }
  }
  else if (DAT_008c0630 != 0) {
    param_2 = 8;
  }
LAB_004fa988:
  return CONCAT44(param_2,0xe0e14826);
}



void fn_004fa440(int param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int *piVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int iVar18;
  int *piVar19;
  uint uVar20;
  undefined8 uVar21;
  ulonglong uVar22;
  int local_90 [16];
  int local_50 [6];
  uint local_38;
  int local_34;
  int local_30;
  int iStack_2c;
  
  iVar12 = *(int *)(param_2 + 4);
  uVar16 = *(undefined4 *)(iVar12 + 0x20);
  uVar17 = *(undefined4 *)(iVar12 + 0x1c);
  uVar21 = fn_004f0d34(*(undefined4 *)(iVar12 + 0x14),*(undefined4 *)(iVar12 + 0x18));
  uVar22 = fn_004f0d34(uVar17,uVar16);
  puVar4 = (uint *)fn_004f0ce8();
  uVar5 = *puVar4;
  uVar13 = puVar4[1];
  lVar2 = (uVar22 & 0xffffffff) * (ulonglong)uVar5;
  uVar20 = (uint)lVar2;
  local_38 = 0;
  local_34 = 0;
  fn_004f01f4(&local_38);
  iVar12 = local_38 - (uint)uVar21;
  iVar18 = local_34 - ((int)((ulonglong)uVar21 >> 0x20) + (uint)(local_38 < (uint)uVar21));
  puVar6 = (undefined4 *)fn_004f0ce8();
  iVar12 = fn_0011c134(iVar12,iVar18,*puVar6,puVar6[1]);
  ((int *)(param_1 + 0x48))[(uint)(*(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x48)) % 10 + 2] =
       iVar12;
  if (*(int *)(param_1 + 0x48) == 10) {
    *(uint *)(param_1 + 0x4c) = (*(int *)(param_1 + 0x4c) + 1U) % 10;
  }
  else {
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  }
  uVar14 = *(uint *)(param_1 + 0x48);
  if (uVar14 == 0) {
    iVar12 = 0;
    goto LAB_004fa774;
  }
  if (uVar14 < 10) {
    uVar7 = 0;
    uVar10 = uVar14;
    if (uVar14 != 0) goto LAB_004fa550;
  }
  else {
    uVar7 = 0;
    uVar10 = 10;
LAB_004fa550:
    do {
      local_90[uVar7] =
           *(int *)(param_1 + (((uVar14 - uVar7) + -1 + *(int *)(param_1 + 0x4c)) % 10) * 4 + 0x50);
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar10);
  }
  piVar19 = local_90 + uVar10;
  if (local_90 != piVar19) {
    iVar12 = (int)piVar19 - (int)local_90 >> 2;
    fn_007b0d00(local_90,piVar19,iVar12);
    if (iVar12 < 0x11) {
      piVar15 = local_90;
      while (piVar15 = piVar15 + 1, piVar15 != piVar19) {
        iVar12 = *piVar15;
        piVar9 = piVar15;
        if (iVar12 < local_90[0]) {
          if (0 < (int)piVar15 - (int)local_90 >> 2) {
            piVar8 = piVar15 + 1;
            if ((int)piVar15 * 0x20000000 < 0) {
              piVar9 = piVar15 + -1;
              *piVar15 = piVar15[-1];
              piVar8 = piVar15;
            }
            for (iVar18 = (int)piVar15 - (int)local_90 >> 3; iVar18 != 0; iVar18 = iVar18 + -1) {
              piVar8[-1] = piVar9[-1];
              piVar9 = piVar9 + -2;
              piVar8 = piVar8 + -2;
              *piVar8 = *piVar9;
            }
          }
          local_90[0] = iVar12;
        }
        else {
          while( true ) {
            iVar18 = piVar9[-1];
            if (iVar18 <= iVar12) break;
            *piVar9 = iVar18;
            piVar9 = piVar9 + -1;
          }
          *piVar9 = iVar12;
        }
      }
    }
    else {
      piVar9 = local_50;
      piVar15 = local_90;
      while (piVar15 = piVar15 + 1, piVar15 != piVar9) {
        iVar12 = *piVar15;
        piVar8 = piVar15;
        if (iVar12 < local_90[0]) {
          if (0 < (int)piVar15 - (int)local_90 >> 2) {
            piVar11 = piVar15 + 1;
            if ((int)piVar15 * 0x20000000 < 0) {
              piVar8 = piVar15 + -1;
              *piVar15 = piVar15[-1];
              piVar11 = piVar15;
            }
            for (iVar18 = (int)piVar15 - (int)local_90 >> 3; iVar18 != 0; iVar18 = iVar18 + -1) {
              piVar1 = piVar8 + -1;
              piVar8 = piVar8 + -2;
              piVar11[-1] = *piVar1;
              piVar11 = piVar11 + -2;
              *piVar11 = *piVar8;
            }
          }
          local_90[0] = iVar12;
        }
        else {
          while( true ) {
            iVar18 = piVar8[-1];
            if (iVar18 <= iVar12) break;
            *piVar8 = iVar18;
            piVar8 = piVar8 + -1;
          }
          *piVar8 = iVar12;
        }
      }
      for (; piVar9 != piVar19; piVar9 = piVar9 + 1) {
        iVar12 = *piVar9;
        piVar15 = piVar9;
        while( true ) {
          iVar18 = piVar15[-1];
          if (iVar18 <= iVar12) break;
          *piVar15 = iVar18;
          piVar15 = piVar15 + -1;
        }
        *piVar15 = iVar12;
      }
    }
  }
  uVar14 = uVar10 >> 1;
  if ((uVar10 & 1) == 0) {
    iVar12 = (local_90[uVar14] + local_90[uVar14 - 1]) / 2;
  }
  else {
    iVar12 = local_90[uVar14];
  }
LAB_004fa774:
  uVar14 = iVar12 / 2;
  puVar4 = (uint *)fn_004f0ce8();
  lVar3 = (ulonglong)uVar14 * (ulonglong)*puVar4;
  uVar7 = (uint)lVar3;
  uVar10 = local_38 - uVar20;
  local_30 = uVar10 - uVar7;
  iStack_2c = (local_34 -
              (uVar5 * (int)(uVar22 >> 0x20) +
               uVar13 * (int)uVar22 + (int)((ulonglong)lVar2 >> 0x20) + (uint)(local_38 < uVar20)))
              - (*puVar4 * ((int)uVar14 >> 0x1f) +
                 puVar4[1] * uVar14 + (int)((ulonglong)lVar3 >> 0x20) + (uint)(uVar10 < uVar7));
  fn_00508014(param_1 + 0x18,&local_30);
  return;
}



void fn_004fa420(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00856e50;
  fn_004ede4c(param_1);
  return;
}



void fn_004fa3c0(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_004eddf4();
  *puVar1 = &PTR_FUN_00856e50;
  iVar2 = fn_004ed164(puVar1 + 0x17);
  *(undefined4 *)(iVar2 + 0x1c) = 0xe7e3ffff;
  *(undefined1 *)(iVar2 + -4) = 0;
  *(undefined4 *)(iVar2 + 0x14) = 0;
  *(undefined1 *)(iVar2 + 0x18) = 0;
  return;
}



undefined4 fn_004fa374(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  uVar1 = 0;
  do {
    iVar3 = iVar2 + 1;
    uVar1 = uVar1 + 2;
    *(undefined1 *)(param_1 + iVar2 * 2 + 0x40) = 0xfd;
    iVar2 = iVar2 + 2;
    *(undefined1 *)(param_1 + iVar3 * 2 + 0x40) = 0xfd;
  } while (uVar1 < 0xc);
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined1 *)(param_1 + 0x74) = 0;
  return 1;
}



void fn_004fa300(int param_1)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  uVar1 = 0;
  do {
    iVar4 = iVar3 + 1;
    uVar1 = uVar1 + 2;
    *(undefined1 *)(param_1 + iVar3 * 2 + 0x40) = 0xfd;
    iVar3 = iVar3 + 2;
    *(undefined1 *)(param_1 + iVar4 * 2 + 0x40) = 0xfd;
  } while (uVar1 < 0xc);
  if (*(char *)(param_1 + 0x5c) != '\x01') {
    fn_004ed068(param_1 + 0x5c);
  }
  pcVar2 = *(char **)(param_1 + 0x70);
  if (pcVar2 != (char *)0x0) {
    if (*pcVar2 == '\x01') {
      fn_004ed0e4(pcVar2,0);
    }
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  *(undefined1 *)(param_1 + 0x74) = 0;
  return;
}


