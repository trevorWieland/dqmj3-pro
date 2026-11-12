#include "00503e50_00505728.h"



/* WARNING: Removing unreachable block (ram,0x00505894) */

void fn_00505728(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  
  uVar13 = 0;
  if (*(char *)(param_1 + 0x80) != '\0') {
    uVar7 = 0;
    uVar6 = *(uint *)(param_1 + 0x78);
    iVar11 = *(int *)(param_1 + 0x7c);
    uVar2 = *(uint *)(DAT_008bf49c + 0x30);
    iVar5 = *(int *)(DAT_008bf49c + 0x34);
    cVar1 = *(char *)(*(int *)(param_1 + 0x30) + 0x58);
    if (cVar1 != '\0') {
      if (cVar1 == '\x02') {
        uVar7 = 4;
      }
      else {
        uVar7 = 5;
      }
    }
    iVar9 = *(int *)(param_1 + 0x70);
    uVar8 = (undefined1)*(ushort *)(param_1 + 0x5c);
    if ((*(ushort *)(param_1 + 0x5c) & 0xff) == 0) {
      uVar8 = 0xff;
    }
    if (iVar9 == 0) {
      iVar9 = -1;
    }
    if ((0x3fefffff < *(int *)(DAT_008bf4d4 + 100) - 0x100000U) ||
       (iVar10 = *(int *)(*(int *)(DAT_008bf4d4 + 100) + 0x20), iVar10 == 0)) {
      iVar10 = -1;
    }
    iVar12 = param_1;
    puVar3 = (undefined4 *)fn_004f0ce8();
    DAT_008ee0ac = fn_0011c134(uVar2 - uVar6,iVar5 - (iVar11 + (uint)(uVar2 < uVar6)),*puVar3,
                                puVar3[1],iVar12,uVar13);
    DAT_008ee0b0 = uVar7;
    DAT_008ee0b1 = uVar8;
    DAT_008ee0b4 = iVar9;
    DAT_008ee0b8 = iVar10;
    fn_004fca2c(*(undefined4 *)(param_1 + 0x14));
    if (*(int *)(param_1 + 0x20) - 0x100000U < 0x3ff00000) {
      fn_005014b0();
    }
    if (*(int *)(param_1 + 0x50) != 0) {
      DAT_008ee13c = *(undefined4 *)(*(int *)(param_1 + 0x50) + 0x18);
    }
    fn_004f1208(DAT_008bf49c);
    fn_0051da64(DAT_008bf4d4,0);
    fn_00513384(DAT_008c06a8);
    fn_00514e84(DAT_008bf4d0);
    if ((*(char *)(param_1 + 0xa4) == '\0') &&
       (piVar4 = *(int **)(param_1 + 0x84), piVar4 + -0x40000 < (int *)0x3ff00000)) {
      (**(code **)(*piVar4 + 0x10))(piVar4,2);
    }
  }
  return;
}



undefined8 fn_0050548c(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (*(char *)(param_1 + 0x88) == '\x01') {
    if (DAT_008c0630 != 0) {
      param_2 = 8;
    }
    return CONCAT44(param_2,0xe0e14826);
  }
  if (*(char *)(param_1 + 0x9c) != '\0') {
    fn_004ed13c(param_1 + 0x88);
    *(undefined1 *)(param_1 + 0x9c) = 0;
  }
  uVar1 = fn_00503e50(param_1,param_1 + 0x88);
  uVar2 = uVar1 & 0x80000000;
  if (-1 < (int)uVar2) {
    uVar2 = 2;
    *(undefined1 *)(param_1 + 0x9c) = 2;
  }
  return CONCAT44(uVar2,uVar1);
}



