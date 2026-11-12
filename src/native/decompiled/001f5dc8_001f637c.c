#include "001f5dc8_001f637c.h"



void fn_001f637c(void)

{
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



void fn_001f634c(int param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = fn_006bc18c(*(undefined4 *)(param_1 + 4));
  if (iVar1 != 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 4);
  if (*(int *)(iVar1 + 0x30) != -1) {
    fn_00178eec(*(undefined4 *)(iVar1 + 0x28));
    *(undefined1 *)(iVar1 + 0x4c) = param_2;
  }
  return;
}



void fn_001f60a8(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 local_30 [4];
  undefined1 *local_2c;
  
  fn_0028943c(param_2,1);
  if (param_3 != 0) {
    local_30[0] = (undefined1)param_2;
    piVar10 = (int *)(param_1 + 8);
    if ((*(int *)(param_1 + 0x28) == 0) ||
       (local_2c = local_30, *(int *)(param_1 + 0x18) == *(int *)(param_1 + 0x20))) {
      iVar11 = 0;
      local_2c = local_30;
      iVar1 = fn_00100fc6(0x20,0);
      if (*(int *)(param_1 + 0x28) == 0) {
        *(undefined4 *)(param_1 + 0x30) = 0x20;
        iVar2 = fn_00100fc6(0x80,0);
        *(int *)(param_1 + 0x2c) = iVar2;
        *(int *)(iVar2 + (*(uint *)(param_1 + 0x30) >> 1) * 4) = iVar1;
        piVar5 = (int *)(*(int *)(param_1 + 0x2c) + (*(uint *)(param_1 + 0x30) >> 1) * 4);
        if (piVar5 != (int *)0x0) {
          iVar11 = *piVar5;
        }
        else {
          param_4 = 0;
        }
        *piVar10 = iVar1 + 0x10;
        *(int *)(param_1 + 0xc) = iVar11;
        if (piVar5 != (int *)0x0) {
          param_4 = iVar11 + 0x20;
        }
        *(int *)(param_1 + 0x10) = param_4;
        *(int **)(param_1 + 0x14) = piVar5;
        *(int **)(param_1 + 0x24) = piVar5;
        *(int *)(param_1 + 0x18) = iVar1 + 0x10;
        *(int *)(param_1 + 0x1c) = iVar11;
        *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x10);
      }
      else {
        iVar2 = *(int *)(param_1 + 0x24);
        uVar9 = 0xfffffffc;
        if (*(int *)(param_1 + 0x30) * 4 + -4 + *(int *)(param_1 + 0x2c) == iVar2) {
          iVar2 = iVar2 - *(int *)(param_1 + 0x14) >> 2;
          uVar12 = iVar2 * 2 + 2;
          iVar3 = fn_00100fc6(uVar12 * 4,0);
          puVar4 = *(uint **)(param_1 + 0x14);
          uVar13 = uVar12 & 0xfffffffc;
          puVar6 = (uint *)(*(int *)(param_1 + 0x24) + 4);
          puVar8 = (uint *)(uVar13 + iVar3);
          if (puVar4 < puVar6) {
            uVar14 = (int)puVar6 - (int)puVar4;
            if (0 < (int)uVar14) {
              uVar7 = (uVar14 & 7) >> 2;
              if (uVar7 != 0) {
                *puVar8 = *puVar4;
              }
              uVar9 = (uint)(uVar7 != 0);
              for (; (int)uVar7 < (int)uVar14 >> 2; uVar7 = uVar7 + 2) {
                puVar8[uVar9] = puVar4[uVar9];
                puVar8[uVar9 + 1] = puVar4[uVar9 + 1];
                uVar9 = uVar9 + 2;
              }
            }
          }
          else {
            for (; puVar4 != puVar6; puVar4 = puVar4 + 1) {
              uVar9 = *puVar4;
              *puVar8 = uVar9;
              puVar8 = puVar8 + 1;
            }
          }
          fn_001008c4(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30),0);
          *(int *)(param_1 + 0x2c) = iVar3;
          *(int *)(iVar3 + (iVar2 + (uVar12 >> 2)) * 4 + 4) = iVar1;
          iVar3 = *(int *)(param_1 + 0x2c);
          piVar5 = (int *)(iVar3 + uVar13);
          if (piVar5 == (int *)0x0) {
            uVar9 = 0;
          }
          else {
            iVar3 = *piVar5;
          }
          *(int **)(param_1 + 0x14) = piVar5;
          if (piVar5 == (int *)0x0) {
            iVar3 = 0;
          }
          else {
            uVar9 = iVar3 + 0x20;
          }
          *(int *)(param_1 + 0xc) = iVar3;
          *(uint *)(param_1 + 0x10) = uVar9;
          *piVar10 = *piVar10;
          piVar10 = (int *)(*(int *)(param_1 + 0x2c) + uVar13 + iVar2 * 4 + 4);
          if (piVar10 == (int *)0x0) {
            iVar2 = 0;
          }
          else {
            iVar11 = *piVar10;
            iVar2 = iVar11 + 0x20;
          }
          *(int *)(param_1 + 0x20) = iVar2;
          *(uint *)(param_1 + 0x30) = uVar12;
          *(int *)(param_1 + 0x18) = iVar1;
          *(int *)(param_1 + 0x1c) = iVar11;
          *(int **)(param_1 + 0x24) = piVar10;
        }
        else {
          *(int **)(param_1 + 0x24) = (int *)(iVar2 + 4);
          *(int *)(iVar2 + 4) = iVar1;
          piVar10 = *(int **)(param_1 + 0x24);
          if (piVar10 == (int *)0x0) {
            iVar2 = 0;
          }
          else {
            iVar11 = *piVar10;
            iVar2 = iVar11 + 0x20;
          }
          *(int *)(param_1 + 0x20) = iVar2;
          *(int *)(param_1 + 0x18) = iVar1;
          *(int *)(param_1 + 0x1c) = iVar11;
          *(int **)(param_1 + 0x24) = piVar10;
        }
      }
    }
    if (*(undefined1 **)(param_1 + 0x18) != (undefined1 *)0x0) {
      **(undefined1 **)(param_1 + 0x18) = *local_2c;
    }
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  }
  return;
}



