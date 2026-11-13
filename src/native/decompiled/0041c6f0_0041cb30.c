#include "0041c6f0_0041cb30.h"



void fn_0041cb30(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 unaff_r4;
  int iVar7;
  int iVar8;
  
  iVar6 = param_1[0x39];
  if (iVar6 == 6) {
    iVar6 = fn_006f6a6c();
    if (iVar6 != 1) {
      return;
    }
  }
  else {
    if (iVar6 != 7) {
      if (iVar6 != 8) {
        return;
      }
      iVar6 = param_1[0x3a];
      if (iVar6 == 0) {
        iVar6 = fn_006f6a6c(param_1);
        if (iVar6 != 0) {
          if (iVar6 == 2) {
            fn_003e6b34(param_1,0);
          }
          else if (iVar6 == 3) {
            iVar8 = *(int *)(param_1[0x40] + 0x14);
            uVar3 = *(undefined4 *)(DAT_00897804 + 0x38);
            iVar6 = fn_006b876c(uVar3);
            iVar7 = 0;
            if (0 < iVar6) {
              do {
                iVar1 = fn_0028bb88(uVar3,iVar7);
                if (iVar7 == iVar8) {
                  *(uint *)(iVar1 + 0xa74) = *(uint *)(iVar1 + 0xa74) | 8;
                  fn_0044aa54(param_1[0x3c],iVar1);
                  fn_0042f204(param_1[0x3c],0);
                  uVar2 = fn_00293638(iVar1);
                  fn_0028bb6c(uVar3,uVar2);
                }
                else {
                  *(uint *)(iVar1 + 0xa74) = *(uint *)(iVar1 + 0xa74) & 0xfffffff7;
                }
                iVar7 = iVar7 + 1;
              } while (iVar7 < iVar6);
            }
            (**(code **)(*param_1 + 0x150))(param_1);
            fn_0015b0dc();
            uVar3 = fn_0022f584((char *)&DAT_0041d690,0);
            fn_0068974c(param_1,uVar3,0,1);
            param_1[0x3a] = 1;
          }
        }
      }
      else if (iVar6 != 1) {
        if (iVar6 != 2) {
          return;
        }
        iVar6 = fn_00291ae4();
        if (iVar6 == 0) {
          return;
        }
        fn_003e6b34(param_1,0);
        return;
      }
      iVar6 = fn_006f6a6c(param_1);
      if (iVar6 == 1) {
        uVar3 = fn_00689b18(param_1);
        fn_00294160(uVar3,0);
        param_1[0x3a] = 2;
      }
      return;
    }
    if (param_1[0x3a] == 0) {
      iVar6 = fn_006f6a6c(param_1);
      if (iVar6 == 1) {
        fn_002937a8();
        uVar3 = fn_00689b18(param_1);
        fn_00294160(uVar3,0);
        param_1[0x3a] = 1;
        return;
      }
      return;
    }
    if (param_1[0x3a] != 1) {
      return;
    }
    iVar6 = fn_00291ae4();
    if (iVar6 == 0) {
      return;
    }
  }
  iVar6 = fn_006b876c(*(undefined4 *)(DAT_00897804 + 0x38));
  if (0 < iVar6) {
    (**(code **)(*(int *)param_1[0x40] + 0xc))();
    fn_006899f4(param_1,0xdc,1,1,unaff_r4);
    fn_003e6b34(param_1,5);
    return;
  }
  (**(code **)(*(int *)param_1[0x40] + 0xc))();
  piVar4 = (int *)fn_001f74ec(param_1,0xdc);
  if (piVar4 != (int *)0x0) {
    puVar5 = (undefined4 *)(**(code **)*piVar4)(piVar4);
    do {
      if (puVar5 == &DAT_008968a8) goto LAB_0041dd74;
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != (undefined4 *)0x0);
  }
  piVar4 = (int *)0x0;
LAB_0041dd74:
  (**(code **)(*piVar4 + 0xc))(piVar4);
  fn_006899f4(param_1,0xd4,1);
  fn_003e6b34(param_1,5);
  return;
}



