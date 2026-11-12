#include "0039c438_003a5bbc.h"



void fn_003a5bbc(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  *(char *)(param_1 + 0x80) = (char)param_2;
  if (param_3 == 0) {
    return;
  }
  switch(param_2) {
  case 0:
    fn_0025e31c(*(undefined4 *)(param_1 + 200),1);
    fn_0025e4dc(*(undefined4 *)(param_1 + 200),1);
    fn_0025e4dc(*(undefined4 *)(param_1 + 0xcc),0);
    fn_0025e4dc(*(undefined4 *)(param_1 + 0xd0),0);
    return;
  case 1:
    fn_0025e31c(*(undefined4 *)(param_1 + 200),1);
    fn_0025e31c(*(undefined4 *)(param_1 + 0xcc),0);
    fn_0025e31c(*(undefined4 *)(param_1 + 0xd0),0);
    fn_0025e4dc(*(undefined4 *)(param_1 + 200),0);
    fn_0025e4dc(*(undefined4 *)(param_1 + 0xcc),1);
    fn_0025e4dc(*(undefined4 *)(param_1 + 0xd0),1);
    return;
  case 2:
    fn_0025e31c(*(undefined4 *)(param_1 + 200),1);
    fn_0025e31c(*(undefined4 *)(param_1 + 0xd0),0);
    fn_0025e4dc(*(undefined4 *)(param_1 + 200),1);
    fn_0025e4dc(*(undefined4 *)(param_1 + 0xd0),1);
    uVar1 = (uint)*(byte *)(param_1 + 0x7c);
    if ((uint)(*(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x98) >> 2) <= uVar1) {
      fn_002ff628(9,&DAT_008c760b,&DAT_008c760b,uVar1);
    }
    if ((((*(byte *)(**(int **)(*(int *)(param_1 + 0x98) + uVar1 * 4) + 0x44) & 1) != 0) ||
        (*(char *)(*(int *)(param_1 + 0x100) + (uint)*(byte *)(param_1 + 0x7c)) != '\x02')) ||
       (*(char *)(param_1 + 0xe3) == '\0')) {
      fn_0025e31c(*(undefined4 *)(param_1 + 0xcc),1);
      fn_0025e4dc(*(undefined4 *)(param_1 + 0xcc),1);
      return;
    }
    iVar2 = 0x10;
    if (*(char *)(param_1 + 0x83) != '\0') {
      do {
        uVar3 = (uint)(char)((char)iVar2 + -0x10);
        uVar1 = *(int *)(param_1 + 0xd8) - *(int *)(param_1 + 0xd4) >> 2;
        if (uVar1 <= uVar3) {
          fn_002ff628(9,&DAT_008c764d,&DAT_008c764d,uVar3,uVar1);
        }
        fn_0025e4dc(*(undefined4 *)(*(int *)(param_1 + 0xd4) + uVar3 * 4),1);
        iVar2 = (int)(char)((char)iVar2 + '\x01');
      } while (iVar2 + -0x10 < (int)(uint)*(byte *)(param_1 + 0x83));
    }
    break;
  case 3:
    fn_0025e31c(*(undefined4 *)(param_1 + 200),1);
    fn_0025e31c(*(undefined4 *)(param_1 + 0xcc),0);
    fn_0025e31c(*(undefined4 *)(param_1 + 0xd0),0);
    fn_0025e4dc(*(undefined4 *)(param_1 + 200),1);
    fn_0025e4dc(*(undefined4 *)(param_1 + 0xcc),1);
    fn_0025e4dc(*(undefined4 *)(param_1 + 0xd0),1);
    return;
  case 4:
    fn_0025e31c(*(undefined4 *)(param_1 + 0xcc),1);
    fn_0025e31c(*(undefined4 *)(param_1 + 0xd0),0);
    fn_0025e4dc(*(undefined4 *)(param_1 + 200),1);
    fn_0025e4dc(*(undefined4 *)(param_1 + 0xd0),1);
    uVar1 = (uint)*(byte *)(param_1 + 0x7c);
    if ((uint)(*(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x98) >> 2) <= uVar1) {
      fn_002ff628(9,&DAT_008c760b,&DAT_008c760b,uVar1);
    }
    if ((((*(byte *)(**(int **)(*(int *)(param_1 + 0x98) + uVar1 * 4) + 0x44) & 1) != 0) ||
        (*(char *)(*(int *)(param_1 + 0x100) + (uint)*(byte *)(param_1 + 0x7c)) != '\x02')) ||
       (*(char *)(param_1 + 0xe3) == '\0')) {
      fn_0025e4dc(*(undefined4 *)(param_1 + 0xcc),0);
      return;
    }
    iVar2 = 0x10;
    if (*(char *)(param_1 + 0x83) != '\0') {
      do {
        uVar3 = (uint)(char)((char)iVar2 + -0x10);
        uVar1 = *(int *)(param_1 + 0xd8) - *(int *)(param_1 + 0xd4) >> 2;
        if (uVar1 <= uVar3) {
          fn_002ff628(9,&DAT_008c764d,&DAT_008c764d,uVar3,uVar1);
        }
        fn_0025e4dc(*(undefined4 *)(*(int *)(param_1 + 0xd4) + uVar3 * 4),0);
        iVar2 = (int)(char)((char)iVar2 + '\x01');
      } while (iVar2 + -0x10 < (int)(uint)*(byte *)(param_1 + 0x83));
      return;
    }
    break;
  case 5:
    fn_0025e31c(*(undefined4 *)(param_1 + 0xd0),1);
    fn_0025e4dc(*(undefined4 *)(param_1 + 200),1);
    fn_0025e4dc(*(undefined4 *)(param_1 + 0xcc),1);
    fn_0025e4dc(*(undefined4 *)(param_1 + 0xd0),0);
    return;
  case 6:
    fn_0025e31c(*(undefined4 *)(param_1 + 0xd0),1);
    fn_0025e4dc(*(undefined4 *)(param_1 + 200),0);
    fn_0025e4dc(*(undefined4 *)(param_1 + 0xcc),0);
    fn_0025e4dc(*(undefined4 *)(param_1 + 0xd0),0);
    return;
  }
  return;
}



