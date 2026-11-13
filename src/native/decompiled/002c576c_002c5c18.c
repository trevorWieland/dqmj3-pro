#include "002c576c_002c5c18.h"



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_002c5c18(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined4 local_2c [2];
  
  fn_002c3e78();
  iVar3 = fn_006c5138(*(undefined4 *)(param_1 + 0xb0));
  iVar4 = *(int *)(*(int *)(param_1 + 0x9c) + 0xcc);
  *(undefined1 *)(param_1 + 0xc1) = 0;
  iVar5 = fn_00154ac8(0x30);
  if (iVar5 == 0) {
    iVar5 = fn_006c5138(*(undefined4 *)(param_1 + 0xb0));
    if (iVar5 < 2) goto LAB_002c5c84;
  }
  else {
    iVar5 = fn_006c5138(*(undefined4 *)(param_1 + 0xb0));
    if (iVar5 < 3) {
LAB_002c5c84:
      bVar2 = 1;
      goto LAB_002c5c90;
    }
  }
  bVar2 = 0;
LAB_002c5c90:
  bVar2 = bVar2 ^ 1;
  uVar11 = 0;
  do {
    if ((int)(uVar11 + iVar4 * 10) < iVar3) {
      piVar6 = (int *)fn_006c5114(*(undefined4 *)(param_1 + 0xb0));
      iVar12 = piVar6[2];
      cVar1 = *(char *)((int)piVar6 + 5);
      iVar5 = piVar6[3];
      uVar7 = fn_00154ac8(piVar6[4]);
      iVar8 = fn_00163940((int)(short)piVar6[5]);
      if ((iVar8 == 0) ||
         (iVar8 = fn_006b2aa0(*(undefined4 *)(DAT_00897804 + 0x14),(int)(short)piVar6[5]),
         iVar8 < 1)) {
        uVar10 = 0;
      }
      else {
        uVar10 = 1;
      }
      if (cVar1 == '\0') {
        uVar14 = fn_006c5124(*(undefined4 *)(param_1 + 0xb0));
        uVar7 = (uint)((ulonglong)uVar14 >> 0x20);
        lVar13 = (ulonglong)uVar7 << 0x20;
        if (((int)uVar14 != 0) &&
           (uVar10 = *(uint *)(*(int *)(param_1 + 0xb0) + 0x18), lVar13 = CONCAT44(uVar7,uVar10),
           uVar10 == uVar11)) {
LAB_002c5dcc:
          uVar9 = fn_00231ca0(0x31,0);
          lVar13 = fn_0031b78c(param_1,uVar11,8,uVar9);
        }
      }
      else if ((((int)(char)iVar5 & (uVar7 ^ 1)) == 0) &&
              ((int)(char)iVar5 != 0 || ((uVar7 ^ 1) & ~uVar10) != 0)) {
        iVar5 = fn_006c5124(*(undefined4 *)(param_1 + 0xb0));
        if ((iVar5 != 0) && (*(uint *)(*(int *)(param_1 + 0xb0) + 0x18) == uVar11))
        goto LAB_002c5dcc;
        uVar9 = fn_00231ca0(0x30,0);
        lVar13 = fn_0031b78c(param_1,uVar11,8,uVar9);
      }
      else {
        uVar9 = fn_00231ca0(0x3c,0);
        lVar13 = fn_0031b78c(param_1,uVar11,8,uVar9);
      }
      if (iVar12 != 0x270e) {
        lVar13 = CONCAT44(iVar12,iVar12 + -0x2700);
      }
      if (iVar12 == 0x270e || (int)lVar13 == 0xf) {
        uVar9 = fn_00231388((int)(short)iVar12);
        fn_0031b78c(param_1,uVar11,0,uVar9);
      }
      else {
        fn_00231388();
        fn_0015b0dc();
        uVar9 = fn_0023070c((char *)&DAT_006ba2cc);
        fn_0031b78c(param_1,uVar11,0,uVar9);
        if (cVar1 == '\0') {
          uVar9 = fn_0023070c((char *)&DAT_006ba2a8);
        }
        else {
          uVar9 = fn_00230730((int)(short)((ulonglong)lVar13 >> 0x20));
        }
        fn_0031b78c(param_1,uVar11,6,uVar9);
      }
      local_2c[0] = _DAT_00894ef4;
      fn_002c37e0(param_1,uVar11,local_2c);
      if (*piVar6 != 0x270e && *piVar6 != 9999) {
        bVar2 = bVar2 & *(byte *)((int)piVar6 + 5);
      }
    }
    else {
      piVar6 = *(int **)(*(int *)(param_1 + 0x78) + uVar11 * 4);
      (**(code **)(*piVar6 + 0x20))(piVar6,0);
    }
    uVar11 = uVar11 + 1;
    if (9 < uVar11) {
      iVar3 = fn_00163d44(0x32);
      if ((iVar3 - 8U < 6) && (bVar2 != 0)) {
        *(undefined1 *)(param_1 + 0xc1) = 2;
      }
      iVar3 = fn_006c5138(*(undefined4 *)(param_1 + 0xb0));
      if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        fn_006ba250(param_1);
      }
      return;
    }
  } while( true );
}



