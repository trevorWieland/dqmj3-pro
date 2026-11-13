#include "002b5578_002b7874.h"



void fn_002b7874(undefined4 *param_1)

{
  *param_1 = &DAT_00851bdc;
  fn_003a6aa4(*(undefined4 *)(param_1[2] + 0x48),0);
  fn_002feef8(param_1);
  return;
}



void fn_002b62f4(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  bool bVar7;
  bool bVar8;
  
  fn_003a8e88(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48));
  uVar2 = fn_00660f58((int)*(short *)(*(int *)(param_1 + 8) + 0x6e));
  iVar3 = fn_00174828(DAT_008977e4);
  cVar1 = *(char *)(iVar3 + 0x4282);
  iVar3 = fn_00174828(DAT_008977e4);
  if (cVar1 == '\0') {
    bVar7 = false;
    if (*(char *)(*(int *)(param_1 + 8) + 0x58) == '\0') goto LAB_002b6374;
    bVar6 = 1;
  }
  else {
    bVar7 = *(char *)(*(int *)(param_1 + 8) + 0x58) != cVar1;
LAB_002b6374:
    bVar6 = 0;
  }
  if (*(char *)(iVar3 + 0x4292) == '\0') {
    bVar8 = false;
    if (*(char *)(*(int *)(param_1 + 8) + 0x59) != '\0') {
      bVar5 = 1;
      goto LAB_002b63b0;
    }
  }
  else {
    bVar8 = *(char *)(*(int *)(param_1 + 8) + 0x59) != *(char *)(iVar3 + 0x4292);
  }
  bVar5 = 0;
LAB_002b63b0:
  if (((byte)((bVar6 | bVar7) & (bVar8 | bVar5)) == 0) || (iVar3 = fn_001c25e4(), iVar3 != 0)) {
    iVar3 = 0;
  }
  else {
    iVar3 = 1;
  }
  fn_003a8034(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),uVar2,iVar3);
  *(undefined1 *)(*(int *)(param_1 + 4) + 0x41) = 0;
  *(undefined1 *)(*(int *)(param_1 + 4) + 0x42) = 0;
  *(undefined1 *)(*(int *)(param_1 + 4) + 0x43) = 0;
  fn_003a5f88(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),(bVar6 | bVar7) ^ 1);
  iVar4 = *(int *)(*(int *)(param_1 + 8) + 0x48);
  if (*(char *)(iVar4 + 0xe2) == '\0') {
    return;
  }
  if (iVar3 == 0) {
    fn_00190cdc(*(undefined4 *)(iVar4 + 0xe8),1);
    return;
  }
  fn_00190e00();
  return;
}



