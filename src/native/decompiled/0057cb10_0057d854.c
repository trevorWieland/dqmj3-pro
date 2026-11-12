#include "0057cb10_0057d854.h"



void fn_0057d854(int *param_1,int param_2,int param_3)

{
  fn_002c2070();
  if (param_2 == 1 || param_2 == 2) {
    (**(code **)(*param_1 + 0x110))(param_1,6,0,0,1);
    return;
  }
  if (param_2 == 6 && param_3 == 0) {
    (**(code **)(*param_1 + 0x110))(param_1,1,3,0,1);
  }
  return;
}



void fn_0057d7b8(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((((char)param_1[3] == '\x03') && ((char)param_1[0x3a] != '\x01')) &&
      (iVar1 = (**(code **)(*param_1 + 0x1a0))(param_1), iVar1 != 0)) &&
     (param_2 == 6 && param_3 == 0)) {
    fn_0068ab44(param_1,0x100094b);
    uVar2 = 0;
    if (param_1[0x39] != 0) {
      uVar2 = *(undefined4 *)(param_1[0x39] + 8);
    }
    fn_006899f4(param_1,uVar2,1);
    fn_006898b8(param_1,0x2d,0);
    *(undefined1 *)(param_1 + 0x3a) = 1;
  }
  return;
}



void fn_0057d700(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((((char)param_1[3] == '\x03') && ((char)param_1[0x3a] != '\x01')) &&
     (iVar1 = (**(code **)(*param_1 + 0x1a0))(param_1), iVar1 != 0)) {
    fn_0068ab44(param_1,0x100094c);
    uVar2 = 0;
    if (param_1[0x39] != 0) {
      uVar2 = *(undefined4 *)(param_1[0x39] + 8);
    }
    fn_006899f4(param_1,uVar2,1);
    fn_006898b8(param_1,0x2d,0);
    *(undefined1 *)(param_1 + 0x3a) = 1;
  }
  return;
}



void fn_0057d66c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((((char)param_1[3] == '\x03') && ((char)param_1[0x3a] != '\x01')) &&
      (iVar1 = (**(code **)(*param_1 + 0x1a0))(param_1), iVar1 != 0)) && (param_1[0x19] == 6)) {
    fn_0068ab44(param_1,0x100094b);
    uVar2 = 0;
    if (param_1[0x39] != 0) {
      uVar2 = *(undefined4 *)(param_1[0x39] + 8);
    }
    fn_006899f4(param_1,uVar2,1);
    fn_006898b8(param_1,0x2d,0);
    *(undefined1 *)(param_1 + 0x3a) = 1;
  }
  return;
}



void fn_0057d650(int param_1,undefined1 param_2)

{
  fn_002c0bc0();
  *(undefined1 *)(*(int *)(param_1 + 0xe0) + 0x48) = param_2;
  return;
}



void fn_0057d568(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  if (param_1[0x19] == 6) {
    *(undefined1 *)(param_1[0x38] + 0x46) = 0;
    (**(code **)(*param_1 + 0x19c))(param_1,0);
  }
  fn_002c07e4(param_1,param_2,param_3,param_4,param_5);
  if (param_1[0x19] == 6) {
    *(undefined1 *)(param_1[0x38] + 0x46) = 1;
    (**(code **)(*(int *)param_1[0x38] + 0x2c))((int *)param_1[0x38],0,0);
    (**(code **)(*param_1 + 0x19c))(param_1,0,1);
  }
  if (param_2 < 6) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0057d640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 400))(param_1,0);
  return;
}



