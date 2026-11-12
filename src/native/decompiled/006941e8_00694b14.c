#include "006941e8_00694b14.h"



void fn_00694b14(int param_1)

{
  *(undefined1 *)(param_1 + 0x16c) = 7;
  *(undefined1 *)(param_1 + 0x16e) = 0xff;
  if (*(char *)(param_1 + 0x170) != '\0') {
    fn_00699014(param_1,1);
    *(undefined1 *)(param_1 + 0x170) = 0;
  }
  fn_00699014(param_1,1);
  fn_003b682c(param_1);
  *(code **)(param_1 + 0x178) = fn_006961e0;
  *(undefined4 *)(param_1 + 0x17c) = 0;
  return;
}



void fn_006949f8(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_2[4];
  uVar5 = param_2[5];
  uVar6 = param_2[6];
  uVar7 = param_2[7];
  *(undefined4 *)(param_1 + 0xe0) = *param_2;
  *(undefined4 *)(param_1 + 0xe4) = uVar1;
  *(undefined4 *)(param_1 + 0xe8) = uVar2;
  *(undefined4 *)(param_1 + 0xec) = uVar3;
  *(undefined4 *)(param_1 + 0xf0) = uVar4;
  *(undefined4 *)(param_1 + 0xf4) = uVar5;
  *(undefined4 *)(param_1 + 0xf8) = uVar6;
  *(undefined4 *)(param_1 + 0xfc) = uVar7;
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  uVar3 = param_2[0xb];
  uVar4 = param_2[0xc];
  uVar5 = param_2[0xd];
  *(undefined4 *)(param_1 + 0x100) = param_2[8];
  *(undefined4 *)(param_1 + 0x104) = uVar1;
  *(undefined4 *)(param_1 + 0x108) = uVar2;
  *(undefined4 *)(param_1 + 0x10c) = uVar3;
  *(undefined4 *)(param_1 + 0x110) = uVar4;
  *(undefined4 *)(param_1 + 0x114) = uVar5;
  return;
}



