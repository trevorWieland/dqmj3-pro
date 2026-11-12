#include "0035054c_0035491c.h"



undefined4 fn_0035491c(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if (param_2 != 8) {
    if (param_2 != 9) {
      return 1;
    }
    *(undefined1 *)(param_1 + 0xd5) = 1;
    if (param_3 == 0) {
      *(undefined1 *)(param_1 + 0xd4) = 1;
      fn_00689828(param_1,0);
      *(undefined1 *)(param_1 + 0xc0) = 4;
    }
    else {
      (**(code **)(**(int **)(param_1 + 0xbc) + 0x2c))(*(int **)(param_1 + 0xbc),1,4,0);
      *(undefined4 *)(param_1 + 0xd8) = 3;
      *(undefined1 *)(param_1 + 0xc0) = 3;
    }
    fn_0025e4dc(*(undefined4 *)(param_1 + 0xb4),1);
    fn_0068ab44(param_1,0x100094c);
    return 0;
  }
  iVar1 = fn_00307600(*(undefined4 *)(param_1 + 0xa8));
  if (iVar1 == 0) {
    iVar1 = 0;
    do {
      if ((*(int *)(param_1 + iVar1 * 8 + 0x118) != 0) &&
         (iVar2 = (**(code **)(**(int **)(param_1 + 0xa8) + 0x30))
                            (*(int **)(param_1 + 0xa8),0,iVar1), *(char *)(iVar2 + 0x33) != '\0')) {
        if (param_3 == 0) {
          *(undefined1 *)(param_1 + 0xd4) = 1;
          fn_00689828(param_1,0);
          *(undefined1 *)(param_1 + 0xc0) = 4;
        }
        else {
          (**(code **)(**(int **)(param_1 + 0xbc) + 0x2c))(*(int **)(param_1 + 0xbc),0,4);
          *(undefined4 *)(param_1 + 0xd8) = 3;
          *(undefined1 *)(param_1 + 0xc0) = 3;
        }
        if (*(char *)(param_1 + 0xd5) == '\0') {
          piVar3 = *(int **)(param_1 + 0x90);
          piVar4 = *(int **)(param_1 + 0x78);
          if ((((*piVar4 != *piVar3) || (piVar4[1] != piVar3[1])) || (piVar4[2] != piVar3[2])) ||
             (piVar4[3] != piVar3[3])) {
            fn_00355748(param_1);
            fn_0028a66c(*(undefined4 *)(DAT_00897804 + 0xc));
            iVar1 = 0;
            do {
              if (*(int *)(*(int *)(param_1 + 0x90) + iVar1 * 4) != 0) {
                fn_0028b7ac(*(undefined4 *)(DAT_00897804 + 0xc));
              }
              iVar1 = iVar1 + 1;
            } while (iVar1 < 4);
            fn_0028acf4(*(undefined4 *)(DAT_00897804 + 0xc));
            iVar1 = 0;
            do {
              if (*(int *)(*(int *)(param_1 + 0x9c) + iVar1 * 4) != 0) {
                fn_0028a588(*(undefined4 *)(DAT_00897804 + 0xc));
              }
              iVar1 = iVar1 + 1;
            } while (iVar1 < 4);
            fn_0068ab44(param_1,0x100094b);
LAB_00354b4c:
            fn_0025e4dc(*(undefined4 *)(param_1 + 0xb4),1);
            return 1;
          }
        }
        fn_0068ab44(param_1,0x100094c);
        goto LAB_00354b4c;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 4);
  }
  fn_0068ab44(param_1,0x100094d);
  return 0;
}



void fn_0035054c(undefined4 param_1)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  wchar16 *pwStack_94;
  char *pcStack_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined1 auStack_78 [4];
  undefined1 auStack_74 [4];
  undefined1 auStack_70 [4];
  undefined1 auStack_6c [4];
  undefined4 local_68;
  undefined1 local_62;
  undefined1 auStack_60 [64];
  int local_20;
  
  fn_002c330c(&pwStack_94);
  local_8c = 5;
  uStack_88 = 0;
  local_80 = 5;
  local_84 = 0;
  pwStack_94 = L"rom:/data/Layout/common/common_0100.arc";
  pcStack_90 = (char *)&DAT_003508f0;
  uVar3 = fn_0022f750((char *)&DAT_00350904);
  fn_00147974(auStack_78,uVar3);
  fn_00147974(auStack_74,&DAT_00350918);
  fn_00147974(auStack_70,&DAT_00350918);
  fn_00147974(auStack_6c,&DAT_00350918);
  local_62 = 1;
  local_68 = 0;
  fn_002c29a0(param_1,&pwStack_94);
  iVar6 = 0;
  do {
    uVar3 = fn_0022f750((&DAT_007c79f8)[iVar6 * 2]);
    fn_0031b78c(param_1,iVar6,0,uVar3);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 5);
  puVar4 = (undefined4 *)fn_001f74d8(param_1,0x36);
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = (undefined4 *)(**(code **)*puVar4)(puVar4);
    do {
      if (puVar5 == &DAT_008951dc) goto LAB_0035064c;
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != (undefined4 *)0x0);
  }
  puVar4 = (undefined4 *)0x0;
LAB_0035064c:
  iVar6 = fn_006bebf8(*(undefined4 *)(DAT_00897804 + 0x40));
  if (iVar6 != 0) {
    iVar6 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc));
    if (iVar6 != 0) {
      fn_002311c4(auStack_60,0x20,(int)*(short *)(iVar6 + 0x1c),iVar6 + 4,0);
      fn_00147974(puVar4 + 8,auStack_60);
      local_20 = iVar6;
      uVar1 = fn_006bf2b4();
      *(undefined1 *)((int)puVar4 + 0x27) = uVar1;
      puVar4[0x2b] = *(undefined4 *)(iVar6 + 0x72);
      puVar4[0x2c] = *(undefined4 *)(iVar6 + 0x76);
      puVar4[0x2d] = *(undefined4 *)(iVar6 + 0x7a);
      puVar4[0x2e] = *(undefined4 *)(iVar6 + 0x7e);
      *(undefined2 *)(puVar4 + 0x2f) = *(undefined2 *)(iVar6 + 0x82);
      goto LAB_00350720;
    }
    fn_00113974(*(undefined4 *)(DAT_00897804 + 0x40),0);
    fn_00113ba0(*(undefined4 *)(DAT_00897804 + 0x44),0);
  }
  fn_00147974(puVar4 + 8,&DAT_00350918);
  *(undefined1 *)((int)puVar4 + 0x27) = 0;
LAB_00350720:
  uVar2 = fn_006c3b74(*(undefined4 *)(DAT_00897804 + 0x44));
  *(undefined2 *)(puVar4 + 7) = uVar2;
  fn_001003e0((int)puVar4 + 0x2e6,**(undefined4 **)(DAT_00897804 + 0x44));
  uVar1 = fn_006c3b68(*(undefined4 *)(DAT_00897804 + 0x44));
  *(undefined1 *)((int)puVar4 + 0x2e5) = uVar1;
  *(undefined1 *)(puVar4 + 0xb9) = 1;
  puVar4[0xcd] = 0x1b;
  fn_00689efc(param_1,0x36,0);
  fn_001f7810(param_1,0xf,1,0);
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}


