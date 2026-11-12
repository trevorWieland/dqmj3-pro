#include "007b8c94_007b8f40.h"



void fn_007b8f40(undefined4 *param_1,undefined4 *param_2,code *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_30;
  undefined4 local_2c [2];
  
  if (param_1 == param_2) {
    return;
  }
  fn_007b16b4(param_1,param_2,(int)param_2 - (int)param_1 >> 2,param_3);
  if ((int)param_2 - (int)param_1 < 0x41) {
    puVar5 = param_1 + 1;
    if (puVar5 != param_2) {
      do {
        local_30 = *puVar5;
        iVar1 = (*param_3)(&local_30,param_1);
        if (iVar1 == 0) {
          local_2c[0] = local_30;
          iVar1 = (*param_3)(local_2c);
          puVar2 = puVar5 + -1;
          puVar3 = puVar5;
          while (puVar4 = puVar2, iVar1 != 0) {
            *puVar3 = *puVar4;
            iVar1 = (*param_3)(local_2c,puVar4 + -1);
            puVar2 = puVar4 + -1;
            puVar3 = puVar4;
          }
          *puVar3 = local_2c[0];
        }
        else {
          puVar3 = puVar5 + 1;
          puVar2 = puVar5;
          if (param_1 < puVar5) {
            iVar1 = (int)puVar5 - (int)param_1;
            if (0 < iVar1) {
              if (iVar1 * 0x20000000 < 0) {
                puVar2 = puVar5 + -1;
                *puVar5 = *puVar2;
                puVar3 = puVar5;
              }
              for (iVar1 = iVar1 >> 3; iVar1 != 0; iVar1 = iVar1 + -1) {
                puVar3[-1] = puVar2[-1];
                puVar2 = puVar2 + -2;
                puVar3 = puVar3 + -2;
                *puVar3 = *puVar2;
              }
            }
          }
          else {
            while (param_1 != puVar2) {
              puVar3 = puVar3 + -1;
              *puVar3 = puVar2[-1];
              puVar2 = puVar2 + -1;
            }
          }
          *param_1 = local_30;
        }
        puVar5 = puVar5 + 1;
      } while (puVar5 != param_2);
      return;
    }
  }
  else {
    puVar5 = param_1;
    while (puVar3 = puVar5 + 1, puVar3 != param_1 + 0x10) {
      local_30 = *puVar3;
      iVar1 = (*param_3)(&local_30,param_1);
      if (iVar1 == 0) {
        local_2c[0] = local_30;
        iVar1 = (*param_3)(local_2c);
        puVar2 = puVar3;
        while (puVar4 = puVar5, iVar1 != 0) {
          *puVar2 = *puVar4;
          iVar1 = (*param_3)(local_2c,puVar4 + -1);
          puVar5 = puVar4 + -1;
          puVar2 = puVar4;
        }
        *puVar2 = local_2c[0];
        puVar5 = puVar3;
      }
      else {
        puVar2 = puVar5 + 2;
        puVar4 = puVar3;
        if (param_1 < puVar3) {
          iVar1 = (int)puVar3 - (int)param_1;
          if (0 < iVar1) {
            if (iVar1 * 0x20000000 < 0) {
              *puVar3 = *puVar5;
              puVar2 = puVar3;
              puVar4 = puVar5;
            }
            for (iVar1 = iVar1 >> 3; iVar1 != 0; iVar1 = iVar1 + -1) {
              puVar2[-1] = puVar4[-1];
              puVar4 = puVar4 + -2;
              puVar2 = puVar2 + -2;
              *puVar2 = *puVar4;
            }
          }
        }
        else {
          while (param_1 != puVar4) {
            puVar2 = puVar2 + -1;
            *puVar2 = puVar4[-1];
            puVar4 = puVar4 + -1;
          }
        }
        *param_1 = local_30;
        puVar5 = puVar3;
      }
    }
    for (param_1 = param_1 + 0x10; param_1 != param_2; param_1 = param_1 + 1) {
      local_30 = *param_1;
      iVar1 = (*param_3)(&local_30);
      puVar3 = param_1 + -1;
      puVar5 = param_1;
      while (puVar2 = puVar3, iVar1 != 0) {
        *puVar5 = *puVar2;
        iVar1 = (*param_3)(&local_30,puVar2 + -1);
        puVar3 = puVar2 + -1;
        puVar5 = puVar2;
      }
      *puVar5 = local_30;
    }
  }
  return;
}



