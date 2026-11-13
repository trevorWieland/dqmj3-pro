#include "001ea19c_0021db00.h"



void fn_0021db00(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  uint in_fpscr;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  int local_58;
  int local_4c;
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [24];
  
  uVar1 = *(undefined4 *)(DAT_00897804 + 0xc);
  local_58 = fn_006b83e4();
  local_4c = 4 - local_58;
  iVar9 = 0;
  if (0 < local_58) {
    do {
      iVar6 = 0;
      iVar10 = iVar9 + local_4c;
      do {
        uVar2 = fn_00144df4(uVar1,iVar9);
        uVar2 = fn_0028aad0(uVar1,uVar2);
        fn_0020bbc4(auStack_40,uVar2);
        if (iVar6 == 0) {
          uVar3 = fn_006bf5bc(auStack_3c);
          uVar2 = fn_006c0028(auStack_3c);
          pcVar7 = (char *)&DAT_0021dce0;
        }
        else {
          uVar3 = fn_006bf5c8();
          uVar2 = fn_006c0114(auStack_3c);
          pcVar7 = "navimap_hp_mp_mp";
        }
        fVar13 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
        iVar4 = iVar6 + iVar10 * 2;
        fVar12 = (float)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
        piVar8 = (int *)(param_1 + iVar4 * 4 + 0x38);
        if (*piVar8 == -1) {
          local_78 = 0;
          local_7c = 0;
          local_80 = 0;
          local_68 = 0;
          local_74 = 0;
          local_70 = 0;
          local_6c = 0;
          local_64 = 0;
          fn_0017d96c(&local_80,0x20,0x1f,(char *)&DAT_0021d4fc,pcVar7,iVar4 / 2);
          iVar4 = fn_001c9000(*(undefined4 *)(param_1 + 4),pcVar7,&local_80,
                               *(undefined4 *)(param_1 + 0x10),"MonNameHPMP_00");
          *piVar8 = iVar4;
          piVar5 = (int *)fn_001c8a8c(*(undefined4 *)(param_1 + 4),iVar4);
          (**(code **)(*piVar5 + 0x50))(piVar5,0);
        }
        iVar4 = fn_001c8a8c(*(undefined4 *)(param_1 + 4),*piVar8);
        uVar2 = fn_00176970();
        fVar11 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
        *(float *)(iVar4 + 0x10) = (fVar11 * fVar13) / fVar12;
        iVar6 = iVar6 + 1;
      } while (iVar6 < 2);
      iVar9 = iVar9 + 1;
    } while (iVar9 < local_58);
  }
  return;
}



void fn_00216398(int *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  param_1[0xe5] = param_1[0xe5] + 1;
  iVar1 = fn_006f7a5c(DAT_008977e0);
  fVar4 = *(float *)(iVar1 + 0x1c) - (float)param_1[8];
  fVar2 = *(float *)(iVar1 + 0x20) - (float)param_1[9];
  fVar3 = *(float *)(iVar1 + 0x24) - (float)param_1[10];
  fVar3 = fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3;
  (**(code **)(*param_1 + 0x11c))(param_1);
  fVar3 = fVar3 - fVar2 * 40.0 * fVar2 * 40.0;
  iVar1 = fn_002aad7c(param_1);
  if (iVar1 == 3) {
    if ((int)fVar3 < 0x491c4000) goto LAB_00216450;
    fn_001da640(param_1);
    iVar1 = param_1[0xe5];
  }
  else if (iVar1 == 4) {
    if ((int)fVar3 < 0x49ef4200) goto LAB_00216450;
    fn_001da640(param_1);
    iVar1 = param_1[0xe5];
  }
  else {
    if ((int)fVar3 < 0x471c4000) {
LAB_00216450:
      fn_001da640(param_1);
      param_1[0xe5] = 0;
      return;
    }
    if (0x47fd1fff < (int)fVar3) {
      fn_001da640(param_1);
      if (param_1[0xe5] < 6) {
        return;
      }
      goto LAB_0021647c;
    }
    fn_001da640(param_1);
    iVar1 = param_1[0xe5];
  }
  if (iVar1 < 2) {
    return;
  }
LAB_0021647c:
  param_1[0xe5] = 0;
  return;
}



void fn_002052b4(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(char *)(param_1 + 0x68) == '\x01' || *(char *)(param_1 + 0x68) == '\x1b')
  goto switchD_002052e8_caseD_9;
  iVar1 = fn_00182964();
  if (iVar1 == 0) {
    if (param_2 != 7) {
      if (param_2 != 8) {
        if (param_2 == 0xb) {
          param_2 = 0;
          goto switchD_002052e8_caseD_9;
        }
        if (param_2 != 0x11) goto switchD_002052e8_caseD_9;
        goto switchD_002052e8_caseD_11;
      }
      goto switchD_002052e8_caseD_8;
    }
switchD_002052e8_caseD_7:
    param_2 = 4;
  }
  else {
    switch(param_2) {
    case 7:
      goto switchD_002052e8_caseD_7;
    case 8:
switchD_002052e8_caseD_8:
      param_2 = 5;
      break;
    case 0xb:
      param_2 = 0xc;
      break;
    case 0xc:
      param_2 = 0xd;
      break;
    case 0xd:
      param_2 = 0xe;
      break;
    case 0xe:
      param_2 = 0xf;
      break;
    case 0xf:
      param_2 = 0x10;
      break;
    case 0x10:
      param_2 = 0x11;
      break;
    case 0x11:
switchD_002052e8_caseD_11:
      param_2 = 6;
    }
  }
