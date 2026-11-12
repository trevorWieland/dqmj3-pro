#include "001f1d38_001f2340.h"



int fn_001f2340(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = -1;
  iVar1 = fn_006abd58(param_1,param_4);
  if (iVar1 != 0) {
    iVar3 = fn_001eb5c0(param_1,param_2,param_3,iVar1 + 0x20);
    if (iVar3 == -1) {
      return -1;
    }
    piVar2 = *(int **)(param_1 + iVar3 * 0x2c + 0x8c);
    (**(code **)(*piVar2 + 0x14))(piVar2,iVar1 + 0x2c);
  }
  return iVar3;
}



undefined4 fn_001f22c8(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((((int)param_2 < 0) || (0x4f < param_2)) || (*(int *)(param_1 + param_2 * 0x2c + 0x8c) == 0))
     || ((iVar1 = fn_00145b00(0x18,&DAT_00812c8c), iVar1 == 0 ||
         (iVar1 = fn_0038bdf0(iVar1,param_2,param_3), iVar1 == 0)))) {
    return 0xffffffff;
  }
  uVar2 = fn_0015a130(param_1);
  return uVar2;
}



undefined4 fn_001f2280(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00145b00(0xc,&DAT_00812c8c);
  if ((iVar1 == 0) || (iVar1 = fn_0038bd5c(iVar1,param_2), iVar1 == 0)) {
    return 0xffffffff;
  }
  uVar2 = fn_0015a130(param_1);
  return uVar2;
}



void fn_001f2248(int param_1,uint param_2)

{
  int iVar1;
  undefined4 in_s0;
  
  if ((int)param_2 < 0) {
    return;
  }
  if (0x4f < param_2) {
    return;
  }
  iVar1 = *(int *)(param_1 + param_2 * 0x2c + 0x8c);
  if (iVar1 != 0) {
    fn_0017fe34();
    *(undefined4 *)(iVar1 + 0x1e4) = in_s0;
  }
  return;
}



void fn_001f220c(int param_1,uint param_2,int param_3)

{
  int iVar1;
  
  if (((-1 < (int)param_2) && (param_2 < 0x50)) &&
     (iVar1 = *(int *)(param_1 + param_2 * 0x2c + 0x8c), iVar1 != 0)) {
    *(uint *)(iVar1 + 0x138) = *(uint *)(iVar1 + 0x138) & 0xfffffffd | param_3 << 1;
  }
  return;
}



void fn_001f21d4(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  float in_s0;
  
  uVar1 = fn_006f7a5c(DAT_008977e0);
  fn_001d7128(uVar1,param_2,(int)in_s0);
  return;
}



void fn_001f2190(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = DAT_008977e0;
  if (**(int **)(DAT_008977e0 + 0x40) == 0) {
    return;
  }
  *(bool *)((*(int **)(DAT_008977e0 + 0x40))[3] + 0x24) = param_2 != 0;
  fn_001c7db8(*(undefined4 *)(*(int *)(iVar1 + 0x40) + 0x10),param_2 != 0);
  return;
}



void fn_001f2174(void)