void fn_002c576c(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  
  if (*(char *)((int)param_1 + 0xb9) != '\x02') {
    piVar1 = (int *)fn_006c5114(param_1[0x2c],param_2 + *(int *)(param_1[0x27] + 0xcc) * 10);
    iVar2 = piVar1[2];
    iVar5 = 0;
    if (iVar2 != 0x270e) {
      iVar5 = iVar2 + -0x2700;
    }
    if (iVar2 != 0x270e && iVar5 != 0xf) {
      iVar5 = piVar1[5];
      if (*(char *)((int)piVar1 + 5) != '\0') {
        if ((char)piVar1[3] == '\0') {
          iVar2 = fn_00154ac8(piVar1[4]);
          if (iVar2 != 0) {
            return;
          }
          iVar2 = fn_00163940((int)(short)iVar5);
          if ((iVar2 != 0) &&
             (iVar5 = fn_006b2aa0(*(undefined4 *)(DAT_00897804 + 0x14),(int)(short)iVar5),
             0 < iVar5)) {
            return;
          }
        }
        else {
          iVar5 = fn_00154ac8(piVar1[4]);
          if (iVar5 != 1) {
            return;
          }
        }
      }
      if ((char)piVar1[1] == '\0') {
        uVar4 = fn_0023070c((char *)&DAT_002c5b94);
        fn_0036c5f4(param_1[0x17],uVar4,1,0,1,1,0,0,1);
        *(undefined4 *)(param_1[0x17] + 0x38) = 0;
        fn_00689bd0(param_1,0x48,0);
      }
      else {
        fn_003ae674();
        fn_00685c78();
        iVar8 = *piVar1;
        iVar10 = 0;
        iVar2 = fn_006f7a70(DAT_008977e0);
        iVar7 = 0;
        iVar5 = *(int *)(iVar2 + 0x1c) - *(int *)(iVar2 + 0x18) >> 2;
        if (0 < iVar5) {
          do {
            uVar3 = *(uint *)(iVar2 + 0x18);
            iVar6 = *(int *)(uVar3 + iVar7 * 4);
            if (iVar6 != 0) {
              uVar3 = (uint)*(byte *)(iVar6 + 0x58);
            }
            if (((iVar6 != 0 && uVar3 != 0) && (*(char *)(iVar6 + 0x17c) == ' ')) &&
               (iVar8 == *(int *)(iVar6 + 0x188))) {
              fn_003ae7e8(iVar6,1);
              iVar10 = 1;
              param_1[0x2f] = *(int *)(iVar6 + 0x1a0);
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < iVar5);
        }
        iVar7 = 0;
        iVar5 = *(int *)(iVar2 + 0x28) - *(int *)(iVar2 + 0x24) >> 2;
        if (0 < iVar5) {
          do {
            iVar6 = *(int *)(*(int *)(iVar2 + 0x24) + iVar7 * 4);
            if (((iVar6 != 0) && (*(char *)(iVar6 + 0x2f5) != '\0')) &&
               (iVar8 == *(int *)(iVar6 + 0x1d4))) {
              fn_006879f0(iVar6,1);
              iVar10 = 1;
              param_1[0x2f] = *(int *)(iVar6 + 0x2f8);
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < iVar5);
        }
        bVar9 = iVar10 != 0;
        iVar5 = 0;
        iVar2 = 0;
        if (bVar9) {
          iVar2 = param_1[0x2f];
          iVar5 = iVar2 + 1;
        }
        if ((bVar9 && iVar2 != -1) && iVar5 < 0 == (bVar9 && SCARRY4(iVar2,1))) {
          fn_0068ab44(param_1,0x100094b);
          *(undefined1 *)(param_1 + 0x2e) = 3;
          *(int *)(param_1[0x2c] + 0x18) = param_2;
                    /* WARNING: Could not recover jumptable at 0x002c5a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x110))(param_1);
          return;
        }
        if (*(char *)((int)piVar1 + 5) != '\0') {
          if ((char)piVar1[3] != '\0') {
            iVar5 = fn_00154ac8(piVar1[4]);
            if (iVar5 == 0) {
              return;
            }
            fn_0068ab44(param_1,0x100094b);
            uVar4 = fn_0023070c((char *)&DAT_002c5ba4);
            fn_0036c5f4(param_1[0x17],uVar4,1,0,1,1,0,0,1);
            *(undefined4 *)(param_1[0x17] + 0x38) = 0;
            fn_00689bd0(param_1,0x48,0);
            *(int *)(param_1[0x2c] + 0x18) = param_2;
            *(undefined1 *)(param_1 + 0x2e) = 2;
            return;
          }
          iVar5 = fn_00154ac8(piVar1[4]);
          if (iVar5 != 0) {
            iVar5 = fn_00163940((int)(short)piVar1[5]);
            if (iVar5 == 0) {
              return;
            }
            iVar5 = fn_006b2aa0(*(undefined4 *)(DAT_00897804 + 0x14),(int)(short)piVar1[5]);
            if (iVar5 < 1) {
              return;
            }
          }
          fn_0068ab44(param_1,0x100094b);
          uVar4 = fn_0023070c((char *)&DAT_002c5bc0);
          fn_0036c5f4(param_1[0x17],uVar4,1,0,1,1,0,0,1);
          *(undefined4 *)(param_1[0x17] + 0x38) = 0;
          fn_00689bd0(param_1,0x48,0);
          *(int *)(param_1[0x2c] + 0x18) = param_2;
          *(undefined1 *)(param_1 + 0x2e) = 2;
          return;
        }
      }
      fn_0068ab44(param_1,0x100094d);
      return;
    }
  }
  return;
}


