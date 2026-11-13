#include "006e6fa4_006e8044.h"



undefined4 fn_006e8044(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2;
  if (uVar1 <= param_2) {
    fn_002ff628(9,&DAT_008c760a,&DAT_008c760a,param_2,uVar1);
  }
  return *(undefined4 *)(*(int *)(param_1 + 8) + param_2 * 4);
}



undefined4 fn_006e7dd0(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  bool bVar8;
  bool bVar9;
  
  cVar7 = '\0';
  iVar3 = fn_00296630(param_2,*(undefined1 *)(param_1 + 0x3f),*(undefined4 *)(param_1 + 0x40));
  cVar6 = '\0';
  if (iVar3 != 0) {
    if (*(char *)(param_1 + 0x40) == '\0') {
      cVar6 = '\0';
      if (*(char *)(param_1 + 0x3f) != '\0') {
        cVar6 = *(char *)(param_1 + 0x3f);
      }
    }
    else {
      cVar6 = (char)*(undefined4 *)(param_1 + 0x40);
    }
  }
  iVar3 = fn_001c2ef4(1);
  if ((iVar3 != 0) &&
     (iVar3 = fn_00296630(param_2,*(undefined1 *)(param_1 + 0x41),*(undefined1 *)(param_1 + 0x42)),
     iVar3 != 0)) {
    cVar5 = *(char *)(param_1 + 0x42);
    bVar8 = cVar5 == '\0';
    if (bVar8) {
      cVar5 = *(char *)(param_1 + 0x41);
    }
    if (!bVar8 || cVar5 != '\0') {
      cVar7 = cVar5;
    }
  }
  cVar5 = '\x10';
  do {
    cVar1 = cVar6;
    if (cVar5 != cVar6) {
      cVar1 = cVar7;
    }
    if (cVar5 != cVar6 && cVar5 != cVar1) {
      iVar4 = fn_00174828(DAT_008977e4);
      iVar4 = iVar4 + cVar5 * 0x418;
      bVar8 = (short *)(iVar4 + -0x4080) == (short *)0x0;
      iVar3 = 0;
      iVar2 = cVar5 * 0x83;
      if (!bVar8) {
        iVar3 = (int)*(short *)(iVar4 + -0x4080);
        iVar2 = iVar3;
      }
      if ((!bVar8 && iVar2 != 0) && iVar3 < 0 == (bVar8 && SBORROW4(iVar4 + 0x3f80,0x8000))) {
        cVar1 = *(char *)(iVar4 + -0x4019);
        bVar8 = cVar1 == '\0';
        if (bVar8) {
          cVar1 = *(char *)(iVar4 + -0x400a);
        }
        bVar9 = bVar8 && cVar1 == '\0';
        if (bVar8 && cVar1 == '\0') {
          bVar9 = *(char *)(iVar4 + -0x4018) == '\0';
        }
        if (bVar9) {
          return 1;
        }
      }
    }
    cVar5 = cVar5 + '\x01';
    if ('\x13' < cVar5) {
      return 0;
    }
  } while( true );
}



