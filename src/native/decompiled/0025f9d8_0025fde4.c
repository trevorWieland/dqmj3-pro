#include "0025f9d8_0025fde4.h"



int fn_0025fde4(undefined4 *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  bool bVar5;
  
  bVar5 = SCARRY4((int)param_1,1);
  iVar1 = (int)param_1 + 1;
  bVar4 = param_1 == (undefined4 *)0xffffffff;
  puVar3 = &DAT_008bf668;
  if (param_1 < (undefined4 *)0x80000000) {
    puVar3 = DAT_008bf66c;
  }
  if (-1 < (int)param_1) {
    bVar5 = SBORROW4((int)puVar3,(int)param_1);
    iVar1 = (int)puVar3 - (int)param_1;
    bVar4 = puVar3 == param_1;
  }
  iVar2 = DAT_008bf668;
  if (!bVar4 && iVar1 < 0 == bVar5) {
    iVar2 = DAT_008bf668 + (int)param_1 * 0x20;
  }
  if ((-1 < (int)param_2) && (param_2 < 5)) {
    iVar2 = iVar2 + param_2 * 4;
  }
  return (int)*(short *)(iVar2 + 10);
}



int fn_0025fdc0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  bool bVar5;
  
  bVar5 = SCARRY4((int)param_1,1);
  iVar2 = (int)param_1 + 1;
  bVar4 = param_1 == (undefined4 *)0xffffffff;
  puVar3 = &DAT_008bf668;
  if (param_1 < (undefined4 *)0x80000000) {
    puVar3 = DAT_008bf66c;
  }
  if (-1 < (int)param_1) {
    bVar5 = SBORROW4((int)puVar3,(int)param_1);
    iVar2 = (int)puVar3 - (int)param_1;
    bVar4 = puVar3 == param_1;
  }
  iVar1 = DAT_008bf668;
  if (!bVar4 && iVar2 < 0 == bVar5) {
    iVar1 = DAT_008bf668 + (int)param_1 * 0x20;
  }
  iVar1 = (int)*(short *)(iVar1 + 0x1c);
  iVar2 = DAT_008bf670;
  if ((-1 < iVar1) && (iVar1 < DAT_008bf674)) {
    iVar2 = DAT_008bf670 + iVar1 * 8;
  }
  return (int)*(short *)(iVar2 + 4);
}



int fn_0025fd9c(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  bool bVar5;
  
  bVar5 = SCARRY4((int)param_1,1);
  iVar2 = (int)param_1 + 1;
  bVar4 = param_1 == (undefined4 *)0xffffffff;
  puVar3 = &DAT_008bf668;
  if (param_1 < (undefined4 *)0x80000000) {
    puVar3 = DAT_008bf66c;
  }
  if (-1 < (int)param_1) {
    bVar5 = SBORROW4((int)puVar3,(int)param_1);
    iVar2 = (int)puVar3 - (int)param_1;
    bVar4 = puVar3 == param_1;
  }
  iVar1 = DAT_008bf668;
  if (!bVar4 && iVar2 < 0 == bVar5) {
    iVar1 = DAT_008bf668 + (int)param_1 * 0x20;
  }
  iVar1 = (int)*(short *)(iVar1 + 0x1c);
  iVar2 = DAT_008bf670;
  if ((-1 < iVar1) && (iVar1 < DAT_008bf674)) {
    iVar2 = DAT_008bf670 + iVar1 * 8;
  }
  return (int)*(short *)(iVar2 + 2);
}



int fn_0025fd78(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  bool bVar5;
  
  bVar5 = SCARRY4((int)param_1,1);
  iVar1 = (int)param_1 + 1;
  bVar4 = param_1 == (undefined4 *)0xffffffff;
  puVar3 = &DAT_008bf668;
  if (param_1 < (undefined4 *)0x80000000) {
    puVar3 = DAT_008bf66c;
  }
  if (-1 < (int)param_1) {
    bVar5 = SBORROW4((int)puVar3,(int)param_1);
    iVar1 = (int)puVar3 - (int)param_1;
    bVar4 = puVar3 == param_1;
  }
  iVar2 = DAT_008bf668;
  if (!bVar4 && iVar1 < 0 == bVar5) {
    iVar2 = DAT_008bf668 + (int)param_1 * 0x20;
  }
  return (int)*(short *)(iVar2 + 6);
}



