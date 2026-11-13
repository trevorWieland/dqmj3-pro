#include "00763e68_00764608.h"



void fn_00764608(void)

{
  float in_s1;
  float in_s2;
  
  if (in_s2 < in_s1) {
                    /* WARNING: Subroutine does not return */
    fn_00146590();
  }
  return;
}



void fn_00764540(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = param_1[1];
  *param_1 = &DAT_00858fbc;
  if (iVar2 != 0) {
    puVar3 = *(undefined4 **)(iVar2 + 0xc);
    puVar1 = (undefined4 *)0x0;
    if (puVar3 == param_1) {
      *(undefined4 *)(iVar2 + 0xc) = param_1[2];
    }
    else {
      puVar1 = puVar3;
      for (puVar3 = (undefined4 *)puVar3[2]; puVar3 != param_1; puVar3 = (undefined4 *)puVar3[2]) {
        puVar1 = puVar3;
      }
      puVar1[2] = param_1[2];
    }
    if (*(undefined4 **)(iVar2 + 0x10) == param_1) {
      *(undefined4 **)(iVar2 + 0x10) = puVar1;
    }
    param_1[2] = 0;
    param_1[1] = 0;
  }
  iVar2 = param_1[3];
  while (iVar2 != 0) {
    iVar2 = param_1[3];
    if (*(undefined4 **)(iVar2 + 4) == param_1) {
      param_1[3] = *(undefined4 *)(iVar2 + 8);
      if (param_1[4] == iVar2) {
        param_1[4] = 0;
      }
      *(undefined4 *)(iVar2 + 8) = 0;
      *(undefined4 *)(iVar2 + 4) = 0;
    }
    iVar2 = param_1[3];
  }
  return;
}



void fn_00764478(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = param_1[1];
  *param_1 = &DAT_00858fac;
  if (iVar2 != 0) {
    puVar3 = *(undefined4 **)(iVar2 + 0xc);
    puVar1 = (undefined4 *)0x0;
    if (puVar3 == param_1) {
      *(undefined4 *)(iVar2 + 0xc) = param_1[2];
    }
    else {
      puVar1 = puVar3;
      for (puVar3 = (undefined4 *)puVar3[2]; puVar3 != param_1; puVar3 = (undefined4 *)puVar3[2]) {
        puVar1 = puVar3;
      }
      puVar1[2] = param_1[2];
    }
    if (*(undefined4 **)(iVar2 + 0x10) == param_1) {
      *(undefined4 **)(iVar2 + 0x10) = puVar1;
    }
    param_1[2] = 0;
    param_1[1] = 0;
  }
  iVar2 = param_1[3];
  while (iVar2 != 0) {
    iVar2 = param_1[3];
    if (*(undefined4 **)(iVar2 + 4) == param_1) {
      param_1[3] = *(undefined4 *)(iVar2 + 8);
      if (param_1[4] == iVar2) {
        param_1[4] = 0;
      }
      *(undefined4 *)(iVar2 + 8) = 0;
      *(undefined4 *)(iVar2 + 4) = 0;
    }
    iVar2 = param_1[3];
  }
  return;
}



void fn_00763e68(undefined4 *param_1,undefined4 *param_2,code *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_30;
  undefined4 local_2c [2];
  
  if (param_1 != param_2) {
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
        iVar1 = (*param_3)(&local_30,param_1 + -1);
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
  }
  return;
}


