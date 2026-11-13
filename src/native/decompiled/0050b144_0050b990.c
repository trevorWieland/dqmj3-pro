#include "0050b144_0050b990.h"



void fn_0050b8c8(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x28) == 0) {
LAB_0050b968:
    iVar1 = *(int *)(param_1 + 0x30);
    if (iVar1 != 0) {
      fn_00656b0c(iVar1);
      fn_00656b7c(iVar1);
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
    return;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != param_1 + 8) {
    do {
      fn_0051cc14(iVar1 + 8);
      iVar1 = *(int *)(iVar1 + 4);
    } while (iVar1 != param_1 + 8);
  }
  do {
    if (*(int *)(param_1 + 0x10) == 0) {
      iVar1 = 0;
    }
    else {
      if (*(int *)(param_1 + 8) == 0) goto LAB_0050b968;
      iVar1 = *(int *)(param_1 + 8) + 8;
    }
    if (iVar1 == 0) goto LAB_0050b968;
    fn_0051cd24();
    fn_004f0c1c(param_1 + 4,iVar1 + -8);
    fn_004f0ab4(param_1 + 0x14,param_1 + 0x18,*(int *)(param_1 + 0x24) + iVar1 + -8);
  } while( true );
}



undefined4 fn_0050b80c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  bool bVar5;
  
  if (*(int *)(param_1 + 0xa4) == 0) {
    uVar1 = 0;
    bVar5 = *(int *)(param_1 + 0x28) != 0;
    iVar2 = 0;
    if (bVar5) {
      iVar2 = *(int *)(param_1 + 0x70);
    }
    if ((bVar5 && iVar2 != 0) && (iVar4 = *(int *)(param_1 + 0x38), iVar4 != 0xc)) {
      puVar3 = (undefined4 *)(param_1 + iVar2 * 4 + 0x70);
      uVar1 = *puVar3;
      *(int *)(param_1 + 0x38) = iVar4 + 1;
      *(undefined4 *)(param_1 + iVar4 * 4 + 0x3c) = uVar1;
      if (((undefined4 *)(param_1 + 0x74) <= puVar3) &&
         (iVar2 = param_1 + 0x6c + *(int *)(param_1 + 0x70) * 4, puVar3 < (undefined4 *)(iVar2 + 8))
         ) {
        iVar2 = (int)puVar3 - iVar2;
        while (iVar2 != 4) {
          *puVar3 = puVar3[1];
          iVar2 = (int)(puVar3 + 1) - (param_1 + 0x6c + *(int *)(param_1 + 0x70) * 4);
          puVar3 = puVar3 + 1;
        }
        *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + -1;
      }
    }
    *(undefined4 *)(param_1 + 0xa4) = uVar1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



void fn_0050b66c(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  
  if ((param_2 - 0x100000U < 0x3ff00000) && (iVar1 = *(int *)(param_1 + 0xc), iVar1 != param_1 + 8))
  {
    while (iVar1 + 8 != param_2) {
      iVar1 = *(int *)(iVar1 + 4);
      if (iVar1 == param_1 + 8) {
        return;
      }
    }
    piVar2 = (int *)(param_1 + 0x3c);
    iVar1 = param_1 + 0x34 + *(int *)(param_1 + 0x38) * 4;
    piVar3 = (int *)(iVar1 + 8);
    if (piVar3 != piVar2) {
      while (*piVar2 != param_2) {
        piVar2 = piVar2 + 1;
        if (piVar3 == piVar2) {
          return;
        }
      }
      piVar4 = (int *)(param_1 + *(int *)(param_1 + 0x38) * 4 + 0x3c);
      piVar2 = (int *)(param_1 + 0x3c);
      if (piVar4 == piVar2) {
        return;
      }
      do {
        if (*piVar2 == param_2) {
          bVar5 = piVar2 <= (int *)(param_1 + 0x3c);
          if ((int *)(param_1 + 0x3c) <= piVar2) {
            bVar5 = piVar3 <= piVar2;
          }
          if (!bVar5) {
            iVar1 = (int)piVar2 - iVar1;
            while (iVar1 != 4) {
              *piVar2 = piVar2[1];
              iVar1 = (int)(piVar2 + 1) - (param_1 + 0x34 + *(int *)(param_1 + 0x38) * 4);
              piVar2 = piVar2 + 1;
            }
            *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
          }
          iVar1 = *(int *)(param_1 + 0x70);
          if (iVar1 != 0xc) {
            *(int *)(param_1 + 0x70) = iVar1 + 1;
            *(int *)(param_1 + iVar1 * 4 + 0x74) = param_2;
          }
          if (*(int *)(param_1 + 0xa4) == param_2) {
            *(undefined4 *)(param_1 + 0xa4) = 0;
          }
          return;
        }
        piVar2 = piVar2 + 1;
      } while (piVar4 != piVar2);
      return;
    }
  }
  return;
}



undefined1 * fn_0050b414(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00509470();
  if (iVar1 == 0) {
    return &DAT_e0a1482b;
  }
  iVar1 = fn_00509460();
  if (iVar1 == 0) {
    return &DAT_e0a14827;
  }
  if (DAT_008bf4cc != 0) {
    return &DAT_d8a1482e;
  }
  iVar1 = fn_004ecfe0(0xac);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_0050b990();
  }
  DAT_008bf4cc = uVar2;
  return (undefined1 *)0x0;
}



