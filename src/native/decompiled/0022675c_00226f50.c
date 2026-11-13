#include "0022675c_00226f50.h"



void fn_00226f50(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (*(int *)(iVar1 + 4) != 0) {
    fn_00144854();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    return;
  }
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  if (*(int *)(iVar1 + 0x10) != -1) {
    fn_00159f34(*(undefined4 *)(iVar1 + 4));
    *(undefined4 *)(iVar1 + 0x10) = 0xffffffff;
  }
  if (*(int *)(iVar1 + 0xc) != -1) {
    fn_0016a43c(*(undefined4 *)(iVar1 + 4));
    *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  }
  if (*(int *)(iVar1 + 8) != -1) {
                    /* WARNING: Subroutine does not return */
    fn_001482f4(*(undefined4 *)(iVar1 + 4));
  }
  *(undefined4 *)(iVar1 + 4) = 0;
  return;
}



undefined4 fn_00226f48(undefined4 param_1)

{
  return param_1;
}



undefined4 * fn_00226f28(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = &DAT_0081ca20;
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



void fn_00226dac(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  *param_1 = &PTR_FUN_0081c8ec;
  fn_001218d4(DAT_00897800,DAT_0089879c);
  uVar1 = param_1[0x7f];
  uVar2 = uVar1;
  if ((uint)param_1[0x80] < uVar1) {
    do {
      uVar2 = uVar2 + 0x44;
    } while (uVar2 != param_1[0x80]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x81] - uVar1) / 0x44,0);
  if (param_1[0x7e] != 0) {
    fn_001fa314();
    fn_002feef8();
  }
  if ((int *)param_1[0x7d] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x7d] + 4))();
  }
  uVar1 = param_1[0x6e];
  uVar2 = uVar1;
  if ((uint)param_1[0x6f] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[0x6f]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x70] - uVar1) >> 2,0);
  puVar3 = (undefined4 *)param_1[0x62];
  if ((puVar3 != (undefined4 *)0x0) && (*(char *)(param_1 + 99) != '\0')) {
    (**(code **)*puVar3)(puVar3);
    (**(code **)(*(int *)puVar3[1] + 0xc))((int *)puVar3[1],puVar3);
  }
  if ((int *)param_1[0x61] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x61] + 4))();
  }
  if ((int *)param_1[0x60] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x60] + 4))();
  }
  if ((int *)param_1[0x5f] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x5f] + 4))();
  }
  fn_001c5968(param_1);
  return;
}



