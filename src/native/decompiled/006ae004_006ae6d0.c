#include "006ae004_006ae6d0.h"



undefined4 fn_006ae6d0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00163e50(param_1,param_2,1);
  if (iVar1 != 0) {
    uVar2 = fn_001639b0(param_1,param_2);
    iVar1 = fn_001c2368(DAT_008977e4);
    if (iVar1 != 0) {
      uVar2 = fn_0025472c(iVar1,uVar2);
      return uVar2;
    }
  }
  return 0x21;
}



void fn_006ae654(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int aiStack_28 [2];
  int *apiStack_20 [4];
  
  fn_001028d4(aiStack_28,(char *)&DAT_00164f64,8);
  if ((DAT_00897800 == 0) ||
     (iVar2 = fn_0016ba34(DAT_00897800,DAT_0089820c,aiStack_28,0), iVar2 == 0)) {
    return;
  }
  fn_00174858(DAT_008977e4);
  iVar3 = fn_0015c948();
  if (*(char *)(iVar3 + 0xa3) == '\0') {
    uVar4 = *(undefined4 *)(iVar3 + 0x70);
  }
  else {
    uVar4 = *(undefined4 *)(iVar3 + 0x74);
  }
  piVar1 = (int *)fn_00145b00(0x60,&DAT_00812c8c);
  if (piVar1 != (int *)0x0) {
    piVar1[1] = 0;
    piVar1[2] = 0;
    piVar1[3] = 0;
    piVar1[4] = 0;
    piVar1[5] = 0;
    piVar1[6] = 0;
    piVar1[8] = 0;
    piVar1[9] = 0;
    piVar1[10] = 0;
    piVar1[0x15] = 1;
    *(undefined1 *)(piVar1 + 0x14) = 1;
    *(undefined1 *)((int)piVar1 + 0x51) = 0;
    piVar1[0x13] = 0;
    piVar1[0x16] = 0;
    piVar1[0x17] = 0;
    *piVar1 = (int)&DAT_00858818;
  }
  aiStack_28[1] = 0;
  aiStack_28[0] = iVar2;
  fn_0017f494(piVar1,*(undefined4 *)(iVar3 + 0x6c),uVar4,*(undefined4 *)(iVar3 + 0x68));
  piVar5 = *(int **)(iVar3 + 0x90);
  if (*(int *)(iVar3 + 0x94) - (int)piVar5 >> 2 != 0) {
    for (; *(int **)(iVar3 + 0x94) != piVar5; piVar5 = piVar5 + 1) {
      iVar2 = *(int *)(*piVar5 + 0x24) - *(int *)(*piVar5 + 0x20) >> 2;
      if (iVar2 == 0) {
        aiStack_28[0] = iVar2;
        fn_002ff628(9,&DAT_008c766e);
      }
    }
  }
  piVar5 = *(int **)(iVar3 + 0x84);
  if (*(int *)(iVar3 + 0x88) - (int)piVar5 >> 2 != 0) {
    for (; *(int **)(iVar3 + 0x88) != piVar5; piVar5 = piVar5 + 1) {
      iVar2 = *(int *)(*piVar5 + 0x24) - *(int *)(*piVar5 + 0x20) >> 2;
      if (iVar2 == 0) {
        aiStack_28[0] = iVar2;
        fn_002ff628(9,&DAT_008c766e);
      }
    }
  }
  (**(code **)(*piVar1 + 0x14))(piVar1,iVar3 + 0xa4);
  *(undefined1 *)(piVar1 + 0x14) = *(undefined1 *)(iVar3 + 0xa2);
  apiStack_20[0] = piVar1;
  fn_00184068(iVar3 + 0x84,apiStack_20);
  return;
}



void fn_006ae600(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00163e50(param_1,param_2,1);
  if (iVar1 != 0) {
    uVar2 = fn_001639b0(param_1,param_2);
    iVar1 = fn_001c2368(DAT_008977e4);
    if (iVar1 != 0) {
      fn_00203728(iVar1,uVar2);
      return;
    }
  }
  return;
}



