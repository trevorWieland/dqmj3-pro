#include "0043919c_00439c20.h"



void fn_00439c20(int param_1)

{
  char cVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x8c) != 0) {
    cVar1 = *(char *)(*(int *)(param_1 + 0x5c) + 0x31);
    if ((cVar1 == '\x01' || cVar1 == '\x03') || cVar1 == '\x02') {
      *(code **)(param_1 + 0x80) = fn_00439f48;
      *(undefined4 *)(param_1 + 0x84) = 0;
    }
    return;
  }
  iVar2 = fn_006bccf8(*(undefined4 *)(param_1 + 0x94));
  if (iVar2 == 0) {
    *(code **)(param_1 + 0x80) = fn_0043919c;
    *(undefined4 *)(param_1 + 0x84) = 0;
    return;
  }
  fn_00439030(param_1,(char *)&DAT_00439c9c);
  return;
}



void fn_00439b10(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x8c) == 0) {
    uVar2 = fn_0022f584((char *)&DAT_00439bc8,0);
    fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar2,1,1,1,1,0,0,1);
    fn_00689bd0(param_1,0x48,0);
  }
  cVar1 = *(char *)(*(int *)(param_1 + 0x5c) + 0x31);
  if (cVar1 == '\x03') {
    fn_0022735c(*(undefined4 *)(param_1 + 0x94));
    *(code **)(param_1 + 0x80) = fn_00439a30;
    *(undefined4 *)(param_1 + 0x84) = 0;
    return;
  }
  if (cVar1 == '\x02') {
    *(code **)(param_1 + 0x80) = fn_00439f48;
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  return;
}



void fn_00439a30(int param_1)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_18 [12];
  
  if (*(int *)(param_1 + 0x8c) != 0) {
    cVar1 = *(char *)(*(int *)(param_1 + 0x5c) + 0x31);
    if ((cVar1 == '\x01' || cVar1 == '\x03') || cVar1 == '\x02') {
      *(code **)(param_1 + 0x80) = fn_00439f48;
      *(undefined4 *)(param_1 + 0x84) = 0;
    }
    return;
  }
  fn_001237e4(auStack_18);
  iVar2 = fn_006bcf84(*(undefined4 *)(param_1 + 0x94));
  if (iVar2 == 0) {
    iVar2 = fn_006bcde8(*(undefined4 *)(param_1 + 0x94));
    if (iVar2 == 0) {
      *(code **)(param_1 + 0x80) = fn_004396c0;
      *(undefined4 *)(param_1 + 0x84) = 0;
      return;
    }
    fn_002eb84c(*(undefined4 *)(param_1 + 0x94));
  }
  fn_00439030(param_1,(char *)&DAT_00439ae8);
  return;
}



void fn_00439948(int param_1)

{
  if (*(int *)(param_1 + 0x8c) == 0) {
    fn_001296e8(DAT_00897850);
    fn_00439030(param_1,(char *)&DAT_004399b8);
    *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x30) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x51) = 1;
  }
  if (0x2d < *(uint *)(param_1 + 0x8c)) {
    fn_0036c340(*(undefined4 *)(param_1 + 0x5c));
    *(code **)(param_1 + 0x80) = fn_00439f48;
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  return;
}



void fn_00439858(int param_1)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0x8c) == 0) {
    fn_00439030(param_1,(char *)&DAT_004398a4);
  }
  cVar1 = *(char *)(*(int *)(param_1 + 0x5c) + 0x31);
  if ((cVar1 == '\x01' || cVar1 == '\x03') || cVar1 == '\x02') {
    *(code **)(param_1 + 0x80) = fn_00439140;
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  return;
}



void fn_004396c0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x8c) == 0) {
    fn_002e3524(*(undefined4 *)(param_1 + 0x98),4,1);
  }
  iVar1 = fn_002e3564(*(undefined4 *)(param_1 + 0x98));
  if (iVar1 != 0) {
    iVar1 = fn_002e341c();
    if (iVar1 == 0) {
      *(code **)(param_1 + 0x80) = fn_00439458;
      *(undefined4 *)(param_1 + 0x84) = 0;
      return;
    }
    *(code **)(param_1 + 0x80) = fn_00439e58;
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  return;
}



void fn_004395f0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  code *pcVar3;
  
  if (*(int *)(param_1 + 0x8c) == 0) {
    uVar2 = fn_0022f584((char *)&DAT_00439690,0);
    fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar2,1,1,1,1,0,0,1);
    fn_00689bd0(param_1,0x48);
  }
  cVar1 = *(char *)(*(int *)(param_1 + 0x5c) + 0x31);
  if (cVar1 == '\x03') {
    pcVar3 = fn_004397a4;
  }
  else {
    if (cVar1 != '\x02') {
      return;
    }
    pcVar3 = fn_00439f48;
  }
  *(code **)(param_1 + 0x80) = pcVar3;
  *(undefined4 *)(param_1 + 0x84) = 0;
  return;
}



