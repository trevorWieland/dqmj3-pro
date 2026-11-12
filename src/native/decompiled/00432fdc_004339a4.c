#include "00432fdc_004339a4.h"



void fn_004339a4(int param_1)

{
  if (*(char *)(param_1 + 0xe5) == '\0') {
    fn_004318ac(param_1);
    fn_0068b14c(*(undefined4 *)(param_1 + 0x11c),1);
    return;
  }
  fn_0068b14c(*(undefined4 *)(param_1 + 0x118),0);
  fn_0068b14c(*(undefined4 *)(param_1 + 0x11c),0);
  return;
}



void fn_004335e4(int param_1)

{
  uint uVar1;
  
  fn_0042fe80();
  uVar1 = *(uint *)(*(int *)(param_1 + 0x114) + 0xc);
  if ((uVar1 & 8) != 0) {
    fn_0043243c();
    return;
  }
  if ((uVar1 & 4) == 0) {
    return;
  }
  fn_00433620(param_1);
  return;
}



void fn_00433620(int param_1)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  uint local_48;
  uint local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  
  piVar2 = *(int **)(param_1 + 0xb0);
  local_28 = piVar2[10];
  iVar9 = piVar2[8];
  iVar3 = (**(code **)(*piVar2 + 0x14))();
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  uVar8 = *(undefined4 *)(DAT_00897804 + 0xc);
  local_3c = fn_00433514(param_1,&local_38);
  piVar2 = (int *)fn_002c11d0(param_1,1,0);
  fn_0079e0cc(&local_48,piVar2 + 1);
  iVar4 = fn_002f83c0(&local_38,local_3c);
  uVar7 = 0;
  iVar10 = (int)(local_44 - local_48) >> 2;
  if (iVar4 == 0) {
    if (iVar10 != 0) {
      do {
        iVar10 = (**(code **)(*piVar2 + 0xc))(piVar2,uVar7);
        *(undefined1 *)(iVar10 + 0x35) = 0;
        uVar7 = uVar7 + 1;
      } while (uVar7 < (uint)((int)(local_44 - local_48) >> 2));
    }
  }
  else if (iVar10 != 0) {
    do {
      iVar10 = *(int *)(piVar2[1] + uVar7 * 4);
      if (iVar10 != 0) {
        iVar4 = (**(code **)(*piVar2 + 0xc))(piVar2,uVar7);
        uVar5 = fn_0028aad0(uVar8,iVar10);
        uVar1 = fn_002f7e9c(0,0,uVar5);
        *(undefined1 *)(iVar4 + 0x35) = uVar1;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < (uint)((int)(local_44 - local_48) >> 2));
  }
  uVar7 = local_48;
  if (local_44 < local_48) {
    do {
      uVar7 = uVar7 + 4;
    } while (uVar7 != local_44);
  }
  fn_001008c4(local_48,(int)(local_40 - local_48) >> 2,0);
  iVar10 = 0;
  if (0 < iVar9 * iVar3) {
    do {
      iVar4 = fn_002e3e9c(*(undefined4 *)(param_1 + 0xb0),local_28,iVar10);
      if (iVar4 != 0) {
        iVar6 = fn_003467f8(*(undefined4 *)(param_1 + 0xb0),iVar10);
        uVar5 = fn_0028aad0(uVar8,iVar4);
        uVar1 = fn_002f7e9c(&local_38,local_3c,uVar5);
        *(undefined1 *)(iVar6 + 0x35) = uVar1;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar9 * iVar3);
  }
  return;
}



int fn_00433514(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint local_20;
  uint local_1c;
  int local_18;
  
  iVar2 = 0;
  uVar4 = *(undefined4 *)(DAT_00897804 + 0xc);
  iVar1 = fn_002c11d0(param_1,1,0);
  fn_0079e0cc(&local_20,iVar1 + 4);
  uVar3 = 0;
  if ((int)(local_1c - local_20) >> 2 != 0) {
    do {
      if (*(int *)(local_20 + uVar3 * 4) != 0) {
        iVar1 = fn_006b8390(uVar4);
        *(int *)(param_2 + iVar2 * 4) = iVar1;
        if (iVar1 != 0) {
          iVar2 = iVar2 + 1;
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)((int)(local_1c - local_20) >> 2));
  }
  uVar3 = local_20;
  if (local_1c < local_20) {
    do {
      uVar3 = uVar3 + 4;
    } while (uVar3 != local_1c);
  }
  fn_001008c4(local_20,(int)(local_18 - local_20) >> 2,0);
  return iVar2;
}



undefined4 fn_004333b0(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint local_1c;
  uint local_18;
  int local_14;
  
  if (*(int *)(param_1 + 0xa4) - *(int *)(param_1 + 0xa0) >> 2 == 0) {
    fn_002ff628(9,&DAT_008c7655,&DAT_008c7655,0,0);
  }
  fn_0079e0cc(&local_1c,**(int **)(param_1 + 0xa0) + 4);
  uVar2 = 0;
  if ((int)(local_18 - local_1c) >> 2 != 0) {
    do {
      uVar1 = (int)(local_18 - local_1c) >> 2;
      if (uVar1 <= uVar2) {
        fn_002ff628(9,&DAT_008c760d,&DAT_008c760d,uVar2,uVar1);
      }
      if (*(int *)(local_1c + uVar2 * 4) == param_2) {
        uVar2 = local_1c;
        if (local_18 < local_1c) {
          do {
            uVar2 = uVar2 + 4;
          } while (uVar2 != local_18);
        }
        fn_001008c4(local_1c,(int)(local_14 - local_1c) >> 2,0);
        return 1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)((int)(local_18 - local_1c) >> 2));
  }
  uVar2 = local_1c;
  if (local_18 < local_1c) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != local_18);
  }
  fn_001008c4(local_1c,(int)(local_14 - local_1c) >> 2,0);
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x004331b4) */
/* WARNING: Removing unreachable block (ram,0x004331b8) */
/* WARNING: Removing unreachable block (ram,0x004331bc) */
/* WARNING: Removing unreachable block (ram,0x004331c0) */
/* WARNING: Removing unreachable block (ram,0x004331c4) */

