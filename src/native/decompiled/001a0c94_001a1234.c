#include "001a0c94_001a1234.h"



undefined4 fn_001a1234(int param_1,int param_2,uint *param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint extraout_r1;
  uint *puVar5;
  undefined4 uVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  
  uVar1 = *param_4;
  if (((uVar1 & 0x4000000) == 0) || (uVar3 = *param_5, (uVar3 & 0x4000000) == 0)) {
    if (param_2 == 0x2b) {
      puVar5 = param_3;
      if (uVar1 != 0x8000010) {
        puVar5 = (uint *)*param_5;
      }
      if (uVar1 == 0x8000010 || puVar5 == (uint *)0x8000010) {
        iVar4 = fn_001a15ec(param_1,param_4,param_5,param_3);
        if (iVar4 == 0) {
          return 0;
        }
        return 1;
      }
    }
    if (param_2 == 0x2b) {
      uVar6 = 0;
    }
    else if (param_2 < 0x2b) {
      if (param_2 == 0x25) {
        uVar6 = 5;
      }
      else {
        if (param_2 != 0x2a) {
code_r0x001a14c8:
                    /* WARNING: Subroutine does not return */
          fn_00146590();
        }
        uVar6 = 2;
      }
    }
    else if (param_2 == 0x2d) {
      uVar6 = 1;
    }
    else {
      if (param_2 != 0x2f) goto code_r0x001a14c8;
      uVar6 = 3;
    }
    if (((uVar1 & 0x2000000) != 0) && (*(int *)(param_4[1] + 0x18) != 0)) {
      iVar4 = *(int *)(param_1 + 0x30);
      *(int *)(param_1 + 0x30) = iVar4 + 1;
      fn_0019e864(*(int *)(param_1 + 0x18) + iVar4 * 8,param_4);
      iVar4 = *(int *)(param_1 + 0x30);
      *(int *)(param_1 + 0x30) = iVar4 + 1;
      fn_0019e864(*(int *)(param_1 + 0x18) + iVar4 * 8,param_5);
      iVar4 = fn_0018d4fc(param_1,param_4[1],uVar6,2,param_3);
      if (iVar4 != 0) {
        return 1;
      }
    }
    uVar6 = fn_00191f20(param_5);
    uVar2 = fn_00191f20(param_4);
    fn_0019813c(param_1,"arith op %c on between \'%s\' and \'%s\'",param_2,uVar2,uVar6);
    return 0;
  }
  if ((uVar1 != 0x5000002) || (uVar3 != 0x5000002)) {
    if (uVar1 == 0x5000002) {
      fVar8 = (float)VectorSignedToFloat(param_4[1],(byte)(in_fpscr >> 0x16) & 3);
    }
    else {
      fVar8 = (float)param_4[1];
    }
    if (uVar3 == 0x5000002) {
      fVar7 = (float)VectorSignedToFloat(param_5[1],(byte)(in_fpscr >> 0x16) & 3);
    }
    else {
      fVar7 = (float)param_5[1];
    }
    if (param_2 == 0x2b) {
      fVar8 = fVar8 + fVar7;
      goto LAB_001a13d0;
    }
    if (param_2 < 0x2b) {
      if (param_2 == 0x25) {
        fn_001a23a8();
        goto LAB_001a13d0;
      }
      if (param_2 == 0x2a) {
        fVar8 = fVar8 * fVar7;
        goto LAB_001a13d0;
      }
    }
    else {
      if (param_2 == 0x2d) {
        fVar8 = fVar8 - fVar7;
        goto LAB_001a13d0;
      }
      if (param_2 == 0x2f) {
        fVar8 = fVar8 / fVar7;
        goto LAB_001a13d0;
      }
    }
    fVar8 = 15.0;
LAB_001a13d0:
    if (((*param_3 & 0x8000000) != 0) &&
       (iVar4 = *(int *)(param_3[1] + 4) + -1, *(int *)(param_3[1] + 4) = iVar4, iVar4 == 0)) {
      (**(code **)(*(int *)param_3[1] + 8))();
    }
    param_3[1] = (uint)fVar8;
    *param_3 = 0x5000004;
    return 1;
  }
  uVar1 = param_4[1];
  uVar3 = param_5[1];
  if (param_2 == 0x2b) {
    uVar1 = uVar1 + uVar3;
    goto LAB_001a12c8;
  }
  if (param_2 < 0x2b) {
    if (param_2 == 0x25) {
      if (uVar3 == 0) {
        fn_0019813c(param_1,(char *)&DAT_001a15a8);
        return 0;
      }
      fn_00300f74();
      uVar1 = extraout_r1;
      goto LAB_001a12c8;
    }
    if (param_2 == 0x2a) {
      uVar1 = uVar1 * uVar3;
      goto LAB_001a12c8;
    }
  }
  else {
    if (param_2 == 0x2d) {
      uVar1 = uVar1 - uVar3;
      goto LAB_001a12c8;
    }
    if (param_2 == 0x2f) {
      if (uVar3 == 0) {
        fn_0019813c(param_1,(char *)&DAT_001a1594);
        return 0;
      }
      uVar1 = fn_00300f74();
      goto LAB_001a12c8;
    }
  }
  uVar1 = 0xdeadbeef;
LAB_001a12c8:
  if (((*param_3 & 0x8000000) != 0) &&
     (iVar4 = *(int *)(param_3[1] + 4) + -1, *(int *)(param_3[1] + 4) = iVar4, iVar4 == 0)) {
    (**(code **)(*(int *)param_3[1] + 8))();
  }
  param_3[1] = uVar1;
  *param_3 = 0x5000002;
  return 1;
}



