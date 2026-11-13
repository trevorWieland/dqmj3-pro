#include "002ffd56_003003f8.h"



undefined4 fn_003003f8(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_003004e8();
  fn_003001f0(param_1,uVar1);
  return uVar1;
}



void fn_00300398(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint extraout_r1;
  int iVar4;
  
  uVar3 = *(uint *)(param_1 + 0x18);
  iVar4 = 0;
  iVar1 = (int)(*(int *)(param_1 + 0x1c) - uVar3) >> 2;
  if (0 < iVar1) {
    do {
      piVar2 = *(int **)(*(int *)(param_1 + 0x18) + iVar4 * 4);
      if (piVar2 != (int *)0x0) {
        uVar3 = (uint)*(byte *)(piVar2 + 0x16);
      }
      if (piVar2 != (int *)0x0 && uVar3 != 0) {
        (**(code **)(*piVar2 + 0x128))(piVar2,param_2);
        uVar3 = extraout_r1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  return;
}



undefined4 fn_00300388(int param_1)

{
  if (param_1 - 0x30U < 10) {
    return 1;
  }
  return 0;
}



void fn_00300334(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x3c) + param_2 * 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xa4))();
    piVar2 = (int *)(*(int *)(param_1 + 0x3c) + param_2 * 4);
    piVar1 = (int *)*piVar2;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    *piVar2 = 0;
  }
  return;
}



