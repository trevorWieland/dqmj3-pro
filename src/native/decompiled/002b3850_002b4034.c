#include "002b3850_002b4034.h"



void fn_002b4034(int param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = fn_00154ac8(0x33f);
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x2d) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x2d) = param_2;
  }
  return;
}



void fn_002b3dd8(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined **ppuVar6;
  undefined **local_44 [9];
  
  uVar2 = 0;
  local_44[0] = (undefined **)&DAT_008935d8;
  local_44[1] = &PTR_s_Null_icon_frame_li_008935ec;
  local_44[2] = &PTR_s_Null_icon_frame_fu_00893600;
  if (*(int *)(param_1 + 0xac) - *(int *)(param_1 + 0xa8) >> 2 != 0) {
    do {
      iVar5 = *(int *)(*(int *)(param_1 + 0xa8) + uVar2 * 4);
      if (iVar5 != 0) {
        *(byte *)(iVar5 + 0x44) = *(byte *)(iVar5 + 0x44) & 0xfe;
        *(undefined4 *)(*(int *)(param_1 + 0xa8) + uVar2 * 4) = 0;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)(*(int *)(param_1 + 0xac) - *(int *)(param_1 + 0xa8) >> 2));
  }
  if (*(int *)(param_1 + 0xb4) == 0) {
    uVar3 = fn_00689210(*(undefined4 *)(param_1 + 0x48),(char *)&DAT_002b3fac);
    *(undefined4 *)(param_1 + 0xb4) = uVar3;
  }
  uVar2 = 0;
  do {
    iVar5 = 0;
    ppuVar6 = local_44[uVar2];
    do {
      iVar4 = fn_00689210(*(undefined4 *)(param_1 + 0x48),ppuVar6[iVar5]);
      iVar5 = iVar5 + 1;
      *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xfe;
    } while (iVar5 < 4);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 3);
  ppuVar6 = local_44[param_2];
  uVar2 = 0;
  do {
    uVar3 = fn_00689210(*(undefined4 *)(param_1 + 0x48),ppuVar6[uVar2]);
    uVar1 = *(int *)(param_1 + 0xac) - *(int *)(param_1 + 0xa8) >> 2;
    if (uVar1 <= uVar2) {
      fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,uVar2,uVar1);
    }
    *(undefined4 *)(*(int *)(param_1 + 0xa8) + uVar2 * 4) = uVar3;
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 4);
  uVar2 = 4;
  do {
    local_44[3] = (undefined **)0x0;
    local_44[4] = (undefined **)0x0;
    local_44[5] = (undefined **)0x0;
    local_44[6] = (undefined **)0x0;
    local_44[7] = (undefined **)0x0;
    local_44[8] = (undefined **)0x0;
    fn_00102908(local_44 + 3,0x18,ppuVar6[4],uVar2 - 4);
    iVar5 = fn_00689210(*(undefined4 *)(param_1 + 0x48),local_44 + 3);
    if (iVar5 != 0) {
      uVar1 = *(int *)(param_1 + 0xac) - *(int *)(param_1 + 0xa8) >> 2;
      if (uVar1 <= uVar2) {
        fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,uVar2,uVar1);
      }
      *(int *)(*(int *)(param_1 + 0xa8) + uVar2 * 4) = iVar5;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 7);
  return;
}



void fn_002b3d78(int param_1,undefined1 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006b51cc(*(undefined4 *)(DAT_00897804 + 0x1c));
  if ((param_3 == 0) && ((iVar2 = fn_00154ac8(0x33f), iVar2 == 0 || (iVar1 != 1)))) {
    *(undefined1 *)(param_1 + 0x2b) = 0;
    return;
  }
  *(undefined1 *)(param_1 + 0x2b) = param_2;
  return;
}