undefined1 fn_002b5b34(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined1 auStack_48 [4];
  undefined1 local_44 [4];
  undefined1 local_40 [8];
  undefined1 local_38 [20];
  
  fn_002b5424();
  local_40[0] = 0x1a;
  uVar1 = 0x1a;
  if (*(int *)(*(int *)(param_1 + 8) + 0x10) != 0) {
    iVar2 = fn_00182988(DAT_008977e4);
    if (*(char *)(iVar2 + 0x3a3) == '\0') {
      uVar3 = fn_006ba11c(param_1);
      uVar4 = fn_006ba178(param_1);
      if ((uVar3 & 0x110000) == 0) {
        if ((uVar4 & 0xc) != 0) {
          fn_003a7cf0(param_1,local_40,3);
          uVar7 = *(undefined4 *)(*(int *)(param_1 + 8) + 0x48);
          if ((uVar4 & 8) == 0) {
            fn_003a8da4(uVar7);
          }
          else {
            fn_003a8cd4(uVar7,1);
          }
          fn_003a7e9c(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),~(uVar4 >> 3) & 1);
                    /* WARNING: Subroutine does not return */
          fn_001638a0();
        }
        if ((uVar3 & 0x20000) != 0) {
          fn_003a69e4(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),0);
                    /* WARNING: Subroutine does not return */
          fn_001638a0();
        }
        if ((uVar3 & 0x40000) == 0) {
          if ((uVar3 & 0x80000) == 0) {
            if ((uVar3 & 0x200000) != 0) {
              fn_003ef8ec(*(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0x4c) + 0x10));
            }
            return local_40[0];
          }
          iVar2 = fn_003a6e20(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48));
          if (iVar2 == 0) {
            fn_003a7414(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48));
                    /* WARNING: Subroutine does not return */
            fn_001638a0();
          }
          local_38[0] = 0x10;
          fn_004228d0(*(undefined4 *)(*(int *)(param_1 + 4) + 0x20),
                       *(undefined4 *)(*(int *)(param_1 + 8) + 0x14),local_38);
          fn_003a7cf0(param_1,local_40,0xd);
                    /* WARNING: Subroutine does not return */
          fn_001638a0();
        }
        iVar2 = fn_00353aa4(*(undefined4 *)(*(int *)(param_1 + 8) + 0x54));
        if (iVar2 != 0) {
          fn_0035413c(*(undefined4 *)(*(int *)(param_1 + 8) + 0x54));
                    /* WARNING: Subroutine does not return */
          fn_001638a0();
        }
      }
      else {
        iVar2 = fn_006c5d68(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48));
        fn_00353bd4(*(undefined4 *)(*(int *)(param_1 + 8) + 0x54));
        if (iVar2 != 0xff) {
          fn_003a7e38(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),0);
        }
        if (iVar2 != 4) {
          if (iVar2 < 5) {
            if (iVar2 == 0) {
              local_44[0] = 0x1a;
              iVar2 = fn_00182988(DAT_008977e4);
              if (*(char *)(iVar2 + 0x39c) == '\0') {
                fn_00376bec(*(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0x4c) + 0xc));
                fn_002d46cc(*(undefined4 *)(param_1 + 8));
                uVar7 = 0x11;
              }
              else {
                uVar7 = 0x13;
                *(int *)(*(int *)(param_1 + 4) + 0x48) = *(int *)(*(int *)(param_1 + 4) + 0x48) + 1;
              }
              fn_003a7cf0(param_1,local_44,uVar7);
              local_40[0] = local_44[0];
                    /* WARNING: Subroutine does not return */
              fn_001638a0();
            }
            if (iVar2 == 1) {
              fn_003a7548(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),2);
              fn_003a745c(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48));
              fn_003a5bbc(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),4,1);
              fn_0037745c(*(undefined4 *)(*(int *)(param_1 + 4) + 0x3c));
              fn_003a7cf0(param_1,local_40,2);
                    /* WARNING: Subroutine does not return */
              fn_001638a0();
            }
            if (iVar2 == 2) {
              fn_003a7548(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),2);
              fn_003a745c(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48));
              fn_003a5bbc(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),4,1);
              fn_003a7cf0(param_1,local_40,2);
            }
            else {
              if (iVar2 != 3) {
                return local_40[0];
              }
              fn_003a8da4(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48));
              fn_003a7cf0(param_1,local_40,10);
            }
          }
          else if (iVar2 == 5) {
            fn_003a745c(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48));
            fn_003a7cf0(param_1,local_40,0xc);
          }
          else if (iVar2 == 6) {
            iVar2 = fn_001c25e4();
            if (iVar2 == 0) {
              piVar6 = *(int **)(*(int *)(param_1 + 4) + 0x1c);
              (**(code **)(*piVar6 + 0x18))(piVar6,1,0);
              fn_003a7cf0(param_1,local_40,0x16);
              uVar7 = fn_001603f8(local_44,0xff);
              uVar5 = fn_001603f8(auStack_48,0);
              fn_0068869c(DAT_00897808,uVar5,uVar7,0xf);
            }
            else {
              piVar6 = *(int **)(*(int *)(param_1 + 4) + 0x18);
              (**(code **)(*piVar6 + 0x18))(piVar6,1,0);
              fn_003a7cf0(param_1,local_40,0x17);
            }
          }
          else {
            if (iVar2 != 7) {
              if (iVar2 == 0xff) {
                fn_003a68ac(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48));
                    /* WARNING: Subroutine does not return */
                fn_001638a0();
              }
              return local_40[0];
            }
            iVar2 = fn_00174828(DAT_008977e4);
            uVar8 = fn_00182988(DAT_008977e4);
            if (*(char *)((int)uVar8 + 0x39f) != '\0') {
                    /* WARNING: Subroutine does not return */
              fn_001638a0();
            }
            uVar8 = fn_006f4868(iVar2 + 0xe8,(int)((ulonglong)uVar8 >> 0x20),4,0);
            if (((int)uVar8 == 0) &&
               (iVar2 = fn_006f4868(iVar2 + 0xe8,(int)((ulonglong)uVar8 >> 0x20),0x2000,0),
               iVar2 == 0)) {
              iVar2 = fn_006a7b78(DAT_008977e4);
              *(undefined1 *)(iVar2 + 0x36) = 1;
              fn_00376bec(*(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0x4c) + 0xc));
                    /* WARNING: Subroutine does not return */
              fn_001638a0();
            }
            piVar6 = *(int **)(*(int *)(param_1 + 4) + 0x14);
            (**(code **)(*piVar6 + 0x18))(piVar6,1,0);
            fn_003a7cf0(param_1,local_40,0xe);
          }
                    /* WARNING: Subroutine does not return */
          fn_001638a0();
        }
        iVar2 = fn_003d2290(*(undefined4 *)(*(int *)(param_1 + 4) + 0x10));
        if (iVar2 != 0) {
          fn_003a7548(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),2);
          fn_003d22b4(*(undefined4 *)(*(int *)(param_1 + 4) + 0x10));
          iVar2 = *(int *)(param_1 + 8);
          *(undefined2 *)(iVar2 + 0x6e) = 0;
          *(undefined1 *)(iVar2 + 0x70) = 0;
          fn_00353b88(*(undefined4 *)(*(int *)(param_1 + 8) + 0x54));
          fn_0037745c(*(undefined4 *)(*(int *)(param_1 + 4) + 0x3c));
                    /* WARNING: Subroutine does not return */
          fn_001638a0();
        }
      }
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
    *(int *)(*(int *)(param_1 + 4) + 0x48) = *(int *)(*(int *)(param_1 + 4) + 0x48) + 1;
    uVar1 = 0x13;
  }
  return uVar1;
}



