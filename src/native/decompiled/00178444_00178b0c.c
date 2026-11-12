#include "00178444_00178b0c.h"



void fn_00178b0c(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uVar1 = fn_00190e98(DAT_008977e4);
  puVar2 = (undefined4 *)fn_00190ed0(uVar1,0);
  local_28 = *puVar2;
  uStack_24 = puVar2[1];
  uStack_20 = puVar2[2];
  uVar1 = fn_00190e98(DAT_008977e4);
  puVar2 = (undefined4 *)fn_00190ee0(uVar1,0);
  local_1c = *puVar2;
  uStack_18 = puVar2[1];
  uStack_14 = puVar2[2];
  uVar1 = fn_00174864(DAT_008977e4);
  fn_00187f00(uVar1,&local_28,&local_1c);
  return;
}



void fn_0017894c(int *param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  
  if (param_3 != 0) {
    if (param_3 == 1) {
      iVar10 = *param_1;
      uVar2 = fn_0017fde4(param_2);
      fn_001969a4(*(undefined4 *)(*(int *)(iVar10 + 0x10) + 0x24),uVar2);
      fn_00162d44(*(undefined4 *)(*(int *)(iVar10 + 0x10) + 0x24));
      return;
    }
    return;
  }
  iVar13 = *param_1;
  iVar11 = *(int *)(iVar13 + 0x1c);
  iVar10 = fn_0017fde4(param_2);
  if (((*(int *)(iVar11 + 0xc) != 0) &&
      ((*(int *)(iVar11 + 0xc) == iVar10 || (iVar3 = fn_0019bb90(), iVar3 != 0)))) ||
     (*(int *)(iVar10 + 0xc) != 0)) goto LAB_00178a40;
  uVar9 = *(uint *)(iVar11 + 0x20);
  uVar7 = uVar9 & 0x3fffffff;
  if (*(int *)(iVar11 + 0x1c) - *(int *)(iVar11 + 0x18) >> 2 < (int)uVar7) {
LAB_00178aec:
    bVar1 = true;
    if (*(int **)(iVar11 + 0x1c) != (int *)0x0) {
      **(int **)(iVar11 + 0x1c) = iVar10;
    }
    *(int *)(iVar11 + 0x1c) = *(int *)(iVar11 + 0x1c) + 4;
  }
  else {
    if (uVar7 == 0) {
      uVar7 = 1;
    }
    else {
      uVar7 = uVar7 << 1;
    }
    if (uVar7 <= (uVar9 & 0x3fffffff)) goto LAB_00178aec;
    piVar4 = *(int **)(iVar11 + 0x14);
    if ((piVar4 != (int *)0x0) && ((uVar9 & 0xc0000000) == 0x40000000)) {
      puVar5 = (undefined4 *)(**(code **)(*piVar4 + 8))(piVar4,uVar7 << 2,0x20);
      if (puVar5 == (undefined4 *)0x0) goto LAB_00178a40;
      puVar6 = *(undefined4 **)(iVar11 + 0x18);
      puVar8 = *(undefined4 **)(iVar11 + 0x1c);
      iVar3 = 0;
      puVar12 = puVar5;
      if (puVar6 != puVar8) {
        do {
          if (puVar12 != (undefined4 *)0x0) {
            *puVar12 = *puVar6;
          }
          puVar6 = puVar6 + 1;
          puVar12 = puVar12 + 1;
        } while (puVar6 != puVar8);
        iVar3 = *(int *)(iVar11 + 0x1c) - *(int *)(iVar11 + 0x18) >> 2;
      }
      if (*(int *)(iVar11 + 0x18) != 0) {
        *(int *)(iVar11 + 0x1c) = *(int *)(iVar11 + 0x18);
        (**(code **)(**(int **)(iVar11 + 0x14) + 0xc))();
      }
      *(undefined4 **)(iVar11 + 0x1c) = puVar5 + iVar3;
      *(undefined4 **)(iVar11 + 0x18) = puVar5;
      *(uint *)(iVar11 + 0x20) = *(uint *)(iVar11 + 0x20) & 0xc0000000 | uVar7;
      goto LAB_00178aec;
    }
    bVar1 = false;
  }
  if (bVar1) {
    *(undefined4 *)(iVar10 + 0xc) = *(undefined4 *)(iVar11 + 0x10);
  }
LAB_00178a40:
  fn_00162d44(*(undefined4 *)(*(int *)(iVar13 + 0x10) + 0x24));
  return;
}



