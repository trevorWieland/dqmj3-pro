#include "0017dfc4_0017ea58.h"



void fn_0017ea58(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x16) != '\0') {
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 8)) {
      do {
        iVar1 = *(int *)(param_1 + iVar2 * 4);
        if (iVar1 != 0) {
          fn_0019f2a8(iVar1,1);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 8));
    }
    *(undefined1 *)(param_1 + 0x16) = 0;
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  return;
}



void fn_0017e80c(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined1 auStack_30 [24];
  
  if (*(char *)(param_1 + 0x15) != '\0') {
    if ((*(ushort *)(param_1 + 0x20) & 4) != 0) {
      iVar2 = 0;
      if (0 < *(int *)(param_1 + 8)) {
        do {
          if (*(int *)(param_1 + iVar2 * 4) != 0) {
            fn_0018a240();
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(param_1 + 8));
      }
      *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) & 0xfffb;
    }
    if ((*(ushort *)(param_1 + 0x20) & 0x40) != 0) {
      fn_001910ec(&DAT_008ece50);
      iVar2 = 0;
      if (0 < *(int *)(param_1 + 8)) {
        do {
          if (*(int *)(param_1 + iVar2 * 4) != 0) {
            fn_001943e8();
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(param_1 + 8));
      }
      *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) & 0xffbf;
    }
    if ((*(ushort *)(param_1 + 0x20) & 8) != 0) {
      fn_0018b09c(param_1);
      *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) & 0xfff7;
    }
    if ((*(ushort *)(param_1 + 0x20) & 0x10) != 0) {
      uVar1 = fn_0018ad00();
      iVar2 = 0;
      if (0 < *(int *)(param_1 + 8)) {
        do {
          iVar3 = *(int *)(param_1 + iVar2 * 4);
          if (iVar3 != 0) {
            if (uVar1 < 16000) {
              fn_001942b8(iVar3,1);
              fn_0018a1b4(iVar3,uVar1);
            }
            else {
              fn_001942b8(iVar3,0);
            }
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(param_1 + 8));
      }
      *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) & 0xffef;
    }
    if ((*(ushort *)(param_1 + 0x20) & 0x20) != 0) {
      iVar2 = 0;
      if (0 < *(int *)(param_1 + 8)) {
        uVar7 = 0;
        do {
          iVar3 = *(int *)(param_1 + iVar2 * 4);
          if (iVar3 != 0) {
            piVar4 = *(int **)(&DAT_008ecec4 + (uint)*(byte *)(param_1 + 0x22) * 4);
            bVar6 = piVar4 == (int *)0x0;
            bVar5 = true;
            if (!bVar6) {
              bVar6 = *(float *)(param_1 + 0x3c) == (float)uVar7;
              bVar5 = (float)uVar7 <= *(float *)(param_1 + 0x3c);
            }
            if (bVar5 && !bVar6) {
              fn_0018a194(iVar3,1);
              (**(code **)(*piVar4 + 8))(piVar4,*(undefined1 *)(param_1 + 0x22),auStack_30);
              fn_00194370(iVar3,auStack_30);
            }
            else {
              fn_0018a194(iVar3,0);
            }
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(param_1 + 8));
      }
      *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) & 0xffdf;
    }
  }
  return;
}



void fn_0017e7a0(int *param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = (char)param_1[5] != '\0';
  cVar1 = '\0';
  if (bVar3) {
    cVar1 = *(char *)((int)param_1 + 0x16);
  }
  if (bVar3 && cVar1 != '\0') {
    iVar2 = 0;
    if (*param_1 != 0) {
      iVar2 = param_1[7];
    }
    if ((*param_1 != 0 && iVar2 != 0) &&
       (*(char *)(iVar2 + 0x11) != '\x01' && *(char *)(iVar2 + 0x11) != '\x02')) {
      if ((code *)param_1[3] != (code *)0x0) {
        (*(code *)param_1[3])(param_1,0,param_1[4]);
      }
      *(undefined1 *)((int)param_1 + 0x16) = 0;
      *(undefined1 *)((int)param_1 + 0x15) = 0;
    }
  }
  return;
}