void fn_001a1010(int param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int *local_50;
  int *local_4c;
  uint local_48;
  int *local_44;
  uint local_40;
  int *local_3c;
  int iStack_34;
  undefined4 local_30;
  uint uStack_2c;
  undefined4 local_28;
  
  iStack_34 = param_1;
  local_30 = param_2;
  uStack_2c = param_3;
  local_28 = param_4;
  local_44 = (int *)fn_0019ba68(*(undefined4 *)(param_1 + 0x8c),&DAT_001a11f0,0xffffffff);
  local_48 = 0x8000010;
  if (local_44 == (int *)0x0) {
code_r0x001a116c:
                    /* WARNING: Subroutine does not return */
    fn_00146590();
  }
  iVar5 = 0;
  uVar4 = 0;
  local_44[1] = local_44[1] + 1;
  do {
    uVar1 = 1 << (uVar4 & 0xff);
    if ((param_3 & uVar1) != 0) {
      if (0 < iVar5) {
        local_3c = (int *)fn_0019ba68(*(undefined4 *)(param_1 + 0x8c),&DAT_001a11f8,0xffffffff);
        local_40 = 0x8000010;
        if (local_3c == (int *)0x0) goto code_r0x001a116c;
        local_3c[1] = local_3c[1] + 1;
        fn_001a15ec(param_1,&local_48,&local_40);
        if (((local_40 & 0x8000000) != 0) &&
           (iVar2 = local_3c[1], local_3c[1] = iVar2 + -1, iVar2 + -1 == 0)) {
          (**(code **)(*local_3c + 8))();
        }
      }
      iVar5 = iVar5 + 1;
      uVar3 = fn_00191f28(uVar1);
      local_4c = (int *)fn_0019ba68(*(undefined4 *)(param_1 + 0x8c),uVar3,0xffffffff);
      local_50 = (int *)0x8000010;
      if (local_4c == (int *)0x0) goto code_r0x001a116c;
      local_4c[1] = local_4c[1] + 1;
      fn_001a15ec(param_1,&local_48,&local_50);
      if ((((uint)local_50 & 0x8000000) != 0) &&
         (iVar2 = local_4c[1], local_4c[1] = iVar2 + -1, iVar2 + -1 == 0)) {
        (**(code **)(*local_4c + 8))();
      }
    }
    uVar4 = uVar4 + 1;
    if (0xf < (int)uVar4) {
      uVar3 = fn_00191f28(local_28);
      local_50 = local_44 + 7;
      fn_0019813c(param_1,"parameter %d has an invalid type \'%s\' ; expected: \'%s\'",local_30,
                   uVar3);
      if (((local_48 & 0x8000000) != 0) &&
         (iVar5 = local_44[1], local_44[1] = iVar5 + -1, iVar5 + -1 == 0)) {
        (**(code **)(*local_44 + 8))();
      }
      return;
    }
  } while( true );
}



