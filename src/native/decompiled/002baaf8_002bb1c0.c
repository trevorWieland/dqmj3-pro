#include "002baaf8_002bb1c0.h"



undefined1 fn_002bb1c0(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  short *psVar11;
  bool bVar12;
  undefined1 auStack_30 [4];
  uint uStack_2c;
  uint auStack_28 [3];
  
  fn_002b5424();
  auStack_30[0] = 0x1a;
  uVar2 = 0x1a;
  if (*(int *)(*(int *)(param_1 + 8) + 0x10) != 0) {
    uVar3 = fn_006ba11c(param_1);
    iVar9 = *(int *)(*(int *)(param_1 + 8) + 0x48);
    if (*(char *)(iVar9 + 0x81) != '\0') {
      if ((uVar3 & 0x110000) == 0) {
        if ((uVar3 & 0x20000) != 0) {
          iVar9 = fn_006c5d68(iVar9);
          if (iVar9 != 1) {
            if (iVar9 == 2) {
              fn_003a5a44(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),1);
              goto LAB_002bb5dc;
            }
            if (iVar9 == 3) {
              fn_003a7e9c(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),2);
              goto LAB_002bb5dc;
            }
            if (iVar9 != 4) goto LAB_002bb5dc;
          }
          fn_003773f4(*(undefined4 *)(*(int *)(param_1 + 4) + 0x3c));
LAB_002bb5dc:
          fn_003a7cf0(param_1,auStack_30,1);
                    /* WARNING: Subroutine does not return */
          fn_001638a0();
        }
        if ((uVar3 & 0x80000) == 0) {
          if ((uVar3 & 0x40000) != 0) {
            iVar9 = fn_003a6898(iVar9);
            if (iVar9 == 0) goto code_r0x002bb694;
            iVar9 = fn_006c5d68(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48));
            iVar7 = *(int *)(*(int *)(param_1 + 8) + 0x48);
            if (iVar9 == 3) {
              fn_003a8b98(iVar7,(int)*(char *)(iVar7 + 0x7e));
            }
            else {
              fn_003a8b98(iVar7,(int)*(char *)(iVar7 + 0x7d));
            }
          }
        }
        else {
          fn_002b5488(param_1,auStack_30,*(undefined1 *)(param_1 + 0xc));
        }
      }
      else {
        iVar9 = fn_006c5d68(iVar9);
        if (iVar9 == 1) {
          iVar9 = fn_003a8efc(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48));
          if (iVar9 != 0) {
            fn_003d0584(*(undefined4 *)(*(int *)(param_1 + 8) + 0x78),
                         (int)*(char *)(*(int *)(*(int *)(param_1 + 8) + 0x48) + 0x7d));
            fn_003a7cf0(param_1,auStack_30,5);
                    /* WARNING: Subroutine does not return */
            fn_001638a0();
          }
code_r0x002bb694:
                    /* WARNING: Subroutine does not return */
          fn_001638a0();
        }
        if (iVar9 == 2) {
          iVar9 = *(int *)(*(int *)(param_1 + 8) + 0x48);
          if (*(char *)(iVar9 + 0xe3) != '\0') {
            piVar4 = *(int **)(*(int *)(param_1 + 8) + 0x84);
            (**(code **)(*piVar4 + 0x18))(piVar4,1,0);
            fn_004224ac(*(undefined4 *)(*(int *)(param_1 + 8) + 0x84));
            fn_003a7cf0(param_1,auStack_30,7);
                    /* WARNING: Subroutine does not return */
            fn_001638a0();
          }
          uStack_2c = (uint)*(byte *)(iVar9 + 0x7d);
          iVar9 = fn_002d4054(&uStack_2c);
          if (iVar9 == 0) {
            iVar5 = fn_00174828(DAT_008977e4);
            iVar5 = iVar5 + (char)uStack_2c * 0x418;
            psVar11 = (short *)(iVar5 + -0x4080);
            bVar12 = psVar11 == (short *)0x0;
            iVar9 = 0;
            iVar7 = (char)uStack_2c * 0x83;
            if (!bVar12) {
              iVar9 = (int)*psVar11;
              iVar7 = iVar9;
            }
            if ((!bVar12 && iVar7 != 0) && iVar9 < 0 == (bVar12 && SBORROW4(iVar5 + 0x3f80,0x8000)))
            {
              bVar12 = *(char *)(iVar5 + -0x400d) == '\0';
              if (bVar12) {
                psVar11 = (short *)(uint)*(byte *)(iVar5 + -0x3fca);
              }
              if (bVar12 && psVar11 == (short *)0x0) {
                piVar4 = *(int **)(*(int *)(param_1 + 8) + 0x84);
                (**(code **)(*piVar4 + 0x18))(piVar4,1,0);
                auStack_28[0] = (uint)*(byte *)(*(int *)(*(int *)(param_1 + 8) + 0x48) + 0x7d);
                fn_004223f4(*(undefined4 *)(*(int *)(param_1 + 8) + 0x84),auStack_28);
                fn_003a7cf0(param_1,auStack_30,7);
                    /* WARNING: Subroutine does not return */
                fn_001638a0();
              }
            }
          }
          goto code_r0x002bb694;
        }
        if (iVar9 == 3) {
          cVar1 = *(char *)(*(int *)(*(int *)(param_1 + 8) + 0x48) + 0x7e);
          uStack_2c = CONCAT31(((unsigned int)(uStack_2c) >> 8) & 0xffffff,cVar1);
          iVar9 = fn_002d4054(&uStack_2c);
          if (iVar9 == 0) {
            iVar9 = fn_00174828(DAT_008977e4);
            iVar9 = iVar9 + cVar1 * 0x418;
            psVar11 = (short *)(iVar9 + -0x4080);
            uVar6 = fn_00660f58((int)*(short *)(*(int *)(param_1 + 8) + 0x6e));
            uVar3 = 0;
            iVar7 = fn_00163940();
            if (iVar7 != 0) {
              iVar7 = fn_00660ea8(uVar6);
              uVar3 = (uint)(iVar7 == 2);
              if (iVar7 != 2) {
                uVar3 = 0;
              }
            }
            if (*(char *)(iVar9 + -0x3fe0) < '\x01') {
              uVar8 = fn_006f3e74(psVar11);
              if (((uVar8 & ~uVar3) == 0) &&
                 ((iVar9 = fn_00174828(DAT_008977e4), *(char *)(iVar9 + 0xe8) != '\x06' ||
                  (((iVar9 = fn_00661714((int)*psVar11), iVar9 != 7 &&
                    (iVar9 = fn_00661714((int)*psVar11), iVar9 != 8)) ||
                   (uVar8 = fn_00163940(uVar6), (uVar8 & uVar3) != 0)))))) {
                iVar9 = *(int *)(param_1 + 8);
                *(undefined2 *)(iVar9 + 0x6a) = 1;
                *(char *)(iVar9 + 0x6c) = cVar1;
                fn_002d46cc(*(undefined4 *)(param_1 + 8));
                fn_003a8cf0(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48));
                    /* WARNING: Subroutine does not return */
                fn_001638a0();
              }
              uVar10 = 0;
              uVar6 = *(undefined4 *)(*(int *)(param_1 + 8) + 0x48);
            }
            else {
              uVar10 = 1;
              uVar6 = *(undefined4 *)(*(int *)(param_1 + 8) + 0x48);
            }
            fn_003a563c(uVar6,uVar10);
          }
        }
      }
    }
    uVar2 = auStack_30[0];
  }
  return uVar2;
}



