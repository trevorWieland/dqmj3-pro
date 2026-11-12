#include "00696400_00696c00.h"



undefined4 fn_00696c00(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  int iStack_18;
  
  iStack_18 = param_4;
  if (*(int *)(param_1 + 0x174) == 0) {
    if (param_4 != 0) {
      iVar2 = *(int *)(param_1 + 0xe0);
      bVar4 = iVar2 < 0;
      if (!bVar4) {
        iVar2 = (int)*(char *)(param_1 + 0x108);
      }
      if ((bVar4 || iVar2 < 0) ||
         (iVar2 = fn_006f612c(*(undefined4 *)(param_1 + 0x3c)), iVar2 != 0)) {
        fn_0068326c(*(undefined4 *)(param_1 + 0x3c));
      }
    }
    if (param_2 != 0) {
      uVar1 = fn_001603f8(&iStack_18,0xff);
      fn_00163988(DAT_00897808,uVar1,0x14);
    }
    if (param_3 != 0) {
      uVar1 = fn_001603f8(&iStack_18,0xff);
      fn_00163988(DAT_0089780c,uVar1,0x14);
    }
    *(undefined4 *)(param_1 + 0x174) = 1;
  }
  else if (*(int *)(param_1 + 0x174) == 1) {
    fn_001e648c(*(undefined4 *)
                  (*(int *)(*(int *)(*(int *)(DAT_008977e0 + 4) + 4) +
                           *(int *)(DAT_008977e0 + 0x60) * 4) + 4));
    iVar2 = fn_006f73a0(param_1,param_2,param_3);
    if ((iVar2 != 0) &&
       (iVar2 = fn_006aab38(*(undefined4 *)
                              (*(int *)(*(int *)(*(int *)(DAT_008977e0 + 4) + 4) +
                                       *(int *)(DAT_008977e0 + 0x60) * 4) + 4)), iVar2 == 0)) {
      if (*(char *)(param_1 + 0x21b) != '\0') {
        piVar3 = *(int **)(*(int *)(*(int *)(*(int *)(DAT_008977e0 + 4) + 4) +
                                   *(int *)(DAT_008977e0 + 0x60) * 4) + 4);
        (**(code **)(*piVar3 + 0x58))(piVar3,1);
        fn_001ea230(*(undefined4 *)
                      (*(int *)(*(int *)(*(int *)(DAT_008977e0 + 4) + 4) +
                               *(int *)(DAT_008977e0 + 0x60) * 4) + 4),1);
        *(undefined1 *)(param_1 + 0x21b) = 0;
      }
      fn_001dcb00(*(undefined4 *)
                    (*(int *)(*(int *)(*(int *)(DAT_008977e0 + 4) + 4) +
                             *(int *)(DAT_008977e0 + 0x60) * 4) + 4),0);
      fn_001e33e8(*(undefined4 *)
                    (*(int *)(*(int *)(*(int *)(DAT_008977e0 + 4) + 4) +
                             *(int *)(DAT_008977e0 + 0x60) * 4) + 4));
      fn_00694a10(param_1);
      return 1;
    }
  }
  return 0;
}



undefined4 fn_006969dc(int param_1)

{
  int iVar1;
  
  fn_00154ae0(DAT_008977e4);
  fn_006a8ee4();
  iVar1 = *(int *)(param_1 + 0x174);
  if (iVar1 == 0) {
    fn_001ea9c0(*(undefined4 *)
                  (*(int *)(*(int *)(*(int *)(DAT_008977e0 + 4) + 4) +
                           *(int *)(DAT_008977e0 + 0x60) * 4) + 4));
    fn_001de698(*(undefined4 *)
                  (*(int *)(*(int *)(*(int *)(DAT_008977e0 + 4) + 4) +
                           *(int *)(DAT_008977e0 + 0x60) * 4) + 4));
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  if (iVar1 == 1) {
    fn_002fba48(*(undefined4 *)(param_1 + 0x44));
    if (*(char *)(*(int *)(param_1 + 0x44) + 0x30) != '\0') {
      fn_00364d7c(*(undefined4 *)
                    (*(int *)(*(int *)(DAT_008977e0 + 4) + 4) + *(int *)(DAT_008977e0 + 100) * 4));
      fn_006af880(*(undefined4 *)(DAT_008977e0 + 0x1c),*(undefined4 *)(DAT_008977e0 + 0xa8));
      (**(code **)(**(int **)(*(int *)(*(int *)(DAT_008977e0 + 4) + 4) +
                             *(int *)(DAT_008977e0 + 100) * 4) + 0x5c))();
      fn_00154ae0(DAT_008977e4);
      fn_001d3a40();
      fn_001e5dc0(*(undefined4 *)
                    (*(int *)(*(int *)(*(int *)(DAT_008977e0 + 4) + 4) +
                             *(int *)(DAT_008977e0 + 0x60) * 4) + 4));
      *(undefined4 *)(param_1 + 0x174) = 2;
    }
  }
  else if (iVar1 == 2) {
    if (*(code **)(param_1 + 0x1cc) != (code *)0x0) {
      iVar1 = (**(code **)(param_1 + 0x1cc))();
      if (*(char *)(param_1 + 0x1a4) != '\0') {
        *(undefined4 *)(param_1 + 0x1cc) = 0;
        *(undefined1 *)(param_1 + 0x1a4) = 0;
      }
      if (iVar1 == 0) {
        return 0;
      }
    }
    fn_00300620(*(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x60) * 4)
                );
    fn_00694a10(param_1);
    return 1;
  }
  return 0;
}



