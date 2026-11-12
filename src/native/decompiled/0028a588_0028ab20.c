#include "0028a588_0028ab20.h"



undefined1 * fn_0028ab20(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_18 [8];
  
  iVar3 = 0;
  iVar2 = 0;
  puVar1 = (undefined1 *)(*(int *)(param_1 + 4) + 0x2c);
  do {
    if (*(int *)(puVar1 + iVar2 * 0xf0) == 0) break;
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 1;
  } while (iVar2 < 500);
  iVar2 = 0;
  if (0 < iVar3) {
    do {
      puVar1 = (undefined1 *)(*(int *)(param_1 + 4) + 0x2c);
      if (((-1 < iVar2) && (iVar2 < 500)) && (puVar1 + iVar2 * 0xf0 != (undefined1 *)0x0)) {
        fn_0020bbc4(auStack_18);
        fn_0020ba60(auStack_18);
        puVar1 = auStack_18;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar3);
  }
  return puVar1;
}



int * fn_0028aad0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_2 == -0x1194d800) {
    piVar1 = (int *)fn_001c2350(DAT_008977e4);
    return piVar1;
  }
  uVar3 = fn_0077f008(param_2,*(int *)(param_1 + 4) + 0x2c,500);
  iVar2 = (int)((ulonglong)uVar3 >> 0x20);
  piVar1 = (int *)uVar3;
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
  }
  if (piVar1 == (int *)0x0 || iVar2 == 0) {
    piVar1 = (int *)0x0;
  }
  return piVar1;
}



undefined4 fn_0028aa48(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != 0) {
    iVar2 = *(int *)(param_1 + 4);
    iVar1 = 0;
    do {
      if (*(short *)(iVar2 + iVar1 * 2 + 0x1d4ec) == param_2) {
        return *(undefined4 *)(iVar2 + iVar1 * 4 + 0x1d53c);
      }
      if (*(short *)(iVar2 + iVar1 * 2 + 0x1d4ee) == param_2) {
        return *(undefined4 *)(iVar2 + iVar1 * 4 + 0x1d540);
      }
      iVar1 = iVar1 + 2;
    } while (iVar1 < 0x28);
  }
  return 0;
}



undefined4 fn_0028a9cc(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar6 = iVar1 + 0x14;
  if (*(int *)(iVar6 + param_2 * 4) == 0) {
    uVar2 = 0;
  }
  else {
    iVar3 = -param_2 + 3;
    *(undefined4 *)(iVar6 + param_2 * 4) = 0;
    if (0 < iVar3) {
      puVar4 = (undefined4 *)(iVar6 + param_2 * 4);
      puVar5 = puVar4;
      if ((-param_2 + 4U & 1) == 0) {
        puVar5 = puVar4 + 1;
        *puVar4 = *puVar5;
      }
      for (iVar3 = iVar3 >> 1; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = puVar5[1];
        puVar5[1] = puVar5[2];
        puVar5 = puVar5 + 2;
      }
    }
    uVar2 = 1;
    *(undefined4 *)(iVar1 + 0x20) = 0;
  }
  return uVar2;
}



