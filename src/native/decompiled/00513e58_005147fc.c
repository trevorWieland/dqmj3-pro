#include "00513e58_005147fc.h"



undefined4 * fn_005147fc(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)fn_0051cf84();
  puVar1[5] = 0;
  *puVar1 = &DAT_00857130;
  puVar1[6] = 0;
  *(undefined1 *)(puVar1 + 7) = 0xfd;
  if (DAT_008bf4a0 != 0) {
    uVar2 = fn_004eea84(DAT_008bf4a0,9);
    fn_004f161c(uVar2,(char *)&DAT_00514854);
  }
  return puVar1;
}



void fn_005147b4(int *param_1)

{
  (**(code **)(*param_1 + 0x14))(param_1);
  if (param_1[6] != 0) {
    fn_004ecfd0();
    param_1[6] = 0;
  }
  if (param_1[5] != 0) {
    fn_00656b7c();
    param_1[5] = 0;
  }
  return;
}



longlong fn_005145ac(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint extraout_r1;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined4 local_20;
  
  uVar5 = 0x3ff00000;
  if (*(int *)(param_1 + 0x10) - 0x100000U < 0x3ff00000) {
    if (*(int *)(param_1 + 0x18) - 0x100000U < 0x3ff00000) {
      local_20 = *(undefined4 *)(param_1 + 0xc);
      puVar1 = (undefined4 *)fn_0050953c(*(int *)(param_1 + 0x10),&local_20);
      uVar8 = (**(code **)(*(int *)*puVar1 + 0x2c))();
      do {
        uVar6 = (uint)((ulonglong)uVar8 >> 0x20);
        if ((int)uVar8 != 0) {
          if (DAT_008bf4a0 != 0) {
            uVar5 = fn_004eea84(DAT_008bf4a0,9);
            fn_004f15b4(uVar5,*(int *)(param_1 + 0x18),
                         *(undefined4 *)(*(int *)(param_1 + 0x18) + 0xc),0);
            uVar6 = extraout_r1;
          }
          return (ulonglong)uVar6 << 0x20;
        }
        if (*(int *)(*(int *)(param_1 + 0x18) + 0x1c) != 0) {
          puVar2 = (undefined4 *)fn_006d9a38(puVar1);
          iVar7 = *(int *)(param_1 + 0x18);
          iVar3 = 0;
          if (*(int *)(iVar7 + 0x1c) != 0) {
            iVar3 = fn_004f0a20(iVar7 + 0x10);
            if (iVar3 == 0) {
              iVar3 = 0;
              iVar4 = 8;
LAB_005146dc:
              fn_00301f50(iVar4,0x5a0);
            }
            else {
              iVar3 = iVar3 - *(int *)(iVar7 + 0x20);
              iVar4 = iVar3 + 8;
              if (iVar4 != 0) goto LAB_005146dc;
            }
            fn_004f0b78(iVar7,iVar7 + 4,iVar3);
            iVar3 = iVar3 + 8;
          }
          *(undefined1 *)(iVar3 + 0x59c) = *(undefined1 *)(puVar2[1] + 1);
          *(undefined4 *)(iVar3 + 0x598) = *puVar2;
          fn_0017821c(iVar3,puVar2[1] + 0x14,*puVar2);
        }
        (**(code **)(*(int *)*puVar1 + 0x30))();
        uVar8 = (**(code **)(*(int *)*puVar1 + 0x2c))();
      } while( true );
    }
    if (DAT_008c0630 != 0) {
      uVar5 = 8;
    }
  }
  else if (DAT_008c0630 != 0) {
    uVar5 = 8;
  }
  return CONCAT44(uVar5,&DAT_e0a14827);
}



void fn_00514508(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x1c) = 0xfd;
  if (0x3fefffff < iVar3 - 0x100000U) {
    return;
  }
  puVar1 = *(undefined4 **)(iVar3 + 8);
  while (puVar1 != (undefined4 *)(iVar3 + 4)) {
    puVar2 = (undefined4 *)puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    fn_004f0ab4(iVar3 + 0x10,iVar3 + 0x14,*(int *)(iVar3 + 0x20) + (int)puVar1);
    puVar1 = puVar2;
  }
  fn_004f0c04(iVar3);
  return;
}



undefined4 fn_00514440(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  if (*(byte *)(param_2 + 4) < 2) {
    iVar2 = *(int *)(param_1 + 0x18);
    cVar1 = *(char *)(param_2 + 5);
    bVar5 = *(int *)(iVar2 + 0xc) != 0;
    if (bVar5) {
      iVar2 = *(int *)(iVar2 + 8);
    }
    if (bVar5 && iVar2 != 0) {
      iVar2 = iVar2 + 8;
    }
    else {
      iVar2 = 0;
    }
    while (iVar2 - 0x100000U < 0x3ff00000) {
      if (*(char *)(iVar2 + 0x59c) == cVar1) {
        iVar3 = *(int *)(param_1 + 0x18);
        iVar4 = iVar2 + -8;
        if (*(int *)(iVar2 + -4) == iVar3 + 4) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(iVar2 + -4) + 8;
        }
        fn_004f0c1c(iVar3,iVar4);
        fn_004f0ab4(iVar3 + 0x10,iVar3 + 0x14,*(int *)(iVar3 + 0x20) + iVar4);
      }
      else {
        if (*(int *)(iVar2 + -4) == *(int *)(param_1 + 0x18) + 4) {
          return 0;
        }
        iVar2 = *(int *)(iVar2 + -4) + 8;
      }
    }
  }
  return 0;
}