undefined8 fn_00505148(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (*(char *)(param_1 + 0x88) == '\x01') {
    if (DAT_008c0630 != 0) {
      param_2 = 8;
    }
    return CONCAT44(param_2,&DAT_e0a14827);
  }
  if (*(char *)(param_1 + 0x9c) != '\0') {
    fn_004ed13c(param_1 + 0x88);
    *(undefined1 *)(param_1 + 0x9c) = 0;
  }
  uVar1 = fn_00503410(param_1,param_1 + 0x88);
  uVar2 = uVar1 & 0x80000000;
  if (-1 < (int)uVar2) {
    uVar2 = 1;
    *(undefined1 *)(param_1 + 0x9c) = 1;
  }
  return CONCAT44(uVar2,uVar1);
}



/* WARNING: Removing unreachable block (ram,0x00505138) */

int fn_00505114(int param_1)

{
  int iVar1;
  
  iVar1 = fn_004f74e4(*(undefined4 *)(param_1 + 0x4c));
  if (-1 < iVar1) {
    iVar1 = 0;
  }
  return iVar1;
}



undefined8 fn_00504fe0(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (*(char *)(param_1 + 0x88) == '\x01') {
    if (DAT_008c0630 != 0) {
      param_2 = 8;
    }
    return CONCAT44(param_2,&DAT_e0a14827);
  }
  if (*(char *)(param_1 + 0x9c) != '\0') {
    fn_004ed13c(param_1 + 0x88);
    *(undefined1 *)(param_1 + 0x9c) = 0;
  }
  uVar1 = fn_0050697c(param_1,param_1 + 0x88);
  uVar2 = uVar1 & 0x80000000;
  if (-1 < (int)uVar2) {
    uVar2 = 5;
    *(undefined1 *)(param_1 + 0x9c) = 5;
  }
  return CONCAT44(uVar2,uVar1);
}



void fn_00504f0c(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined *local_18;
  undefined1 local_14;
  undefined1 local_13;
  
  fn_0050bc68(DAT_008c0670,1,param_2);
  local_14 = 0;
  local_18 = &DAT_00857044;
  local_13 = (undefined1)param_2;
  iVar1 = fn_0050cc80(DAT_008bf4d4 + 0x10,&local_18);
  if (-1 < iVar1) {
    fn_0051da28(DAT_008bf4d4);
    if (param_2 < 0xc) {
      uVar2 = 1;
      if (param_2 != 0) {
        if ((param_2 & 1) != 0) {
          uVar2 = 2;
        }
        for (uVar3 = param_2 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
          uVar2 = uVar2 << 2;
        }
      }
      iVar1 = *(int *)(param_1 + 0x2c);
      *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) | uVar2;
      if (iVar1 != 0) {
        *(uint *)(iVar1 + 0x58) = uVar2 | *(uint *)(iVar1 + 0x58);
      }
    }
    fn_00505374(param_1,0,param_2);
  }
  return;
}



void fn_00505374(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_28;
  undefined4 local_24;
  
  if (param_2 == 0) {
    iVar1 = fn_0050b080(DAT_008bf4cc,param_3);
    if (iVar1 - 0x100000U < 0x3ff00000) {
      if (*(char *)(DAT_008bf4d4 + 0x80) == '\0') {
        local_28 = 0;
        local_24 = 0;
        fn_006dbbc0(DAT_008bf4d4,&local_28,param_3);
        fn_0051c658(iVar1,local_28,local_24);
      }
      *(undefined1 *)(iVar1 + 0x69) = 1;
    }
  }
  else if ((param_2 == 1) &&
          (iVar1 = fn_0050b080(DAT_008bf4cc,param_3), iVar1 - 0x100000U < 0x3ff00000)) {
    *(undefined1 *)(iVar1 + 0x69) = 0;
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    local_28 = 0;
    local_24 = 0;
    fn_006dbbc0(DAT_008bf4d4,&local_28,param_3);
    (**(code **)(param_1 + 0x38))(param_2,local_28,local_24);
  }
  if (*(int *)(param_1 + 0xa0) != 0) {
    local_28 = (local_28 & ~((unsigned int)0xffff << 0)) | ((unsigned int)(CONCAT11((char)param_3,(char)param_2)) & 0xffff);
    local_24 = 0;
    (**(code **)**(undefined4 **)(param_1 + 0xa0))(*(undefined4 **)(param_1 + 0xa0),&local_28);
  }
  return;
}



