#include "001b374c_001b3dd0.h"



void fn_001b3dd0(int *param_1)

{
  int iVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  int iVar3;
  
  do {
    while (iVar1 = param_1[9], iVar1 == 0) {
      param_1[9] = 1;
      if (*(code **)(*param_1 + 0x24) == (code *)0x0) {
        iVar1 = 3;
      }
      else {
        iVar1 = (**(code **)(*param_1 + 0x24))(param_1,param_1[6]);
      }
      param_1[1] = iVar1;
      if (iVar1 == 10) {
        return;
      }
    }
    if (iVar1 != 1) {
      if (iVar1 != 2) {
        return;
      }
      param_1[9] = 3;
      if (param_1[1] == 0) {
        if (param_1[2] != param_1[7]) {
          param_1[1] = 4;
          goto LAB_001b3e18;
        }
      }
      else {
LAB_001b3e18:
        fn_00158f6c(param_1[8],param_1[7]);
      }
      iVar1 = param_1[1];
      if (iVar1 == 10) {
        return;
      }
      iVar3 = param_1[2];
      iVar2 = fn_00192114();
      *(undefined1 *)(iVar2 + 0xc0) = 0;
      iVar2 = fn_00192114();
      if (*(int *)(iVar2 + 200) == 0 || *(int *)(iVar2 + 200) == 10) {
        iVar2 = fn_00192114();
        *(int *)(iVar2 + 200) = iVar1;
        iVar1 = fn_00192114();
        *(int *)(iVar1 + 0xcc) = iVar3;
      }
      UNRECOVERED_JUMPTABLE = (code *)param_1[10];
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        return;
      }
      goto LAB_001b3f7c;
    }
    param_1[9] = 2;
    if (param_1[1] != 0) break;
    if (param_1[2] != param_1[6]) {
      param_1[1] = 4;
      break;
    }
    if (*(code **)(*param_1 + 0x1c) == (code *)0x0) {
      iVar1 = 3;
    }
    else {
      iVar1 = (**(code **)(*param_1 + 0x1c))(param_1,param_1[8],param_1[7]);
    }
    param_1[1] = iVar1;
  } while (iVar1 != 10);
  iVar1 = param_1[1];
  if (iVar1 == 10) {
    return;
  }
  iVar3 = param_1[2];
  iVar2 = fn_00192114();
  *(undefined1 *)(iVar2 + 0xc0) = 0;
  iVar2 = fn_00192114();
  if (*(int *)(iVar2 + 200) == 0 || *(int *)(iVar2 + 200) == 10) {
    iVar2 = fn_00192114();
    *(int *)(iVar2 + 200) = iVar1;
    iVar1 = fn_00192114();
    *(int *)(iVar1 + 0xcc) = iVar3;
  }
  UNRECOVERED_JUMPTABLE = (code *)param_1[10];
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
LAB_001b3f7c:
                    /* WARNING: Could not recover jumptable at 0x001b3f8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_1[2]);
  return;
}



undefined4 fn_001b3db4(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_0074236c(param_1,1);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



undefined4 fn_001b3c38(int param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  
  puVar1 = (uint *)fn_00173d40(param_1,*(undefined4 *)(param_1 + 0x34));
  uVar6 = *puVar1;
  piVar4 = (int *)puVar1[1];
  if ((uVar6 & 0x8000000) != 0) {
    piVar4[1] = piVar4[1] + 1;
  }
  if (uVar6 != 0x8001000) {
    uVar3 = fn_001581d0(param_1,(char *)&DAT_001b3da4);
    if (((uVar6 & 0x8000000) != 0) && (iVar2 = piVar4[1], piVar4[1] = iVar2 + -1, iVar2 + -1 == 0))
    {
      (**(code **)(*piVar4 + 8))(piVar4);
    }
    return uVar3;
  }
  iVar2 = fn_00157ff4(param_1);
  fn_00173d1c(piVar4,piVar4 + 0xe);
  iVar5 = 2;
  if (2 < iVar2 + 1) {
    do {
      fn_00742460(piVar4,param_1,iVar5);
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar2 + 1);
  }
  iVar2 = fn_00157c74(piVar4,iVar2,1,0);
  if (iVar2 < 0) {
    fn_0019e864(param_1 + 0x40,piVar4 + 0x10);
    iVar2 = piVar4[1];
    piVar4[1] = iVar2 + -1;
    if (iVar2 + -1 == 0) {
      (**(code **)(*piVar4 + 8))(piVar4);
    }
    return 0xffffffff;
  }
  fn_00742460(param_1,piVar4,0xffffffff);
  fn_00173cb8(piVar4,1);
  iVar2 = piVar4[1];
  piVar4[1] = iVar2 + -1;
  if (iVar2 + -1 == 0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  return 1;
}



undefined4 fn_001b3b3c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int local_20;
  undefined4 local_1c;
  int local_18 [3];
  
  local_18[0] = 0;
  iVar1 = fn_00157ff4(param_1);
  if (((iVar1 < 2) || (iVar2 = fn_00157fb0(param_1,1,&local_20), iVar2 < 0)) ||
     (iVar2 = fn_00157fb0(param_1,2,&local_1c), iVar2 < 0)) {
    uVar3 = fn_001581d0(param_1,(char *)&DAT_001b3c28);
    return uVar3;
  }
  if (2 < iVar1) {
    fn_00157f58(param_1,3,local_18);
  }
  iVar1 = fn_00166e14(param_1,1);
  if (((local_18[0] < iVar1) && (-1 < local_18[0])) &&
     (iVar1 = fn_001030bc(local_18[0] + local_20,local_1c), iVar1 != 0)) {
    fn_001580cc(param_1,iVar1 - local_20);
    return 1;
  }
  return 0;
}



void fn_001b3ae8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = fn_00173d40(param_1,*(int *)(param_1 + 0x34) + 1);
  iVar2 = fn_006167ec(param_1,uVar1);
  if (iVar2 == 0) {
    return;
  }
  fn_001581d0(param_1,(char *)&DAT_001b3b28);
  return;
}



undefined4 fn_001b374c(int param_1,undefined4 param_2,code *param_3)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  uint *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  int *extraout_r1;
  int *extraout_r1_00;
  code *pcVar12;
  code *pcVar13;
  uint uVar14;
  int *piVar15;
  bool bVar16;
  undefined8 uVar17;
  uint local_38;
  int *local_34;
  uint local_30;
  int *local_2c;
  
  piVar15 = (int *)0x0;
  local_38 = 0x1000001;
  local_34 = (int *)0x0;
  iVar4 = fn_00157ff4();
  pcVar13 = (code *)0x0;
  uVar14 = 0;
  uVar5 = fn_00173d40(param_1,*(undefined4 *)(param_1 + 0x34));
  fn_0019e864(&local_38,uVar5);
  puVar6 = (uint *)fn_00173d40(param_1,*(int *)(param_1 + 0x34) + 1);
  uVar9 = *puVar6;
  if (uVar9 != 0x1000001 && (uVar9 & 0x4000000) != 0) {
    if (uVar9 == 0x5000004) {
      pcVar13 = (code *)(int)(float)puVar6[1];
    }
    else {
      pcVar13 = (code *)puVar6[1];
    }
  }
  if (iVar4 < 3) {
    uVar14 = fn_00166e14(param_1,1);
  }
  else {
    puVar6 = (uint *)fn_00173d40(param_1,*(int *)(param_1 + 0x34) + 2);
    if ((*puVar6 & 0x4000000) != 0) {
      if (*puVar6 == 0x5000004) {
        uVar14 = (uint)(float)puVar6[1];
      }
      else {
        uVar14 = puVar6[1];
      }
    }
  }
  iVar4 = local_34[7];
  if ((int)pcVar13 < 0) {
    pcVar13 = pcVar13 + iVar4;
  }
  if ((int)uVar14 < 0) {
    uVar14 = uVar14 + iVar4;
  }
  if ((int)uVar14 < (int)pcVar13) {
    uVar5 = fn_001581d0(param_1,(char *)&DAT_001b3abc);
    if ((local_38 & 0x8000000) == 0) {
      return uVar5;
    }
    iVar4 = local_34[1] + -1;
    local_34[1] = iVar4;
  }
  else {
    if ((int)uVar14 <= iVar4) {
      uVar17 = fn_00665a44(*(undefined4 *)(param_1 + 0x8c),uVar14 - (int)pcVar13);
      piVar11 = (int *)((ulonglong)uVar17 >> 0x20);
      piVar7 = (int *)uVar17;
      if ((int)pcVar13 < (int)uVar14) {
        piVar15 = (int *)0x8010000;
      }
      piVar1 = (int *)0x1000001;
      pcVar2 = (code *)0x0;
      piVar3 = (int *)0x0;
      for (; (int)pcVar13 < (int)uVar14; pcVar13 = pcVar13 + 1) {
        bVar16 = pcVar13 == (code *)0x0;
        if (-1 < (int)pcVar13) {
          param_3 = (code *)local_34[7];
          bVar16 = param_3 == pcVar13;
        }
        pcVar12 = pcVar2;
        piVar10 = piVar1;
        if (!bVar16 && (-1 < (int)pcVar13 && (int)pcVar13 <= (int)param_3)) {
          puVar8 = (undefined4 *)(local_34[6] + (int)pcVar13 * 8);
          piVar10 = (int *)*puVar8;
          if (piVar10 == piVar15) {
            piVar10 = *(int **)(puVar8[1] + 0xc);
            pcVar12 = *(code **)(puVar8[1] + 0x10);
          }
          else {
            pcVar12 = (code *)puVar8[1];
          }
          piVar11 = piVar10;
          if (((uint)piVar10 & 0x8000000) != 0) {
            piVar11 = (int *)(*(int *)(pcVar12 + 4) + 1);
            *(int **)(pcVar12 + 4) = piVar11;
          }
          param_3 = pcVar12;
          if (((uint)piVar1 & 0x8000000) != 0) {
            piVar11 = (int *)(*(int *)(pcVar2 + 4) + -1);
            *(int **)(pcVar2 + 4) = piVar11;
            if (piVar11 == (int *)0x0) {
              (**(code **)(*(int *)pcVar2 + 8))();
              piVar11 = extraout_r1;
            }
          }
        }
        bVar16 = piVar3 == (int *)0x0;
        if (-1 < (int)piVar3) {
          piVar11 = (int *)piVar7[7];
          bVar16 = piVar11 == piVar3;
        }
        if (!bVar16 && (-1 < (int)piVar3 && (int)piVar3 <= (int)piVar11)) {
          puVar8 = (undefined4 *)(piVar7[6] + (int)piVar3 * 8);
          piVar11 = (int *)puVar8[1];
          param_3 = (code *)*puVar8;
          puVar8[1] = pcVar12;
          *puVar8 = piVar10;
          if (((uint)piVar10 & 0x8000000) != 0) {
            *(int *)(pcVar12 + 4) = *(int *)(pcVar12 + 4) + 1;
          }
          if ((((uint)param_3 & 0x8000000) != 0) &&
             (iVar4 = piVar11[1], piVar11[1] = iVar4 + -1, iVar4 + -1 == 0)) {
            param_3 = *(code **)(*piVar11 + 8);
            (*param_3)(piVar11);
            piVar11 = extraout_r1_00;
          }
        }
        piVar1 = piVar10;
        pcVar2 = pcVar12;
        piVar3 = (int *)((int)piVar3 + 1);
      }
      local_30 = 0x8000040;
      local_2c = piVar7;
      if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        fn_00146590(0,&local_30);
      }
      piVar7[1] = piVar7[1] + 1;
      fn_00173d1c(param_1);
      if (((local_30 & 0x8000000) != 0) &&
         (iVar4 = local_2c[1], local_2c[1] = iVar4 + -1, iVar4 + -1 == 0)) {
        (**(code **)(*local_2c + 8))();
      }
      if ((((uint)piVar1 & 0x8000000) != 0) &&
         (iVar4 = *(int *)(pcVar2 + 4), *(int *)(pcVar2 + 4) = iVar4 + -1, iVar4 + -1 == 0)) {
        (**(code **)(*(int *)pcVar2 + 8))(pcVar2);
      }
      if (((local_38 & 0x8000000) != 0) &&
         (iVar4 = local_34[1], local_34[1] = iVar4 + -1, iVar4 + -1 == 0)) {
        (**(code **)(*local_34 + 8))();
      }
      return 1;
    }
    uVar5 = fn_001581d0(param_1,(char *)&DAT_001b3acc);
    if ((local_38 & 0x8000000) == 0) {
      return uVar5;
    }
    iVar4 = local_34[1] + -1;
    local_34[1] = iVar4;
  }
  if (iVar4 == 0) {
    (**(code **)(*local_34 + 8))();
  }
  return uVar5;
}


