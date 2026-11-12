#include "00252280_00252980.h"



void fn_00252980(int param_1,undefined4 param_2,undefined4 param_3)

{
  fn_002523d8(param_1,1,param_2);
  fn_002523d8(param_1,0,param_3);
  *(undefined1 *)(param_1 + 8) = 3;
  return;
}



void fn_002527c4(int param_1,undefined4 param_2)

{
  char cVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined1 auStack_11e8 [88];
  undefined2 local_1190;
  undefined2 local_10cc;
  undefined2 local_107c [466];
  undefined1 local_cd8;
  undefined1 auStack_910 [2280];
  
  fn_00290734(auStack_910);
  fn_005db3a4(param_1,auStack_910);
  iVar4 = fn_002043cc(DAT_00897840,param_2);
  if (*(char *)(iVar4 + 0x10) != '\x02') {
    fn_005db3d0(param_1,iVar4 + 0x7a8);
    return;
  }
  if (*(int *)(iVar4 + 0x8f8) == 0) {
    fn_00301f50(auStack_11e8,0x8d8);
    uVar8 = *(undefined4 *)(iVar4 + 0x14);
    fn_00101a50(auStack_11e8,0x18,*(undefined4 *)(iVar4 + 0xc));
    local_1190 = fn_00688518(uVar8);
    iVar7 = 0;
    cVar1 = *(char *)(DAT_00897840 + 0x34);
    do {
      if (cVar1 == '\x01') {
        iVar5 = fn_00688548(uVar8,iVar7);
      }
      else if (cVar1 == '\x02') {
        iVar5 = fn_006885b0(uVar8,iVar7);
      }
      else {
        iVar5 = fn_0068857c();
      }
      if ((iVar5 != 0) && (iVar6 = fn_0013add0(), iVar6 != 0)) {
        uVar3 = fn_002ea524(iVar5);
        local_107c[iVar7 * 0x78] = uVar3;
        cVar2 = fn_002ea308(iVar5);
        uVar3 = fn_00660a50((int)cVar2);
        local_107c[iVar7 * 0x78 + 0x14] = uVar3;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 4);
    local_10cc = fn_006884e8(uVar8);
    local_cd8 = 0xff;
    fn_005db3d0(param_1,auStack_11e8);
    *(undefined1 *)(param_1 + 0xb) = 1;
    fn_002fa42c(iVar4,auStack_11e8);
  }
  else {
    fn_005db3d0(param_1,iVar4 + 0x7a8);
  }
  *(undefined1 *)(param_1 + 8) = 3;
  return;
}



void fn_0025266c(undefined4 *param_1,undefined4 param_2,int param_3,undefined1 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined1 auStack_1170 [4];
  char *local_116c;
  undefined1 local_1150;
  undefined1 local_928;
  undefined4 local_894;
  undefined4 local_890;
  
  fn_0011d89c(auStack_1170);
  local_1150 = 8;
  iVar1 = fn_002043cc(DAT_00897840,param_3);
  bVar3 = *(char *)(iVar1 + 0x10) == '\x02';
  if (bVar3) {
    local_928 = 1;
  }
  else {
    iVar1 = fn_00204404(DAT_00897840);
    local_928 = *(int *)(iVar1 + 4) < param_3;
    local_894 = (**(code **)*param_1)(param_1);
    iVar1 = fn_002043cc(DAT_00897840,param_3);
    local_890 = *(undefined4 *)(iVar1 + 8);
  }
  fn_00252eb8(auStack_1170,param_2);
  uVar2 = fn_002043cc(DAT_00897840,param_3);
  fn_00251f18(auStack_1170,uVar2,bVar3);
  local_116c = "bf_A01_00";
  uVar2 = fn_00154ae0(DAT_008977e4);
  fn_001d448c(uVar2,auStack_1170);
  fn_00202fd8(&LAB_002f8abc);
  uVar2 = fn_00615ee4();
  fn_0010706c(uVar2,&LAB_00202fe8,2);
  *(undefined4 *)(DAT_00897828 + 0x68) = param_5;
  iVar1 = DAT_00897840;
  *(undefined1 *)(DAT_00897840 + 0x35) = 1;
  *(undefined1 *)(iVar1 + 0x36) = param_4;
  return;
}



void fn_0025265c(void)

{
  fn_002044a0(DAT_00897840);
  return;
}



void fn_0025264c(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = DAT_00897840;
  if (*(char *)(DAT_00897840 + 0x35) == '\0') {
    iVar4 = 0;
    do {
      iVar2 = fn_00145b00(0x1084,&DAT_00812c8c);
      uVar3 = 0;
      if (iVar2 != 0) {
        uVar3 = fn_002fa528();
      }
      iVar2 = iVar4 * 4;
      iVar4 = iVar4 + 1;
      *(undefined4 *)(iVar1 + iVar2 + 8) = uVar3;
    } while (iVar4 < 8);
    iVar4 = fn_00145b00(0xc,&DAT_00812c8c);
    uVar3 = 0;
    if (iVar4 != 0) {
      uVar3 = fn_003383cc();
    }
    *(undefined4 *)(iVar1 + 0x28) = uVar3;
    iVar4 = fn_00145b00(0xc,&DAT_00812c8c);
    uVar3 = 0;
    if (iVar4 != 0) {
      uVar3 = fn_00562098();
    }
    *(undefined4 *)(iVar1 + 0x2c) = uVar3;
    iVar4 = fn_00145b00(0x28,&DAT_00812c8c);
    uVar3 = 0;
    if (iVar4 != 0) {
      uVar3 = fn_003a3f30();
    }
    *(undefined1 *)(iVar1 + 0x34) = 1;
    *(undefined1 *)(iVar1 + 4) = 0;
    *(undefined1 *)(iVar1 + 0x36) = 0;
    *(undefined4 *)(iVar1 + 0x30) = uVar3;
  }
  return;
}



void fn_00252638(void)

{
  fn_0028ab20(*(undefined4 *)(DAT_00897804 + 0xc));
  return;
}



void fn_002525fc(void)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(DAT_00897804 + 0xc);
  fn_0028b148(uVar1);
  fn_0028b3b0(uVar1);
  fn_00204404(DAT_00897840);
  fn_002fa49c();
  return;
}



