#include "006cd5cc_006cdb0c.h"



void fn_006cdb0c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int local_1c [2];
  
  *param_1 = (int)&DAT_008f9cf4;
  iVar1 = fn_0068f7c4(param_3,param_4);
  if (iVar1 == 0) {
    fn_0068f7f8(param_3,param_4);
    uVar3 = fn_0016a7c4();
    fn_00147974(param_1,uVar3);
    return;
  }
  fn_0022fa1c(local_1c,iVar1,1);
  piVar2 = (int *)(local_1c[0] + -0xc);
  if (*piVar2 == -1) {
    if (param_1 != local_1c) {
      fn_00177c88(param_1,0,*(undefined4 *)(*param_1 + -4),local_1c[0],
                   *(undefined4 *)(local_1c[0] + -4),0,*(undefined4 *)(local_1c[0] + -4));
    }
  }
  else {
    if (piVar2 != &DAT_008f9ce8) {
      *piVar2 = *piVar2 + 1;
    }
    if ((undefined4 *)*param_1 != &DAT_008f9cf4) {
      piVar2 = (undefined4 *)*param_1 + -3;
      iVar1 = *piVar2;
      if ((iVar1 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar1 + -1, iVar1 == 0)))) {
        fn_001008c4(*param_1 + -0xc,*(int *)(*param_1 + -8) + 8,0);
      }
    }
    *param_1 = local_1c[0];
  }
  fn_001588d4(local_1c);
  return;
}



bool fn_006cdaec(int param_1)

{
  return *(char *)(param_1 + 8) == '\0';
}



void fn_006cdaa0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x4c,&DAT_00812c8c,param_3,param_4,param_4);
  if (iVar1 != 0) {
    fn_005890a0(iVar1,param_3,param_5,0,param_4);
  }
  return;
}



int fn_006cd9b0(int param_1,short param_2)

{
  return param_1 + param_2 * 0x19998 + 0xdad8;
}



char * fn_006cd8f4(int param_1)

{
  char cVar1;
  char *pcVar2;
  bool bVar3;
  
  pcVar2 = (char *)(param_1 + 0x5e1c);
  cVar1 = *pcVar2;
  bVar3 = cVar1 == '\0';
  if (bVar3) {
    cVar1 = *(char *)(param_1 + 0x5e1d);
  }
  if (bVar3 && cVar1 == '\0') {
    cVar1 = *(char *)(param_1 + 0x5e1e);
    bVar3 = cVar1 == '\0';
    if (bVar3) {
      cVar1 = *(char *)(param_1 + 0x5e1f);
    }
    if (bVar3 && cVar1 == '\0') {
      cVar1 = *(char *)(param_1 + 0x5e20);
      bVar3 = cVar1 == '\0';
      if (bVar3) {
        cVar1 = *(char *)(param_1 + 0x5e21);
      }
      if (bVar3 && cVar1 == '\0') {
        cVar1 = *(char *)(param_1 + 0x5e22);
        bVar3 = cVar1 == '\0';
        if (bVar3) {
          cVar1 = *(char *)(param_1 + 0x5e23);
        }
        if (bVar3 && cVar1 == '\0') {
          cVar1 = *(char *)(param_1 + 0x5e24);
          bVar3 = cVar1 == '\0';
          if (bVar3) {
            cVar1 = *(char *)(param_1 + 0x5e25);
          }
          if (bVar3 && cVar1 == '\0') {
            cVar1 = *(char *)(param_1 + 0x5e26);
            bVar3 = cVar1 == '\0';
            if (bVar3) {
              cVar1 = *(char *)(param_1 + 0x5e27);
            }
            if (bVar3 && cVar1 == '\0') {
              cVar1 = *(char *)(param_1 + 0x5e28);
              bVar3 = cVar1 == '\0';
              if (bVar3) {
                cVar1 = *(char *)(param_1 + 0x5e29);
              }
              if (bVar3 && cVar1 == '\0') {
                bVar3 = *(char *)(param_1 + 0x5e2a) == '\0';
                if (bVar3) {
                  pcVar2 = (char *)(uint)*(byte *)(param_1 + 0x5e2b);
                }
                if (bVar3 && pcVar2 == (char *)0x0) {
                  return pcVar2;
                }
              }
            }
          }
        }
      }
    }
  }
  return &DAT_00000001;
}