void fn_0057ce38(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 unaff_r4;
  uint uVar4;
  undefined4 unaff_r5;
  int *piVar5;
  undefined4 unaff_r6;
  
  if (*(int **)(param_1 + 0xe0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xe0) + 4))();
    *(undefined4 *)(param_1 + 0xe0) = 0;
  }
  if (*(int **)(param_1 + 0xdc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xdc) + 4))();
    *(undefined4 *)(param_1 + 0xdc) = 0;
  }
  if (*(int **)(param_1 + 0xd8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xd8) + 0x18))();
    if (*(int **)(param_1 + 0xd8) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xd8) + 4))();
      *(undefined4 *)(param_1 + 0xd8) = 0;
    }
  }
  if (*(int *)(param_1 + 0xd4) != 0) {
    fn_002feef8();
    *(undefined4 *)(param_1 + 0xd4) = 0;
  }
  if (*(int **)(param_1 + 0x8c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x8c) + 4))();
    *(undefined4 *)(param_1 + 0x8c) = 0;
  }
  if (*(int **)(param_1 + 0x98) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x98) + 0x14))();
    if (*(int **)(param_1 + 0x98) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x98) + 4))();
      *(undefined4 *)(param_1 + 0x98) = 0;
    }
  }
  uVar4 = 0;
  if (*(int *)(param_1 + 0xa4) - *(int *)(param_1 + 0xa0) >> 2 != 0) {
    do {
      uVar2 = *(int *)(param_1 + 0xa4) - *(int *)(param_1 + 0xa0) >> 2;
      if (uVar2 <= uVar4) {
        fn_002ff628(9,&DAT_008c7655,&DAT_008c7655,uVar4,uVar2,unaff_r4,unaff_r5,unaff_r6);
        param_4 = uVar2;
      }
      piVar5 = *(int **)(*(int *)(param_1 + 0xa0) + uVar4 * 4);
      (**(code **)(*piVar5 + 0x24))(piVar5);
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 0x20))(piVar5);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)(*(int *)(param_1 + 0xa4) - *(int *)(param_1 + 0xa0) >> 2));
  }
  uVar4 = *(uint *)(param_1 + 0xa4);
  uVar2 = *(uint *)(param_1 + 0xa0);
  if (uVar2 != uVar4) {
    uVar1 = uVar2;
    if (uVar4 <= uVar2) {
      do {
        uVar1 = uVar1 + 4;
      } while (uVar1 != uVar4);
    }
    *(uint *)(param_1 + 0xa4) = uVar4 - (uVar4 - uVar2 & 0xfffffffc);
  }
  uVar1 = *(uint *)(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0xa0) = 0;
  uVar2 = *(uint *)(param_1 + 0xa4);
  *(undefined4 *)(param_1 + 0xa4) = 0;
  iVar3 = *(int *)(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  uVar4 = uVar1;
  if (uVar2 < uVar1) {
    do {
      uVar4 = uVar4 + 4;
    } while (uVar4 != uVar2);
  }
  fn_001008c4(uVar1,(int)(iVar3 - uVar1) >> 2,0,iVar3,param_4);
  if (*(int **)(param_1 + 0x9c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x9c) + 0x24))();
    if (*(int **)(param_1 + 0x9c) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x9c) + 0x20))();
      *(undefined4 *)(param_1 + 0x9c) = 0;
    }
  }
  if (*(int **)(param_1 + 0xac) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xac) + 0x24))();
    if (*(int **)(param_1 + 0xac) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xac) + 0x20))();
      *(undefined4 *)(param_1 + 0xac) = 0;
    }
  }
  if (*(int **)(param_1 + 0xb0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xb0) + 0x24))();
    if (*(int **)(param_1 + 0xb0) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xb0) + 0x20))();
      *(undefined4 *)(param_1 + 0xb0) = 0;
    }
  }
  if (*(int **)(param_1 + 0xb4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xb4) + 0x24))();
    if (*(int **)(param_1 + 0xb4) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xb4) + 0x20))();
      *(undefined4 *)(param_1 + 0xb4) = 0;
    }
  }
  if (*(int **)(param_1 + 0xb8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xb8) + 0x24))();
    if (*(int **)(param_1 + 0xb8) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xb8) + 0x20))();
      *(undefined4 *)(param_1 + 0xb8) = 0;
    }
  }
  if (*(int **)(param_1 + 0xbc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xbc) + 0x24))();
    if (*(int **)(param_1 + 0xbc) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xbc) + 0x20))();
      *(undefined4 *)(param_1 + 0xbc) = 0;
    }
  }
  if (*(int **)(param_1 + 0x94) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x94) + 0x18))();
    if (*(int **)(param_1 + 0x94) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x94) + 4))();
      *(undefined4 *)(param_1 + 0x94) = 0;
    }
  }
  if (*(int *)(param_1 + 0x88) != -1) {
    fn_0016a43c(*(undefined4 *)(param_1 + 0x80));
    *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x84) != -1) {
                    /* WARNING: Subroutine does not return */
    fn_001482f4(*(undefined4 *)(param_1 + 0x80));
  }
  return;
}



