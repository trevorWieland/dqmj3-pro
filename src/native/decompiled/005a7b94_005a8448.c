#include "005a7b94_005a8448.h"



void fn_005a8448(uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint *puVar9;
  uint local_20;
  uint local_1c;
  
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0xff;
  uVar6 = *param_1;
  uVar8 = param_1[1];
  if (uVar6 != uVar8) {
    uVar1 = uVar6;
    if (uVar8 <= uVar6) {
      do {
        uVar1 = uVar1 + 4;
      } while (uVar1 != uVar8);
    }
    param_1[1] = uVar8 - (uVar8 - uVar6 & 0xfffffffc);
  }
  *(undefined1 *)((int)param_1 + 0x3d) = 1;
  param_1[3] = (uint)&DAT_005a77f8;
  param_1[4] = 0;
  param_1[5] = (uint)&LAB_005a8288;
  param_1[6] = 0;
  param_1[7] = (uint)fn_005a83b0;
  param_1[8] = 0;
  param_1[9] = (uint)fn_005a7b94;
  param_1[10] = 0;
  param_1[0xb] = (uint)fn_005a830c;
  param_1[0xc] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0xd] = (uint)fn_005a83f0;
  param_1[0xe] = 0;
  local_20 = 10;
  puVar9 = param_1 + 0x13;
  if ((uint)((int)(param_1[0x15] - param_1[0x13]) >> 2) < 10) {
    uVar6 = (int)(param_1[0x14] - param_1[0x13]) >> 2;
    local_1c = uVar6 + (uVar6 >> 1) + (uVar6 >> 3);
    if (local_1c < uVar6 + 0x20) {
      local_1c = uVar6 + 0x20;
    }
    puVar2 = &local_1c;
    if (local_1c < 0xb) {
      puVar2 = &local_20;
    }
    uVar6 = *puVar2;
    puVar3 = (undefined4 *)fn_00100fc6(uVar6 << 2,0);
    puVar7 = (undefined4 *)param_1[0x14];
    puVar4 = puVar3;
    for (puVar5 = (undefined4 *)*puVar9; puVar5 != puVar7; puVar5 = puVar5 + 1) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = *puVar5;
      }
      puVar4 = puVar4 + 1;
    }
    uVar1 = *puVar9;
    uVar8 = uVar1;
    if (param_1[0x14] < uVar1) {
      do {
        uVar8 = uVar8 + 4;
      } while (uVar8 != param_1[0x14]);
    }
    fn_001008c4(uVar1,(int)(param_1[0x15] - uVar1) >> 2,0);
    uVar8 = *puVar9;
    param_1[0x13] = (uint)puVar3;
    param_1[0x14] = (param_1[0x14] - uVar8 & 0xfffffffc) + (int)puVar3;
    param_1[0x15] = (uint)(puVar3 + uVar6);
  }
  uVar8 = param_1[0x14];
  uVar6 = param_1[0x13];
  if (uVar6 != uVar8) {
    uVar1 = uVar6;
    if (uVar8 <= uVar6) {
      do {
        uVar1 = uVar1 + 4;
      } while (uVar1 != uVar8);
    }
    param_1[0x14] = uVar8 - (uVar8 - uVar6 & 0xfffffffc);
  }
  *(undefined1 *)((int)param_1 + 0x59) = 0;
  *(undefined1 *)((int)param_1 + 0x5b) = 0;
  return;
}



void fn_005a83f0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  int *piVar5;
  
  for (piVar5 = (int *)*param_1; (int *)param_1[1] != piVar5; piVar5 = piVar5 + 1) {
    iVar2 = *piVar5;
    piVar1 = (int *)(iVar2 + (uint)*(byte *)(iVar2 + 0x2c) * 8);
    piVar4 = (int *)(iVar2 + (piVar1[1] >> 1));
    if ((piVar1[1] & 1U) == 0) {
      pcVar3 = (code *)*piVar1;
    }
    else {
      pcVar3 = *(code **)(*piVar4 + *piVar1);
    }
    (*pcVar3)(piVar4);
  }
  return;
}