undefined4 fn_0017875c(int *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  
  iVar6 = 0;
  cVar1 = *param_2;
  uVar7 = 0;
  do {
    if (cVar1 == '\0') {
      return 1;
    }
    while( true ) {
      iVar2 = (int)param_2[iVar6];
      if (iVar2 == 0x6f) {
        uVar7 = uVar7 | 1;
      }
      else if (iVar2 < 0x6f) {
        if (iVar2 == 99) {
          uVar7 = uVar7 | 0x300;
        }
        else if (iVar2 < 99) {
          if (iVar2 == 0x20) goto LAB_001788cc;
          if (iVar2 == 0x2e) {
            if ((uint)param_1[2] <= (uint)param_1[1]) {
              iVar2 = param_1[1] << 1;
              if (iVar2 == 0) {
                iVar2 = 4;
              }
              iVar3 = fn_0018388c(*param_1,param_1[2] << 2,iVar2 << 2);
              *param_1 = iVar3;
              param_1[2] = iVar2;
            }
            uVar7 = 0;
            puVar5 = (undefined4 *)(*param_1 + param_1[1] * 4);
            param_1[1] = param_1[1] + 1;
            if (puVar5 != (undefined4 *)0x0) {
              *puVar5 = 0xffffffff;
            }
            goto LAB_001788cc;
          }
          if (iVar2 == 0x61) {
            uVar7 = uVar7 | 0x40;
          }
          else {
            if (iVar2 != 0x62) {
              return 0;
            }
            uVar7 = uVar7 | 8;
          }
        }
        else if (iVar2 == 0x66) {
          uVar7 = uVar7 | 4;
        }
        else if (iVar2 == 0x67) {
          uVar7 = uVar7 | 0x400;
        }
        else if (iVar2 == 0x69) {
          uVar7 = uVar7 | 2;
        }
        else {
          if (iVar2 != 0x6e) {
            return 0;
          }
          uVar7 = uVar7 | 6;
        }
      }
      else {
        switch(iVar2) {
        case 0x70:
          uVar7 = uVar7 | 0x800;
          break;
        default:
          return 0;
        case 0x72:
          uVar7 = uVar7 | 0x10000;
          break;
        case 0x73:
          uVar7 = uVar7 | 0x10;
          break;
        case 0x74:
          uVar7 = uVar7 | 0x20;
          break;
        case 0x75:
          uVar7 = uVar7 | 0x80;
          break;
        case 0x76:
          uVar7 = uVar7 | 0x1000;
          break;
        case 0x78:
          uVar7 = uVar7 | 0x8000;
          break;
        case 0x79:
          uVar7 = uVar7 | 0x4000;
        }
      }
      if (param_2[iVar6 + 1] != '|') break;
      iVar6 = iVar6 + 2;
      if (param_2[iVar6] == '\0') {
        return 0;
      }
    }
    if ((uint)param_1[2] <= (uint)param_1[1]) {
      iVar2 = param_1[1] << 1;
      if (iVar2 == 0) {
        iVar2 = 4;
      }
      iVar3 = fn_0018388c(*param_1,param_1[2] << 2,iVar2 << 2);
      *param_1 = iVar3;
      param_1[2] = iVar2;
    }
    puVar4 = (uint *)(*param_1 + param_1[1] * 4);
    param_1[1] = param_1[1] + 1;
    if (puVar4 != (uint *)0x0) {
      *puVar4 = uVar7;
    }
    uVar7 = 0;
LAB_001788cc:
    iVar6 = iVar6 + 1;
    cVar1 = param_2[iVar6];
  } while( true );
}



