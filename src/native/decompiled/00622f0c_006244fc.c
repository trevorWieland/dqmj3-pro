#include "00622f0c_006244fc.h"



void fn_006244fc(undefined4 param_1,undefined4 param_2,undefined4 param_3,char *param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  undefined1 auStack_28 [28];
  
  uVar1 = fn_0062a40c();
  fn_0061fd6c(uVar1,(int)*param_4,(int)param_4[1],param_3,param_5,param_6,param_7,param_8,
               auStack_28);
  fn_00655430(auStack_28);
  return;
}



int fn_00624030(undefined4 param_1,int param_2,int param_3,char *param_4,undefined4 param_5,
                int param_6)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  iVar5 = 0;
  iVar2 = fn_0062a40c();
  cVar1 = *(char *)(param_2 + 4);
  if (cVar1 == '\x01') {
    uVar3 = fn_00163cd8(iVar2,(int)*(char *)(param_3 + *(char *)(param_2 + 5) * 0x418 + -0x4027));
  }
  else if (cVar1 == '\x02') {
    if (iVar2 != 0) goto LAB_00624110;
    uVar3 = 0;
  }
  else if (cVar1 == '\x03' || cVar1 == '\x05') {
LAB_00624110:
    uVar3 = fn_00163cbc(iVar2);
  }
  else {
    uVar3 = 0xb;
  }
  iVar6 = (int)*(char *)(param_2 + 5);
  iVar2 = fn_0061be08(iVar6);
  switch(uVar3) {
  default:
    goto switchD_00624090_caseD_0;
  case 1:
    *param_4 = *(char *)(param_2 + 6);
    fn_0062a40c(param_1,param_2);
    iVar5 = fn_006925f4();
    if (iVar5 != 0) {
      return 1;
    }
    iVar5 = param_3 + *param_4 * 0x418;
    if (0 < *(short *)(iVar5 + -0x4080)) {
      cVar1 = *(char *)(iVar5 + -0x4019);
      bVar8 = cVar1 == '\0';
      if (bVar8) {
        cVar1 = *(char *)(iVar5 + -0x400a);
      }
      bVar7 = bVar8 && cVar1 == '\0';
      if (bVar8 && cVar1 == '\0') {
        bVar7 = *(char *)(iVar5 + -0x4018) == '\0';
      }
      if (bVar7) {
        return 1;
      }
    }
joined_r0x00624480:
    if (iVar2 != 0) break;
    goto LAB_00624494;
  case 2:
    if (iVar2 != 0) {
LAB_006241b0:
      iVar5 = fn_00626ff8(param_1,0x10,0x14,param_2,param_3,param_4);
      goto switchD_00624090_caseD_0;
    }
    goto LAB_00624358;
  case 3:
  case 4:
    if (iVar2 == 0) goto LAB_00624494;
    break;
  case 5:
    cVar1 = *(char *)(param_2 + 6);
    *param_4 = cVar1;
    param_3 = param_3 + cVar1 * 0x418;
    if (0 < *(short *)(param_3 + -0x4080)) {
      cVar1 = *(char *)(param_3 + -0x4019);
      bVar8 = cVar1 == '\0';
      if (bVar8) {
        cVar1 = *(char *)(param_3 + -0x400a);
      }
      bVar7 = bVar8 && cVar1 == '\0';
      if (bVar8 && cVar1 == '\0') {
        bVar7 = *(char *)(param_3 + -0x4018) == '\0';
      }
      if (bVar7) goto LAB_00624250;
    }
    if (iVar2 == 0) {
      uVar3 = 0x10;
    }
    else {
      uVar3 = 0x14;
    }
    fn_00628df4(param_1,uVar3);
LAB_00624250:
    param_4[1] = *(char *)(param_2 + 5);
    return 2;
  case 6:
    iVar2 = fn_0061be08(iVar6);
    if (iVar2 == 0) {
      uVar3 = 0x14;
    }
    else {
      uVar3 = 0x18;
    }
    iVar2 = fn_0061be08(iVar6);
    if (iVar2 == 0) {
      uVar4 = 0x10;
    }
    else {
      uVar4 = 0x14;
    }
    iVar2 = fn_00626ff8(param_1,uVar4,uVar3,param_2,param_3,param_4);
    iVar5 = fn_0061be08(iVar6);
    if (iVar5 == 0) {
      uVar3 = 0x18;
    }
    else {
      uVar3 = 0x14;
    }
    iVar5 = fn_0061be08(iVar6);
    if (iVar5 == 0) {
      uVar4 = 0x14;
    }
    else {
      uVar4 = 0x10;
    }
    iVar5 = fn_00626ff8(param_1,uVar4,uVar3,param_2,param_3,param_4 + iVar2);
    return iVar2 + iVar5;
  case 7:
    cVar1 = *(char *)(param_2 + 6);
    *param_4 = cVar1;
    iVar5 = param_3 + cVar1 * 0x418;
    if (0 < *(short *)(iVar5 + -0x4080)) {
      cVar1 = *(char *)(iVar5 + -0x4019);
      bVar8 = cVar1 == '\0';
      if (bVar8) {
        cVar1 = *(char *)(iVar5 + -0x400a);
      }
      bVar7 = bVar8 && cVar1 == '\0';
      if (bVar8 && cVar1 == '\0') {
        bVar7 = *(char *)(iVar5 + -0x4018) == '\0';
      }
      if (bVar7) {
        return 1;
      }
    }
    goto joined_r0x0062438c;
  case 8:
    if (iVar2 == 0) goto LAB_006241b0;
LAB_00624358:
    iVar5 = fn_00626ff8(param_1,0x14,0x18,param_2,param_3,param_4);
    goto switchD_00624090_caseD_0;
  case 9:
joined_r0x0062438c:
    if (iVar2 != 0) {
LAB_00624494:
      uVar3 = 0x14;
LAB_006244a0:
      iVar5 = fn_00628df4(param_1,uVar3,0x18,param_3,param_4);
      goto switchD_00624090_caseD_0;
    }
    break;
  case 10:
    if (param_6 == 0) {
      iVar5 = param_3 + *(char *)(param_2 + 6) * 0x418;
      if (0 < *(short *)(iVar5 + -0x4080)) {
        cVar1 = *(char *)(iVar5 + -0x4019);
        bVar8 = cVar1 == '\0';
        if (bVar8) {
          cVar1 = *(char *)(iVar5 + -0x400a);
        }
        if ((bVar8 && cVar1 == '\0') && (*(char *)(iVar5 + -0x4018) == '\0')) {
          *param_4 = *(char *)(param_2 + 6);
          return 1;
        }
      }
    }
joined_r0x00624490:
    if (iVar2 != 0) goto LAB_00624494;
    break;
  case 0xb:
    *param_4 = *(char *)(param_2 + 5);
    return 1;
  case 0xc:
    uVar3 = fn_0062a40c(param_1,param_2);
    iVar5 = fn_001639e4();
    if (iVar5 == 0xd) {
      fn_006210b4(uVar3,(int)*(char *)(param_2 + 5),param_3,&local_30);
      iVar5 = fn_00655488(local_30,uStack_2c);
      if (iVar5 == 0) goto joined_r0x00624490;
      goto joined_r0x00624480;
    }
    uVar3 = 0x10;
    goto LAB_006244a0;
  case 0xd:
    *param_4 = '\0';
    return 1;
  case 0xe:
    iVar5 = fn_00628a30(param_1,param_2,param_3,param_4);
    goto switchD_00624090_caseD_0;
  }
  iVar5 = fn_00628df4(param_1,0x10,0x14,param_3,param_4);