undefined4 fn_00694648(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  bool bVar7;
  undefined1 local_28 [12];
  
  iVar1 = fn_002122c4(*(undefined4 *)(DAT_008977e0 + 0x1c),*(undefined4 *)(param_1 + 0xa8));
  if (iVar1 != 0) {
    fn_002b00ec(*(undefined4 *)(param_1 + 4));
  }
  if ((*(int *)(param_1 + 8) != 0) &&
     (iVar1 = fn_002122f8(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0xa8)),
     iVar1 != 0)) {
    *(undefined1 *)(*(int *)(param_1 + 8) + 0x77) = 1;
  }
  *(undefined1 *)(param_1 + 0x219) = 0;
  if ((*(code **)(param_1 + 0x1b8) != (code *)0x0) &&
     ((**(code **)(param_1 + 0x1b8))(), *(char *)(param_1 + 0x19f) != '\0')) {
    *(undefined4 *)(param_1 + 0x1b8) = 0;
    *(undefined1 *)(param_1 + 0x19f) = 0;
  }
  fn_0023f510(*(undefined4 *)(param_1 + 0x50));
  if (*(int *)(param_1 + 0x21c) == -1) {
    uVar2 = fn_00121838(DAT_00897800,L"rom:/data/Message/FieldMessage.mes",1);
    *(undefined4 *)(param_1 + 0x21c) = uVar2;
  }
  if (*(int *)(param_1 + 0x220) == -1) {
    uVar2 = fn_00121838(DAT_00897800,DAT_008987ac,1);
    *(undefined4 *)(param_1 + 0x220) = uVar2;
  }
  if ((*(int *)(param_1 + 0x28) != 0) && (*(int *)(param_1 + 200) == 0)) {
    fn_002a83b0();
  }
  iVar1 = fn_00145b00(0x14,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_001c6a64();
  }
  uVar2 = fn_002b0148(*(undefined4 *)(param_1 + 4),uVar2);
  *(undefined4 *)(param_1 + 0x80) = uVar2;
  fn_002aff60(*(undefined4 *)(param_1 + 4));
  uVar4 = *(undefined4 *)(param_1 + 8);
  uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x3c);
  uVar2 = fn_00129004();
  fn_00241760(uVar2,uVar4,uVar5);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = fn_00129004();
  fn_002419f4(uVar2,uVar4,0);
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  uVar5 = *(undefined4 *)(param_1 + 0x14);
  uVar2 = fn_00129004();
  fn_002416b4(uVar2,uVar4,uVar5);
  fn_0013af30(DAT_008977d4,
               **(undefined4 **)
                 (*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x98) * 4) + 4))
  ;
  if (*(int *)(param_1 + 0x178) == 0) {
    uVar3 = *(uint *)(param_1 + 0x17c);
    bVar6 = (uVar3 & 1) == 0;
    bVar7 = bVar6 || uVar3 == 0;
    if (bVar6 || uVar3 == 0) {
      bVar7 = *(int *)(param_1 + 200) == 0;
    }
    if (bVar7) {
      uVar2 = fn_001603f8(local_28,0);
      fn_00163988(DAT_00897808,uVar2,0x14);
      uVar2 = fn_001603f8(local_28,0);
      fn_00163988(DAT_0089780c,uVar2,0x14);
      uVar2 = fn_001603f8(local_28,0);
      fn_00163988(DAT_00897810,uVar2,0x14);
      if (*(char *)(param_1 + 0x170) != '\x01') {
        if (*(char *)(param_1 + 0x170) == '\0') {
          fn_00699014(param_1,0);
        }
        *(undefined1 *)(param_1 + 0x170) = 1;
      }
      if (*(char *)(param_1 + 0x228) == '\0') {
        iVar1 = fn_006af880(*(undefined4 *)(DAT_008977e0 + 0x1c),*(undefined4 *)(param_1 + 0x118));
        if (((iVar1 == 0) || (*(char *)(param_1 + 0xac) == '\x05')) ||
           (*(int *)(param_1 + 0x138) != 0)) {
          iVar1 = fn_006af880(*(undefined4 *)(DAT_008977e0 + 0x1c),*(undefined4 *)(param_1 + 0xa8))
          ;
          if ((iVar1 == 0) || (*(int *)(param_1 + 0x138) != 0)) {
            *(code **)(param_1 + 0x178) = fn_00696514;
            *(undefined4 *)(param_1 + 0x17c) = 0;
          }
          else {
            *(code **)(param_1 + 0x178) = fn_00698120;
            *(undefined4 *)(param_1 + 0x17c) = 0;
          }
        }
        else {
          *(code **)(param_1 + 0x178) = fn_0069842c;
          *(undefined4 *)(param_1 + 0x17c) = 0;
        }
      }
      else {
        *(code **)(param_1 + 0x178) = fn_00698ae0;
        *(undefined4 *)(param_1 + 0x17c) = 0;
      }
    }
  }
  fn_00682c24(*(undefined4 *)(param_1 + 0x3c));
  *(undefined1 *)(param_1 + 0x228) = 0;
  *(undefined1 *)(param_1 + 0x229) = 0;
  *(undefined1 *)(param_1 + 0x22a) = 0xff;
  fn_002503cc();
  iVar1 = fn_006f6fc4(*(undefined4 *)(param_1 + 0x40));
  if ((iVar1 != 0) &&
     (iVar1 = fn_006b8e04(*(undefined4 *)(*(int *)(param_1 + 0x40) + 0x10)), iVar1 != 0)) {
    fn_002a676c(*(undefined4 *)(*(int *)(param_1 + 0x40) + 0x10));
  }
  return 1;
}



