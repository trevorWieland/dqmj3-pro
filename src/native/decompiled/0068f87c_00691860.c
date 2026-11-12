#include "0068f87c_00691860.h"



undefined1 fn_00691860(int param_1)

{
  return *(undefined1 *)(DAT_008994a4 + param_1 * 0x60 + 0x22);
}



void fn_006917f4(void)

{
  DAT_00899e9c = 0;
  DAT_00899ea0 = 0;
  return;
}



undefined4 fn_006916e4(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (((param_1 == 0) || (param_4 < (int)(uint)(param_3 == 0))) ||
     (iVar1 = fn_00147e6c(param_1,&DAT_00691768,4), iVar1 != 0)) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 4;
  }
  iVar1 = 0x32;
  iVar2 = 0;
  DAT_00899ea0 = fn_0011c134(param_3 - 4,param_4 - (uint)(param_3 < 4));
  if (iVar1 != 0 || iVar2 != 0) {
    param_1 = 0;
  }
  if ((int)-(param_4 + (uint)(4 < param_3)) < 0 ==
      (SBORROW4(0,param_4) != SBORROW4(-param_4,(uint)(4 < param_3)))) {
    DAT_00899ea0 = 0;
  }
  DAT_00899e9c = param_1;
  return 1;
}



void fn_006915dc(int *param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  
  uVar2 = (ulonglong)param_3 * 1000000;
  uVar6 = param_4 * 1000000 + (int)(uVar2 >> 0x20);
  iVar1 = (int)uVar6 >> 0x1f;
  lVar4 = (ulonglong)uVar6 * 0xd7b634db +
          CONCAT44(iVar1 * -0x2849cb25,(int)((uVar2 & 0xffffffff) * 0xd7b634db >> 0x20));
  uVar8 = (uint)((ulonglong)lVar4 >> 0x20);
  uVar9 = (uint)((ulonglong)uVar6 * 0x431bde82);
  lVar3 = (uVar2 & 0xffffffff) * 0x431bde82;
  uVar5 = (int)((ulonglong)lVar3 >> 0x20) + (uint)CARRY4((uint)lVar3,(uint)lVar4);
  iVar7 = ((int)uVar5 >> 0x1f) + ((int)uVar8 >> 0x1f) + (uint)CARRY4(uVar5,uVar8) +
          iVar1 * 0x431bde82 + (int)((ulonglong)uVar6 * 0x431bde82 >> 0x20) +
          (uint)CARRY4(uVar5 + uVar8,uVar9);
  uVar5 = uVar5 + uVar8 + uVar9 >> 0x12 | iVar7 * 0x4000;
  uVar6 = uVar5 + -iVar1;
  bVar10 = CARRY4(uVar6,DAT_0089a638);
  iVar1 = (iVar7 >> 0x12) + (uint)CARRY4(uVar5,-iVar1) + DAT_0089a63c;
  *param_1 = uVar6 + DAT_0089a638;
  param_1[1] = iVar1 + (uint)bVar10;
  return;
}



undefined8 fn_00691514(uint *param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  uVar2 = (ulonglong)(*param_1 - DAT_0089a638) * 1000000;
  uVar5 = (param_1[1] - (DAT_0089a63c + (uint)(*param_1 < DAT_0089a638))) * 1000000 +
          (int)(uVar2 >> 0x20);
  iVar1 = (int)uVar5 >> 0x1f;
  lVar4 = (ulonglong)uVar5 * 0xd7b634db +
          CONCAT44(iVar1 * -0x2849cb25,(int)((uVar2 & 0xffffffff) * 0xd7b634db >> 0x20));
  uVar8 = (uint)((ulonglong)lVar4 >> 0x20);
  uVar9 = (uint)((ulonglong)uVar5 * 0x431bde82);
  lVar3 = (uVar2 & 0xffffffff) * 0x431bde82;
  uVar6 = (int)((ulonglong)lVar3 >> 0x20) + (uint)CARRY4((uint)lVar3,(uint)lVar4);
  iVar7 = iVar1 * 0x431bde82 + (int)((ulonglong)uVar5 * 0x431bde82 >> 0x20) +
          ((int)uVar6 >> 0x1f) + ((int)uVar8 >> 0x1f) + (uint)CARRY4(uVar6,uVar8) +
          (uint)CARRY4(uVar9,uVar6 + uVar8);
  uVar5 = uVar9 + uVar6 + uVar8 >> 0x12 | iVar7 * 0x4000;
  return CONCAT44((iVar7 >> 0x12) + (uint)CARRY4(uVar5,-iVar1),uVar5 + -iVar1);
}



void fn_006914ec(void)

{
  DAT_008d1880 = 0;
  DAT_008d1884 = 0;
  DAT_008d1888 = 0;
  DAT_00899e98 = 0;
  return;
}



