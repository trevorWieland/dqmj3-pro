#include "005bb84c_005bc740a.h"



void fn_005bc328(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 *local_38;
  uint local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  
  if (*(int *)(param_1 + 0x110) != 0) {
    if (*(int *)(param_1 + 0x114) == -1) {
      iVar2 = fn_0023c3b8(*(int *)(param_1 + 0x110),0,1);
      if (iVar2 != 0) {
        if (*(int *)(*(int *)(param_1 + 0x110) + 0x44) != 0) {
          *(undefined4 *)(param_1 + 0x108) = 2;
          *(undefined4 *)(param_1 + 0x10c) = 0;
          return;
        }
        local_38 = (undefined4 *)0x0;
        local_34 = 0;
        local_30 = 0;
        local_2c = 0;
        local_28 = 0;
        local_24 = 0;
        puVar3 = (undefined4 *)fn_0015ece0(0xc);
        uVar1 = fn_0015ece0(0x78);
        puVar3[2] = uVar1;
        *puVar3 = local_38;
        puVar3[1] = 1;
        local_28 = puVar3[2];
        local_30 = local_28 + 0x78;
        *(int *)local_28 = local_28;
        *(int *)(local_28 + 4) = local_28;
        local_38 = puVar3;
        local_2c = local_30;
        fn_0023ce58(*(int *)(param_1 + 0x110) + 0x98,&local_38);
        uVar1 = fn_0023c2a8();
        fn_002a3540(uVar1,&local_38);
        iVar2 = fn_0023c2a8();
        piVar7 = (int *)**(int **)(iVar2 + 0x14);
        if (piVar7 != *(int **)(iVar2 + 0x14)) {
          do {
            uVar4 = *(int *)(param_1 + 0xec) - *(int *)(param_1 + 0xe8);
            iVar5 = (int)((longlong)(int)uVar4 * -0x57f57f57 + ((ulonglong)uVar4 << 0x20) >> 0x20);
            iVar8 = (iVar5 >> 10) - (iVar5 >> 0x1f);
            iVar5 = 0;
            if (0 < iVar8) {
              do {
                iVar6 = *(int *)(param_1 + 0xe8) + iVar5 * 0x618;
                if (*(int *)(iVar6 + 0x5b0) == piVar7[4]) {
                  fn_004a2190(iVar6 + 0x5a8,piVar7 + 2);
                  fn_0023cff0(iVar6 + 0x5a8,iVar6);
                  break;
                }
                iVar5 = iVar5 + 1;
              } while (iVar5 < iVar8);
            }
            piVar7 = (int *)*piVar7;
          } while (piVar7 != (int *)*(int *)(iVar2 + 0x14));
        }
                    /* WARNING: Subroutine does not return */
        fn_006ba250(param_1);
      }
    }
    else if (*(int *)(param_1 + 0x114) == 0) {
      uVar1 = fn_006f5dec(DAT_00898840);
      local_34 = local_34 & 0xffffff00;
      local_2c = 0x14;
      local_38 = (undefined4 *)&DAT_00852a4c;
      local_30 = 0;
      fn_0067b620(*(undefined4 *)(param_1 + 0x110),uVar1,&local_38);
      *(undefined4 *)(param_1 + 0x114) = 0xffffffff;
    }
  }
  return;
}



void fn_005bc2ac(int param_1)