void fn_003a563c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_1c [4];
  
  switch(param_2) {
  case 0:
    uVar2 = fn_0022eefc(0x8fd,0);
    fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar2,1,0,1,1,0,0,1);
    *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x38) = 0;
    break;
  case 1:
    uVar2 = fn_0022eefc(0x8fc,0);
    fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar2,1,0,1,1,0,0,1);
    *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x38) = 0;
    break;
  case 2:
    uVar2 = fn_0022eefc(0x8fe,0);
    fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar2,1,0,1,1,0,0,1);
    *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x38) = 0;
    break;
  case 3:
    local_1c[0] = 0x20;
    uVar2 = fn_00182988(DAT_008977e4);
    iVar1 = fn_0026a558(uVar2,local_1c);
    fn_0015b0dc(iVar1 + 0x1e);
    local_1c[0] = 0x21;
    uVar2 = fn_00182988(DAT_008977e4);
    iVar1 = fn_0026a558(uVar2,local_1c);
    fn_0015b0dc(iVar1 + 0x1e);
    uVar2 = fn_0022f584((char *)&DAT_003a58a8,0);
    fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar2,1,0,1,1,1,0,0);
    *(undefined1 *)(*(int *)(param_1 + 0xf4) + 0x30) = 0;
    fn_00689bd0(param_1,0xd6,0);
    return;
  case 4:
    uVar2 = fn_0022eefc(0x8ff,0);
    fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar2,1,0,1,1,0,0,1);
    *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x38) = 0;
    break;
  case 5:
    uVar2 = fn_0022eefc(0x900,0);
    fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar2,1,0,1,1,0,0,1);
    *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x38) = 0;
  }
  fn_00689bd0(param_1,0x48,0);
  return;
}



void fn_003a3f30(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 1;
  param_1[8] = 0xffffffff;
  *(undefined1 *)(param_1 + 9) = 0xff;
  return;
}



void fn_003a1e54(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0017b9b4(param_1,param_3,param_4);
  puVar1[8] = param_2;
  *(undefined1 *)(puVar1 + 9) = param_5;
  *puVar1 = &DAT_0082da34;
  return;
}



