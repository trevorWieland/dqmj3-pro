#include "0024a1b0_0024abc0.h"



undefined4 * fn_0024abc0(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  uint local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 auStack_1d0 [11];
  undefined1 auStack_1a4 [24];
  undefined1 auStack_18c [68];
  undefined1 auStack_148 [40];
  undefined4 local_120;
  undefined4 auStack_100 [2];
  undefined1 auStack_f8 [68];
  undefined1 auStack_b4 [68];
  undefined1 auStack_70 [84];
  
  puVar1 = &DAT_00896f34;
  DAT_00896f4c = DAT_00896f4c + 1;
  if (DAT_00896f4c == 1) {
    fn_00692e98(auStack_100);
    fn_00183718(&local_1e8,auStack_100,(char *)&DAT_0024ad74);
    local_1f0 = local_1d4;
    uStack_1ec = auStack_1d0[0];
    uVar4 = 0;
    uStack_200 = uStack_1e4;
    uStack_1fc = uStack_1e0;
    uStack_1f8 = local_1dc;
    uStack_1f4 = local_1d8;
    if (local_1e8 != 0) {
      do {
        fn_00176ec8(auStack_1a4,&uStack_200,uVar4);
        fn_0017821c(&local_1e8,auStack_1a4,0x44);
        iVar2 = fn_00147e6c(&local_1e8,&DAT_0024ad88,2);
        if (iVar2 == 0) {
          fn_00176ec8(auStack_f8,&uStack_200,uVar4);
          fn_0017821c(auStack_1d0,auStack_f8,0x44);
          fn_00176ec8(auStack_b4,&uStack_200,uVar4);
          fn_0017821c(auStack_18c,auStack_b4,0x44);
          fn_00176ec8(auStack_70,&uStack_200,uVar4);
          fn_0017821c(auStack_148,auStack_70,0x44);
          local_1d4 = local_120;
          fn_0068e960(DAT_008977e8);
          uVar3 = fn_00664c4c();
          iVar2 = fn_0023b858(uVar3,0,&local_1dc,&local_1e8,0);
          if (iVar2 == 0) {
            fn_0023ddec(param_1,0x9c50);
          }
          else {
            fn_0023ddec(param_1,0x9c50);
          }
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < local_1e8);
    }
    puVar1 = auStack_100;
  }
  return puVar1;
}



void fn_0024ab74(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = fn_006b6e94();
  if (0 < iVar1) {
    do {
      uVar2 = fn_006b6d3c(param_1,iVar3);
      fn_002625d0(param_1,uVar2);
      iVar3 = iVar3 + 1;
      iVar1 = fn_006b6e94(param_1);
    } while (iVar3 < iVar1);
  }
  return;
}



int * fn_0024aa90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  psVar1 = (short *)fn_003711a8(param_3);
  iVar5 = (int)*psVar1;
  iVar2 = fn_00265094(param_1,iVar5);
  if (iVar2 == -1) {
    iVar2 = fn_00264c80(param_1,iVar5);
  }
  iVar3 = fn_00265328(param_1,iVar5);
  if (iVar3 == -1) {
    iVar3 = fn_00265110(param_1,iVar5,0xffffffff);
  }
  piVar4 = (int *)fn_00262130(param_2,iVar2,iVar3,iVar5);
  (**(code **)(*piVar4 + 0x1c))(piVar4,param_4);
  *(undefined1 *)((int)piVar4 + 0x56) = *(undefined1 *)((int)psVar1 + 3);
  *(char *)((int)piVar4 + 0x57) = (char)psVar1[1];
  *(char *)(piVar4 + 0x16) = (char)psVar1[2];
  *(char *)((int)piVar4 + 0x59) = (char)psVar1[3];
  piVar4[0x17] = *(int *)(psVar1 + 4);
  *(short *)((int)piVar4 + 0x62) = (short)param_3;
  return piVar4;
}



undefined1 * fn_0024a9d4(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined1 auStack_28 [8];
  
  uVar1 = fn_0026483c(param_1,param_4);
  (&DAT_008cd594)[param_4] = uVar1;
  uVar1 = fn_00264684(param_1,param_4);
  (&DAT_008cd5a4)[param_4] = uVar1;
  DAT_00896f50 = fn_002648b8(param_1);
  if (DAT_00896f50 == -1) {
    DAT_00896f50 = fn_00264afc(param_1);
  }
  fn_00263560(param_2,(&DAT_008cd594)[param_4],(&DAT_008cd5a4)[param_4],DAT_00896f50,param_4);
  fn_00692e98(auStack_28,param_3);
  uVar1 = fn_006b6ea8(param_2,param_4);
  fn_00249088(auStack_28,uVar1,param_4);
  return auStack_28;
}