undefined4 fn_001f607c(int param_1)

{
  fn_00319e58(*(undefined4 *)(param_1 + 0x60));
  *(undefined1 **)(param_1 + 0x48) = &LAB_001f642c;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  return 1;
}



undefined4 * fn_001f5f94(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  
  *param_1 = &PTR_FUN_0081c0e8;
  if (*(char *)(param_1 + 0x3e6) == '\0') {
    fn_001f4d24(param_1);
  }
  else {
    *(undefined1 *)(param_1 + 0x3e6) = 0;
    fn_002dbe64(param_1[0x3a0]);
  }
  fn_0012d73c(param_1[0x3e3]);
  param_1[0x3e3] = 0;
  if ((int *)param_1[0x3df] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x3df] + 4))();
  }
  if ((int *)param_1[0x3a2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x3a2] + 4))();
  }
  if ((int *)param_1[0x3a0] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x3a0] + 4))();
  }
  if ((int *)param_1[0x394] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x394] + 4))();
  }
  if ((int *)param_1[0x393] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x393] + 4))();
  }
  if ((int *)param_1[0x1e] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x1e] + 4))();
  }
  *param_1 = &DAT_0081bd80;
  fn_001484b4(param_1);
  fn_0012d73c(param_1[6]);
  if ((int *)param_1[4] != (int *)0x0) {
    (**(code **)(*(int *)param_1[4] + 4))();
    param_1[4] = 0;
  }
  piVar6 = (int *)param_1[0x18];
  piVar7 = param_1 + 0x14;
  if (piVar6 != (int *)0x0) {
    piVar3 = (int *)*piVar6;
    while (piVar3 != piVar6) {
      piVar1 = (int *)param_1[0x18];
      if (piVar3 != piVar1) {
        piVar1 = (int *)*piVar3;
        *(int *)piVar3[1] = *piVar3;
        *(int *)(*piVar3 + 4) = piVar3[1];
        param_1[0x19] = param_1[0x19] + -1;
        *piVar3 = param_1[0x15];
        param_1[0x15] = piVar3;
      }
      piVar3 = piVar1;
    }
    puVar2 = (undefined4 *)param_1[0x18];
    *puVar2 = param_1[0x15];
    param_1[0x15] = puVar2;
    piVar6 = (int *)*piVar7;
    while (piVar6 != (int *)0x0) {
      *piVar7 = *piVar6;
      fn_001008c4(piVar6[2],piVar6[1],0);
      fn_001008c4(piVar6,1,0);
      piVar6 = (int *)*piVar7;
    }
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
  }
  uVar4 = param_1[0x11];
  uVar5 = uVar4;
  if ((uint)param_1[0x12] <= uVar4) {
    for (; uVar5 != param_1[0x12]; uVar5 = uVar5 + 4) {
    }
  }
  fn_001008c4(uVar4,(int)(param_1[0x13] - uVar4) >> 2,0);
  if ((int *)param_1[4] != (int *)0x0) {
    (**(code **)(*(int *)param_1[4] + 4))();
  }
  uVar4 = param_1[1];
  uVar5 = uVar4;
  if ((uint)param_1[2] < uVar4) {
    do {
      uVar5 = uVar5 + 4;
    } while (uVar5 != param_1[2]);
  }
  fn_001008c4(uVar4,(int)(param_1[3] - uVar4) >> 2,0);
  return param_1;
}



