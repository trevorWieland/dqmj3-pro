#include "002a2538_002bff84.h"



void fn_002bff84(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar1 = (undefined4 *)fn_00100fc6(0x80,0);
  iVar2 = 4;
  *param_1 = (int)puVar1;
  do {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + 1;
  } while (iVar2 != 0);
  param_1[1] = *param_1 + 0x10;
  param_1[2] = *param_1 + 0x80;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((int)param_1 + 0xd) = 0;
  *(undefined1 *)((int)param_1 + 0xe) = 0;
  *(undefined1 *)((int)param_1 + 0xf) = 0;
  *(undefined1 *)(param_1 + 4) = 1;
  *(undefined1 *)((int)param_1 + 0x11) = 0;
  return;
}



void fn_002bd070(int *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  
  bVar1 = *(byte *)(param_1 + 0x2e);
  *(byte *)(param_1 + 0x2e) = ~bVar1 & 1;
  fn_0022e468(param_1 + 0x2f,~bVar1 & 1);
  if (param_1[0x29] != 0) {
    uVar2 = fn_00231cb8((&DAT_007c6dfc)[*(byte *)(param_1 + 0x2e)]);
    fn_00243550(param_1[0x29],uVar2);
  }
  (**(code **)(*param_1 + 0x124))(param_1);
                    /* WARNING: Subroutine does not return */
  fn_006ba250(param_1);
}



undefined1 fn_002b8124(int param_1)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined1 local_28 [8];
  uint local_20 [4];
  
  fn_002b5424();
  local_28[0] = 0x1a;
  uVar3 = 0x1a;
  if (*(int *)(*(int *)(param_1 + 8) + 0x10) != 0) {
    uVar4 = fn_006ba11c(param_1);
    piVar8 = *(int **)(*(int *)(param_1 + 8) + 0x7c);
    uVar5 = fn_006ba178(param_1);
    (**(code **)(*piVar8 + 0x14))(piVar8,uVar5);
    (**(code **)(**(int **)(*(int *)(param_1 + 8) + 0x7c) + 0x10))();
    if (((uVar4 & 0x110000) != 0) &&
       (iVar6 = fn_0038d58c(*(undefined4 *)(*(int *)(param_1 + 8) + 0x7c)), iVar6 != 0)) {
      iVar6 = *(int *)(*(int *)(param_1 + 8) + 0x7c);
      local_20[0] = (uint)*(byte *)(*(int *)(*(int *)(param_1 + 8) + 0x48) + 0x7d);
      iVar6 = iVar6 + *(char *)(iVar6 + 0x14) * 8;
      cVar1 = *(char *)(iVar6 + 0x49);
      cVar2 = *(char *)(iVar6 + 0x48);
      if (cVar1 == '\0') {
        switch(cVar2) {
        case '\0':
          fn_002b7c3c(param_1,local_20,0);
          break;
        case '\x01':
          fn_002b7c3c(param_1,local_20,1);
          break;
        case '\x03':
          fn_002b7eb0(param_1,local_20,1);
          break;
        case '\x04':
          fn_002b7c3c(param_1,local_20,0);
        case '\x02':
          fn_002b7eb0(param_1,local_20,0);
        }
        iVar6 = fn_00154ac8(0x32);
        if (iVar6 != 0) {
          *(int *)(*(int *)(param_1 + 4) + 0x24) = *(int *)(*(int *)(param_1 + 4) + 0x24) + 1;
        }
      }
      else if (cVar1 == '\x01') {
        if (cVar2 == '\0') {
          fn_002b7e1c(param_1);
        }
        else if (cVar2 == '\x02') {
          fn_002b8090(param_1);
        }
        else if (cVar2 == '\x04') {
          fn_002b7e1c(param_1);
          fn_002b8090(param_1);
        }
      }
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
    if ((uVar4 & 0x20000) != 0) {
      piVar8 = *(int **)(*(int *)(param_1 + 8) + 0x7c);
      (**(code **)(*piVar8 + 0x18))(piVar8,0,0);
      fn_003a7cf0(param_1,local_28,0xc);
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
    if ((uVar4 & 0x80000) != 0) {
      iVar6 = *(int *)(*(int *)(param_1 + 8) + 0x7c);
      uVar7 = *(undefined4 *)(iVar6 + *(char *)(iVar6 + 0x14) * 8 + 0x44);
      uVar5 = fn_00588d8c(iVar6,(int)(short)uVar7);
      fn_003a9994(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),uVar5,3,uVar7);
    }
    uVar3 = local_28[0];
  }
  return uVar3;
}