{
  int iVar1;
  
  iVar1 = fn_006f756c(DAT_008977e0);
                    /* WARNING: Could not recover jumptable at 0x006bad18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(iVar1 + 0x58) + 0x1c))();
  return;
}



void fn_001f2158(void)

{
  int iVar1;
  
  iVar1 = fn_006f756c(DAT_008977e0);
                    /* WARNING: Could not recover jumptable at 0x006bad08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(iVar1 + 0x58) + 0x14))();
  return;
}



undefined4 fn_001f2144(void)

{
  return *(undefined4 *)(DAT_00891220 + 0xb4);
}



void fn_001f1e6c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  
  uVar1 = fn_006f7a70(DAT_008977e0);
  uVar13 = 1;
  do {
    iVar14 = param_1 + uVar13 * 0x2c;
    iVar2 = *(int *)(iVar14 + 0x8c);
    if (iVar2 != 0) {
      if (*(int *)(iVar14 + 0x94) != -1) {
        if (((int)uVar13 < 0) || (0x4f < uVar13)) {
          iVar2 = 0;
        }
        uVar3 = *(undefined4 *)(iVar2 + 0xe4);
        uVar12 = 0;
        do {
          iVar2 = iVar14 + 0x8c + uVar12 * 4;
          uVar4 = *(uint *)(iVar2 + 0x18);
          if (uVar4 != 0xffffffff) {
            if (((int)uVar4 < 0) || (0x4f < uVar4)) {
              iVar5 = 0;
            }
            else {
              iVar5 = *(int *)(param_1 + uVar4 * 0x2c + 0x8c);
            }
            fn_0017fde4(*(undefined4 *)(iVar5 + 0xe4));
            uVar6 = fn_0019bc38();
            uVar7 = fn_0017fde4(uVar3);
            puVar8 = (undefined4 *)fn_0019695c(uVar7,uVar6);
            if (puVar8 != (undefined4 *)0x0) {
              *puVar8 = &DAT_00858c10;
              uVar9 = puVar8[2];
              uVar4 = uVar9;
              if ((uint)puVar8[3] < uVar9) {
                do {
                  uVar4 = uVar4 + 8;
                } while (uVar4 != puVar8[3]);
              }
              fn_001008c4(uVar9,(int)(puVar8[4] - uVar9) >> 3,0);
              fn_002feef8(puVar8);
              *(undefined4 *)(iVar2 + 0x18) = 0xffffffff;
            }
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < 5);
      }
      if (*(char *)(iVar14 + 0x9c) == '\x01') {
        fn_002ff148(uVar1,*(undefined4 *)(iVar14 + 0x98));
      }
      else {
        if (*(char *)(iVar14 + 0x9c) != '\x02') {
          return;
        }
        fn_0030019c(uVar1,*(undefined4 *)(iVar14 + 0x98));
      }
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0x50);
  iVar2 = 1;
LAB_001f1fe4:
  iVar14 = param_1 + iVar2 * 0x2c;
  if (*(int *)(iVar14 + 0x8c) != 0) {
    iVar5 = *(int *)(iVar14 + 0x94);
    if (*(char *)(iVar14 + 0x9c) == '\x01') {
      if (iVar5 == -1) goto LAB_001f20fc;
      iVar10 = 0;
      do {
        iVar11 = param_1 + iVar10 * 0xc;
        if (*(int *)(iVar11 + 0xe8c) == iVar5) {
          iVar10 = *(int *)(param_1 + iVar10 * 0xc + 0xe90);
LAB_001f207c:
          if (iVar10 != -1) {
            uVar1 = fn_006f7a9c(DAT_008977e0);
            fn_00279ae4(uVar1,iVar10);
            iVar10 = 0;
            goto LAB_001f209c;
          }
          break;
        }
        if (*(int *)(iVar11 + 0xe98) == iVar5) {
          iVar10 = *(int *)(param_1 + iVar10 * 0xc + 0xe9c);
          goto LAB_001f207c;
        }
        iVar10 = iVar10 + 2;
      } while (iVar10 < 0x14);
    }
    else if (*(char *)(iVar14 + 0x9c) != '\x02') {
      return;
    }
    goto LAB_001f20e0;
  }
  goto LAB_001f20fc;
  while (iVar10 = iVar10 + 1, iVar10 < 0x14) {
LAB_001f209c:
    if (*(int *)(param_1 + iVar10 * 0xc + 0xe8c) == iVar5) {
      iVar10 = param_1 + iVar10 * 0xc;
      *(undefined4 *)(iVar10 + 0xe8c) = 0xffffffff;
      *(undefined4 *)(iVar10 + 0xe90) = 0xffffffff;
      break;
    }
  }
LAB_001f20e0:
  if (iVar5 != -1) {
    uVar1 = fn_006f7a9c(DAT_008977e0);
    fn_00279ae4(uVar1,iVar5);
  }
LAB_001f20fc:
  *(undefined4 *)(iVar14 + 0x8c) = 0;
  *(undefined4 *)(iVar14 + 0x94) = 0xffffffff;
  *(undefined4 *)(iVar14 + 0x90) = 0;
  *(undefined4 *)(iVar14 + 0x98) = 0xffffffff;
  *(undefined1 *)(iVar14 + 0x9c) = 0xff;
  *(undefined4 *)(iVar14 + 0xa0) = 0xffffffff;
  *(undefined4 *)(iVar14 + 0xa4) = 0xffffffff;
  *(undefined4 *)(iVar14 + 0xa8) = 0xffffffff;
  *(undefined4 *)(iVar14 + 0xac) = 0xffffffff;
  iVar2 = iVar2 + 1;
  *(undefined4 *)(iVar14 + 0xb0) = 0xffffffff;
  *(undefined4 *)(iVar14 + 0xb4) = 0xffffffff;
  if (0x4f < iVar2) {
    return;
  }
  goto LAB_001f1fe4;
}



void fn_001f1e48(int param_1)

{
  fn_00697af8(DAT_008977e0);
  *(undefined1 *)(param_1 + 0xf94) = 0;
  return;
}



undefined4 fn_001f1dd0(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((((int)param_2 < 0) || (0x4f < param_2)) || (*(int *)(param_1 + param_2 * 0x2c + 0x8c) == 0))
     || ((iVar1 = fn_00145b00(0x18,&DAT_00812c8c), iVar1 == 0 ||
         (iVar1 = fn_0037567c(iVar1,param_2,param_3), iVar1 == 0)))) {
    return 0xffffffff;
  }
  uVar2 = fn_0015a130(param_1);
  return uVar2;
}



undefined4 fn_001f1d38(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_r7;
  
  if ((-1 < (int)param_2) && (param_2 < 0x50)) {
    iVar1 = *(int *)(param_1 + param_2 * 0x2c + 0x8c);
    if (iVar1 != 0) {
      unaff_r7 = *(int *)(iVar1 + 0xe4);
    }
    if (((iVar1 != 0 && unaff_r7 != 0) && (iVar1 = fn_00145b00(0x18,&DAT_00812c8c), iVar1 != 0)) &&
       (iVar1 = fn_00375630(iVar1,param_2,param_3,unaff_r7), iVar1 != 0)) {
      uVar2 = fn_0015a130(param_1);
      return uVar2;
    }
  }
  return 0xffffffff;
}