void fn_0041cb10(int param_1)

{
  fn_003979d0();
  fn_003e6b44(param_1);
  *(undefined4 *)(param_1 + 0x100) = 0;
  return;
}



int * fn_0041cabc(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    if (*(int **)(iVar1 + 0x80) != (int *)0x0) {
      (**(code **)(**(int **)(iVar1 + 0x80) + 4))();
    }
    if (*(int **)(iVar1 + 0x7c) != (int *)0x0) {
      (**(code **)(**(int **)(iVar1 + 0x7c) + 4))();
    }
    fn_002feef8(iVar1);
  }
  return param_1;
}



undefined4 * fn_0041ca58(undefined4 *param_1,undefined1 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00145b00(0x8c,&DAT_00812c8c);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = &DAT_00859420;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[0x1f] = 0;
    puVar1[0x20] = 0;
    puVar1[0x21] = 0;
    *(undefined1 *)(puVar1 + 0x22) = param_2;
  }
  *param_1 = puVar1;
  return param_1;
}



undefined4 fn_0041c6f0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  iVar6 = *param_1;
  iVar5 = *(int *)(iVar6 + 4);
  if (iVar5 == 0) {
    if (*(int *)(iVar6 + 0x14) == 0) {
      iVar5 = fn_00145b00(0xa8,&DAT_00812c8c);
      if (iVar5 == 0) {
        piVar7 = (int *)0x0;
      }
      else {
        puVar3 = (undefined4 *)fn_005f62c0();
        puVar3[8] = &DAT_00859420;
        puVar3[9] = 0;
        puVar3[10] = 0;
        puVar3[0xb] = 0;
        puVar3[0xc] = 0;
        puVar3[0xd] = 0;
        *puVar3 = &DAT_00859b38;
        iVar5 = fn_00119b40(puVar3 + 0x10);
        piVar7 = (int *)(iVar5 + -0x40);
        fn_0066ddbc();
        fn_002fec40(iVar5 + 0x18,s_TaskNexRankingDownloadMyCommonDa_008c7238);
        *piVar7 = (int)&DAT_0085a7f0;
        *(undefined4 *)(iVar5 + 0x5c) = 0;
        *(undefined4 *)(iVar5 + 0x60) = 0;
        *(undefined4 *)(iVar5 + 100) = 0;
        fn_0067b9c4(piVar7);
      }
      piVar4 = *(int **)(iVar6 + 0x80);
      if (piVar4 != piVar7) {
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 4))();
        }
        *(int **)(iVar6 + 0x80) = piVar7;
      }
      fn_0067b95c(*(undefined4 *)(iVar6 + 0x80));
      goto LAB_0041c900;
    }
    fn_005f6270(*(undefined4 *)(iVar6 + 0x80));
    iVar5 = (**(code **)(**(int **)(iVar6 + 0x80) + 0x14))();
    if (iVar5 != 0) goto LAB_0041c900;
    iVar5 = *(int *)(iVar6 + 0x80);
    if (*(int *)(iVar5 + 0x44) == 0) {
      iVar1 = fn_0067babc(iVar5,iVar6 + 0x18,100);
      iVar5 = DAT_00897804;
      if (iVar1 == 0) {
        fn_00301a9c(iVar6 + 0x18,**(undefined4 **)(DAT_00897804 + 0x44),100);
      }
      else if (*(char *)(iVar6 + 0x88) == '\0') {
        iVar1 = **(int **)(DAT_00897804 + 0x44);
        *(undefined4 *)(iVar6 + 100) = *(undefined4 *)(iVar1 + 0x4c);
        *(undefined4 *)(iVar6 + 0x68) = *(undefined4 *)(iVar1 + 0x50);
        *(undefined4 *)(iVar6 + 0x6c) = *(undefined4 *)(iVar1 + 0x54);
        *(undefined4 *)(iVar6 + 0x70) = *(undefined4 *)(iVar1 + 0x58);
        *(undefined4 *)(iVar6 + 0x74) = *(undefined4 *)(iVar1 + 0x5c);
        *(undefined4 *)(iVar6 + 0x78) = *(undefined4 *)(iVar1 + 0x60);
        *(undefined2 *)(iVar6 + 0x62) = *(undefined2 *)(**(int **)(iVar5 + 0x44) + 0x4a);
      }
      else if (*(char *)(iVar6 + 0x88) == '\x01') {
        fn_00301a9c(iVar6 + 0x18,**(undefined4 **)(DAT_00897804 + 0x44),0x48);
        iVar5 = DAT_00897804;
        *(undefined2 *)(iVar6 + 0x60) = *(undefined2 *)(**(int **)(DAT_00897804 + 0x44) + 0x48);
        *(undefined2 *)(iVar6 + 0x62) = *(undefined2 *)(**(int **)(iVar5 + 0x44) + 0x4a);
      }
      uVar2 = 1;
LAB_0041c8fc:
      *(undefined4 *)(iVar6 + 0xc) = uVar2;
      goto LAB_0041c900;
    }
  }
  else {
    if (iVar5 != 1) {
      if (iVar5 == 2) {
        return 1;
      }
      goto LAB_0041c900;
    }
    if (*(int *)(iVar6 + 0x14) == 0) {
      iVar5 = fn_00145b00(0x9c,&DAT_00812c8c);
      if (iVar5 == 0) {
        piVar7 = (int *)0x0;
      }
      else {
        puVar3 = (undefined4 *)fn_005f62c0();
        puVar3[8] = &DAT_00859420;
        puVar3[9] = 0;
        puVar3[10] = 0;
        puVar3[0xb] = 0;
        puVar3[0xc] = 0;
        puVar3[0xd] = 0;
        *puVar3 = &DAT_00859b38;
        iVar5 = fn_00119b40(puVar3 + 0x10);
        piVar7 = (int *)(iVar5 + -0x40);
        fn_0066ddbc();
        fn_002fec40(iVar5 + 0x18,s_TaskNexRankingUploadCommonData_008c714f);
        *piVar7 = (int)&DAT_0085a670;
        fn_0067b11c(piVar7);
      }
      piVar4 = *(int **)(iVar6 + 0x7c);
      if (piVar4 != piVar7) {
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 4))();
        }
        *(int **)(iVar6 + 0x7c) = piVar7;
      }
      fn_0067b0a4(*(undefined4 *)(iVar6 + 0x7c),iVar6 + 0x18,100);
      goto LAB_0041c900;
    }
    fn_005f6270(*(undefined4 *)(iVar6 + 0x7c));
    iVar5 = (**(code **)(**(int **)(iVar6 + 0x7c) + 0x14))();
    if (iVar5 != 0) goto LAB_0041c900;
    iVar5 = *(int *)(iVar6 + 0x7c);
    if (*(int *)(iVar5 + 0x44) == 0) {
      uVar2 = 2;
      goto LAB_0041c8fc;
    }
  }
  *(int *)(iVar6 + 0x84) = iVar5;
  *(undefined4 *)(iVar6 + 0xc) = 2;
LAB_0041c900:
  iVar5 = *(int *)(iVar6 + 4);
  *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
  *(int *)(iVar6 + 4) = *(int *)(iVar6 + 0xc);
  *(int *)(iVar6 + 8) = iVar5;
  if (iVar5 == *(int *)(iVar6 + 0xc)) {
    *(int *)(iVar6 + 0x14) = *(int *)(iVar6 + 0x14) + 1;
  }
  else {
    *(undefined4 *)(iVar6 + 0x14) = 0;
  }
  return 0;
}