undefined4 fn_002b6430(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0x1a;
  iVar1 = fn_00159d14();
  if ((iVar1 == 0) || (iVar1 = fn_00165d3c(), iVar1 == 0)) {
    if (*(char *)(param_1 + 0xe) != '\0') {
      fn_003a5bbc(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),1);
      fn_003a7e9c(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),2);
    }
    uVar2 = fn_002b5b34(param_1);
  }
  else if (*(char *)(param_1 + 0xe) != iVar1) {
    *(char *)(param_1 + 0xe) = (char)iVar1;
    fn_003a7e9c(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),2);
    fn_003a5bbc(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),0,1);
    fn_003a7548(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),3);
  }
  return uVar2;
}



void fn_002b3fbc(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint in_fpscr;
  float fVar2;
  
  *(byte *)(param_3 + 0x44) = *(byte *)(param_2 + 1) | *(byte *)(param_3 + 0x44) & 0xfe;
  if (*(char *)(param_2 + 1) != '\0') {
    if (*(char *)(param_1 + 0x1d) == '\0') {
      iVar1 = (int)*(char *)(param_1 + 0x1b);
    }
    else {
      iVar1 = 0;
    }
    fVar2 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
    *(float *)(param_3 + 0x20) = (-44.0 - fVar2 * 44.0) + 5.0;
    *(byte *)(param_3 + 0x44) = *(byte *)(param_3 + 0x44) & 0xef | 0x10;
  }
  return;
}



void fn_002b325c(int param_1,int param_2)

{
  undefined4 uVar1;
  short asStack_18 [8];
  
  if (param_2 == -1) {
    *(byte *)(*(int *)(param_1 + 0xb8) + 0x44) = *(byte *)(*(int *)(param_1 + 0xb8) + 0x44) & 0xfe;
    return;
  }
  if (param_2 == 3) {
    uVar1 = fn_002305a4((int)*(char *)(param_1 + 0xd0),0);
  }
  else {
    asStack_18[0] = 0x1d;
    asStack_18[1] = 0x1e;
    asStack_18[2] = 0x1f;
    asStack_18[3] = -1;
    asStack_18[4] = -1;
    asStack_18[5] = -1;
    asStack_18[6] = -1;
    asStack_18[7] = 0x59;
    uVar1 = fn_00231ca0((int)asStack_18[param_2],0);
  }
  *(byte *)(*(int *)(param_1 + 0xb8) + 0x44) = *(byte *)(*(int *)(param_1 + 0xb8) + 0x44) & 0xfe | 1
  ;
  fn_00190d50(*(undefined4 *)(param_1 + 0xb8),uVar1);
  return;
}



void fn_002b2dd4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (((((((param_2 == 0) && (*(short *)(param_1 + 0x14) == *(short *)(param_1 + 0x16))) &&
         (*(char *)(param_1 + 0x18) == *(char *)(param_1 + 0x19))) &&
        ((*(char *)(param_1 + 0x1a) == *(char *)(param_1 + 0x1b) &&
         (*(char *)(param_1 + 0x1c) == *(char *)(param_1 + 0x1d))))) &&
       (((*(char *)(param_1 + 0x3a) == *(char *)(param_1 + 0x3b) &&
         ((*(char *)(param_1 + 0x3c) == *(char *)(param_1 + 0x3d) &&
          (*(char *)(param_1 + 0x3e) == *(char *)(param_1 + 0x3f))))) &&
        (*(char *)(param_1 + 0x40) == *(char *)(param_1 + 0x41))))) &&
      ((*(char *)(param_1 + 0x42) == *(char *)(param_1 + 0x43) &&
       (*(char *)(param_1 + 0x44) == *(char *)(param_1 + 0x45))))) ||
     (fn_0013ae4c(*(undefined4 *)(param_1 + 0xc0),*(undefined4 *)(*(int *)(param_1 + 4) + 8)),
     *(short *)(param_1 + 0x16) < 1)) {
    return;
  }
  iVar2 = (int)*(char *)(param_1 + 0x3b);
  if ((*(char *)(param_1 + 0x41) == '\0') &&
     (((iVar1 = fn_00154ac8(0x19), iVar1 == 0 && (*(char *)(param_1 + 0x3d) == '\x01')) ||
      ((iVar1 = fn_00154ac8(0x463), iVar1 == 0 && (*(char *)(param_1 + 0x43) == '\x01')))))) {
    iVar2 = 1;
  }
  fn_0030551c(*(undefined4 *)(param_1 + 0xc0),*(undefined4 *)(*(int *)(param_1 + 4) + 8),
               (int)*(short *)(param_1 + 0x16),(int)*(char *)(param_1 + 0x19),
               (int)*(char *)(param_1 + 0x1b),iVar2,(int)*(char *)(param_1 + 0x1d),
               (int)*(char *)(param_1 + 0x33),(int)*(char *)(param_1 + 0x35),0);
  fn_0054c514(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0xb4),
               *(undefined4 *)(*(int *)(param_1 + 0xc0) + 0xc));
  return;
}