void fn_002b5970(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_10;
  
  local_10 = param_4;
  fn_003a7e9c(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),2);
  fn_003a5bbc(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),0,1);
  fn_003773f4(*(undefined4 *)(*(int *)(param_1 + 4) + 0x3c));
  piVar1 = *(int **)(*(int *)(param_1 + 8) + 0x78);
  (**(code **)(*piVar1 + 0x18))(piVar1,0,1);
  piVar1 = *(int **)(*(int *)(param_1 + 8) + 0x7c);
  (**(code **)(*piVar1 + 0x18))(piVar1,0,0,1);
  piVar1 = *(int **)(*(int *)(param_1 + 8) + 0x84);
  (**(code **)(*piVar1 + 0x18))(piVar1,0,0,1);
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0x10);
  (**(code **)(*piVar1 + 0x18))(piVar1,0,1);
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0x14);
  (**(code **)(*piVar1 + 0x18))(piVar1,0,0);
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0x18);
  (**(code **)(*piVar1 + 0x18))(piVar1,0,0);
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0x1c);
  (**(code **)(*piVar1 + 0x18))(piVar1,0,0);
  fn_001f749c(*(undefined4 *)(*(int *)(param_1 + 4) + 4),0,0);
  *(undefined1 *)(param_1 + 0xd) = 1;
  fn_003a69e4(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),0);
  local_10 = CONCAT31(((unsigned int)(local_10) >> 8) & 0xffffff,0x1a);
  iVar2 = fn_00182988(DAT_008977e4);
  if (*(char *)(iVar2 + 0x39c) == '\0') {
    fn_00376bec(*(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0x4c) + 0xc));
    fn_002d46cc(*(undefined4 *)(param_1 + 8));
    uVar3 = 0x11;
  }
  else {
    uVar3 = 0x13;
    *(int *)(*(int *)(param_1 + 4) + 0x48) = *(int *)(*(int *)(param_1 + 4) + 0x48) + 1;
  }
  fn_003a7cf0(param_1,&local_10,uVar3);
  *(undefined1 *)(param_1 + 0xd) = (undefined1)local_10;
  return;
}