undefined4 fn_006cd8a0(int param_1,short param_2)

{
  int iVar1;
  
  iVar1 = param_1 + param_2 * 0x19998;
  if (*(int *)(param_1 + 0x14) == 0) {
    if (*(uint *)(param_1 + 0x18) < 2) {
      return 0;
    }
    if (*(int *)(iVar1 + 0xdad8) == 0) {
      return 0;
    }
  }
  else if (*(int *)(iVar1 + 0xd2d0) == 0) {
    return 0;
  }
  return 1;
}



int fn_006cd878(int param_1,short param_2)

{
  return param_1 + param_2 * 0xdd4 + 0x26cc;
}



void fn_006cd750(int param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 *local_28;
  undefined2 *local_24;
  undefined2 *local_20;
  
  local_28 = (undefined2 *)0x0;
  local_24 = (undefined2 *)0x0;
  local_20 = (undefined2 *)0x0;
  local_28 = (undefined2 *)fn_00100fc6(0x40,0);
  iVar2 = 6;
  puVar1 = local_28;
  do {
    if (puVar1 != (undefined2 *)0x0) {
      *puVar1 = 0;
    }
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + 1;
  } while (iVar2 != 0);
  local_24 = local_28 + 6;
  local_20 = local_28 + 0x20;
  *local_28 = *(undefined2 *)(param_1 + 0x136);
  local_28[1] = *(undefined2 *)(param_1 + 0x138);
  local_28[2] = *(undefined2 *)(param_1 + 0x13a);
  local_28[3] = *(undefined2 *)(param_1 + 0x13c);
  local_28[4] = *(undefined2 *)(param_1 + 0x13e);
  local_28[5] = *(undefined2 *)(param_1 + 0x140);
  fn_00236d80(param_2,&local_28,*(undefined2 *)(param_1 + 0x132),1);
  puVar1 = local_28;
  if (local_24 < local_28) {
    do {
      puVar1 = puVar1 + 1;
    } while (puVar1 != local_24);
  }
  fn_001008c4(local_28,(int)local_20 - (int)local_28 >> 1,0);
  fn_0024f108(param_2,0);
  return;
}



int fn_006cd734(int param_1,short param_2)

{
  return param_1 + param_2 * 0x1454 + 0xaa28;
}



bool fn_006cd71c(int param_1)

{
  return *(short *)(param_1 + 0x130) == 2;
}



int fn_006cd6fc(int param_1,int param_2)

{
  if (param_2 == 0) {
    param_1 = param_1 + 0x188;
  }
  else {
    param_1 = param_1 + 0x144c;
  }
  return param_1;
}



int fn_006cd6d0(int param_1,short param_2)

{
  return param_1 + param_2 * 0x19998 + 0xd2d0;
}



int fn_006cd6a8(int param_1,short param_2)

{
  return param_1 + param_2 * 0xdd4 + 0x5048;
}



int fn_006cd684(int param_1,short param_2,int param_3)

{
  return param_1 + param_2 * 0x19998 + param_3 * 0x808 + 0xe2e0;
}



bool fn_006cd64c(int param_1)

{
  return *(short *)(param_1 + 0x130) != 0;
}



void fn_006cd620(int param_1,uint *param_2,undefined4 *param_3)

{
  *param_2 = (uint)*(ushort *)(param_1 + 0x132);
  *param_3 = 1;
  return;
}



void fn_006cd5f8(int param_1,undefined2 *param_2)

{
  param_2[3] = *(undefined2 *)(param_1 + 0x134);
  param_2[2] = *(undefined2 *)(param_1 + 0x136);
  param_2[1] = *(undefined2 *)(param_1 + 0x138);
  *param_2 = *(undefined2 *)(param_1 + 0x13a);
  return;
}



bool fn_006cd5e4(int param_1)

{
  return *(short *)(param_1 + 0x130) == 1;
}



bool fn_006cd5cc(int param_1)

{
  return *(short *)(param_1 + 0x130) == 3;
}