void fn_002b1588(void)

{
                    /* WARNING: Subroutine does not return */
  fn_002b1598();
}



void fn_002aa1e0(int param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 0xf0) == 0) {
    return;
  }
  if (param_2 == 1) {
    iVar1 = fn_0022f750((char *)&DAT_002aa2b8);
  }
  else if (param_2 == 2) {
    iVar1 = fn_0022f750((char *)&DAT_002aa2c0);
  }
  else {
    if (param_2 != 4) {
      return;
    }
    iVar1 = fn_0022f4ec(param_3);
  }
  if ((iVar1 == 0) ||
     ((*(int *)(*(int *)(param_1 + 0xf0) + 0xa4) != 0 && (iVar2 = fn_00101d80(iVar1), iVar2 == 0)))
     ) {
    return;
  }
  *(byte *)(*(int *)(param_1 + 0xf0) + 0x44) = *(byte *)(*(int *)(param_1 + 0xf0) + 0x44) & 0xfe | 1
  ;
  fn_00190d50(*(undefined4 *)(param_1 + 0xf0),iVar1);
  piVar3 = (int *)fn_001854ac(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0xe8));
                    /* WARNING: Could not recover jumptable at 0x002aa284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar3 + 0x50))(piVar3,0);
  return;
}



void fn_002a2538(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  char local_40 [4];
  char local_3c [12];
  undefined1 local_30 [16];
  
  uVar1 = fn_00174864(DAT_008977e4);
  fn_00204158(uVar1,&DAT_008c7ebc);
  fn_002041b0(uVar1,&DAT_008c7ec8);
  local_30[0] = 0x20;
  uVar1 = fn_0017484c(DAT_008977e4);
  uVar1 = fn_00175dcc(uVar1,local_30);
  local_30[0] = 0x21;
  uVar2 = fn_0017484c(DAT_008977e4);
  uVar2 = fn_00175dcc(uVar2,local_30);
  uVar5 = 0;
  do {
    uVar3 = fn_0017481c(DAT_008977e4);
    uVar3 = fn_00253c9c(uVar3,(&PTR_s_Player_tusin_win_kaishi_0089098c)[uVar5],uVar5);
    fn_002050ac(uVar1,uVar3);
    fn_002050ac(uVar2,uVar3);
    uVar5 = uVar5 + 1;
  } while (uVar5 < 4);
  fn_002a26d8(param_1,1);
  fn_002a26d8(param_1,0);
  uVar1 = fn_0017484c(DAT_008977e4);
  local_3c[0] = '\"';
  do {
    piVar4 = (int *)fn_00175d88(uVar1,local_3c);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0x14))(piVar4,0);
    }
    local_3c[0] = local_3c[0] + '\x01';
  } while (local_3c[0] < '$');
  local_40[0] = '\x10';
  do {
    piVar4 = (int *)fn_00182e2c(uVar1,local_40);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0x14))(piVar4,0);
    }
    local_40[0] = local_40[0] + '\x01';
  } while (local_40[0] < '\x18');
  fn_001c2f50();
  return;
}


