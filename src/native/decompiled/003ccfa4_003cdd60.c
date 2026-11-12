#include "003ccfa4_003cdd60.h"



void fn_003cda0c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  short *psVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  
  switch(*(undefined1 *)(param_1 + 0x6c)) {
  case 1:
    *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x30) = 0;
    iVar7 = *(int *)(param_1 + 0x70) + 1;
    *(int *)(param_1 + 0x70) = iVar7;
    if (0x3c < iVar7) {
      *(undefined4 *)(param_1 + 0x70) = 0;
      *(undefined1 *)(param_1 + 0x6c) = 2;
      if (*(char *)(param_1 + 0x6d) == '\0') {
        fn_0036c340(*(undefined4 *)(param_1 + 0x5c));
        fn_00587a78(*(undefined4 *)(param_1 + 0x78),500);
        uVar4 = fn_00587af0(*(undefined4 *)(param_1 + 0x78));
        fn_00158f6c(*(undefined4 *)(*(int *)(param_1 + 0x78) + 8),uVar4);
        fn_0026d2e8(*(undefined4 *)(param_1 + 100),1);
        uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x78) + 8);
        uVar5 = fn_006ba838(*(undefined4 *)(param_1 + 0x80));
        uVar4 = fn_0026e294(*(undefined4 *)(param_1 + 100),uVar5,uVar4);
        *(undefined4 *)(param_1 + 0x68) = uVar4;
        *(undefined1 *)(param_1 + 0x6c) = 3;
        return;
      }
      uVar4 = fn_0022f584(*(undefined4 *)(param_1 + 0x74),0);
      fn_0068974c(param_1,uVar4,0,1);
      iVar7 = *(int *)(param_1 + 0x5c);
      *(undefined4 *)(iVar7 + 0x38) = 0x100094d;
      *(undefined1 *)(iVar7 + 0x5f) = 1;
      *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x3c) = 0;
      *(undefined1 *)(param_1 + 0x6c) = 2;
    }
    break;
  case 2:
                    /* WARNING: Subroutine does not return */
    fn_0011dda8();
  case 3:
    uVar6 = fn_006b7584(*(undefined4 *)(param_1 + 0x68));
    if ((1 < uVar6) && (uVar6 == 2)) {
      iVar7 = fn_006b7578(*(undefined4 *)(param_1 + 0x68));
      uVar5 = DAT_008989d4;
      uVar4 = DAT_008989cc;
      if (iVar7 == -8) {
        *(undefined1 *)(param_1 + 0x6d) = 1;
        uVar4 = fn_0022f584(uVar4,0);
        fn_0068974c(param_1,uVar4,0,1);
        iVar7 = *(int *)(param_1 + 0x5c);
        *(undefined4 *)(iVar7 + 0x38) = 0x100094d;
        *(undefined1 *)(iVar7 + 0x5f) = 1;
        *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x3c) = 0;
        *(undefined1 *)(param_1 + 0x6c) = 2;
      }
      else if (iVar7 == 0) {
        *(undefined1 *)(param_1 + 0x6c) = 4;
      }
      else {
        *(undefined1 *)(param_1 + 0x6d) = 2;
        uVar4 = fn_0022f584(uVar5,0);
        fn_0068974c(param_1,uVar4,0,1);
        iVar7 = *(int *)(param_1 + 0x5c);
        *(undefined4 *)(iVar7 + 0x38) = 0x100094d;
        *(undefined1 *)(iVar7 + 0x5f) = 1;
        *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x3c) = 0;
        *(undefined1 *)(param_1 + 0x6c) = 2;
      }
      fn_0026d6bc(*(undefined4 *)(param_1 + 100));
      return;
    }
    break;
  case 4:
    iVar7 = *(int *)(*(int *)(param_1 + 0x78) + 8);
    iVar13 = 0;
    iVar12 = 0;
    if (0 < *(int *)(*(int *)(param_1 + 0x78) + 0xc)) {
      do {
        psVar11 = (short *)(iVar7 + iVar12 * 0x28);
        iVar1 = fn_00334980((int)*psVar11);
        if (iVar1 != 0) {
          iVar13 = iVar13 + 1;
        }
        iVar10 = 0;
        *psVar11 = (short)iVar1;
        do {
          if (psVar11[iVar10 + 0xd] != 0) {
            iVar2 = fn_0035136c();
            psVar11[iVar10 + 0xd] = (short)iVar2;
            iVar1 = iVar10 + -1;
            if (iVar10 != 0 && -2 < iVar10 + -1) {
              do {
                if (psVar11[iVar1 + 0xd] == iVar2) {
                  psVar11[iVar10 + 0xd] = 0;
                  break;
                }
                iVar3 = iVar1 + -1;
                bVar14 = iVar1 != 0;
                iVar1 = iVar3;
              } while (bVar14 && -2 < iVar3);
            }
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < 6);
        iVar12 = iVar12 + 1;
      } while (iVar12 < *(int *)(*(int *)(param_1 + 0x78) + 0xc));
    }
    *(int *)(*(int *)(param_1 + 0x78) + 0x10) = iVar13;
    uVar4 = DAT_008989dc;
    if (iVar13 < 1) {
      *(undefined1 *)(param_1 + 0x6d) = 3;
      uVar4 = fn_0022f584(uVar4,0);
      fn_0068974c(param_1,uVar4,0,1);
      iVar7 = *(int *)(param_1 + 0x5c);
      *(undefined4 *)(iVar7 + 0x38) = 0x100094d;
      *(undefined1 *)(iVar7 + 0x5f) = 1;
      *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x3c) = 0;
      *(undefined1 *)(param_1 + 0x6c) = 2;
      return;
    }
    fn_006899f4(param_1,0xe1,0);
    return;
  case 5:
    iVar7 = fn_006f6a08(param_1,1);
    if (iVar7 != 0) {
      *(undefined1 *)(param_1 + 0x6c) = 6;
    }
    return;
  case 6:
    puVar8 = (undefined4 *)fn_001f74ec(param_1,0xde);
    if (puVar8 != (undefined4 *)0x0) {
      puVar9 = (undefined4 *)(**(code **)*puVar8)(puVar8);
      do {
        if (puVar9 == &DAT_00898a34) goto LAB_003cdd14;
        puVar9 = (undefined4 *)*puVar9;
      } while (puVar9 != (undefined4 *)0x0);
    }
    puVar8 = (undefined4 *)0x0;
