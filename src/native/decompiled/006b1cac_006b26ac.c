#include "006b1cac_006b26ac.h"



void fn_006b26ac(int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  if (*(char *)(param_1 + 0x194) == -1) {
    fn_006b51cc(*(undefined4 *)(DAT_00897804 + 0x1c));
    return;
  }
  if (*(int *)(param_1 + 400) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc));
    iVar2 = (int)*(short *)(iVar2 + 0x1c);
  }
  bVar3 = true;
  if (*(char *)(param_1 + 0x23f) != '\0') {
    bVar3 = 0.0 <= *(float *)(param_1 + 0x48);
  }
  if (((bVar3) && (iVar1 = fn_00242b6c(iVar2), iVar1 != 1)) &&
     ((iVar1 = fn_00242b6c(iVar2), iVar1 != 0 || (iVar2 = fn_00242b0c(iVar2), iVar2 != 0)))) {
    return;
  }
  fn_0025988c(*(undefined4 *)(param_1 + 400));
  fn_002cd59c();
  return;
}



void fn_006b2428(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_2 == 0) {
    uVar1 = fn_00129dc8(*(undefined4 *)(DAT_00897804 + 0x1c));
  }
  else {
    uVar1 = (uint)*(byte *)(param_1 + 0x238);
  }
  switch(uVar1) {
  case 0:
    uVar3 = 0;
    break;
  default:
    return;
  case 3:
  case 4:
  case 5:
  case 6:
    iVar2 = fn_006be78c(*(undefined4 *)(param_1 + 500));
    if (iVar2 == 0) {
      uVar3 = 1;
    }
    else {
      uVar3 = 2;
    }
    break;
  case 7:
  case 8:
  case 9:
  case 10:
    iVar2 = fn_006be78c(*(undefined4 *)(param_1 + 500));
    if (iVar2 == 0) {
      uVar3 = 3;
    }
    else {
      uVar3 = 4;
    }
  }
  fn_0021d834(DAT_008977e0,uVar3);
  return;
}



void fn_006b23e4(int param_1,undefined4 param_2)

{
  if (*(char *)(param_1 + 0x58) == '\0') {
    return;
  }
  fn_006a9c40(param_2,param_1);
  return;
}



void fn_006b2180(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  
  uVar1 = fn_006f75ac(DAT_008977e0);
  fn_00698fb8(DAT_008977e0,1);
  fn_0038ff40(uVar1,0,0,1);
  uVar2 = fn_006b20c8(param_1);
  fn_0016b4ec(uVar1,uVar2);
  uVar5 = fn_006be96c(*(undefined4 *)(param_1 + 500));
  if ((int)uVar5 == 0) {
    iVar3 = fn_006be738(*(undefined4 *)(param_1 + 500),(int)((ulonglong)uVar5 >> 0x20));
    if (iVar3 == 0) {
      pcVar4 = (char *)fn_00391fdc();
      if (pcVar4 == (char *)0x0) {
        pcVar4 = (char *)&DAT_006b2340;
      }
    }
    else {
      uVar5 = fn_006be890(*(undefined4 *)(param_1 + 500));
      if ((int)uVar5 == 0) {
        pcVar4 = (char *)&DAT_006b229c;
      }
      else {
        uVar5 = fn_006b8478(*(undefined4 *)(DAT_00897804 + 0xc),(int)((ulonglong)uVar5 >> 0x20));
        if ((int)uVar5 < 500) {
          uVar5 = fn_006be908(*(undefined4 *)(param_1 + 500),(int)((ulonglong)uVar5 >> 0x20));
          if ((int)uVar5 == 0) {
            iVar3 = fn_006be830(*(undefined4 *)(param_1 + 500),(int)((ulonglong)uVar5 >> 0x20));
            if (iVar3 == 0) {
              pcVar4 = (char *)&DAT_006b2320;
            }
            else {
              pcVar4 = "Partner%sRequestScoutSpecial";
            }
          }
          else {
            pcVar4 = (char *)&DAT_006b22e0;
          }
        }
        else {
          pcVar4 = (char *)&DAT_006b22c0;
        }
      }
    }
  }
  else {
    pcVar4 = (char *)&DAT_006b2280;
  }
  uVar2 = fn_006b2354(param_1,pcVar4);
  fn_0038fee8(uVar1,uVar2);
  return;
}



undefined4 fn_006b1f90(int param_1)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  
  switch(*(undefined1 *)(param_1 + 0x20e)) {
  case 2:
  case 3:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
    return 0;
  }
  if ((uint)((*(int *)(param_1 + 0x200) - *(int *)(param_1 + 0x1fc)) / 0x44) < 0x5b) {
    iVar2 = fn_006b1e5c(param_1);
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = *(int *)(param_1 + 0x200);
    if ((*(byte *)(iVar2 + -0x20) & 0xc) == 0) {
      for (; iVar2 != *(int *)(param_1 + 0x1fc); iVar2 = iVar2 + -0x44) {
        if ((*(byte *)(iVar2 + -0x20) & 0xc) != 0) {
          return 0;
        }
        fVar3 = *(float *)(iVar2 + -0x38);
        bVar1 = fVar3 != 0.0;
        if (bVar1) {
          fVar3 = *(float *)(iVar2 + -0x30);
        }
        if (bVar1 && (bVar1 && fVar3 != 0.0)) break;
      }
    }
    iVar2 = fn_006aa0fc(*(undefined4 *)(param_1 + 0x228),param_1);
    if ((iVar2 != 0) && (iVar2 = fn_006a9938(param_1), iVar2 != 0)) {
      return 0;
    }
  }
  return 1;
}