undefined1 fn_002baf84(int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  undefined1 local_20 [4];
  uint local_1c [2];
  
  fn_002b5424();
  local_20[0] = 0x1a;
  uVar2 = 0x1a;
  if (*(int *)(*(int *)(param_1 + 8) + 0x10) != 0) {
    uVar3 = fn_006ba11c(param_1);
    if ((uVar3 & 0x110000) != 0) {
      iVar4 = fn_00174828(DAT_008977e4);
      uVar2 = *(undefined1 *)(iVar4 + 0x4282);
      iVar4 = fn_00174828(DAT_008977e4);
      uVar1 = *(undefined1 *)(iVar4 + 0x4292);
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 8) + 0x7c) + 0x3f) = uVar2;
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 8) + 0x7c) + 0x41) = uVar1;
      local_1c[0] = (uint)*(byte *)(*(int *)(*(int *)(param_1 + 8) + 0x48) + 0x7d);
      iVar4 = fn_002d4054(local_1c);
      if ((iVar4 == 0) &&
         (iVar4 = fn_006e7d4c(*(undefined4 *)(*(int *)(param_1 + 8) + 0x7c),local_1c[0]),
         iVar4 == 0)) {
        iVar4 = fn_00174828(DAT_008977e4);
        iVar4 = iVar4 + (char)local_1c[0] * 0x418;
        if ((*(char *)(iVar4 + -0x3fe0) < '\x01') && (*(char *)(iVar4 + -0x400e) < '\x01')) {
          fn_003a7cf0(param_1,local_20,0xb);
                    /* WARNING: Subroutine does not return */
          fn_001638a0();
        }
        fn_003a563c(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),4);
      }
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
    if ((uVar3 & 0x20000) != 0) {
      fn_003a7e9c(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),2);
      fn_003a7cf0(param_1,local_20,1);
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
    if ((uVar3 & 0x80000) == 0) {
      if ((uVar3 & 0x40000) != 0) {
        iVar4 = *(int *)(*(int *)(param_1 + 8) + 0x48);
        fn_003a8b98(iVar4,(int)*(char *)(iVar4 + 0x7d));
      }
    }
    else {
      fn_002b5488(param_1,local_20,*(undefined1 *)(param_1 + 0xc));
    }
    uVar2 = local_20[0];
  }
  return uVar2;
}



