#include "002bb1d8_002bbb24.h"



void fn_002bbb24(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [8];
  
  if (*(char *)(param_1 + 0xe) == '\x04') {
    fn_003a5bbc(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),0);
    uVar1 = fn_001603f8(auStack_14,0xff);
    uVar2 = fn_001603f8(auStack_18,0);
    fn_0068869c(DAT_00897808,uVar2,uVar1,10);
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 2;
  }
  return;
}



uint fn_002bb90c(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  uint local_20;
  
  local_20 = param_4;
  fn_002b5424();
  uVar2 = 0x1a;
  local_20 = CONCAT31(((unsigned int)(local_20) >> 8) & 0xffffff,0x1a);
  if (*(int *)(*(int *)(param_1 + 8) + 0x10) != 0) {
    uVar2 = fn_006ba11c(param_1);
    piVar5 = *(int **)(*(int *)(param_1 + 4) + 0x18);
    uVar3 = fn_006ba178(param_1);
    (**(code **)(*piVar5 + 0x14))(piVar5,uVar3);
    (**(code **)(**(int **)(*(int *)(param_1 + 4) + 0x18) + 0x10))();
    if ((uVar2 & 0x110000) != 0) {
      cVar1 = *(char *)(*(int *)(*(int *)(param_1 + 4) + 0x18) + 0x14);
      fn_003a745c(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48));
      if (cVar1 == '\0') {
        iVar4 = fn_006a7b78(DAT_008977e4);
        *(undefined1 *)(iVar4 + 0x76) = 1;
        piVar5 = *(int **)(*(int *)(param_1 + 4) + 0x18);
        (**(code **)(*piVar5 + 0x18))(piVar5,0,0);
                    /* WARNING: Subroutine does not return */
        fn_001638a0();
      }
      if (cVar1 == '\x01') {
        fn_003a7e9c(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),2);
        piVar5 = *(int **)(*(int *)(param_1 + 4) + 0x18);
        (**(code **)(*piVar5 + 0x18))(piVar5,0,0);
        fn_003a7cf0(param_1,&local_20,1);
                    /* WARNING: Subroutine does not return */
        fn_001638a0();
      }
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
    if ((uVar2 & 0x20000) != 0) {
      fn_003a7e9c(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),2);
      piVar5 = *(int **)(*(int *)(param_1 + 4) + 0x18);
      (**(code **)(*piVar5 + 0x18))(piVar5,0,0);
      fn_003a7cf0(param_1,&local_20,1);
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
    uVar2 = local_20 & 0xff;
  }
  return uVar2;
}



uint fn_002bb76c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  uint local_10;
  
  local_10 = CONCAT31((int3)((uint)param_4 >> 8),0x1a);
  iVar1 = fn_0037645c(*(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0x4c) + 0xc));
  if ((iVar1 == 0) && (*(int *)(DAT_00897808 + 0x14) == *(int *)(DAT_00897808 + 0xc))) {
    if (*(int *)(DAT_0089780c + 0x14) == *(int *)(DAT_0089780c + 0xc)) {
      fn_002d313c();
      fn_003a7cf0(param_1,&local_10,0x12);
      fn_00376528(*(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0x4c) + 0xc));
      piVar2 = *(int **)(*(int *)(param_1 + 8) + 0x14);
      (**(code **)(*piVar2 + 0x30))(piVar2,0x2f,0);
      fn_00422814(*(undefined4 *)(*(int *)(param_1 + 4) + 0x20),
                   *(undefined4 *)(*(int *)(param_1 + 8) + 0x14));
      iVar1 = fn_0028e66c(*(undefined4 *)(*(int *)(param_1 + 8) + 0xc));
      if ((iVar1 == 0xd4) ||
         (iVar1 = fn_0028e66c(*(undefined4 *)(*(int *)(param_1 + 8) + 0xc)), iVar1 == 0xd5)) {
        fn_003a58d4(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),1);
      }
      piVar2 = *(int **)(*(int *)(param_1 + 8) + 0xc);
      (**(code **)(*piVar2 + 0x30))(piVar2,0xd4,0);
      piVar2 = *(int **)(*(int *)(param_1 + 8) + 0xc);
      (**(code **)(*piVar2 + 0x30))(piVar2,0xd5,0);
      iVar1 = fn_00182988(DAT_008977e4);
      if (*(char *)(iVar1 + 0x39d) != '\0') {
        fn_003ef3e8(*(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0x4c) + 0x1c),1,0);
        fn_003ef3e8(*(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0x4c) + 0x1c),1,1);
      }
      fn_003ef8e0(*(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0x4c) + 0x10));
    }
  }
  return local_10 & 0xff;
}