undefined4 * fn_0017e758(undefined4 *param_1)

{
  *param_1 = &DAT_0085828c;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  fn_0014ddb8(param_1 + 3,1);
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  fn_0015dfc0(param_1 + 3);
  return param_1;
}



void fn_0017dfc4(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  uint uVar4;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  do {
    switch((char)param_1[1]) {
    case '\x02':
      *(undefined1 *)param_1[4] = 1;
      break;
    case '\x03':
      (**(code **)(*(int *)param_1[4] + 8))();
      *(undefined1 *)param_1[5] = 1;
      break;
    case '\x04':
      pcVar3 = *(code **)(*(int *)param_1[4] + 0xc);
      goto LAB_0017e11c;
    case '\x05':
      pcVar3 = *(code **)(*(int *)param_1[4] + 0x10);
LAB_0017e11c:
      (*pcVar3)();
      break;
    case '\x06':
      if ((char)param_1[5] != '\0') {
        *(undefined4 *)(param_1[4] + 0x14) = 0;
      }
      (**(code **)(*(int *)param_1[4] + 0x14))();
      break;
    case '\a':
      (**(code **)(*(int *)param_1[4] + 0x18))((int *)param_1[4],(int)(char)param_1[5]);
      break;
    case '\b':
      *(int *)(param_1[4] + 0x14) = param_1[5];
      *(int *)(param_1[4] + 0x18) = param_1[6];
      *(int *)(param_1[4] + 0x1c) = param_1[7];
      *(int *)(param_1[4] + 0x20) = param_1[8];
      *(int *)(param_1[4] + 0x24) = param_1[9];
      fn_0018b77c(param_1[4],param_1[10]);
      uVar4 = 0;
      *(int *)(param_1[4] + 0x30) = param_1[0xc];
      do {
        fn_0018b788(param_1[4],uVar4 & 0xff);
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < 2);
      break;
    case '\t':
      *(char *)(param_1[4] + 0x34) = (char)param_1[5];
      break;
    case '\n':
      *(undefined1 *)(param_1[4] + 0x35) = *(undefined1 *)((int)param_1 + 0x15);
      break;
    case '\v':
      *(char *)(param_1[4] + 0x2e) = (char)param_1[5];
      break;
    case '\f':
      *(undefined1 *)(param_1[4] + 0x10) = 0;
      break;
    case '\r':
      fn_0018c728(param_1[4],param_1 + 5);
      *(char *)(param_1[4] + 0x74) = (char)param_1[8];
      *(undefined1 *)(param_1[4] + 0x5c) = *(undefined1 *)((int)param_1 + 0x21);
      fn_0018c6d8(param_1[4],param_1[9],param_1[10]);
      break;
    case '\x0e':
      fn_0018c280(param_1[4],param_1 + 5,param_1 + 8);
      break;
    case '\x0f':
      fn_0018c7f4(param_1[4],param_1 + 5);
      break;
    case '\x10':
      fn_0018c6e4(param_1[4],param_1[5] & 0xff,param_1[6]);
      break;
    case '\x11':
      *(int *)(param_1[4] + 100) = param_1[5];
      break;
    case '\x12':
      *(char *)(param_1[4] + 0x74) = (char)param_1[5];
      break;
    case '\x13':
      fn_0018c454(param_1[4],param_1[6],(int)(short)param_1[7]);
      break;
    case '\x14':
      fn_0018c478(param_1[6],(int)(short)param_1[7]);
      break;
    case '\x15':
      iVar1 = fn_0018c388(param_1[4],param_1[5]);
      if (iVar1 != 0) {
        fn_0018b1fc(iVar1,param_1[6],(int)(short)param_1[7]);
      }
      break;
    case '\x16':
      fn_0018c2ec(param_1[4],param_1[5],param_1[6] & 0xff);
      break;
    case '\x17':
      fn_0018c3cc(param_1[4],param_1[5],(int)(char)param_1[6],param_1[7]);
      break;
    case '\x18':
      fn_0018c39c(param_1[4],param_1[5]);
      break;
    case '\x19':
      fn_0018c370(param_1[4],param_1[5]);
      break;
    case '\x1a':
      fn_0018c2d4(param_1[4],param_1[5]);
      break;
    case '\x1b':
      fn_0018c5ac(param_1[4],param_1[5]);
      break;
    case '\x1c':
      fn_0018c3b4(param_1[4],param_1[5]);
      break;
    case '\x1d':
      fn_0018c460(param_1[4],param_1[5]);
      break;
    case '\x1e':
      fn_0018c5c4(param_1[4],param_1[5],param_1[6]);
      break;
    case '\x1f':
      fn_0018c48c(param_1[4],param_1[5],param_1[6]);
      break;
    case ' ':
      fn_0018c528(param_1[4],param_1[5],(int)(char)param_1[6]);
      break;
    case '!':
      fn_0018c654(param_1[4],param_1[5],(char)param_1[6]);
      break;
    case '\"':
      fn_0018b6c0(param_1[4],param_1 + 5,param_1 + 8);
      break;
    case '#':
      fn_0018b678(param_1[4],param_1 + 5,param_1 + 8);
      break;
    case '$':
      *(char *)(param_1[4] + 0x5e) = (char)param_1[5];
      break;
    case '%':
      *(char *)(param_1[4] + 0x5e) = (char)param_1[5];
      *(undefined1 *)(param_1[4] + 0x5d) = *(undefined1 *)((int)param_1 + 0x15);
      break;
    case '&':
      *(char *)(param_1[4] + 0xa3) = (char)param_1[5];
      break;
    case '\'':
      fn_0018c080(param_1[4],param_1 + 5);
      break;
    case '(':
      fn_0018c1ac(param_1[4],param_1 + 6);
      break;
    case ')':
      fn_0018bdc8(param_1[4],param_1 + 5);
      break;
    case '*':
      fn_0018b848(param_1[4],(int)(char)param_1[5],param_1 + 6,(short)param_1[0xe]);
      break;
    case '+':
      fn_0018bd68(param_1[4],(int)(char)param_1[5],param_1 + 6);
      break;
    case ',':
      *(char *)(param_1[4] + 0x84) = (char)param_1[5];
      break;
    case '-':
      fn_0018bd88(param_1[4],param_1[5]);
      break;
    case '.':
      fn_0018c03c(param_1[4],param_1[5],param_1[6]);
      break;
    case '/':
      fn_0018bd28(param_1[4],param_1[5]);
      break;
    case '0':
      fn_0018bffc(param_1[4],param_1[5]);
      break;
    case '1':
      uVar2 = fn_0018c8e8();
      fn_0018c93c(uVar2,param_1[4],param_1[5]);
      break;
    case '2':
      uVar2 = fn_0018c8e8();
      fn_00196754(uVar2,param_1[4]);
      break;
    case '3':
      uVar2 = fn_0018c8e8();
      fn_0017d904(uVar2,param_1[4]);
      break;
    case '4':
      fn_0018b4e8(&DAT_008ece50,(char)param_1[4],param_1[5]);
      break;
    case '5':
      fn_0018b420(&DAT_008ece50,(char)param_1[4],param_1[5]);
      break;
    case '6':
      fn_0018b484(&DAT_008ece50,(char)param_1[4],param_1[5]);
      break;
    case '7':
      fn_0018b280(&DAT_008ece50,(char)param_1[4],param_1[5],param_1 + 6);
      break;
    case '8':
      fn_0018b350(&DAT_008ece50,(char)param_1[4],param_1[5],param_1 + 6);
      break;
    case '9':
      fn_0018b20c(&DAT_008ece50,(char)param_1[4],param_1[6]);
      break;
    case ':':
      uVar2 = fn_0018b794();
      fn_0018b7fc(uVar2,param_1[4]);
    }
    param_1 = (int *)*param_1;
    if (param_1 == (int *)0x0) {
      return;
    }
  } while( true );
}


