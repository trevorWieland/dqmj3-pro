#include "0045a5c8_0045abc4.h"



void fn_0045abc4(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined *local_80 [22];
  undefined1 auStack_28 [16];
  char local_18;
  
  puVar1 = *(undefined1 **)(param_1 + 0x18);
  puVar5 = puVar1;
  if (puVar1 == *(undefined1 **)(param_1 + 0x1c)) {
    puVar5 = (undefined1 *)0x0;
  }
  iVar4 = (int)*(undefined1 **)(param_1 + 0x1c) - (int)puVar1;
  if (0x40 < iVar4) {
    local_80[0] = &DAT_0085748c;
    local_18 = '\0';
    fn_00160094(local_80);
    if (local_18 == '\0') {
      fn_001600c4(local_80,puVar5,iVar4);
    }
    if (local_18 == '\0') {
      fn_00160190(local_80,auStack_28);
      local_18 = '\x01';
    }
    iVar4 = 0x10;
    puVar5 = auStack_28;
  }
  fn_00301f50(param_1 + 0x2c,0x41);
  fn_00158f6c(param_1 + 0x6d,0x41);
  fn_00301a9c(param_1 + 0x2c,puVar5,iVar4);
  fn_00301a9c(param_1 + 0x6d,puVar5,iVar4);
  iVar4 = 0;
  iVar3 = 0x40;
  do {
    iVar2 = param_1 + iVar4;
    iVar3 = iVar3 + -1;
    iVar4 = iVar4 + 1;
    *(byte *)(iVar2 + 0x2c) = *(byte *)(iVar2 + 0x2c) ^ 0x36;
    *(byte *)(iVar2 + 0x6d) = *(byte *)(iVar2 + 0x6d) ^ 0x5c;
  } while (iVar3 != 0);
  return;
}



undefined4 * fn_0045aaf4(undefined4 *param_1)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  
  *param_1 = &DAT_00852a74;
  if (param_1[0xc] != 4) {
    pcVar2 = *(code **)(param_1[0xc] + -0xc);
    if (pcVar2 == (code *)0x0) {
      fn_0030233c();
    }
    else {
      (*pcVar2)();
    }
  }
  iVar4 = *(int *)param_1[0xb];
  uVar1 = 0;
  uVar3 = *(uint *)(iVar4 + -4);
  if (uVar3 != 0) {
    do {
      uVar1 = uVar1 + 1;
    } while (uVar1 < uVar3);
  }
  if ((uint *)(iVar4 + -4) != (uint *)0x0) {
    if (*(code **)(iVar4 + -0xc) == (code *)0x0) {
      fn_0030233c(iVar4 + -0xc);
    }
    else {
      (**(code **)(iVar4 + -0xc))();
    }
  }
  if (param_1[0xb] != 0) {
    pcVar2 = *(code **)(param_1[0xb] + -8);
    if (pcVar2 == (code *)0x0) {
      fn_0030233c();
    }
    else {
      (*pcVar2)();
    }
  }
  param_1[1] = &PTR_LAB_008533fc;
  param_1[2] = &DAT_0085319c;
  return param_1;
}



int fn_0045aa18(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  
  *param_1 = &DAT_00852a74;
  iVar1 = fn_004745d8(param_1 + 1,0x20000000);
  puVar2 = (undefined4 *)fn_0015ece0(4);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
  }
  *(undefined4 **)(iVar1 + 0x28) = puVar2;
  *(short *)(iVar1 + 0x34) = (short)param_2;
  piVar3 = (int *)fn_0015ece0(param_2 + 4);
  *piVar3 = param_2;
  **(undefined4 **)(iVar1 + 0x28) = piVar3 + 1;
  uVar4 = 0;
  if ((*(ushort *)(iVar1 + 0x34) != 0) && (uVar4 = *(ushort *)(iVar1 + 0x34) & 1, uVar4 == 1)) {
    *(undefined1 *)(piVar3 + 1) = 0;
  }
  uVar6 = (uint)*(ushort *)(iVar1 + 0x34);
  if (uVar4 < uVar6) {
    do {
      iVar7 = uVar4 + 1;
      *(undefined1 *)(**(int **)(iVar1 + 0x28) + uVar4) = 0;
      uVar4 = uVar4 + 2;
      *(undefined1 *)(**(int **)(iVar1 + 0x28) + iVar7) = 0;
      uVar6 = (uint)*(ushort *)(iVar1 + 0x34);
    } while ((int)uVar4 < (int)uVar6);
  }
  puVar5 = (uint *)fn_0015ece0(uVar6 * 4 + 4);
  *puVar5 = uVar6;
  *(uint **)(iVar1 + 0x2c) = puVar5 + 1;
  fn_00301f50(puVar5 + 1,(uint)*(ushort *)(iVar1 + 0x34) << 2);
  *(undefined4 *)(iVar1 + 0x30) = 0;
  return iVar1 + -4;
}



