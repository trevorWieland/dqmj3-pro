#include "0031250c_00313988.h"



int fn_00313988(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  if ((int)*param_2 - 0x20U < 2) {
    iVar2 = fn_00145b00(0x88,&DAT_00812c8c);
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = fn_00205414(iVar2,*param_2);
    }
    uVar3 = (uint)(char)(*param_2 + -0x10);
    if ((((-1 < (int)uVar3) && (uVar3 < (uint)(*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2)))
        && (iVar1 != 0)) && (piVar4 = (int *)(*(int *)(param_1 + 4) + uVar3 * 4), *piVar4 == 0)) {
      *piVar4 = iVar1;
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



void fn_0031390c(int param_1,int param_2)

{
  if (*(int *)(param_1 + param_2 * 4 + 0x80) == -1) {
    return;
  }
  fn_001c8d94(param_1);
  return;
}



undefined4 fn_003138f0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar4 = *(int *)(param_1 + param_2 * 4 + 0x80);
  if (iVar4 == -1) {
    return 0;
  }
  iVar4 = fn_00167500(param_1,*(undefined4 *)(param_1 + 8),param_1 + 8,iVar4);
  uVar6 = 1;
  for (piVar5 = *(int **)(iVar4 + 0x14); piVar5 != (int *)(iVar4 + 0x14); piVar5 = (int *)*piVar5) {
    iVar1 = fn_0012ead8(*(undefined4 *)(param_1 + 100),piVar5[-5]);
    if (iVar1 == 0) {
      uVar6 = 0;
    }
    else if (piVar5[-1] == 0) {
      puVar2 = (undefined4 *)fn_00145b00(100,&DAT_00812c8c);
      iVar1 = 0;
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 0;
        puVar2[1] = 0;
        iVar1 = fn_0013f7ec(puVar2 + 2);
        iVar1 = iVar1 + -8;
      }
      piVar5[-1] = iVar1;
      uVar7 = piVar5[-2];
      uVar3 = fn_0012ea14(*(undefined4 *)(param_1 + 100),piVar5[-5]);
      fn_0013f814(piVar5[-1],uVar3,uVar7);
      fn_0017d938(*(undefined4 *)(iVar4 + 0xc),piVar5[-1]);
    }
  }
  return uVar6;
}



void fn_003138d4(int param_1,int param_2)

{
  if (*(int *)(param_1 + param_2 * 4 + 0x80) != -1) {
                    /* WARNING: Subroutine does not return */
    fn_001482f4(param_1);
  }
  return;
}



void fn_00313844(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  fn_001923e0(param_1,(&PTR_s_battle_subwindows_bflyt_007ba1bc)[param_2],param_3,param_4,param_5);
  return;
}



void fn_003137a4(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1[0x39];
  *param_1 = &DAT_0082276c;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(piVar2);
    param_1[0x39] = 0;
  }
  iVar1 = fn_001296d0(DAT_00898840);
  if ((iVar1 == 0) && (*(char *)(DAT_00898840 + 0x4e) == '\0')) {
    fn_0066e744(DAT_00898840,0);
  }
  if ((int *)param_1[0x39] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x39] + 4))();
  }
  fn_007486b8(param_1);
  fn_002feef8();
  return;
}