int fn_0025fd54(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  bool bVar5;
  
  bVar5 = SCARRY4((int)param_1,1);
  iVar2 = (int)param_1 + 1;
  bVar4 = param_1 == (undefined4 *)0xffffffff;
  puVar3 = &DAT_008bf668;
  if (param_1 < (undefined4 *)0x80000000) {
    puVar3 = DAT_008bf66c;
  }
  if (-1 < (int)param_1) {
    bVar5 = SBORROW4((int)puVar3,(int)param_1);
    iVar2 = (int)puVar3 - (int)param_1;
    bVar4 = puVar3 == param_1;
  }
  iVar1 = DAT_008bf668;
  if (!bVar4 && iVar2 < 0 == bVar5) {
    iVar1 = DAT_008bf668 + (int)param_1 * 0x20;
  }
  iVar1 = (int)*(short *)(iVar1 + 0x1c);
  iVar2 = DAT_008bf670;
  if ((-1 < iVar1) && (iVar1 < DAT_008bf674)) {
    iVar2 = DAT_008bf670 + iVar1 * 8;
  }
  return (int)*(short *)(iVar2 + 6);
}



undefined4 fn_0025fcc0(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  
  if (((param_1 == 0) || (param_4 < (int)(uint)(param_3 == 0))) ||
     (iVar1 = fn_00147e6c(param_1,&DAT_0025fd48), iVar1 != 0)) {
    DAT_008bf668 = 0;
  }
  else {
    DAT_008bf668 = param_1 + 4;
  }
  if ((param_3 - 4 & 0x1f) != 0) {
    DAT_008bf668 = 0;
  }
  if ((int)-(param_4 + (uint)(4 < param_3)) < 0 ==
      (SBORROW4(0,param_4) != SBORROW4(-param_4,(uint)(4 < param_3)))) {
    DAT_008bf66c = 0;
  }
  else {
    DAT_008bf66c = fn_0011c134(param_3 - 4,param_4 - (uint)(param_3 < 4),0x20,0);
  }
  return 1;
}



void fn_0025fc8c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00676150();
  *puVar1 = &DAT_0081ddfc;
  *(undefined1 *)(puVar1 + 4) = 0;
  *(undefined1 *)((int)puVar1 + 0x11) = 0;
  return;
}



void fn_0025fbf0(int param_1)

{
  *(undefined1 *)(*(int *)(param_1 + 4) + 0x10) = 1;
  return;
}



undefined4 * fn_0025fbc8(undefined4 *param_1)

{
  *param_1 = &DAT_0081ddd8;
  fn_00675f54(param_1[1],param_1);
  return param_1;
}



undefined4 * fn_0025fb98(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = &DAT_0081ddd8;
  param_1[1] = param_2;
  param_1[2] = param_3;
  fn_00675d74(param_2,param_1);
  return param_1;
}



void fn_0025fb7c(undefined4 *param_1)

{
  param_1[1] = 0xffffffff;
  *param_1 = &DAT_00851a30;
  param_1[2] = 0xffffffff;
  return;
}



void fn_0025fafc(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *param_1 = &DAT_0081ddc8;
  puVar3 = (undefined4 *)param_1[3];
  while (puVar2 = puVar3, puVar2 != param_1 + 3) {
    puVar3 = (undefined4 *)*puVar2;
    for (iVar1 = puVar2[-3]; 0 < iVar1; iVar1 = iVar1 + -1) {
      fn_001218f8(param_1,puVar2 + -4);
    }
  }
  fn_002feef8(param_1);
  return;
}



void fn_0025facc(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == -1) {
    return;
  }
  iVar1 = fn_007461f4(param_1,param_1 + 8,param_2);
  fn_00148c5c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(iVar1 + 8));
  return;
}



bool fn_0025fa84(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = fn_007461f4(param_1,param_1 + 8,param_2);
  cVar1 = *(char *)(param_1 + 0x958);
  iVar3 = fn_00188184(param_1,uVar2,param_3,1);
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0x958) = 1;
  }
  return iVar3 != 0;
}



void fn_0025fa58(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == -1) {
    return;
  }
  uVar1 = fn_007461f4(param_1,param_1 + 8,param_2);
  fn_001218f8(param_1,uVar1);
  return;
}



void fn_0025fa24(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  do {
    fn_00158f6c(param_1 + iVar1 * 0x40 + 0x18,0x40);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 5);
  return;
}



int fn_0025f9d8(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == -1) {
    return 0;
  }
  uVar1 = fn_007461f4(param_1,param_1 + 8,param_2);
  iVar2 = fn_00188184(param_1,uVar1,param_3,0);
  if (iVar2 == 0) {
    iVar2 = DAT_00898200;
  }
  return iVar2;
}