undefined4 fn_0017863c(undefined4 param_1,undefined4 param_2,code *param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = (*param_3)(param_2,param_4,4);
  if (iVar1 != 4) {
LAB_00178668:
    fn_0019813c(param_1,(char *)&DAT_007edcb4);
    return 0;
  }
  iVar1 = *param_4;
  if (iVar1 != 0x1000001) {
    if (iVar1 == 0x5000002) {
      iVar1 = (*param_3)(param_2,param_4 + 1,4);
    }
    else {
      if (iVar1 != 0x5000004) {
        if (iVar1 != 0x8000010) {
          uVar2 = fn_00191f28();
          fn_0019813c(param_1,(char *)&DAT_00178744,uVar2);
          return 0;
        }
        iVar1 = (*param_3)(param_2,param_4[1] + 0x14,4);
        if ((iVar1 == 4) &&
           (iVar3 = *(int *)(param_4[1] + 0x14), iVar1 = (*param_3)(param_2,param_4[1] + 0x1c,iVar3)
           , iVar1 == iVar3)) {
          return 1;
        }
        goto LAB_00178668;
      }
      iVar1 = (*param_3)(param_2,param_4 + 1,4);
    }
    if (iVar1 != 4) goto LAB_00178668;
  }
  return 1;
}



void fn_00178604(void)

{
  if (DAT_008bf5e8 != '\0') {
    fn_0016e9e0((char *)&DAT_00178630);
    DAT_008bf5e8 = '\0';
  }
  return;
}



void fn_001785e4(void)

{
  fn_00184c14(DAT_008bf5f0);
  DAT_008bf5f0 = 0;
  return;
}



void fn_00178444(int param_1)

{
  int *piVar1;
  int iVar2;
  int unaff_r4;
  int iVar3;
  
  if (param_1 == 0) {
    iVar2 = fn_00191f08();
    if (iVar2 != 0) {
      unaff_r4 = DAT_008bf51c;
    }
    if ((iVar2 != 0 && unaff_r4 != 0) && (*(char *)(unaff_r4 + 0xe4ac) != '\0')) {
      iVar3 = 1;
      iVar2 = fn_00184c20(1);
      if ((iVar2 == 0) && (iVar2 = fn_00184c20(0), iVar2 == 0)) {
        *(undefined4 *)(unaff_r4 + 0xe4c4) = 0;
        *(undefined1 **)(unaff_r4 + 0xe4d8) = &LAB_00185284;
        *(undefined4 *)(unaff_r4 + 0xe4e0) = 1;
        fn_0018513c(0,unaff_r4 + 0xc820,0x1ca0);
        piVar1 = DAT_008bf514;
        *(undefined1 *)((int)DAT_008bf514 + 0x12) = 1;
        *(undefined1 *)((int)piVar1 + 0x13) = 1;
        fn_00184c6c(piVar1,fn_0018522c);
        iVar3 = fn_001851bc();
      }
      if (iVar3 == 10) {
        fn_0018501c();
      }
    }
    iVar2 = DAT_008bf51c;
    if ((((DAT_008bf51c != 0) && (iVar3 = fn_00184c20(1), iVar3 == 0)) &&
        (iVar3 = fn_00184c20(0), iVar3 == 0)) &&
       (((*(char *)(iVar2 + 0xe4c1) != '\0' ||
         (iVar3 = fn_00184b48((char *)&DAT_007e0a04), iVar3 == 0)) ||
        (*(char *)(iVar2 + 0xe4c0) != '\0')))) {
      fn_00184cd0((char *)&DAT_007e0a04);
    }
  }
  DAT_008bf518 = 0;
  DAT_008bf51c = 0;
  (**(code **)(*DAT_008bf514 + 4))();
  DAT_008bf514 = (int *)0x0;
  if (DAT_008bf50f != '\0') {
    fn_0016e9e0((char *)&DAT_007e09fc);
    DAT_008bf50f = '\0';
  }
  return;
}