undefined1 * fn_0024a220(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *unaff_r11;
  bool bVar10;
  undefined1 auStack_2a0 [594];
  byte local_4e;
  char local_4d;
  undefined1 auStack_40 [8];
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  local_30 = param_1;
  uStack_2c = param_2;
  iStack_28 = param_3;
  fn_00692e98(auStack_40);
  iVar6 = 3;
  fn_00144810(DAT_008977e8);
  iVar2 = fn_006a89a8();
  if (iVar2 == 0) {
    fn_00144810(DAT_008977e8);
    iVar2 = fn_006a8694();
  }
  else {
    iVar2 = fn_006f6c60();
  }
  if (iVar2 == 4) {
    iVar6 = 4;
  }
  fn_0068c2e4(auStack_2a0);
  fn_0068c6c4(DAT_008977e8,auStack_2a0);
  if (local_4d == '\0') {
    iVar6 = 0;
  }
  else if (local_4d == '\x02') {
    iVar6 = 4;
  }
  iVar8 = 0;
  iVar7 = 0;
  iVar2 = fn_006b6740(local_30);
  if (0 < iVar2) {
    do {
      fn_006b7068(local_30,iVar7);
      iVar2 = fn_0068c570();
      if ((iVar2 != 0) && (iVar2 = fn_006b7068(local_30,iVar7), *(char *)(iVar2 + 0x5c) == '\0')) {
        iVar8 = iVar8 + 1;
      }
      iVar7 = iVar7 + 1;
      iVar2 = fn_006b6740(local_30);
    } while (iVar7 < iVar2);
  }
  if (iVar6 != iVar8) {
    local_38 = iVar6 - iVar8;
    iVar2 = 0;
    if (0 < local_38) {
      do {
        iVar6 = fn_006b6740(local_30);
        iVar7 = fn_002fecec(iVar6 << 2);
        if (0 < iVar6) {
          unaff_r11 = &DAT_008977e8;
        }
        iVar8 = 0;
        iVar9 = 0;
        if (iVar6 < 1) {
LAB_0024a524:
          fn_0030233c(iVar7);
          return auStack_40;
        }
        do {
          puVar3 = (undefined *)fn_006b7068(local_30,iVar9);
          uVar4 = fn_0068c570();
          bVar10 = uVar4 == 0;
          if (bVar10) {
            uVar4 = (uint)(byte)puVar3[0x5c];
          }
          if (bVar10 && uVar4 == 0) {
            fn_00144810(*unaff_r11);
            iVar5 = fn_006a8890();
            if ((iVar5 == 0) || ((byte)puVar3[0x53] < 2)) {
              if (param_3 == 0) {
                fn_0068c2e4(auStack_2a0);
                fn_0068c6c4(*unaff_r11,auStack_2a0);
                fn_00144810(*unaff_r11);
                iVar5 = fn_006a89a8();
                if (iVar5 == 0) {
                  fn_00144810(*unaff_r11);
                  uVar4 = fn_006a8694();
                }
                else {
                  uVar4 = fn_006f6c60();
                }
                bVar10 = uVar4 != 5;
                if (bVar10) {
                  uVar4 = (uint)local_4e;
                }
                if ((bVar10 && uVar4 != 2) || (iVar9 < 0)) goto LAB_0024a44c;
              }
              else {
                iVar5 = fn_0068c528(puVar3);
                if (iVar5 != 0) {
LAB_0024a44c:
                  *(undefined **)(iVar7 + iVar8 * 4) = puVar3;
                  iVar8 = iVar8 + 1;
                }
              }
            }
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar6);
        if (0 < iVar8) {
          puVar3 = &DAT_007c9e4c;
        }
        if (iVar8 == 0) goto LAB_0024a524;
        iVar9 = 0;
        iVar6 = iVar9;
        if (0 < iVar8) {
          do {
            iVar5 = iVar9 * 4;
            iVar9 = iVar9 + 1;
            iVar6 = iVar6 + *(int *)(puVar3 + (uint)*(byte *)(*(int *)(iVar7 + iVar5) + 0x53) * 4);
          } while (iVar9 < iVar8);
        }
        iVar9 = 0;
        iVar6 = fn_00163868(iVar6);
        if (0 < iVar8) {
          unaff_r11 = (undefined4 *)&DAT_007c9e4c;
        }
        iVar5 = 0;
        if (0 < iVar8) {
          do {
            iVar1 = iVar5 * 4;
            if (iVar6 < (int)unaff_r11[*(byte *)(*(int *)(iVar7 + iVar1) + 0x53)]) break;
            iVar5 = iVar5 + 1;
            iVar6 = iVar6 - unaff_r11[*(byte *)(*(int *)(iVar7 + iVar1) + 0x53)];
            iVar9 = iVar9 + 1;
          } while (iVar5 < iVar8);
        }
        local_34 = *(undefined4 *)(iVar7 + iVar9 * 4);
        fn_00249188(&local_34,1,auStack_40,0);
        fn_0030233c(iVar7);
        iVar2 = iVar2 + 1;
      } while (iVar2 < local_38);
    }
  }
  return auStack_40;
}



void fn_0024a1c4(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = fn_006b6740();
  if (0 < iVar1) {
    do {
      uVar2 = fn_006b7068(param_1,iVar3);
      fn_002625d0(param_1,uVar2);
      iVar3 = iVar3 + 1;
      iVar1 = fn_006b6740(param_1);
    } while (iVar3 < iVar1);
  }
  return;
}



void fn_0024a1b0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  
  uVar2 = DAT_00896f44;
  uVar1 = DAT_00896f3c;
  if (*(char *)(param_1 + 0x8d) == '\0') {
    if (*(int *)(param_1 + 0x90) != -1) {
      piVar3 = (int *)fn_0068c7e8(DAT_008977e8);
      (**(code **)(*piVar3 + 0xc))(piVar3,*(undefined4 *)(param_1 + 0x90));
      *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
    }
    uVar4 = fn_0017fde4(*(undefined4 *)(param_1 + 4));
    iVar5 = fn_0068c694(DAT_008977e8);
    fn_00162d54(*(undefined4 *)(iVar5 + 0x24),uVar4);
    iVar5 = fn_0068c694(DAT_008977e8);
    fn_00162d44(*(undefined4 *)(iVar5 + 0x24));
    *(undefined1 *)(param_1 + 0x9a) = 1;
    *(undefined4 *)(param_1 + 0xa8) = uVar2;
    *(undefined4 *)(param_1 + 0xa4) = uVar1;
    *(undefined1 *)(param_1 + 0x8d) = 1;
  }
  return;
}