switchD_00624090_caseD_0:
  return iVar5;
}



void fn_00623ec0(undefined4 param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  short *psVar7;
  int iVar8;
  bool bVar9;
  int local_40 [2];
  undefined1 auStack_38 [20];
  
  uVar2 = fn_0062a40c();
  iVar8 = (int)*(char *)(param_2 + 5);
  iVar3 = fn_001639e4();
  if (iVar3 == 0x19) {
    uVar4 = iVar8 - 0x10;
    bVar9 = uVar4 < 4;
    if (!bVar9) {
      uVar4 = iVar8 - 0x18;
    }
    if ((bVar9 || uVar4 < 4) || (iVar8 == 0x20 || iVar8 == 0x22)) {
      uVar4 = 0x18;
    }
    else {
      uVar4 = 0x1c;
    }
    iVar3 = fn_0061be08(iVar8);
    if (iVar3 == 0) {
      uVar5 = 0x20;
    }
    else {
      uVar5 = 0x1c;
    }
    if (uVar4 < uVar5) {
      param_3 = param_3 + 0x180388;
      do {
        iVar3 = param_3 + uVar4 * 0x418;
        psVar7 = (short *)(iVar3 + -0x4080);
        if (0 < *psVar7) {
          cVar1 = *(char *)(iVar3 + -0x400a);
          bVar9 = cVar1 == '\0';
          if (bVar9) {
            cVar1 = *(char *)(iVar3 + -0x4018);
          }
          if (bVar9 && cVar1 == '\0') {
            fn_00655a88(auStack_38);
            local_40[0] = 0;
            local_40[1] = 0;
            fn_00616c50(uVar2,1,0,(int)*(char *)(param_2 + 5),uVar4,param_3,auStack_38,local_40,0);
            if ((*(char *)(iVar3 + -0x4019) == '\0') ||
               (iVar6 = fn_006196d8(uVar4,param_3), iVar6 != 0)) {
              fn_00180278(psVar7,-local_40[0]);
              if (*(short *)(iVar3 + -0x4064) < 1) {
                fn_001743e8(psVar7);
              }
            }
            else {
              fn_00174610(psVar7,(int)(short)-(short)local_40[0]);
            }
          }
        }
        uVar4 = (uint)(char)((char)uVar4 + '\x01');
        iVar3 = fn_0061be08(iVar8);
        if (iVar3 == 0) {
          iVar3 = 0x20;
        }
        else {
          iVar3 = 0x1c;
        }
      } while ((int)uVar4 < iVar3);
    }
  }
  return;
}



