#include "0015a4c4_0015add4.h"



undefined4 fn_0015add4(int param_1,undefined4 param_2,int param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  int local_28;
  int local_24;
  undefined4 local_20;
  
  iVar1 = fn_00164a34();
  if (iVar1 != 0 && param_3 != 0) {
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    fn_00163edc(param_1,*(undefined4 *)(*(int *)(param_1 + 0x94) + *(int *)(param_1 + 0xbc) * 4));
    iVar1 = local_24 - local_28 >> 0x1f;
    if ((((local_24 - local_28) / 0xc + iVar1 != iVar1) &&
        (iVar1 = fn_00145b00(0x2c,&DAT_00812c8c), iVar1 != 0)) &&
       (iVar1 = fn_0015caf4(iVar1,param_2,&local_28,param_4), iVar1 != 0)) {
      if (param_4 < (uint)((local_24 - local_28) / 0xc)) {
        fn_0015aabc(param_1,param_2);
      }
      else {
        fn_0015aabc(param_1,param_2);
      }
      uVar2 = fn_0015a130(param_1,iVar1);
      fn_00168b28(&local_28);
      return uVar2;
    }
    fn_00168b28(&local_28);
  }
  return 0xffffffff;
}



undefined4 fn_0015adcc(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iStack_28;
  int iStack_24;
  undefined4 uStack_20;
  
  iVar2 = fn_00164a34();
  if (iVar2 != 0 && param_3 != 0) {
    iStack_28 = 0;
    iStack_24 = 0;
    uStack_20 = 0;
    fn_00163edc(param_1,*(undefined4 *)(*(int *)(param_1 + 0x94) + *(int *)(param_1 + 0xbc) * 4));
    iVar2 = iStack_24 - iStack_28 >> 0x1f;
    if ((((iStack_24 - iStack_28) / 0xc + iVar2 != iVar2) &&
        (iVar2 = fn_00145b00(0x2c,&DAT_00812c8c), iVar2 != 0)) &&
       (iVar2 = fn_0015caf4(iVar2,param_2,&iStack_28,0), iVar2 != 0)) {
      iVar1 = iStack_24 - iStack_28 >> 0x1f;
      if ((iStack_24 - iStack_28) / 0xc + iVar1 == iVar1) {
        fn_0015aabc(param_1,param_2);
      }
      else {
        fn_0015aabc(param_1,param_2);
      }
      uVar3 = fn_0015a130(param_1,iVar2);
      fn_00168b28(&iStack_28);
      return uVar3;
    }
    fn_00168b28(&iStack_28);
  }
  return 0xffffffff;
}



undefined4 fn_0015ad60(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00164a34();
  if (((iVar1 == 0) || (iVar1 = fn_00145b00(0x18,&DAT_00812c8c), iVar1 == 0)) ||
     (iVar1 = fn_0015c980(iVar1,param_2,1), iVar1 == 0)) {
    return 0xffffffff;
  }
  uVar2 = fn_0015a130(param_1);
  return uVar2;
}