void fn_006969c0(int param_1)

{
  *(undefined4 *)(param_1 + 0x184) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x188) = 0xffffffff;
  fn_0011c034(param_1 + 0x18c);
  return;
}



void fn_00696764(int param_1,undefined4 param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 local_58;
  undefined1 local_54;
  undefined4 local_3c;
  
  iVar3 = fn_002fb61c();
  if (iVar3 != 0) {
    fn_00424790(*(undefined4 *)
                  (*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x60) * 4) +
                  0x60));
  }
  fn_0011a24c(&local_58);
  local_54 = 5;
  local_58 = fn_003199b4(param_2);
  local_3c = param_2;
  uVar4 = fn_006c3a84(*(undefined4 *)
                        (*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x70) * 4
                                 ) + 0x30));
  fn_006f77d4(param_1,&local_58,*(undefined4 *)(param_1 + 0xa8),local_58,uVar4);
  bVar1 = fn_002fb5fc();
  uVar4 = local_58;
  iVar3 = fn_006b5184(*(undefined4 *)(DAT_00897804 + 0x1c));
  iVar5 = fn_006af668(*(undefined4 *)(DAT_008977e0 + 0x1c),uVar4);
  *(byte *)(param_1 + 0x16e) = ((iVar5 != -1 && iVar5 != iVar3) | bVar1) ^ 1;
  iVar3 = DAT_008977e0;
  *(undefined4 *)
   (*(int *)(*(int *)(*(int *)(DAT_008977e0 + 4) + 4) + *(int *)(DAT_008977e0 + 100) * 4) + 0x10) =
       0xbf800000;
  *(undefined1 *)(param_1 + 0x218) = 1;
  iVar3 = fn_006af668(*(undefined4 *)(iVar3 + 0x1c),*(undefined4 *)(param_1 + 0xa8));
  iVar5 = fn_006af668(*(undefined4 *)(DAT_008977e0 + 0x1c),local_58);
  if ((iVar3 != iVar5) &&
     (iVar3 = fn_006af668(*(undefined4 *)(DAT_008977e0 + 0x1c),local_58), iVar3 == 9)) {
    uVar6 = 1;
    do {
      cVar2 = fn_0026ced0(uVar6 & 0xff);
      fn_002426d4(*(undefined4 *)(DAT_00897804 + 0x1c),uVar6 & 0xff,(int)cVar2);
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < 6);
    fn_00144834(0x1ef,0);
    fn_00144834(0x1f0,0);
    fn_00144834(0x1f1,0);
    fn_00144834(0x1f2,0);
    fn_00144834(499,0);
    fn_00144834(0x4f9,0);
    fn_00144834(0x4fa,0);
    fn_00144834(0x4fb,0);
    fn_00144834(0x4fc,0);
    fn_00144834(0x4fd,0);
  }
  fn_006949f8(param_1,&local_58);
  return;
}



undefined4 fn_006966bc(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x174) == 0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x180) + 0xc))();
    if (iVar1 != 0) goto LAB_00696728;
    (**(code **)(**(int **)(param_1 + 0x180) + 0x10))();
    *(undefined4 *)(param_1 + 0x174) = 1;
  }
  else if ((*(int *)(param_1 + 0x174) == 1) &&
          (iVar1 = (**(code **)(**(int **)(param_1 + 0x180) + 0x10))(), iVar1 != 0)) {
LAB_00696728:
    *(undefined4 *)(param_1 + 0x174) = 2;
    (**(code **)(**(int **)(param_1 + 0x180) + 0x14))();
    *(undefined4 *)(param_1 + 0x180) = 0;
    if (iVar1 == 2) {
      fn_00694a10(param_1);
    }
    return 1;
  }
  return 0;
}



undefined4 fn_00696514(int param_1)