void fn_00622f0c(undefined4 param_1,int param_2,int param_3,int *param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  uVar2 = fn_0062a40c();
  uVar1 = *(undefined1 *)(param_2 + 5);
  iVar3 = fn_001639e4();
  if (iVar3 == 9) {
    iVar3 = 0;
    iVar9 = 0;
    if (0 < *param_4) {
      do {
        uVar8 = (uint)(short)param_4[iVar9 * 0x68 + 8];
        if (0 < (int)(uVar8 - 1)) {
          piVar4 = param_4 + iVar9 * 0x68 + 7;
          if ((uVar8 & 1) == 0) {
            piVar4 = param_4 + iVar9 * 0x68 + 9;
            iVar3 = iVar3 + *piVar4;
          }
          iVar7 = piVar4[2];
          iVar6 = 0;
          for (iVar5 = (int)(uVar8 - 1) >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
            iVar3 = iVar3 + iVar7;
            iVar7 = piVar4[6];
            iVar6 = iVar6 + piVar4[4];
            piVar4 = piVar4 + 4;
          }
          iVar3 = iVar3 + iVar6;
        }
        if (-1 < (int)(uVar8 - 1)) {
          iVar3 = iVar3 + param_4[iVar9 * 0x68 + (uVar8 - 1) * 2 + 9];
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < *param_4);
    }
    iVar9 = param_4[1];
    piVar4 = param_4 + iVar9 * 0x68 + 0x822;
    *(undefined1 *)((int)param_4 + iVar9 * 0x1a0 + 0x208a) = 4;
    *(undefined2 *)(param_4 + iVar9 * 0x68 + 0x823) = 0xd;
    *(undefined1 *)piVar4 = uVar1;
    *(undefined1 *)((int)param_4 + iVar9 * 0x1a0 + 0x2089) = uVar1;
    *(undefined1 *)((int)param_4 + iVar9 * 0x1a0 + 0x208e) = 3;
    *(undefined1 *)((int)param_4 + iVar9 * 0x1a0 + 0x208f) = 8;
    *(undefined2 *)(param_4 + iVar9 * 0x68 + 0x828) = 1;
    iVar3 = fn_0062c448(iVar3,uVar2);
    iVar5 = param_3 + 0x180388;
    param_4[iVar9 * 0x68 + 0x829] = iVar3;
    fn_0062187c(param_1,piVar4);
    fn_0062abdc(param_1,iVar5,piVar4,param_3);
    fn_00654bf4(iVar5,param_4[iVar9 * 0x68 + 0x887]);
    fn_00654c30(iVar5,param_4[iVar9 * 0x68 + 0x888]);
    param_4[1] = param_4[1] + 1;
  }
  return;
}


