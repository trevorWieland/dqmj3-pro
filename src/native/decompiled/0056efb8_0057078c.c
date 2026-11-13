#include "0056efb8_0057078c.h"



void fn_0057078c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  char *local_20 [4];
  
  iVar1 = fn_006ba220();
  if (iVar1 == 0) {
    local_20[0] = (char *)0xfc3;
    local_20[1] = (char *)0xfc4;
    local_20[2] = "Partner_Shortcut_Boss";
    local_20[3] = "Partner_Shortcut_Map";
    pcVar4 = local_20[param_2 + 2];
    uVar2 = fn_0022eefc((int)(short)local_20[param_2],0);
    uVar3 = fn_0022f750(pcVar4);
    fn_00321118(*(undefined4 *)(param_1 + 0x58),uVar3,uVar2);
    fn_00689bd0(param_1,0x49,0);
  }
  return;
}



undefined4 fn_00570564(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_2c;
  undefined4 *local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  undefined1 local_13;
  undefined1 local_e;
  
  fn_002c330c(&local_40);
  local_40 = DAT_00894bc4;
  uStack_3c = DAT_00894bc8;
  local_2c = 2;
  uStack_38 = 3;
  uStack_34 = 0;
  uVar1 = fn_0022f750((char *)&DAT_00570748);
  fn_00147974(&local_24,uVar1);
  local_e = 1;
  local_13 = 1;
  uVar1 = fn_0022f750((char *)&DAT_0057075c);
  fn_00147974(&local_18,uVar1);
  fn_002c29a0(param_1,&local_40);
  iVar2 = fn_00154ac8(0x310);
  if (iVar2 == 0) {
    fn_00689efc(param_1,0x67,0);
  }
  else {
    fn_00689efc(param_1,0x90,0);
  }
  if (local_18 != &DAT_008f9cf4) {
    piVar3 = local_18 + -3;
    iVar2 = *piVar3;
    if ((iVar2 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar2 + -1, iVar2 == 0)))) {
      fn_001008c4(local_18 + -3,local_18[-2] + 8,0);
    }
  }
  if (local_1c != &DAT_008f9cf4) {
    piVar3 = local_1c + -3;
    iVar2 = *piVar3;
    if ((iVar2 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar2 + -1, iVar2 == 0)))) {
      fn_001008c4(local_1c + -3,local_1c[-2] + 8,0);
    }
  }
  if (local_20 != &DAT_008f9cf4) {
    piVar3 = local_20 + -3;
    iVar2 = *piVar3;
    if ((iVar2 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar2 + -1, iVar2 == 0)))) {
      fn_001008c4(local_20 + -3,local_20[-2] + 8,0);
    }
  }
  if (local_24 != &DAT_008f9cf4) {
    piVar3 = local_24 + -3;
    iVar2 = *piVar3;
    if ((iVar2 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar2 + -1, iVar2 == 0)))) {
      fn_001008c4(local_24 + -3,local_24[-2] + 8,0);
    }
  }
  return 1;
}



void fn_0057032c(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [8];
  
  puVar3 = auStack_18;
  if (param_3 == 0) {
    uVar1 = fn_0022f750((char *)&DAT_005703a0);
    fn_00168a24(param_1,uVar1,auStack_14);
    return;
  }
  if (param_3 == 1) {
    puVar3 = auStack_14;
    puVar2 = (undefined *)fn_0022f750((char *)&DAT_005703ac,param_2,1);
  }
  else {
    puVar2 = &DAT_0057039c;
  }
  fn_00168a24(param_1,puVar2,puVar3);
  return;
}



void fn_0056f9d0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = fn_0022f750((char *)&DAT_0056fa1c);
  uVar2 = fn_0022eefc(0x6a5,0);
  fn_00321118(*(undefined4 *)(param_1 + 0x58),uVar1,uVar2);
  fn_00689bd0(param_1,0x49,0);
  return;
}