LAB_003cdd14:
    *(undefined1 *)(puVar8 + 2) = 1;
    fn_006899f4(param_1,0xde,1,1);
    fn_00689930(param_1,0xd8,0);
    *(undefined1 *)(param_1 + 0x6c) = 0;
    return;
  }
  return;
}



void fn_003cd9d8(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x84,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003cdd60(iVar1,param_1);
  return;
}



undefined4 * fn_003cdd60(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  *puVar1 = &DAT_00830f74;
  iVar2 = fn_00145b00(0x10,&DAT_00812c8c);
  puVar6 = (undefined4 *)0x0;
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_0026e378(iVar2,0x1acb,0,(char *)&DAT_007d0655,0,1);
  }
  puVar1[0x19] = uVar3;
  puVar1[0x1a] = 0;
  *(undefined1 *)(puVar1 + 0x1b) = 0;
  *(undefined1 *)((int)puVar1 + 0x6d) = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar4 = (undefined4 *)fn_001f74ec(puVar1,0xdf);
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = (undefined4 *)(**(code **)*puVar4)(puVar4);
    do {
      if (puVar5 == &DAT_008989f0) goto LAB_003cde0c;
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != (undefined4 *)0x0);
  }
  puVar4 = (undefined4 *)0x0;
LAB_003cde0c:
  puVar1[0x1e] = puVar4;
  puVar4 = (undefined4 *)fn_001f74ec(puVar1,0xd6);
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = (undefined4 *)(**(code **)*puVar4)(puVar4);
    do {
      if (puVar5 == &DAT_00898c58) goto LAB_003cde50;
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != (undefined4 *)0x0);
  }
  puVar4 = (undefined4 *)0x0;
LAB_003cde50:
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