undefined4 fn_003a0774(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 auStack_30 [32];
  
  uVar2 = fn_001481c8(*(undefined4 *)(param_1 + 100),
                       L"rom:/data/Layout/menu/wifi_ranking_gcup/upper/gcup_title.arc",&DAT_003a09bc
                       ,1,1);
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  uVar2 = fn_001480d0(*(undefined4 *)(param_1 + 100),uVar2,(char *)&DAT_003a09c8,&DAT_003a09c4,0,1,0);
  *(undefined4 *)(param_1 + 0x6c) = uVar2;
  uVar2 = fn_00178f9c(*(undefined4 *)(param_1 + 100),uVar2);
  iVar5 = DAT_0089783c + 0xaa;
  uVar3 = fn_001827b0(uVar2,(char *)&DAT_003a09e0);
  fn_00190d50(uVar3,iVar5);
  fn_001028d4(auStack_30,(char *)&DAT_003a09ec,*(byte *)(DAT_0089783c + 0xce) + 1,
               *(byte *)(DAT_0089783c + 0xcf) + 1);
  uVar3 = fn_0022f750(auStack_30);
  uVar4 = fn_001827b0(uVar2,(char *)&DAT_003a09fc);
  fn_00190d50(uVar4,uVar3);
  cVar1 = *(char *)(DAT_0089783c + 0xd0);
  if (cVar1 == '\0') {
    uVar3 = fn_0022f750((char *)&DAT_003a0a0c);
    uVar4 = fn_001827b0(uVar2,(char *)&DAT_003a0a24);
    fn_00190d50(uVar4,uVar3);
  }
  else if (cVar1 == '\x01') {
    uVar3 = fn_0022f750((char *)&DAT_003a0a34);
    uVar4 = fn_001827b0(uVar2,(char *)&DAT_003a0a24);
    fn_00190d50(uVar4,uVar3);
  }
  else if (cVar1 == '\x02') {
    uVar3 = fn_0022f750((char *)&DAT_003a0a54);
    uVar4 = fn_001827b0(uVar2,(char *)&DAT_003a0a24);
    fn_00190d50(uVar4,uVar3);
  }
  iVar5 = fn_002962d0(DAT_0089783c + 0x3c);
  if (iVar5 == 0) {
    uVar3 = fn_0022f750((char *)&DAT_003a0a94);
    uVar4 = fn_001827b0(uVar2,(char *)&DAT_003a0a84);
    fn_00190d50(uVar4,uVar3);
  }
  else {
    uVar3 = fn_0022f750((char *)&DAT_003a0a6c);
    uVar4 = fn_001827b0(uVar2,(char *)&DAT_003a0a84);
    fn_00190d50(uVar4,uVar3);
  }
  uVar3 = fn_0029650c(*(undefined1 *)(DAT_0089783c + 0xcc));
  uVar4 = fn_001827b0(uVar2,(char *)&DAT_003a0aac);
  fn_00190d50(uVar4,uVar3);
  iVar5 = fn_002962e0(DAT_0089783c + 0x3c);
  if (iVar5 == 0) {
    uVar3 = fn_0022f750(&DAT_003a0b70);
    uVar4 = fn_001827b0(uVar2,(char *)&DAT_003a0ac0);
    fn_00190d50(uVar4,uVar3);
  }
  else {
    uVar3 = fn_0022f750(&DAT_003a0abc);
    uVar4 = fn_001827b0(uVar2,(char *)&DAT_003a0ac0);
    fn_00190d50(uVar4,uVar3);
  }
  iVar5 = fn_00689220(uVar2,(char *)&DAT_003a0b78);
  if ((iVar5 != 0) && (iVar5 = fn_00689210(iVar5,(char *)&DAT_003a0b84), iVar5 != 0)) {
    *(byte *)(iVar5 + 0x44) = *(byte *)(iVar5 + 0x44) & 0xfe;
  }
  uVar2 = fn_00172c98(uVar2,(char *)&DAT_003a0b78);
  iVar5 = fn_0068897c(uVar2,(char *)&DAT_003a0b94);
  if (iVar5 != 0) {
    uVar2 = fn_0022f750((char *)&DAT_003a0ba0);
    fn_00190d50(iVar5,uVar2);
  }
  return 1;
}



