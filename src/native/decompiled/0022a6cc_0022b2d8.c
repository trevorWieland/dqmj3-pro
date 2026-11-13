#include "0022a6cc_0022b2d8.h"



void fn_0022ae30(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_1c;
  int local_18;
  
  fn_0022b170();
  if (*(int *)(*(int *)(param_1 + 100) + 0x34) == 0) {
    *(undefined1 *)(param_1 + 600) = 0;
    iVar2 = fn_006becc4(*(undefined4 *)(param_1 + 100));
    if (iVar2 != 0) {
      local_1c = *(undefined4 *)(*(int *)(param_1 + 100) + 0x14);
      (**(code **)(**(int **)(param_1 + 0x254) + 0x14))
                (*(int **)(param_1 + 0x254),&local_18,1,&local_1c,1);
      if ((local_18 == 0) && (iVar2 = fn_004c3b1c(local_1c), iVar2 < 6)) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
      *(undefined1 *)(param_1 + 600) = uVar1;
    }
    fn_0022b63c(param_1,(int)*(char *)(param_1 + 600));
    return;
  }
  *(undefined1 *)(param_1 + 0x259) = 1;
  *(undefined1 *)(param_1 + 600) = 0;
  iVar2 = fn_006becc4(*(undefined4 *)(param_1 + 100));
  if (iVar2 != 0) {
    local_1c = *(undefined4 *)(*(int *)(param_1 + 100) + 0x14);
    (**(code **)(**(int **)(param_1 + 0x254) + 0x14))
              (*(int **)(param_1 + 0x254),&local_18,1,&local_1c,1);
    if ((local_18 == 0) && (iVar2 = fn_004c3b1c(local_1c), iVar2 < 6)) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
    *(undefined1 *)(param_1 + 600) = uVar1;
  }
  puVar3 = (undefined4 *)fn_001f7510(param_1,0x48);
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar4 == &DAT_008942d0) goto LAB_0022af04;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_0022af04:
  fn_0036c658(puVar3,0);
  fn_0036c13c(puVar3,*(undefined4 *)(*(int *)(param_1 + 100) + 0x34));
  *(undefined1 *)(puVar3 + 0xc) = 0;
  *(undefined1 *)((int)puVar3 + 0x51) = 1;
  *(undefined1 *)((int)puVar3 + 0x5e) = 1;
  puVar3[0xe] = 0;
  fn_006897a8(param_1);
  *(undefined1 *)(param_1 + 0x25a) = 2;
  return;
}



/* WARNING: Removing unreachable block (ram,0x0022b1a0) */

void fn_0022b170(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *local_24;
  undefined2 local_20 [2];
  
  local_24 = &DAT_008f9cf4;
  local_20[0] = 0;
  fn_00177c88(&local_24,0,DAT_008f9cf0,local_20,0,0,0);
  iVar1 = *(int *)(param_1 + 0x84);
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      uVar6 = local_24[-1];
      uVar5 = *(undefined4 *)
               (*(int *)(param_1 + (*(int *)(param_1 + 0x9c) + iVar4) * 4 + 0xb8) + 0xa4);
      uVar2 = fn_00100b58(uVar5);
      fn_00177c88(&local_24,uVar6,0,uVar5,uVar2,0,uVar2);
      iVar1 = *(int *)(param_1 + 0x84);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  if ((iVar1 == *(int *)(param_1 + 0x98)) &&
     (iVar1 = *(int *)(param_1 + (iVar1 + *(int *)(param_1 + 0x9c)) * 4 + 0xb8),
     *(short *)(iVar1 + 0xce) != 0)) {
    uVar5 = *(undefined4 *)(iVar1 + 0xa4);
    uVar6 = local_24[-1];
    uVar2 = fn_00100b58(uVar5);
    fn_00177c88(&local_24,uVar6,0,uVar5,uVar2,0,uVar2);
  }
  fn_003212ac(*(undefined4 *)(param_1 + 100),local_24);
  if (local_24 != &DAT_008f9cf4) {
    piVar3 = local_24 + -3;
    iVar1 = *piVar3;
    if ((iVar1 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar1 + -1, iVar1 == 0)))) {
      fn_001008c4(local_24 + -3,local_24[-2] + 8,0);
    }
  }
  return;
}



