#include "0029df74_0029eac4.h"



undefined4 fn_0029eac4(uint param_1,uint param_2)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = 2 < param_1;
  if (param_1 != 3) {
    param_2 = param_1 - 6;
    bVar1 = 6 < param_2;
  }
  if (bVar1 && (param_1 != 3 && param_2 != 7)) {
    bVar2 = param_1 != 0x10;
    bVar1 = param_1 - 0x10 == 1;
    if (1 < param_1 - 0x10) {
      bVar2 = 5 < param_1 - 0x54;
      bVar1 = param_1 - 0x54 == 6;
    }
    if ((bVar2 && !bVar1) && (param_1 != 0x19)) {
      if ((int)param_1 < 0x1a) {
        if ((param_1 != 0x15 && param_1 != 0x16) && (param_1 != 0x17 && param_1 != 0x18)) {
          return 0;
        }
      }
      else if ((param_1 != 0x52 && param_1 != 0x5b) && param_1 != 0x5f) {
        return 0;
      }
    }
  }
  return 1;
}



void fn_0029e7e0(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  float in_s16;
  float fVar11;
  ulonglong uVar10;
  float fVar12;
  
  uVar2 = fn_00182994(DAT_008977e4);
  fn_00149880(uVar2,1);
  uVar2 = fn_00182994(DAT_008977e4);
  uVar1 = fn_001659c0(uVar2,0);
  uVar2 = fn_00182994(DAT_008977e4);
  uVar3 = fn_001754ac(uVar2,uVar1);
  uVar2 = fn_00182994(DAT_008977e4);
  iVar4 = fn_001648dc(uVar2,param_2);
  fVar11 = 180.0;
  fVar12 = 0.0;
  if (uVar3 != 0) {
    in_s16 = fVar11;
  }
  uVar8 = 0x10;
  uVar9 = 0x14;
  if (uVar3 == 0) {
    uVar8 = 0x14;
    uVar9 = 0x18;
    in_s16 = fVar12;
  }
  iVar7 = 0;
  iVar5 = fn_0016c0d0(uVar3);
  if (iVar4 == 0) {
    uVar2 = fn_00182994(DAT_008977e4);
    fn_00149880(uVar2,1);
    if (uVar3 != 0) {
      in_s16 = fVar11;
    }
    uVar8 = 0x10;
    uVar9 = 0x14;
    if (uVar3 == 0) {
      uVar8 = 0x14;
      uVar9 = 0x18;
      in_s16 = fVar12;
    }
    iVar5 = 0;
    iVar4 = fn_0016c0d0(uVar3);
    if (uVar8 < uVar9) {
      uVar10 = (ulonglong)(uint)(int)in_s16;
      do {
        uVar2 = fn_00182994(DAT_008977e4);
        iVar7 = fn_00174a8c(uVar2,uVar8 & 0xff);
        if (iVar7 != 2) {
          iVar7 = iVar5;
          if (uVar3 == 0) {
            iVar7 = iVar5 + 4;
          }
          fn_0029e6fc(uVar8,(&PTR_s_move_001_S01S4target_007bb730)[iVar4 * 8 + iVar7],(int)uVar10);
          iVar5 = iVar5 + 1;
        }
        uVar8 = (uint)(char)((char)uVar8 + '\x01');
      } while ((int)uVar8 < (int)uVar9);
    }
    if (param_1 != 0) {
      uVar2 = fn_00182994(DAT_008977e4);
      fn_001493dc(uVar2,(&PTR_s_camera_000_ALLYS4_007bc130)[iVar4 * 2 + (uVar3 ^ 1)],
                   (&PTR_s_camtgt_000_ALLYS4_007bc170)[iVar4 * 2 + (uVar3 ^ 1)]);
      return;
    }
  }
  else {
    uVar2 = fn_00182994(DAT_008977e4);
    uVar2 = fn_001659c0(uVar2,(int)(char)param_2,0);
    if (uVar8 < uVar9) {
      uVar10 = (ulonglong)(uint)(int)in_s16;
      do {
        uVar6 = fn_00182994(DAT_008977e4);
        iVar4 = fn_00174a8c(uVar6,uVar8 & 0xff);
        if (iVar4 != 2) {
          iVar4 = iVar7;
          if (uVar3 == 0) {
            iVar4 = iVar7 + 4;
          }
          fn_002a14f8(uVar8,(&PTR_s_move_001_S01S4target_007bb730)[iVar5 * 8 + iVar4],
                       (&PTR_s_camera_101_ALLYS4_00_007bb830)[iVar5 * 8 + iVar4],
                       (&PTR_s_camtgt_101_ALLYS4_00_007bbb30)[iVar5 * 8 + iVar4],(int)uVar10,param_1
                       ,uVar2);
          iVar7 = iVar7 + 1;
        }
        uVar8 = (uint)(char)((char)uVar8 + '\x01');
      } while ((int)uVar8 < (int)uVar9);
    }
  }
  return;
}