void fn_00432fdc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  int *piVar12;
  undefined8 uVar13;
  
  uVar1 = *(undefined4 *)(DAT_00897804 + 0xc);
  iVar2 = fn_002c11d0(param_1,1,0);
  fn_0028a66c(uVar1);
  fn_0028ad18(uVar1,*(undefined4 *)(param_1 + 0xf4));
  fn_0028b674(uVar1,*(undefined4 *)(param_1 + 0xf8));
  iVar9 = 0;
  do {
    if (*(int *)(*(int *)(iVar2 + 4) + iVar9 * 4) != 0) {
      fn_0028b7ac(uVar1);
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 < 4);
  piVar12 = (int *)0x0;
  iVar2 = 0;
  piVar7 = (int *)0x0;
  piVar10 = (int *)0x0;
  do {
    uVar13 = fn_0028b348(uVar1,iVar2);
    iVar9 = (int)((ulonglong)uVar13 >> 0x20);
    piVar6 = (int *)uVar13;
    if (piVar6 != (int *)0x0) {
      iVar9 = *piVar6;
    }
    piVar4 = piVar7;
    piVar5 = piVar10;
    if (piVar6 != (int *)0x0 && iVar9 != 0) {
      if (piVar10 == piVar12) {
        uVar11 = (int)piVar10 - (int)piVar7 >> 2;
        if (uVar11 < (uint)((int)piVar12 - (int)piVar7 >> 2)) {
          piVar7 = piVar10 + -1;
          if (piVar10 != (int *)0x0) {
            *piVar10 = piVar10[-1];
          }
          piVar5 = piVar10 + 1;
          piVar3 = piVar10;
          if (piVar10 < piVar7) {
            iVar9 = (int)piVar7 - (int)piVar10;
            if (0 < iVar9) {
              if (iVar9 * 0x20000000 < 0) {
                piVar7 = piVar10 + -2;
                piVar3 = piVar10 + -1;
                *piVar3 = *piVar7;
              }
              for (iVar9 = iVar9 >> 3; iVar9 != 0; iVar9 = iVar9 + -1) {
                piVar3[-1] = piVar7[-1];
                piVar7 = piVar7 + -2;
                piVar3 = piVar3 + -2;
                *piVar3 = *piVar7;
              }
            }
          }
          else {
            while (piVar10 != piVar7) {
              piVar7 = piVar7 + -1;
              piVar3[-1] = *piVar7;
              piVar3 = piVar3 + -1;
            }
          }
          *piVar10 = *piVar6;
        }
        else {
          uVar8 = uVar11 + (uVar11 >> 1) + (uVar11 >> 3);
          if (uVar8 < uVar11 + 0x20) {
            uVar8 = uVar11 + 0x20;
          }
          piVar4 = (int *)fn_00100fc6(uVar8 << 2,0);
          piVar3 = piVar4;
          for (piVar5 = piVar7; piVar5 != piVar10; piVar5 = piVar5 + 1) {
            if (piVar3 != (int *)0x0) {
              *piVar3 = *piVar5;
            }
            piVar3 = piVar3 + 1;
          }
          piVar5 = (int *)(((int)piVar10 - (int)piVar7 & 0xfffffffcU) + (int)piVar4);
          if (piVar5 != (int *)0x0) {
            *piVar5 = *piVar6;
          }
          piVar6 = piVar7;
          if (piVar10 < piVar7) {
            do {
              piVar6 = piVar6 + 1;
            } while (piVar6 != piVar10);
          }
          fn_001008c4(piVar7,(int)piVar12 - (int)piVar7 >> 2,0);
          piVar5 = piVar4 + ((int)piVar10 - (int)piVar7 >> 2) + 1;
          piVar12 = piVar4 + uVar8;
        }
      }
      else {
        if (piVar10 != (int *)0x0) {
          *piVar10 = *piVar6;
        }
        piVar5 = piVar10 + 1;
      }
    }
    iVar2 = iVar2 + 1;
    piVar7 = piVar4;
    piVar10 = piVar5;
  } while (iVar2 < 4);
  fn_0028acf4(uVar1);
  iVar2 = 0;
  do {
    piVar7 = (int *)fn_0028b0a0(uVar1,iVar2);
    iVar9 = 0;
    if (piVar7 != (int *)0x0) {
      iVar9 = *piVar7;
    }
    if ((piVar7 != (int *)0x0 && iVar9 != 0) && (uVar11 = 0, (int)piVar5 - (int)piVar4 >> 2 != 0)) {
      do {
        uVar8 = (int)piVar5 - (int)piVar4 >> 2;
        if (uVar8 <= uVar11) {
          fn_002ff628(9,&DAT_008c7672,&DAT_008c7672,uVar11,uVar8);
        }
        if (piVar4[uVar11] == *piVar7) {
          uVar8 = (int)piVar5 - (int)piVar4 >> 2;
          if (uVar8 <= uVar11) {
            fn_002ff628(9,&DAT_008c7672,&DAT_008c7672,uVar11,uVar8);
          }
          piVar4[uVar11] = 0;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < (uint)((int)piVar5 - (int)piVar4 >> 2));
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  uVar11 = 0;
  if ((int)piVar5 - (int)piVar4 >> 2 != 0) {
    do {
      uVar8 = (int)piVar5 - (int)piVar4 >> 2;
      if (uVar8 <= uVar11) {
        fn_002ff628(9,&DAT_008c7672,&DAT_008c7672,uVar11,uVar8);
      }
      if (piVar4[uVar11] != 0) {
        uVar8 = (int)piVar5 - (int)piVar4 >> 2;
        if (uVar8 <= uVar11) {
          fn_002ff628(9,&DAT_008c7672,&DAT_008c7672,uVar11,uVar8);
        }
        fn_0028a588(uVar1,piVar4[uVar11]);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < (uint)((int)piVar5 - (int)piVar4 >> 2));
  }
  piVar7 = piVar4;
  if (piVar5 < piVar4) {
    do {
      piVar7 = piVar7 + 1;
    } while (piVar7 != piVar5);
  }
  fn_002feef8(piVar4,(int)piVar12 - (int)piVar4 >> 2,0);
  return;
}