void fn_002b3ce4(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  if (param_2 == 0) {
    return;
  }
  iVar5 = 0;
  uVar6 = 0xffffffff;
  uVar4 = 0;
  uVar1 = *(int *)(param_1 + 0x94) - *(int *)(param_1 + 0x90) >> 2;
  if (uVar1 != 0) {
    do {
      if (*(int *)(*(int *)(param_1 + 0x90) + uVar4 * 4) != 0) {
        if ((char)((char)param_2 + -0x10) == iVar5) {
          uVar6 = uVar4;
          break;
        }
        iVar5 = iVar5 + 1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(*(int *)(param_1 + 0x90) + (char)uVar6 * 4);
  iVar5 = (**(code **)(**(int **)(param_1 + 0xa8) + 0x30))(*(int **)(param_1 + 0xa8),0);
  iVar2 = fn_006b51cc(*(undefined4 *)(DAT_00897804 + 0x1c));
  iVar3 = fn_00154ac8(0x33f);
  if ((iVar3 == 0) || (iVar2 != 1)) {
    *(undefined1 *)(iVar5 + 0x2b) = 0;
    return;
  }
  *(undefined1 *)(iVar5 + 0x2b) = 1;
  return;
}



undefined1 * fn_002b3c24(int *param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  
  if (param_2 == 0) {
    puVar3 = (undefined1 *)(**(code **)(*param_1 + 0x20))(param_1,0);
    return puVar3;
  }
  fn_0020bbc4(auStack_18);
  (**(code **)(*param_1 + 0x20))(param_1,1);
  iVar2 = fn_006bfda8(auStack_14);
  *(short *)((int)param_1 + 0x16) = (short)iVar2;
  if (iVar2 - 1U < 8999) {
    uVar1 = fn_0068b0a4();
  }
  else {
    uVar1 = 0;
  }
  *(undefined1 *)((int)param_1 + 0x19) = uVar1;
  uVar1 = fn_006bfe90(auStack_14);
  *(undefined1 *)(param_1 + 0x34) = uVar1;
  uVar1 = fn_0068b334();
  *(undefined1 *)((int)param_1 + 0x1b) = uVar1;
  uVar1 = fn_006bf34c(auStack_14);
  *(undefined1 *)((int)param_1 + 0x3d) = uVar1;
  uVar1 = fn_001f84ac(param_2 + 0x72);
  *(undefined1 *)((int)param_1 + 0x3f) = uVar1;
  uVar1 = fn_006bf184(auStack_14);
  *(undefined1 *)((int)param_1 + 0x43) = uVar1;
  return auStack_18;
}



void fn_002b3a74(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = 0;
  do {
    uVar5 = 0;
    do {
      cVar2 = (char)iVar6;
      if (cVar2 == '\0') {
        uVar1 = *(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x78) >> 2;
        if (uVar1 <= uVar5) {
          fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,uVar5,uVar1);
        }
        iVar4 = *(int *)(*(int *)(param_1 + 0x78) + uVar5 * 4);
      }
      else if (cVar2 == '\x01') {
        uVar1 = *(int *)(param_1 + 0x88) - *(int *)(param_1 + 0x84) >> 2;
        if (uVar1 == 0) break;
        if (uVar1 <= uVar5) {
          fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,uVar5,uVar1);
        }
        iVar4 = *(int *)(*(int *)(param_1 + 0x84) + uVar5 * 4);
      }
      else if (cVar2 == '\x02') {
        uVar1 = *(int *)(param_1 + 0x94) - *(int *)(param_1 + 0x90) >> 2;
        if (uVar1 == 0) break;
        if (uVar1 <= uVar5) {
          fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,uVar5,uVar1);
        }
        iVar4 = *(int *)(*(int *)(param_1 + 0x90) + uVar5 * 4);
      }
      else {
        if ((cVar2 != '\x03') ||
           (uVar1 = *(int *)(param_1 + 0xa0) - *(int *)(param_1 + 0x9c) >> 2, uVar1 == 0)) break;
        if (uVar1 <= uVar5) {
          fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,uVar5,uVar1);
        }
        iVar4 = *(int *)(*(int *)(param_1 + 0x9c) + uVar5 * 4);
      }
      if (iVar4 == 0) break;
      if (param_2 < iVar6) {
        bVar3 = *(byte *)(iVar4 + 0x44) & 0xfe;
      }
      else {
        bVar3 = uVar5 == param_3 | *(byte *)(iVar4 + 0x44) & 0xfe;
      }
      uVar5 = uVar5 + 1;
      *(byte *)(iVar4 + 0x44) = bVar3;
    } while ((int)uVar5 < 4);
    iVar6 = iVar6 + 1;
    if (3 < iVar6) {
      return;
    }
  } while( true );
}



