#include "007a222c_007a2810.h"



void fn_007a2810(uint *param_1,uint *param_2,undefined4 param_3,uint *param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  if (param_1 != param_2) {
    param_4 = param_1 + 4;
  }
  if (param_1 == param_2 || param_4 == param_2) {
    return;
  }
  do {
    uVar5 = *param_4;
    uVar7 = param_4[3];
    uVar8 = param_4[1];
    uVar9 = param_4[2];
    if ((uVar5 == 0) || ((*param_1 != 0 && (uVar5 == 0 || *param_1 <= uVar5)))) {
      puVar1 = param_4 + -4;
      puVar3 = param_4;
      if ((uVar5 != 0) && ((puVar2 = param_4, *puVar1 == 0 || (uVar5 != 0 && uVar5 < *puVar1)))) {
        do {
          puVar3 = puVar1;
          uVar6 = puVar3[1];
          uVar10 = puVar3[2];
          uVar11 = puVar3[3];
          *puVar2 = *puVar3;
          puVar2[1] = uVar6;
          puVar2[2] = uVar10;
          puVar2[3] = uVar11;
          puVar1 = puVar3 + -4;
          if (uVar5 == 0) break;
          puVar2 = puVar3;
        } while ((*puVar1 == 0) || (uVar5 != 0 && uVar5 < *puVar1));
      }
      *puVar3 = uVar5;
      puVar3[3] = uVar7;
      puVar3[1] = uVar8;
      puVar3[2] = uVar9;
    }
    else {
      puVar3 = param_4 + 4;
      puVar1 = param_4;
      if (param_1 < param_4) {
        iVar4 = (int)param_4 - (int)param_1;
        if (0 < iVar4) {
          if (iVar4 * 0x8000000 < 0) {
            puVar1 = param_4 + -4;
            *param_4 = param_4[-4];
            param_4[1] = param_4[-3];
            param_4[2] = param_4[-2];
            param_4[3] = param_4[-1];
            puVar3 = param_4;
          }
          for (iVar4 = iVar4 >> 5; iVar4 != 0; iVar4 = iVar4 + -1) {
            uVar6 = puVar1[-3];
            uVar10 = puVar1[-2];
            uVar11 = puVar1[-1];
            puVar3[-4] = puVar1[-4];
            puVar3[-3] = uVar6;
            puVar3[-2] = uVar10;
            puVar3[-1] = uVar11;
            uVar6 = puVar1[-7];
            uVar10 = puVar1[-6];
            uVar11 = puVar1[-5];
            puVar3[-8] = puVar1[-8];
            puVar3[-7] = uVar6;
            puVar3[-6] = uVar10;
            puVar3[-5] = uVar11;
            puVar1 = puVar1 + -8;
            puVar3 = puVar3 + -8;
          }
        }
      }
      else {
        for (; param_1 != puVar1; puVar1 = puVar1 + -4) {
          uVar6 = puVar1[-3];
          uVar10 = puVar1[-2];
          uVar11 = puVar1[-1];
          puVar3[-4] = puVar1[-4];
          puVar3[-3] = uVar6;
          puVar3[-2] = uVar10;
          puVar3[-1] = uVar11;
          puVar3 = puVar3 + -4;
        }
      }
      *param_1 = uVar5;
      param_1[1] = uVar8;
      param_1[2] = uVar9;
      param_1[3] = uVar7;
    }
    param_4 = param_4 + 4;
    if (param_4 == param_2) {
      return;
    }
  } while( true );
}



void fn_007a2604(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  uint local_1568 [680];
  uint local_ac8 [680];
  
  if (param_1 == param_2) {
    return;
  }
  puVar4 = param_1 + 0x2a2;
  if (puVar4 != param_2) {
    do {
      fn_0017821c(local_ac8,puVar4,0xa88);
      if ((local_ac8[0] == 0) ||
         ((*param_1 != 0 && (local_ac8[0] == 0 || *param_1 <= local_ac8[0])))) {
        fn_0017821c(local_1568,local_ac8,0xa88);
        puVar3 = puVar4 + -0x2a2;
        puVar2 = puVar4;
        if ((local_1568[0] != 0) &&
           ((puVar5 = puVar4, *puVar3 == 0 || (local_1568[0] != 0 && local_1568[0] < *puVar3)))) {
          do {
            puVar2 = puVar3;
            fn_0017821c(puVar5,puVar2,0xa88);
            puVar3 = puVar2 + -0x2a2;
            if (local_1568[0] == 0) break;
            puVar5 = puVar2;
          } while ((*puVar3 == 0) || (local_1568[0] != 0 && local_1568[0] < *puVar3));
        }
        puVar3 = local_1568;
      }
      else {
        puVar2 = puVar4 + 0x2a2;
        puVar3 = puVar4;
        if (param_1 < puVar4) {
          if (0 < (int)puVar4 - (int)param_1) {
            uVar1 = ((int)puVar4 - (int)param_1) / 0xa88;
            if ((uVar1 & 1) != 0) {
              puVar3 = puVar4 + -0x2a2;
              fn_0017821c(puVar4,puVar3,0xa88);
              puVar2 = puVar4;
            }
            for (iVar6 = (int)uVar1 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
              fn_0017821c(puVar2 + -0x2a2,puVar3 + -0x2a2,0xa88);
              puVar3 = puVar3 + -0x544;
              puVar2 = puVar2 + -0x544;
              fn_0017821c(puVar2,puVar3,0xa88);
            }
          }
        }
        else {
          while (param_1 != puVar3) {
            puVar2 = puVar2 + -0x2a2;
            fn_0017821c(puVar2,puVar3 + -0x2a2,0xa88);
            puVar3 = puVar3 + -0x2a2;
          }
        }
        puVar2 = param_1;
        puVar3 = local_ac8;
      }
      fn_0017821c(puVar2,puVar3,0xa88);
      puVar4 = puVar4 + 0x2a2;
    } while (puVar4 != param_2);
  }
  return;
}