int fn_00226924(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  int *piVar15;
  undefined4 uVar16;
  uint local_30;
  uint local_2c [2];
  
  puVar1 = (undefined4 *)fn_001c585c(param_1,6);
  puVar1[0x5f] = 0;
  *puVar1 = &PTR_FUN_0081c8ec;
  puVar1[0x60] = 0;
  puVar1[0x61] = 0;
  puVar1[0x62] = 0;
  *(undefined1 *)(puVar1 + 99) = 1;
  puVar1[100] = 0;
  *(undefined1 *)(puVar1 + 0x65) = 0xff;
  iVar2 = fn_001c6d34(puVar1 + 0x66);
  iVar2 = fn_001c6d34(iVar2 + 0xc);
  *(undefined4 *)(iVar2 + 0xc) = 0;
  *(undefined4 *)(iVar2 + 0x10) = 0;
  *(undefined4 *)(iVar2 + 0x14) = 0;
  *(undefined4 *)(iVar2 + 0x18) = 0;
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  *(undefined4 *)(iVar2 + 0x20) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0x24) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0x28) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0x48) = 0;
  *(undefined1 *)(iVar2 + 0x4c) = 0;
  iVar3 = fn_00145b00(0xc,&DAT_00812c8c);
  uVar4 = 0;
  if (iVar3 != 0) {
    uVar4 = fn_00319900();
  }
  *(undefined4 *)(iVar2 + 0x50) = uVar4;
  iVar3 = fn_00145b00(0x10,&DAT_00812c8c);
  uVar4 = 0;
  if (iVar3 != 0) {
    uVar4 = fn_001fa2fc();
  }
  *(undefined4 *)(iVar2 + 0x54) = uVar4;
  *(undefined4 *)(iVar2 + 0x58) = 0;
  *(undefined4 *)(iVar2 + 0x5c) = 0;
  *(undefined4 *)(iVar2 + 0x60) = 0;
  *(undefined **)(iVar2 + 100) = &DAT_00859250;
  *(undefined1 *)(iVar2 + 0x68) = 0;
  *(undefined1 *)(iVar2 + 0x69) = 0;
  *(undefined1 *)(iVar2 + 0x6a) = 0;
  *(undefined4 *)(iVar2 + 0x6c) = 0;
  *(undefined **)(iVar2 + 0x74) = &DAT_00859240;
  *(undefined4 *)(iVar2 + 0x70) = 0;
  *(undefined1 *)(iVar2 + 0x78) = 0;
  *(undefined1 *)(iVar2 + 0x79) = 0;
  *(undefined1 *)(iVar2 + 0x7a) = 0;
  *(undefined4 *)(iVar2 + 0x7c) = 0;
  *(undefined4 *)(iVar2 + 0x80) = 0;
  *(undefined4 *)(iVar2 + 0x90) = 4;
  *(undefined4 *)(iVar2 + 0x84) = 0;
  *(undefined1 *)(iVar2 + 0x94) = 0;
  *(undefined1 *)(iVar2 + 0x95) = 0;
  *(undefined1 *)(iVar2 + 0x96) = 0;
  *(undefined1 *)(iVar2 + 0x97) = 0;
  *(undefined1 *)(iVar2 + 0x98) = 0;
  *(undefined1 *)(iVar2 + 0x99) = 0;
  *(undefined1 *)(iVar2 + 0x9a) = 0;
  *(undefined1 *)(iVar2 + 0x9b) = 0;
  *(undefined1 *)(iVar2 + 0x9c) = 0;
  *(undefined1 *)(iVar2 + 0x9d) = 0;
  *(undefined1 *)(iVar2 + 0x9e) = 0;
  *(undefined1 *)(iVar2 + 0x9f) = 0;
  *(undefined1 *)(iVar2 + 0xa0) = 1;
  uVar13 = 0x39;
  piVar15 = (int *)(iVar2 + -0x5c);
  iVar3 = (*(int *)(iVar2 + -0x54) - *(int *)(iVar2 + -0x58)) / 0xc;
  if (iVar3 < 0x3a) {
    if ((*(uint *)(iVar2 + -0x50) & 0x3fffffff) < 0x39) {
      if (((*piVar15 == 0) || ((*(uint *)(iVar2 + -0x50) & 0xc0000000) != 0x40000000)) ||
         (puVar1 = (undefined4 *)(**(code **)(*(int *)*piVar15 + 8))((int *)*piVar15,0x2ac),
         puVar1 == (undefined4 *)0x0)) {
        uVar13 = *(uint *)(iVar2 + -0x50) & 0x3fffffff;
      }
      else {
        iVar3 = 0;
        puVar6 = *(undefined4 **)(iVar2 + -0x58);
        puVar11 = *(undefined4 **)(iVar2 + -0x54);
        puVar9 = puVar1;
        if (puVar6 != puVar11) {
          do {
            if (puVar9 != (undefined4 *)0x0) {
              uVar4 = puVar6[1];
              uVar16 = puVar6[2];
              *puVar9 = *puVar6;
              puVar9[1] = uVar4;
              puVar9[2] = uVar16;
            }
            puVar6 = puVar6 + 3;
            puVar9 = puVar9 + 3;
          } while (puVar6 != puVar11);
          iVar3 = (*(int *)(iVar2 + -0x54) - *(int *)(iVar2 + -0x58)) / 0xc;
        }
        uVar8 = *(uint *)(iVar2 + -0x58);
        if (uVar8 != 0) {
          uVar12 = *(uint *)(iVar2 + -0x54);
          uVar7 = uVar8;
          if (uVar8 < uVar12) {
            iVar5 = 1;
            if (1 < (int)(uVar12 - uVar8) / 0xc + 1) {
              do {
                iVar5 = iVar5 + 1;
              } while (iVar5 < (int)(uVar12 - uVar8) / 0xc + 1);
            }
          }
          else {
            for (; uVar7 != uVar12; uVar7 = uVar7 + 0xc) {
            }
          }
          *(uint *)(iVar2 + -0x54) = uVar8;
          (**(code **)(*(int *)*piVar15 + 0xc))((int *)*piVar15,*(undefined4 *)(iVar2 + -0x58));
        }
        *(undefined4 **)(iVar2 + -0x58) = puVar1;
        *(undefined4 **)(iVar2 + -0x54) = puVar1 + iVar3 * 3;
        *(uint *)(iVar2 + -0x50) = *(uint *)(iVar2 + -0x50) & 0xc0000000 | 0x39;
      }
    }
    for (iVar3 = (*(int *)(iVar2 + -0x54) - *(int *)(iVar2 + -0x58)) / 0xc; iVar3 < (int)uVar13;
        iVar3 = iVar3 + 1) {
      puVar1 = (undefined4 *)(*(int *)(iVar2 + -0x58) + iVar3 * 0xc);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 0xffffffff;
        puVar1[1] = 0xffffffff;
        puVar1[2] = 0xffffffff;
      }
    }
    iVar3 = *(int *)(iVar2 + -0x58) + uVar13 * 0xc;
  }
  else {
    do {
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < iVar3);
    iVar3 = *(int *)(iVar2 + -0x58) + 0x2ac;
  }
  *(int *)(iVar2 + -0x54) = iVar3;
  local_30 = 3;
  puVar14 = (uint *)(iVar2 + 0x14);
  if ((uint)(*(int *)(iVar2 + 0x1c) - *(int *)(iVar2 + 0x14) >> 2) < 3) {
    uVar13 = *(int *)(iVar2 + 0x18) - *(int *)(iVar2 + 0x14) >> 2;
    local_2c[0] = uVar13 + (uVar13 >> 1) + (uVar13 >> 3);
    if (local_2c[0] < uVar13 + 0x20) {
      local_2c[0] = uVar13 + 0x20;
    }
    puVar10 = local_2c;
    if (local_2c[0] < 4) {
      puVar10 = &local_30;
    }
    uVar13 = *puVar10;
    puVar6 = (undefined4 *)fn_00100fc6(uVar13 << 2,0);
    puVar11 = *(undefined4 **)(iVar2 + 0x18);
    puVar9 = puVar6;
    for (puVar1 = (undefined4 *)*puVar14; puVar1 != puVar11; puVar1 = puVar1 + 1) {
      if (puVar9 != (undefined4 *)0x0) {
        *puVar9 = *puVar1;
      }
      puVar9 = puVar9 + 1;
    }
    uVar7 = *puVar14;
    uVar8 = uVar7;
    if (*(uint *)(iVar2 + 0x18) < uVar7) {
      do {
        uVar8 = uVar8 + 4;
      } while (uVar8 != *(uint *)(iVar2 + 0x18));
    }
    fn_001008c4(uVar7,(int)(*(int *)(iVar2 + 0x1c) - uVar7) >> 2,0);
    uVar8 = *puVar14;
    *puVar14 = (uint)puVar6;
    *(uint *)(iVar2 + 0x18) = (*(int *)(iVar2 + 0x18) - uVar8 & 0xfffffffc) + (int)puVar6;
    *(undefined4 **)(iVar2 + 0x1c) = puVar6 + uVar13;
  }
  *(undefined4 *)(iVar2 + 0x2c) = 0;
  *(undefined4 *)(iVar2 + 0x30) = 0;
  *(undefined4 *)(iVar2 + 0x34) = 0;
  *(undefined4 *)(iVar2 + 0x38) = 0;
  *(undefined4 *)(iVar2 + 0x3c) = 0;
  *(undefined4 *)(iVar2 + 0x40) = 0;
  *(undefined4 *)(iVar2 + 0x44) = 0;
  fn_00121838(DAT_00897800,DAT_0089879c,1);
  return iVar2 + -0x1a4;
}