{
  *(undefined4 *)(param_1 + 0xf8) = 1;
  fn_005bc9e4(param_1);
  fn_005bcf78(param_1,(char *)&DAT_005bc308,0);
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



int fn_005bb974(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  
  puVar1 = (undefined4 *)fn_005bd400();
  *puVar1 = &PTR_LAB_008493b0;
  puVar1[0x41] = 0;
  puVar1[0x42] = &DAT_0085a9f4;
  puVar1[0x43] = 0;
  puVar1[0x44] = 0;
  iVar2 = fn_00145b00(0x9c,&DAT_00812c8c);
  if (iVar2 == 0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = (undefined4 *)fn_005f62c0();
    puVar6[8] = &DAT_00859420;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    *puVar6 = &DAT_00859b38;
    iVar2 = fn_00119b40(puVar6 + 0x10);
    puVar6 = (undefined4 *)(iVar2 + -0x40);
    fn_0066ddbc();
    fn_002fec40(iVar2 + 0x18,s_TaskNexGatheringJoin_008c6e6f);
    *puVar6 = &DAT_00859fcc;
    fn_00677048(puVar6);
  }
  puVar1[0x45] = puVar6;
  iVar2 = fn_00124930(puVar1 + 0x46);
  iVar2 = fn_0013d3e8(iVar2 + 0x70,&DAT_005bbb68);
  iVar2 = fn_0013d3e8(iVar2 + 8,&DAT_005bbb68);
  *(undefined4 *)(iVar2 + 8) = 0;
  iVar3 = fn_00145b00(0xb4,&DAT_00812c8c);
  if (iVar3 == 0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = (undefined4 *)fn_005f62c0();
    puVar1[8] = &DAT_00859420;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    *puVar1 = &DAT_00859b38;
    iVar3 = fn_00119b40(puVar1 + 0x10);
    puVar1 = (undefined4 *)(iVar3 + -0x40);
    fn_0066ddbc();
    fn_002fec40(iVar3 + 0x18,s_TaskNexGatheringFindByParticipan_008c71f3);
    piVar7 = (int *)(iVar3 + 0x58);
    *puVar1 = &DAT_0085a240;
    *piVar7 = 0;
    *(undefined4 *)(iVar3 + 0x5c) = 0;
    *(undefined4 *)(iVar3 + 0x60) = 0;
    *(undefined4 *)(iVar3 + 100) = 0;
    *(undefined4 *)(iVar3 + 0x68) = 0;
    *(undefined4 *)(iVar3 + 0x6c) = 0;
    piVar4 = (int *)fn_0015ece0(0xc);
    iVar5 = fn_0015ece0(0x78);
    piVar4[2] = iVar5;
    *piVar4 = *piVar7;
    piVar4[1] = 1;
    *piVar7 = (int)piVar4;
    iVar5 = piVar4[2];
    *(int *)(iVar3 + 0x60) = iVar5;
    *(int *)(iVar3 + 100) = iVar5 + 0x78;
    *(int *)(iVar3 + 0x68) = iVar5;
    *(int *)(iVar3 + 0x60) = iVar5 + 0x78;
    *(int *)iVar5 = iVar5;
    *(int *)(*(int *)(iVar3 + 0x68) + 4) = *(int *)(iVar3 + 0x68);
    *puVar1 = &DAT_0085a790;
    fn_0067b6d4(puVar1);
  }
  *(undefined4 **)(iVar2 + 0xc) = puVar1;
  *(undefined4 *)(iVar2 + 0x10) = 0;
  *(undefined4 *)(iVar2 + 0x14) = 0;
  return iVar2 + -400;
}



void fn_005bb8b4(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  fn_003979f0();
  if (param_1[0x39] != 0) {
    uVar1 = fn_006f6a5c(param_1);
    if ((uVar1 & 0x100000) == 0) {
      if ((uVar1 & 0x200000) != 0) {
        *(undefined1 *)(param_1[0x39] + 0x18) = 2;
      }
    }
    else {
      *(undefined1 *)(param_1[0x39] + 0x18) = 1;
    }
  }
  fn_0023c5b0(param_1,param_1[0x43] == 0);
  iVar2 = param_1[0x43];
  if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x005bb958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x14c))(param_1);
    return;
  }
  if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x005bb96c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x150))(param_1);
    return;
  }
  if (iVar2 == 2) {
                    /* WARNING: Could not recover jumptable at 0x005bb944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x154))(param_1);
    return;
  }
  return;
}



void fn_005bb84c(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x10c) == 0) {
    iVar1 = fn_006e8f88(param_1);
    fn_004a2190(param_1 + 0x118,iVar1 + 0x5a8);
    *(undefined4 *)(param_1 + 0x10c) = 1;
    *(undefined4 *)(param_1 + 0x110) = 0;
    fn_0068ab44(param_1,0x100094b);
    return;
  }
  return;
}