undefined4 fn_006ae5a8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iStack_14;
  
  iVar3 = fn_00163e50(param_1,param_2,1);
  if (iVar3 != 0) {
    iVar3 = fn_001639b0(param_1,param_2);
    iVar4 = fn_001c2368(DAT_008977e4);
    if (iVar4 != 0) {
      iVar5 = iVar4;
      iStack_14 = iVar3;
      iVar1 = fn_006a7b6c(DAT_008977e4);
      if (iVar1 != 1) {
        piVar2 = *(int **)(iVar4 + 4);
        while( true ) {
          if (*(int **)(iVar4 + 8) == piVar2) {
            return 0x21;
          }
          if (*piVar2 == iVar3) break;
          piVar2 = piVar2 + 1;
        }
      }
      piVar2 = *(int **)(iVar4 + 0x10);
      while( true ) {
        if (*(int **)(iVar4 + 0x14) == piVar2) {
          piVar2 = *(int **)(iVar4 + 0x14);
          if (piVar2 == *(int **)(iVar4 + 0x18)) {
            fn_0079df24(iVar4 + 0x10,piVar2,&iStack_14,*(int **)(iVar4 + 0x18),iVar5);
          }
          else {
            *(int **)(iVar4 + 0x14) = piVar2 + 1;
            if (piVar2 != (int *)0x0) {
              *piVar2 = iStack_14;
            }
          }
                    /* WARNING: Subroutine does not return */
          fn_001638a0();
        }
        if (*piVar2 == iStack_14) break;
        piVar2 = piVar2 + 1;
      }
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
  }
  return 0x21;
}



undefined4 fn_006ae004(int param_1,char *param_2)

