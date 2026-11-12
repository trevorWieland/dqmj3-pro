#include "0016ba84_0016c2b8.h"



int fn_0016c2b8(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = fn_00182994(DAT_008977e4);
  iVar2 = fn_00174a8c(uVar1,param_1 & 0xff);
  if (iVar2 == 2) {
    iVar2 = -1;
  }
  else {
    uVar1 = fn_00182994(DAT_008977e4);
    iVar2 = fn_001754ac(uVar1,param_1 & 0xff);
    uVar4 = 0x10;
    uVar5 = 0x14;
    if (iVar2 == 0) {
      uVar4 = 0x14;
      uVar5 = 0x18;
    }
    iVar2 = 0;
    if (uVar4 < uVar5) {
      do {
        uVar1 = fn_00182994(DAT_008977e4);
        iVar3 = fn_00174a8c(uVar1,uVar4 & 0xff);
        if (iVar3 != 2) {
          if (uVar4 == param_1) break;
          iVar2 = iVar2 + 1;
        }
        uVar4 = (uint)(char)((char)uVar4 + '\x01');
      } while ((int)uVar4 < (int)uVar5);
    }
  }
  return iVar2;
}



undefined4 fn_0016c1f4(undefined1 param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if (param_2 != 0) {
    uVar3 = fn_00182994(DAT_008977e4);
    uVar3 = fn_00179990(uVar3,param_2,param_1);
    uVar1 = fn_00182994(DAT_008977e4);
    uVar1 = fn_00174bac(uVar1,param_1);
    switch(uVar1) {
    case 0:
      break;
    case 1:
      break;
    case 3:
      break;
    case 4:
    }
    piVar2 = (int *)fn_00182994(DAT_008977e4);
    (**(code **)(*piVar2 + 0x54))(piVar2,uVar3);
  }
  return uVar3;
}



undefined1 fn_0016c0d0(int param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined1 uVar11;
  
  iVar9 = 0;
  uVar8 = 0x10;
  iVar10 = 0x14;
  bVar1 = false;
  bVar2 = false;
  bVar3 = false;
  if (param_1 == 0) {
    uVar8 = 0x14;
    iVar10 = 0x18;
  }
  cVar4 = '\0';
  do {
    uVar6 = fn_00182994(DAT_008977e4);
    iVar7 = fn_00174a8c(uVar6,uVar8 & 0xff);
    if (iVar7 != 2) {
      iVar9 = iVar9 + 1;
      uVar6 = fn_00182994(DAT_008977e4);
      cVar5 = fn_00174bac(uVar6,uVar8 & 0xff);
      if (cVar5 == '\0') {
        bVar1 = true;
      }
      else if (cVar5 == '\x03') {
        cVar5 = '\x03';
        if (bVar1) {
          cVar5 = '\x01';
        }
        bVar2 = true;
        if (bVar1) {
          cVar4 = cVar5;
        }
      }
      else if (cVar5 == '\x04') {
        bVar3 = true;
      }
    }
    uVar8 = uVar8 + 1;
  } while ((int)uVar8 < iVar10);
  uVar11 = 0;
  if ((iVar9 != 4) && (uVar11 = iVar9 == 3, !(bool)uVar11)) {
    if (iVar9 == 2) {
      if (bVar2) {
        if (cVar4 == '\0') {
          uVar11 = 5;
        }
        else {
          uVar11 = 4;
        }
      }
      else {
        uVar11 = 2;
      }
    }
    else if (iVar9 == 1) {
      if (bVar2) {
        if (!bVar3) {
          uVar11 = 6;
        }
      }
      else if (bVar3) {
        uVar11 = 7;
      }
      else {
        uVar11 = 3;
      }
    }
  }
  return uVar11;
}