undefined4 * fn_00313610(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  
  puVar1 = (undefined4 *)fn_0043ccf8(param_1,param_2,(char *)&DAT_00313784,0xdb,1);
  *puVar1 = &DAT_0082276c;
  *(undefined1 *)(puVar1 + 0x34) = 1;
  *(undefined1 *)((int)puVar1 + 0xd1) = 0;
  puVar1[0x35] = 0;
  puVar1[0x37] = 0;
  puVar1[0x39] = 0;
  puVar6 = (undefined4 *)puVar1[1];
  if (puVar6 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar6)(puVar6);
    do {
      if (puVar2 == &DAT_008963ac) goto LAB_00313684;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar6 = (undefined4 *)0x0;
LAB_00313684:
  puVar1[0x37] = puVar6;
  fn_0040f564(puVar6[0xf],0);
  puVar6 = (undefined4 *)fn_00689c1c(puVar1,0x80);
  if (puVar6 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar6)(puVar6);
    do {
      if (puVar2 == &DAT_008964f4) goto LAB_003136d4;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar6 = (undefined4 *)0x0;
LAB_003136d4:
  puVar1[0x38] = puVar6;
  puVar6 = (undefined4 *)fn_001f74d8(puVar1,0xfe);
  if (puVar6 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar6)(puVar6);
    do {
      if (puVar2 == &DAT_00892cf0) goto LAB_00313718;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar6 = (undefined4 *)0x0;
LAB_00313718:
  iVar3 = fn_00145b00(0x1c,&DAT_00812c8c);
  piVar4 = (int *)0x0;
  if (iVar3 != 0) {
    piVar4 = (int *)fn_005ce1f4(iVar3,puVar1[0x37],puVar6);
  }
  piVar5 = (int *)puVar1[0x39];
  if (piVar5 != piVar4) {
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
    puVar1[0x39] = piVar4;
  }
  fn_00689efc(puVar1,0x39,0);
  return puVar1;
}



void fn_00312c90(void)

{
  undefined4 uVar1;
  
  uVar1 = fn_0066eb80(DAT_00898840,0xb);
  fn_00674f6c(uVar1,&DAT_008c9d50,8);
  fn_0066e70c(DAT_00898840,&DAT_008c9d50,0x60);
  return;
}



undefined4 fn_00312c24(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  uVar1 = fn_0043c608();
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_008963ac) goto LAB_00312c7c;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_00312c7c:
  *(undefined1 *)(puVar2 + 0xe) = 9;
  return uVar1;
}



undefined4 * fn_00312a7c(undefined4 param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  puVar1 = (undefined4 *)fn_0023e8ec(param_1,2);
  *puVar1 = &DAT_0082274c;
  uVar3 = puVar1[9];
  uVar4 = puVar1[10];
  if (uVar3 != uVar4) {
    uVar2 = uVar3;
    if (uVar4 <= uVar3) {
      do {
        uVar2 = uVar2 + 8;
      } while (uVar2 != uVar4);
    }
    puVar1[10] = uVar4 - (uVar4 - uVar3 & 0xfffffff8);
  }
  fn_0023df88(puVar1,3,fn_00312a38);
  fn_0023df88(puVar1,4,&LAB_0023d3fc);
  return puVar1;
}



int fn_00312a38(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_14 [2];
  
  if (*(char *)(param_1 + 0x34) != '\0') {
    iVar3 = fn_006b4d08();
    param_1 = 0;
    if (iVar3 != 0) {
      iVar5 = *(int *)(param_3 + 4);
      iVar4 = fn_001c2368(DAT_008977e4);
      iVar3 = iVar4;
      local_14[0] = iVar5;
      iVar1 = fn_006a7b6c(DAT_008977e4);
      if (iVar1 != 1) {
        piVar2 = *(int **)(iVar4 + 4);
        while( true ) {
          if (*(int **)(iVar4 + 8) == piVar2) {
            return 0x21;
          }
          if (*piVar2 == iVar5) break;
          piVar2 = piVar2 + 1;
        }
      }
      piVar2 = *(int **)(iVar4 + 0x10);
      while( true ) {
        if (*(int **)(iVar4 + 0x14) == piVar2) {
          piVar2 = *(int **)(iVar4 + 0x14);
          if (piVar2 == *(int **)(iVar4 + 0x18)) {
            fn_0079df24(iVar4 + 0x10,piVar2,local_14,*(int **)(iVar4 + 0x18),iVar3);
          }
          else {
            *(int **)(iVar4 + 0x14) = piVar2 + 1;
            if (piVar2 != (int *)0x0) {
              *piVar2 = local_14[0];
            }
          }
                    /* WARNING: Subroutine does not return */
          fn_001638a0();
        }
        if (*piVar2 == local_14[0]) break;
        piVar2 = piVar2 + 1;
      }
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
  }
  return param_1;
}



void fn_003127ec(int param_1)

{
  if (*(int *)(param_1 + 0x74) != -1) {
    fn_00159f34(*(undefined4 *)(param_1 + 0x68));
    *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  }
  fn_0016a43c(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70));
                    /* WARNING: Subroutine does not return */
  fn_001482f4(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c));
}



void fn_0031250c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 local_20;
  
  cVar1 = *(char *)(param_1 + 0x82);
  local_20 = param_4;
  if (cVar1 == '\0') {
    uVar2 = fn_006f6ab4(param_1);
    if ((*(char *)(*(int *)(param_1 + 100) + 9) == '\x01') && (uVar2 != 0)) {
      *(undefined1 *)(param_1 + 0x82) = 1;
      *(undefined1 *)(*(int *)(param_1 + 100) + 9) = 0;
      *(undefined1 *)(*(int *)(param_1 + 100) + 8) = 0;
    }
    iVar3 = fn_00154ac8(0x7b7);
    if (iVar3 != 0 && (uVar2 & 0x400000) != 0) {
      local_20 = 0xff000000;
      fn_00163988(DAT_00897808,&local_20,0x14);
      local_20 = 0xff000000;
      fn_00163988(DAT_0089780c,&local_20,0x14);
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
  }
  else if ((((cVar1 != '\x01') && (cVar1 == '\x02')) &&
           (*(int *)(DAT_00897808 + 0x14) == *(int *)(DAT_00897808 + 0xc))) &&
          (*(int *)(DAT_0089780c + 0x14) == *(int *)(DAT_0089780c + 0xc))) {
    fn_006899f4(param_1,0,0);
    fn_00689930(param_1,0,0);
    *(undefined1 *)(param_1 + 0x82) = 3;
  }
  return;
}


