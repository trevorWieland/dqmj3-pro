#include "002494e0_00249fa4.h"



void fn_00249fa4(undefined4 param_1)

{
  DAT_00896f3c = fn_0026455c(param_1,0x297,0);
  DAT_00896f44 = fn_002650cc(param_1,0x147);
  if (DAT_00896f44 == -1) {
    DAT_00896f44 = fn_00264d74(param_1,0x147,0);
  }
  return;
}



void fn_00249d6c(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *param_1;
  fn_0026239c(*(undefined4 *)(iVar2 + 0x2c));
  uVar1 = *(undefined4 *)(iVar2 + 0x28);
  if (DAT_00896f34 != -1) {
    fn_00265538(uVar1);
    DAT_00896f34 = -1;
  }
  if (DAT_00896f38 != -1) {
    fn_00265538(uVar1);
    DAT_00896f38 = -1;
  }
  return;
}



void fn_00249c94(undefined4 param_1,int param_2)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(short *)(param_2 + 0x54) == 4) {
    return;
  }
  psVar1 = (short *)fn_003711a8(2);
  iVar4 = (int)*psVar1;
  iVar2 = fn_00265094(param_1,iVar4);
  if (iVar2 == -1) {
    iVar2 = fn_00264c80(param_1,iVar4);
  }
  iVar3 = fn_00265328(param_1,iVar4);
  if (iVar3 == -1) {
    iVar3 = fn_00265110(param_1,iVar4);
  }
  *(undefined1 *)(param_2 + 0x56) = *(undefined1 *)((int)psVar1 + 3);
  *(char *)(param_2 + 0x57) = (char)psVar1[1];
  *(char *)(param_2 + 0x58) = (char)psVar1[2];
  *(char *)(param_2 + 0x59) = (char)psVar1[3];
  *(undefined4 *)(param_2 + 0x5c) = *(undefined4 *)(psVar1 + 4);
  *(undefined2 *)(param_2 + 0x62) = 2;
  fn_002d0cf0(param_2,iVar2,iVar3,iVar4);
  return;
}



void fn_00249c40(undefined4 param_1)

{
  DAT_00896f34 = fn_0026455c(param_1,0x170,1);
  DAT_00896f38 = fn_0026536c(param_1,0x170);
  if (DAT_00896f38 == -1) {
    DAT_00896f38 = fn_0026520c(param_1,0x170,1);
  }
  return;
}



int * fn_00249adc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,uint param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9,int param_10,undefined4 param_11)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar8 = CONCAT44(param_11,param_8);
  uVar7 = CONCAT44(param_9,param_7);
  if (param_10 == 0) {
    uVar1 = fn_00264324(param_1,param_6);
  }
  else {
    uVar1 = fn_002644ec(param_1);
  }
  uVar2 = fn_00264b5c(param_1,param_5,param_6);
  iVar3 = fn_002650cc(param_1,param_5);
  if (iVar3 == -1) {
    iVar3 = fn_00264d74(param_1,param_5,0);
  }
  uVar4 = fn_00264fd4(param_1,param_6);
  uVar5 = fn_00264e94(param_1,param_5,param_6);
  piVar6 = (int *)fn_00263678(param_2,uVar1,uVar4,param_5,uVar2,uVar5,iVar3,param_6 & 0xff,
                               (int)uVar7,(int)uVar8,(int)((ulonglong)uVar7 >> 0x20),param_10,
                               (int)((ulonglong)uVar8 >> 0x20));
  (**(code **)(*piVar6 + 0x1c))(piVar6,param_3);
  (**(code **)(*piVar6 + 0x24))(piVar6,param_4);
  fn_006a06a0(piVar6,param_5);
  fn_00265538(param_1,uVar4);
  fn_00265538(param_1,uVar5);
  return piVar6;
}



void fn_00249a90(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = fn_006b6c88();
  if (0 < iVar1) {
    do {
      uVar2 = fn_006b6b3c(param_1,iVar3);
      fn_002625d0(param_1,uVar2);
      iVar3 = iVar3 + 1;
      iVar1 = fn_006b6c88(param_1);
    } while (iVar3 < iVar1);
  }
  return;
}