void fn_002b3850(int param_1,uint *param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int iStack_30;
  uint *puStack_2c;
  undefined4 local_28;
  
  local_50 = 0;
  iVar12 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  iStack_30 = param_1;
  puStack_2c = param_2;
  local_28 = param_3;
  do {
    fn_00102908(&local_50,0x18,(&DAT_008935c8)[iVar12]);
    iVar1 = fn_00689210(*(undefined4 *)(param_1 + 0x48),&local_50);
    if (iVar1 == 0) {
      return;
    }
    piVar11 = (int *)param_2[1];
    if (piVar11 == (int *)param_2[2]) {
      uVar5 = (int)((int)piVar11 - *param_2) >> 2;
      if (uVar5 < (uint)((int)((int)param_2[2] - *param_2) >> 2)) {
        param_2[1] = (uint)(piVar11 + 1);
        if (piVar11 != (int *)0x0) {
          *piVar11 = piVar11[-1];
        }
        piVar7 = piVar11 + -1;
        piVar8 = piVar11;
        if (piVar11 < piVar7) {
          if (0 < (int)piVar7 - (int)piVar11) {
            iVar10 = (int)piVar7 - (int)piVar11 >> 2;
            iVar6 = 0;
            do {
              iVar10 = iVar10 + -1;
              piVar11[iVar6 + -1] = piVar7[iVar6 + -1];
              iVar6 = iVar6 + -1;
            } while (iVar10 != 0);
          }
        }
        else {
          while (piVar11 != piVar7) {
            piVar7 = piVar7 + -1;
            piVar8[-1] = *piVar7;
            piVar8 = piVar8 + -1;
          }
        }
        *piVar11 = iVar1;
      }
      else {
        uVar2 = uVar5 + (uVar5 >> 1) + (uVar5 >> 3);
        if (uVar2 < uVar5 + 0x20) {
          uVar2 = uVar5 + 0x20;
        }
        piVar3 = (int *)fn_00100fc6(uVar2 << 2,0);
        piVar8 = piVar3;
        for (piVar7 = (int *)*param_2; piVar7 != piVar11; piVar7 = piVar7 + 1) {
          if (piVar8 != (int *)0x0) {
            *piVar8 = *piVar7;
          }
          piVar8 = piVar8 + 1;
        }
        piVar7 = (int *)(((int)piVar11 - *param_2 & 0xfffffffc) + (int)piVar3);
        if (piVar7 != (int *)0x0) {
          *piVar7 = iVar1;
        }
        piVar8 = (int *)param_2[1];
        piVar7 = (int *)(((int)piVar11 - *param_2 & 0xfffffffc) + (int)piVar3);
        for (; piVar11 != piVar8; piVar11 = piVar11 + 1) {
          piVar7 = piVar7 + 1;
          if (piVar7 != (int *)0x0) {
            *piVar7 = *piVar11;
          }
        }
        uVar4 = *param_2;
        uVar9 = param_2[1];
        uVar5 = uVar4;
        if (uVar9 < uVar4) {
          do {
            uVar5 = uVar5 + 4;
          } while (uVar5 != uVar9);
        }
        fn_001008c4(uVar4,(int)(param_2[2] - uVar4) >> 2,0);
        param_2[2] = (uint)(piVar3 + uVar2);
        param_2[1] = (uint)(piVar3 + ((int)(uVar9 - uVar4) >> 2) + 1);
        *param_2 = (uint)piVar3;
      }
    }
    else {
      param_2[1] = (uint)(piVar11 + 1);
      if (piVar11 != (int *)0x0) {
        *piVar11 = iVar1;
      }
    }
    iVar12 = iVar12 + 1;
  } while (iVar12 < 4);
  return;
}


