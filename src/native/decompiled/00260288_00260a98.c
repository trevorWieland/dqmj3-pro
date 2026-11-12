#include "00260288_00260a98.h"



void fn_00260a98(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar11;
  longlong lVar10;
  float fVar12;
  undefined8 in_d8;
  undefined8 in_d9;
  
  if (*(char *)(param_1 + 0x80) != -1) {
    fn_001cc890(param_1);
    if (*(char *)(param_1 + 0x80) == '\0') {
      iVar5 = fn_0068cafc(DAT_008977e8);
      fVar8 = (float)VectorSignedToFloat(*(undefined4 *)(iVar5 + 0x16c),(byte)(in_fpscr >> 0x16) & 3
                                        );
      fVar7 = (float)VectorSignedToFloat(*(int *)(param_1 + 0x7c) + 1,(byte)(in_fpscr >> 0x16) & 3);
      *(float *)(param_1 + 0x48) =
           ((*(float *)(iVar5 + 0x174) - *(float *)(iVar5 + 0x170)) * fVar7) / fVar8 +
           *(float *)(iVar5 + 0x170);
      uVar4 = *(undefined4 *)(param_1 + 0x54);
      uVar11 = *(uint *)(param_1 + 0xc);
      uVar6 = fn_0068c7e8(DAT_008977e8);
      fn_0023e574(uVar6,uVar4,param_3,param_4,in_d8,in_d9,unaff_r4,unaff_r5,unaff_r6);
      lVar10 = (ulonglong)uVar11 << 0x20;
      uVar6 = fn_0068c7e8(DAT_008977e8);
      fn_0023e6a8(uVar6,uVar4);
      fn_0014481c(DAT_008977e8);
      iVar1 = fn_006b6bc4();
      if (0 < iVar1) {
        lVar10 = 0;
      }
      uVar11 = 0;
      if (0 < iVar1) {
        do {
          uVar4 = fn_0014481c(DAT_008977e8);
          iVar2 = fn_006b71a8(uVar4,uVar11 & 0xff);
          iVar3 = fn_0026005c(param_1,iVar2);
          if (iVar3 == 0) {
            fVar8 = *(float *)(iVar2 + 8) - *(float *)(param_1 + 8);
            fVar7 = *(float *)(iVar2 + 0x10) - *(float *)(param_1 + 0x10);
            fVar9 = *(float *)(param_1 + 0x48) + *(float *)(iVar2 + 0x48);
            fVar12 = (float)((ulonglong)lVar10 >> 0x20);
            lVar10 = CONCAT44(fVar12,*(float *)(iVar2 + 0xc) - *(float *)(param_1 + 0xc));
            if (fVar8 * fVar8 + fVar12 * fVar12 + fVar7 * fVar7 <= fVar9 * fVar9) {
              iVar3 = fn_0068cafc(DAT_008977e8);
              if (((float)lVar10 <=
                   (*(float *)(iVar3 + 0x178) - *(float *)(iVar3 + 0x17c)) +
                   *(float *)(iVar2 + 0x48)) &&
                 (*(float *)(iVar3 + 0x17c) - *(float *)(iVar2 + 0x48) <= (float)lVar10)) {
                fn_0069ef78(iVar2,param_1);
              }
            }
          }
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < iVar1);
      }
      iVar1 = *(int *)(param_1 + 0x78) + 1;
      *(int *)(param_1 + 0x78) = iVar1;
      if (*(int *)(iVar5 + 0x168) <= iVar1) {
        *(undefined1 *)(param_1 + 0x80) = 1;
        fn_002605fc(param_1,0);
        *(undefined4 *)(param_1 + 0x74) = 0x1b;
        *(undefined4 *)(param_1 + 0x78) = 0;
        return;
      }
      if (*(int *)(param_1 + 0x7c) < *(int *)(iVar5 + 0x16c)) {
        *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
      }
      return;
    }
    if (*(char *)(param_1 + 0x80) == '\x01') {
      uVar4 = *(undefined4 *)(param_1 + 0x54);
      iVar5 = *(int *)(param_1 + 0x74) + -1;
      *(int *)(param_1 + 0x74) = iVar5;
      if (iVar5 < 0) {
        uVar6 = fn_0068c7e8(DAT_008977e8);
        iVar5 = fn_006b4cd0(uVar6,uVar4);
        if (iVar5 != 0) {
          fn_00260088(param_1);
          *(undefined1 *)(param_1 + 0x80) = 0xff;
          uVar4 = fn_0014481c(DAT_008977e8);
          fn_002625d0(uVar4,param_1);
          return;
        }
      }
    }
  }
  return;
}



undefined4 fn_002609ac(int *param_1,int param_2)

{
  int iVar1;
  
  param_1[0x16] = param_2;
  iVar1 = fn_0068cafc(DAT_008977e8);
  iVar1 = *(int *)(iVar1 + 0x170);
  param_1[0x12] = iVar1;
  param_1[0xf] = 0;
  param_1[0x10] = iVar1;
  param_1[0x11] = 0;
  (**(code **)(*param_1 + 0x24))(param_1,param_2 + 0x20);
  fn_00260538(param_1,param_2);
  *(undefined1 *)(param_1 + 0x20) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  fn_0026009c(param_1,param_2,1);
  iVar1 = (**(code **)(*(int *)param_1[0x16] + 0x98))();
  if (iVar1 == 0) {
    fn_00260640(param_1,0xa045);
  }
  else {
    fn_00260640(param_1,0xa03a);
  }
  return 1;
}