void fn_0039e364(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x002c3dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x130))();
  return;
}



undefined1 * fn_0039e2d0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  undefined1 auStack_10 [8];
  
  fn_0020bbc4(auStack_10,*(undefined4 *)(param_1[0x39] + 8));
  uVar1 = fn_00660d60((int)*(short *)(param_1[0x39] + 0x10));
  iVar2 = fn_006aed48(auStack_10,uVar1);
  if (iVar2 == 0) {
    pcVar3 = (char *)&DAT_0039e350;
  }
  else {
    pcVar3 = (char *)&DAT_0039e344;
  }
  uVar1 = fn_0022f750(pcVar3);
  (**(code **)(*param_1 + 0x13c))(param_1,1,1,uVar1);
  return auStack_10;
}



void fn_0039c930(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar1 = fn_0032d6f4((int)*(short *)(param_1 + 0xa8));
  uVar4 = *(uint *)(iVar1 + 0x1c);
  uVar2 = fn_003c1ba8();
  iVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x6c));
  uVar3 = fn_0068897c(*(undefined4 *)(iVar1 + 0x10),(char *)&DAT_0039cb38);
  fn_00190d50(uVar3,uVar2);
  uVar2 = fn_003c1b48();
  iVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x6c));
  uVar3 = fn_0068897c(*(undefined4 *)(iVar1 + 0x10),(char *)&DAT_0039cb48);
  fn_00190d50(uVar3,uVar2);
  uVar2 = fn_003c1c08();
  iVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x6c));
  uVar3 = fn_0068897c(*(undefined4 *)(iVar1 + 0x10),(char *)&DAT_0039cb5c);
  fn_00190d50(uVar3,uVar2);
  uVar2 = fn_003c1ae8();
  iVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x6c));
  uVar3 = fn_0068897c(*(undefined4 *)(iVar1 + 0x10),(char *)&DAT_0039cb70);
  fn_00190d50(uVar3,uVar2);
  uVar2 = fn_003c1c68(uVar4 & 0xff);
  iVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x6c));
  uVar3 = fn_0068897c(*(undefined4 *)(iVar1 + 0x10),(char *)&DAT_0039cb80);
  fn_00190d50(uVar3,uVar2);
  uVar2 = fn_003c1ab0((uVar4 & 0xffff) >> 8);
  iVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x6c));
  uVar3 = fn_0068897c(*(undefined4 *)(iVar1 + 0x10),(char *)&DAT_0039cb90);
  fn_00190d50(uVar3,uVar2);
  uVar2 = fn_003c1ca0();
  iVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x6c));
  uVar3 = fn_0068897c(*(undefined4 *)(iVar1 + 0x10),(char *)&DAT_0039cba4);
  fn_00190d50(uVar3,uVar2);
  iVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x6c));
  uVar2 = fn_0068897c(*(undefined4 *)(iVar1 + 0x10),(char *)&DAT_0039cbbc);
  uVar3 = fn_00230d70((int)uVar4 >> 0x18);
  fn_00190d50(uVar2,uVar3);
  iVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x6c));
  uVar2 = fn_0068897c(*(undefined4 *)(iVar1 + 0x10),(char *)&DAT_0039cbd0);
  uVar3 = fn_00230d70((int)(uVar4 << 8) >> 0x18);
  fn_00190d50(uVar2,uVar3);
  return;
}



void fn_0039c438(int param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined1 auStack_50 [68];
  
  iVar1 = *(int *)(param_1 + 0x9c);
  if (*(char *)(iVar1 + 0x7c) == '\0') {
    puVar2 = &DAT_0039c494;
  }
  else {
    puVar2 = (undefined *)fn_0022f584((char *)&DAT_0039c498,0);
  }
  fn_00101a50(auStack_50,0x40,L"%ls%ls",puVar2,iVar1 + 0x1c);
  fn_00385b60(param_1,auStack_50);
  return;
}