undefined1 fn_002bad70(int param_1)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_18 [8];
  
  fn_002b5424();
  local_18[0] = 0x1a;
  uVar1 = 0x1a;
  if (*(int *)(*(int *)(param_1 + 8) + 0x10) != 0) {
    uVar2 = fn_006ba11c(param_1);
    uVar1 = *(undefined1 *)(*(int *)(*(int *)(param_1 + 8) + 0x48) + 0x7e);
    uVar3 = fn_006c83a0(*(undefined4 *)(*(int *)(param_1 + 4) + 0x10),0);
    fn_003772b0(*(undefined4 *)(*(int *)(param_1 + 4) + 0x3c),uVar3,uVar1);
    if ((uVar2 & 0x110000) != 0) {
      fn_006c83a0(*(undefined4 *)(*(int *)(param_1 + 4) + 0x10),0);
      iVar4 = fn_00174828(DAT_008977e4);
      iVar4 = fn_002fa7b4(*(undefined4 *)(*(int *)(param_1 + 4) + 0x10),
                           iVar4 + *(char *)(*(int *)(*(int *)(param_1 + 8) + 0x48) + 0x7e) * 0x418
                           + -0x4080);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        fn_001638a0();
      }
      fn_003a69e4(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),0);
      fn_003a7e9c(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),2);
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
    if ((uVar2 & 0x20000) != 0) {
      fn_003a7cf0(param_1,local_18,8);
      piVar5 = *(int **)(*(int *)(param_1 + 4) + 0x10);
      (**(code **)(*piVar5 + 0x18))(piVar5,1,1,0);
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
    if ((uVar2 & 0x80000) == 0) {
      if ((uVar2 & 0x40000) != 0) {
        iVar4 = *(int *)(*(int *)(param_1 + 8) + 0x48);
        fn_003a8b98(iVar4,(int)*(char *)(iVar4 + 0x7e));
      }
    }
    else {
      fn_002b5488(param_1,local_18,*(undefined1 *)(param_1 + 0xc));
    }
    uVar1 = local_18[0];
  }
  return uVar1;
}



uint fn_002baaf8(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined8 uVar8;
  uint local_18;
  
  local_18 = param_4;
  fn_002b5424();
  uVar3 = 0x1a;
  local_18 = CONCAT31(((unsigned int)(local_18) >> 8) & 0xffffff,0x1a);
  if (*(int *)(*(int *)(param_1 + 8) + 0x10) != 0) {
    uVar3 = fn_006ba11c(param_1);
    piVar7 = *(int **)(*(int *)(param_1 + 4) + 0x14);
    uVar4 = fn_006ba178(param_1);
    (**(code **)(*piVar7 + 0x14))(piVar7,uVar4);
    (**(code **)(**(int **)(*(int *)(param_1 + 4) + 0x14) + 0x10))();
    if ((uVar3 & 0x110000) != 0) {
      cVar1 = *(char *)(*(int *)(*(int *)(param_1 + 4) + 0x14) + 0x14);
      if (cVar1 == '\0') {
        iVar5 = fn_006a7b78(DAT_008977e4);
        *(undefined1 *)(iVar5 + 0x36) = 2;
                    /* WARNING: Subroutine does not return */
        fn_001638a0();
      }
      if (cVar1 == '\x01') {
        fn_003a7e9c(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),2);
        piVar7 = *(int **)(*(int *)(param_1 + 4) + 0x14);
        (**(code **)(*piVar7 + 0x18))(piVar7,0,0);
        fn_003a7cf0(param_1,&local_18,1);
                    /* WARNING: Subroutine does not return */
        fn_001638a0();
      }
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
    if ((uVar3 & 0x20000) != 0) {
      fn_003a7e9c(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),2);
      piVar7 = *(int **)(*(int *)(param_1 + 4) + 0x14);
      (**(code **)(*piVar7 + 0x18))(piVar7,0,0);
      fn_003a7cf0(param_1,&local_18,1);
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
    if ((uVar3 & 0x80000) != 0) {
      uVar4 = 4;
      uVar2 = *(undefined1 *)(*(int *)(*(int *)(param_1 + 4) + 0x14) + 0x14);
      uVar8 = fn_00174828(DAT_008977e4);
      iVar5 = fn_006f4868((int)uVar8 + 0xe8,(int)((ulonglong)uVar8 >> 0x20),0x2000,0);
      if (iVar5 != 0) {
        uVar4 = 6;
      }
      uVar6 = fn_005ce2e0(*(undefined4 *)(*(int *)(param_1 + 4) + 0x14),uVar2);
      fn_003a9994(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),uVar6,uVar4,uVar2);
    }
    uVar3 = local_18 & 0xff;
  }
  return uVar3;
}


