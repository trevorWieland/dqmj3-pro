#include "0039d3e4_0039e124.h"



void fn_0039e124(void)

{
  fn_0022f750((char *)&DAT_0039e12c);
  return;
}



void fn_0039e090(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *local_10;
  
  local_10 = param_4;
  fn_0023097c(&local_10,(int)*(short *)(param_1[0x39] + 0x10),0);
  (**(code **)(*param_1 + 0x13c))(param_1,0,0,local_10);
  if (local_10 != &DAT_008f9cf4) {
    piVar1 = local_10 + -3;
    iVar2 = *piVar1;
    if ((iVar2 == -1) || ((piVar1 != &DAT_008f9ce8 && (*piVar1 = iVar2 + -1, iVar2 == 0)))) {
      fn_001008c4(local_10 + -3,local_10[-2] + 8,0);
    }
  }
  return;
}



undefined4 fn_0039dfe0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0x5c);
  puVar3 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00895114) goto LAB_0039e028;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_0039e028:
  *(undefined4 **)(param_1 + 0xe4) = puVar1;
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0x33);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008951c0) {
        puVar3 = puVar1;
        break;
      }
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  *(undefined4 **)(param_1 + 0xe8) = puVar3;
  *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(*(int *)(param_1 + 0xe4) + 8);
  return 1;
}



void fn_0039de64(undefined4 *param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  uVar3 = 0;
  *param_1 = &PTR_FUN_0082cc84;
  if ((int)(param_1[0x2f] - param_1[0x2e]) >> 2 != 0) {
    do {
      puVar4 = (undefined4 *)(param_1[0x2e] + uVar3 * 4);
      piVar2 = (int *)*puVar4;
      if (piVar2 != (int *)0x0) {
        if ((int *)piVar2[1] != (int *)0x0) {
          (**(code **)(*(int *)piVar2[1] + 4))();
        }
        if ((int *)*piVar2 != (int *)0x0) {
          (**(code **)(*(int *)*piVar2 + 4))();
        }
        fn_002feef8(piVar2);
      }
      *puVar4 = 0;
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)((int)(param_1[0x2f] - param_1[0x2e]) >> 2));
  }
  if ((int *)param_1[0x36] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x36] + 4))();
  }
  if ((int *)param_1[0x35] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x35] + 4))();
  }
  if ((int *)param_1[0x34] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x34] + 4))();
  }
  if ((int *)param_1[0x33] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x33] + 4))();
  }
  if ((int *)param_1[0x32] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x32] + 4))();
  }
  if ((int *)param_1[0x31] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x31] + 4))();
  }
  uVar1 = param_1[0x2e];
  uVar3 = uVar1;
  if ((uint)param_1[0x2f] <= uVar1) {
    for (; uVar3 != param_1[0x2f]; uVar3 = uVar3 + 4) {
    }
  }
  fn_001008c4(uVar1,(int)(param_1[0x30] - uVar1) >> 2,0);
  fn_0068ad5c(param_1);
  return;
}



void fn_0039d94c(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  bool bVar5;
  
  cVar1 = *(char *)(param_1 + 0x68);
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
  *(char *)(param_1 + 0x69) = cVar1;
  *(char *)(param_1 + 0x68) = *(char *)(param_1 + 0x6a);
  if (cVar1 == *(char *)(param_1 + 0x6a)) {
    *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  cVar1 = *(char *)(param_1 + 0x78);
  *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
  *(char *)(param_1 + 0x79) = cVar1;
  *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x7a);
  if (cVar1 == *(char *)(param_1 + 0x7a)) {
    *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  fn_002b1a28(*(undefined4 *)(*(int *)(param_1 + 4) + 0x20));
  fn_0039d6ec(param_1);
  cVar1 = *(char *)(param_1 + 0x78);
  if (cVar1 == '\x01') {
    *(undefined1 *)(param_1 + 0x7a) = 2;
    return;
  }
  if (cVar1 == '\x02') {
    uVar3 = (uint)*(byte *)(param_1 + 0x68);
    bVar5 = uVar3 == 2;
    if (bVar5) {
      uVar3 = *(uint *)(param_1 + 0x70);
    }
    if (bVar5 && uVar3 == 0) {
      *(undefined1 *)(param_1 + 0x7a) = 3;
      return;
    }
  }
  else if (cVar1 == '\x03') {
    iVar2 = fn_006e7c4c(*(undefined4 *)(param_1 + 0xc4));
    uVar4 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xb8) + iVar2 * 4) + 4);
    if (*(int *)(param_1 + 0x80) == 0) {
      uVar3 = fn_006e7c4c(*(undefined4 *)(param_1 + 0xc4));
      fn_00593c70(*(undefined4 *)(param_1 + 200),uVar4,(uVar3 & 1) != 0,
                   *(undefined4 *)(param_1 + 0xc4));
    }
    fn_00593d30(*(undefined4 *)(param_1 + 200));
    iVar2 = fn_006e7fd8(*(undefined4 *)(param_1 + 200));
    if (iVar2 != 0) {
      *(undefined1 *)(param_1 + 0x7a) = 4;
    }
  }
  return;
}



