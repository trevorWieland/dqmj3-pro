#include "001e5dc0_001e6354.h"



void fn_001e6354(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  
  uVar7 = 0;
  if (*(int *)(param_1 + 0x1c4) < 1) {
    fVar6 = *(float *)(param_1 + 0x1b8);
    if ((int)(fVar6 * fVar6 + *(float *)(param_1 + 0x1bc) * *(float *)(param_1 + 0x1bc) +
             *(float *)(param_1 + 0x1c0) * *(float *)(param_1 + 0x1c0)) < 0x3c23d70c) {
      puVar3 = (undefined4 *)fn_00171634();
      uVar2 = puVar3[1];
      uVar4 = puVar3[2];
      *(undefined4 *)(param_1 + 0x1b8) = *puVar3;
      *(undefined4 *)(param_1 + 0x1bc) = uVar2;
      *(undefined4 *)(param_1 + 0x1c0) = uVar4;
      if (*(char *)(param_1 + 0x22d) != '\a') {
        fn_001ea890(param_1,0);
      }
    }
    else {
      fVar5 = *(float *)(param_1 + 0x1cc);
      *(float *)(param_1 + 0x1b8) = fVar6 * fVar5;
      *(float *)(param_1 + 0x1bc) = *(float *)(param_1 + 0x1bc) * fVar5;
      *(float *)(param_1 + 0x1c0) = *(float *)(param_1 + 0x1c0) * fVar5;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x1c4) + -1;
    *(int *)(param_1 + 0x1c4) = iVar1;
    if (iVar1 == 0) {
      *(undefined1 *)(*(int *)(param_1 + 400) + 0x3d) = 0;
      uVar2 = fn_006f7a48(DAT_008977e0);
      fn_00128744(uVar2,0);
      *(undefined1 *)(param_1 + 0x1c8) = 1;
    }
    if (*(char *)(param_1 + 0x1c8) == '\0') {
      fn_001dd414(param_1,0);
    }
  }
  iVar1 = fn_006a9938(param_1);
  if ((iVar1 != 0) || (iVar1 = fn_006a99b0(param_1), iVar1 != 0)) {
    *(undefined4 *)(param_1 + 0x1bc) = uVar7;
  }
  return;
}



void fn_001e6248(int param_1,float *param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_r4;
  undefined4 uVar4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  bool bVar5;
  float fVar6;
  float fVar7;
  undefined8 in_d8;
  undefined8 uVar8;
  
  fVar7 = 0.0;
  if (((*(char *)(param_1 + 0x22d) == '\x01') && (0 < *(int *)(param_1 + 0x1c4))) &&
     (*(char *)(param_1 + 0x1d0) != '\0')) {
    if (*(char *)(*(int *)(param_1 + 400) + 0x3c) == '\0') {
      iVar3 = 0x753e;
    }
    else {
      iVar3 = 0x7561;
    }
LAB_001e3874:
    uVar8 = CONCAT44(unaff_r5,unaff_r4);
    uVar4 = *(undefined4 *)(DAT_008977e0 + 0x2c);
    iVar2 = fn_006b4cbc(uVar4,*(undefined4 *)(param_1 + 0x1ec));
    if ((iVar2 != iVar3) && (iVar2 = fn_002a4c38(uVar4,iVar3), iVar2 != 0)) {
      if (*(int *)(param_1 + 0x1ec) != -1) {
        fn_0023e640(*(undefined4 *)(DAT_008977e0 + 0x2c),*(int *)(param_1 + 0x1ec),0,param_4,in_d8,
                     uVar8,unaff_r6);
        *(undefined4 *)(param_1 + 0x1ec) = 0xffffffff;
      }
      uVar4 = fn_0023e194(uVar4,iVar3,0);
      *(undefined4 *)(param_1 + 0x1ec) = uVar4;
    }
    return;
  }
  iVar3 = fn_006f7358(DAT_008977e0);
  if (iVar3 != 0) {
    fVar6 = *param_2;
    bVar1 = fVar6 == fVar7;
    if (bVar1) {
      fVar6 = param_2[1];
    }
    bVar5 = false;
    if (bVar1 && (bVar1 && fVar6 == fVar7)) {
      bVar5 = param_2[2] == fVar7;
    }
    if (!bVar5) {
      iVar3 = 0x7533;
      goto LAB_001e3874;
    }
  }
  if (*(int *)(param_1 + 0x1ec) != -1) {
    fn_0023e640(*(undefined4 *)(DAT_008977e0 + 0x2c),*(int *)(param_1 + 0x1ec),0);
    *(undefined4 *)(param_1 + 0x1ec) = 0xffffffff;
  }
  return;
}



void fn_001e6100(int param_1)

{
  if (*(char *)(param_1 + 0x22d) == '\x06') {
    fn_001da640(param_1);
    if (*(char *)(param_1 + 0x208) != -1) {
      fn_001747e8(*(undefined4 *)(param_1 + 0x18c));
    }
  }
  fn_0023f454(*(undefined4 *)(param_1 + 400));
  fn_001ea890(param_1,5);
  fn_00698fb8(DAT_008977e0,1);
  return;
}