undefined4 * fn_0050b990(undefined4 *param_1)

{
  *param_1 = &DAT_00857050;
  param_1[2] = 0;
  param_1[3] = 0;
  fn_004f0c04(param_1 + 1);
  param_1[6] = 0;
  param_1[7] = 0;
  fn_004f0c04(param_1 + 5);
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = &DAT_00856cc0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = &DAT_00856cc0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined1 *)(param_1 + 0x2a) = 0xfd;
  return param_1;
}



int fn_0050b370(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  
  bVar4 = *(int *)(param_1 + 0x28) != 0;
  iVar1 = 0;
  if (bVar4) {
    iVar1 = *(int *)(param_1 + 0x70);
  }
  bVar5 = iVar1 != 0;
  if (bVar4 && bVar5) {
    param_3 = *(int *)(param_1 + 0x38);
  }
  if ((!bVar4 || !bVar5) || param_3 == 0xc) {
    param_1 = 0;
  }
  if ((!bVar4 || !bVar5) || param_3 == 0xc) {
    return param_1;
  }
  piVar2 = (int *)(param_1 + iVar1 * 4 + 0x70);
  iVar1 = *piVar2;
  *(int *)(param_1 + 0x38) = param_3 + 1;
  *(int *)(param_1 + param_3 * 4 + 0x3c) = iVar1;
  if (((int *)(param_1 + 0x74U) <= piVar2) &&
     (iVar3 = param_1 + 0x6c + *(int *)(param_1 + 0x70) * 4, piVar2 < (int *)(iVar3 + 8))) {
    iVar3 = (int)piVar2 - iVar3;
    while (iVar3 != 4) {
      *piVar2 = piVar2[1];
      iVar3 = (int)(piVar2 + 1) - (param_1 + 0x6c + *(int *)(param_1 + 0x70) * 4);
      piVar2 = piVar2 + 1;
    }
    *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + -1;
  }
  return iVar1;
}



undefined4 fn_0050b1ac(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  
  uVar1 = 0xe0e14826;
  if (((param_2 - 0x100000U < 0x3ff00000) && (param_3 != 0)) && (param_3 < 0xd)) {
    uVar7 = param_3 * 0x78;
    uVar1 = fn_004ed2e8();
    iVar2 = fn_00656e14(uVar7,uVar1);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      uVar4 = 0;
      if (uVar7 != 0) {
        do {
          puVar5 = (undefined1 *)(iVar2 + uVar4);
          uVar4 = uVar4 + 1;
          if (puVar5 != (undefined1 *)0x0) {
            *puVar5 = 0;
          }
        } while (uVar4 < uVar7);
      }
    }
    *(int *)(param_1 + 0x30) = iVar2;
    if (iVar2 - 0x100000U < 0x3ff00000) {
      if (param_3 != 0) {
        if (iVar2 != 0) {
          *(int *)(param_1 + 0x28) = iVar2;
          *(uint *)(param_1 + 0x2c) = param_3;
          uVar7 = 0;
          if (param_3 != 0) {
            do {
              puVar3 = (undefined4 *)(*(int *)(param_1 + 0x28) + uVar7 * 0x78);
              if (puVar3 != (undefined4 *)0x0) {
                *puVar3 = 0;
                puVar3[1] = 0;
              }
              fn_004f0b78(param_1 + 0x14,param_1 + 0x18,
                           *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x28) + uVar7 * 0x78);
              uVar7 = uVar7 + 1;
            } while (uVar7 < param_3);
          }
        }
        uVar7 = 0;
        if (param_3 != 0) {
          do {
            iVar2 = 0;
            if (*(int *)(param_1 + 0x20) != 0) {
              iVar2 = fn_004f0a20(param_1 + 0x14);
              if (iVar2 == 0) {
                iVar2 = 0;
code_r0x0050b2ec:
                fn_0051cc74();
              }
              else {
                iVar2 = iVar2 - *(int *)(param_1 + 0x24);
                if (iVar2 != -8) goto code_r0x0050b2ec;
              }
              fn_004f0b78(param_1 + 4,param_1 + 8,iVar2);
              iVar2 = iVar2 + 8;
            }
            fn_0051c560(iVar2,param_2);
            uVar7 = uVar7 + 1;
          } while (uVar7 < param_3);
        }
      }
      iVar2 = *(int *)(param_1 + 0xc);
      if (iVar2 != param_1 + 8) {
        do {
          iVar6 = *(int *)(param_1 + 0x70);
          if (iVar6 != 0xc) {
            *(int *)(param_1 + 0x70) = iVar6 + 1;
            *(int *)(param_1 + iVar6 * 4 + 0x74) = iVar2 + 8;
          }
          iVar2 = *(int *)(iVar2 + 4);
        } while (iVar2 != param_1 + 8);
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0xe0614820;
    }
  }
  return uVar1;
}



int fn_0050b144(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0x3c);
  if ((int *)(param_1 + *(int *)(param_1 + 0x38) * 4 + 0x3c) != piVar2) {
    do {
      iVar1 = fn_006d70ac(*piVar2 + 4,param_2);
      if (iVar1 != 0) {
        return *piVar2;
      }
      piVar2 = piVar2 + 1;
    } while ((int *)(param_1 + *(int *)(param_1 + 0x38) * 4 + 0x3c) != piVar2);
  }
  return 0;
}