undefined4 fn_0022a6cc(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  
  puVar11 = (undefined4 *)0x0;
  puVar9 = *(undefined4 **)(param_1 + 0x18);
  if (puVar9 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar9)(puVar9);
    do {
      if (puVar2 == &DAT_008946d4) goto LAB_0022a714;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar9 = (undefined4 *)0x0;
LAB_0022a714:
  *(undefined4 **)(param_1 + 100) = puVar9;
  *(undefined1 *)(puVar9 + 7) = 0;
  uVar3 = fn_001481c8(*(undefined4 *)(param_1 + 0x68),L"rom:/data/Layout/menu/name.arc",
                       &DAT_0022aab0,1,1);
  *(undefined4 *)(param_1 + 0x6c) = uVar3;
  uVar3 = fn_001480d0(*(undefined4 *)(param_1 + 0x68),uVar3,(char *)&DAT_0022aaf4,L"",1,1,0);
  *(undefined4 *)(param_1 + 0x70) = uVar3;
  uVar3 = fn_001853ec(*(undefined4 *)(param_1 + 0x68),(char *)&DAT_0022ab00,uVar3);
  *(undefined4 *)(param_1 + 0x74) = uVar3;
  iVar4 = fn_00178f9c(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70));
  *(byte *)(*(int *)(iVar4 + 0x10) + 0x44) = *(byte *)(*(int *)(iVar4 + 0x10) + 0x44) & 0xfe | 1;
  iVar4 = fn_00178f9c(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70));
  uVar7 = *(undefined4 *)(*(int *)(param_1 + 100) + 0xc);
  uVar3 = fn_001827b0(iVar4,(char *)&DAT_0022ab0c);
  fn_00190d50(uVar3,uVar7);
  switch(*(undefined1 *)(*(int *)(param_1 + 100) + 8)) {
  case 0:
  case 1:
  case 2:
  case 3:
    *(undefined4 *)(param_1 + 0x94) = 8;
    goto switchD_0022a7d8_default;
  case 4:
    uVar3 = 8;
    break;
  case 5:
  case 7:
  case 8:
    uVar3 = 0x10;
    break;
  case 6:
    uVar3 = 0x14;
    break;
  case 9:
    uVar3 = 6;
    break;
  default:
    goto switchD_0022a7d8_default;
  }
  *(undefined4 *)(param_1 + 0x94) = uVar3;