void fn_0029e6fc(uint param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint in_fpscr;
  
  uVar1 = fn_00182994(DAT_008977e4);
  iVar2 = fn_00174a8c(uVar1,param_1 & 0xff);
  if (param_1 != 0 && iVar2 != 2) {
    uVar1 = fn_00182994(DAT_008977e4);
    fn_0015af10(uVar1,param_1 & 0xff,param_2);
    uVar1 = fn_00182994(DAT_008977e4);
    fn_001749e8(uVar1,param_1 & 0xff,1);
    uVar1 = fn_00182994(DAT_008977e4);
    fn_00182c40(uVar1,param_1 & 0xff,0);
    if (param_3 != 0) {
      uVar1 = fn_00182994(DAT_008977e4);
      VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
      fn_0017554c(uVar1,param_1 & 0xff);
    }
    if (iVar2 == 0) {
      uVar1 = fn_00182994(DAT_008977e4);
      fn_001757a4(uVar1,param_1 & 0xff);
      return;
    }
    if (iVar2 == 1) {
      uVar1 = fn_00182994(DAT_008977e4);
      fn_001757a4(uVar1,param_1 & 0xff);
      return;
    }
  }
  return;
}



undefined4 fn_0029e540(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  
  if (param_1 - 1U < 0xb) {
    uVar1 = 0x1e;
  }
  else {
    uVar2 = param_1 - 0x10;
    bVar4 = 0xc < uVar2;
    bVar3 = uVar2 == 0xd;
    if (0xd < uVar2) {
      bVar4 = 2 < param_1 - 0x3aU;
      bVar3 = param_1 - 0x3aU == 3;
    }
    if (!bVar4 || bVar3) {
      uVar1 = 0x2d;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



int fn_0029e4e0(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  uVar1 = fn_00182994(DAT_008977e4);
  iVar2 = fn_0016561c(uVar1,(int)(char)param_1);
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      uVar1 = fn_00182994(DAT_008977e4);
      iVar3 = fn_00174a74(uVar1,param_1,iVar4);
      if (iVar5 < iVar3) {
        iVar5 = iVar3;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return iVar5;
}



undefined4 fn_0029e4bc(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 - 1U < 0xd) {
    uVar1 = 0x1e;
  }
  else if (param_1 - 0x12U < 0x41) {
    uVar1 = 0x2d;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



char * fn_0029e218(char param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  
  fn_00182994(DAT_008977e4);
  cVar1 = fn_006ba994();
  if (7 < (int)cVar1 - 0x10U) {
    uVar2 = fn_00182994(DAT_008977e4);
    cVar1 = fn_001657c8(uVar2,(int)param_1);
  }
  uVar2 = fn_00182994(DAT_008977e4);
  iVar3 = fn_001754ac(uVar2,cVar1);
  if (iVar3 == 0) {
    pcVar4 = "SE_BTL_006";
  }
  else {
    pcVar4 = "SE_BTL_003";
  }
  return pcVar4;
}



void fn_0029df74(char param_1,char param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined *puVar8;
  
  uVar2 = fn_00182994(DAT_008977e4);
  fn_00149880(uVar2,1);
  uVar2 = fn_00182994(DAT_008977e4);
  iVar7 = (int)param_1;
  uVar1 = fn_001659c0(uVar2,iVar7,(int)param_2);
  uVar2 = fn_00182994(DAT_008977e4);
  uVar3 = fn_001754ac(uVar2,uVar1);
  uVar2 = fn_00182994(DAT_008977e4);
  fn_001754ac(uVar2,uVar1);
  iVar4 = fn_0016c0d0();
  uVar2 = fn_00182994(DAT_008977e4);
  iVar5 = fn_00174c80(uVar2,iVar7,0);
  if (iVar5 != 0) {
    uVar2 = fn_00182994(DAT_008977e4);
    fn_00149880(uVar2,1);
    puVar8 = (&PTR_s_pos_301_ALLYEffectS_007bc1b0)[iVar4 * 2 + (uVar3 ^ 1)];
    uVar2 = fn_00182994(DAT_008977e4);
    uVar2 = fn_00149844(uVar2,iVar5,puVar8);
    piVar6 = (int *)fn_00182994(DAT_008977e4);
    switch(iVar4) {
    default:
      break;
    case 4:
    case 5:
    case 6:
      break;
    case 7:
    }
    (**(code **)(*piVar6 + 0x54))(piVar6,uVar2);
  }
  uVar2 = fn_00182994(DAT_008977e4);
  iVar5 = fn_00174c80(uVar2,iVar7,1);
  if (iVar5 == 0) {
    return;
  }
  uVar2 = fn_00182994(DAT_008977e4);
  fn_00149880(uVar2,1);
  puVar8 = (&PTR_s_pos_301_ALLYEffectS_007bc1b0)[iVar4 * 2 + (uVar3 ^ 1)];
  uVar2 = fn_00182994(DAT_008977e4);
  uVar2 = fn_00149844(uVar2,iVar5,puVar8);
  piVar6 = (int *)fn_00182994(DAT_008977e4);
  switch(iVar4) {
  case 4:
  case 5:
  case 6:
    break;
  case 7:
  }
                    /* WARNING: Could not recover jumptable at 0x0029e140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar6 + 0x54))(piVar6,uVar2);
  return;
}


