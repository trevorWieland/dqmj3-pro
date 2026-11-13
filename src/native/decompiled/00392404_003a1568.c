#include "00392404_003a1568.h"



void fn_003a1568(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  
  if (*(int *)(param_1 + 0xb4) == 0) {
    piVar7 = (int *)0x0;
    if (param_2 == 0) {
      puVar2 = (undefined4 *)fn_001f74ec(param_1,0xb1);
      if (puVar2 != (undefined4 *)0x0) {
        puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
        do {
          if (puVar3 == &DAT_00895c98) goto LAB_003a1624;
          puVar3 = (undefined4 *)*puVar3;
        } while (puVar3 != (undefined4 *)0x0);
      }
      puVar2 = (undefined4 *)0x0;
LAB_003a1624:
      *(undefined1 *)(puVar2 + 5) = 1;
      puVar2 = (undefined4 *)fn_001f74ec(param_1,0xd4);
      if (puVar2 != (undefined4 *)0x0) {
        puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
        do {
          if (puVar3 == &DAT_00894eb0) goto LAB_003a1670;
          puVar3 = (undefined4 *)*puVar3;
        } while (puVar3 != (undefined4 *)0x0);
      }
      puVar2 = (undefined4 *)0x0;
LAB_003a1670:
      uVar4 = fn_006bebf8(*(undefined4 *)(DAT_00897804 + 0x40));
      puVar2[2] = uVar4;
      puVar2[0x22] = 0x1b;
      puVar2[3] = 0xbe;
      puVar2[4] = 0xbe;
      uVar4 = fn_0022f584((char *)&DAT_003a18d4,0);
      puVar2[0x1f] = uVar4;
      iVar6 = 0;
      do {
        if (*(short *)(DAT_0089783c + iVar6 * 2 + 0x46) == 0) {
          iVar8 = iVar6;
          break;
        }
        iVar6 = iVar6 + 1;
        iVar8 = 0x32;
      } while (iVar6 < 0x32);
      fn_00301a9c(puVar2 + 5,DAT_0089783c + 0x46,iVar8 << 1);
      *(char *)(puVar2 + 0x1e) = (char)iVar8;
      fn_0068ab44(param_1,0x100094b);
      fn_006899f4(param_1,0xd4,0);
      return;
    }
    if (param_2 == 1) {
      piVar1 = (int *)fn_001f7510(param_1,0x4c);
      if (piVar1 != (int *)0x0) {
        puVar2 = (undefined4 *)(**(code **)*piVar1)(piVar1);
        do {
          if (puVar2 == &DAT_008946d4) {
            piVar7 = piVar1;
            break;
          }
          puVar2 = (undefined4 *)*puVar2;
        } while (puVar2 != (undefined4 *)0x0);
      }
      *(undefined1 *)(piVar7 + 2) = 4;
      uVar4 = fn_0022f750((char *)&DAT_003a1904);
      fn_003212cc(piVar7,uVar4);
      *(undefined1 *)(piVar7 + 7) = 0;
      uVar4 = fn_0022f584((char *)&DAT_003a1914,0);
      uVar5 = fn_0022f584((char *)&DAT_003a193c,0);
      fn_003212dc(piVar7,uVar5,uVar4,0);
      iVar6 = fn_0022f584((char *)&DAT_003a1964,0);
      piVar7[0xc] = iVar6;
      fn_003212bc(piVar7,**(undefined4 **)(DAT_00897804 + 0x44));
      fn_00689bd0(param_1,0x4c,0);
      *(undefined4 *)(param_1 + 0xbc) = 1;
    }
    else {
      if (param_2 == 2) {
        piVar1 = (int *)fn_001f74ec(param_1,0x95);
        if (piVar1 != (int *)0x0) {
          puVar2 = (undefined4 *)(**(code **)*piVar1)(piVar1);
          do {
            if (puVar2 == &DAT_00894c6c) {
              piVar7 = piVar1;
              break;
            }
            puVar2 = (undefined4 *)*puVar2;
          } while (puVar2 != (undefined4 *)0x0);
        }
        piVar7[2] = 0xbe;
        (**(code **)(*piVar7 + 0xc))(piVar7,*(undefined4 *)(param_1 + 100));
        fn_0068ab44(param_1,0x100094b);
        fn_006899f4(param_1,0x98,0);
        return;
      }
      if (param_2 == 3) {
        piVar1 = (int *)fn_001f74ec(param_1,0x95);
        if (piVar1 != (int *)0x0) {
          puVar2 = (undefined4 *)(**(code **)*piVar1)(piVar1);
          do {
            if (puVar2 == &DAT_00894c6c) {
              piVar7 = piVar1;
              break;
            }
            puVar2 = (undefined4 *)*puVar2;
          } while (puVar2 != (undefined4 *)0x0);
        }
        piVar7[0xd] = 0xbe;
        *(undefined1 *)(piVar7 + 0x281) = 1;
        fn_0068ab44(param_1,0x100094b);
        fn_006899f4(param_1,0x9e,0);
        return;
      }
    }
  }
  return;
}