void fn_00300300(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  fn_00423d6c(*(undefined4 *)(param_1 + 0x60),param_4,param_2);
                    /* WARNING: Could not recover jumptable at 0x00300330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0xa0))(param_2,param_3);
  return;
}



void fn_003001f0(uint param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  int local_158 [81];
  
  iVar4 = *(int *)(param_1 + 8);
  uVar5 = *(uint *)(param_1 + 0x24);
  uVar1 = param_1;
  if (iVar4 != 0) {
    uVar1 = (uint)*(byte *)(iVar4 + 0x58);
  }
  iVar6 = (int)(*(int *)(param_1 + 0x28) - uVar5) >> 2;
  if (iVar4 != 0 && uVar1 != 0) {
    iVar6 = iVar6 + 1;
  }
  bVar7 = iVar4 != 0;
  if (bVar7) {
    uVar5 = (uint)*(byte *)(iVar4 + 0x58);
  }
  uVar1 = (uint)(bVar7 && uVar5 != 0);
  if (bVar7 && uVar5 != 0) {
    local_158[0] = iVar4;
  }
  iVar4 = 0;
  for (; (int)uVar1 < iVar6; uVar1 = uVar1 + 1) {
    local_158[uVar1] = *(int *)(*(int *)(param_1 + 0x24) + iVar4 * 4);
    iVar4 = iVar4 + 1;
  }
  iVar4 = 0;
  if (0 < iVar6) {
    do {
      if ((int *)local_158[iVar4] != (int *)0x0) {
        iVar2 = (**(code **)(*(int *)local_158[iVar4] + 0xcc))();
        piVar3 = (int *)0x0;
        if (iVar2 != 0) {
          piVar3 = (int *)local_158[iVar4];
        }
        if (iVar2 != 0 && piVar3 != param_2) {
          (**(code **)(*piVar3 + 200))(piVar3,0);
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar6);
  }
  if ((param_2 != (int *)0x0) && (iVar4 = (**(code **)(*param_2 + 0xcc))(param_2), iVar4 == 0)) {
    (**(code **)(*param_2 + 200))(param_2,1);
  }
  return;
}



void fn_0030019c(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x18) + param_2 * 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xa4))();
    piVar2 = (int *)(*(int *)(param_1 + 0x18) + param_2 * 4);
    piVar1 = (int *)*piVar2;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    *piVar2 = 0;
  }
  return;
}



undefined8 fn_00300164(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_1 - (param_1 >> 2);
  uVar1 = uVar1 + (uVar1 >> 4);
  uVar1 = uVar1 + (uVar1 >> 8);
  uVar1 = uVar1 + (uVar1 >> 0x10) >> 3;
  iVar2 = (param_1 - 10) + uVar1 * -10;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 10;
  }
  else {
    uVar1 = uVar1 + 1;
  }
  return CONCAT44(iVar2,uVar1);
}



uint * fn_002ffd56(uint *param_1,char *param_2,int *param_3,uint *param_4,uint param_5)

{
  char cVar1;
  bool bVar2;
  uint *puVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint *puVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined8 local_60;
  uint uStack_58;
  int local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 *local_48;
  uint *local_44;
  int local_40;
  uint local_3c;
  uint local_38;
  int local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint *local_24;
  char *pcStack_20;
  int *piStack_1c;
  uint *puStack_18;
  
  local_40 = *param_3;
  local_3c = param_3[1];
  uVar7 = local_3c & 0x7fffffff;
  uVar8 = (local_3c & 0x7fffffff) >> 0x14;
  if (uVar8 == 0) {
    uVar8 = 0xffffffff;
  }
  local_24 = param_1;
  pcStack_20 = param_2;
  piStack_1c = param_3;
  puStack_18 = param_4;
  local_38 = fn_002ff9c0(0,0,param_3 + 2);
  local_38 = local_38 & 0xc00000;
  if ((int)local_3c < 0) {
    local_38 = local_38 * 5 >> 1 & 0xc00000;
  }
  local_38 = local_38 >> 0x16;
  if (1 < local_38) {
    local_38 = 0xffffffff;
  }
  if (uVar7 == 0 && local_40 == 0) {
    if (param_5 == 1) {
      puVar10 = (uint *)0x0;
      uVar7 = ~(uint)param_4;
    }
    else {
      for (iVar6 = 0; iVar6 < (int)param_4; iVar6 = iVar6 + 1) {
        param_2[iVar6] = '0';
      }
      uVar7 = 0;
      puVar10 = param_4;
    }
    param_2[(int)puVar10] = '\0';
    local_24[2] = param_5;
    *local_24 = uVar7;
    local_24[1] = (uint)puVar10;
    return puVar10;
  }
  puVar11 = (undefined1 *)((int)((uVar8 - 0x3ff) * 0x4d10) >> 0x10);
LAB_002ffda6:
  do {
    if (param_5 == 0) {
      puVar9 = puVar11 + (1 - (int)param_4);
    }
    else {
      puVar9 = (undefined1 *)-(int)param_4;
    }
    if ((int)puVar9 < 1) {
      uVar7 = local_38;
    }
    else {
      uVar7 = -local_38;
    }
    puVar4 = puVar9;
    if ((int)puVar9 < 0) {
      puVar4 = (undefined1 *)-(int)puVar9;
    }
    fn_002ff9c8(&local_34,puVar4,uVar7);
    local_54 = local_34;
    uStack_50 = uStack_30;
    uStack_4c = uStack_2c;
    uVar12 = fn_00178324(local_3c,local_40,uStack_2c,&local_48);
    local_60 = (local_60 & ~((unsigned long long)0xffffffff << 32)) | (((unsigned long long)((undefined4)((ulonglong)uVar12 >> 0x20)) & 0xffffffff) << 32);
    local_60 = (local_60 & ~((unsigned int)0xffffffff << 0)) | ((unsigned int)((int)uVar12 + -0x201f) & 0xffffffff);
    uVar7 = local_38;
    if ((int)puVar9 < 1) {
      local_54 = local_54 + -0x201f;
      uVar13 = fn_002ffac8(&local_60,&local_54,local_38,&local_54);
    }
    else {
      local_54 = local_54 + 0x201f;
      uVar13 = fn_002ffa98(&local_60,&local_54);
    }
    local_60 = (local_60 & ~((unsigned long long)0xffffffff << 32)) | (((unsigned long long)((undefined4)(uVar13 >> 0x20)) & 0xffffffff) << 32);
    if ((uVar13 & 0xffff) == 0) {
      uVar8 = uVar7;
      uVar5 = ((unsigned long long)(local_60) >> 32) & 0xffffffff;
    }
    else {
      uVar8 = 0xffffffff;
      uVar5 = 0x7fffffff;
    }
    lVar14 = CONCAT44(uVar5,uVar8);
    uStack_58 = uVar7;
    if (param_5 != 0) {
      puVar10 = (uint *)0x0;
      local_60 = (local_60 & ~((unsigned int)0xffffffff << 0)) | ((unsigned int)(0) & 0xffffffff);
      while( true ) {
        uVar7 = (uint)lVar14 | (uint)((ulonglong)lVar14 >> 0x20);
        if ((uVar7 == 0) || (0x10 < (int)puVar10)) break;
        lVar14 = fn_002ffaf8();
        param_2[(int)puVar10] = (char)uVar7 + '0';
        puVar10 = (uint *)((int)puVar10 + 1);
      }
      if (lVar14 != 0) {
        if ((int)local_60 != 0) goto LAB_002ffed0;
        param_4 = (uint *)&DAT_00000011;
        param_5 = 0;
        goto LAB_002ffda6;
      }
      puVar3 = puVar10;
      for (iVar6 = 0; puVar3 = (uint *)((int)puVar3 + -1), iVar6 < (int)puVar3; iVar6 = iVar6 + 1) {
        cVar1 = param_2[iVar6];
        param_2[iVar6] = param_2[(int)puVar3];
        param_2[(int)puVar3] = cVar1;
      }
      local_48 = (undefined1 *)((int)puVar10 + (-1 - (int)param_4));
      local_44 = puVar10;
LAB_002ffed0:
      param_2[(int)local_44] = '\0';
      local_24[2] = param_5;
      *local_24 = (uint)local_48;
      local_24[1] = (uint)local_44;
      return local_24 + 2;
    }
    iVar6 = 0;
    puVar10 = param_4;
    local_60 = uVar13;
    while (puVar10 = (uint *)((int)puVar10 + -1), -1 < (int)puVar10) {
      lVar14 = fn_002ffaf8();
      iVar6 = iVar6 + 0x30;
      param_2[(int)puVar10] = (char)iVar6;
    }
    bVar2 = true;
    if (lVar14 == 0) {
      if (*param_2 == '0') {
        bVar2 = false;
        puVar11 = puVar11 + -1;
      }
    }
    else {
      bVar2 = false;
      puVar11 = puVar11 + 1;
    }
    local_48 = puVar11;
    local_44 = param_4;
    if (bVar2) goto LAB_002ffed0;
  } while( true );
}