void fn_002494e0(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  undefined1 *puVar13;
  bool bVar14;
  undefined1 *local_298;
  undefined1 *local_294;
  undefined1 *local_290;
  undefined1 *local_28c;
  undefined1 *local_288;
  undefined1 *local_284;
  undefined1 *local_280;
  uint local_27c;
  undefined4 uStack_278;
  undefined4 local_274;
  undefined4 uStack_270;
  undefined4 local_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  uint local_260;
  undefined4 uStack_25c;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 local_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 local_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined1 auStack_218 [72];
  undefined1 auStack_1d0 [8];
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  byte local_46;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  uVar11 = 0;
  uStack_2c = param_1;
  local_28 = param_2;
  fn_00144810(DAT_008977e8);
  iVar6 = fn_006a86b8();
  fn_0068c2e4(&local_298);
  fn_0068c6c4(DAT_008977e8,&local_298);
  fn_00144810(DAT_008977e8);
  iVar7 = fn_006a89a8();
  if (iVar7 == 0) {
    fn_00144810(DAT_008977e8);
    uVar8 = fn_006a8694();
  }
  else {
    uVar8 = fn_006f6c60();
  }
  bVar14 = uVar8 == 5;
  if (!bVar14) {
    uVar8 = (uint)local_46;
  }
  bVar1 = true;
  if (bVar14 || uVar8 == 2) {
    if ((iVar6 != 300) && (uVar11 = (uint)(iVar6 == 0), iVar6 != 0)) {
      fn_00144810(DAT_008977e8);
      uVar8 = fn_006a8708();
      iVar6 = (int)((longlong)(int)uVar8 * -0x77777777 + ((ulonglong)uVar8 << 0x20) >> 0x20);
      if (((iVar6 >> 4) - (iVar6 >> 0x1f)) % 5 == 0) {
LAB_002496f4:
        uVar11 = 2;
      }
    }
  }
  else {
    bVar1 = false;
    fn_0068c2e4(&local_298);
    fn_0068c6c4(DAT_008977e8,&local_298);
    if (local_46 != 0) {
      fn_00144810(DAT_008977e8);
      iVar6 = fn_006b551c();
      if (iVar6 != 1) {
        fn_00144810(DAT_008977e8);
        iVar6 = fn_006b551c();
        if (iVar6 == 2) goto LAB_002496f4;
        fn_00144810(DAT_008977e8);
        fn_006a86a0();
        uVar11 = 1;
      }
    }
  }
  iVar6 = 0;
  for (piVar12 = DAT_008cd564; DAT_008cd568 != piVar12; piVar12 = piVar12 + 2) {
    iVar6 = iVar6 + *piVar12;
  }
  iVar7 = fn_006b6dc4(param_1);
  puVar13 = (undefined1 *)((uVar11 - iVar7) - iVar6);
  if (0 < (int)puVar13) {
    iVar7 = 0;
    iVar6 = fn_006b6c88(param_1);
    if (0 < iVar6) {
      do {
        iVar6 = fn_006b6b3c(param_1,iVar7);
        iVar9 = fn_006b2d8c();
        if (iVar9 != 0) {
          fn_002625d0(param_1,iVar6);
          fn_0024bdc8((int)*(char *)(iVar6 + 0x7c),0);
        }
        iVar7 = iVar7 + 1;
        iVar6 = fn_006b6c88(param_1);
      } while (iVar7 < iVar6);
    }
    if (!bVar1) {
      fn_00144810(DAT_008977e8);
      iVar6 = fn_006b551c();
      if (iVar6 != 2) {
        iVar6 = fn_00163868(5);
        local_284 = (undefined1 *)((iVar6 + 0xf) * 0x1e);
        local_288 = puVar13;
        fn_0078b958(&DAT_008cd564,&local_288);
        goto LAB_0024976c;
      }
    }
    local_294 = (undefined1 *)0x0;
    local_298 = puVar13;
    fn_0078b958(&DAT_008cd564,&local_298);
  }
LAB_0024976c:
  piVar12 = DAT_008cd564;
  if (DAT_008cd568 != DAT_008cd564) {
    do {
      if (piVar12[1] < 1) {
        fn_00692e98(auStack_1d0,local_28);
        fn_00183718(&local_260,auStack_1d0,(char *)&DAT_00249a7c);
        uVar11 = local_260;
        local_274 = local_258;
        uStack_270 = uStack_254;
        local_27c = local_260;
        uStack_278 = uStack_25c;
        local_294 = (undefined1 *)0x0;
        local_290 = (undefined1 *)0x0;
        local_28c = (undefined1 *)0x0;
        local_26c = local_250;
        uStack_268 = uStack_24c;
        uStack_264 = uStack_248;
        uVar8 = 0x20;
        if (0x1f < local_260) {
          uVar8 = local_260;
        }
        local_294 = (undefined1 *)fn_00100fc6(uVar8,0);
        uVar5 = local_27c;
        puVar13 = local_294;
        for (uVar10 = uVar11; uVar10 != 0; uVar10 = uVar10 - 1) {
          if (puVar13 != (undefined1 *)0x0) {
            *puVar13 = 0;
          }
          puVar13 = puVar13 + 1;
        }
        local_288 = (undefined1 *)0x0;
        local_290 = local_294 + uVar11;
        local_28c = local_294 + uVar8;
        uVar11 = 0x20;
        if (0x1f < local_27c) {
          uVar11 = local_27c;
        }
        local_284 = (undefined1 *)0x0;
        local_280 = (undefined1 *)0x0;
        local_288 = (undefined1 *)fn_00100fc6(uVar11,0);
        puVar13 = local_288;
        for (uVar8 = uVar5; uVar8 != 0; uVar8 = uVar8 - 1) {
          if (puVar13 != (undefined1 *)0x0) {
            *puVar13 = 0;
          }
          puVar13 = puVar13 + 1;
        }
        local_284 = local_288 + uVar5;
        local_280 = local_288 + uVar11;
        local_298 = (undefined1 *)*piVar12;
        fn_00248f44(&local_294,&local_27c,&DAT_008cd570,&local_288);
        bVar14 = false;
        puVar13 = (undefined1 *)0x0;
        if (local_290 == local_294) {
LAB_002499d8:
          piVar12 = piVar12 + 2;
          puVar13 = local_288;
        }
        else {
          do {
            if (local_290 + -(int)local_294 <= puVar13) {
              local_298 = local_290 + -(int)local_294;
              fn_002ff628(9,&DAT_008c766f,&DAT_008c766f,puVar13);
            }
            if (local_294[(int)puVar13] == '\x01') {
              fn_00176ec8(auStack_218,&uStack_278,puVar13);
              fn_0017821c(&local_260,auStack_218,0x44);
              local_1c8 = local_240;
              uStack_1c4 = uStack_23c;
              uStack_1c0 = uStack_238;
              iVar6 = fn_00261d04(param_1,DAT_00896f40);
              fn_00232f80(iVar6,&local_1c8);
              *(char *)(iVar6 + 0x7c) = (char)puVar13;
              fn_0024bdc8(puVar13,1);
              bVar14 = true;
            }
            piVar4 = DAT_008cd568;
            puVar13 = puVar13 + 1;
          } while (puVar13 < local_290 + -(int)local_294);
          if (!bVar14) goto LAB_002499d8;
          puVar13 = local_288;
          piVar2 = piVar12;
          piVar3 = piVar12;
          if (DAT_008cd564 != DAT_008cd568) {
            while (piVar3 = piVar3 + 2, piVar3 != piVar4) {
              iVar6 = piVar3[1];
              *piVar2 = *piVar3;
              piVar2[1] = iVar6;
              piVar2 = piVar2 + 2;
            }
            DAT_008cd568 = DAT_008cd568 + -2;
          }
        }
        for (; puVar13 != local_284; puVar13 = puVar13 + 1) {
        }
        fn_001008c4(local_288,(int)local_280 - (int)local_288,0);
        for (puVar13 = local_294; puVar13 != local_290; puVar13 = puVar13 + 1) {
        }
        fn_001008c4(local_294,(int)local_28c - (int)local_294,0);
      }
      else {
        piVar12[1] = piVar12[1] + -1;
        piVar12 = piVar12 + 2;
      }
    } while (DAT_008cd568 != piVar12);
  }
  return;
}


