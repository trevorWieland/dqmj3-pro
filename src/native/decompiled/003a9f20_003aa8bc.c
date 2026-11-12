#include "003a9f20_003aa8bc.h"



void fn_003aa520(int param_1)

{
  short sVar1;
  int iVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
  
  switch(*(undefined1 *)(param_1 + 0x6c)) {
  case 1:
    *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x30) = 0;
    iVar10 = *(int *)(param_1 + 0x70) + 1;
    *(int *)(param_1 + 0x70) = iVar10;
    if (0x3c < iVar10) {
      *(undefined4 *)(param_1 + 0x70) = 0;
      *(undefined1 *)(param_1 + 0x6c) = 2;
      if (*(char *)(param_1 + 0x6d) == '\0') {
        fn_0036c340(*(undefined4 *)(param_1 + 0x5c));
        fn_00579c3c(*(undefined4 *)(param_1 + 0x78),500);
        uVar6 = fn_00579cb4(*(undefined4 *)(param_1 + 0x78));
        fn_00158f6c(*(undefined4 *)(*(int *)(param_1 + 0x78) + 8),uVar6);
        fn_0026d2e8(*(undefined4 *)(param_1 + 100),1);
        uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x78) + 8);
        uVar7 = fn_006ba838(*(undefined4 *)(param_1 + 0x80));
        uVar6 = fn_0026e294(*(undefined4 *)(param_1 + 100),uVar7,uVar6);
        *(undefined4 *)(param_1 + 0x68) = uVar6;
        *(undefined1 *)(param_1 + 0x6c) = 3;
        return;
      }
      uVar6 = fn_0022f584(*(undefined4 *)(param_1 + 0x74),0);
      fn_0068974c(param_1,uVar6,0,1);
      iVar10 = *(int *)(param_1 + 0x5c);
      *(undefined4 *)(iVar10 + 0x38) = 0x100094d;
      *(undefined1 *)(iVar10 + 0x5f) = 1;
      *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x3c) = 0;
      *(undefined1 *)(param_1 + 0x6c) = 2;
    }
    break;
  case 2:
                    /* WARNING: Subroutine does not return */
    fn_0011dda8();
  case 3:
    uVar4 = fn_006b7584(*(undefined4 *)(param_1 + 0x68));
    if ((1 < uVar4) && (uVar4 == 2)) {
      iVar10 = fn_006b7578(*(undefined4 *)(param_1 + 0x68));
      uVar7 = DAT_00898990;
      uVar6 = DAT_00898988;
      if (iVar10 == -8) {
        *(undefined1 *)(param_1 + 0x6d) = 1;
        uVar6 = fn_0022f584(uVar6,0);
        fn_0068974c(param_1,uVar6,0,1);
        iVar10 = *(int *)(param_1 + 0x5c);
        *(undefined4 *)(iVar10 + 0x38) = 0x100094d;
        *(undefined1 *)(iVar10 + 0x5f) = 1;
        *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x3c) = 0;
        *(undefined1 *)(param_1 + 0x6c) = 2;
      }
      else if (iVar10 == 0) {
        *(undefined1 *)(param_1 + 0x6c) = 4;
      }
      else {
        *(undefined1 *)(param_1 + 0x6d) = 2;
        uVar6 = fn_0022f584(uVar7,0);
        fn_0068974c(param_1,uVar6,0,1);
        iVar10 = *(int *)(param_1 + 0x5c);
        *(undefined4 *)(iVar10 + 0x38) = 0x100094d;
        *(undefined1 *)(iVar10 + 0x5f) = 1;
        *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x3c) = 0;
        *(undefined1 *)(param_1 + 0x6c) = 2;
      }
      fn_0026d6bc(*(undefined4 *)(param_1 + 100));
      return;
    }
    break;
  case 4:
    iVar10 = *(int *)(*(int *)(param_1 + 0x78) + 8);
    iVar14 = 0;
    iVar13 = 0;
    if (0 < *(int *)(*(int *)(param_1 + 0x78) + 0xc)) {
      do {
        iVar11 = 0;
        iVar12 = iVar10 + iVar13 * 0x3c;
        uVar4 = (uint)*(ushort *)(iVar12 + 0x18);
        if (uVar4 != 0) {
          iVar14 = iVar14 + 1;
        }
        do {
          iVar15 = iVar12 + iVar11 * 2;
          sVar1 = *(short *)(iVar15 + 0x1c);
          bVar16 = sVar1 != 0;
          iVar2 = 0;
          if (bVar16) {
            uVar4 = iVar11 - 1;
            iVar2 = iVar11;
          }
          uVar5 = uVar4;
          if ((bVar16 && uVar4 != 0xffffffff) && iVar2 < 0 == (bVar16 && SCARRY4(uVar4,1))) {
            do {
              if (*(short *)(iVar12 + uVar5 * 2 + 0x1c) == sVar1) {
                *(undefined2 *)(iVar15 + 0x1c) = 0;
                uVar4 = uVar5;
                break;
              }
              uVar4 = uVar5 - 1;
              bVar16 = uVar5 != 0;
              uVar5 = uVar4;
            } while (bVar16 && -2 < (int)uVar4);
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < 6);
        iVar13 = iVar13 + 1;
      } while (iVar13 < *(int *)(*(int *)(param_1 + 0x78) + 0xc));
    }
    *(int *)(*(int *)(param_1 + 0x78) + 0x10) = iVar14;
    uVar6 = DAT_00898998;
    if (iVar14 < 1) {
      *(undefined1 *)(param_1 + 0x6d) = 3;
      uVar6 = fn_0022f584(uVar6,0);
      fn_0068974c(param_1,uVar6,0,1);
      iVar10 = *(int *)(param_1 + 0x5c);
      *(undefined4 *)(iVar10 + 0x38) = 0x100094d;
      *(undefined1 *)(iVar10 + 0x5f) = 1;
      *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x3c) = 0;
      uVar3 = 2;
    }
    else {
      fn_001f7cac(param_1,1);
      uVar3 = 7;
    }
    *(undefined1 *)(param_1 + 0x6c) = uVar3;
    return;
  case 5:
    iVar10 = fn_006f6a08(param_1,1);
    if (iVar10 != 0) {
      uVar3 = 6;
LAB_003aa7e8:
      *(undefined1 *)(param_1 + 0x6c) = uVar3;
      return;
    }
    break;
  case 6:
    puVar8 = (undefined4 *)fn_001f74ec(param_1,0xde);
    if (puVar8 != (undefined4 *)0x0) {
      puVar9 = (undefined4 *)(**(code **)*puVar8)(puVar8);
      do {
        if (puVar9 == &DAT_00898a34) goto LAB_003aa834;
        puVar9 = (undefined4 *)*puVar9;
      } while (puVar9 != (undefined4 *)0x0);
    }
    puVar8 = (undefined4 *)0x0;