undefined4 fn_0028a68c(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  undefined4 uVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  int iVar12;
  undefined8 uVar13;
  uint local_128 [61];
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int local_28;
  
  if (param_2 != -0x1194d800) {
    iVar4 = *(int *)(param_1 + 4);
    iVar6 = iVar4 + 0x2c;
    iStack_34 = param_1;
    iStack_30 = param_2;
    iStack_2c = param_3;
    local_28 = param_4;
    piVar1 = (int *)fn_0077f008(param_2,iVar6,500);
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    if (*piVar1 != 0) {
      fn_00301f50(piVar1,0xf0);
    }
    iVar5 = 500;
    fn_007a5ce0(iVar6,(uint *)(iVar4 + 0x1d4ec));
    fn_007a1d3c(iVar6,iVar4 + 0xf2c);
    for (puVar7 = (uint *)(iVar4 + 0xf2c); puVar7 != (uint *)(iVar4 + 0x1d4ec);
        puVar7 = puVar7 + 0x3c) {
      fn_0017821c(local_128,puVar7,0xf0);
      puVar9 = puVar7 + -0x3c;
      puVar11 = puVar7;
      if ((local_128[0] != 0) &&
         ((puVar10 = puVar7, *puVar9 == 0 || (local_128[0] != 0 && local_128[0] < *puVar9)))) {
        do {
          puVar11 = puVar9;
          fn_0017821c(puVar10,puVar11,0xf0);
          puVar9 = puVar11 + -0x3c;
          if (local_128[0] == 0) break;
          puVar10 = puVar11;
        } while ((*puVar9 == 0) || (local_128[0] != 0 && local_128[0] < *puVar9));
      }
      iVar5 = 0xf0;
      fn_0017821c(puVar11,local_128);
    }
    iVar4 = fn_006b83e4(param_1);
    if (0 < iVar4) {
      iVar5 = *(int *)(param_1 + 4);
    }
    iVar6 = 0;
    if (0 < iVar4) {
      do {
        if (*(int *)(iVar5 + iVar6 * 4 + 4) == param_2) {
          iVar4 = iVar5 + 4;
          if (*(int *)(iVar4 + iVar6 * 4) != 0) {
            iVar12 = -iVar6 + 3;
            *(undefined4 *)(iVar4 + iVar6 * 4) = 0;
            if (0 < iVar12) {
              puVar2 = (undefined4 *)(iVar4 + iVar6 * 4);
              puVar3 = puVar2;
              if ((-iVar6 + 4U & 1) == 0) {
                puVar3 = puVar2 + 1;
                *puVar2 = *puVar3;
              }
              for (iVar12 = iVar12 >> 1; iVar12 != 0; iVar12 = iVar12 + -1) {
                *puVar3 = puVar3[1];
                puVar3[1] = puVar3[2];
                puVar3 = puVar3 + 2;
              }
            }
            *(undefined4 *)(iVar5 + 0x10) = 0;
          }
          break;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar4);
    }
    uVar13 = fn_006b84b0(param_1);
    iVar6 = (int)((ulonglong)uVar13 >> 0x20);
    iVar4 = (int)uVar13;
    if (0 < iVar4) {
      iVar6 = *(int *)(param_1 + 4);
    }
    iVar5 = 0;
    if (0 < iVar4) {
      do {
        if (*(int *)(iVar6 + iVar5 * 4 + 0x14) == param_2) {
          iVar4 = iVar6 + 0x14;
          if (*(int *)(iVar4 + iVar5 * 4) != 0) {
            iVar12 = -iVar5 + 3;
            *(undefined4 *)(iVar4 + iVar5 * 4) = 0;
            if (0 < iVar12) {
              puVar2 = (undefined4 *)(iVar4 + iVar5 * 4);
              puVar3 = puVar2;
              if ((-iVar5 + 4U & 1) == 0) {
                puVar3 = puVar2 + 1;
                *puVar2 = *puVar3;
              }
              for (iVar12 = iVar12 >> 1; iVar12 != 0; iVar12 = iVar12 + -1) {
                *puVar3 = puVar3[1];
                puVar3[1] = puVar3[2];
                puVar3 = puVar3 + 2;
              }
            }
            *(undefined4 *)(iVar6 + 0x20) = 0;
          }
          break;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar4);
    }
    if (*(int *)(*(int *)(param_1 + 4) + 0x24) == param_2) {
      *(undefined4 *)(*(int *)(param_1 + 4) + 0x24) = 0;
    }
    if (param_3 != 0) {
      iVar4 = 0;
      uVar8 = *(undefined4 *)(DAT_00897804 + 0x1c);
      do {
        iVar6 = fn_006b51d8(uVar8,iVar4);
        if (iVar6 == param_2) {
          fn_002426b4(uVar8,iVar4,0);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 4);
      iVar4 = fn_006b51c0(uVar8);
      if (iVar4 == param_2) {
        fn_0024269c(uVar8,0);
      }
    }
    if (local_28 != 0) {
      iVar4 = 0;
      do {
        fn_002b095c(*(undefined4 *)(DAT_00897804 + 0x10),iVar4,param_2);
        iVar4 = iVar4 + 1;
      } while (iVar4 < 10);
    }
  }
  return 1;
}



void fn_0028a66c(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  iVar2 = 2;
  do {
    iVar2 = iVar2 + -1;
    puVar1[1] = 0;
    puVar1 = puVar1 + 2;
    *puVar1 = 0;
  } while (iVar2 != 0);
  return;
}



void fn_0028a5c0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *param_2;
  if (iVar5 == 0) {
    return;
  }
  iVar2 = 0;
  iVar1 = 0;
  do {
    if (*(int *)(*(int *)(param_1 + 4) + 0x2c + iVar1 * 0xf0) == 0) break;
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + 1;
  } while (iVar1 < 500);
  iVar1 = 0;
  if (0 < iVar2) {
    while ((((iVar1 < 0 || (499 < iVar1)) ||
            (iVar4 = *(int *)(param_1 + 4) + 0x2c + iVar1 * 0xf0, iVar4 == 0)) ||
           (*(int *)(iVar4 + 0xe0) != iVar5))) {
      iVar1 = iVar1 + 1;
      if (iVar2 <= iVar1) {
        return;
      }
    }
    iVar1 = param_2[1];
    iVar2 = param_2[2];
    iVar3 = param_2[3];
    *(int *)(iVar4 + 0xe0) = iVar5;
    *(int *)(iVar4 + 0xe4) = iVar1;
    *(int *)(iVar4 + 0xe8) = iVar2;
    *(int *)(iVar4 + 0xec) = iVar3;
  }
  return;
}



int fn_0028a588(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4) + 0x14;
  iVar1 = 0;
  do {
    if (*(int *)(iVar2 + iVar1 * 4) == 0) {
      *(undefined4 *)(iVar2 + iVar1 * 4) = param_2;
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  return -1;
}