void fn_00260750(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_0081de28;
  if (*(char *)(param_1 + 0x19) != '\0') {
    *(undefined1 *)(param_1 + 0x19) = 0;
    param_1[0x18] = 0;
  }
  uVar1 = param_1[0x1a];
  uVar2 = uVar1;
  if ((uint)param_1[0x1b] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[0x1b]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x1c] - uVar1) >> 2,0);
  fn_001cccdc(param_1);
  return;
}



void fn_00260690(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_001ccc2c();
  *puVar1 = &PTR_FUN_0081de28;
  puVar1[0x16] = 0;
  puVar1[0x15] = 0xffffffff;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  *(undefined1 *)(puVar1 + 0x19) = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0xffffffff;
  return;
}



void fn_00260664(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x48))(param_1,param_2,0);
  param_1[0x15] = iVar1;
  return;
}



void fn_00260640(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x44))(param_1,param_2,0);
  param_1[0x15] = iVar1;
  return;
}



void fn_002605fc(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (-1 < *(int *)(param_1 + 0x54)) {
    uVar1 = fn_0068c7e8(DAT_008977e8);
    fn_0023e640(uVar1,*(undefined4 *)(param_1 + 0x54),0);
    if (param_2 != 0) {
      *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
    }
  }
  return;
}



void fn_00260538(int *param_1,int param_2)

{
  float in_s0;
  float in_s1;
  float fVar1;
  float fVar2;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  
  fVar1 = 0.0;
  fVar2 = 1.0;
  local_30 = 0.0;
  local_2c = 1.0;
  fn_005f2d30(&local_30);
  fVar2 = fVar2 / SQRT(local_30 * local_30 + fVar1 * fVar1 + local_2c * local_2c);
  local_28 = *(float *)(param_2 + 8) + local_30 * fVar2 * in_s0;
  local_24 = *(float *)(param_2 + 0xc) + in_s1 + fVar1 * fVar2 * in_s0;
  local_20 = *(float *)(param_2 + 0x10) + local_2c * fVar2 * in_s0;
  (**(code **)(*param_1 + 0x18))(param_1,&local_28);
  return;
}



undefined4 fn_002603c0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int in_r12;
  float in_s0;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  fn_0014481c(DAT_008977e8);
  iVar1 = fn_006b6bc4();
  uVar7 = 0;
  if (0 < iVar1) {
    do {
      uVar2 = fn_0014481c(DAT_008977e8);
      iVar3 = fn_006b71a8(uVar2,uVar7 & 0xff);
      piVar5 = *(int **)(param_1 + 0x68);
      piVar6 = *(int **)(param_1 + 0x6c);
      while( true ) {
        if (piVar5 != piVar6) {
          in_r12 = *piVar5;
        }
        if (piVar5 == piVar6 || in_r12 == iVar3) break;
        piVar5 = piVar5 + 1;
      }
      if ((piVar6 == piVar5) && (iVar4 = fn_006a8a84(param_1,iVar3 + 0x3c,iVar3 + 8,1), iVar4 != 0)
         ) {
        if (iVar3 != 0) {
          if (*(char *)(param_1 + 100) == '\0') {
            iVar1 = fn_0069fb88(iVar3);
            if (iVar1 == 0) {
              return 0;
            }
            *(int *)(param_1 + 0x60) = iVar3;
            *(undefined1 *)(param_1 + 100) = 1;
            return 0;
          }
          goto LAB_00260488;
        }
        break;
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < iVar1);
  }
  if (*(char *)(param_1 + 100) != '\0') {
LAB_00260488:
    iVar1 = *(int *)(param_1 + 0x60);
    local_48 = *(undefined4 *)(param_1 + 8);
    uStack_44 = *(undefined4 *)(param_1 + 0xc);
    uStack_40 = *(undefined4 *)(param_1 + 0x10);
    iVar3 = *(int *)(param_1 + 0x60);
    local_38 = *(undefined4 *)(iVar3 + 8);
    uStack_34 = *(undefined4 *)(iVar3 + 0xc);
    uStack_30 = *(undefined4 *)(iVar3 + 0x10);
    fn_005f1940(&local_48,&local_38);
    iVar3 = fn_006b6668(param_1,iVar1 + 0x3c,&local_38);
    if (iVar3 != 0) {
      *(undefined1 *)(param_1 + 100) = 0;
      return *(undefined4 *)(param_1 + 0x60);
    }
    if ((*(float *)(param_1 + 0x48) + *(float *)(iVar1 + 0x48) < in_s0) &&
       (*(char *)(param_1 + 100) != '\0')) {
      *(undefined1 *)(param_1 + 100) = 0;
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
  }
  return 0;
}



void fn_00260288(int *param_1)

{
  float in_s0;
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  float local_24;
  int iStack_20;
  
  local_28 = param_1[8];
  local_24 = (float)param_1[9];
  iStack_20 = param_1[10];
  uVar3 = 0;
  if (param_1[0x17] != 0) {
    fVar1 = *(float *)(param_1[0x17] + 8) - (float)param_1[2];
    fn_00525bd0();
    fVar1 = fVar1 * 0.024543693;
    fVar2 = fVar1 - local_24;
    fn_005df8f8();
    if (in_s0 < fVar2) {
      fVar1 = local_24 + in_s0;
    }
    else if (fVar2 < -in_s0) {
      fVar1 = local_24 - in_s0;
    }
    fn_005df8f8();
    local_24 = fVar1;
  }
  local_2c = 0x3f800000;
  local_30 = uVar3;
  fn_005f2d30(&local_30);
  (**(code **)(*param_1 + 0x24))(param_1,&local_28);
  return;
}


