#include "001b86e8_001b896c.h"



undefined4 fn_001b896c(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  bool bVar13;
  bool bVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  uint local_68;
  int *local_64;
  uint local_60;
  int *local_5c;
  uint local_58;
  int *local_54;
  uint local_50;
  int *local_4c;
  uint local_48;
  int *local_44;
  uint local_40;
  int *local_3c;
  uint local_38;
  int *local_34;
  
  piVar1 = (int *)fn_00173d40(param_1,*(undefined4 *)(param_1 + 0x34));
  iVar10 = piVar1[1];
  iVar11 = *piVar1;
  uVar12 = *(undefined4 *)(param_1 + 0x8c);
  piVar1 = (int *)fn_002fece8(0x2c);
  if (piVar1 != (int *)0x0) {
    fn_0019b998(piVar1,uVar12,4);
  }
  piVar1[6] = 0;
  if (iVar11 == 0x8000100) {
    iVar10 = *(int *)(iVar10 + 0x24);
    iVar11 = *(int *)(iVar10 + 0x3c) + (uint)(*(char *)(iVar10 + 0x21) != '\0');
    local_54 = (int *)fn_00665a44(*(undefined4 *)(param_1 + 0x8c),iVar11);
    uVar15 = CONCAT44(0x8000040,local_44);
    local_58 = 0x8000040;
    if (local_54 == (int *)0x0) goto code_r0x001b9274;
    uVar8 = 0;
    local_54[1] = local_54[1] + 1;
    if (0 < *(int *)(iVar10 + 0x3c)) {
      do {
        bVar13 = -1 < (int)uVar8;
        bVar14 = uVar8 == 0;
        if (bVar13) {
          param_4 = local_54[7];
        }
        puVar5 = (uint *)(*(int *)(iVar10 + 0x40) + uVar8 * 8);
        if (bVar13) {
          bVar14 = param_4 == uVar8;
        }
        if (!bVar14 && (bVar13 && (int)uVar8 <= (int)param_4)) {
          puVar2 = (uint *)(local_54[6] + uVar8 * 8);
          param_4 = *puVar2;
          piVar7 = (int *)puVar2[1];
          puVar2[1] = puVar5[1];
          uVar6 = *puVar5;
          *puVar2 = uVar6;
          if ((uVar6 & 0x8000000) != 0) {
            *(int *)(puVar2[1] + 4) = *(int *)(puVar2[1] + 4) + 1;
          }
          if (((param_4 & 0x8000000) != 0) &&
             (iVar3 = piVar7[1], piVar7[1] = iVar3 + -1, iVar3 + -1 == 0)) {
            (**(code **)(*piVar7 + 8))(piVar7);
          }
        }
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < *(int *)(iVar10 + 0x3c));
    }
    piVar7 = local_54;
    if (*(char *)(iVar10 + 0x21) != '\0') {
      piVar9 = (int *)(iVar11 + -1);
      uVar15 = fn_0019ba68(*(undefined4 *)(param_1 + 0x8c),&DAT_001b8e50,0xffffffff);
      local_44 = (int *)uVar15;
      local_48 = 0x8000010;
      if (local_44 == (int *)0x0) goto code_r0x001b9274;
      bVar14 = piVar9 == (int *)0x0;
      local_44[1] = local_44[1] + 1;
      piVar4 = local_44;
      if (-1 < (int)piVar9) {
        piVar4 = (int *)piVar7[7];
        bVar14 = piVar4 == piVar9;
      }
      if (!bVar14 && (-1 < (int)piVar9 && (int)piVar9 <= (int)piVar4)) {
        fn_0019e864(piVar7[6] + (int)piVar9 * 8,&local_48);
      }
      if (((local_48 & 0x8000000) != 0) &&
         (iVar11 = local_44[1], local_44[1] = iVar11 + -1, iVar11 + -1 == 0)) {
        (**(code **)(*local_44 + 8))();
      }
    }
    local_5c = (int *)0x0;
    local_60 = 0x1000008;
    uVar16 = fn_0019ba68(*(undefined4 *)(param_1 + 0x8c),(char *)&DAT_001b8e54,0xffffffff);
    uVar15 = CONCAT44((int)((ulonglong)uVar16 >> 0x20),local_44);
    local_64 = (int *)uVar16;
    local_68 = 0x8000010;
    if (local_64 == (int *)0x0) goto code_r0x001b9274;
    local_64[1] = local_64[1] + 1;
    fn_0019b728(piVar1,&local_68,&local_60);
    if (((local_68 & 0x8000000) != 0) &&
       (iVar11 = local_64[1], local_64[1] = iVar11 + -1, iVar11 + -1 == 0)) {
      (**(code **)(*local_64 + 8))();
    }
    if (((local_60 & 0x8000000) != 0) &&
       (iVar11 = local_5c[1], local_5c[1] = iVar11 + -1, iVar11 + -1 == 0)) {
      (**(code **)(*local_5c + 8))();
    }
    uVar16 = fn_0019ba68(*(undefined4 *)(param_1 + 0x8c),&DAT_001b8e5c,0xffffffff);
    uVar15 = CONCAT44((int)((ulonglong)uVar16 >> 0x20),local_44);
    local_5c = (int *)uVar16;
    local_60 = 0x8000010;
    if (local_5c == (int *)0x0) goto code_r0x001b9274;
    local_5c[1] = local_5c[1] + 1;
    fn_0019b728(piVar1,&local_60,iVar10 + 0x14);
    if (((local_60 & 0x8000000) != 0) &&
       (iVar11 = local_5c[1], local_5c[1] = iVar11 + -1, iVar11 + -1 == 0)) {
      (**(code **)(*local_5c + 8))();
    }
    uVar16 = fn_0019ba68(*(undefined4 *)(param_1 + 0x8c),&DAT_001b8e64,0xffffffff);
    uVar15 = CONCAT44((int)((ulonglong)uVar16 >> 0x20),local_44);
    local_5c = (int *)uVar16;
    local_60 = 0x8000010;
    if (local_5c == (int *)0x0) goto code_r0x001b9274;
    local_5c[1] = local_5c[1] + 1;
    fn_0019b728(piVar1,&local_60,iVar10 + 0xc);
    if (((local_60 & 0x8000000) != 0) &&
       (iVar11 = local_5c[1], local_5c[1] = iVar11 + -1, iVar11 + -1 == 0)) {
      (**(code **)(*local_5c + 8))();
    }
    uVar16 = fn_0019ba68(*(undefined4 *)(param_1 + 0x8c),(char *)&DAT_001b8e68,0xffffffff);
    uVar15 = CONCAT44((int)((ulonglong)uVar16 >> 0x20),local_44);
    local_5c = (int *)uVar16;
    local_60 = 0x8000010;
    if (local_5c == (int *)0x0) goto code_r0x001b9274;
    local_5c[1] = local_5c[1] + 1;
    fn_0019b728(piVar1,&local_60,&local_58);
    if (((local_60 & 0x8000000) != 0) &&
       (iVar11 = local_5c[1], local_5c[1] = iVar11 + -1, iVar11 + -1 == 0)) {
      (**(code **)(*local_5c + 8))();
    }
    local_64 = (int *)(int)*(char *)(iVar10 + 0x21);
    local_68 = 0x1000008;
    uVar16 = fn_0019ba68(*(undefined4 *)(param_1 + 0x8c),(char *)&DAT_001b8e74,0xffffffff);
    uVar15 = CONCAT44((int)((ulonglong)uVar16 >> 0x20),local_44);
    local_5c = (int *)uVar16;
    local_60 = 0x8000010;
    if (local_5c == (int *)0x0) goto code_r0x001b9274;
    local_5c[1] = local_5c[1] + 1;
    fn_0019b728(piVar1,&local_60,&local_68);
    if (((local_60 & 0x8000000) != 0) &&
       (iVar10 = local_5c[1], local_5c[1] = iVar10 + -1, iVar10 + -1 == 0)) {
      (**(code **)(*local_5c + 8))();
    }
    if (((local_68 & 0x8000000) != 0) &&
       (iVar10 = local_64[1], local_64[1] = iVar10 + -1, iVar10 + -1 == 0)) {
      (**(code **)(*local_64 + 8))();
    }
    if (((local_58 & 0x8000000) != 0) &&
       (iVar10 = local_54[1], local_54[1] = iVar10 + -1, iVar10 + -1 == 0)) {
      (**(code **)(*local_54 + 8))();
    }
  }
  else {
    local_64 = (int *)&DAT_00000001;
    local_68 = 0x1000008;
    uVar15 = fn_0019ba68(*(undefined4 *)(param_1 + 0x8c),(char *)&DAT_001b8e54,0xffffffff);
    local_44 = (int *)uVar15;
    local_48 = 0x8000010;
    if (local_44 == (int *)0x0) goto code_r0x001b9274;
    local_44[1] = local_44[1] + 1;
    fn_0019b728(piVar1,&local_48,&local_68);
    if (((local_48 & 0x8000000) != 0) &&
       (iVar11 = local_44[1], local_44[1] = iVar11 + -1, iVar11 + -1 == 0)) {
      (**(code **)(*local_44 + 8))();
    }
    if (((local_68 & 0x8000000) != 0) &&
       (iVar11 = local_64[1], local_64[1] = iVar11 + -1, iVar11 + -1 == 0)) {
      (**(code **)(*local_64 + 8))();
    }
    uVar16 = fn_0019ba68(*(undefined4 *)(param_1 + 0x8c),&DAT_001b8e5c,0xffffffff);
    uVar15 = CONCAT44((int)((ulonglong)uVar16 >> 0x20),local_44);
    local_64 = (int *)uVar16;
    local_68 = 0x8000010;
    if (local_64 == (int *)0x0) goto code_r0x001b9274;
    local_64[1] = local_64[1] + 1;
    fn_0019b728(piVar1,&local_68,iVar10 + 0x40);
    if (((local_68 & 0x8000000) != 0) &&
       (iVar11 = local_64[1], local_64[1] = iVar11 + -1, iVar11 + -1 == 0)) {
      (**(code **)(*local_64 + 8))();
    }
    local_44 = *(int **)(iVar10 + 0x18);
    local_48 = 0x5000002;
    uVar16 = fn_0019ba68(*(undefined4 *)(param_1 + 0x8c),(char *)&DAT_001b9298,0xffffffff);
    uVar15 = CONCAT44((int)((ulonglong)uVar16 >> 0x20),local_44);
    local_64 = (int *)uVar16;
    local_68 = 0x8000010;
    if (local_64 == (int *)0x0) goto code_r0x001b9274;
    local_64[1] = local_64[1] + 1;
    fn_0019b728(piVar1,&local_68,&local_48);
    if (((local_68 & 0x8000000) != 0) &&
       (iVar11 = local_64[1], local_64[1] = iVar11 + -1, iVar11 + -1 == 0)) {
      (**(code **)(*local_64 + 8))();
    }
    if (((local_48 & 0x8000000) != 0) &&
       (iVar11 = local_44[1], local_44[1] = iVar11 + -1, iVar11 + -1 == 0)) {
      (**(code **)(*local_44 + 8))();
    }
    local_50 = 0x1000001;
    local_4c = (int *)0x0;
    if (*(int *)(iVar10 + 0x20) != 0) {
      local_34 = (int *)fn_00665a44(*(undefined4 *)(param_1 + 0x8c));
      uVar15 = CONCAT44(0x8000040,local_44);
      local_38 = 0x8000040;
      if (local_34 == (int *)0x0) goto code_r0x001b9274;
      local_34[1] = local_34[1] + 1;
      fn_0019e864(&local_50,&local_38);
      if (((local_38 & 0x8000000) != 0) &&
         (iVar11 = local_34[1], local_34[1] = iVar11 + -1, iVar11 + -1 == 0)) {
        (**(code **)(*local_34 + 8))();
      }
      piVar7 = (int *)0x0;
      if (*(int *)(iVar10 + 0x20) != 0) {
        do {
          bVar14 = piVar7 == (int *)0x0;
          local_5c = *(int **)(*(int *)(iVar10 + 0x1c) + (int)piVar7 * 4);
          local_60 = 0x5000002;
          piVar9 = local_5c;
          if (-1 < (int)piVar7) {
            piVar9 = (int *)local_4c[7];
            bVar14 = piVar9 == piVar7;
          }
          if (!bVar14 && (-1 < (int)piVar7 && (int)piVar7 <= (int)piVar9)) {
            fn_0019e864(local_4c[6] + (int)piVar7 * 8,&local_60);
          }
          if (((local_60 & 0x8000000) != 0) &&
             (iVar11 = local_5c[1], local_5c[1] = iVar11 + -1, iVar11 + -1 == 0)) {
            (**(code **)(*local_5c + 8))();
          }
          piVar7 = (int *)((int)piVar7 + 1);
        } while (piVar7 < *(int **)(iVar10 + 0x20));
      }
    }
    uVar16 = fn_0019ba68(*(undefined4 *)(param_1 + 0x8c),(char *)&DAT_001b92a8,0xffffffff);
    uVar15 = CONCAT44((int)((ulonglong)uVar16 >> 0x20),local_44);
    local_64 = (int *)uVar16;
    local_68 = 0x8000010;
    if (local_64 == (int *)0x0) goto code_r0x001b9274;
    local_64[1] = local_64[1] + 1;
    fn_0019b728(piVar1,&local_68,&local_50);
    if (((local_68 & 0x8000000) != 0) &&
       (iVar10 = local_64[1], local_64[1] = iVar10 + -1, iVar10 + -1 == 0)) {
      (**(code **)(*local_64 + 8))();
    }
    if (((local_50 & 0x8000000) != 0) &&
       (iVar10 = local_4c[1], local_4c[1] = iVar10 + -1, iVar10 + -1 == 0)) {
      (**(code **)(*local_4c + 8))();
    }
  }
  uVar15 = CONCAT44(&local_40,local_44);
  local_40 = 0xa000020;
  local_3c = piVar1;
  if (piVar1 != (int *)0x0) {
    piVar1[1] = piVar1[1] + 1;
    fn_00173d1c(param_1);
    if (((local_40 & 0x8000000) != 0) &&
       (iVar10 = local_3c[1], local_3c[1] = iVar10 + -1, iVar10 + -1 == 0)) {
      (**(code **)(*local_3c + 8))();
    }
    return 1;
  }
code_r0x001b9274:
  local_44 = (int *)uVar15;
                    /* WARNING: Subroutine does not return */
  fn_00146590(0,(int)((ulonglong)uVar15 >> 0x20));
}