void fn_002525a0(undefined4 param_1)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  fn_00102908(&local_28,0x20,DAT_00892d80,param_1);
  fn_0022f584(&local_28,0);
  return;
}



void fn_002523d8(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_908 [88];
  undefined2 local_8b0;
  undefined2 local_7ec;
  undefined2 local_79c [466];
  undefined1 local_3f8;
  undefined4 local_30;
  
  iVar4 = fn_002043cc(DAT_00897840,param_3);
  if ((*(char *)(iVar4 + 0x10) != '\x02') || (*(int *)(iVar4 + 0x8f8) != 0)) {
    if (param_2 == 0) {
      fn_005db3d0(param_1,iVar4 + 0x7a8);
      return;
    }
    fn_005db3a4(param_1,iVar4 + 0x7a8);
    return;
  }
  fn_00301f50(auStack_908,0x8d8);
  local_30 = *(undefined4 *)(iVar4 + 0x14);
  fn_00101a50(auStack_908,0x18,*(undefined4 *)(iVar4 + 0xc));
  local_8b0 = fn_00688518(local_30);
  iVar7 = 0;
  cVar1 = *(char *)(DAT_00897840 + 0x34);
  do {
    if (cVar1 == '\x01') {
      iVar5 = fn_00688548(local_30,iVar7);
    }
    else if (cVar1 == '\x02') {
      iVar5 = fn_006885b0(local_30,iVar7);
    }
    else {
      iVar5 = fn_0068857c();
    }
    if ((iVar5 != 0) && (iVar6 = fn_0013add0(), iVar6 != 0)) {
      uVar3 = fn_002ea524(iVar5);
      local_79c[iVar7 * 0x78] = uVar3;
      cVar2 = fn_002ea308(iVar5);
      uVar3 = fn_00660a50((int)cVar2);
      local_79c[iVar7 * 0x78 + 0x14] = uVar3;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 4);
  local_7ec = fn_006884e8(local_30);
  local_3f8 = 0xff;
  if (param_2 == 0) {
    fn_005db3d0(param_1,auStack_908);
  }
  else {
    fn_005db3a4();
  }
  *(undefined1 *)(param_1 + 0xb) = 1;
  fn_002fa42c(iVar4,auStack_908);
  return;
}



undefined4 fn_00252280(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  
  iVar1 = fn_0077f778();
  if (iVar1 != 0) {
    return 0;
  }
  uVar2 = (**(code **)*param_1)(param_1);
  iVar1 = param_1[2];
  if (param_3 == 0) {
    iVar3 = fn_006ce5b8(param_1,param_2);
    if (iVar3 != 0) {
      uVar7 = (**(code **)(*param_1 + 4))(param_1);
      iVar3 = fn_006cb150(iVar1,uVar7);
      if (iVar3 == 2) {
        piVar5 = (int *)fn_006cb164(iVar1,uVar2);
        piVar6 = (int *)fn_006cb164(iVar1,uVar7);
        if ((*piVar5 == *piVar6) && (*piVar5 != 0)) {
          return 1;
        }
      }
    }
  }
  else {
    iVar3 = fn_00443e84();
    if (iVar3 != 0) {
      iVar3 = 0;
      do {
        iVar4 = fn_006ce63c(param_1,iVar3);
        if (iVar4 != 0) {
          iVar4 = fn_006cb150(iVar1,iVar3);
          if (iVar4 != 2) {
            return 0;
          }
          piVar5 = (int *)fn_006cb164(iVar1,uVar2);
          piVar6 = (int *)fn_006cb164(iVar1,iVar3);
          if (*piVar5 != *piVar6) {
            return 0;
          }
          if (*piVar5 == 0) {
            return 0;
          }
        }
        iVar3 = iVar3 + 1;
        if (7 < iVar3) {
          return 1;
        }
      } while( true );
    }
  }
  return 0;
}