void fn_006941e8(int param_1,int param_2,int param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  
  pcVar6 = (char *)0x0;
  if (param_2 == 4) {
    pcVar6 = "\x04\x02";
  }
  else if (param_2 == 10) {
    pcVar6 = "\n\x02";
  }
  else if (param_2 == 9) {
    pcVar6 = "\t\x01";
  }
  else if (param_2 == 0xb) {
    pcVar6 = &UNK_007bdf71;
  }
  else if (param_2 == 0xc) {
    pcVar6 = "\f\x01\x01\r\x01\x01\x0e\x01";
  }
  else if (param_2 == 0xd) {
    pcVar6 = "\r\x01\x01\x0e\x01";
  }
  else if (param_2 == 0xe) {
    pcVar6 = "\x0e\x01";
  }
  else if (param_2 == 0xf) {
    pcVar6 = "\x0f\x01\x01\x10\x01";
  }
  else if (param_2 == 0x10) {
    pcVar6 = "\x10\x01";
  }
  else if (param_2 == 0x11) {
    pcVar6 = "\x11\x01";
  }
  else if (param_2 == 1) {
    pcVar6 = "\x01\x01\x01\x12\x01";
  }
  else if (param_2 == 0x12) {
    pcVar6 = "\x12\x01";
  }
  else if (param_2 == 0x13) {
    pcVar6 = "\x13\x02";
  }
  else if (param_2 == 0x14) {
    pcVar6 = "\x14\x02";
  }
  if (pcVar6 == (char *)0x0) {
    pcVar6 = "\x04\x02";
  }
  *(char *)(param_1 + 0x16c) = *pcVar6;
  *(char *)(param_1 + 0x16e) = pcVar6[1];
  if (param_3 == 0) {
    fn_00694a10(param_1);
  }
  else {
    if (pcVar6[2] == '\0') {
      puVar3 = &DAT_007bdf20;
    }
    else {
      puVar3 = &DAT_007bdef8;
    }
    uVar5 = puVar3[1];
    *(undefined4 *)(param_1 + 0x178) = *puVar3;
    *(undefined4 *)(param_1 + 0x17c) = uVar5;
  }
  if (*(char *)(param_1 + 0x170) != '\x01') {
    if (*(char *)(param_1 + 0x170) == '\0') {
      fn_00699014(param_1,0);
    }
    *(undefined1 *)(param_1 + 0x170) = 1;
  }
  fn_003b682c(param_1);
  cVar1 = *pcVar6;
  if ((cVar1 != '\r') &&
     ((((cVar1 == '\t' || cVar1 == '\v' || (cVar1 == '\f' || cVar1 == '\x0e')) ||
       (cVar1 == '\x0f' || cVar1 == '\x10')) ||
      ((cVar1 == '\x11' || cVar1 == '\x01') || cVar1 == '\x12')))) {
    fn_00697124(param_1);
  }
  if (param_2 == 0xd) {
    fn_0069909c(param_1,1);
    iVar4 = DAT_008977e0;
    *(undefined4 *)
     (*(int *)(*(int *)(*(int *)(*(int *)(DAT_008977e0 + 4) + 4) + *(int *)(DAT_008977e0 + 0x60) * 4
                       ) + 4) + 0x3f0) = 0xffffffff;
    fn_00696400(DAT_008977e0,*(undefined4 *)(DAT_008977e0 + 0xa8),0xffffffff,
                 *(int *)(*(int *)(*(int *)(iVar4 + 4) + 4) + *(int *)(iVar4 + 0x90) * 4) + 4);
    return;
  }
  if (param_2 == 10) {
    iVar4 = fn_006afabc(*(undefined4 *)(DAT_008977e0 + 0x1c),*(undefined4 *)(DAT_008977e0 + 0xa8));
    uVar2 = 0;
    if (iVar4 != 0) {
      iVar4 = fn_006c3a70(*(undefined4 *)
                            (*(int *)(*(int *)(*(int *)(DAT_008977e0 + 4) + 4) +
                                     *(int *)(DAT_008977e0 + 0x70) * 4) + 0x30));
      uVar2 = 0;
      if (iVar4 != 0) {
        uVar2 = 1;
      }
    }
    *(undefined1 *)(DAT_0089782c + 0x50c) = uVar2;
  }
  return;
}



void fn_00694a10(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(undefined1 *)(param_1 + 0x16f) = 4;
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 != 0) {
    param_4 = *(int *)(iVar2 + 4);
  }
  if (iVar2 != 0 && param_4 != 0) {
    iVar1 = *(int *)(param_4 + 0xc);
    iVar3 = 0;
    if (iVar1 == iVar2) {
      *(undefined4 *)(param_4 + 0xc) = *(undefined4 *)(iVar2 + 8);
    }
    else {
      iVar3 = iVar1;
      for (iVar1 = *(int *)(iVar1 + 8); iVar1 != iVar2; iVar1 = *(int *)(iVar1 + 8)) {
        iVar3 = iVar1;
      }
      *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar2 + 8);
    }
    if (*(int *)(param_4 + 0x10) == iVar2) {
      *(int *)(param_4 + 0x10) = iVar3;
    }
    *(undefined4 *)(iVar2 + 8) = 0;
    *(undefined4 *)(iVar2 + 4) = 0;
    fn_00143174(*(undefined4 *)(*(int *)(param_1 + 8) + 0x20));
  }
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 != 0) {
    param_4 = *(int *)(iVar2 + 4);
  }
  if (iVar2 != 0 && param_4 != 0) {
    iVar1 = *(int *)(param_4 + 0xc);
    iVar3 = 0;
    if (iVar1 == iVar2) {
      *(undefined4 *)(param_4 + 0xc) = *(undefined4 *)(iVar2 + 8);
    }
    else {
      iVar3 = iVar1;
      for (iVar1 = *(int *)(iVar1 + 8); iVar1 != iVar2; iVar1 = *(int *)(iVar1 + 8)) {
        iVar3 = iVar1;
      }
      *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar2 + 8);
    }
    if (*(int *)(param_4 + 0x10) == iVar2) {
      *(int *)(param_4 + 0x10) = iVar3;
    }
    *(undefined4 *)(iVar2 + 8) = 0;
    *(undefined4 *)(iVar2 + 4) = 0;
    fn_00143174(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x20));
    return;
  }
  return;
}


