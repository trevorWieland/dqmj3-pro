#include "0018b484_0018c39c.h"



void fn_0018c39c(undefined4 param_1,undefined4 param_2)

{
  fn_0019be0c(param_1,param_2,&LAB_0055ac08,0);
  return;
}



void fn_0018c370(undefined4 param_1,undefined4 param_2)

{
  fn_0019be0c(param_1,param_2,&LAB_0055aa88,0);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0018c33c) */

void fn_0018c2ec(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    if (param_2 == 0) {
      return;
    }
    if ((((param_2 & 1) != 0) && (iVar2 < 0x10)) &&
       (iVar1 = *(int *)(param_1 + iVar2 * 4 + 0x90), iVar1 != 0)) {
      fn_0055a9c4(iVar1,param_3);
    }
    iVar2 = iVar2 + 1;
    param_2 = param_2 >> 1;
  } while (iVar2 < 0x10);
  return;
}



void fn_0018c2d4(undefined4 param_1,undefined4 param_2)

{
  fn_0019be0c(param_1,param_2,&LAB_0055a9bc,0);
  return;
}



void fn_0018c280(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  *(undefined4 *)(param_1 + 0x170) = param_2[2];
  *(undefined4 *)(param_1 + 0x168) = uVar1;
  *(undefined4 *)(param_1 + 0x16c) = uVar2;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  uVar4 = param_3[4];
  uVar5 = param_3[5];
  uVar6 = param_3[6];
  uVar7 = param_3[7];
  *(undefined4 *)(param_1 + 0x17c) = *param_3;
  *(undefined4 *)(param_1 + 0x180) = uVar1;
  *(undefined4 *)(param_1 + 0x184) = uVar2;
  *(undefined4 *)(param_1 + 0x188) = uVar3;
  *(undefined4 *)(param_1 + 0x18c) = uVar4;
  *(undefined4 *)(param_1 + 400) = uVar5;
  *(undefined4 *)(param_1 + 0x194) = uVar6;
  *(undefined4 *)(param_1 + 0x198) = uVar7;
  uVar1 = param_3[9];
  uVar2 = param_3[10];
  uVar3 = param_3[0xb];
  uVar4 = param_3[0xc];
  *(undefined4 *)(param_1 + 0x19c) = param_3[8];
  *(undefined4 *)(param_1 + 0x1a0) = uVar1;
  *(undefined4 *)(param_1 + 0x1a4) = uVar2;
  *(undefined4 *)(param_1 + 0x1a8) = uVar3;
  *(undefined4 *)(param_1 + 0x1ac) = uVar4;
  *(undefined1 *)(param_1 + 0x164) = 1;
  uVar1 = fn_00172fc4();
  fn_00195e04(uVar1,param_1 + 0x50);
  *(undefined1 *)(param_1 + 0x166) = 1;
  return;
}



void fn_0018c03c(int param_1,uint param_2,undefined1 param_3)

{
  uint uVar1;
  
  uVar1 = 0;
  for (; (uVar1 < *(uint *)(param_1 + 0x224) && (param_2 != 0)); param_2 = param_2 >> 1) {
    if ((param_2 & 1) != 0) {
      *(undefined1 *)(param_1 + uVar1 * 0x24 + 0x2075) = param_3;
    }
    uVar1 = uVar1 + 1;
  }
  return;
}



void fn_0018bffc(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 in_s0;
  
  uVar1 = 0;
  for (; (uVar1 < *(uint *)(param_1 + 0x224) && (param_2 != 0)); param_2 = param_2 >> 1) {
    if ((param_2 & 1) != 0) {
      *(undefined4 *)(param_1 + uVar1 * 0x24 + 0x2088) = in_s0;
    }
    uVar1 = uVar1 + 1;
  }
  return;
}



