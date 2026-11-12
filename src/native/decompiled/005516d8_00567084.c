#include "005516d8_00567084.h"



void fn_00567084(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_18;
  undefined1 auStack_2 [2];
  
  piVar1 = (int *)fn_006f72e0(DAT_008977e0);
  iVar2 = (**(code **)(*piVar1 + 0x3c))();
  if ((iVar2 == 0) || (1 < *(byte *)(DAT_008977e0 + 0x170))) {
    if (param_1[0x69] < 1) {
      fn_001db0c0(param_1);
      local_18 = param_4;
      switch((char)param_1[0x67]) {
      case '\0':
        fn_00566b20(param_1);
        break;
      case '\x01':
        iVar2 = param_1[0x6b];
        param_1[0x6b] = iVar2 + 1;
        if (0xf < iVar2 + 1) {
          param_1[0x6b] = 0;
          *(undefined1 *)(param_1 + 0x67) = 2;
          fn_001da39c(param_1);
          fn_001d9f6c(param_1,param_1[0x6d]);
          fn_0023e2ac(*(undefined4 *)(DAT_008977e0 + 0x2c),param_1[0x3a]);
          fn_0023dca4(*(undefined4 *)(DAT_008977e0 + 0x2c),param_1[0x3a],param_1 + 0xe);
        }
        break;
      case '\x02':
        iVar2 = param_1[0x6b];
        param_1[0x6b] = iVar2 + 1;
        if (0x1e < iVar2 + 1) {
          param_1[0x6b] = 0;
          fn_001daac0(param_1);
          *(undefined1 *)(param_1 + 0x67) = 0;
          *(undefined1 *)(param_1 + 0x6e) = 0;
          param_1[0x6f] = -1;
        }
        break;
      case '\x03':
        fn_00566c40(param_1);
        break;
      case '\x04':
        if ((*(int *)(DAT_00897810 + 0x14) == *(int *)(DAT_00897810 + 0xc)) &&
           (*(int *)(DAT_0089780c + 0x14) == *(int *)(DAT_0089780c + 0xc))) {
          *(undefined1 *)(param_1 + 0x67) = 5;
          uVar4 = fn_006945fc(DAT_008977e0,(char *)&DAT_00566d70);
          uVar3 = fn_006f75ac(DAT_008977e0);
          fn_0038fee8(uVar3,uVar4);
          uVar4 = fn_006f75ac(DAT_008977e0);
          local_18 = 0;
          fn_0038ff40(uVar4,0,0,1);
        }
        break;
      case '\x05':
        iVar2 = fn_006f7a84(DAT_008977e0);
        if (*(char *)(iVar2 + 0x22d) == '\a') {
          iVar2 = fn_006f75ac(DAT_008977e0);
          iVar2 = fn_001759d0(*(undefined4 *)(iVar2 + 8));
          if (iVar2 == 0) {
            uVar4 = fn_006f7a48(DAT_008977e0);
            fn_00128744(uVar4,0);
            iVar2 = fn_006f7a84(DAT_008977e0);
            *(undefined1 *)(iVar2 + 0x3e3) = 0;
            (**(code **)(*param_1 + 0x138))(param_1);
            *(undefined1 *)(param_1 + 0x67) = 0;
          }
        }
      }
      if (param_1[0x6f] != -1) {
        fn_001d9a94(param_1,auStack_2 + -0xe,auStack_2 + -10,local_18);
                    /* WARNING: Subroutine does not return */
        fn_001638a0();
      }
      return;
    }
    param_1[0x69] = param_1[0x69] + -1;
  }
  return;
}