undefined8 fn_005047d0(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (*(char *)(param_1 + 0x88) == '\x01') {
    if (DAT_008c0630 != 0) {
      param_2 = 8;
    }
    return CONCAT44(param_2,&DAT_e0a14827);
  }
  if (*(char *)(param_1 + 0x9c) != '\0') {
    fn_004ed13c(param_1 + 0x88);
    *(undefined1 *)(param_1 + 0x9c) = 0;
  }
  uVar1 = fn_00504120(param_1,param_2,param_1 + 0x88);
  uVar2 = uVar1 & 0x80000000;
  if (-1 < (int)uVar2) {
    uVar2 = 4;
    *(undefined1 *)(param_1 + 0x9c) = 4;
  }
  return CONCAT44(uVar2,uVar1);
}



void fn_005040c0(int param_1,uint param_2)

{
  undefined1 local_10;
  undefined1 local_f;
  undefined4 local_c;
  
  if ((*(byte *)(param_1 + 100) != param_2) &&
     (*(char *)(param_1 + 100) = (char)param_2, *(int *)(param_1 + 0xa0) != 0)) {
    if (param_2 == 1) {
      local_10 = 0x11;
    }
    else {
      local_10 = 0x12;
    }
    local_f = 0xfd;
    local_c = 0;
    (**(code **)**(undefined4 **)(param_1 + 0xa0))(*(undefined4 **)(param_1 + 0xa0),&local_10);
  }
  return;
}



longlong fn_00503e50(int param_1,char *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  uint extraout_r1_02;
  uint extraout_r1_03;
  uint uVar3;
  
  puVar2 = &DAT_008c0630;
  if (((undefined4 *)(uint)*(byte *)(param_1 + 99) == (undefined4 *)0xfd) ||
     (puVar2 = (undefined4 *)(uint)*(byte *)(param_1 + 0x62),
     (undefined4 *)(uint)*(byte *)(param_1 + 99) != puVar2)) {
    if (DAT_008c0630 != 0) {
      puVar2 = (undefined4 *)0x8;
    }
  }
  else {
    if ((param_2 == (char *)0x0) || (*param_2 != '\x01')) {
      *(undefined1 *)(param_1 + 0x60) = 0;
      if (*(ushort *)(param_1 + 0x5c) < 2) {
        *(undefined1 *)(param_1 + 0x65) = 2;
        fn_00505734(param_1,2,1);
        uVar3 = extraout_r1_01;
        if (*(char *)(param_1 + 0x81) != '\0') {
          fn_00503ca8(param_1);
          fn_005044fc(param_1);
          fn_0051dc1c(DAT_008bf4d4);
          fn_004ee29c(DAT_008c0638);
          *(undefined1 *)(param_1 + 0x81) = 0;
          uVar3 = extraout_r1_02;
        }
        if (param_2 != (char *)0x0) {
          fn_004ed050(param_2);
          fn_004ed0e4(param_2,0);
          uVar3 = extraout_r1_03;
        }
      }
      else {
        iVar1 = fn_004f8e14(*(undefined4 *)(param_1 + 0x18),param_2,0);
        if (iVar1 == 0) {
          fn_004f8ca4(*(undefined4 *)(param_1 + 0x18),param_2);
          uVar3 = extraout_r1_00;
        }
        else {
          fn_004efcf4(*(undefined4 *)(param_1 + 0x18),0);
          uVar3 = extraout_r1;
        }
      }
      return (ulonglong)uVar3 << 0x20;
    }
    if (DAT_008c0630 != 0) {
      puVar2 = (undefined4 *)0x8;
    }
  }
  return CONCAT44(puVar2,&DAT_e0a14827);
}