void fn_0057cb10(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_28;
  int local_24 [2];
  int local_1c;
  
  if ((char)param_1[3] == '\x03') {
    fn_002bf2cc(param_1);
    if ((char)param_1[0x1f] == '\0') {
      iVar1 = (**(code **)(*(int *)param_1[0x38] + 0x90))();
      if (-1 < iVar1) {
        fn_002c07c0(local_24);
        local_24[0] = 6;
        local_1c = iVar1;
        iVar1 = (**(code **)(*(int *)param_1[0x38] + 0xa0))();
        if (iVar1 < 0) {
          (**(code **)(*param_1 + 0x154))(param_1,local_24[0],local_1c);
          if (param_1[0x19] != local_24[0]) {
            local_28 = 1;
            (**(code **)(*param_1 + 0x110))(param_1,local_24[0],local_1c,0);
          }
        }
        else {
          (**(code **)(*param_1 + 0x130))(param_1,local_24);
        }
      }
      iVar1 = (**(code **)(*(int *)param_1[0x38] + 0x6c))();
      if (-1 < iVar1) {
        if (param_1[0x19] == 6) {
          (**(code **)(*param_1 + 0x19c))(param_1,iVar1,0);
        }
        else {
          local_28 = 1;
          (**(code **)(*param_1 + 0x110))(param_1,6,0);
        }
      }
      iVar1 = (**(code **)(*(int *)param_1[0x38] + 100))();
      if (-1 < iVar1) {
        if (param_1[0x19] == 6) {
          (**(code **)(*param_1 + 0x19c))(param_1,iVar1,1);
        }
        else {
          local_28 = 1;
          (**(code **)(*param_1 + 0x110))(param_1,6,iVar1,1);
        }
      }
    }
    if (param_1[0x19] == 6) {
      iVar1 = (**(code **)(*(int *)param_1[0x38] + 0xa8))();
      if (-1 < iVar1) {
                    /* WARNING: Could not recover jumptable at 0x0057cc9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x158))(param_1);
        return;
      }
      iVar1 = (**(code **)(*(int *)param_1[0x38] + 0xb8))();
      if (iVar1 < 0) {
        iVar1 = (**(code **)(*(int *)param_1[0x38] + 0xc0))();
        if (-1 < iVar1) {
          fn_002c07c0(&local_28);
          (**(code **)(*param_1 + 0x140))(param_1,&local_28);
          return;
        }
        iVar1 = (**(code **)(*(int *)param_1[0x38] + 0x6c))();
        if (-1 < iVar1) {
          (**(code **)(*param_1 + 0x19c))(param_1,iVar1,0);
        }
        iVar1 = (**(code **)(*(int *)param_1[0x38] + 100))();
        if (-1 < iVar1) {
          (**(code **)(*param_1 + 0x19c))(param_1,iVar1,1);
        }
        iVar1 = (**(code **)(*(int *)param_1[0x38] + 0x34))();
        if (iVar1 != 0) {
          uVar2 = (**(code **)(*(int *)param_1[0x38] + 0x5c))();
          (**(code **)(*param_1 + 0x144))(param_1,param_1[0x19],uVar2);
        }
        iVar1 = (**(code **)(*(int *)param_1[0x38] + 0x38))();
        if (iVar1 != 0) {
          uVar2 = (**(code **)(*(int *)param_1[0x38] + 0x5c))();
                    /* WARNING: Could not recover jumptable at 0x0057ce34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x148))(param_1,param_1[0x19],uVar2);
          return;
        }
      }
      else {
        fn_002c07c0(&local_28);
        (**(code **)(*param_1 + 0x13c))(param_1,&local_28);
      }
    }
  }
  return;
}