undefined4 fn_0045a900(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  
  piVar1 = (int *)(param_1 + 4);
  (**(code **)(*piVar1 + 8))();
  uVar5 = (uint)*(ushort *)(param_1 + 0x38);
  uVar6 = 0;
  if (uVar5 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = uVar5 & 1;
    if ((*(ushort *)(param_1 + 0x38) & 1) != 0) {
      do {
        if (*(int *)(*(int *)(param_1 + 0x30) + uVar6 * 4) == 0) goto LAB_0045a99c;
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < (int)uVar2);
    }
  }
  uVar6 = uVar2;
  if (uVar2 < uVar5) {
    do {
      if (*(int *)(*(int *)(param_1 + 0x30) + uVar6 * 4) == 0) break;
      if (*(int *)(*(int *)(param_1 + 0x30) + uVar6 * 4 + 4) == 0) {
        uVar6 = uVar6 + 1;
        break;
      }
      uVar6 = uVar6 + 2;
    } while ((int)uVar6 < (int)uVar5);
  }
LAB_0045a99c:
  puVar3 = (undefined4 *)fn_0015ece0(0x14);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = &DAT_008559f8;
    puVar3[1] = param_1;
    puVar3[2] = param_2;
    puVar3[3] = param_3;
  }
  *(undefined4 **)(*(int *)(param_1 + 0x30) + uVar6 * 4) = puVar3;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  iVar4 = fn_006d0df8(param_1,*(undefined4 *)(*(int *)(param_1 + 0x30) + uVar6 * 4));
  *(undefined1 *)(**(int **)(param_1 + 0x2c) + iVar4) = 0;
  uVar7 = *(undefined4 *)(*(int *)(param_1 + 0x30) + uVar6 * 4);
  (**(code **)(*piVar1 + 0xc))(piVar1);
  return uVar7;
}



void fn_0045a808(int param_1)

{
  undefined4 local_10;
  undefined4 uStack_c;
  
  fn_0013d0fc(&local_10);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 8) = local_10;
  *(undefined4 *)(param_1 + 0xc) = uStack_c;
  return;
}



int fn_0045a660(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int local_20;
  undefined1 auStack_1c [4];
  
  piVar6 = (int *)(param_1 + 4);
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 != 0) {
    iVar7 = *(int *)(iVar1 + 8);
    if (*(int *)(param_1 + 0x18) == 0) {
      while (iVar7 != iVar1) {
        iVar2 = *(int *)(iVar7 + 0xc);
        if (*(int *)(iVar7 + 0xc) == 0) {
          iVar2 = *(int *)(iVar7 + 4);
          iVar5 = iVar7;
          if (iVar7 == *(int *)(iVar2 + 0xc)) {
            do {
              iVar5 = iVar2;
              iVar2 = *(int *)(iVar5 + 4);
            } while (iVar5 == *(int *)(iVar2 + 0xc));
          }
          if (*(int *)(iVar5 + 0xc) != iVar2) {
            iVar5 = iVar2;
          }
        }
        else {
          do {
            iVar5 = iVar2;
            iVar2 = *(int *)(iVar5 + 8);
          } while (*(int *)(iVar5 + 8) != 0);
        }
        local_20 = iVar7;
        fn_0076b788(auStack_1c,piVar6,&local_20);
        iVar7 = iVar5;
      }
    }
    else {
      iVar1 = *(int *)(iVar1 + 4);
      while (iVar1 != 0) {
        fn_0076bdf4(piVar6,*(undefined4 *)(iVar1 + 0xc));
        iVar7 = *(int *)(iVar1 + 8);
        *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_1 + 8);
        fn_00170f54(iVar1 + 0x10);
        *(int *)(param_1 + 8) = iVar1;
        iVar1 = iVar7;
      }
      *(int *)(*(int *)(param_1 + 0x14) + 8) = *(int *)(param_1 + 0x14);
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
      *(int *)(*(int *)(param_1 + 0x14) + 0xc) = *(int *)(param_1 + 0x14);
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    iVar1 = *(int *)(param_1 + 0x14);
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_1 + 8);
    *(int *)(param_1 + 8) = iVar1;
    piVar3 = (int *)*piVar6;
    while (piVar3 != (int *)0x0) {
      *piVar6 = *piVar3;
      if (piVar3[2] != 0) {
        pcVar4 = *(code **)(piVar3[2] + -8);
        if (pcVar4 == (code *)0x0) {
          fn_0030233c();
        }
        else {
          (*pcVar4)();
        }
      }
      if (piVar3 != (int *)0x0) {
        if ((code *)piVar3[-2] == (code *)0x0) {
          fn_0030233c(piVar3 + -2);
        }
        else {
          (*(code *)piVar3[-2])();
        }
      }
      piVar3 = (int *)*piVar6;
    }
  }
  return param_1;
}



int fn_0045a5c8(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(char *)(param_1 + 0x1d) = (char)param_1;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  piVar1 = (int *)fn_0015ece0(0xc);
  iVar2 = fn_0015ece0(0x380);
  piVar1[2] = iVar2;
  *piVar1 = *(int *)(param_1 + 4);
  piVar1[1] = 0x20;
  *(int *)(param_1 + 4) = (int)piVar1;
  puVar3 = (undefined1 *)piVar1[2];
  *(undefined1 **)(param_1 + 0xc) = puVar3;
  *(undefined1 **)(param_1 + 0x10) = puVar3 + 0x380;
  *(undefined1 **)(param_1 + 0xc) = puVar3 + 0x1c;
  *(undefined4 *)(puVar3 + 8) = 0;
  *(undefined4 *)(puVar3 + 0xc) = 0;
  *puVar3 = 0;
  *(undefined1 **)(param_1 + 0x14) = puVar3;
  *(undefined4 *)(puVar3 + 4) = 0;
  *(int *)(*(int *)(param_1 + 0x14) + 8) = *(int *)(param_1 + 0x14);
  *(int *)(*(int *)(param_1 + 0x14) + 0xc) = *(int *)(param_1 + 0x14);
  return param_1;
}