switchD_0022a7d8_default:
  iVar8 = 0;
  *(int *)(param_1 + 0x9c) = (0x14 - *(int *)(param_1 + 0x94)) / 2;
  *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x94) + -1;
  do {
    uVar3 = fn_001828f0(iVar4,(&DAT_0089473c)[iVar8]);
    iVar10 = param_1 + iVar8 * 4;
    *(undefined4 *)(iVar10 + 0x108) = uVar3;
    uVar3 = fn_001827b0(iVar4,(&PTR_s_tb_name_00_008946ec)[iVar8]);
    *(undefined4 *)(iVar10 + 0xb8) = uVar3;
    if ((iVar8 < *(int *)(param_1 + 0x9c)) ||
       (*(int *)(param_1 + 0x9c) + *(int *)(param_1 + 0x98) < iVar8)) {
      *(byte *)(*(int *)(iVar10 + 0x108) + 0x44) = *(byte *)(*(int *)(iVar10 + 0x108) + 0x44) & 0xfe
      ;
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0x14);
  iVar8 = 0;
  do {
    iVar10 = 0;
    do {
      uVar3 = fn_001827b0(iVar4,(&DAT_008947c4)[iVar8 * 10 + iVar10]);
      iVar1 = iVar10 * 4;
      iVar10 = iVar10 + 1;
      *(undefined4 *)(param_1 + iVar8 * 0x28 + iVar1 + 0x158) = uVar3;
    } while (iVar10 < 10);
    iVar8 = iVar8 + 1;
  } while (iVar8 < 5);
  iVar8 = 0;
  do {
    uVar3 = fn_001827b0(iVar4,(&DAT_0089478c)[iVar8]);
    iVar10 = param_1 + iVar8 * 4;
    *(undefined4 *)(iVar10 + 0x220) = uVar3;
    uVar3 = fn_00230acc((&PTR_s_keyboard_up_tab_00_008947a8)[iVar8]);
    fn_00190d50(*(undefined4 *)(iVar10 + 0x220),uVar3);
    iVar8 = iVar8 + 1;
  } while (iVar8 < 7);
  iVar8 = 0;
  do {
    uVar3 = fn_001827b0(iVar4,(&DAT_0089488c)[iVar8]);
    iVar10 = iVar8 * 4;
    iVar8 = iVar8 + 1;
    *(undefined4 *)(param_1 + iVar10 + 0x23c) = uVar3;
  } while (iVar8 < 4);
  uVar3 = fn_00230acc((char *)&DAT_0022ab28);
  fn_00190d50(*(undefined4 *)(param_1 + 0x244),uVar3);
  uVar3 = fn_001828f0(iVar4,(char *)&DAT_0022ab30);
  *(undefined4 *)(param_1 + 0xa8) = uVar3;
  uVar3 = fn_001828f0(iVar4,(char *)&DAT_0022ab40);
  *(undefined4 *)(param_1 + 0xac) = uVar3;
  uVar3 = fn_001828f0(iVar4,(char *)&DAT_0022ab48);
  *(undefined4 *)(param_1 + 0xb0) = uVar3;
  uVar3 = fn_001828f0(iVar4,(char *)&DAT_0022ab54);
  *(undefined4 *)(param_1 + 0xb4) = uVar3;
  fn_0022b7e8(param_1,*(undefined4 *)(param_1 + 0x84));
  iVar8 = *(int *)(param_1 + (*(int *)(param_1 + 0x84) + *(int *)(param_1 + 0x9c)) * 4 + 0x108);
  *(byte *)(iVar8 + 0x44) = *(byte *)(iVar8 + 0x44) & 0xfe;
  piVar5 = (int *)fn_001854ac(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x74));
  (**(code **)(*piVar5 + 0x50))(piVar5,1);
  iVar8 = fn_00145b00(0x5c,&DAT_00812c8c);
  if (iVar8 == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)fn_0025e920(iVar8,*(undefined4 *)(param_1 + 4),*(undefined4 *)(iVar4 + 0x10));
  }
  piVar6 = *(int **)(param_1 + 0x78);
  if (piVar6 != piVar5) {
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 4))();
    }
    *(int **)(param_1 + 0x78) = piVar5;
  }
  (**(code **)(**(int **)(param_1 + 0x78) + 0x10))
            (*(int **)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x48));
  iVar8 = fn_00145b00(0x5c,&DAT_00812c8c);
  piVar5 = (int *)0x0;
  if (iVar8 != 0) {
    piVar5 = (int *)fn_0025e920(iVar8,*(undefined4 *)(param_1 + 4),*(undefined4 *)(iVar4 + 0x10));
  }
  piVar6 = *(int **)(param_1 + 0x7c);
  if (piVar6 != piVar5) {
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 4))(piVar6);
    }
    *(int **)(param_1 + 0x7c) = piVar5;
  }
  (**(code **)(**(int **)(param_1 + 0x7c) + 0x10))
            (*(int **)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x48));
  fn_0025e4dc(*(undefined4 *)(param_1 + 0x7c),1);
  fn_0025e378(*(undefined4 *)(param_1 + 0x7c),*(int *)(param_1 + 0x220) + 0x3c);
  fn_0025e31c(*(undefined4 *)(param_1 + 0x7c),0);
  uVar3 = fn_00172c98(iVar4,(char *)&DAT_0022ae1c);
  iVar4 = fn_00145b00(0x88,&DAT_00812c8c);
  if (iVar4 == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)fn_0031fee0(iVar4,*(undefined4 *)(param_1 + 4),uVar3,1,
                                 *(undefined4 *)(param_1 + 0x48));
  }
  piVar6 = *(int **)(param_1 + 0x80);
  if (piVar6 != piVar5) {
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 4))();
    }
    *(int **)(param_1 + 0x80) = piVar5;
  }
  (**(code **)(**(int **)(param_1 + 0x80) + 0x10))();
  fn_0031fe38(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(*(int *)(param_1 + 100) + 0xc));
  fn_0031f8fc(*(undefined4 *)(param_1 + 0x80),2,0,0,0xffffffff);
  iVar4 = *(int *)(param_1 + 0x80);
  *(undefined1 *)(iVar4 + 0x81) = 4;
  fn_0031f3f4(iVar4,0);
  iVar4 = *(int *)(param_1 + 0x80);
  *(undefined1 *)(iVar4 + 0x7f) = 7;
  fn_0031ef00(iVar4,0,0);
  iVar4 = *(int *)(param_1 + 0x80);
  *(undefined1 *)(iVar4 + 0x83) = 3;
  fn_0031f954(iVar4,0);
  fn_0022afdc(param_1,0);
  if (*(char *)(*(int *)(param_1 + 100) + 8) == '\x03') {
    fn_0022b2d8(param_1,2,0);
  }
  else {
    fn_0022b2d8(param_1,0,0);
  }
  fn_0022b430(param_1);
  iVar4 = fn_006becc4(*(undefined4 *)(param_1 + 100));
  if (iVar4 != 0) {
    iVar4 = fn_00145b00(0x34,&DAT_00812c8c);
    piVar5 = (int *)0x0;
    if (iVar4 != 0) {
      piVar5 = (int *)fn_004c4358();
    }
    piVar6 = *(int **)(param_1 + 0x254);
    if (piVar6 != piVar5) {
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 4))(piVar6);
      }
      *(int **)(param_1 + 0x254) = piVar5;
    }
    fn_004c3e08(*(undefined4 *)(param_1 + 0x254));
  }
  iVar4 = fn_006becc4(*(undefined4 *)(param_1 + 100));
  if (iVar4 != 0) {
    puVar9 = (undefined4 *)fn_001f7510(param_1,0x48);
    if (puVar9 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)(**(code **)*puVar9)(puVar9);
      do {
        if (puVar2 == &DAT_008942d0) {
          puVar11 = puVar9;
          break;
        }
        puVar2 = (undefined4 *)*puVar2;
      } while (puVar2 != (undefined4 *)0x0);
    }
    fn_0036c658(puVar11,0);
    fn_0036c648(puVar11,8);
    fn_0036c140(puVar11,*(undefined4 *)(*(int *)(param_1 + 100) + 0x28));
    fn_006897a8(param_1);
    *(undefined1 *)(param_1 + 0x25a) = 1;
  }
  fn_001f7768(param_1,0,1);
  return 1;
}



