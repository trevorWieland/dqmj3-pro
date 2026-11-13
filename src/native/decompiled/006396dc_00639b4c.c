#include "006396dc_00639b4c.h"



void fn_00639b4c(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_2138 [4];
  int local_2128 [4];
  undefined1 auStack_2118 [1048];
  undefined1 auStack_1d00 [1048];
  undefined1 auStack_18e8 [1048];
  undefined1 auStack_14d0 [1048];
  undefined1 auStack_10b8 [1048];
  undefined1 auStack_ca0 [1048];
  undefined1 auStack_888 [1048];
  undefined1 auStack_470 [1080];
  int iStack_38;
  int iStack_34;
  int local_30;
  int local_2c;
  
  local_2138[0] = param_7 + param_5 * 0x418 + -0x4080;
  iStack_38 = param_1;
  iStack_34 = param_2;
  local_30 = param_3;
  local_2c = param_4;
  fn_0017821c(auStack_2118,param_1 + param_5 * 0x418 + -0x4080,0x418);
  cVar2 = (char)param_5;
  local_2138[1] = param_7 + (char)(cVar2 + '\x01') * 0x418 + -0x4080;
  fn_0017821c(auStack_1d00,param_1 + (char)(cVar2 + '\x01') * 0x418 + -0x4080,0x418);
  local_2138[2] = param_7 + (char)(cVar2 + '\x02') * 0x418 + -0x4080;
  fn_0017821c(auStack_18e8,param_1 + (char)(cVar2 + '\x02') * 0x418 + -0x4080,0x418);
  local_2138[3] = param_7 + (char)(cVar2 + '\x03') * 0x418 + -0x4080;
  fn_0017821c(auStack_14d0,param_1 + (char)(cVar2 + '\x03') * 0x418 + -0x4080,0x418);
  local_2128[0] = param_7 + param_6 * 0x418 + -0x4080;
  fn_0017821c(auStack_10b8,param_1 + param_6 * 0x418 + -0x4080,0x418);
  cVar1 = (char)param_6;
  local_2128[1] = param_7 + (char)(cVar1 + '\x01') * 0x418 + -0x4080;
  fn_0017821c(auStack_ca0,param_1 + (char)(cVar1 + '\x01') * 0x418 + -0x4080,0x418);
  local_2128[2] = param_7 + (char)(cVar1 + '\x02') * 0x418 + -0x4080;
  fn_0017821c(auStack_888,param_1 + (char)(cVar1 + '\x02') * 0x418 + -0x4080,0x418);
  local_2128[3] = param_7 + (char)(cVar1 + '\x03') * 0x418 + -0x4080;
  fn_0017821c(auStack_470,param_1 + (char)(cVar1 + '\x03') * 0x418 + -0x4080,0x418);
  iVar3 = (int)*(char *)(param_2 + 4);
  if (iVar3 - 0x18U < 8) {
    fn_0017821c(local_2138[0],auStack_10b8 + (iVar3 - param_6) * 0x418,0x418);
  }
  else {
    fn_0017821c(local_2138[0],auStack_2118 + (iVar3 - param_5) * 0x418,0x418);
  }
  iVar3 = (int)*(char *)(param_2 + 5);
  if (iVar3 - 0x18U < 8) {
    fn_0017821c(local_2138[1],auStack_10b8 + (iVar3 - param_6) * 0x418,0x418);
  }
  else {
    fn_0017821c(local_2138[1],auStack_2118 + (iVar3 - param_5) * 0x418,0x418);
  }
  iVar3 = (int)*(char *)(param_2 + 6);
  if (iVar3 - 0x18U < 8) {
    fn_0017821c(local_2138[2],auStack_10b8 + (iVar3 - param_6) * 0x418,0x418);
  }
  else {
    fn_0017821c(local_2138[2],auStack_2118 + (iVar3 - param_5) * 0x418,0x418);
  }
  iVar3 = (int)*(char *)(param_2 + 7);
  if (iVar3 - 0x18U < 8) {
    fn_0017821c(local_2138[3],auStack_10b8 + (iVar3 - param_6) * 0x418,0x418);
  }
  else {
    fn_0017821c(local_2138[3],auStack_2118 + (iVar3 - param_5) * 0x418,0x418);
  }
  iVar3 = (int)*(char *)(param_2 + 8);
  if (iVar3 - 0x18U < 8) {
    fn_0017821c(local_2128[0],auStack_10b8 + (iVar3 - param_6) * 0x418,0x418);
  }
  else {
    fn_0017821c(local_2128[0],auStack_2118 + (iVar3 - param_5) * 0x418,0x418);
  }
  iVar3 = (int)*(char *)(param_2 + 9);
  if (iVar3 - 0x18U < 8) {
    fn_0017821c(local_2128[1],auStack_10b8 + (iVar3 - param_6) * 0x418,0x418);
  }
  else {
    fn_0017821c(local_2128[1],auStack_2118 + (iVar3 - param_5) * 0x418,0x418);
  }
  iVar3 = (int)*(char *)(param_2 + 10);
  if (iVar3 - 0x18U < 8) {
    fn_0017821c(local_2128[2],auStack_10b8 + (iVar3 - param_6) * 0x418,0x418);
  }
  else {
    fn_0017821c(local_2128[2],auStack_2118 + (iVar3 - param_5) * 0x418,0x418);
  }
  iVar3 = (int)*(char *)(param_2 + 0xb);
  if (iVar3 - 0x18U < 8) {
    fn_0017821c(local_2128[3],auStack_10b8 + (iVar3 - param_6) * 0x418,0x418);
  }
  else {
    fn_0017821c(local_2128[3],auStack_2118 + (iVar3 - param_5) * 0x418,0x418);
  }
  iVar3 = param_7 + local_30 * 8;
  if ((int)*(char *)(iVar3 + 0x4182) - 0x10U < 8) {
    iVar5 = 0;
    do {
      iVar4 = fn_00166804(local_2138[iVar5]);
      if (iVar4 != 0) {
        cVar1 = cVar2 + (char)iVar5;
        goto LAB_0063a04c;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 4);
    iVar5 = 0;
LAB_0063a024:
    iVar6 = local_2128[iVar5];
    iVar4 = fn_00166804(iVar6);
    if (iVar4 == 0) goto LAB_0063a054;
    fn_0017419c(iVar6,0);
    cVar1 = '\0';
LAB_0063a04c:
    *(char *)(iVar3 + 0x4182) = cVar1;
  }
LAB_0063a060:
  param_7 = param_7 + local_2c * 8;
  if ((int)*(char *)(param_7 + 0x4182) - 0x10U < 8) {
    iVar3 = 0;
    do {
      iVar5 = fn_001667f0(local_2138[iVar3]);
      if (iVar5 != 0) {
        cVar2 = cVar2 + (char)iVar3;
        goto LAB_0063a0e0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 4);
    iVar3 = 0;
    while( true ) {
      iVar4 = local_2128[iVar3];
      iVar5 = fn_001667f0(iVar4);
      if (iVar5 != 0) break;
      iVar3 = iVar3 + 1;
      if (3 < iVar3) {
        return;
      }
    }
    fn_00174398(iVar4,0);
    cVar2 = '\0';
LAB_0063a0e0:
    *(char *)(param_7 + 0x4182) = cVar2;
  }
  return;
LAB_0063a054:
  iVar5 = iVar5 + 1;
  if (3 < iVar5) goto LAB_0063a060;
  goto LAB_0063a024;
}



int fn_00639ac0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,char *param_5)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  bool bVar4;
  
  bVar4 = 7 < param_4 - 0x10U;
  pcVar1 = param_5 + param_4 * 0x418;
  if (bVar4) {
    pcVar1 = (char *)(param_4 + -0x18);
  }
  pcVar3 = param_5 + param_4 * 0x418 + -0x4080;
  if (bVar4 && &DAT_00000007 < pcVar1) {
    pcVar3 = (char *)0x0;
  }
  iVar2 = fn_00163c80(param_2);
  if ((iVar2 == 1) && (iVar2 = fn_006f44fc(pcVar3,0x1e3), iVar2 != 0)) {
    iVar2 = 0x78;
    if (*param_5 < '\x01') {
      iVar2 = 10;
    }
    param_1 = (param_1 * iVar2) / 100;
  }
  return param_1;
}