void fn_001a0f20(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)fn_00197fe0();
  if (piVar1 != (int *)0x0) {
    piVar1[1] = piVar1[1] + 1;
    piVar2 = (int *)fn_00197fe0(param_1,param_3);
    if (piVar2 != (int *)0x0) {
      piVar2[1] = piVar2[1] + 1;
      fn_0019813c(param_1,"comparsion between \'%.50s\' and \'%.50s\'",piVar1 + 7,piVar2 + 7);
      iVar3 = piVar2[1];
      piVar2[1] = iVar3 + -1;
      if (iVar3 + -1 == 0) {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      iVar3 = piVar1[1];
      piVar1[1] = iVar3 + -1;
      if (iVar3 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x001a0fdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*piVar1 + 8))(piVar1);
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  fn_00146590();
}



void fn_001a0d30(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  uint local_30;
  int *local_2c;
  uint local_28;
  int *local_24;
  
  local_28 = 0x1000001;
  local_24 = (int *)0x0;
  iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x84) + 0xc) + 0x24);
  iVar1 = *(int *)(param_1 + 0x30);
  *(int *)(param_1 + 0x30) = iVar1 + 1;
  fn_0019e864(*(int *)(param_1 + 0x18) + iVar1 * 8,param_1 + 0x38);
  local_30 = 0x5000002;
  iVar1 = *(int *)(param_1 + 0x30);
  *(int *)(param_1 + 0x30) = iVar1 + 1;
  local_2c = param_2;
  fn_0019e864(*(int *)(param_1 + 0x18) + iVar1 * 8,&local_30);
  if (((local_30 & 0x8000000) != 0) &&
     (iVar1 = local_2c[1], local_2c[1] = iVar1 + -1, iVar1 + -1 == 0)) {
    (**(code **)(*local_2c + 8))();
  }
  iVar1 = *(int *)(param_1 + 0x30);
  *(int *)(param_1 + 0x30) = iVar1 + 1;
  fn_0019e864(*(int *)(param_1 + 0x18) + iVar1 * 8,iVar2 + 0xc);
  if (param_3 == (int *)0x0) {
    param_3 = (int *)fn_001a3740(iVar2,**(undefined4 **)(param_1 + 0x84));
  }
  local_30 = 0x5000002;
  iVar1 = *(int *)(param_1 + 0x30);
  *(int *)(param_1 + 0x30) = iVar1 + 1;
  local_2c = param_3;
  fn_0019e864(*(int *)(param_1 + 0x18) + iVar1 * 8,&local_30);
  if (((local_30 & 0x8000000) != 0) &&
     (iVar1 = local_2c[1], local_2c[1] = iVar1 + -1, iVar1 + -1 == 0)) {
    (**(code **)(*local_2c + 8))();
  }
  iVar1 = *(int *)(param_1 + 0x30);
  *(int *)(param_1 + 0x30) = iVar1 + 1;
  fn_0019e864(*(int *)(param_1 + 0x18) + iVar1 * 8,iVar2 + 0x14);
  fn_0017ffac(param_1,param_1 + 0x50,5,*(int *)(param_1 + 0x30) + -5,&local_28,0);
  iVar1 = 0;
  do {
    iVar2 = *(int *)(param_1 + 0x30) + -1;
    *(int *)(param_1 + 0x30) = iVar2;
    fn_0019e864(*(int *)(param_1 + 0x18) + iVar2 * 8,&DAT_008c06e8);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 5);
  if (((local_28 & 0x8000000) != 0) &&
     (iVar1 = local_24[1], local_24[1] = iVar1 + -1, iVar1 + -1 == 0)) {
    (**(code **)(*local_24 + 8))();
  }
  return;
}



void fn_001a0cc0(int param_1,ushort *param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (*param_2 != 0) {
    do {
      iVar2 = *(int *)(param_1 + 0x28) + -1;
      *(int *)(param_1 + 0x28) = iVar2;
      puVar1 = (uint *)(*(int *)(param_1 + 0x24) + iVar2 * 8);
      if ((*puVar1 & 0x8000000) != 0) {
        iVar2 = *(int *)(puVar1[1] + 4) + -1;
        *(int *)(puVar1[1] + 4) = iVar2;
        if (iVar2 == 0) {
          (**(code **)(*(int *)puVar1[1] + 8))();
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)*param_2);
  }
  return;
}



void fn_001a0c94(int param_1,undefined4 param_2)

{
  if (-1 < *(int *)(param_1 + 0x2c)) {
    fn_0016a43c(param_2);
    *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  }
  return;
}