void fn_0022682c(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  
  if ((*(char *)(param_1 + 0x194) != -1) && (8 < param_2)) {
    param_2 = 0;
  }
  fn_001dbe2c(param_1,param_2);
  if (*(char *)(param_1 + 0x194) != -1) {
    iVar1 = fn_0025988c(*(undefined4 *)(param_1 + 400));
    bVar4 = *(int *)(param_1 + 400) != 0;
    iVar2 = iVar1;
    if (bVar4) {
      iVar2 = (int)*(char *)(param_1 + 0x194);
    }
    if (bVar4 && iVar2 != -1) {
      iVar2 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc));
      iVar2 = (int)*(short *)(iVar2 + 0x1c);
    }
    else {
      iVar2 = 0;
    }
    iVar2 = fn_0016dc08(iVar2,iVar1);
    iVar1 = fn_0025988c(*(undefined4 *)(param_1 + 400));
    if ((iVar1 < 3) && (iVar2 == 1)) {
      iVar2 = 0;
    }
    uVar3 = fn_002266b4(param_1,1,*(undefined4 *)(param_1 + 0xe0));
    uVar3 = fn_0017b118(iVar2,uVar3);
    if ((param_4 != 0) || (iVar2 = fn_00191284(*(undefined4 *)(param_1 + 0x184),uVar3), iVar2 != 0)
       ) {
      fn_0018d060(*(undefined4 *)(param_1 + 0x184),uVar3,param_3);
      return;
    }
  }
  return;
}



void fn_00226784(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 local_18;
  
  local_18 = param_4;
  iVar1 = fn_006f7358(DAT_008977e0);
  if (iVar1 == 0) {
    uVar2 = fn_002593fc(param_1 + 0x1b8);
    uVar2 = fn_0023ddec(uVar2,param_2);
    local_18 = uVar2;
    if (*(char *)(param_1 + 0x194) == -1) {
      iVar1 = fn_006b51cc(*(undefined4 *)(DAT_00897804 + 0x1c));
      uVar3 = (uint)(iVar1 != 1);
    }
    else {
      uVar3 = fn_0025988c(*(undefined4 *)(param_1 + 400));
    }
    fn_002cd59c(uVar3);
    fn_0023dd30(*(undefined4 *)(DAT_008977e0 + 0x2c),uVar2);
    fn_0079d450(param_1 + 0x1b8,&local_18);
  }
  return;
}



void fn_0022675c(int param_1,int param_2)

{
  if (*(char *)(param_1 + 0x58) != param_2) {
    fn_00221500(param_1);
    *(char *)(param_1 + 0x58) = (char)param_2;
  }
  return;
}