undefined4 fn_006b1e5c(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint unaff_r6;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  float in_s0;
  float fVar8;
  
  iVar1 = fn_006a9938();
  if (iVar1 == 0) {
    uVar2 = fn_006a99b0(param_1);
    bVar6 = uVar2 == 0;
    if (bVar6) {
      uVar2 = (uint)*(byte *)(param_1 + 0x23f);
    }
    if (bVar6 && uVar2 == 0) {
      return 1;
    }
  }
  iVar1 = *(int *)(param_1 + 0x1fc);
  iVar3 = *(int *)(param_1 + 0x200);
  if (0x5a < (uint)((iVar3 - iVar1) / 0x44)) {
    return 1;
  }
  iVar4 = 0;
  if (iVar1 != iVar3) {
    in_s0 = 0.0;
  }
  bVar6 = false;
  if (iVar1 != iVar3) {
    do {
      uVar2 = *(uint *)(iVar1 + 0x24);
      bVar7 = (uVar2 & 0xc) == 0;
      if (bVar7) {
        unaff_r6 = (uint)*(byte *)(param_1 + 0x23f);
      }
      bVar5 = bVar7 && unaff_r6 == 0;
      if (bVar7 && unaff_r6 == 0) {
        bVar5 = !bVar6;
      }
      else {
        bVar6 = true;
      }
      if (!bVar5) {
        bVar7 = (uVar2 & 8) == 0;
        if (bVar7) {
          unaff_r6 = (uint)*(byte *)(param_1 + 0x23f);
        }
        if (bVar7 && unaff_r6 == 0) {
          if ((uVar2 & 0xc) == 0) {
            fVar8 = *(float *)(iVar1 + 0xc);
            bVar7 = fVar8 != in_s0;
            if (bVar7) {
              fVar8 = *(float *)(iVar1 + 0x14);
            }
            if (bVar7 && (bVar7 && fVar8 != in_s0)) {
              return 1;
            }
          }
          else {
            iVar4 = iVar4 + 1;
            if (4 < iVar4) {
              return 1;
            }
          }
        }
        else {
          iVar4 = iVar4 + 1;
          if (0x27 < iVar4) {
            return 1;
          }
        }
      }
      iVar1 = iVar1 + 0x44;
      if (iVar1 == iVar3) {
        return 0;
      }
    } while( true );
  }
  return 0;
}



undefined4 fn_006b1d80(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (*(char *)(param_2 + 0xdc) == '\0') {
    if (*(char *)(param_1 + 0x58) == '\0') {
      return 0;
    }
    if ((*(char *)(param_1 + 0x23f) == '\0') &&
       (iVar1 = fn_006aa6e0(*(undefined4 *)(param_1 + 0x228)), iVar1 == 0)) {
      iVar1 = fn_006a9938(param_2);
      if ((iVar1 == 0) && (iVar1 = fn_006a99b0(param_2), iVar1 == 0)) {
        return 0;
      }
      if (((param_3 == 0) && (iVar1 = fn_006a9938(param_1), iVar1 == 0)) &&
         (iVar1 = fn_006a99b0(param_1), iVar1 == 0)) {
        return 0;
      }
      if ((*(char *)(param_1 + 0x58) != '\0') &&
         (iVar1 = fn_006a9c40(param_2,param_1,param_3,0), iVar1 != 0)) {
        return 1;
      }
    }
  }
  return 0;
}



undefined4 fn_006b1cac(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  float in_s0;
  int iVar4;
  float in_s1;
  int iVar5;
  int iVar6;
  int iVar7;
  
  fn_00688ff8(param_2);
  iVar4 = (int)((in_s0 - *(float *)(param_2 + 0x3c) * 0.5) + 160.0);
  iVar7 = (int)(in_s0 + *(float *)(param_2 + 0x3c) * 0.5 + 160.0);
  iVar6 = (int)(240.0 - ((in_s1 - *(float *)(param_2 + 0x40) * 0.5) + 120.0));
  iVar5 = (int)(240.0 - (in_s1 + *(float *)(param_2 + 0x40) * 0.5 + 120.0));
  fn_006f7a48(DAT_008977e0);
  iVar2 = fn_006a7e28();
  bVar3 = SBORROW4(iVar2,iVar4);
  iVar1 = iVar2 - iVar4;
  if (iVar4 <= iVar2) {
    bVar3 = SBORROW4(iVar7,iVar2);
    iVar1 = iVar7 - iVar2;
  }
  if (iVar1 < 0 == bVar3) {
    fn_006f7a48(DAT_008977e0);
    iVar2 = fn_006a7e3c();
    bVar3 = SBORROW4(iVar2,iVar5);
    iVar1 = iVar2 - iVar5;
    if (iVar5 <= iVar2) {
      bVar3 = SBORROW4(iVar6,iVar2);
      iVar1 = iVar6 - iVar2;
    }
    if (iVar1 < 0 == bVar3) {
      return 1;
    }
  }
  return 0;
}


