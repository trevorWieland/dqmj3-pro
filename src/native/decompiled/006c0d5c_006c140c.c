#include "006c0d5c_006c140c.h"



undefined4 fn_006c140c(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_2 < 0x15) && (*(int *)(*(int *)(param_1 + 4) + param_2 * 4) != 0)) {
    uVar1 = fn_00145ac0();
  }
  return uVar1;
}



void fn_006c13f8(undefined1 *param_1,undefined1 *param_2,int param_3)

{
  if (param_3 == 0) {
    param_2[1] = *param_1;
  }
  else {
    *param_2 = *param_1;
  }
  return;
}



void fn_006c1108(int param_1,undefined1 *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint unaff_r5;
  int iVar4;
  bool bVar5;
  
  iVar4 = 0;
  do {
    if (param_3 == 0) {
      cVar1 = *(char *)(param_1 + iVar4);
      iVar2 = (int)cVar1;
      if (iVar2 - 0x10U < 8) {
        if (3 < iVar2 - 0x10U) goto LAB_006c12c8;
LAB_006c12e4:
        cVar1 = cVar1 + '\x04';
      }
      else if (iVar2 - 0x18U < 8) {
LAB_006c12c8:
        if ((iVar2 - 0x18U < 4) || (iVar2 == 0x20 || iVar2 == 0x22)) goto LAB_006c12e4;
        cVar1 = cVar1 + -4;
      }
      else if (iVar2 - 0x20U < 2) {
        if (iVar2 == 0x20 || iVar2 == 0x22) {
          cVar1 = '!';
        }
        else {
          cVar1 = ' ';
        }
      }
      else if (iVar2 - 0x22U < 2) {
        if (iVar2 == 0x20 || iVar2 == 0x22) {
          cVar1 = '#';
        }
        else {
          cVar1 = '\"';
        }
      }
      else {
        cVar1 = '\0';
      }
      param_2[iVar4 + 0x10] = cVar1;
      cVar1 = *(char *)(param_1 + iVar4 + 4);
      iVar2 = (int)cVar1;
      unaff_r5 = iVar2 - 0x10;
      if (unaff_r5 < 8) {
        if (3 < unaff_r5) goto LAB_006c137c;
LAB_006c1398:
        cVar1 = cVar1 + '\x04';
      }
      else if (iVar2 - 0x18U < 8) {
LAB_006c137c:
        unaff_r5 = iVar2 - 0x18;
        if ((unaff_r5 < 4) || (iVar2 == 0x20 || iVar2 == 0x22)) goto LAB_006c1398;
        cVar1 = cVar1 + -4;
      }
      else {
        unaff_r5 = iVar2 - 0x20;
        if (unaff_r5 < 2) {
          if (iVar2 == 0x20 || iVar2 == 0x22) {
            cVar1 = '!';
          }
          else {
            cVar1 = ' ';
          }
        }
        else {
          unaff_r5 = iVar2 - 0x22;
          if (unaff_r5 < 2) {
            if (iVar2 == 0x20 || iVar2 == 0x22) {
              cVar1 = '#';
            }
            else {
              cVar1 = '\"';
            }
          }
          else {
            cVar1 = '\0';
          }
        }
      }
      param_2[iVar4 + 0x14] = cVar1;
    }
    else {
      cVar1 = *(char *)(param_1 + iVar4);
      iVar2 = (int)cVar1;
      if (param_3 != 1) {
        uVar3 = iVar2 - 0x10;
        if (uVar3 >= 8) {
          unaff_r5 = iVar2 - 0x18;
        }
        if (uVar3 < 8 || unaff_r5 < 8) {
          bVar5 = uVar3 < 4;
          if (!bVar5) {
            uVar3 = iVar2 - 0x18;
          }
          if ((bVar5 || uVar3 < 4) || (iVar2 == 0x20 || iVar2 == 0x22)) {
            cVar1 = cVar1 + '\x04';
          }
          else {
            cVar1 = cVar1 + -4;
          }
        }
        else if (iVar2 - 0x20U < 2) {
          if (iVar2 == 0x20 || iVar2 == 0x22) {
            cVar1 = '!';
          }
          else {
            cVar1 = ' ';
          }
        }
        else if (iVar2 - 0x22U < 2) {
          if (iVar2 == 0x20 || iVar2 == 0x22) {
            cVar1 = '#';
          }
          else {
            cVar1 = '\"';
          }
        }
        else {
          cVar1 = '\0';
        }
      }
      uVar3 = param_1 + iVar4;
      param_2[iVar4 + 4] = cVar1;
      cVar1 = *(char *)(uVar3 + 4);
      iVar2 = (int)cVar1;
      if (param_3 != 1) {
        unaff_r5 = iVar2 - 0x10;
        if (unaff_r5 >= 8) {
          uVar3 = iVar2 - 0x18;
        }
        if (unaff_r5 < 8 || uVar3 < 8) {
          bVar5 = unaff_r5 < 4;
          if (!bVar5) {
            unaff_r5 = iVar2 - 0x18;
          }
          if ((bVar5 || unaff_r5 < 4) || (iVar2 == 0x20 || iVar2 == 0x22)) {
            cVar1 = cVar1 + '\x04';
          }
          else {
            cVar1 = cVar1 + -4;
          }
        }
        else {
          unaff_r5 = iVar2 - 0x20;
          if (unaff_r5 < 2) {
            if (iVar2 == 0x20 || iVar2 == 0x22) {
              cVar1 = '!';
            }
            else {
              cVar1 = ' ';
            }
          }
          else {
            unaff_r5 = iVar2 - 0x22;
            if (unaff_r5 < 2) {
              if (iVar2 == 0x20 || iVar2 == 0x22) {
                cVar1 = '#';
              }
              else {
                cVar1 = '\"';
              }
            }
            else {
              cVar1 = '\0';
            }
          }
        }
      }
      param_2[iVar4 + 8] = cVar1;
    }
    iVar4 = iVar4 + 1;
    if (3 < iVar4) {
      if (param_3 == 0) {
        param_2[0xc] = *(undefined1 *)(param_1 + 0x10);
      }
      else {
        *param_2 = *(undefined1 *)(param_1 + 0x10);
      }
      return;
    }
  } while( true );
}