LAB_003aa834:
    *(undefined1 *)(puVar8 + 2) = 1;
    fn_006899f4(param_1,0xde,1,1);
    fn_00689930(param_1,0xd8,0);
    *(undefined1 *)(param_1 + 0x6c) = 0;
    return;
  case 7:
    iVar10 = fn_006f6a08(param_1,1);
    if (iVar10 != 0) {
      uVar3 = 8;
      goto LAB_003aa7e8;
    }
    break;
  case 8:
    fn_006899f4(param_1,0xe2,1);
    return;
  }
  return;
}



void fn_003aa4ec(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x84,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003aa8bc(iVar1,param_1);
  return;
}



undefined4 * fn_003aa8bc(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  *puVar1 = &DAT_0082decc;
  iVar2 = fn_00145b00(0x10,&DAT_00812c8c);
  puVar6 = (undefined4 *)0x0;
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_0026e378(iVar2,0x1acb,0,(char *)&DAT_007d064c,0,1);
  }
  puVar1[0x19] = uVar3;
  puVar1[0x1a] = 0;
  *(undefined1 *)(puVar1 + 0x1b) = 0;
  *(undefined1 *)((int)puVar1 + 0x6d) = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar4 = (undefined4 *)fn_001f74ec(puVar1,0xe0);
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = (undefined4 *)(**(code **)*puVar4)(puVar4);
    do {
      if (puVar5 == &DAT_008989ac) goto LAB_003aa968;
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != (undefined4 *)0x0);
  }
  puVar4 = (undefined4 *)0x0;
LAB_003aa968:
  puVar1[0x1e] = puVar4;
  puVar4 = (undefined4 *)fn_001f74ec(puVar1,0xd6);
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = (undefined4 *)(**(code **)*puVar4)(puVar4);
    do {
      if (puVar5 == &DAT_00898c58) goto LAB_003aa9ac;
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != (undefined4 *)0x0);
  }
  puVar4 = (undefined4 *)0x0;
LAB_003aa9ac:
  puVar1[0x1f] = puVar4;
  if (param_2 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*param_2)(param_2);
    do {
      if (puVar4 == &DAT_00898c24) {
        puVar6 = param_2;
        break;
      }
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar1[0x20] = puVar6;
  return puVar1;
}



void fn_003aa060(int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = fn_00145b00(0x34,&DAT_00812c8c);
  if (iVar3 != 0) {
    uVar1 = *(undefined1 *)(param_1 + 4);
    uVar2 = *(undefined1 *)(param_1 + 5);
    puVar4 = (undefined4 *)fn_001c2484();
    *puVar4 = &DAT_00820178;
    *(undefined1 *)(puVar4 + 2) = uVar1;
    *(undefined1 *)((int)puVar4 + 9) = uVar2;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0x3f800000;
    puVar4[6] = 0x3f800000;
    puVar4[7] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    *(undefined1 *)(puVar4 + 0xc) = 0;
  }
  return;
}



void fn_003a9f20(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_0082dda8;
  fn_003a963c(param_1);
  uVar1 = param_1[0x40];
  uVar2 = uVar1;
  if ((uint)param_1[0x41] < uVar1) {
    do {
      uVar2 = uVar2 + 1;
    } while (uVar2 != param_1[0x41]);
  }
  fn_001008c4(uVar1,param_1[0x42] - uVar1,0);
  uVar1 = param_1[0x35];
  uVar2 = uVar1;
  if ((uint)param_1[0x36] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[0x36]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x37] - uVar1) >> 2,0);
  if ((int *)param_1[0x34] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x34] + 4))();
  }
  if ((int *)param_1[0x33] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x33] + 4))();
  }
  if ((int *)param_1[0x32] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x32] + 4))();
  }
  uVar1 = param_1[0x26];
  uVar2 = uVar1;
  if ((uint)param_1[0x27] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[0x27]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x28] - uVar1) >> 2,0);
  if ((int *)param_1[0x1e] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x1e] + 4))();
  }
  if ((int *)param_1[0x1d] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x1d] + 4))();
  }
  fn_0068ad5c(param_1);
  return;
}