{
  int iVar1;
  
  fn_001e5a18(*(undefined4 *)
                (*(int *)(*(int *)(*(int *)(DAT_008977e0 + 4) + 4) +
                         *(int *)(DAT_008977e0 + 0x60) * 4) + 4));
  if (*(int *)(param_1 + 0x174) == 0) {
    if (*(char *)(param_1 + 0x170) != '\x01') {
      if (*(char *)(param_1 + 0x170) == '\0') {
        fn_00699014(param_1,0);
      }
      *(undefined1 *)(param_1 + 0x170) = 1;
    }
    iVar1 = fn_006f7ad0(param_1,1);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x174) = 1;
    }
  }
  else if (*(int *)(param_1 + 0x174) == 1) {
    if (*(char *)(param_1 + 0x170) != -1) {
      if (*(char *)(param_1 + 0x170) == '\0') {
        fn_00699014(param_1,0);
      }
      *(undefined1 *)(param_1 + 0x170) = 0xff;
    }
    if (*(code **)(param_1 + 0x1d0) != (code *)0x0) {
      iVar1 = (**(code **)(param_1 + 0x1d0))();
      if (*(char *)(param_1 + 0x1a5) != '\0') {
        *(undefined4 *)(param_1 + 0x1d0) = 0;
        *(undefined1 *)(param_1 + 0x1a5) = 0;
      }
      if (iVar1 == 0) {
        return 0;
      }
    }
    fn_001e22a4(*(undefined4 *)
                  (*(int *)(*(int *)(*(int *)(DAT_008977e0 + 4) + 4) +
                           *(int *)(DAT_008977e0 + 0x60) * 4) + 4));
    *(undefined1 *)
     (*(int *)(*(int *)(*(int *)(*(int *)(DAT_008977e0 + 4) + 4) + *(int *)(DAT_008977e0 + 0x60) * 4
                       ) + 4) + 0x3e1) = 1;
    iVar1 = fn_002d8370(0xffffffff);
    if (iVar1 != 0) {
      fn_002d8628(*(undefined4 *)
                    (*(int *)(*(int *)(DAT_008977e0 + 4) + 4) + *(int *)(DAT_008977e0 + 0x90) * 4));
    }
    return 1;
  }
  return 0;
}



void fn_00696400(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  *(undefined4 *)(param_1 + 0x184) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x188) = 0xffffffff;
  fn_0011c034(param_1 + 0x18c);
  *(undefined4 *)(param_1 + 0x184) = param_3;
  *(undefined4 *)(param_1 + 0x188) = param_2;
  uVar4 = 0;
  iVar1 = (int)((longlong)(param_4[1] - *param_4) * -0x6db6db6d +
                ((ulonglong)(uint)(param_4[1] - *param_4) << 0x20) >> 0x20);
  if (iVar1 >> 5 != iVar1 >> 0x1f) {
    do {
      puVar2 = *(undefined4 **)(param_1 + 400);
      puVar3 = (undefined4 *)(*param_4 + uVar4 * 0x38);
      if (puVar2 == *(undefined4 **)(param_1 + 0x194)) {
        fn_0078891c();
      }
      else {
        *(undefined4 **)(param_1 + 400) = puVar2 + 0xe;
        if (puVar2 != (undefined4 *)0x0) {
          uVar5 = puVar3[1];
          uVar6 = puVar3[2];
          uVar7 = puVar3[3];
          uVar8 = puVar3[4];
          uVar9 = puVar3[5];
          uVar10 = puVar3[6];
          uVar11 = puVar3[7];
          *puVar2 = *puVar3;
          puVar2[1] = uVar5;
          puVar2[2] = uVar6;
          puVar2[3] = uVar7;
          puVar2[4] = uVar8;
          puVar2[5] = uVar9;
          puVar2[6] = uVar10;
          puVar2[7] = uVar11;
          uVar5 = puVar3[9];
          uVar6 = puVar3[10];
          uVar7 = puVar3[0xb];
          uVar8 = puVar3[0xc];
          uVar9 = puVar3[0xd];
          puVar2[8] = puVar3[8];
          puVar2[9] = uVar5;
          puVar2[10] = uVar6;
          puVar2[0xb] = uVar7;
          puVar2[0xc] = uVar8;
          puVar2[0xd] = uVar9;
        }
      }
      uVar4 = uVar4 + 1;
      iVar1 = (int)((longlong)(param_4[1] - *param_4) * -0x6db6db6d +
                    ((ulonglong)(uint)(param_4[1] - *param_4) << 0x20) >> 0x20);
    } while (uVar4 < (uint)((iVar1 >> 5) - (iVar1 >> 0x1f)));
  }
  return;
}