undefined4 fn_001b86e8(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  bool bVar9;
  int local_38;
  int local_34;
  undefined4 local_2c;
  
  bVar1 = false;
  do {
    iVar8 = param_3 * 2;
    bVar9 = iVar8 == param_4;
    if (iVar8 <= param_4) {
      bVar9 = !bVar1;
    }
    if (!bVar9) {
      return 1;
    }
    if (iVar8 != param_4) {
      local_34 = *(int *)(param_2 + 0x18) + param_3 * 0x10;
      iVar2 = *(int *)(param_2 + 0x18) + (iVar8 + 1) * 8;
      if (param_5 < 0) {
        iVar2 = fn_00199144(param_1,local_34,iVar2,&local_38);
        if (iVar2 == 0) {
          return 0;
        }
      }
      else {
        uVar6 = fn_00157ff4(param_1);
        fn_00742630(param_1,param_5);
        fn_00173d14(param_1);
        fn_00173d1c(param_1,local_34);
        fn_00173d1c(param_1,iVar2);
        iVar2 = fn_00157c74(param_1,3,1,0);
        if (iVar2 < 0) {
          iVar8 = *(int *)(param_1 + 0x40);
          goto joined_r0x001b87c4;
        }
        iVar2 = fn_00157f58(param_1,0xffffffff,&local_38);
        if (iVar2 < 0) goto LAB_001b87fc;
        fn_00743388(param_1,uVar6);
      }
      if (local_38 < 1) {
        iVar8 = iVar8 + 1;
      }
    }
    iVar4 = *(int *)(param_2 + 0x18) + param_3 * 8;
    iVar2 = *(int *)(param_2 + 0x18) + iVar8 * 8;
    if (param_5 < 0) {
      iVar2 = fn_00199144(param_1,iVar4,iVar2,&local_38);
      if (iVar2 == 0) {
        return 0;
      }
    }
    else {
      local_2c = fn_00157ff4(param_1);
      fn_00742630(param_1,param_5);
      fn_00173d14(param_1);
      fn_00173d1c(param_1,iVar4);
      fn_00173d1c(param_1,iVar2);
      iVar2 = fn_00157c74(param_1,3,1,0);
      if (iVar2 < 0) {
        iVar8 = *(int *)(param_1 + 0x40);
joined_r0x001b87c4:
        if (iVar8 != 0x8000010) {
          fn_0019813c(param_1,(char *)&DAT_0080e07c);
        }
        return 0;
      }
      iVar2 = fn_00157f58(param_1,0xffffffff,&local_38);
      if (iVar2 < 0) {
LAB_001b87fc:
        fn_0019813c(param_1,"numeric value expected as return value of the compare function");
        return 0;
      }
      fn_00743388(param_1,local_2c);
    }
    if (local_38 < 0) {
      puVar3 = (undefined4 *)(*(int *)(param_2 + 0x18) + param_3 * 8);
      puVar5 = (undefined4 *)(*(int *)(param_2 + 0x18) + iVar8 * 8);
      uVar6 = *puVar3;
      uVar7 = puVar3[1];
      *puVar3 = *puVar5;
      puVar3[1] = puVar5[1];
      *puVar5 = uVar6;
      puVar5[1] = uVar7;
      param_3 = iVar8;
    }
    else {
      bVar1 = true;
    }
  } while( true );
}