int fn_002b5578(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  uint in_fpscr;
  
  iVar7 = 0x1a;
  uVar3 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0x4c) + 0xc);
  if (*(char *)(param_1 + 0xe) != '\0') {
    iVar7 = fn_0037645c();
    if (iVar7 == 0) {
      return 0xf;
    }
    return 0x1a;
  }
  fn_00376634();
  iVar4 = fn_00182988(DAT_008977e4);
  if (*(char *)(iVar4 + 0x39d) == '\0') {
    pcVar5 = (char *)fn_00174828(DAT_008977e4);
    fn_00376480(uVar3,*pcVar5 + 1,0);
    iVar4 = fn_00182988(DAT_008977e4);
    if (*(char *)(iVar4 + 0x39e) == '\0') {
      iVar7 = 1;
      goto LAB_002b5690;
    }
  }
  else {
    iVar4 = fn_00174828(DAT_008977e4);
    if (*(char *)(iVar4 + 0xf8) == '\0') {
      pcVar5 = (char *)fn_00174828(DAT_008977e4);
      fn_00376480(uVar3,*pcVar5 + 1,0);
      iVar7 = 1;
    }
    else {
      iVar4 = fn_00174828(DAT_008977e4);
      cVar2 = fn_006f4830(iVar4 + 0xe8);
      pcVar5 = (char *)fn_00174828(DAT_008977e4);
      fn_00376480(uVar3,cVar2 - *pcVar5,0);
    }
  }
  *(undefined1 *)(param_1 + 0xe) = 1;
LAB_002b5690:
  iVar4 = fn_00174828(DAT_008977e4);
  uVar1 = *(undefined1 *)(iVar4 + 1);
  iVar4 = fn_00174828(DAT_008977e4);
  fn_00376338(uVar3,(int)*(char *)(iVar4 + 2),uVar1);
  fn_00376814(uVar3);
  uVar6 = fn_006a7b6c(DAT_008977e4);
  VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x16) & 3);
  fn_00376314(uVar3);
  iVar4 = *(int *)(param_1 + 8);
  *(undefined2 *)(iVar4 + 0x5a) = 0;
  *(undefined1 *)(iVar4 + 0x5c) = 0;
  *(undefined2 *)(iVar4 + 0x5e) = 0;
  *(undefined1 *)(iVar4 + 0x60) = 0;
  *(undefined2 *)(iVar4 + 0x62) = 0;
  *(undefined1 *)(iVar4 + 100) = 0;
  *(undefined2 *)(iVar4 + 0x66) = 0;
  *(undefined1 *)(iVar4 + 0x68) = 0;
  *(undefined2 *)(iVar4 + 0x6a) = 0;
  *(undefined1 *)(iVar4 + 0x6c) = 0;
  *(undefined2 *)(iVar4 + 0x6e) = 0;
  *(undefined1 *)(iVar4 + 0x70) = 0;
  *(undefined1 *)(iVar4 + 0x58) = 0;
  *(undefined1 *)(iVar4 + 0x59) = 0;
  iVar4 = *(int *)(param_1 + 8);
  *(undefined1 *)(iVar4 + 0x5d) = 0xff;
  *(undefined1 *)(iVar4 + 0x61) = 0xff;
  *(undefined1 *)(iVar4 + 0x65) = 0xff;
  *(undefined1 *)(iVar4 + 0x69) = 0xff;
  fn_00588b60(*(undefined4 *)(*(int *)(param_1 + 8) + 0x7c));
  iVar4 = fn_00182988(DAT_008977e4);
  if ((*(char *)(iVar4 + 0x3a3) == '\0' && iVar7 == 1) &&
     (iVar4 = fn_003a6884(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48)), iVar4 != 0)) {
    fn_003a6a78(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),0);
  }
  return iVar7;
}