undefined4 *
fn_003cd3a8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined8 in_d0;
  
  puVar1 = (undefined4 *)fn_0016a50c();
  puVar1[1] = param_2;
  puVar1[2] = (int)in_d0;
  puVar1[3] = (int)((ulonglong)in_d0 >> 0x20);
  *(undefined1 *)(puVar1 + 4) = 0;
  *puVar1 = &DAT_00830f44;
  puVar1[5] = param_3;
  puVar1[6] = param_4;
  *(undefined1 *)(puVar1 + 7) = 0;
  return puVar1;
}



void fn_003cd2cc(int *param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  if ((char)param_1[4] == '\0') {
    iVar2 = (**(code **)(*param_1 + 0xc))(param_1);
    if ((iVar2 == 0) &&
       (iVar2 = fn_006ac638(*(undefined4 *)(DAT_008977e0 + 0x30),param_1[1]), iVar2 != 0)) {
      uVar1 = fn_001c7160();
      *(undefined1 *)(param_1 + 4) = uVar1;
    }
    if ((char)param_1[7] == '\0') {
      if ((char)param_1[4] == '\0') {
        fn_001f5bac(*(undefined4 *)(DAT_008977e0 + 0x30),param_1[1],param_1[5],4);
        *(undefined1 *)(param_1 + 7) = 1;
        return;
      }
      *(undefined1 *)(param_1 + 7) = 2;
    }
    else if (((char)param_1[7] == '\x01') && ((char)param_1[4] != '\0')) {
      fn_001f5bac(*(undefined4 *)(DAT_008977e0 + 0x30),param_1[1],param_1[6],4);
      *(undefined1 *)(param_1 + 7) = 2;
    }
  }
  return;
}



void fn_003cd090(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar2 = fn_00182994(DAT_008977e4);
  uVar2 = fn_0016561c(uVar2,(int)*(char *)(param_1 + 4));
  iVar3 = fn_00145b00(0x5c,&DAT_00812c8c);
  puVar4 = (undefined4 *)0x0;
  if (iVar3 != 0) {
    uVar1 = *(undefined1 *)(param_1 + 0xc);
    uVar8 = *(undefined4 *)(param_1 + 4);
    uVar6 = *(undefined4 *)(param_1 + 0x10);
    uVar7 = *(undefined4 *)(param_1 + 0x14);
    uVar5 = *(undefined4 *)(param_1 + 8);
    puVar4 = (undefined4 *)fn_0016a50c();
    *puVar4 = &DAT_00826510;
    puVar4[1] = uVar8;
    puVar4[2] = uVar2;
    *(undefined1 *)(puVar4 + 3) = uVar1;
    puVar4[4] = uVar6;
    puVar4[5] = uVar7;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[8] = 0;
    *(undefined1 *)(puVar4 + 9) = 0;
    *(undefined1 *)((int)puVar4 + 0x25) = 6;
    puVar4[10] = 0;
    *(undefined1 *)(puVar4 + 0xb) = 1;
    puVar4[0xc] = 0;
    *(undefined1 *)(puVar4 + 0x15) = 0;
    *(undefined1 *)((int)puVar4 + 0x55) = 0;
    puVar4[0x16] = uVar5;
    puVar4[0x11] = 0;
    puVar4[0xd] = 0xffffffff;
    puVar4[0x12] = 0;
    puVar4[0xe] = 0xffffffff;
    puVar4[0x13] = 0;
    puVar4[0xf] = 0xffffffff;
    puVar4[0x14] = 0;
    puVar4[0x10] = 0xffffffff;
  }
  uVar2 = fn_00182994(DAT_008977e4);
  uVar2 = fn_0015a130(uVar2,puVar4);
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  *(undefined1 *)(param_1 + 0x2c) = 3;
  return;
}



undefined4 * fn_003ccfa4(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  *puVar1 = &DAT_00830e04;
  puVar1[0x1a] = 0;
  puVar1[0x19] = &DAT_00859420;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = *(undefined4 *)(param_2 + 8);
  puVar1[0x20] = 0xffffffff;
  puVar1[0x21] = 0xffffffff;
  puVar1[0x23] = 0;
  puVar1[0x22] = 0xffffffff;
  return puVar1;
}