void fn_006398fc(int *param_1,int param_2,int param_3,int param_4,int *param_5,int *param_6,
                 int *param_7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_00145adc(param_4 + 0xe8);
  if (iVar1 == 0) {
    iVar1 = *param_7;
    iVar2 = param_7[1];
    if (iVar1 != param_3) {
      iVar1 = param_7[2];
      iVar2 = param_7[3];
      if (iVar1 != param_3) {
        iVar1 = param_7[4];
        iVar2 = param_7[5];
        if (iVar1 != param_3) {
          iVar1 = param_7[6];
          iVar2 = param_7[7];
          if (iVar1 != param_3) {
            iVar1 = param_7[8];
            iVar2 = param_7[9];
            if (iVar1 != param_3) {
              iVar1 = param_7[10];
              iVar2 = param_7[0xb];
              if (iVar1 != param_3) {
                iVar1 = param_7[0xc];
                iVar2 = param_7[0xd];
                if (iVar1 != param_3) {
                  iVar1 = param_7[0xe];
                  iVar2 = param_7[0xf];
                  if (iVar1 != param_3) {
                    iVar1 = param_7[0x10];
                    iVar2 = param_7[0x11];
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else if (param_2 == 0) {
    iVar1 = *param_6;
    iVar2 = param_6[1];
    if (iVar1 != param_3) {
      iVar1 = param_6[2];
      iVar2 = param_6[3];
      if (iVar1 != param_3) {
        iVar1 = param_6[4];
        iVar2 = param_6[5];
        if (iVar1 != param_3) {
          iVar1 = param_6[6];
          iVar2 = param_6[7];
          if (iVar1 != param_3) {
            iVar1 = param_6[8];
            iVar2 = param_6[9];
            if (iVar1 != param_3) {
              iVar1 = param_6[10];
              iVar2 = param_6[0xb];
              if (iVar1 != param_3) {
                iVar1 = param_6[0xc];
                iVar2 = param_6[0xd];
                if (iVar1 != param_3) {
                  iVar1 = param_6[0xe];
                  iVar2 = param_6[0xf];
                  if (iVar1 != param_3) {
                    iVar1 = param_6[0x10];
                    iVar2 = param_6[0x11];
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    iVar1 = *param_5;
    iVar2 = param_5[1];
    if (iVar1 != param_3) {
      iVar1 = param_5[2];
      iVar2 = param_5[3];
      if (iVar1 != param_3) {
        iVar1 = param_5[4];
        iVar2 = param_5[5];
        if (iVar1 != param_3) {
          iVar1 = param_5[6];
          iVar2 = param_5[7];
          if (iVar1 != param_3) {
            iVar1 = param_5[8];
            iVar2 = param_5[9];
            if (iVar1 != param_3) {
              iVar1 = param_5[10];
              iVar2 = param_5[0xb];
              if (iVar1 != param_3) {
                iVar1 = param_5[0xc];
                iVar2 = param_5[0xd];
                if (iVar1 != param_3) {
                  iVar1 = param_5[0xe];
                  iVar2 = param_5[0xf];
                  if (iVar1 != param_3) {
                    iVar1 = param_5[0x10];
                    iVar2 = param_5[0x11];
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  *param_1 = iVar1;
  param_1[1] = iVar2;
  return;
}



int fn_006396dc(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                undefined4 param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int local_40 [4];
  int iStack_30;
  int iStack_2c;
  int local_28;
  
  piVar8 = local_40;
  piVar7 = local_40;
  local_40[0] = param_6 + param_5 * 0x418 + -0x4080;
  local_40[3] = param_1;
  iStack_30 = param_2;
  iStack_2c = param_3;
  local_28 = param_4;
  if ((param_2 == 0) && (iVar1 = fn_00145adc(param_6 + 0xe8), iVar1 != 0)) {
    iVar1 = fn_00692008(param_1);
  }
  else {
    iVar1 = fn_00691e30(param_1);
  }
  if ((param_2 == 0) && (iVar2 = fn_00145adc(param_6 + 0xe8), iVar2 != 0)) {
    iVar2 = fn_00691fec(param_1);
  }
  else {
    iVar2 = fn_00691e14(param_1);
  }
  iVar3 = fn_006918b4(param_1);
  iVar4 = fn_00691898(param_1);
  iVar5 = fn_006f3f7c(local_40[0]);
  if (iVar3 == 0 && iVar4 == 0) {
    iVar1 = 0;
  }
  else {
    local_40[0] = local_28;
    iVar6 = fn_006924f4(param_1);
    if ((((iVar6 == 0) && (iVar6 = fn_006925f4(param_1), iVar6 == 0)) && (local_40[0] - 0x10U < 8))
       && (iVar6 = fn_006f44fc(param_6 + local_40[0] * 0x418 + -0x4080,0x1b8), iVar6 != 0)) {
      iVar5 = 0;
    }
    iVar6 = iVar1;
    if (((iVar3 < param_3) && (iVar6 = iVar2, param_3 < iVar4)) && (iVar6 = iVar1, iVar3 != iVar4))
    {
      iVar2 = fn_00300f74((iVar2 - iVar1) * (param_3 - iVar3),iVar4 - iVar3);
      iVar6 = iVar1 + iVar2;
    }
    iVar1 = fn_006924f4(param_1);
    if ((iVar1 == 0) && (iVar1 = fn_006925f4(param_1), iVar1 == 0)) {
      local_40[0] = (param_3 - iVar5) + 2000;
      local_40[2] = 3000;
      local_40[1] = 1000;
      if (local_40[0] < 1000) {
        piVar8 = local_40 + 1;
      }
      if (*piVar8 < 0xbb9) {
        if (local_40[0] < 1000) {
          piVar7 = local_40 + 1;
        }
      }
      else {
        piVar7 = local_40 + 2;
      }
      iVar6 = (iVar6 * *piVar7) / 2000;
    }
    iVar1 = fn_0063a510(0x5f,0x69,param_7);
    iVar1 = (iVar1 * iVar6) / 100;
  }
  return iVar1;
}