void fn_007b8d50(uint *param_1,uint *param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  
  if (param_1 != param_2) {
    fn_007b136c(param_1,param_2,(int)param_2 - (int)param_1 >> 2,param_4,param_4);
    if ((int)param_2 - (int)param_1 < 0x41) {
      puVar7 = param_1 + 1;
      if (puVar7 != param_2) {
        do {
          uVar8 = *puVar7;
          puVar2 = puVar7;
          if (uVar8 < *param_1) {
            puVar2 = puVar7 + 1;
            puVar4 = puVar7;
            if (param_1 < puVar7) {
              iVar5 = (int)puVar7 - (int)param_1;
              if (0 < iVar5) {
                if (iVar5 * 0x20000000 < 0) {
                  puVar4 = puVar7 + -1;
                  *puVar7 = *puVar4;
                  puVar2 = puVar7;
                }
                for (iVar5 = iVar5 >> 3; iVar5 != 0; iVar5 = iVar5 + -1) {
                  puVar2[-1] = puVar4[-1];
                  puVar4 = puVar4 + -2;
                  puVar2 = puVar2 + -2;
                  *puVar2 = *puVar4;
                }
              }
            }
            else {
              while (param_1 != puVar4) {
                puVar2 = puVar2 + -1;
                *puVar2 = puVar4[-1];
                puVar4 = puVar4 + -1;
              }
            }
            *param_1 = uVar8;
          }
          else {
            while( true ) {
              if (puVar2[-1] <= uVar8) break;
              *puVar2 = puVar2[-1];
              puVar2 = puVar2 + -1;
            }
            *puVar2 = uVar8;
          }
          puVar7 = puVar7 + 1;
        } while (puVar7 != param_2);
        return;
      }
    }
    else {
      puVar7 = param_1 + 0x10;
      puVar2 = param_1;
      while (puVar4 = puVar2 + 1, puVar4 != puVar7) {
        uVar8 = *puVar4;
        puVar1 = puVar4;
        if (uVar8 < *param_1) {
          puVar1 = puVar2 + 2;
          puVar3 = puVar4;
          if (param_1 < puVar4) {
            iVar5 = (int)puVar4 - (int)param_1;
            if (0 < iVar5) {
              if (iVar5 * 0x20000000 < 0) {
                *puVar4 = *puVar2;
                puVar1 = puVar4;
                puVar3 = puVar2;
              }
              for (iVar5 = iVar5 >> 3; iVar5 != 0; iVar5 = iVar5 + -1) {
                puVar1[-1] = puVar3[-1];
                puVar2 = puVar3 + -2;
                puVar3 = puVar3 + -2;
                puVar1[-2] = *puVar2;
                puVar1 = puVar1 + -2;
              }
            }
          }
          else {
            for (; param_1 != puVar3; puVar3 = puVar3 + -1) {
              puVar1[-1] = puVar3[-1];
              puVar1 = puVar1 + -1;
            }
          }
          *param_1 = uVar8;
          puVar2 = puVar4;
        }
        else {
          while( true ) {
            if (puVar1[-1] <= uVar8) break;
            *puVar1 = puVar1[-1];
            puVar1 = puVar1 + -1;
          }
          *puVar1 = uVar8;
          puVar2 = puVar4;
        }
      }
      for (; puVar7 != param_2; puVar7 = puVar7 + 1) {
        uVar8 = *puVar7;
        puVar2 = puVar7;
        while( true ) {
          uVar6 = puVar2[-1];
          if (uVar6 <= uVar8) break;
          *puVar2 = uVar6;
          puVar2 = puVar2 + -1;
        }
        *puVar2 = uVar8;
      }
    }
  }
  return;
}