undefined1 * fn_00513fd8(int param_1,uint param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  
  if (param_2 == 0) {
    return (undefined1 *)0xe0e14826;
  }
  iVar1 = fn_00509470();
  if (iVar1 == 0) {
    return &DAT_e0a1482b;
  }
  if (*(int *)(param_1 + 0x18) - 0x100000U < 0x3ff00000) {
    return &DAT_e0a14821;
  }
  puVar2 = (undefined4 *)fn_004ecfe0(0x2c);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    fn_004f0c04(puVar2);
    puVar2[5] = 0;
    puVar2[6] = 0;
    fn_004f0c04(puVar2 + 4);
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[8] = 0;
  }
  *(undefined4 **)(param_1 + 0x18) = puVar2;
  if (puVar2 + -0x40000 < (undefined4 *)0x3ff00000) {
    uVar6 = param_2 * 0x5a8;
    uVar3 = fn_004ed2e8();
    iVar1 = fn_00656e14(uVar6,uVar3);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      uVar4 = 0;
      if (uVar6 != 0) {
        do {
          puVar5 = (undefined1 *)(iVar1 + uVar4);
          uVar4 = uVar4 + 1;
          if (puVar5 != (undefined1 *)0x0) {
            *puVar5 = 0;
          }
        } while (uVar4 < uVar6);
      }
    }
    *(int *)(param_1 + 0x14) = iVar1;
    if (iVar1 - 0x100000U < 0x3ff00000) {
      iVar7 = *(int *)(param_1 + 0x18);
      if (param_2 != 0 && iVar1 != 0) {
        *(int *)(iVar7 + 0x24) = iVar1;
        *(uint *)(iVar7 + 0x28) = param_2;
        uVar6 = 0;
        if (param_2 != 0) {
          do {
            puVar2 = (undefined4 *)(*(int *)(iVar7 + 0x24) + uVar6 * 0x5a8);
            if (puVar2 != (undefined4 *)0x0) {
              *puVar2 = 0;
              puVar2[1] = 0;
            }
            fn_004f0b78(iVar7 + 0x10,iVar7 + 0x14,
                         *(int *)(iVar7 + 0x20) + *(int *)(iVar7 + 0x24) + uVar6 * 0x5a8);
            uVar6 = uVar6 + 1;
          } while (uVar6 < param_2);
        }
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x14) = 0;
      if (*(int *)(param_1 + 0x18) != 0) {
        fn_004ecfd0();
        *(undefined4 *)(param_1 + 0x18) = 0;
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (*(int *)(param_1 + 0x18) - 0x100000U < 0x3ff00000) {
    DAT_008ed948 = param_2;
    return (undefined1 *)0x0;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  return (undefined1 *)0xe0614820;
}



void fn_00513f50(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0x20;
  do {
    puVar1 = (undefined4 *)(param_1 + iVar2 * 0x18);
    *puVar1 = DAT_008c067c;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    iVar3 = iVar3 + -1;
    iVar2 = iVar2 + 1;
  } while (iVar3 != 0);
  *(undefined4 *)(param_1 + 0x300) = 0;
  *(undefined4 *)(param_1 + 0x304) = 0;
  *(undefined4 *)(param_1 + 0x338) = 0;
  *(undefined4 *)(param_1 + 0x328) = 0;
  *(undefined4 *)(param_1 + 0x33c) = 0;
  *(undefined4 *)(param_1 + 0x32c) = 0;
  *(undefined4 *)(param_1 + 0x330) = 0;
  return;
}



void fn_00513f10(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x300);
  if (iVar1 != 0) {
    iVar2 = 0;
    do {
      iVar1 = iVar1 + -1;
      iVar3 = param_1 + iVar2 * 0x18;
      iVar2 = iVar2 + 1;
      *(undefined4 *)(iVar3 + 4) = 0;
      *(undefined4 *)(iVar3 + 8) = 0;
    } while (iVar1 != 0);
  }
  *(undefined4 *)(param_1 + 0x304) = 0;
  *(undefined4 *)(param_1 + 0x328) = 0;
  *(undefined4 *)(param_1 + 0x32c) = 0;
  return;
}



undefined8 fn_00513e58(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(uint *)(param_1 + 0x300) < 0x20) {
    *(undefined4 *)(param_1 + *(uint *)(param_1 + 0x300) * 0x18) = param_2;
    iVar1 = *(int *)(param_1 + 0x300);
    *(int *)(param_1 + 0x300) = iVar1 + 1;
    return CONCAT44(iVar1,iVar1);
  }
  if (DAT_008c0630 != 0) {
    param_2 = 4;
  }
  return CONCAT44(param_2,0xffffffff);
}