void fn_0022b2d8(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    param_2 = *(int *)(*(int *)(*(int *)(param_1 + 100) + 0x10) + -4);
  }
  if (*(int *)(param_1 + 0x94) < param_2) {
    param_2 = *(int *)(param_1 + 0x94);
  }
  if (param_3 != 0) {
    if (param_2 < 1) {
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  iVar3 = 0;
  if (0 < param_2) {
    do {
      fn_00190d50(*(undefined4 *)
                    (param_1 + (*(int *)(param_1 + 0x84) + *(int *)(param_1 + 0x9c)) * 4 + 0xb8),
                   &DAT_0022b42c);
      uVar1 = fn_003212ec(*(undefined4 *)(param_1 + 100),iVar3);
      iVar2 = *(int *)(param_1 + 0x84);
      if ((iVar2 != *(int *)(param_1 + 0x98)) ||
         (*(short *)(*(int *)(param_1 + (iVar2 + *(int *)(param_1 + 0x9c)) * 4 + 0xb8) + 0xce) == 0)
         ) {
        fn_00190d50(*(undefined4 *)(param_1 + (*(int *)(param_1 + 0x9c) + iVar2) * 4 + 0xb8),uVar1)
        ;
      }
      if (*(int *)(param_1 + 0x84) < *(int *)(param_1 + 0x98)) {
        fn_0022b7e8(param_1,*(int *)(param_1 + 0x84) + 1);
      }
      else {
        *(byte *)(*(int *)(param_1 + 0xa8) + 0x44) =
             *(byte *)(*(int *)(param_1 + 0xa8) + 0x44) & 0xfe;
      }
      if ((*(byte *)(*(int *)(param_1 + 0xa8) + 0x44) & 1) == 0) {
        *(undefined4 *)(param_1 + 0x88) = 3;
        *(undefined4 *)(param_1 + 0x8c) = 6;
        fn_0022b430(param_1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_2);
  }
  return;
}