void fn_0056efb8(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 *******pppppppuVar12;
  code *pcVar13;
  bool bVar14;
  bool bVar15;
  undefined4 *******local_2c;
  uint local_28;
  
  pppppppuVar12 = &local_2c;
  local_28 = 0;
  local_2c = (undefined4 *******)0x0;
  (**(code **)(**(int **)(param_1 + 0xec) + 0x30))(*(int **)(param_1 + 0xec),&local_28);
  iVar2 = (**(code **)(**(int **)(param_1 + 0xec) + 0x34))();
  iVar3 = (**(code **)(**(int **)(param_1 + 0xec) + 0x38))();
  iVar4 = (**(code **)(**(int **)(param_1 + 0xec) + 0x3c))();
  iVar5 = (**(code **)(**(int **)(param_1 + 0xec) + 0x40))();
  bVar14 = *(byte *)(param_1 + 0x124) == 0;
  uVar11 = (uint)*(byte *)(param_1 + 0x124);
  if (bVar14) {
    uVar11 = local_28;
  }
  bVar15 = bVar14 && uVar11 == 0;
  if (bVar14 && uVar11 == 0) {
    bVar15 = local_2c == (undefined4 *******)0x3;
  }
  if (bVar15) {
    piVar6 = *(int **)(param_1 + 0xec);
    iVar7 = (**(code **)(*piVar6 + 100))();
    iVar8 = (**(code **)(*piVar6 + 0x6c))(piVar6);
    if (iVar7 - iVar8 == -1) {
      iVar4 = 1;
    }
    else {
      iVar3 = 1;
    }
    iVar7 = (**(code **)(**(int **)(param_1 + 0xec) + 0x6c))();
    pppppppuVar12 = (undefined4 *******)((int)(iVar7 + ((uint)(iVar7 >> 0x1f) >> 0x1e)) >> 2);
    (**(code **)(**(int **)(param_1 + 0xec) + 0x2c))
              (*(int **)(param_1 + 0xec),iVar7 % 4,pppppppuVar12,0);
  }
  cVar1 = *(char *)(param_1 + 0xe8);
  if (cVar1 == '\0') {
    if (iVar2 != 0 || iVar3 != 0) {
      if ((local_28 - 1 < 3) && (iVar3 = fn_0056e470(param_1,iVar2,0), iVar3 != 0)) {
        return;
      }
      if (local_28 == 0) {
        fn_0056e578(param_1,0);
      }
      else {
        fn_0056e578(param_1,1);
      }
      goto LAB_0056f2a8;
    }
    if (iVar4 == 0 && iVar5 == 0) {
      iVar3 = (**(code **)(**(int **)(param_1 + 0xec) + 0xa0))();
      if (-1 < iVar3) {
        iVar3 = fn_006a833c(*(undefined4 *)(param_1 + 0xec),iVar3);
        iVar2 = fn_0056d53c(param_1,*(undefined4 *)(param_1 + 0xa8),iVar3 % 4,
                             (int)(iVar3 + ((uint)(iVar3 >> 0x1f) >> 0x1e)) >> 2);
        if (iVar2 == 0) {
          return;
        }
        fn_0056bb7c(param_1,iVar3);
        *(undefined1 *)(param_1 + 0xe8) = 1;
        *(undefined1 *)(*(int *)(param_1 + 0xec) + 0x48) = 0;
        *(undefined1 *)(*(int *)(param_1 + 0xf0) + 0x48) = 0;
        if (*(int *)(param_1 + 0xf4) != 0) {
          *(undefined1 *)(*(int *)(param_1 + 0xf4) + 0x48) = 0;
        }
        return;
      }
      iVar3 = (**(code **)(**(int **)(param_1 + 0xec) + 0x80))();
      if (-1 < iVar3) {
        iVar3 = fn_006a833c(*(undefined4 *)(param_1 + 0xec),iVar3);
        iVar2 = fn_0056d53c(param_1,*(undefined4 *)(param_1 + 0xa8),iVar3 % 4,
                             (int)(iVar3 + ((uint)(iVar3 >> 0x1f) >> 0x1e)) >> 2);
        fn_0025e314(*(undefined4 *)(param_1 + 200),1);
        if (iVar2 == 0) {
          return;
        }
        fn_0056bb7c(param_1,iVar3);
        *(undefined1 *)(param_1 + 0xe8) = 2;
        return;
      }
      iVar3 = (**(code **)(**(int **)(param_1 + 0xec) + 0xa8))();
      if (-1 < iVar3) {
        fn_0068ab44(param_1,0x100094e);
        fn_0056e578(param_1,1);
        return;
      }
      iVar3 = (**(code **)(**(int **)(param_1 + 0xec) + 0xb8))();
      if (-1 < iVar3) {
        uVar10 = fn_0022f750((char *)&DAT_0056fa1c);
        uVar9 = fn_0022eefc(0x6a5,0);
        fn_00321118(*(undefined4 *)(param_1 + 0x58),uVar10,uVar9);
        fn_00689bd0(param_1,0x49,0);
        return;
      }
      iVar3 = fn_0056bdac(param_1,*(undefined4 *)(param_1 + 0xec));
      if (iVar3 == 0) {
        fn_0056d658(param_1,*(undefined4 *)(param_1 + 0xec),1);
        return;
      }
      return;
    }
    if (*(int *)(param_1 + 0xf4) != 0) {
      uVar10 = (**(code **)(**(int **)(param_1 + 200) + 0x2c))();
      fn_0056e60c(param_1,uVar10);
      goto LAB_0056f2a8;
    }
    if (iVar4 != 0) {
      (**(code **)(**(int **)(param_1 + 0xec) + 0x2c))(*(int **)(param_1 + 0xec),3,local_2c,0);
      goto LAB_0056f2a8;
    }
    bVar14 = *(char *)(param_1 + 0x124) != '\0';
    if (!bVar14) {
      pppppppuVar12 = local_2c;
    }
    if (bVar14 || pppppppuVar12 != (undefined4 *******)0x3) {
LAB_0056f57c:
      piVar6 = *(int **)(param_1 + 0xec);
      pcVar13 = *(code **)(*piVar6 + 0x2c);
      uVar11 = 0;
    }
    else {
LAB_0056f598:
      piVar6 = *(int **)(param_1 + 0xec);
      pcVar13 = *(code **)(*piVar6 + 0x2c);
      uVar11 = 1;
    }
  }
  else {
    if (cVar1 != '\x01') {
      if (cVar1 != '\x02') {
        return;
      }
      iVar3 = (**(code **)(**(int **)(param_1 + 0xec) + 0x88))();
      if (iVar3 < 0) {
        return;
      }
      iVar3 = *(int *)(param_1 + 0x100);
      fn_0056d598(param_1,*(undefined4 *)(param_1 + 0x104),iVar3 % 4,
                   (int)(iVar3 + ((uint)(iVar3 >> 0x1f) >> 0x1e)) >> 2,
                   *(undefined4 *)(param_1 + 0x108));
      if (*(int *)(param_1 + 0x108) != 0) {
        iVar3 = *(int *)(param_1 + 0x100);
        piVar6 = (int *)fn_0056b8b0(param_1,iVar3 % 4,
                                     (int)(iVar3 + ((uint)(iVar3 >> 0x1f) >> 0x1e)) >> 2);
        (**(code **)(*piVar6 + 0x20))(piVar6,1);
      }
      iVar3 = (**(code **)(**(int **)(param_1 + 0xec) + 0x4c))();
      iVar2 = fn_0056d458(param_1,iVar3);
      if (iVar2 == 0) {
LAB_0056f734:
        fn_0056e8a0(param_1,*(undefined4 *)(param_1 + 0x100));
        fn_0068ab44(param_1,0x100094c);
        return;
      }
      iVar2 = fn_0056d778(param_1,iVar3);
joined_r0x0056f13c:
      if (iVar2 != 0) {
        fn_0056e8a0(param_1,iVar3);
        fn_0068ab44(param_1,0x1000959);
        return;
      }
      fn_0056e8a0(param_1,*(undefined4 *)(param_1 + 0x100));
      uVar10 = fn_0022f584((char *)&DAT_0056f7b8,0);
      fn_0068974c(param_1,uVar10,0,1);
LAB_0056f680:
      fn_0068ab44(param_1,0x100094d);
      return;
    }
    uVar11 = local_28;
    if (iVar2 == 0) {
      if (iVar3 == 0) {
        if (iVar4 == 0) {
          if (iVar5 != 0) {
            bVar14 = *(char *)(param_1 + 0x124) == '\0';
            if (bVar14) {
              pppppppuVar12 = local_2c;
            }
            if (bVar14 && pppppppuVar12 == (undefined4 *******)0x3) goto LAB_0056f598;
            goto LAB_0056f57c;
          }
          iVar3 = (**(code **)(**(int **)(param_1 + 0xec) + 0xa0))();
          if (iVar3 < 0) {
            iVar3 = (**(code **)(**(int **)(param_1 + 0xec) + 0xa8))();
            if (iVar3 < 0) {
              fn_0056d658(param_1,*(undefined4 *)(param_1 + 0xec),0);
              return;
            }
            iVar3 = *(int *)(param_1 + 0x100);
            fn_0056d598(param_1,*(undefined4 *)(param_1 + 0x104),iVar3 % 4,
                         (int)(iVar3 + ((uint)(iVar3 >> 0x1f) >> 0x1e)) >> 2,
                         *(undefined4 *)(param_1 + 0x108));
            if (*(int *)(param_1 + 0x108) != 0) {
              iVar3 = *(int *)(param_1 + 0x100);
              piVar6 = (int *)fn_0056b8b0(param_1,iVar3 % 4,
                                           (int)(iVar3 + ((uint)(iVar3 >> 0x1f) >> 0x1e)) >> 2);
              (**(code **)(*piVar6 + 0x20))(piVar6,1);
            }
            if (*(int *)(param_1 + 0xa8) != *(int *)(param_1 + 0x104)) {
              *(int *)(*(int *)(param_1 + 0xb0) + 0x24) = *(int *)(param_1 + 0x104);
              *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_1 + 0x104);
            }
            goto LAB_0056f734;
          }
          iVar2 = fn_0056d458(param_1,iVar3);
          if (iVar2 == 0) goto LAB_0056f680;
          iVar2 = *(int *)(param_1 + 0x100);
          fn_0056d598(param_1,*(undefined4 *)(param_1 + 0x104),iVar2 % 4,
                       (int)(iVar2 + ((uint)(iVar2 >> 0x1f) >> 0x1e)) >> 2,
                       *(undefined4 *)(param_1 + 0x108));
          if (*(int *)(param_1 + 0x108) != 0) {
            iVar2 = *(int *)(param_1 + 0x100);
            piVar6 = (int *)fn_0056b8b0(param_1,iVar2 % 4,
                                         (int)(iVar2 + ((uint)(iVar2 >> 0x1f) >> 0x1e)) >> 2);
            (**(code **)(*piVar6 + 0x20))(piVar6,1);
          }
          iVar2 = fn_0056d778(param_1,iVar3);
          goto joined_r0x0056f13c;
        }
        piVar6 = *(int **)(param_1 + 0xec);
        pcVar13 = *(code **)(*piVar6 + 0x2c);
        uVar11 = 3;
      }
      else {
        if (local_28 - 1 < 3) {
          fn_0056e470(param_1,0,1);
          return;
        }
        piVar6 = *(int **)(param_1 + 0xec);
        pcVar13 = *(code **)(*piVar6 + 0x2c);
      }
    }
    else {
      if (local_28 - 1 < 3) {
        fn_0056e470(param_1,1);
        return;
      }
      piVar6 = *(int **)(param_1 + 0xec);
      pcVar13 = *(code **)(*piVar6 + 0x2c);
    }
  }
  (*pcVar13)(piVar6,uVar11);
LAB_0056f2a8:
  fn_0068ab44(param_1,0x100094e);
  return;
}