undefined4 fn_00562198(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 local_20;
  
  local_20 = param_4;
  fn_003a4080();
  bVar1 = *(byte *)(DAT_00897840 + 0x36);
  fn_00689930(param_1,0,0);
  if (bVar1 < 2) {
    *(undefined4 *)(param_1 + 0x68) = 1;
    fn_003a2a90(*(undefined4 *)(DAT_00897840 + 0x30));
    goto code_r0x005622a0;
  }
  if (bVar1 != 2) {
    if (bVar1 == 3) {
      fn_003c1f64(*(undefined4 *)(param_1 + 0x70));
      *(undefined4 *)(param_1 + 0x68) = 0x1f;
      goto code_r0x005622a0;
    }
    if (bVar1 == 4) {
      fn_003c1f64(*(undefined4 *)(param_1 + 0x70));
      *(undefined4 *)(param_1 + 0x68) = 0x20;
      local_20 = 0;
      fn_00163988(DAT_00897808,&local_20,1);
      local_20 = 0;
      fn_00163988(DAT_0089780c,&local_20,1);
      goto code_r0x005622a0;
    }
    if (bVar1 != 5) goto code_r0x005622a0;
  }
  fn_003c1f64(*(undefined4 *)(param_1 + 0x70));
  *(undefined4 *)(param_1 + 0x68) = 0x1e;
code_r0x005622a0:
  fn_002525fc();
  puVar2 = (undefined4 *)fn_00689c1c(param_1,0x80);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_008964f4) goto LAB_005622e4;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_005622e4:
  *(undefined4 **)(param_1 + 0xa0) = puVar2;
  puVar2 = (undefined4 *)fn_001f74d8(param_1,0x100);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_00892df0) goto LAB_00562328;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_00562328:
  *(undefined4 **)(param_1 + 0x8c) = puVar2;
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(DAT_00897840 + 0x30);
  iVar4 = fn_00145b00(0x10,&DAT_00812c8c);
  piVar5 = (int *)0x0;
  if (iVar4 != 0) {
    piVar5 = (int *)fn_00561f24(iVar4,*(undefined4 *)(param_1 + 0x70));
  }
  piVar6 = *(int **)(param_1 + 0x84);
  if (piVar6 != piVar5) {
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 4))(piVar6);
    }
    *(int **)(param_1 + 0x84) = piVar5;
  }
  iVar4 = fn_00145b00(0x24,&DAT_00812c8c);
  piVar5 = (int *)0x0;
  if (iVar4 != 0) {
    piVar5 = (int *)fn_0044180c(iVar4,*(undefined4 *)(param_1 + 0x70),1);
  }
  piVar6 = *(int **)(param_1 + 0x88);
  if (piVar6 != piVar5) {
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 4))(piVar6);
    }
    *(int **)(param_1 + 0x88) = piVar5;
  }
  *(int *)(param_1 + 0x74) = DAT_00897840;
  return 1;
}



int * fn_005516d8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int *piVar2;
  undefined1 auStack_60 [72];
  
  fn_0017d96c(auStack_60,0x48,0x47,(char *)&DAT_007d8884,param_2);
  uVar1 = (**(code **)(**(int **)(param_1 + 0x24) + 0xc))
                    (*(int **)(param_1 + 0x24),0x626c7974,auStack_60,0);
  piVar2 = (int *)(**(code **)(*DAT_0089a918 + 8))(DAT_0089a918,0x3c,4);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    *piVar2 = (int)&DAT_00857c64;
    piVar2[1] = 0;
    piVar2[2] = (int)(piVar2 + 2);
    piVar2[4] = 0;
    piVar2[3] = (int)(piVar2 + 2);
    piVar2[5] = 0;
    piVar2[6] = 0;
    piVar2[7] = 0;
    piVar2[8] = 0;
    piVar2[9] = 0;
    piVar2[10] = 0;
    piVar2[0xb] = (int)(piVar2 + 0xb);
    piVar2[0xd] = 0;
    piVar2[0xc] = (int)(piVar2 + 0xb);
    piVar2[0xe] = 0;
  }
  (**(code **)(*piVar2 + 0x38))(piVar2,uVar1,*(undefined4 *)(param_1 + 0x24),param_4,param_3);
  return piVar2;
}