{
  byte *pbVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  char cVar13;
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 local_28;
  
  pbVar1 = (byte *)fn_006ba918(*(undefined4 *)(param_1 + 0x84));
  pcVar2 = (char *)fn_00175a0c(*(undefined4 *)(param_1 + 0x84),0);
  iVar11 = 0;
  if (pbVar1 == (byte *)0x0) {
    if (pcVar2 == (char *)0x0) {
      return 0;
    }
    if (*pcVar2 != '\x01') {
      return 0;
    }
    iVar11 = (int)*(short *)(pcVar2 + 2);
    if (iVar11 < 1) {
      return 0;
    }
    if (699 < iVar11) {
      return 0;
    }
    iVar5 = (int)pcVar2[4];
    iVar4 = fn_001648dc(param_1,0);
    if (iVar4 == 1) {
      uVar3 = iVar5 - 0x10;
      bVar12 = 3 < uVar3;
      if (bVar12) {
        uVar3 = iVar5 - 0x18;
      }
      if ((!(bVar12 && 3 < uVar3)) || (!(iVar5 != 0x20 && iVar5 != 0x22))) {
        iVar4 = fn_006c4d34(*(undefined4 *)(param_1 + 0xec),iVar11,0);
      }
      else {
        iVar4 = fn_006c4df4(*(undefined4 *)(param_1 + 0xec),iVar11,0);
      }
    }
    else {
      iVar4 = fn_006c4eb4(*(undefined4 *)(param_1 + 0xec),iVar11);
    }
    if (iVar4 == 0) {
      return 0;
    }
    if (iVar4 == 1) {
      puVar8 = (undefined4 *)fn_006ade38(param_1,iVar11,0);
      local_30 = *puVar8;
      local_2c = puVar8[1];
      local_28 = *(undefined2 *)(puVar8 + 2);
    }
    else {
      if (iVar4 < 0) {
        return 0;
      }
      cVar13 = fn_00163868(iVar4 + -1);
      puVar8 = (undefined4 *)fn_006ade38(param_1,iVar11,(int)cVar13);
      local_30 = *puVar8;
      local_2c = puVar8[1];
      local_28 = *(undefined2 *)(puVar8 + 2);
    }
    goto LAB_006ae4c8;
  }
  uVar3 = (uint)*pbVar1;
  if (uVar3 == 3) {
    iVar11 = fn_00165098(param_1,0);
    if (iVar11 == 0xf7) {
      builtin_strncpy(param_2,(char *)&DAT_006ae584,10);
    }
    else {
      iVar11 = fn_00165098(param_1,0);
      if (iVar11 == 0x209) {
        builtin_strncpy(param_2,(char *)&DAT_006ae578,10);
      }
      else {
        builtin_strncpy(param_2,(char *)&DAT_006ae590,10);
      }
    }
    return 1;
  }
  if (uVar3 < 4) {
    cVar13 = SBORROW4(uVar3,1);
    if (uVar3 != 1) {
      if (uVar3 == 2) {
        builtin_strncpy(param_2,(char *)&DAT_006ae59c,10);
        return 1;
      }
      return 0;
    }
  }
  else {
    cVar13 = SBORROW4(uVar3,0xc);
    if (uVar3 != 0xc) {
      cVar13 = SBORROW4(uVar3,0x10);
    }
    if (uVar3 != 0xc && uVar3 != 0x10) {
      return 0;
    }
  }
  iVar4 = fn_00175c44(*(undefined4 *)(param_1 + 0x84));
  if (iVar4 != 0) {
    iVar11 = (int)*(short *)(iVar4 + 0x1a);
    cVar13 = '\0';
  }
  if ((iVar4 == 0 || iVar11 == 0) || iVar11 < 0 != (bool)cVar13) {
    return 0;
  }
  if (699 < iVar11) {
    return 0;
  }
  iVar5 = fn_00175c44(*(undefined4 *)(param_1 + 0x84));
  iVar9 = (int)*(char *)(iVar5 + 0x1c);
  iVar10 = 0;
  iVar6 = fn_001648dc(param_1,0);
  if (iVar6 == 1) {
    iVar6 = 0;
    if ('\0' < *(char *)(iVar4 + 0x14)) {
      do {
        iVar7 = fn_001667e0(iVar4 + iVar6 * 0xc4 + 0x22,2);
        if (iVar7 != 0) {
          iVar10 = 1;
          break;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(char *)(iVar4 + 0x14));
    }
    iVar4 = fn_00154ac8(0x32);
    if ((iVar4 == 0) && (iVar4 = fn_00154ac8(0x31), iVar4 == 0)) {
      uVar3 = iVar9 - 0x10;
      bVar12 = uVar3 < 4;
      if (!bVar12) {
        uVar3 = iVar9 - 0x18;
      }
      if ((bVar12 || uVar3 < 4) || (iVar9 == 0x20 || iVar9 == 0x22)) {
        iVar4 = fn_006c4d34(*(undefined4 *)(param_1 + 0xec),iVar11,iVar10);
      }
      else {
        iVar4 = fn_006c4df4(*(undefined4 *)(param_1 + 0xec),iVar11,iVar10);
      }
      goto LAB_006ae19c;
    }
  }
  else {
    iVar4 = fn_00154ac8(0x32);
    if ((iVar4 == 0) && (iVar4 = fn_00154ac8(0x31), iVar4 == 0)) {
      iVar4 = fn_006c4eb4(*(undefined4 *)(param_1 + 0xec),iVar11);
LAB_006ae19c:
      if (iVar4 == 0) {
        return 0;
      }
      if (iVar4 != 1) {
        if (iVar4 < 0) {
          return 0;
        }
        cVar13 = fn_00163868(iVar4 + -1);
        iVar6 = (int)cVar13;
        if ((int)*(char *)(iVar5 + 0x1d) - 0x10U < 8) {
          iVar9 = fn_00174828(DAT_008977e4);
          iVar9 = iVar9 + *(char *)(iVar5 + 0x1d) * 0x418;
          if ((((iVar9 != 0x4080) && (*(char *)(iVar9 + -0x4027) < '\x03')) && (iVar10 != 0)) &&
             (iVar5 = fn_00163868(2), iVar5 == 0)) {
            iVar6 = (int)(char)((char)iVar4 + -1);
          }
        }
        puVar8 = (undefined4 *)fn_006ade38(param_1,iVar11,iVar6);
        local_30 = *puVar8;
        local_2c = puVar8[1];
        local_28 = *(undefined2 *)(puVar8 + 2);
        goto LAB_006ae4c8;
      }
    }
  }
  puVar8 = (undefined4 *)fn_006ade38(param_1,iVar11,0);
  local_30 = *puVar8;
  local_2c = puVar8[1];
  local_28 = *(undefined2 *)(puVar8 + 2);
LAB_006ae4c8:
  *(undefined4 *)param_2 = local_30;
  *(undefined4 *)(param_2 + 4) = local_2c;
  *(undefined2 *)(param_2 + 8) = local_28;
  return 1;
}