undefined4 fn_006e7d4c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = fn_001c2ef4(1);
  if (iVar1 == 0) {
    if ((char)param_2 == '\0') {
      uVar2 = fn_00296630(param_2,*(undefined1 *)(param_1 + 0x3f),*(undefined4 *)(param_1 + 0x40));
    }
  }
  else {
    iVar1 = fn_00296630(param_2,*(undefined1 *)(param_1 + 0x3f),*(undefined4 *)(param_1 + 0x40));
    if (iVar1 != 0) {
      iVar1 = fn_00296630(param_2,*(undefined1 *)(param_1 + 0x41),*(undefined1 *)(param_1 + 0x42));
      if (iVar1 != 0) {
        return 1;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 fn_006e7ca4(int param_1)

{
  undefined4 uVar1;
  
  if (((*(int *)(*(int *)(param_1 + 0x14) + -4) == *(int *)(param_1 + 0x20)) &&
      (*(char *)(param_1 + 0x24) != '\0')) || (*(int *)(param_1 + 0x20) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



undefined4 fn_006e7c7c(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(*(int *)(param_1 + 0x14) + -4) == *(int *)(param_1 + 0x20)) {
    uVar1 = 0;
    if (*(char *)(param_1 + 0x24) != '\0') {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



int fn_006e7c4c(int param_1)

{
  int *piVar1;
  int local_8;
  int local_4;
  
  local_8 = 0;
  local_4 = *(int *)(param_1 + 0x1c) + -1;
  piVar1 = &local_4;
  if (local_4 < 0) {
    piVar1 = &local_8;
  }
  return *piVar1;
}



int fn_006e7c24(int param_1)

{
  return *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) >> 2;
}



undefined4 fn_006e7bec(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (((int)param_2 < 0) ||
     ((uint)(*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) >> 2) <= param_2)) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + param_2 * 4);
  }
  return uVar1;
}



int fn_006e7ac8(int param_1)

{
  return *(int *)(param_1 + 8) + 0x90;
}



int fn_006e7ab8(int param_1)

{
  return (int)*(char *)(*(int *)(param_1 + 8) + 9);
}



int fn_006e7420(int param_1)

{
  return *(int *)(*(int *)(param_1 + 0xd4) + 0x10) + 0x1c;
}



undefined4 fn_006e73f8(int param_1,int param_2,int param_3)

{
  return *(undefined4 *)(param_1 + param_2 * 0x10 + param_3 * 4 + 4);
}



void fn_006e7114(int param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_210 [28];
  short local_1f4;
  undefined1 auStack_120 [240];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [8];
  
  uVar4 = *param_2;
  uVar5 = param_2[1];
  if (uVar4 != uVar5) {
    uVar1 = uVar4;
    if (uVar5 <= uVar4) {
      do {
        uVar1 = uVar1 + 0xf0;
      } while (uVar1 != uVar5);
    }
    iVar2 = (int)((longlong)(int)(uVar5 - uVar4) * -0x77777777 +
                  ((ulonglong)(uVar5 - uVar4) << 0x20) >> 0x20);
    param_2[1] = uVar5 + ((iVar2 >> 7) - (iVar2 >> 0x1f)) * -0xf0;
  }
  fn_00301f50(auStack_120,0xf0);
  iVar2 = 0;
  do {
    fn_0017821c(auStack_210,param_1 + iVar2 * 0xf0 + 0x54,0xf0);
    uVar4 = param_2[1];
    if (uVar4 == param_2[2]) {
      fn_00787f6c(param_2,uVar4,auStack_210);
    }
    else {
      param_2[1] = uVar4 + 0xf0;
      if (uVar4 != 0) {
        fn_0017821c(uVar4,auStack_210,0xf0);
      }
    }
    if (local_1f4 != 0) {
      fn_0020bbc4(auStack_30,auStack_210);
      fn_006bfe90(auStack_2c);
      iVar3 = fn_001cab7c();
      iVar6 = 1;
      if (1 < iVar3) {
        do {
          uVar4 = param_2[1];
          if (uVar4 == param_2[2]) {
            fn_00787f6c(param_2,uVar4,auStack_120);
          }
          else {
            param_2[1] = uVar4 + 0xf0;
            if (uVar4 != 0) {
              fn_0017821c(uVar4,auStack_120,0xf0);
            }
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar3);
      }
    }
    iVar3 = (int)((longlong)(int)(param_2[1] - *param_2) * -0x77777777 +
                  ((ulonglong)(param_2[1] - *param_2) << 0x20) >> 0x20);
  } while (((uint)((iVar3 >> 7) - (iVar3 >> 0x1f)) < 4) && (iVar2 = iVar2 + 1, iVar2 < 4));
  return;
}



char fn_006e70cc(int param_1)

{
  char cVar1;
  
  cVar1 = *(short *)(param_1 + 0x70) != 0;
  if (*(short *)(param_1 + 0x160) != 0) {
    cVar1 = cVar1 + '\x01';
  }
  if (*(short *)(param_1 + 0x250) != 0) {
    cVar1 = cVar1 + '\x01';
  }
  if (*(short *)(param_1 + 0x340) != 0) {
    cVar1 = cVar1 + '\x01';
  }
  return cVar1;
}



char fn_006e7080(int param_1)

{
  char cVar1;
  
  cVar1 = *(int *)(param_1 + 0x14) != 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    cVar1 = cVar1 + '\x01';
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    cVar1 = cVar1 + '\x01';
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    cVar1 = cVar1 + '\x01';
  }
  return cVar1;
}



char fn_006e6fa4(int param_1)

{
  char cVar1;
  
  cVar1 = *(int *)(param_1 + 0x34) != 0;
  if (*(int *)(param_1 + 0x38) != 0) {
    cVar1 = cVar1 + '\x01';
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    cVar1 = cVar1 + '\x01';
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    cVar1 = cVar1 + '\x01';
  }
  return cVar1;
}