void fn_001e60b4(int param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = 0;
  *(undefined1 *)(param_1 + 0x418) = param_2;
  do {
    if (*(int *)(param_1 + iVar1 * 4 + 0x17c) != 0) {
      fn_001da65c(param_1);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 5);
  return;
}



void fn_001e5dc0(int param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  int *piVar8;
  undefined4 uVar9;
  uint *puVar10;
  
  if (*(char *)(param_1 + 0x1b1) != '\0') {
    if ((*(uint *)(param_1 + 0x138) & 2) != 0) {
      *(uint *)(param_1 + 0x138) = *(uint *)(param_1 + 0x138) & 0xfffffffd;
    }
    if ((*(char *)(param_1 + 0x1b0) != -1) &&
       (*(int *)(param_1 + *(char *)(param_1 + 0x1b0) * 4 + 0x17c) != 0)) {
      fn_0017fde4();
      fn_0017fc3c();
      fn_001e21b0(param_1,(int)*(char *)(param_1 + 0x1b0));
      fn_00162d44(*(undefined4 *)(*(int *)(DAT_008977e0 + 8) + 0x24));
    }
    if ((*(char *)(param_1 + 0x208) != -1) &&
       (*(int *)(param_1 + *(char *)(param_1 + 0x208) * 4 + 0x17c) != 0)) {
      fn_0017fde4();
      fn_0017fc3c();
      fn_001e2804(param_1,1,(int)*(char *)(param_1 + 0x208),0);
    }
    *(undefined1 *)(param_1 + 0x1b1) = 0;
    puVar3 = *(uint **)(param_1 + 0x1dc);
    uVar7 = 0;
    piVar8 = *(int **)(DAT_008977e0 + 0x2c);
    uVar2 = 0;
    if (*(int *)(param_1 + 0x1e0) - (int)puVar3 >> 2 != 0) {
      do {
        uVar9 = *(undefined4 *)(*(int *)(param_1 + 0x1dc) + uVar7 * 4);
        iVar1 = fn_006b4cbc(piVar8,uVar9);
        if (iVar1 == 5 || iVar1 == 0xf) {
          (**(code **)(*piVar8 + 0xc))(piVar8,uVar9);
          *(undefined4 *)(*(int *)(param_1 + 0x1dc) + uVar7 * 4) = 0xffffffff;
        }
        puVar3 = *(uint **)(param_1 + 0x1dc);
        uVar7 = uVar7 + 1;
        uVar2 = *(int *)(param_1 + 0x1e0) - (int)puVar3 >> 2;
      } while (uVar7 < uVar2);
    }
    puVar4 = *(uint **)(param_1 + 0x1e0);
    while( true ) {
      if (puVar3 != puVar4) {
        uVar2 = *puVar3;
      }
      if (puVar3 == puVar4 || uVar2 == 0xffffffff) break;
      puVar3 = puVar3 + 1;
    }
    if (puVar3 != puVar4) {
      puVar10 = puVar3 + 1;
      if (puVar10 < puVar4) {
        iVar1 = (int)puVar4 - (int)puVar10;
        if (0 < iVar1) {
          puVar4 = puVar3;
          if (iVar1 * 0x20000000 < 0) {
            uVar2 = *puVar10;
            puVar10 = puVar3 + 2;
            if (uVar2 != 0xffffffff) {
              puVar4 = puVar3 + 1;
              *puVar3 = uVar2;
            }
          }
          puVar3 = puVar4;
          for (iVar1 = iVar1 >> 3; iVar1 != 0; iVar1 = iVar1 + -1) {
            puVar4 = puVar3;
            if (*puVar10 != 0xffffffff) {
              puVar4 = puVar3 + 1;
              *puVar3 = *puVar10;
            }
            puVar6 = puVar10 + 1;
            puVar10 = puVar10 + 2;
            puVar3 = puVar4;
            if (*puVar6 != 0xffffffff) {
              puVar3 = puVar4 + 1;
              *puVar4 = *puVar6;
            }
          }
        }
      }
      else {
        while (puVar10 != puVar4) {
          uVar2 = *puVar10;
          puVar10 = puVar10 + 1;
          if (uVar2 != 0xffffffff) {
            *puVar3 = uVar2;
            puVar3 = puVar3 + 1;
          }
        }
      }
    }
    puVar4 = *(uint **)(param_1 + 0x1e0);
    puVar10 = *(uint **)(param_1 + 0x1e0);
    if (*(uint **)(param_1 + 0x1dc) != puVar4) {
      puVar6 = puVar10;
      puVar5 = puVar3;
      if (puVar10 < puVar4) {
        uVar2 = (int)puVar4 - (int)puVar10;
        if (0 < (int)uVar2) {
          puVar4 = puVar10 + -1;
          puVar6 = puVar3 + -1;
          if ((int)(uVar2 * 0x20000000) < 0) {
            *puVar3 = *puVar10;
            puVar4 = puVar10;
            puVar6 = puVar3;
          }
          for (iVar1 = (int)uVar2 >> 3; iVar1 != 0; iVar1 = iVar1 + -1) {
            puVar6[1] = puVar4[1];
            puVar4 = puVar4 + 2;
            puVar6 = puVar6 + 2;
            *puVar6 = *puVar4;
          }
          puVar5 = (uint *)((uVar2 & 0xfffffffc) + (int)puVar3);
        }
      }
      else {
        for (; puVar6 != puVar4; puVar6 = puVar6 + 1) {
          *puVar5 = *puVar6;
          puVar5 = puVar5 + 1;
        }
      }
      puVar4 = *(uint **)(param_1 + 0x1e0);
      if (puVar4 < puVar5) {
        do {
          puVar5 = puVar5 + 1;
        } while (puVar5 != puVar4);
      }
      *(uint *)(param_1 + 0x1e0) = (int)puVar4 - ((int)puVar10 - (int)puVar3 & 0xfffffffcU);
    }
  }
  return;
}