void fn_007a2418(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int local_230;
  undefined4 local_22c;
  short local_204;
  undefined1 auStack_130 [272];
  
  if (param_1 == param_2) {
    return;
  }
  piVar4 = param_1;
  do {
    piVar1 = piVar4 + 0x40;
    if (piVar1 == param_2) {
      return;
    }
    fn_0017821c(&local_230,piVar1,0x100);
    if (local_230 == *param_1) {
      iVar2 = fn_006b4ed4(&local_230);
      if (iVar2 == 0) {
        iVar2 = fn_0065d018((int)local_204,(int)(short)param_1[0xb]);
      }
      else {
        iVar2 = fn_0065cfc8((int)(short)local_22c,(int)(short)param_1[1]);
      }
      if (iVar2 != 0) goto LAB_007a24a8;
LAB_007a24ec:
      fn_0017821c(auStack_130,&local_230,0x100);
      iVar2 = fn_0065d028(auStack_130,piVar4,fn_0065cfc8,fn_0065d018);
      piVar3 = piVar1;
      while (piVar5 = piVar4, iVar2 != 0) {
        fn_0017821c(piVar3,piVar5,0x100);
        iVar2 = fn_0065d028(auStack_130,piVar5 + -0x40,fn_0065cfc8,fn_0065d018);
        piVar4 = piVar5 + -0x40;
        piVar3 = piVar5;
      }
      piVar4 = (int *)auStack_130;
    }
    else {
      if (*param_1 <= local_230) goto LAB_007a24ec;
LAB_007a24a8:
      piVar3 = piVar4 + 0x80;
      piVar5 = piVar1;
      if (param_1 < piVar1) {
        iVar2 = (int)piVar1 - (int)param_1;
        if (0 < iVar2) {
          if (iVar2 * 0x800000 < 0) {
            fn_0017821c(piVar1,piVar4,0x100);
            piVar3 = piVar1;
            piVar5 = piVar4;
          }
          for (iVar2 = iVar2 >> 9; iVar2 != 0; iVar2 = iVar2 + -1) {
            fn_0017821c(piVar3 + -0x40,piVar5 + -0x40,0x100);
            piVar3 = piVar3 + -0x80;
            piVar5 = piVar5 + -0x80;
            fn_0017821c(piVar3,piVar5,0x100);
          }
        }
      }
      else {
        while (param_1 != piVar5) {
          piVar3 = piVar3 + -0x40;
          fn_0017821c(piVar3,piVar5 + -0x40,0x100);
          piVar5 = piVar5 + -0x40;
        }
      }
      piVar3 = param_1;
      piVar4 = &local_230;
    }
    fn_0017821c(piVar3,piVar4,0x100);
    piVar4 = piVar1;
  } while( true );
}



void fn_007a222c(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int local_230;
  undefined4 local_22c;
  short local_204;
  undefined1 auStack_130 [272];
  
  if (param_1 == param_2) {
    return;
  }
  piVar4 = param_1;
  do {
    piVar1 = piVar4 + 0x40;
    if (piVar1 == param_2) {
      return;
    }
    fn_0017821c(&local_230,piVar1,0x100);
    if (local_230 == *param_1) {
      iVar2 = fn_006b4ed4(&local_230);
      if (iVar2 == 0) {
        iVar2 = fn_0065cff0((int)local_204,(int)(short)param_1[0xb]);
      }
      else {
        iVar2 = fn_0065cfa0((int)(short)local_22c,(int)(short)param_1[1]);
      }
      if (iVar2 != 0) goto LAB_007a22bc;
LAB_007a2300:
      fn_0017821c(auStack_130,&local_230,0x100);
      iVar2 = fn_0065d028(auStack_130,piVar4,fn_0065cfa0,fn_0065cff0);
      piVar3 = piVar1;
      while (piVar5 = piVar4, iVar2 != 0) {
        fn_0017821c(piVar3,piVar5,0x100);
        iVar2 = fn_0065d028(auStack_130,piVar5 + -0x40,fn_0065cfa0,fn_0065cff0);
        piVar4 = piVar5 + -0x40;
        piVar3 = piVar5;
      }
      piVar4 = (int *)auStack_130;
    }
    else {
      if (*param_1 <= local_230) goto LAB_007a2300;
LAB_007a22bc:
      piVar3 = piVar4 + 0x80;
      piVar5 = piVar1;
      if (param_1 < piVar1) {
        iVar2 = (int)piVar1 - (int)param_1;
        if (0 < iVar2) {
          if (iVar2 * 0x800000 < 0) {
            fn_0017821c(piVar1,piVar4,0x100);
            piVar3 = piVar1;
            piVar5 = piVar4;
          }
          for (iVar2 = iVar2 >> 9; iVar2 != 0; iVar2 = iVar2 + -1) {
            fn_0017821c(piVar3 + -0x40,piVar5 + -0x40,0x100);
            piVar3 = piVar3 + -0x80;
            piVar5 = piVar5 + -0x80;
            fn_0017821c(piVar3,piVar5,0x100);
          }
        }
      }
      else {
        while (param_1 != piVar5) {
          piVar3 = piVar3 + -0x40;
          fn_0017821c(piVar3,piVar5 + -0x40,0x100);
          piVar5 = piVar5 + -0x40;
        }
      }
      piVar3 = param_1;
      piVar4 = &local_230;
    }
    fn_0017821c(piVar3,piVar4,0x100);
    piVar4 = piVar1;
  } while( true );
}