void fn_002bb750(undefined4 param_1)

{
  fn_002b5424();
  fn_002bb1d8(param_1);
  return;
}



void fn_002bb6b0(int param_1,short *param_2,int param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint local_18;
  
  if (*param_2 != param_3) {
    *param_2 = (short)param_3;
    if (param_3 == 0) {
      local_18 = (uint)*(byte *)(*(int *)(*(int *)(param_1 + 4) + 0x48) + 0x7d);
      fn_0037720c(*(undefined4 *)(param_1 + 0x3c),&local_18,1);
      return;
    }
    local_18 = param_4;
    iVar1 = fn_00163a00(param_3);
    if (iVar1 == 7) {
      local_18 = local_18 & 0xffffff00;
      uVar2 = *(undefined4 *)(param_1 + 0x3c);
    }
    else {
      local_18 = (uint)*(byte *)(*(int *)(*(int *)(param_1 + 4) + 0x48) + 0x7d);
      uVar2 = *(undefined4 *)(param_1 + 0x3c);
    }
    fn_0037720c(uVar2,&local_18,param_3,param_4);
  }
  return;
}



undefined1 fn_002bb1d8(int param_1)

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
  undefined1 local_30 [4];
  uint local_2c;
  uint local_28 [2];
  
  local_30[0] = 0x1a;
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
          fn_003a7cf0(param_1,local_30,1);
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
          fn_002b5488(param_1,local_30,*(undefined1 *)(param_1 + 0xc));
        }
      }
      else {
        iVar9 = fn_006c5d68(iVar9);
        if (iVar9 == 1) {
          iVar9 = fn_003a8efc(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48));
          if (iVar9 != 0) {
            fn_003d0584(*(undefined4 *)(*(int *)(param_1 + 8) + 0x78),
                         (int)*(char *)(*(int *)(*(int *)(param_1 + 8) + 0x48) + 0x7d));
            fn_003a7cf0(param_1,local_30,5);
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
            fn_003a7cf0(param_1,local_30,7);
                    /* WARNING: Subroutine does not return */
            fn_001638a0();
          }
          local_2c = (uint)*(byte *)(iVar9 + 0x7d);
          iVar9 = fn_002d4054(&local_2c);
          if (iVar9 == 0) {
            iVar5 = fn_00174828(DAT_008977e4);
            iVar5 = iVar5 + (char)local_2c * 0x418;
            psVar11 = (short *)(iVar5 + -0x4080);
            bVar12 = psVar11 == (short *)0x0;
            iVar9 = 0;
            iVar7 = (char)local_2c * 0x83;
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
                local_28[0] = (uint)*(byte *)(*(int *)(*(int *)(param_1 + 8) + 0x48) + 0x7d);
                fn_004223f4(*(undefined4 *)(*(int *)(param_1 + 8) + 0x84),local_28);
                fn_003a7cf0(param_1,local_30,7);
                    /* WARNING: Subroutine does not return */
                fn_001638a0();
              }
            }
          }
          goto code_r0x002bb694;
        }
        if (iVar9 == 3) {
          cVar1 = *(char *)(*(int *)(*(int *)(param_1 + 8) + 0x48) + 0x7e);
          local_2c = CONCAT31(((unsigned int)(local_2c) >> 8) & 0xffffff,cVar1);
          iVar9 = fn_002d4054(&local_2c);
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
    uVar2 = local_30[0];
  }
  return uVar2;
}