switchD_002052e8_caseD_9:
  fn_0017fd10(param_1,param_2,param_3);
  if (*(char *)(param_1 + 0x68) == '\x1b') {
    switch(param_2) {
    case 7:
    case 8:
    case 0xe:
      uVar3 = 3;
      break;
    default:
      uVar3 = 2;
      break;
    case 0xc:
    case 0xd:
      uVar3 = 1;
    }
    if (*(int *)(param_1 + 100) != -1) {
      uVar2 = fn_00156f24(DAT_008987bc);
      fn_002028d0(uVar2,uVar3);
      return;
    }
  }
  return;
}



void fn_001f5860(undefined4 param_1,uint param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uStack_160;
  undefined1 auStack_15c [4];
  undefined4 auStack_158 [58];
  char acStack_70 [88];
  
  fn_0017821c(acStack_70,&DAT_007c1e10,0x58);
  fn_0017821c(&uStack_160,&DAT_007c1e68,0xf0);
  if (0x1c < param_2) goto LAB_001f5938;
  if (param_2 - 3 < 3) {
    puVar2 = (undefined4 *)fn_001f74f8(*(undefined4 *)(DAT_008977e0 + 0x28),0x93);
    if (puVar2 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
      do {
        if (puVar3 == &DAT_00893ddc) goto LAB_001f58ec;
        puVar3 = (undefined4 *)*puVar3;
      } while (puVar3 != (undefined4 *)0x0);
    }
    puVar2 = (undefined4 *)0x0;
LAB_001f58ec:
    if (param_2 == 3) {
      uVar1 = 1;
    }
    else {
      if (param_2 != 4) {
        if (param_2 == 5) {
          *(undefined1 *)(puVar2 + 10) = 3;
        }
        goto LAB_001f5918;
      }
      uVar1 = 2;
    }
    *(undefined1 *)(puVar2 + 10) = uVar1;
  }
LAB_001f5918:
  iVar5 = param_2 * 3;
  fn_00696994(DAT_008977e0,acStack_70[iVar5],(int)acStack_70[iVar5 + 1],(int)acStack_70[iVar5 + 2])
  ;
LAB_001f5938:
  if (param_2 - 9 < 0x14) {
    puVar2 = (undefined4 *)fn_001f74f8(*(undefined4 *)(DAT_008977e0 + 0x28),0x8b);
    if (puVar2 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
      do {
        if (puVar3 == &DAT_00894f2c) goto LAB_001f5988;
        puVar3 = (undefined4 *)*puVar3;
      } while (puVar3 != (undefined4 *)0x0);
    }
    puVar2 = (undefined4 *)0x0;
LAB_001f5988:
    iVar5 = param_2 - 9;
    puVar2[3] = *(undefined4 *)(auStack_15c + iVar5 * 0xc + -4);
    *(undefined1 *)(puVar2 + 4) = auStack_15c[iVar5 * 0xc];
    uVar4 = fn_00163d44(auStack_158[iVar5 * 3]);
    puVar2[5] = uVar4;
  }
  return;
}



void fn_001f47c4(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint local_20;
  uint local_1c;
  int local_18;
  char local_14 [4];
  
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  iVar1 = fn_00227398();
  if (iVar1 != 0) {
    (**(code **)(*DAT_00897894 + 0x2c))(DAT_00897894,&local_20,4,0xffff);
    uVar4 = 0;
    if ((int)(local_1c - local_20) >> 2 != 0) {
      do {
        uVar5 = *(uint *)(local_20 + uVar4 * 4);
        uVar2 = fn_002281a4();
        if (((uVar5 <= uVar2) &&
            (iVar1 = (**(code **)(*DAT_00897894 + 0x38))
                               (DAT_00897894,local_14,*(undefined4 *)(local_20 + uVar4 * 4)),
            iVar1 != 0)) && (local_14[0] == '\0')) {
          (**(code **)(*DAT_00897894 + 0x3c))(DAT_00897894,*(undefined4 *)(local_20 + uVar4 * 4),1);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < (uint)((int)(local_1c - local_20) >> 2));
    }
    fn_00682a8c();
  }
  uVar3 = fn_002281a4();
  fn_00228c38(*(undefined4 *)(DAT_00897804 + 0x34),uVar3);
  uVar4 = local_20;
  if (local_1c < local_20) {
    do {
      uVar4 = uVar4 + 4;
    } while (uVar4 != local_1c);
  }
  fn_001008c4(local_20,(int)(local_18 - local_20) >> 2,0);
  return;
}



void fn_001f4610(void)

{
  fn_006f756c(DAT_008977e0);
  if (DAT_00891214 == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006bb0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_00891214 + 0x24))();
  return;
}



void fn_001ea19c(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_1c [16];
  
  uVar1 = fn_006f7a0c(DAT_008977e0);
  fn_00683fe8(uVar1,param_2);
  uVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
  iVar2 = fn_001da8fc(param_1,auStack_1c,param_1 + 0x9b,param_2,uVar1);
  param_1[0x4c] = iVar2;
  (**(code **)(*param_1 + 0x10))(param_1,auStack_1c);
  uVar1 = fn_006a99b0(param_1);
  fn_001e1c54(param_1,uVar1);
  *(undefined1 *)(param_1 + 0xfd) = 0;
  return;
}