void fn_0018bdc8(int param_1,undefined1 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 unaff_r9;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 auStack_78 [4];
  undefined4 local_74;
  undefined1 auStack_6c [80];
  
  if (*(char *)(param_1 + 0x50) != '\0') {
    *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_2 + 0x10);
    fn_00195a5c(auStack_78);
    fn_001959d4(auStack_78,*(undefined4 *)(param_1 + 0x10c));
    iVar1 = fn_0019bbe8(auStack_78,&local_84,0);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x210) = local_84;
      *(undefined4 *)(param_1 + 0x214) = local_80;
      *(undefined4 *)(param_1 + 0x218) = local_7c;
      fn_0019bbc0(auStack_78,auStack_6c);
      puVar2 = (undefined4 *)fn_001a2168(local_74);
      *(undefined4 *)(param_1 + 0xb4) = *puVar2;
      fn_00195848(param_1 + 0x88,auStack_6c);
      uVar3 = *(uint *)(param_1 + 0xb4);
      if (8 < uVar3) {
        uVar3 = 8;
      }
      *(uint *)(param_1 + 0x220) = uVar3;
      *(undefined1 *)(param_1 + 0x7c) = *param_2;
      *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 4);
      *(undefined1 *)(param_1 + 0xc) = 1;
      iVar1 = fn_00196604(param_1,param_1 + 0x88);
      if ((iVar1 != 0) && (*(uint *)(param_1 + 0xa8) < 0x2001)) {
        uVar3 = fn_00169f1c(*(undefined4 *)(*(int *)(param_1 + 100) + 8));
        *(uint *)(param_1 + 0x68) = uVar3;
        if (3 < uVar3) {
          if (0x20 < uVar3) {
            uVar3 = 0x20;
          }
          *(uint *)(param_1 + 0x68) = uVar3;
          *(undefined4 *)(param_1 + 0x6c) = 0;
          *(undefined4 *)(param_1 + 0x70) = 0;
          *(undefined4 *)(param_1 + 0x74) = 0;
          *(undefined4 *)(param_1 + 0x78) = 0;
          iVar1 = fn_0018b794();
          uVar3 = *(uint *)(param_1 + 0x220);
          if (*(uint *)(iVar1 + 0x20) < uVar3) {
LAB_0018bfa8:
            uVar3 = 0;
            if (*(int *)(param_1 + 0x220) != 0) {
              do {
                iVar1 = param_1 + uVar3 * 0x3c8;
                if (*(int *)(iVar1 + 0x228) != 0) {
                  fn_00195f04(*(undefined4 *)(param_1 + 100));
                  *(undefined4 *)(iVar1 + 0x228) = 0;
                }
                uVar3 = uVar3 + 1;
              } while (uVar3 < *(uint *)(param_1 + 0x220));
              return;
            }
          }
          else {
            if (uVar3 != 0) {
              unaff_r9 = 0x7fff;
            }
            uVar6 = 0;
            if (uVar3 != 0) {
              do {
                iVar1 = param_1 + uVar6 * 0x3c8;
                uVar4 = fn_0018b794();
                iVar5 = fn_00195ff8(uVar4,1,unaff_r9,fn_0019622c,iVar1 + 0x228);
                if (iVar5 == 0) {
                  uVar3 = 0;
                  if (uVar6 != 0) {
                    do {
                      iVar1 = param_1 + uVar3 * 0x3c8;
                      if (*(int *)(iVar1 + 0x22c) != 0) {
                        fn_0018b010();
                        *(undefined4 *)(iVar1 + 0x22c) = 0;
                      }
                      uVar3 = uVar3 + 1;
                    } while (uVar3 < uVar6);
                  }
                  goto LAB_0018bfa8;
                }
                *(int *)(iVar1 + 0x22c) = iVar5;
                uVar6 = uVar6 + 1;
              } while (uVar6 < *(uint *)(param_1 + 0x220));
            }
            *(undefined1 *)(param_1 + 0x53) = 1;
            fn_00196264(param_1,auStack_78);
          }
        }
      }
    }
  }
  return;
}



void fn_0018bd88(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 in_s0;
  
  uVar1 = 0;
  for (; (uVar1 < *(uint *)(param_1 + 0x224) && (param_2 != 0)); param_2 = param_2 >> 1) {
    if ((param_2 & 1) != 0) {
      *(undefined4 *)(param_1 + uVar1 * 0x24 + 0x2080) = in_s0;
    }
    uVar1 = uVar1 + 1;
  }
  return;
}



void fn_0018bd68(void)

{
  fn_001a078c();
  return;
}



void fn_0018bd28(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 in_s0;
  
  uVar1 = 0;
  for (; (uVar1 < *(uint *)(param_1 + 0x224) && (param_2 != 0)); param_2 = param_2 >> 1) {
    if ((param_2 & 1) != 0) {
      *(undefined4 *)(param_1 + uVar1 * 0x24 + 0x2084) = in_s0;
    }
    uVar1 = uVar1 + 1;
  }
  return;
}



void fn_0018b6c0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0xc) != '\0') {
    *(undefined1 *)(param_1 + 0xf) = 1;
    if (*(char *)(param_1 + 0xa2) != '\0') {
      uVar1 = fn_00172fc4();
      fn_001a071c(uVar1,param_1 + 0x50);
      *(undefined1 *)(param_1 + 0xa2) = 0;
    }
    if (*(char *)(param_1 + 0xd) != '\0') {
      *(undefined1 *)(param_1 + 0xd) = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x6c) = *param_2;
  *(undefined1 *)(param_1 + 0x70) = *(undefined1 *)(param_2 + 1);
  *(undefined4 *)(param_1 + 0x74) = param_2[2];
  *(undefined4 *)(param_1 + 100) = *param_3;
  *(undefined4 *)(param_1 + 0x68) = param_3[1];
  *(undefined1 *)(param_1 + 0x5f) = *(undefined1 *)(param_3 + 2);
  *(undefined1 *)(param_1 + 0xa0) = 3;
  *(undefined1 *)(param_1 + 0xc) = 1;
  uVar1 = fn_0018c8e8();
  fn_00196754(uVar1,param_1 + 0x44);
  uVar1 = fn_00172fc4();
  fn_00195e04(uVar1,param_1 + 0x50);
  *(undefined1 *)(param_1 + 0xa2) = 1;
  return;
}



void fn_0018b678(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *(undefined4 *)(param_1 + 0x6c) = *param_2;
  *(undefined1 *)(param_1 + 0x70) = *(undefined1 *)(param_2 + 1);
  *(undefined4 *)(param_1 + 0x74) = param_2[2];
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  uVar4 = param_3[4];
  uVar5 = param_3[5];
  *(undefined4 *)(param_1 + 0xac) = *param_3;
  *(undefined4 *)(param_1 + 0xb0) = uVar1;
  *(undefined4 *)(param_1 + 0xb4) = uVar2;
  *(undefined4 *)(param_1 + 0xb8) = uVar3;
  *(undefined4 *)(param_1 + 0xbc) = uVar4;
  *(undefined4 *)(param_1 + 0xc0) = uVar5;
  *(undefined1 *)(param_1 + 0xa0) = 1;
  uVar1 = fn_00172fc4();
  fn_00195e04(uVar1,param_1 + 0x50);
  *(undefined1 *)(param_1 + 0xa2) = 1;
  return;
}



void fn_0018b484(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = param_1 + param_2 * 0x10;
  if (*(int *)(iVar1 + 0x20) < *(int *)(iVar1 + 0x1c)) {
    fn_0018b588(param_1,param_2);
  }
  fn_0019be88(iVar1 + 0x14,0);
  fn_00193fc0();
  fn_00193fe4((int)(char)param_2,param_3);
  return;
}


