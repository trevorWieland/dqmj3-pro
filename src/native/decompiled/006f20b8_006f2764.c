#include "006f20b8_006f2764.h"



bool fn_006f2764(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_00182924(0xb);
  return iVar1 <= *(char *)(param_2 + 0x66);
}



undefined4 fn_006f2734(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_006f30a8(param_2);
  if ((iVar1 == 0) && (*(char *)(param_2 + 0x7b) < '\x01')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



int fn_006f2698(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar4 = 0;
  do {
    if (param_3 <= param_2) {
      return iVar5;
    }
    iVar1 = fn_006f14a4(param_1,param_2);
    if (iVar1 != 0) {
      if (iVar4 != 0) {
        iVar2 = fn_006f2fa8(iVar4);
        iVar3 = fn_006f2fa8(iVar1);
        if (iVar2 <= iVar3) goto LAB_006f2700;
      }
      iVar4 = iVar1;
      iVar5 = param_2;
    }
LAB_006f2700:
    param_2 = (int)(char)((char)param_2 + '\x01');
  } while( true );
}



bool fn_006f2674(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_00182944(5);
  return *(char *)(param_2 + 0x60) <= iVar1;
}



bool fn_006f2650(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_00182924(5);
  return iVar1 <= *(char *)(param_2 + 0x60);
}



int fn_006f2514(undefined4 param_1,int param_2,int param_3)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int unaff_r9;
  
  iVar7 = 0;
  if (param_2 < param_3) {
    unaff_r9 = 0x51eb851f;
  }
  iVar6 = 0;
  do {
    if (param_3 <= param_2) {
      return iVar7;
    }
    iVar3 = fn_006f14a4(param_1,param_2);
    if (iVar3 != 0) {
      if (iVar6 != 0) {
        sVar1 = fn_006f4520(iVar6);
        sVar2 = fn_006f33d4(iVar6);
        iVar4 = (int)((ulonglong)((longlong)unaff_r9 * (longlong)((int)sVar1 * (int)sVar2)) >> 0x20)
        ;
        sVar1 = fn_006f4520(iVar3);
        sVar2 = fn_006f33d4(iVar3);
        iVar5 = (int)((ulonglong)((longlong)unaff_r9 * (longlong)((int)sVar1 * (int)sVar2)) >> 0x20)
        ;
        if ((iVar5 >> 5) - (iVar5 >> 0x1f) <= (iVar4 >> 5) - (iVar4 >> 0x1f)) goto LAB_006f25ac;
      }
      iVar6 = iVar3;
      iVar7 = param_2;
    }
LAB_006f25ac:
    param_2 = (int)(char)((char)param_2 + '\x01');
  } while( true );
}



undefined4 fn_006f24a0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_006f3500(param_2);
  if ((iVar1 == 0) && (*(char *)(param_2 + 0x7e) < '\x01')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



undefined4 fn_006f2450(int param_1)

{
  int iVar1;
  
  iVar1 = fn_006f4810(*(int *)(param_1 + 8) + 0xe8);
  if (iVar1 != 0) {
    iVar1 = fn_006f4830(*(int *)(param_1 + 8) + 0xe8);
    if (iVar1 == 0) {
      iVar1 = 0x62;
    }
    if ((char)((char)iVar1 - **(char **)(param_1 + 8)) == '\x01') {
      return 1;
    }
  }
  return 0;
}



bool fn_006f2400(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_00176e70(param_2);
  return iVar1 == *(short *)(param_2 + 0x1e);
}



bool fn_006f23d4(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_00176dc0(param_2);
  return iVar1 == *(short *)(param_2 + 0x1c);
}



bool fn_006f2384(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = fn_006f1be0(param_1,param_4,(int)*(char *)(param_1 + 4),param_3,1,0);
  return iVar1 < 2;
}



undefined4 fn_006f2340(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_006f31f4(param_2);
  if ((iVar1 == 0) && (*(char *)(param_2 + 0x7c) < '\x01')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



undefined4 fn_006f2310(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_006f34d4(param_2);
  if ((iVar1 == 0) && (*(char *)(param_2 + 0x7f) < '\x01')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



int fn_006f20b8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  int local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  if (param_5 != (int *)0x0) {
    *param_5 = 0;
  }
  iStack_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  uStack_28 = param_4;
  iVar3 = fn_006f14ec(param_1,param_3);
  iVar4 = fn_0061be08(local_2c);
  if (iVar4 == 0) {
    uVar9 = 0x10;
  }
  else {
    uVar9 = 0x14;
  }
  iVar4 = fn_0061be08(local_2c);
  if (iVar4 == 0) {
    uVar10 = 0x14;
  }
  else {
    uVar10 = 0x18;
  }
  iVar4 = 0;
  uVar5 = fn_00163cd8(local_30,(int)*(char *)(iVar3 + 0x59));
  switch(uVar5) {
  case 7:
  case 9:
  case 0xc:
    if (uVar9 < uVar10) {
      uVar11 = uVar9;
      do {
        iVar3 = fn_006f1be0(param_1,local_30,local_2c,uVar11,param_4,&local_38);
        if ((uVar11 == uVar9) || (iVar4 < iVar3)) {
          iVar4 = iVar3;
        }
        if (param_5 != (int *)0x0) {
          iVar3 = *param_5;
          if (*param_5 <= local_38) {
            iVar3 = local_38;
          }
          *param_5 = iVar3;
        }
        uVar11 = (uint)(char)((char)uVar11 + '\x01');
      } while ((int)uVar11 < (int)uVar10);
    }
    break;
  case 8:
    if (uVar9 < uVar10) {
      do {
        iVar3 = fn_006f1be0(param_1,local_30,local_2c,uVar9,param_4,&local_38);
        iVar4 = iVar4 + iVar3;
        if (param_5 != (int *)0x0) {
          *param_5 = local_38 + *param_5;
        }
        uVar9 = (uint)(char)((char)uVar9 + '\x01');
      } while ((int)uVar9 < (int)uVar10);
    }
    break;
  case 10:
    iVar3 = 0;
    cVar7 = '\0';
    if (uVar9 < uVar10) {
      do {
        iVar6 = *(int *)(param_1 + 8) + uVar9 * 0x418;
        bVar12 = (short *)(iVar6 + -0x4080) == (short *)0x0;
        iVar8 = 0;
        iVar2 = uVar9 * 0x83;
        if (!bVar12) {
          iVar8 = (int)*(short *)(iVar6 + -0x4080);
          iVar2 = iVar8;
        }
        if ((!bVar12 && iVar2 != 0) && iVar8 < 0 == (bVar12 && SBORROW4(iVar6 + 0x3f80,0x8000))) {
          cVar1 = *(char *)(iVar6 + -0x4019);
          bVar12 = cVar1 == '\0';
          if (bVar12) {
            cVar1 = *(char *)(iVar6 + -0x400a);
          }
          bVar13 = bVar12 && cVar1 == '\0';
          if (bVar12 && cVar1 == '\0') {
            bVar13 = *(char *)(iVar6 + -0x4018) == '\0';
          }
          if (bVar13) {
            iVar8 = fn_006f1be0(param_1,local_30,local_2c,uVar9,param_4,&local_38);
            iVar4 = iVar4 + iVar8;
            cVar7 = cVar7 + '\x01';
            iVar3 = iVar3 + local_38;
          }
        }
        uVar9 = (uint)(char)((char)uVar9 + '\x01');
      } while ((int)uVar9 < (int)uVar10);
    }
    iVar4 = fn_00300f74(iVar4,cVar7);
    iVar8 = fn_00163cbc(local_30);
    if (iVar8 == 10) {
      iVar8 = fn_00655b28(local_30,param_4);
      iVar4 = iVar8 * iVar4;
    }
    if (param_5 != (int *)0x0) {
      iVar3 = fn_00300f74(iVar3,cVar7);
      *param_5 = iVar3;
    }
  }
  return iVar4;
}