void fn_0039d6ec(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  switch(*(undefined1 *)(param_1 + 0x68)) {
  case 1:
    uVar3 = 0;
    if (*(int *)(param_1 + 0xbc) - *(int *)(param_1 + 0xb8) >> 2 != 0) {
      do {
        iVar2 = *(int *)(*(int *)(param_1 + 0xb8) + uVar3 * 4);
        if (*(char *)(iVar2 + 8) != '\0') {
          fn_002b157c(*(undefined4 *)(iVar2 + 4));
          iVar2 = fn_006f7d68();
          if (iVar2 == 0) {
            return;
          }
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < (uint)(*(int *)(param_1 + 0xbc) - *(int *)(param_1 + 0xb8) >> 2));
    }
LAB_0039d78c:
    *(undefined1 *)(param_1 + 0x6a) = 2;
    return;
  case 2:
    if (*(int *)(param_1 + 0x70) == 0) {
      iVar1 = fn_006e7ca4(*(undefined4 *)(param_1 + 0xc4));
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = fn_006e7c4c(*(undefined4 *)(param_1 + 0xc4));
        iVar2 = iVar2 + 1;
      }
      fn_005849ec(*(undefined4 *)(param_1 + 0xc4),
                   **(undefined4 **)(*(int *)(param_1 + 0xb8) + iVar2 * 4));
      *(undefined1 *)(param_1 + 0x7a) = 2;
      *(undefined1 *)(param_1 + 0x79) = 2;
      *(undefined1 *)(param_1 + 0x78) = 2;
      *(undefined4 *)(param_1 + 0x80) = 0;
    }
    fn_00584968(*(undefined4 *)(param_1 + 0xc4));
    iVar2 = fn_006e7c7c(*(undefined4 *)(param_1 + 0xc4));
    if (iVar2 != 0) {
LAB_0039d810:
      *(undefined1 *)(param_1 + 0x6a) = 5;
      return;
    }
    if (*(char *)(*(int *)(param_1 + 0xc4) + 0x24) != '\0') {
      *(undefined1 *)(param_1 + 0x6a) = 3;
      return;
    }
    break;
  case 3:
    if ((*(char *)(param_1 + 0x78) == '\x04') && (0x16 < *(uint *)(param_1 + 0x70)))
    goto LAB_0039d78c;
    break;
  case 4:
    if (*(char *)(param_1 + 0x78) == '\x04') goto LAB_0039d810;
    break;
  case 5:
    if (0x13 < *(uint *)(param_1 + 0x70)) {
      if (*(uint *)(param_1 + 0x70) == 0x14) {
        fn_00584884(*(undefined4 *)(param_1 + 0xc4));
        fn_003e88a8(*(undefined4 *)(param_1 + 0xd0));
      }
      fn_003e8904(*(undefined4 *)(param_1 + 0xd0));
      iVar2 = fn_006cb9e8(*(undefined4 *)(param_1 + 0xd0));
      if (iVar2 != 0) {
        *(undefined1 *)(param_1 + 0x6a) = 6;
        return;
      }
    }
    break;
  case 6:
    if (*(int *)(param_1 + 0x70) == 0) {
      fn_00571268(*(undefined4 *)(param_1 + 0xd8));
    }
    iVar2 = fn_0057129c(*(undefined4 *)(param_1 + 0xd8));
    if (iVar2 != 0) {
      fn_003e8960(*(undefined4 *)(param_1 + 0xd0));
      fn_0057137c(*(undefined4 *)(param_1 + 0xd8));
      *(undefined1 *)(param_1 + 0x6a) = 7;
      return;
    }
    break;
  case 7:
    if (*(int *)(param_1 + 0x70) == 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x84) + 0x14) = 1;
      return;
    }
  }
  return;
}



undefined4 fn_0039d3e4(int param_1)