undefined4 fn_0016bb8c(int param_1,undefined4 param_2,undefined4 param_3,code *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c [5];
  int local_38;
  int local_34;
  int local_30 [3];
  
  local_4c[0] = *(int *)(param_1 + 0x34);
  local_50 = *(int *)(param_1 + 0x3c);
  local_54 = *(int *)(param_1 + 0x4c);
  local_58 = *(int *)(param_1 + 0x24);
  local_38 = *(int *)(param_1 + 0x2c);
  local_34 = *(int *)(param_1 + 0x5c);
  local_5c = *(int *)(param_1 + 0x44);
  local_30[0] = *(int *)(param_1 + 0x54);
  local_4c[1] = 0x50415254;
  iVar1 = (*param_4)(param_3,local_4c + 1,4);
  if (iVar1 == 4) {
    iVar1 = fn_0017863c(param_2,param_3,param_4,param_1 + 0xc);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = fn_0017863c(param_2,param_3,param_4,param_1 + 0x14);
    if (iVar1 == 0) {
      return 0;
    }
    local_4c[1] = 0x50415254;
    iVar1 = (*param_4)(param_3,local_4c + 1,4);
    if (((((iVar1 == 4) && (iVar1 = (*param_4)(param_3,local_4c,4), iVar1 == 4)) &&
         (iVar1 = (*param_4)(param_3,&local_50,4), iVar1 == 4)) &&
        (((iVar1 = (*param_4)(param_3,&local_54,4), iVar1 == 4 &&
          (iVar1 = (*param_4)(param_3,&local_58,4), iVar1 == 4)) &&
         ((iVar1 = (*param_4)(param_3,&local_38,4), iVar1 == 4 &&
          ((iVar1 = (*param_4)(param_3,local_30,4), iVar1 == 4 &&
           (iVar1 = (*param_4)(param_3,&local_34,4), iVar1 == 4)))))))) &&
       (iVar1 = (*param_4)(param_3,&local_5c,4), iVar1 == 4)) {
      local_4c[1] = 0x50415254;
      iVar1 = (*param_4)(param_3,local_4c + 1,4);
      if (iVar1 == 4) {
        iVar1 = 0;
        if (0 < local_4c[0]) {
          do {
            iVar2 = fn_0017863c(param_2,param_3,param_4,*(int *)(param_1 + 0x38) + iVar1 * 8);
            if (iVar2 == 0) {
              return 0;
            }
            iVar1 = iVar1 + 1;
          } while (iVar1 < local_4c[0]);
        }
        local_4c[1] = 0x50415254;
        iVar1 = (*param_4)(param_3,local_4c + 1,4);
        if (iVar1 == 4) {
          iVar1 = 0;
          if (0 < local_50) {
            do {
              iVar2 = fn_0017863c(param_2,param_3,param_4,*(int *)(param_1 + 0x40) + iVar1 * 8);
              if (iVar2 == 0) {
                return 0;
              }
              iVar1 = iVar1 + 1;
            } while (iVar1 < local_50);
          }
          local_4c[1] = 0x50415254;
          iVar1 = (*param_4)(param_3,local_4c + 1,4);
          if (iVar1 == 4) {
            iVar1 = 0;
            if (0 < local_54) {
              do {
                iVar2 = (*param_4)(param_3,*(int *)(param_1 + 0x50) + iVar1 * 0x14,4);
                if (iVar2 != 4) goto LAB_0016bc04;
                iVar2 = fn_0017863c(param_2,param_3,param_4,
                                     *(int *)(param_1 + 0x50) + iVar1 * 0x14 + 0xc);
                if (iVar2 == 0) {
                  return 0;
                }
                iVar2 = fn_0017863c(param_2,param_3,param_4,
                                     *(int *)(param_1 + 0x50) + iVar1 * 0x14 + 4);
                if (iVar2 == 0) {
                  return 0;
                }
                iVar1 = iVar1 + 1;
              } while (iVar1 < local_54);
            }
            local_4c[1] = 0x50415254;
            iVar1 = (*param_4)(param_3,local_4c + 1,4);
            if (iVar1 == 4) {
              iVar1 = 0;
              if (0 < local_58) {
                do {
                  iVar3 = *(int *)(param_1 + 0x28) + iVar1 * 0x14;
                  iVar2 = fn_0017863c(param_2,param_3,param_4,iVar3);
                  if (iVar2 == 0) {
                    return 0;
                  }
                  iVar2 = (*param_4)(param_3,iVar3 + 0x10,4);
                  if (((iVar2 != 4) || (iVar2 = (*param_4)(param_3,iVar3 + 8,4), iVar2 != 4)) ||
                     (iVar2 = (*param_4)(param_3,iVar3 + 0xc,4), iVar2 != 4)) goto LAB_0016bc04;
                  iVar1 = iVar1 + 1;
                } while (iVar1 < local_58);
              }
              local_4c[1] = 0x50415254;
              iVar1 = (*param_4)(param_3,local_4c + 1,4);
              if ((iVar1 == 4) &&
                 (iVar1 = local_38 * 8,
                 iVar2 = (*param_4)(param_3,*(undefined4 *)(param_1 + 0x30),iVar1), iVar2 == iVar1))
              {
                local_4c[1] = 0x50415254;
                iVar1 = (*param_4)(param_3,local_4c + 1,4);
                if ((iVar1 == 4) &&
                   (iVar1 = local_30[0] * 4,
                   iVar2 = (*param_4)(param_3,*(undefined4 *)(param_1 + 0x58),iVar1), iVar2 == iVar1
                   )) {
                  local_4c[1] = 0x50415254;
                  iVar1 = (*param_4)(param_3,local_4c + 1,4);
                  if ((iVar1 == 4) &&
                     (iVar1 = local_34 * 8, iVar2 = (*param_4)(param_3,param_1 + 0x60,iVar1),
                     iVar2 == iVar1)) {
                    local_4c[1] = 0x50415254;
                    iVar1 = (*param_4)(param_3,local_4c + 1,4);
                    if (iVar1 == 4) {
                      iVar1 = 0;
                      if (0 < local_5c) {
                        do {
                          iVar2 = fn_0016bb8c(*(undefined4 *)
                                                (*(int *)(param_1 + 0x48) + iVar1 * 8 + 4),param_2,
                                               param_3,param_4);
                          if (iVar2 == 0) {
                            return 0;
                          }
                          iVar1 = iVar1 + 1;
                        } while (iVar1 < local_5c);
                      }
                      iVar1 = (*param_4)(param_3,param_1 + 0x1c,4);
                      if (((iVar1 == 4) &&
                          (iVar1 = (*param_4)(param_3,param_1 + 0x20,1), iVar1 == 1)) &&
                         (iVar1 = (*param_4)(param_3,param_1 + 0x21,1), iVar1 == 1)) {
                        return 1;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0016bc04:
  fn_0019813c(param_2,(char *)&DAT_007edcb4);
  return 0;
}



void fn_0016bad4(int param_1,undefined4 param_2)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  uint uVar4;
  bool bVar5;
  short local_50 [34];
  
  local_50[0] = 0;
  local_50[1] = 0;
  local_50[2] = 0;
  local_50[3] = 0;
  local_50[4] = 0;
  local_50[5] = 0;
  local_50[6] = 0;
  local_50[7] = 0;
  local_50[8] = 0;
  local_50[9] = 0;
  local_50[10] = 0;
  local_50[0xb] = 0;
  local_50[0xc] = 0;
  local_50[0xd] = 0;
  local_50[0xe] = 0;
  local_50[0xf] = 0;
  local_50[0x10] = 0;
  local_50[0x11] = 0;
  local_50[0x12] = 0;
  local_50[0x13] = 0;
  local_50[0x14] = 0;
  local_50[0x15] = 0;
  local_50[0x16] = 0;
  local_50[0x17] = 0;
  local_50[0x18] = 0;
  local_50[0x19] = 0;
  local_50[0x1a] = 0;
  local_50[0x1b] = 0;
  local_50[0x1c] = 0;
  local_50[0x1d] = 0;
  local_50[0x1e] = 0;
  local_50[0x1f] = 0;
  fn_00101a50(local_50,0x20,&DAT_0016bb84,param_2);
  uVar4 = 0;
  psVar1 = local_50;
  psVar2 = (short *)(param_1 + *(int *)(param_1 + 0x14) * 0x40 + 0x18);
  do {
    uVar4 = uVar4 + 1;
    psVar3 = psVar2 + 1;
    *psVar2 = *psVar1;
    bVar5 = psVar1[1] == 0;
    psVar1 = psVar1 + 1;
    psVar2 = psVar3;
  } while ((bVar5 || uVar4 < 0x20) && (!bVar5 && uVar4 != 0x1f));
  *psVar3 = 0;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  return;
}



void fn_0016ba84(int param_1,short *param_2)

{
  short *psVar1;
  short *psVar2;
  uint uVar3;
  bool bVar4;
  
  uVar3 = 0;
  psVar1 = (short *)(param_1 + *(int *)(param_1 + 0x14) * 0x40 + 0x18);
  do {
    uVar3 = uVar3 + 1;
    psVar2 = psVar1 + 1;
    *psVar1 = *param_2;
    bVar4 = param_2[1] == 0;
    param_2 = param_2 + 1;
    psVar1 = psVar2;
  } while ((bVar4 || uVar3 < 0x20) && (!bVar4 && uVar3 != 0x1f));
  *psVar2 = 0;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  return;
}


