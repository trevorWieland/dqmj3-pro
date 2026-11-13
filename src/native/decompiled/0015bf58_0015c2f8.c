#include "0015bf58_0015c2f8.h"



void fn_0015c2f8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 auStack_30 [4];
  undefined4 local_2c;
  undefined4 local_28 [5];
  
  iVar2 = *(int *)(param_1 + 0xfc);
  uVar5 = *(uint *)(iVar2 + 0x110);
  if ((uVar5 < *(uint *)(iVar2 + 0x114)) && (uVar5 != 1000)) {
    uVar4 = (uint)(*(int *)(iVar2 + 0x118) * 5) / 100;
    if (uVar4 == 0) {
      uVar4 = 1;
    }
    uVar4 = uVar4 + uVar5;
    *(uint *)(iVar2 + 0x110) = uVar4;
    if (*(uint *)(iVar2 + 0x114) < uVar4) {
      uVar4 = *(uint *)(iVar2 + 0x114);
    }
    *(uint *)(iVar2 + 0x110) = uVar4;
    if (uVar4 == 1000) {
      fn_0016da8c();
    }
  }
  fn_0016d9bc(iVar2);
  fn_0016d7f0(iVar2);
  uVar5 = (uint)*(byte *)(iVar2 + 0x108);
  if ((uVar5 != 0 && uVar5 != 4) && uVar5 != 6) {
    if (uVar5 == 5) {
      uVar5 = 1;
    }
    iVar3 = fn_00154a6c(*(undefined4 *)(iVar2 + uVar5 * 4 + 0xf8));
    if (iVar3 != 0) {
      fn_0016db28(iVar2,0);
    }
    if (*(char *)(iVar2 + 0x108) == '\x05') {
      uVar5 = 0;
      local_2c = 0xff0064ff;
      fn_0017aaf0(auStack_30,iVar2);
      local_38 = 0;
      fn_0017a934(&local_34,iVar2,auStack_30,&local_2c);
      uVar1 = local_34;
      if (*(int *)(iVar2 + 0x11c) != 0) {
        do {
          local_38 = uVar1;
          fn_0017a8a4(iVar2,*(undefined4 *)(iVar2 + uVar5 * 4 + 0x94),&local_38);
          uVar5 = uVar5 + 1;
        } while (uVar5 < *(uint *)(iVar2 + 0x11c));
      }
      uVar5 = 0;
      do {
        uVar4 = 0;
        do {
          local_28[0] = local_34;
          fn_0017a8a4(iVar2,*(undefined4 *)(iVar2 + uVar4 * 0x28 + uVar5 * 4 + 0x14),local_28);
          uVar4 = uVar4 + 1;
        } while (uVar4 < 3);
        uVar5 = uVar5 + 1;
      } while (uVar5 < 10);
      local_38 = local_34;
      fn_0017a8a4(iVar2,*(undefined4 *)(iVar2 + 0x8c),&local_38);
      local_38 = local_34;
      fn_0017a8a4(iVar2,*(undefined4 *)(iVar2 + 0x90),&local_38);
    }
  }
  return;
}



undefined4 fn_0015c270(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0xfc);
  iVar2 = *(int *)(iVar1 + 0x110);
  iVar3 = *(int *)(iVar1 + 0x114);
  if (iVar2 == iVar3) {
    param_4 = (uint)*(byte *)(iVar1 + 0x108);
  }
  if (iVar2 != iVar3 || param_4 != 0) {
    return 0;
  }
  if (iVar3 != 1000) {
    iVar3 = 0;
    if (iVar2 != 0) {
      if (iVar2 == 1000) {
        iVar3 = 0x18;
      }
      else {
        iVar3 = (int)(char)(((uint)(iVar2 * 0x18) % 1000 != 0) + (char)((uint)(iVar2 * 0x18) / 1000)
                           );
      }
    }
    if (*(int *)(iVar1 + 0x11c) != iVar3) {
      return 0;
    }
  }
  return 1;
}



void fn_0015c230(int param_1,int param_2)