void fn_005a83b0(int param_1)

{
  int iVar1;
  
  fn_00578cc8(*(undefined4 *)(param_1 + 0x40),(int)*(char *)(param_1 + 0x58));
  iVar1 = fn_00578c58(*(undefined4 *)(param_1 + 0x40));
  if (iVar1 != 0) {
    if (*(char *)(param_1 + 0x58) != '\0') {
      *(undefined1 *)(param_1 + 0x5c) = 1;
    }
    *(undefined1 *)(param_1 + 0x3d) = 3;
  }
  return;
}



void fn_005a830c(undefined4 *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  code *pcVar4;
  int *piVar5;
  uint uVar6;
  bool bVar7;
  
  bVar2 = true;
  uVar6 = 0;
  do {
    if (param_1[uVar6 + 0x11] != 0) {
      iVar3 = fn_00608f3c();
      if (iVar3 == 0) {
        fn_00608ecc(param_1[uVar6 + 0x11]);
        bVar2 = false;
      }
      for (piVar5 = (int *)*param_1; (int *)param_1[1] != piVar5; piVar5 = piVar5 + 1) {
        iVar3 = *piVar5;
        pcVar4 = (code *)(iVar3 + (uint)*(byte *)(iVar3 + 0x2c) * 8);
        pcVar1 = pcVar4 + 4;
        bVar7 = (*(uint *)pcVar1 & 1) == 0;
        if (bVar7) {
          pcVar4 = *(code **)pcVar4;
        }
        if (!bVar7) {
          pcVar4 = *(code **)(*(int *)(iVar3 + ((int)*(uint *)pcVar1 >> 1)) + *(int *)pcVar4);
        }
        (*pcVar4)();
      }
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 2);
  if (bVar2) {
    *(undefined1 *)((int)param_1 + 0x3d) = 5;
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x005a7bf4) */
/* WARNING: Removing unreachable block (ram,0x005a7c54) */

void fn_005a7b94(int *param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 *extraout_r1;
  undefined1 *puVar6;
  int *piVar7;
  undefined4 uVar8;
  bool bVar9;
  uint in_fpscr;
  undefined1 auStack_50 [4];
  float local_4c;
  undefined1 auStack_44 [4];
  float local_40;
  undefined1 auStack_38 [4];
  float local_34;
  undefined1 auStack_2c [4];
  float local_28;
  
  switch((char)param_1[0xf]) {
  case '\0':
    if (param_1[1] - *param_1 >> 2 == 1) {
      fn_005a7abc(param_1,*(undefined4 *)*param_1,auStack_50,auStack_44);
    }
    break;
  case '\x01':
    if (param_1[1] - *param_1 >> 2 == 1) {
      fn_005a80dc(param_1,*(undefined4 *)*param_1,auStack_50,auStack_44);
    }
    break;
  case '\x02':
    if (param_1[1] - *param_1 >> 2 == 0) {
      fn_002ff628(9,&DAT_008c7669,&DAT_008c7669,0,0);
    }
    fn_005a80dc(param_1,*(undefined4 *)*param_1,auStack_50,auStack_44);
    uVar5 = param_1[1] - *param_1 >> 2;
    if (uVar5 < 2) {
      fn_002ff628(9,&DAT_008c7669,&DAT_008c7669,1,uVar5);
    }
    fn_005a7abc(param_1,*(undefined4 *)(*param_1 + 4),auStack_50,auStack_44);
    break;
  case '\x03':
    iVar2 = fn_00145b00(0x3c,&DAT_00812c8c);
    iVar3 = 0;
    if (iVar2 != 0) {
      VectorSignedToFloat((int)*(char *)(param_1[0x10] + 0xe0),(byte)(in_fpscr >> 0x16) & 3);
      iVar3 = fn_0060917c(iVar2,param_1[0x18],0);
    }
    param_1[0x12] = iVar3;
    fn_00578d34(param_1[0x10],auStack_50,1,0);
    fn_006090e8(param_1[0x12],auStack_50);
    for (piVar7 = (int *)*param_1; (int *)param_1[1] != piVar7; piVar7 = piVar7 + 1) {
      iVar3 = *piVar7;
      fn_005797d8(*(undefined4 *)(iVar3 + 0x28),auStack_44,(int)*(char *)(param_1[0x10] + 0xe0));
      uVar1 = fn_00608fe0(param_1[0x12],auStack_44);
      *(undefined1 *)(iVar3 + 0x34) = uVar1;
      *(undefined1 *)(iVar3 + 0x35) = 1;
    }
    uVar8 = fn_006ef104(param_1[0x12]);
    uVar8 = fn_006e8314(param_1,1,0,uVar8);
    fn_005a789c(param_1,auStack_50,uVar8,1,0);
    break;
  case '\x04':
    iVar2 = fn_00145b00(0x3c,&DAT_00812c8c);
    iVar3 = 0;
    if (iVar2 != 0) {
      VectorSignedToFloat((int)*(char *)(param_1[0x10] + 0xe0),(byte)(in_fpscr >> 0x16) & 3);
      iVar3 = fn_0060917c(iVar2,param_1[0x18],0);
    }
    param_1[0x11] = iVar3;
    fn_00578d34(param_1[0x10],auStack_50,0);
    fn_006090e8(param_1[0x11],auStack_50);
    piVar7 = (int *)*param_1;
    uVar8 = 0;
    while ((int *)param_1[1] != piVar7) {
      iVar3 = *piVar7;
      fn_005797d8(*(undefined4 *)(iVar3 + 0x28),auStack_44,(int)*(char *)(param_1[0x10] + 0xe0));
      uVar1 = fn_00608fe0(param_1[0x11],auStack_44);
      *(undefined1 *)(iVar3 + 0x34) = uVar1;
      *(undefined1 *)(iVar3 + 0x35) = 0;
      piVar7 = piVar7 + 1;
      if (local_4c == local_40) {
        uVar8 = 1;
        *(undefined1 *)(iVar3 + 0x37) = 1;
      }
    }
    uVar4 = fn_006ef104(param_1[0x11]);
    uVar4 = fn_006e8314(param_1,0,0,uVar4);
    fn_005a789c(param_1,auStack_50,uVar4,1,uVar8);
    break;
  case '\x05':
    iVar2 = fn_00145b00(0x3c,&DAT_00812c8c);
    iVar3 = 0;
    if (iVar2 != 0) {
      VectorSignedToFloat((int)*(char *)(param_1[0x10] + 0xe0),(byte)(in_fpscr >> 0x16) & 3);
      iVar3 = fn_0060917c(iVar2,param_1[0x18],0);
    }
    param_1[0x11] = iVar3;
    iVar2 = fn_00145b00(0x3c,&DAT_00812c8c);
    iVar3 = 0;
    if (iVar2 != 0) {
      VectorSignedToFloat((int)*(char *)(param_1[0x10] + 0xe0),(byte)(in_fpscr >> 0x16) & 3);
      iVar3 = fn_0060917c(iVar2,param_1[0x18],0);
    }
    param_1[0x12] = iVar3;
    fn_00578d34(param_1[0x10],auStack_38,0);
    fn_006090e8(param_1[0x11],auStack_38);
    fn_00578d34(param_1[0x10],auStack_50,1,0);
    fn_006090e8(param_1[0x12],auStack_50);
    uVar8 = 0;
    for (piVar7 = (int *)*param_1; (int *)param_1[1] != piVar7; piVar7 = piVar7 + 1) {
      iVar2 = *piVar7;
      iVar3 = (int)*(char *)(iVar2 + 0x36);
      uVar5 = iVar3 - 0x10;
      bVar9 = uVar5 < 4;
      if (!bVar9) {
        uVar5 = iVar3 - 0x18;
      }
      if ((bVar9 || uVar5 < 4) || (iVar3 == 0x20 || iVar3 == 0x22)) {
        iVar3 = 1;
      }
      else {
        iVar3 = 0;
      }
      if (iVar3 == 1) {
        puVar6 = auStack_44;
      }
      else {
        puVar6 = auStack_2c;
      }
      fn_005797d8(*(undefined4 *)(iVar2 + 0x28),puVar6,(int)*(char *)(param_1[0x10] + 0xe0));
      puVar6 = extraout_r1;
      if (iVar3 != 0) {
        puVar6 = auStack_44;
      }
      if (iVar3 == 0) {
        puVar6 = auStack_2c;
      }
      uVar1 = fn_00608fe0(param_1[iVar3 + 0x11],puVar6);
      *(undefined1 *)(iVar2 + 0x34) = uVar1;
      *(char *)(iVar2 + 0x35) = (char)iVar3;
      if ((iVar3 == 0) && (local_34 == local_28)) {
        uVar8 = 1;
        *(undefined1 *)(iVar2 + 0x37) = 1;
      }
    }
    uVar4 = fn_006ef104(param_1[0x12]);
    uVar4 = fn_006e8314(param_1,1,0,uVar4);
    fn_005a789c(param_1,auStack_50,uVar4,1,0);
    uVar4 = fn_006ef104(param_1[0x11]);
    uVar4 = fn_006e8314(param_1,0,0,uVar4);
    fn_005a789c(param_1,auStack_38,uVar4,1,uVar8);
  }
  *(undefined1 *)((int)param_1 + 0x3d) = 4;
  return;
}



void fn_005a80dc(int param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  uint in_fpscr;
  
  uVar5 = *(undefined4 *)(param_2 + 0x28);
  iVar3 = fn_00145b00(0x3c,&DAT_00812c8c,param_3,param_4,param_4);
  uVar4 = 0;
  if (iVar3 != 0) {
    VectorSignedToFloat((int)*(char *)(*(int *)(param_1 + 0x40) + 0xe0),(byte)(in_fpscr >> 0x16) & 3
                       );
    uVar4 = fn_0060917c(iVar3,*(undefined4 *)(param_1 + 0x60),(int)*(char *)(param_1 + 0x58));
  }
  *(undefined4 *)(param_1 + 0x44) = uVar4;
  fn_00578d34(*(undefined4 *)(param_1 + 0x40),param_3,0,(int)*(char *)(param_1 + 0x58));
  fn_006090e8(*(undefined4 *)(param_1 + 0x44),param_3);
  if (*(char *)(param_1 + 0x58) == '\0') {
    fn_005797d8(uVar5,param_4,(int)*(char *)(*(int *)(param_1 + 0x40) + 0xe0));
  }
  else {
    fn_005797d8(uVar5,param_4,2);
  }
  bVar6 = *(char *)(param_1 + 0x58) != '\0';
  cVar1 = '\0';
  if (bVar6) {
    cVar1 = *(char *)(param_1 + 0x5c);
  }
  if (*(float *)(param_3 + 4) == *(float *)(param_4 + 4) && (!bVar6 || cVar1 == '\0')) {
    *(undefined1 *)(param_2 + 0x37) = 1;
    *(undefined1 *)(param_2 + 0x2c) = 1;
    *(undefined1 *)(param_1 + 0x3d) = 5;
    return;
  }
  *(undefined1 *)(param_1 + 0x5c) = 0;
  uVar2 = fn_00608fe0(*(undefined4 *)(param_1 + 0x44),param_4);
  *(undefined1 *)(param_2 + 0x34) = uVar2;
  *(undefined1 *)(param_2 + 0x35) = 0;
  if (*(char *)(param_1 + 0x58) == '\0') {
    uVar4 = fn_006ef104(*(undefined4 *)(param_1 + 0x44));
    fn_006e8314(param_1,0,0,uVar4);
  }
  else {
    fn_006ef104(*(undefined4 *)(param_1 + 0x44));
  }
  fn_005a789c(param_1,param_3);
  return;
}