void fn_003a04c4(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 local_20;
  
  iVar1 = (**(code **)(*param_1 + 8))(param_1);
  puVar4 = (undefined4 *)param_1[6];
  uVar5 = *(undefined4 *)(iVar1 + 8);
  if (puVar4 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar4)(puVar4);
    do {
      if (puVar2 == &DAT_00897040) goto LAB_003a0524;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar4 = (undefined4 *)0x0;
LAB_003a0524:
  if (*(int *)(puVar4[4] + -4) == 0) {
    if (puVar4[6] == 0) {
      return;
    }
    iVar3 = fn_00145b00(0x3c,&DAT_00812c8c);
    iVar1 = 0;
    if (iVar3 != 0) {
      iVar1 = fn_00172cfc();
    }
    param_1[0x1b] = iVar1;
    puVar2 = (undefined4 *)fn_00145b00(100,&DAT_00812c8c);
    iVar1 = 0;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
      puVar2[1] = 0;
      iVar1 = fn_0013f7ec(puVar2 + 2);
      iVar1 = iVar1 + -8;
    }
    param_1[0x1c] = iVar1;
    iVar3 = fn_00145b00(0x28,&DAT_00812c8c);
    iVar1 = 0;
    if (iVar3 != 0) {
      iVar1 = fn_0013f86c();
    }
    param_1[0x1d] = iVar1;
    fn_0013f814(param_1[0x1c],puVar4[6],&DAT_003a0650);
    fn_0017d938(param_1[0x1d],param_1[0x1c]);
    local_20 = CONCAT22(((unsigned int)(local_20) >> 16) & 0xffff,1);
    fn_00172be0(param_1[0x1b],puVar4[5],param_1[0x1d],0,0,&local_20);
    iVar1 = fn_001c8228(uVar5,param_1[0x1b],0,1,0);
  }
  else {
    iVar1 = fn_001481c8(uVar5,puVar4[4],&DAT_003a0650,1,1);
    param_1[0x19] = iVar1;
    local_20 = 0;
    iVar1 = fn_001480d0(uVar5,iVar1,puVar4[5],&DAT_003a0654,0,1);
  }
  param_1[0x1a] = iVar1;
  return;
}



undefined4 fn_0039696c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = fn_00154ac8(0x33);
  if ((iVar1 == 0) || (iVar1 = fn_00154ac8(0x20), iVar1 == 0)) {
    if (param_2 == 0) {
      iVar1 = fn_006b2a40(*(undefined4 *)(DAT_00897804 + 0x28));
      if (iVar1 < 1) {
        uVar2 = fn_0022eefc(0x385,0);
        return uVar2;
      }
    }
    else if (param_2 == 1) {
      iVar1 = fn_00154ac8(0x20);
      if (iVar1 == 0) {
        uVar2 = fn_0022eefc(0x3a4,0);
        return uVar2;
      }
      iVar1 = fn_006b2a40(*(undefined4 *)(DAT_00897804 + 0x28));
      if (99 < iVar1) {
        uVar2 = fn_0022eefc(0x387,0);
        return uVar2;
      }
      uVar3 = 0;
      do {
        iVar1 = fn_006e9c94(*(undefined4 *)(param_1 + 0xd4),uVar3 & 0xff);
        if (iVar1 == 0) {
          uVar2 = fn_0022eefc(0x386,0);
          return uVar2;
        }
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < 3);
    }
    else if (param_2 == 2) {
      iVar1 = fn_00344f8c();
      if (iVar1 < 1) {
        uVar2 = fn_0022eefc(0x3a6,0);
        return uVar2;
      }
    }
    else if ((param_2 == 4) &&
            (iVar1 = fn_006b2a40(*(undefined4 *)(DAT_00897804 + 0x28)), iVar1 < 1)) {
      uVar2 = fn_0022eefc(0x388,0);
      return uVar2;
    }
  }
  else if (((param_2 != 1) || (*(char *)(*(int *)(param_1 + 0xd0) + 8) != '\0')) &&
          ((*(char *)(*(int *)(param_1 + 0xd0) + 8) == '\0' ||
           (iVar1 = fn_006ba220(param_1,param_2), iVar1 == 0)))) {
    uVar2 = fn_0022eefc(0x3b6,0);
    return uVar2;
  }
  return 0;
}



void fn_00392404(int *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)param_1[6];
  if (puVar5 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar5)(puVar5);
    do {
      if (puVar2 == &DAT_008963d8) goto LAB_00392450;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar5 = (undefined4 *)0x0;
LAB_00392450:
  param_1[0x34] = (int)puVar5;
  puVar5 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1);
  if (puVar5 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar5)(puVar5);
    do {
      if (puVar2 == &DAT_008963ac) goto LAB_00392498;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar5 = (undefined4 *)0x0;
LAB_00392498:
  fn_003c1e5c(puVar5);
  iVar3 = fn_00154ac8(0x47d);
  if (iVar3 != 0) {
    iVar3 = fn_00154ac8(0x335);
    if (iVar3 == 0) {
      *(undefined1 *)(param_1 + 0x3a) = 1;
    }
    bVar1 = fn_00154ac8(0x331);
    *(byte *)((int)param_1 + 0xe9) = bVar1 ^ 1;
  }
  fn_0039279c(param_1);
  fn_0043c608(param_1);
  iVar3 = 0;
  piVar4 = (int *)param_1[0x37];
  do {
    if (piVar4 == (int *)param_1[0x38]) {
LAB_00392548:
      fn_002d66f4(DAT_00897828);
      fn_00689d10(param_1,0x39,0);
      iVar3 = fn_001f7e04(param_1,0x80);
      if (iVar3 != 0) {
        fn_00689878(param_1,0);
      }
      iVar3 = fn_006896fc(param_1,0x7a);
      if (iVar3 != 0) {
        fn_006898b8(param_1,0x7a,0);
      }
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
    if ((*(int *)(*piVar4 + 8) == 0xe7) && (*(char *)((int)param_1 + 0xe9) != '\0')) {
      fn_002c32c4(param_1,iVar3,1);
      goto LAB_00392548;
    }
    piVar4 = piVar4 + 1;
    iVar3 = iVar3 + 1;
  } while( true );
}