{
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 auStack_20 [2];
  
  iVar3 = *(int *)(param_1 + 0xfc);
  *(byte *)(*(int *)(iVar3 + 8) + 0x44) =
       *(byte *)(*(int *)(iVar3 + 8) + 0x44) & 0xfe | (byte)param_2;
  if (param_2 == 0) {
    return;
  }
  *(byte *)(*(int *)(iVar3 + 0xc) + 0x44) = *(byte *)(*(int *)(iVar3 + 0xc) + 0x44) & 0xfe;
  uVar6 = *(uint *)(iVar3 + 0x114);
  *(uint *)(iVar3 + 0x110) = uVar6;
  *(uint *)(iVar3 + 0x114) = uVar6;
  if (1000 < uVar6) {
    *(undefined4 *)(iVar3 + 0x110) = 1000;
    *(undefined4 *)(iVar3 + 0x114) = 1000;
  }
  iVar7 = 0;
  *(undefined4 *)(iVar3 + 0x118) = 0;
  if (*(int *)(iVar3 + 0x110) == 1000) {
    fn_0016da8c(iVar3);
    return;
  }
  uVar6 = 0;
  do {
    uVar4 = uVar6 + 1;
    uVar6 = uVar4 & 0xff;
  } while (uVar6 * 0xfa <= *(uint *)(iVar3 + 0x110));
  *(char *)(iVar3 + 0x120) = (char)uVar4;
  fn_0017aaf0(&uStack_24,iVar3);
  fn_0016d9bc(iVar3);
  uVar1 = uStack_24;
  uVar6 = 0;
  do {
    uVar4 = 0;
    do {
      auStack_20[0] = uVar1;
      fn_0017a8a4(iVar3,*(undefined4 *)(iVar3 + uVar4 * 0x28 + uVar6 * 4 + 0x14),auStack_20);
      uVar4 = uVar4 + 1;
    } while (uVar4 < 3);
    uVar6 = uVar6 + 1;
  } while (uVar6 < 10);
  uStack_28 = uVar1;
  fn_0017a8a4(iVar3,*(undefined4 *)(iVar3 + 0x8c),&uStack_28);
  uStack_28 = uVar1;
  fn_0017a8a4(iVar3,*(undefined4 *)(iVar3 + 0x90),&uStack_28);
  iVar5 = *(int *)(iVar3 + 0x110);
  if (iVar5 != 0) {
    if (iVar5 == 1000) {
      iVar7 = 0x18;
    }
    else {
      iVar7 = (int)(char)(((uint)(iVar5 * 0x18) % 1000 != 0) + (char)((uint)(iVar5 * 0x18) / 1000));
    }
  }
  iVar5 = 0;
  *(int *)(iVar3 + 0x11c) = iVar7;
  do {
    iVar7 = iVar3 + iVar5 * 4;
    uStack_28 = uStack_24;
    fn_0017a8a4(iVar3,*(undefined4 *)(iVar7 + 0x94),&uStack_28);
    bVar2 = 0;
    if (*(int *)(iVar3 + 0x11c) != 0) {
      if (iVar5 < *(int *)(iVar3 + 0x11c)) {
        bVar2 = 1;
      }
      else {
        bVar2 = 0;
      }
    }
    iVar7 = *(int *)(iVar7 + 0x94);
    iVar5 = iVar5 + 1;
    *(byte *)(iVar7 + 0x44) = bVar2 | *(byte *)(iVar7 + 0x44) & 0xfe;
  } while (iVar5 < 0x18);
  return;
}



undefined4 fn_0015c220(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0xfc) + 0x114);
}



void fn_0015c1f0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0xfc);
  uVar2 = param_2 + *(int *)(iVar1 + 0x114);
  *(uint *)(iVar1 + 0x114) = uVar2;
  if (1000 < uVar2) {
    uVar2 = 1000;
  }
  *(uint *)(iVar1 + 0x114) = uVar2;
  *(uint *)(iVar1 + 0x118) = uVar2 - *(int *)(iVar1 + 0x110);
  return;
}



undefined * fn_0015c0fc(undefined4 param_1,char param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = fn_00182994(DAT_008977e4);
  iVar2 = fn_001754ac(uVar1,param_2);
  iVar3 = fn_0016c0d0();
  iVar4 = fn_0016c2b8((int)param_2);
  if (iVar2 == 0) {
    iVar4 = iVar4 + 4;
  }
  return (&PTR_s_camtgt_021_ALLYS401ZOOM_007bc030)[iVar3 * 8 + iVar4];
}



undefined * fn_0015c0a4(undefined4 param_1,char param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = fn_00182994(DAT_008977e4);
  iVar2 = fn_001754ac(uVar1,param_2);
  iVar3 = fn_0016c0d0();
  iVar4 = fn_0016c2b8((int)param_2);
  if (iVar2 == 0) {
    iVar4 = iVar4 + 4;
  }
  return (&PTR_s_move_051_S01S4targetRun_007bbe30)[iVar3 * 8 + iVar4];
}



undefined * fn_0015c010(undefined4 param_1,char param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **ppuVar5;
  
  uVar1 = fn_00182994(DAT_008977e4);
  iVar2 = fn_001754ac(uVar1,param_2);
  iVar3 = fn_0016c0d0();
  iVar4 = fn_0016c2b8((int)param_2);
  if (iVar2 == 0) {
    iVar4 = iVar4 + 4;
  }
  uVar1 = fn_00182994(DAT_008977e4);
  iVar2 = fn_00174bac(uVar1,param_2);
  if (iVar2 == 1) {
    return (&PTR_s_camtgt_101_ALLYN4_00_007bbc30)[iVar3 * 8 + iVar4];
  }
  if (iVar2 == 2) {
    ppuVar5 = &PTR_s_camtgt_101_ALLYM4_00_007bbd30;
  }
  else {
    ppuVar5 = &PTR_s_camtgt_101_ALLYS4_00_007bbb30;
  }
  return ppuVar5[iVar3 * 8 + iVar4];
}



void fn_0015bfb0(undefined4 param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    return;
  case 1:
    return;
  default:
    return;
  case 3:
    return;
  case 4:
    return;
  }
}



undefined * fn_0015bf58(undefined4 param_1,char param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = fn_00182994(DAT_008977e4);
  iVar2 = fn_001754ac(uVar1,param_2);
  iVar3 = fn_0016c0d0();
  iVar4 = fn_0016c2b8((int)param_2);
  if (iVar2 == 0) {
    iVar4 = iVar4 + 4;
  }
  return (&PTR_s_camera_021_ALLYS401ZOOM_007bbf30)[iVar3 * 8 + iVar4];
}