undefined4 fn_006914c4(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 1) || (DAT_00899e98 <= param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



uint fn_00690d50(int param_1)

{
  return (*(byte *)(DAT_008d1888 + param_1 * 0x10) & 7) >> 2;
}



undefined4 fn_00690bd4(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (((param_1 == 0) || (param_4 < (int)(uint)(param_3 == 0))) ||
     (iVar1 = fn_00147e6c(param_1,&DAT_00690c34,4), iVar1 != 0)) {
    DAT_008d1888 = 0;
  }
  else {
    DAT_008d1888 = param_1 + 4;
  }
  if ((param_3 - 4U & 0xf) != 0) {
    DAT_008d1888 = 0;
  }
  return 1;
}



undefined4 fn_0069084c(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (((param_1 == 0) || (param_4 < (int)(uint)(param_3 == 0))) ||
     (iVar1 = fn_00147e6c(param_1,&DAT_006908ac,4), iVar1 != 0)) {
    DAT_008d1884 = 0;
  }
  else {
    DAT_008d1884 = param_1 + 4;
  }
  if ((param_3 - 4U & 0xf) != 0) {
    DAT_008d1884 = 0;
  }
  return 1;
}



undefined4 fn_00690474(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (((param_1 == 0) || (param_4 < (int)(uint)(param_3 == 0))) ||
     (iVar1 = fn_00147e6c(param_1,&DAT_006904fc,4), iVar1 != 0)) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 4;
  }
  iVar1 = 0x3c;
  iVar2 = 0;
  DAT_00899e98 = fn_0011c134(param_3 - 4,param_4 - (uint)(param_3 < 4));
  if (iVar1 != 0 || iVar2 != 0) {
    param_1 = 0;
  }
  DAT_008d1880 = param_1;
  if ((int)-(param_4 + (uint)(4 < param_3)) < 0 ==
      (SBORROW4(0,param_4) != SBORROW4(-param_4,(uint)(4 < param_3)))) {
    DAT_00899e98 = 0;
  }
  return 1;
}



undefined4 fn_0068fea8(int param_1,int param_2)

{
  char cVar1;
  
  if (*(char *)(DAT_008d1880 + param_1 * 0x3c + 0x13) == '\0') {
    return 0;
  }
  cVar1 = *(char *)(DAT_008d1880 + param_1 * 0x3c + 0x11);
  if (cVar1 != '\x01') {
    if (cVar1 == '\x02') {
      if (param_2 < 1) {
        return 0;
      }
      return 1;
    }
    if (cVar1 != '\x03') {
      return 0;
    }
  }
  if (param_2 == 0) {
    return 0;
  }
  return 1;
}



undefined4 fn_0068fd00(int param_1,int param_2)

{
  char cVar1;
  
  if (*(char *)(DAT_008d1880 + param_1 * 0x3c + 0x14) == '\0') {
    return 0;
  }
  cVar1 = *(char *)(DAT_008d1880 + param_1 * 0x3c + 0x11);
  if (cVar1 != '\x01') {
    if (cVar1 == '\x02') {
      if (param_2 < 0) {
        return 1;
      }
      return 0;
    }
    if (cVar1 != '\x03') {
      return 0;
    }
  }
  if (param_2 == 0) {
    return 0;
  }
  return 1;
}



int fn_0068fce0(int param_1)

{
  return (int)*(char *)(DAT_008d1880 + param_1 * 0x3c + 0x14);
}



uint fn_0068fca0(int param_1)

{
  return (*(byte *)(DAT_008d1888 + param_1 * 0x10) & 3) >> 1;
}



int fn_0068fbdc(int param_1)

{
  return (int)*(char *)(DAT_008d1880 + param_1 * 0x3c + 0x10);
}



int fn_0068fae0(int param_1)

{
  return (int)*(char *)(DAT_008d1880 + param_1 * 0x3c + 0x12);
}



undefined4 fn_0068f8dc(int param_1)

{
  return *(undefined4 *)(DAT_008d1880 + param_1 * 0x3c + 8);
}



int fn_0068f87c(int param_1,int param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(DAT_008d1880 + param_1 * 0x3c + 0x11);
  if (cVar1 == '\x01' || cVar1 == '\x02') {
    if (param_2 < 0) {
      cVar1 = '\x03';
    }
    if (param_2 < 1) goto LAB_0068f8b0;
  }
  else {
    if (cVar1 != '\x03') {
      if (cVar1 != '\x04') {
        cVar1 = '\0';
      }
      goto LAB_0068f8b0;
    }
    if (-1 < param_2) goto LAB_0068f8b0;
  }
  cVar1 = '\x01';
LAB_0068f8b0:
  return (int)cVar1;
}