void fn_006c0f40(int param_1,int param_2,undefined1 *param_3,uint param_4)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  
  iVar6 = 0;
  uVar5 = param_4;
  do {
    if (param_4 == 0) {
      cVar1 = *(char *)(param_1 + iVar6);
      iVar3 = (int)cVar1;
      if (iVar3 - 0x10U < 8) {
        if (3 < iVar3 - 0x10U) goto LAB_006c105c;
LAB_006c1078:
        cVar1 = cVar1 + '\x04';
      }
      else if (iVar3 - 0x18U < 8) {
LAB_006c105c:
        if ((iVar3 - 0x18U < 4) || (iVar3 == 0x20 || iVar3 == 0x22)) goto LAB_006c1078;
        cVar1 = cVar1 + -4;
      }
      else if (iVar3 - 0x20U < 2) {
        if (iVar3 == 0x20 || iVar3 == 0x22) {
          cVar1 = '!';
        }
        else {
          cVar1 = ' ';
        }
      }
      else if (iVar3 - 0x22U < 2) {
        if (iVar3 == 0x20 || iVar3 == 0x22) {
          cVar1 = '#';
        }
        else {
          cVar1 = '\"';
        }
      }
      else {
        cVar1 = '\0';
      }
      *(char *)(param_2 + iVar6 + 3) = cVar1;
    }
    else {
      cVar1 = *(char *)(param_1 + iVar6);
      iVar3 = (int)cVar1;
      if (param_4 != 1) {
        uVar4 = iVar3 - 0x10;
        if (uVar4 >= 8) {
          uVar5 = iVar3 - 0x18;
        }
        if (uVar4 < 8 || uVar5 < 8) {
          bVar7 = uVar4 < 4;
          if (!bVar7) {
            uVar4 = iVar3 - 0x18;
          }
          if ((bVar7 || uVar4 < 4) || (iVar3 == 0x20 || iVar3 == 0x22)) {
            cVar1 = cVar1 + '\x04';
          }
          else {
            cVar1 = cVar1 + -4;
          }
        }
        else if (iVar3 - 0x20U < 2) {
          if (iVar3 == 0x20 || iVar3 == 0x22) {
            cVar1 = '!';
          }
          else {
            cVar1 = ' ';
          }
        }
        else if (iVar3 - 0x22U < 2) {
          if (iVar3 == 0x20 || iVar3 == 0x22) {
            cVar1 = '#';
          }
          else {
            cVar1 = '\"';
          }
        }
        else {
          cVar1 = '\0';
        }
      }
      *(char *)(param_2 + iVar6) = cVar1;
    }
    iVar6 = iVar6 + 1;
    if (1 < iVar6) {
      if (param_4 == 0) {
        *(undefined1 *)(param_2 + 5) = *(undefined1 *)(param_1 + 4);
      }
      else {
        *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_1 + 4);
      }
      uVar2 = fn_00620290((int)*(char *)(param_1 + 6),param_4 ^ 1);
      *param_3 = uVar2;
      uVar2 = fn_00620290((int)*(char *)(param_1 + 7),param_4 ^ 1);
      param_3[1] = uVar2;
      return;
    }
  } while( true );
}



int fn_006c0e78(int param_1,int param_2)

{
  return *(int *)(param_1 + 0x19c) + param_2 * 0x50 + 0x3c;
}



void fn_006c0d5c(int param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  
  uVar4 = 0;
  iVar8 = *(int *)(param_1 + 400);
  uVar2 = *(uint *)(param_1 + 0x10);
  uVar9 = *(int *)(param_1 + 0x194) - iVar8;
  uVar5 = 0xffffffff;
  iVar10 = (int)((longlong)(int)uVar9 * -0x15f15f15 + ((ulonglong)uVar9 << 0x20) >> 0x20);
  uVar3 = uVar2;
  if (iVar10 >> 8 != iVar10 >> 0x1f) {
    do {
      pcVar6 = (char *)(iVar8 + uVar4 * 0x118);
      cVar1 = *pcVar6;
      if (cVar1 == '\x01' || cVar1 == '\x02') {
        if ((uVar2 == uVar3) || (*(char *)(iVar8 + uVar3 * 0x118) != '\x03')) {
          uVar7 = *(uint *)(pcVar6 + 0x110);
joined_r0x006c0e20:
          if (uVar7 < uVar5) {
            uVar3 = uVar4;
            uVar5 = uVar7;
          }
        }
      }
      else if (cVar1 == '\x03') {
        if ((uVar2 != uVar3) && (*(char *)(iVar8 + uVar3 * 0x118) == '\x03')) {
          uVar7 = *(uint *)(pcVar6 + 0x110);
          goto joined_r0x006c0e20;
        }
        uVar3 = uVar4;
        uVar5 = *(uint *)(pcVar6 + 0x110);
      }
      uVar4 = uVar4 + 1;
      iVar10 = (int)((longlong)(int)uVar9 * -0x15f15f15 + ((ulonglong)uVar9 << 0x20) >> 0x20);
    } while (uVar4 < (uint)((iVar10 >> 8) - (iVar10 >> 0x1f)));
  }
  return;
}