void fn_007b8c94(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if (param_1 < param_2) {
    if (0 < (int)param_2 - (int)param_1) {
      uVar1 = ((int)param_2 - (int)param_1) / 0x34;
      puVar2 = param_1;
      if ((uVar1 & 1) != 0) {
        uVar4 = param_3[1];
        uVar5 = param_3[2];
        uVar6 = param_3[3];
        uVar7 = param_3[4];
        uVar8 = param_3[5];
        uVar9 = param_3[6];
        uVar10 = param_3[7];
        *param_1 = *param_3;
        param_1[1] = uVar4;
        param_1[2] = uVar5;
        param_1[3] = uVar6;
        param_1[4] = uVar7;
        param_1[5] = uVar8;
        param_1[6] = uVar9;
        param_1[7] = uVar10;
        puVar2 = param_1 + 0xd;
        uVar4 = param_3[9];
        uVar5 = param_3[10];
        uVar6 = param_3[0xb];
        uVar7 = param_3[0xc];
        param_1[8] = param_3[8];
        param_1[9] = uVar4;
        param_1[10] = uVar5;
        param_1[0xb] = uVar6;
        param_1[0xc] = uVar7;
      }
      iVar3 = (int)uVar1 >> 1;
      if (iVar3 != 0) {
        do {
          uVar4 = param_3[1];
          uVar5 = param_3[2];
          uVar6 = param_3[3];
          uVar7 = param_3[4];
          uVar8 = param_3[5];
          uVar9 = param_3[6];
          uVar10 = param_3[7];
          iVar3 = iVar3 + -1;
          *puVar2 = *param_3;
          puVar2[1] = uVar4;
          puVar2[2] = uVar5;
          puVar2[3] = uVar6;
          puVar2[4] = uVar7;
          puVar2[5] = uVar8;
          puVar2[6] = uVar9;
          puVar2[7] = uVar10;
          uVar4 = param_3[9];
          uVar5 = param_3[10];
          uVar6 = param_3[0xb];
          uVar7 = param_3[0xc];
          puVar2[8] = param_3[8];
          puVar2[9] = uVar4;
          puVar2[10] = uVar5;
          puVar2[0xb] = uVar6;
          puVar2[0xc] = uVar7;
          uVar4 = param_3[1];
          uVar5 = param_3[2];
          uVar6 = param_3[3];
          uVar7 = param_3[4];
          uVar8 = param_3[5];
          uVar9 = param_3[6];
          uVar10 = param_3[7];
          puVar2[0xd] = *param_3;
          puVar2[0xe] = uVar4;
          puVar2[0xf] = uVar5;
          puVar2[0x10] = uVar6;
          puVar2[0x11] = uVar7;
          puVar2[0x12] = uVar8;
          puVar2[0x13] = uVar9;
          puVar2[0x14] = uVar10;
          uVar4 = param_3[9];
          uVar5 = param_3[10];
          uVar6 = param_3[0xb];
          uVar7 = param_3[0xc];
          puVar2[0x15] = param_3[8];
          puVar2[0x16] = uVar4;
          puVar2[0x17] = uVar5;
          puVar2[0x18] = uVar6;
          puVar2[0x19] = uVar7;
          puVar2 = puVar2 + 0x1a;
        } while (iVar3 != 0);
        return;
      }
    }
  }
  else {
    for (; param_1 != param_2; param_1 = param_1 + 0xd) {
      uVar4 = param_3[1];
      uVar5 = param_3[2];
      uVar6 = param_3[3];
      uVar7 = param_3[4];
      uVar8 = param_3[5];
      uVar9 = param_3[6];
      uVar10 = param_3[7];
      *param_1 = *param_3;
      param_1[1] = uVar4;
      param_1[2] = uVar5;
      param_1[3] = uVar6;
      param_1[4] = uVar7;
      param_1[5] = uVar8;
      param_1[6] = uVar9;
      param_1[7] = uVar10;
      uVar4 = param_3[9];
      uVar5 = param_3[10];
      uVar6 = param_3[0xb];
      uVar7 = param_3[0xc];
      param_1[8] = param_3[8];
      param_1[9] = uVar4;
      param_1[10] = uVar5;
      param_1[0xb] = uVar6;
      param_1[0xc] = uVar7;
    }
  }
  return;
}