void fn_0015aabc(int param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  uint unaff_r7;
  uint uVar11;
  uint in_s0;
  uint in_s1;
  uint in_s2;
  uint uVar12;
  
  iVar1 = fn_00164a34();
  if (iVar1 != 0) {
    puVar8 = *(uint **)(param_1 + 0xb0);
    uVar6 = 0;
    uVar7 = (int)puVar8 - *(int *)(param_1 + 0xac) >> 4;
    if (uVar7 != 0) {
      do {
        if (*(char *)(*(int *)(param_1 + 0xac) + uVar6 * 0x10) == (char)param_2) {
          iVar1 = *(int *)(param_1 + 0xac) + uVar6 * 0x10;
          *(uint *)(iVar1 + 4) = in_s0;
          *(uint *)(iVar1 + 8) = in_s1;
          *(uint *)(iVar1 + 0xc) = in_s2;
          return;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar7);
    }
    uVar6 = unaff_r7 & 0xffffff00 | param_2 & 0xff;
    puVar9 = (uint *)(param_1 + 0xac);
    if (puVar8 == *(uint **)(param_1 + 0xb4)) {
      if ((uint)((int)*(uint **)(param_1 + 0xb4) - *(int *)(param_1 + 0xac) >> 4) <= uVar7) {
        uVar10 = uVar7 + (uVar7 >> 1) + (uVar7 >> 3);
        if (uVar10 < uVar7 + 0x20) {
          uVar10 = uVar7 + 0x20;
        }
        puVar2 = (uint *)fn_00100fc6(uVar10 << 4,0);
        puVar5 = puVar2;
        for (puVar4 = (uint *)*puVar9; puVar4 != puVar8; puVar4 = puVar4 + 4) {
          if (puVar5 != (uint *)0x0) {
            uVar7 = puVar4[1];
            uVar11 = puVar4[2];
            uVar12 = puVar4[3];
            *puVar5 = *puVar4;
            puVar5[1] = uVar7;
            puVar5[2] = uVar11;
            puVar5[3] = uVar12;
          }
          puVar5 = puVar5 + 4;
        }
        puVar4 = (uint *)(((int)puVar8 - *puVar9 & 0xfffffff0) + (int)puVar2);
        if (puVar4 != (uint *)0x0) {
          *puVar4 = uVar6;
          puVar4[1] = in_s0;
          puVar4[2] = in_s1;
          puVar4[3] = in_s2;
        }
        puVar5 = *(uint **)(param_1 + 0xb0);
        puVar4 = (uint *)(((int)puVar8 - *puVar9 & 0xfffffff0) + (int)puVar2);
        for (; puVar8 != puVar5; puVar8 = puVar8 + 4) {
          puVar3 = puVar4 + 4;
          if (puVar3 != (uint *)0x0) {
            uVar7 = puVar8[1];
            uVar6 = puVar8[2];
            uVar11 = puVar8[3];
            *puVar3 = *puVar8;
            puVar4[5] = uVar7;
            puVar4[6] = uVar6;
            puVar4[7] = uVar11;
          }
          puVar4 = puVar3;
        }
        uVar6 = *puVar9;
        uVar11 = *(uint *)(param_1 + 0xb0);
        uVar7 = uVar6;
        if (uVar11 < uVar6) {
          do {
            uVar7 = uVar7 + 0x10;
          } while (uVar7 != uVar11);
        }
        fn_001008c4(uVar6,(int)(*(int *)(param_1 + 0xb4) - uVar6) >> 4,0);
        *(uint **)(param_1 + 0xb4) = puVar2 + uVar10 * 4;
        *(uint **)(param_1 + 0xb0) = puVar2 + ((int)(uVar11 - uVar6) >> 4) * 4 + 4;
        *puVar9 = (uint)puVar2;
        return;
      }
      *(uint **)(param_1 + 0xb0) = puVar8 + 4;
      if (puVar8 != (uint *)0x0) {
        *puVar8 = puVar8[-4];
        puVar8[1] = puVar8[-3];
        puVar8[2] = puVar8[-2];
        puVar8[3] = puVar8[-1];
      }
      puVar9 = puVar8 + -4;
      puVar4 = puVar8;
      if (puVar8 < puVar9) {
        iVar1 = (int)puVar9 - (int)puVar8;
        if (0 < iVar1) {
          if (iVar1 * 0x8000000 < 0) {
            puVar9 = puVar8 + -8;
            puVar4 = puVar8 + -4;
            *puVar4 = *puVar9;
            puVar8[-3] = puVar8[-7];
            puVar8[-2] = puVar8[-6];
            puVar8[-1] = puVar8[-5];
          }
          for (iVar1 = iVar1 >> 5; iVar1 != 0; iVar1 = iVar1 + -1) {
            uVar7 = puVar9[-3];
            uVar10 = puVar9[-2];
            uVar11 = puVar9[-1];
            puVar4[-4] = puVar9[-4];
            puVar4[-3] = uVar7;
            puVar4[-2] = uVar10;
            puVar4[-1] = uVar11;
            uVar7 = puVar9[-7];
            uVar10 = puVar9[-6];
            uVar11 = puVar9[-5];
            puVar4[-8] = puVar9[-8];
            puVar4[-7] = uVar7;
            puVar4[-6] = uVar10;
            puVar4[-5] = uVar11;
            puVar9 = puVar9 + -8;
            puVar4 = puVar4 + -8;
          }
        }
      }
      else {
        while (puVar8 != puVar9) {
          uVar7 = puVar9[-3];
          uVar10 = puVar9[-2];
          uVar11 = puVar9[-1];
          puVar4[-4] = puVar9[-4];
          puVar4[-3] = uVar7;
          puVar4[-2] = uVar10;
          puVar4[-1] = uVar11;
          puVar4 = puVar4 + -4;
          puVar9 = puVar9 + -4;
        }
      }
      *puVar8 = uVar6;
      puVar8[1] = in_s0;
      puVar8[2] = in_s1;
      puVar8[3] = in_s2;
      return;
    }
    *(uint **)(param_1 + 0xb0) = puVar8 + 4;
    if (puVar8 != (uint *)0x0) {
      *puVar8 = uVar6;
      puVar8[1] = in_s0;
      puVar8[2] = in_s1;
      puVar8[3] = in_s2;
      return;
    }
  }
  return;
}



void fn_0015aa9c(int param_1)

{
  int iVar1;
  undefined4 in_s0;
  
  iVar1 = fn_0018367c(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(iVar1 + 4) = in_s0;
  return;
}



void fn_0015aa68(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uStack_c;
  
  uVar2 = param_1;
  uStack_c = param_2;
  uVar1 = fn_0017484c(DAT_008977e4);
  uVar2 = fn_00182e2c(uVar1,&uStack_c,param_3,param_4,uVar2);
  fn_001794fc(param_1,uVar2);
  return;
}



void fn_0015a9f0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = fn_00174828(DAT_008977e4);
  iVar1 = iVar1 + *(char *)(*(int *)(param_1 + 0x50) + 0x35) * 0x418;
  uVar2 = fn_0016dc08((int)*(short *)(iVar1 + -0x4080),(int)*(char *)(iVar1 + -0x4027));
  uVar3 = fn_001797c4(param_1);
  iVar1 = fn_0017b118(uVar2,uVar3);
  fn_0017fd10(param_1,iVar1 + param_2,param_3);
  return;
}



void fn_0015a9bc(int param_1)

{
  fn_0016ddb4(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  return;
}



void fn_0015a964(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = fn_0016678c();
  if (iVar1 != 0) {
    piVar2 = (int *)fn_001667a8(param_1,param_2);
    if (*piVar2 != 0) {
      fn_00161b34(*piVar2,param_3);
      return;
    }
  }
  return;
}



void fn_0015a4c4(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = DAT_008977e0;
  iVar3 = *param_1;
  if (*(char *)(iVar3 + 0x17) == '\0') {
    if (((*(char *)(DAT_00897808 + 0x1c) == '\0') ||
        (*(uint *)(DAT_00897808 + 0x18) >> 0x18 != 0xff)) &&
       ((*(char *)(DAT_00897810 + 0x1c) == '\0' || (*(uint *)(DAT_00897810 + 0x18) >> 0x18 != 0xff))
       )) {
      iVar2 = fn_006f7a0c(DAT_008977e0);
      if (((*(int *)(iVar2 + 0x44) == 0) || (iVar2 = fn_006b759c(), iVar2 == 0)) &&
         (*(char *)(iVar3 + 0x16) != '\0')) {
        fn_00682d14(iVar3);
        *(undefined1 *)(iVar3 + 0x17) = 1;
      }
    }
  }
  else if ((*(char *)(iVar3 + 0x17) == '\x01') && (iVar3 = fn_006f7a20(), iVar3 == 0)) {
    fn_006f7a0c(uVar1);
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  return;
}