void fn_004397a4(int param_1)

{
  int iVar1;
  
  if (*(uint *)(param_1 + 0x8c) != 0) {
    if (0x95 < *(uint *)(param_1 + 0x8c)) {
      *(code **)(param_1 + 0x80) = fn_004392d0;
      *(undefined4 *)(param_1 + 0x84) = 0;
    }
    return;
  }
  iVar1 = fn_002eb7a4(*(undefined4 *)(param_1 + 0x94));
  if (iVar1 == 0) {
    *(code **)(param_1 + 0x80) = fn_004398d4;
    *(undefined4 *)(param_1 + 0x84) = 0;
    return;
  }
  fn_00439030(param_1,(char *)&DAT_0043982c);
  *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x30) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x51) = 1;
  return;
}



void fn_0043919c(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x8c) == 0) {
    fn_00439030(param_1,(char *)&DAT_004392ac);
    *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x30) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x51) = 1;
    iVar1 = *(int *)(param_1 + 0x94);
    *(undefined1 *)(iVar1 + 0x1c) = 0;
    iVar1 = *(int *)(iVar1 + 0x14);
    *(undefined1 *)(iVar1 + 0x14) = 0;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    *(undefined1 *)(iVar1 + 9) = 0;
    *(undefined1 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(undefined1 *)(iVar1 + 10) = 1;
    *(undefined1 *)(iVar1 + 0x61) = 0;
    fn_00158f6c(iVar1 + 0x62,0x4c);
    return;
  }
  iVar1 = fn_002eb634(*(undefined4 *)(param_1 + 0x94));
  uVar2 = *(uint *)(param_1 + 0x8c);
  iVar3 = fn_006c3c54(iVar1);
  if (iVar3 == 0) {
LAB_00439294:
    *(code **)(param_1 + 0x80) = fn_00439730;
    *(undefined4 *)(param_1 + 0x84) = 0;
    return;
  }
  if ((0x1d < uVar2) && (iVar3 = fn_006c3c7c(iVar1), iVar3 != 0)) {
    iVar3 = fn_006c3c90(iVar1);
    if (iVar3 == 0) {
      iVar3 = fn_006c3c68(iVar1);
      if (iVar3 != 0) {
        fn_0036c340(*(undefined4 *)(param_1 + 0x5c));
        fn_005f3b74(DAT_00897850,*(undefined4 *)(iVar1 + 4));
        *(code **)(param_1 + 0x80) = fn_00439458;
        *(undefined4 *)(param_1 + 0x84) = 0;
        return;
      }
      goto LAB_00439294;
    }
    *(code **)(param_1 + 0x80) = fn_004399e0;
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  return;
}



void fn_004399e0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x8c) == 0) {
    iVar1 = fn_002eb7a4(*(undefined4 *)(param_1 + 0x94));
    if (iVar1 == 0) {
      *(code **)(param_1 + 0x80) = fn_004398d4;
      *(undefined4 *)(param_1 + 0x84) = 0;
      return;
    }
    *(code **)(param_1 + 0x80) = fn_004392d0;
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  return;
}



void fn_004398d4(int param_1)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0x8c) == 0) {
    fn_00439030(param_1,(char *)&DAT_00439920);
  }
  cVar1 = *(char *)(*(int *)(param_1 + 0x5c) + 0x31);
  if ((cVar1 == '\x01' || cVar1 == '\x03') || cVar1 == '\x02') {
    *(code **)(param_1 + 0x80) = fn_00439458;
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  return;
}



void fn_00439730(int param_1)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0x8c) == 0) {
    fn_00439030(param_1,(char *)&DAT_0043977c);
  }
  cVar1 = *(char *)(*(int *)(param_1 + 0x5c) + 0x31);
  if ((cVar1 == '\x01' || cVar1 == '\x03') || cVar1 == '\x02') {
    *(code **)(param_1 + 0x80) = fn_00439458;
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  return;
}



void fn_00439458(int param_1)

{
  fn_002eb950(*(undefined4 *)(param_1 + 0x94));
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  fn_006899f4(param_1,0,0);
  fn_00689930(param_1,0,0);
  fn_00689878(param_1,0);
  fn_001076bc(2);
  fn_005f3c30(2);
  return;
}