{
  short sVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  
  puVar10 = *(undefined4 **)(param_1 + 0x18);
  if (puVar10 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar10)(puVar10);
    do {
      if (puVar2 == &DAT_0089300c) goto LAB_0039d430;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar10 = (undefined4 *)0x0;
LAB_0039d430:
  *(undefined4 **)(param_1 + 0x84) = puVar10;
  uVar3 = fn_001481c8(*(undefined4 *)(param_1 + 0x88),DAT_00893010,&DAT_0039d6d8,1,1);
  *(undefined4 *)(param_1 + 0x94) = uVar3;
  uVar3 = fn_001480d0(*(undefined4 *)(param_1 + 0x88),uVar3,DAT_00893014,&DAT_0039d6e0,0,1,0);
  *(undefined4 *)(param_1 + 0x98) = uVar3;
  iVar4 = fn_00178f9c(*(undefined4 *)(param_1 + 0x88),uVar3);
  iVar8 = 0;
  *(byte *)(*(int *)(iVar4 + 0x10) + 0x44) = *(byte *)(*(int *)(iVar4 + 0x10) + 0x44) & 0xfe | 1;
  *(undefined1 *)(param_1 + 0x6a) = 1;
  iVar4 = (int)*(char *)(*(int *)(param_1 + 0x84) + 0x15);
  do {
    pcVar5 = (char *)fn_006e690c(*(undefined4 *)(param_1 + 0x84),iVar8);
    iVar6 = fn_006e68b4(*(undefined4 *)(param_1 + 0x84));
    if (iVar8 < iVar6) {
      if (*pcVar5 == '\0') {
        uVar7 = *(undefined4 *)(param_1 + 0x98);
        puVar10 = *(undefined4 **)(*(int *)(param_1 + 0xb8) + iVar8 * 4);
        sVar1 = *(short *)(pcVar5 + 2);
        uVar9 = *(undefined4 *)(pcVar5 + 0x1c);
        uVar3 = fn_001f84ac(pcVar5 + 4);
        fn_0043ebd4(*puVar10,uVar7,iVar8,(int)sVar1,uVar3,pcVar5 + 0x18,uVar9,iVar4);
        fn_0044acac(puVar10[1],pcVar5 + 0x20);
      }
      else {
        puVar10 = *(undefined4 **)(*(int *)(param_1 + 0xb8) + iVar8 * 4);
        uVar7 = *(undefined4 *)(param_1 + 0x98);
        sVar1 = *(short *)(pcVar5 + 2);
        uVar3 = fn_001f84ac(pcVar5 + 4);
        fn_0043eeb0(*puVar10,uVar7,iVar8,(int)sVar1,uVar3,pcVar5 + 0x18,iVar4);
        fn_0044ab98(puVar10[1],iVar8);
      }
      *(undefined1 *)(puVar10 + 2) = 1;
    }
    else {
      puVar10 = *(undefined4 **)(*(int *)(param_1 + 0xb8) + iVar8 * 4);
      fn_0043f0a0(*puVar10,*(undefined4 *)(param_1 + 0x98),iVar8);
      *(undefined1 *)(puVar10 + 2) = 0;
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 4);
  uVar3 = fn_006e68b4(*(undefined4 *)(param_1 + 0x84));
  fn_005845b4(*(undefined4 *)(param_1 + 0xc4),*(undefined4 *)(param_1 + 0x98),uVar3);
  uVar3 = fn_006e68b4(*(undefined4 *)(param_1 + 0x84));
  fn_0041f71c(*(undefined4 *)(param_1 + 0xd4),uVar3);
  fn_003896ec(*(undefined4 *)(param_1 + 0xcc));
  fn_003e889c(*(undefined4 *)(param_1 + 0xd0));
  uVar9 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x24) + 8);
  iVar4 = fn_00176d68(uVar9);
  uVar3 = *(undefined4 *)(iVar4 + 0x68);
  uVar7 = *(undefined4 *)(iVar4 + 0x78);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(iVar4 + 0x58);
  *(undefined4 *)(param_1 + 0xa4) = uVar3;
  *(undefined4 *)(param_1 + 0xa8) = uVar7;
  fn_00176d68(uVar9);
  puVar10 = (undefined4 *)fn_006dcd40();
  uVar3 = puVar10[1];
  uVar7 = puVar10[2];
  *(undefined4 *)(param_1 + 0xac) = *puVar10;
  *(undefined4 *)(param_1 + 0xb0) = uVar3;
  *(undefined4 *)(param_1 + 0xb4) = uVar7;
  iVar4 = fn_00176d68(uVar9);
  uVar7 = DAT_008ca158;
  uVar3 = DAT_008ca154;
  *(undefined4 *)(iVar4 + 0x58) = DAT_008ca150;
  *(undefined4 *)(iVar4 + 0x68) = uVar3;
  *(undefined4 *)(iVar4 + 0x78) = uVar7;
  *(uint *)(iVar4 + 0x88) = *(uint *)(iVar4 + 0x88) | 0x800;
  uVar3 = fn_00176d68(uVar9);
  fn_005456f4(uVar3,&DAT_008ca15c);
  *(undefined1 *)(param_1 + 0x6a) = 1;
  *(undefined1 *)(param_1 + 0x7a) = 1;
  return 1;
}