int fn_001f5dc8(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  puVar3 = (undefined4 *)fn_001cf0d8(param_1,*(undefined4 *)(DAT_008977e0 + 0x2c));
  *puVar3 = &PTR_FUN_0081c0e8;
  puVar3[0x1d] = 0;
  iVar4 = fn_00145b00(8,&DAT_00812c8c);
  uVar5 = 0;
  if (iVar4 != 0) {
    uVar5 = fn_00692eac();
  }
  puVar3[0x1e] = uVar5;
  *(undefined1 *)(puVar3 + 0x1f) = 0;
  puVar3[0x20] = 0;
  puVar3[0x21] = 0;
  puVar3[0x22] = 0;
  iVar4 = fn_00101a1c(puVar3 + 0x23,&LAB_001f1568,0x2c,0x50);
  *(undefined4 *)(iVar4 + 0xdc0) = 0;
  *(undefined4 *)(iVar4 + 0xdc4) = 0;
  *(undefined4 *)(iVar4 + 0xdc8) = 0;
  *(undefined4 *)(iVar4 + 0xdcc) = 0;
  *(undefined4 *)(iVar4 + 0xdd0) = 0xffffffff;
  uVar5 = 0;
  *(undefined1 *)(iVar4 + 0xdd4) = 0;
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar6 = fn_00303afc(&DAT_008c62fc), iVar6 != 0)) {
    DAT_008f9e2c = uVar5;
    DAT_008f9e30 = uVar5;
    DAT_008f9e34 = uVar5;
  }
  uVar2 = DAT_008f9e34;
  uVar1 = DAT_008f9e30;
  *(undefined4 *)(iVar4 + 0xdd8) = DAT_008f9e2c;
  *(undefined4 *)(iVar4 + 0xddc) = uVar1;
  *(undefined4 *)(iVar4 + 0xde0) = uVar2;
  *(undefined4 *)(iVar4 + 0xde4) = uVar5;
  *(undefined4 *)(iVar4 + 0xde8) = 0;
  *(undefined1 *)(iVar4 + 0xdec) = 0;
  *(undefined4 *)(iVar4 + 0xdf0) = 0xbf800000;
  iVar6 = fn_00145b00(8,&DAT_00812c8c);
  uVar5 = 0;
  if (iVar6 != 0) {
    uVar5 = fn_002dbf44();
  }
  *(undefined4 *)(iVar4 + 0xdf4) = uVar5;
  *(undefined1 *)(iVar4 + 0xdf8) = 0xff;
  iVar6 = fn_00145b00(0x48,&DAT_00812c8c);
  uVar5 = 0;
  if (iVar6 != 0) {
    uVar5 = fn_0025a63c();
  }
  *(undefined4 *)(iVar4 + 0xdfc) = uVar5;
  iVar4 = fn_00101a1c(iVar4 + 0xe00,&DAT_001c6d30,0xc,0x14);
  *(undefined4 *)(iVar4 + 0xf0) = 0;
  *(undefined4 *)(iVar4 + 0xf4) = 0xffffffff;
  *(undefined4 *)(iVar4 + 0xf8) = 0xffffffff;
  *(undefined4 *)(iVar4 + 0x100) = 0;
  *(undefined4 *)(iVar4 + 0xfc) = 0xffffffff;
  *(undefined1 *)(iVar4 + 0x104) = 0;
  *(undefined1 *)(iVar4 + 0x105) = 0;
  *(undefined1 *)(iVar4 + 0x106) = 0;
  *(undefined1 *)(iVar4 + 0x107) = 0;
  *(undefined1 *)(iVar4 + 0x108) = 0;
  *(undefined1 *)(iVar4 + 0x109) = 0;
  *(undefined1 *)(iVar4 + 0x10a) = 0;
  *(undefined1 *)(iVar4 + 0x10b) = 0;
  *(undefined1 *)(iVar4 + 0x10c) = 0;
  *(undefined1 *)(iVar4 + 0x10d) = 0;
  *(undefined1 *)(iVar4 + 0x10e) = 0;
  return iVar4 + -0xe8c;
}


