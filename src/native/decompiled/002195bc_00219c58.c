#include "002195bc_00219c58.h"



void fn_00219c58(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = *(uint *)(param_1 + 0x118);
  *(uint *)(param_1 + 0x118) = 0;
  uVar2 = *(uint *)(param_1 + 0x11c);
  *(undefined4 *)(param_1 + 0x11c) = 0;
  iVar3 = *(int *)(param_1 + 0x120);
  *(undefined4 *)(param_1 + 0x120) = 0;
  uVar1 = uVar4;
  if (uVar2 < uVar4) {
    do {
      uVar1 = uVar1 + 4;
    } while (uVar1 != uVar2);
  }
  fn_001008c4(uVar4,(int)(iVar3 - uVar4) >> 2,0);
  iVar3 = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  do {
    iVar5 = param_1 + iVar3 * 4;
    if (*(int *)(iVar5 + 0x18) != -1) {
      fn_00159f34(*(undefined4 *)(param_1 + 4));
      *(undefined4 *)(iVar5 + 0x18) = 0xffffffff;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x12);
  fn_0016a43c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
                    /* WARNING: Subroutine does not return */
  fn_001482f4(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
}



void fn_002195bc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  bool bVar12;
  uint in_fpscr;
  undefined4 uVar13;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  local_28 = param_4;
  iVar3 = fn_006f7a48(DAT_008977e0);
  cVar2 = *(char *)(iVar3 + 4);
  if (cVar2 == '\0') {
    iVar3 = 0;
    do {
      local_28 = 0x20100;
      bVar1 = *(byte *)((int)&local_28 + iVar3);
      if (*(int *)(param_1 + 0x138) != 7) {
        fn_006f7a48(DAT_008977e0);
        iVar4 = fn_006a7f0c();
        if ((iVar4 != 0) &&
           (iVar4 = fn_006b1cac(param_1,*(undefined4 *)(param_1 + (uint)bVar1 * 4 + 0x88)),
           iVar4 != 0)) {
          if (-1 < iVar3) {
            iVar4 = fn_006bc57c(*(undefined4 *)(DAT_00897804 + 0x20),iVar3);
            if (iVar4 == 0) goto LAB_00219bf8;
            fn_006f7a84(DAT_008977e0);
            fn_001e6c2c();
            iVar5 = fn_00259f7c(iVar4);
            if (iVar5 == 0) goto code_r0x002198c0;
            fn_006f7a84(DAT_008977e0);
            iVar5 = fn_006aa348();
            if (iVar5 == 0) goto code_r0x002198c0;
            param_1 = param_1 + iVar3 * 4;
            *(undefined1 *)(*(int *)(param_1 + 0x128) + 0x13) = 1;
            (**(code **)(**(int **)(param_1 + 0x128) + 0xc))();
            fn_002906e0(iVar4);
            iVar3 = fn_00259f6c(iVar4);
            fn_00699a64(DAT_008977e0,iVar3);
            if (iVar3 != 4) goto LAB_00219850;
            puVar6 = (undefined4 *)fn_001f74f8(*(undefined4 *)(DAT_008977e0 + 0x28),0x51);
            if (puVar6 == (undefined4 *)0x0) goto LAB_00219844;
            puVar7 = (undefined4 *)(**(code **)*puVar6)(puVar6);
            goto LAB_00219830;
          }
          break;
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 3);
    if (*(int *)(param_1 + 0x138) != 7) {
      fn_006f7a48(DAT_008977e0);
      iVar3 = fn_006a7f0c();
      if ((iVar3 != 0) &&
         (iVar3 = fn_006b1cac(param_1,*(undefined4 *)(param_1 + 0x94)), iVar3 != 0)) {
        fn_006f7a84(DAT_008977e0);
        iVar3 = fn_006aae9c();
        if (iVar3 != 0) {
          iVar3 = fn_006f72e0(DAT_008977e0);
          if (iVar3 != 0) {
            piVar10 = (int *)fn_006f72e0(DAT_008977e0);
            iVar3 = (**(code **)(*piVar10 + 0x44))();
            if (iVar3 != 0) {
              iVar3 = fn_006f7a84(DAT_008977e0);
              *(undefined1 *)(iVar3 + 0x3e3) = 1;
              fn_006f7a84(DAT_008977e0);
              fn_001e3618();
              piVar10 = (int *)fn_006f72e0(DAT_008977e0);
              (**(code **)(*piVar10 + 0x34))();
            }
          }
          goto LAB_00219bf8;
        }
        goto code_r0x002198c0;
      }
    }
    if (*(int *)(param_1 + 0x138) != 7) {
      fn_006f7a48(DAT_008977e0);
      iVar3 = fn_006a7f0c();
      if (((iVar3 != 0) &&
          (iVar3 = fn_006b1cac(param_1,*(undefined4 *)(param_1 + 0x9c)), iVar3 != 0)) &&
         (iVar3 = fn_006f72c8(DAT_008977e0), iVar3 != 0)) {
        fn_006f7a84(DAT_008977e0);
        iVar3 = fn_006aae9c();
        if (iVar3 != 0) {
          uVar13 = fn_006f7a84(DAT_008977e0);
          uVar8 = fn_006f72c8(DAT_008977e0);
          iVar3 = fn_006b1d80(uVar8,uVar13,1);
          if ((iVar3 != 0) && (iVar3 = fn_006f7580(DAT_008977e0), iVar3 != 0)) goto LAB_00219bf8;
        }
code_r0x002198c0:
                    /* WARNING: Subroutine does not return */
        fn_001638a0();
      }
    }
    bVar12 = *(int *)(param_1 + 0x68) != 0;
    iVar3 = 0;
    if (bVar12) {
      iVar3 = *(int *)(param_1 + 0x138);
    }
    if (bVar12 && iVar3 != 7) {
      fn_006f7a48(DAT_008977e0);
      iVar3 = fn_006a7f0c();
      if (iVar3 != 0) {
        fn_006f7a84(DAT_008977e0);
        iVar3 = fn_006aa490();
        if (iVar3 != 0) {
          local_28 = 0x7f000000;
          fn_00163988(DAT_00897810,&local_28,1);
          fn_00699014(DAT_008977e0,1);
          *(undefined1 *)(param_1 + 0x68d) = 1;
          if (*(int *)(param_1 + 0x138) != 4 && *(int *)(param_1 + 0x138) != 1) {
            iVar3 = *(int *)(param_1 + 0x68);
            uVar13 = *(undefined4 *)(iVar3 + 0x20);
            uVar8 = *(undefined4 *)(iVar3 + 0x24);
            *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(iVar3 + 0x1c);
            *(undefined4 *)(param_1 + 0x140) = uVar13;
            *(undefined4 *)(param_1 + 0x144) = uVar8;
          }
          iVar3 = *(int *)(param_1 + 0x68);
          uVar13 = *(undefined4 *)(iVar3 + 0x20);
          uVar8 = *(undefined4 *)(iVar3 + 0x24);
          *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(iVar3 + 0x1c);
          *(undefined4 *)(param_1 + 0x158) = uVar13;
          *(undefined4 *)(param_1 + 0x15c) = uVar8;
          iVar3 = *(int *)(param_1 + 0x60);
          uVar13 = *(undefined4 *)(iVar3 + 0x20);
          uVar8 = *(undefined4 *)(iVar3 + 0x24);
          *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(iVar3 + 0x1c);
          *(undefined4 *)(param_1 + 0x14c) = uVar13;
          *(undefined4 *)(param_1 + 0x150) = uVar8;
          fn_006f7a48(DAT_008977e0);
          uVar13 = fn_006a7e28();
          uVar13 = VectorSignedToFloat(uVar13,(byte)(in_fpscr >> 0x16) & 3);
          *(undefined4 *)(param_1 + 0x178) = uVar13;
          fn_006f7a48(DAT_008977e0);
          uVar13 = fn_006a7e3c();
          uVar13 = VectorSignedToFloat(uVar13,(byte)(in_fpscr >> 0x16) & 3);
          *(undefined4 *)(param_1 + 0x17c) = uVar13;
          *(undefined4 *)(param_1 + 0x180) = 0;
          *(undefined4 *)(param_1 + 0x184) = 0;
          *(undefined4 *)(param_1 + 0x138) = 2;
          uVar13 = fn_006f7a48(DAT_008977e0);
          fn_00128744(uVar13,7);
          if (**(int **)(DAT_008977e0 + 0x40) != 0) {
            fn_001c7db8((*(int **)(DAT_008977e0 + 0x40))[4],1);
          }
          if (*(int *)(param_1 + 0x1b4) != *(int *)(param_1 + 0x1b8)) {
            fn_0021c4c0(param_1);
          }
        }
      }
    }
  }
  else if (cVar2 == '\x04') {
    if (*(int *)(param_1 + 0x138) != 7) {
      fn_006f7a48(DAT_008977e0);
      iVar3 = fn_006a7f0c();
      if ((iVar3 != 0) &&
         (iVar3 = fn_006b1cac(param_1,*(undefined4 *)(param_1 + 0x94)), iVar3 != 0)) {
        fn_006f7a84(DAT_008977e0);
        iVar3 = fn_006aae9c();
        if (iVar3 == 0) goto code_r0x002198c0;
        iVar3 = fn_006f72e0(DAT_008977e0);
        if (iVar3 != 0) {
          piVar10 = (int *)fn_006f72e0(DAT_008977e0);
          iVar3 = (**(code **)(*piVar10 + 0x44))();
          if (iVar3 != 0) {
            iVar3 = fn_006f7a84(DAT_008977e0);
            *(undefined1 *)(iVar3 + 0x3e3) = 1;
            piVar10 = (int *)fn_006f72e0(DAT_008977e0);
            (**(code **)(*piVar10 + 0x34))();
          }
        }
      }
    }
  }
  else if ((cVar2 == '\a') && (iVar3 = fn_0021b1d4(param_1), iVar3 == 0)) {
    uVar13 = fn_006f7a48(DAT_008977e0);
    fn_00128744(uVar13,0);
  }
LAB_00219bf8:
  fn_006f7a48(DAT_008977e0);
  iVar3 = fn_006a7e04();
  if (iVar3 == 0) {
    return;
  }
  bVar12 = *(char *)(param_1 + 0x68c) == '\0';
  iVar3 = fn_006f7358(DAT_008977e0);
  if (iVar3 != 0) {
    if (!bVar12) {
      iVar3 = fn_006f7a84(DAT_008977e0);
      uVar13 = 0;
      local_28 = VectorSignedToFloat((int)(*(float *)(iVar3 + 0x28) * *(float *)(param_1 + 0x188)),
                                     (byte)(in_fpscr >> 0x16) & 3);
      local_2c = VectorSignedToFloat((int)-(*(float *)(iVar3 + 0x20) * *(float *)(param_1 + 0x188)),
                                     (byte)(in_fpscr >> 0x16) & 3);
      fn_0054ca94(*(undefined4 *)(param_1 + 0x68),&local_2c);
      local_38 = uVar13;
      local_34 = uVar13;
      local_30 = uVar13;
      fn_0054ca94(*(undefined4 *)(param_1 + 0x60),&local_38);
      *(undefined4 *)(param_1 + 0x138) = 0;
    }
    *(bool *)(param_1 + 0x68c) = bVar12;
    piVar11 = *(int **)(param_1 + 0x20c);
    for (piVar10 = (int *)*piVar11; piVar10 != piVar11; piVar10 = (int *)*piVar10) {
      if (*(char *)(param_1 + 0x68c) == '\0') {
        iVar3 = piVar10[5];
        if (iVar3 != 0) {
          *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xbf;
        }
        iVar3 = piVar10[6];
        if (iVar3 != 0) {
          *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xbf;
        }
      }
      else {
        if (piVar10[5] != 0) {
          fn_0021e55c(param_1);
        }
        if (piVar10[6] != 0) {
          fn_0021e55c(param_1);
        }
      }
    }
    if ((*(char *)(param_1 + 0x68c) != '\0') &&
       (uVar9 = 0, *(int *)(param_1 + 0x228) - *(int *)(param_1 + 0x224) >> 2 != 0)) {
      do {
        iVar3 = *(int *)(*(int *)(param_1 + 0x224) + uVar9 * 4);
        uVar9 = uVar9 + 1;
        *(undefined1 *)(iVar3 + 0x45) = 0;
        *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe;
      } while (uVar9 < (uint)(*(int *)(param_1 + 0x228) - *(int *)(param_1 + 0x224) >> 2));
    }
  }
  return;
  while (puVar7 = (undefined4 *)*puVar7, puVar7 != (undefined4 *)0x0) {
LAB_00219830:
    if (puVar7 == &DAT_008944a8) goto LAB_00219848;
  }
LAB_00219844:
  puVar6 = (undefined4 *)0x0;
LAB_00219848:
  *(undefined1 *)(puVar6 + 3) = 0;
LAB_00219850:
  iVar3 = fn_006f7a84(DAT_008977e0);
  *(undefined1 *)(iVar3 + 0x3e3) = 1;
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}


