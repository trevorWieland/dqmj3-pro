#include "00414ec0_004158f0.h"



void fn_004158f0(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((char)param_1[0x1f] != '\0') {
    fn_0068ab44(param_1,0x100094d);
    return;
  }
  fn_0068ab44(param_1,0x1000950);
  iVar1 = param_1[0x4c];
  param_1[0x4c] = iVar1 + 1;
  if (iVar1 + 1 == 3) {
    param_1[0x4c] = 0;
  }
  (**(code **)(*param_1 + 0x1a8))(param_1,0);
  (*(code *)**(undefined4 **)param_1[0x2c])((undefined4 *)param_1[0x2c],0);
  if (*param_2 == 4) {
    uVar2 = fn_002e3e9c(param_1[0x2c],param_2[1],param_2[2]);
                    /* WARNING: Could not recover jumptable at 0x00415994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 400))(param_1,uVar2);
    return;
  }
  return;
}



void fn_004156f8(int *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  fn_002c2070();
  if (param_2 == 1 || param_2 == 2) {
    cVar1 = (char)param_1[0x1f];
    bVar3 = cVar1 == '\0';
    if (bVar3) {
      cVar1 = *(char *)((int)param_1 + 0xe5);
    }
    if (bVar3 && cVar1 == '\0') {
LAB_004157a8:
      param_1[0x4a] = param_3;
      param_1[0x49] = param_2;
      (**(code **)(*param_1 + 0x110))(param_1,7,0,0,1);
      return;
    }
    if (*(char *)((int)param_1 + 0xe5) == '\x01') {
      param_3 = 3;
    }
    (**(code **)(*param_1 + 0x110))(param_1,param_2,param_3,0,1);
  }
  else if (param_2 == 4) {
    iVar2 = fn_0043100c(param_1,param_3);
    if (iVar2 == 0) {
      if ((char)param_1[0x1f] != '\0') {
        fn_0042fdf8(param_1,param_3);
        fn_0068ab44(param_1,0x100094f);
        return;
      }
      cVar1 = (char)param_1[0x48];
      if (cVar1 != '\0') {
        if (cVar1 == '\x01') goto LAB_004157a8;
        if (cVar1 != '\x02' && cVar1 != '\x03') {
          return;
        }
      }
      param_1[0x4b] = param_3;
      (**(code **)(*param_1 + 0x110))(param_1,7,1,0,1);
      return;
    }
  }
  else if (param_2 == 7) {
    if (param_3 != 0) {
      (**(code **)(*param_1 + 0x110))(param_1,4,param_1[0x4b],0);
      fn_0042fdf8(param_1,param_1[0x4b]);
      return;
    }
    cVar1 = (char)param_1[0x48];
    if (cVar1 != '\0') {
      if (cVar1 == '\x01') {
        if (param_1[0x49] == 4) {
          (**(code **)(*param_1 + 0x110))(param_1,4,param_1[0x4a],0);
          fn_0042fdf8(param_1,param_1[0x4a]);
          return;
        }
        (**(code **)(*param_1 + 0x110))(param_1,param_1[0x49],3,0,1);
        return;
      }
      if (cVar1 != '\x02' && cVar1 != '\x03') {
        return;
      }
    }
    (**(code **)(*param_1 + 0x110))(param_1,param_1[0x49],3,0,1);
    return;
  }
  return;
}



void fn_004156a0(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  fn_002c11d0(param_1,1,0);
  iVar1 = fn_002e3d2c();
  if ((iVar1 == 0) || ((char)param_1[0x48] == '\x02' && param_3 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x004156f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x1bc))(param_1,param_3);
    return;
  }
  fn_0036c5f4(param_1[0x17],param_1[0x40],1,0,1,1,0,0,1);
  fn_00689bd0(param_1,0x48,0);
  return;
}



void fn_004155e8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  fn_0022da78(*(int *)(param_1 + 0xb0) + 4,(&DAT_007c6fc8)[*(int *)(param_1 + 0x130)],param_2);
  uVar1 = fn_0016ba34(DAT_00897800,DAT_00898228,
                       *(undefined4 *)(&DAT_007c6fd4 + *(int *)(param_1 + 0x130) * 4),0);
  fn_00243550(*(undefined4 *)(param_1 + 0xdc),uVar1);
  if (*(int *)(param_1 + 0xf0) == 0) {
    return;
  }
  *(undefined1 *)(*(int *)(param_1 + 0xf0) + 0x83) = 0;
  fn_0031f954();
  return;
}



void fn_004153a8(int *param_1)

{
  (**(code **)(*param_1 + 0x110))(param_1,7,1,0,1);
  return;
}



void fn_004151d8(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  
  fn_0028a66c(*(undefined4 *)(DAT_00897804 + 0xc));
  fn_0028acf4(*(undefined4 *)(DAT_00897804 + 0xc));
  iVar13 = 0;
  do {
    iVar2 = fn_002c11d0(param_1,1,0);
    iVar3 = fn_002c11d0(param_1,2,0);
    piVar11 = (int *)(iVar2 + 4);
    uVar14 = *(int *)(iVar2 + 8) - *piVar11 >> 2;
    if (uVar14 < 0x20) {
      uVar14 = 0x20;
    }
    puVar4 = (undefined4 *)fn_00100fc6(uVar14 << 2,0);
    puVar9 = *(undefined4 **)(iVar2 + 8);
    puVar5 = puVar4;
    for (puVar7 = (undefined4 *)*piVar11; puVar7 != puVar9; puVar7 = puVar7 + 1) {
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = *puVar7;
      }
      puVar5 = puVar5 + 1;
    }
    iVar2 = *(int *)(iVar2 + 8);
    iVar8 = *piVar11;
    uVar1 = *(int *)(iVar3 + 8) - *(int *)(iVar3 + 4) >> 2;
    uVar12 = 0x20;
    if (0x1f < uVar1) {
      uVar12 = uVar1;
    }
    puVar9 = (undefined4 *)fn_00100fc6(uVar12 << 2,0);
    puVar10 = *(undefined4 **)(iVar3 + 8);
    puVar5 = puVar9;
    for (puVar7 = *(undefined4 **)(iVar3 + 4); puVar7 != puVar10; puVar7 = puVar7 + 1) {
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = *puVar7;
      }
      puVar5 = puVar5 + 1;
    }
    iVar6 = *(int *)(iVar3 + 8);
    iVar3 = *(int *)(iVar3 + 4);
    if (puVar4[iVar13] != 0) {
      fn_0028b7ac(*(undefined4 *)(DAT_00897804 + 0xc));
    }
    puVar7 = puVar9;
    if (puVar9[iVar13] != 0) {
      fn_0028a588(*(undefined4 *)(DAT_00897804 + 0xc));
    }
    for (; puVar7 != (undefined4 *)((iVar6 - iVar3 & 0xfffffffcU) + (int)puVar9);
        puVar7 = puVar7 + 1) {
    }
    fn_001008c4(puVar9,(int)(uVar12 * 4) >> 2,0);
    for (puVar7 = puVar4; puVar7 != (undefined4 *)((iVar2 - iVar8 & 0xfffffffcU) + (int)puVar4);
        puVar7 = puVar7 + 1) {
    }
    fn_001008c4(puVar4,(int)(uVar14 * 4) >> 2,0);
    iVar13 = iVar13 + 1;
  } while (iVar13 < 4);
  fn_0028b1fc(*(undefined4 *)(DAT_00897804 + 0xc));
  return;
}



void fn_00415090(int param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  fn_002c11d0(param_1,1,0);
  iVar2 = fn_002e3d2c();
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x114);
    bVar3 = *(char *)(param_1 + 0x7c) == '\x01';
    cVar1 = '\x01';
    if (!bVar3) {
      cVar1 = *(char *)(param_1 + 0xe5);
    }
    if (bVar3 || cVar1 == '\x01') {
      if (iVar2 != 0) {
        fn_002b1f48(iVar2,0);
        fn_002b1f0c(iVar2,1);
      }
      iVar2 = *(int *)(param_1 + 0x118);
      if (iVar2 != 0) {
        fn_002b1f48(iVar2,0);
        fn_002b1f0c(iVar2,1);
        return;
      }
    }
    else {
      if (iVar2 != 0) {
        fn_002b1f48(iVar2,1);
        fn_002b1f0c(iVar2,0);
      }
      iVar2 = *(int *)(param_1 + 0x118);
      if (iVar2 != 0) {
        fn_002b1f48(iVar2,1);
        fn_002b1f0c(iVar2,0);
        return;
      }
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x114);
    if (iVar2 != 0) {
      fn_002b1f48(iVar2,0);
      fn_002b1f0c(iVar2,1);
    }
    iVar2 = *(int *)(param_1 + 0x118);
    if (*(char *)(param_1 + 0x120) == '\x02') {
      if (iVar2 != 0) {
        fn_002b1f48(iVar2,1);
        fn_002b1f0c(iVar2,0);
        return;
      }
    }
    else if (iVar2 != 0) {
      fn_002b1f48(iVar2,0);
      fn_002b1f0c(iVar2,1);
      return;
    }
  }
  return;
}



undefined4 fn_00414ec0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar10 = 0;
  if (*(int *)(param_1 + 0xa4) - *(int *)(param_1 + 0xa0) >> 2 != 0) {
    do {
      uVar9 = *(int *)(param_1 + 0xa4) - *(int *)(param_1 + 0xa0) >> 2;
      if (uVar9 <= uVar10) {
        fn_002ff628(9,&DAT_008c7655,&DAT_008c7655,uVar10,uVar9);
      }
      iVar2 = *(int *)(*(int *)(param_1 + 0xa0) + uVar10 * 4);
      piVar6 = (int *)(iVar2 + 4);
      uVar9 = *(int *)(iVar2 + 8) - *piVar6 >> 2;
      uVar8 = 0x20;
      if (0x1f < uVar9) {
        uVar8 = uVar9;
      }
      puVar3 = (undefined4 *)fn_00100fc6(uVar8 << 2,0);
      puVar4 = *(undefined4 **)(iVar2 + 8);
      puVar7 = puVar3;
      for (puVar5 = (undefined4 *)*piVar6; puVar5 != puVar4; puVar5 = puVar5 + 1) {
        if (puVar7 != (undefined4 *)0x0) {
          *puVar7 = *puVar5;
        }
        puVar7 = puVar7 + 1;
      }
      uVar9 = 0;
      puVar7 = (undefined4 *)((*(int *)(iVar2 + 8) - *piVar6 & 0xfffffffcU) + (int)puVar3);
      puVar5 = puVar3;
      if ((int)puVar7 - (int)puVar3 >> 2 != 0) {
        do {
          uVar1 = (int)puVar7 - (int)puVar3 >> 2;
          if (uVar1 <= uVar9) {
            fn_002ff628(9,&DAT_008c760d,&DAT_008c760d,uVar9,uVar1);
          }
          if (puVar3[uVar9] == param_2) {
            if (puVar7 < puVar3) {
              do {
                puVar5 = puVar5 + 1;
              } while (puVar5 != puVar7);
            }
            fn_001008c4(puVar3,(int)(uVar8 * 4) >> 2,0);
            return 1;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < (uint)((int)puVar7 - (int)puVar3 >> 2));
      }
      for (; puVar5 != puVar7; puVar5 = puVar5 + 1) {
      }
      fn_001008c4(puVar3,(int)(uVar8 * 4) >> 2,0);
      uVar10 = uVar10 + 1;
    } while (uVar10 < (uint)(*(int *)(param_1 + 0xa4) - *(int *)(param_1 + 0xa0) >> 2));
  }
  return 0;
}


