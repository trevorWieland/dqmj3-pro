#include "00341c04_0034d4a8.h"



void fn_0034d4a8(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_00231cb8((&DAT_007c73f0)[*(int *)(param_1 + 0xd0)]);
  fn_00243550(*(undefined4 *)(param_1 + 0xa4),uVar1);
  return;
}



void fn_0034cf48(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_0022f750((char *)&DAT_0034cf70);
  fn_0059e074(param_1 + 0xcc,1,0,uVar1);
  return;
}



void fn_0034c864(undefined4 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_2c [12];
  undefined1 auStack_20 [4];
  undefined1 local_1c;
  undefined1 local_1b;
  
  fn_002c330c(&local_48);
  uVar2 = 0;
  local_48 = DAT_00896b84;
  uStack_44 = DAT_00896b88;
  uStack_40 = 3;
  uStack_3c = 0;
  uVar1 = fn_0022f750((char *)&DAT_0034ca40);
  fn_00147974(auStack_2c,uVar1);
  local_1c = 0;
  local_1b = 1;
  uVar1 = fn_0022f750(&DAT_0034ca50);
  fn_00147974(auStack_20,uVar1);
  fn_002c29a0(param_1,&local_48);
  do {
    uVar1 = fn_0022f750((&DAT_007c9100)[uVar2]);
    fn_0031b78c(param_1,uVar2,0,uVar1);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 3);
                    /* WARNING: Subroutine does not return */
  fn_0011dda8();
}



void fn_0034c5c4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_0022cdf0();
  if (iVar1 == 0) {
    return;
  }
  fn_0022cf0c(param_1);
  fn_0034c618(param_1);
  uVar2 = fn_00230c10((int)*(short *)(*(int *)(param_1 + 0x98) + 0x558));
  fn_00190d50(*(undefined4 *)(param_1 + 0x9c),uVar2);
  fn_0034c48c(param_1);
  return;
}



int fn_0034bec4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = fn_0039b700();
  if (iVar1 != 0) {
    uVar3 = 0;
    do {
      fn_0030690c(*(undefined4 *)(*(int *)(param_1 + 0xa8) + (uVar3 & 0xff) * 4),1);
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < 4);
    uVar2 = fn_0022f750((char *)&DAT_0034bf28);
    fn_0031c154(*(undefined4 *)(param_1 + 0x94),uVar2);
    fn_0031c6f8(*(undefined4 *)(param_1 + 0x94),0);
  }
  return iVar1;
}



undefined1 * fn_0034ba38(int *param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  int *piVar12;
  int *piVar13;
  bool bVar14;
  bool bVar15;
  undefined4 local_238;
  int *piStack_234;
  undefined4 local_230;
  undefined1 auStack_228 [28];
  short local_20c;
  undefined1 auStack_148 [24];
  undefined1 *local_130;
  undefined1 auStack_120 [4];
  undefined1 auStack_11c [196];
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [4];
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [40];
  
  bVar1 = false;
  uVar11 = 0;
  do {
    iVar3 = (**(code **)(*param_1 + 0x130))(param_1,uVar11);
    uVar4 = uVar11 * 0xf;
    piVar13 = param_1 + uVar11 * 0x3c;
    bVar14 = piVar13 + 0x2e != (int *)0x0;
    if (bVar14) {
      uVar4 = (uint)*(ushort *)(piVar13 + 0x35);
    }
    bVar15 = uVar4 != 0;
    if (iVar3 != 0) {
      uVar4 = (uint)*(ushort *)(iVar3 + 0x1c);
    }
    bVar2 = iVar3 == 0;
    puVar7 = (undefined1 *)(uint)(bVar2 || uVar4 == 0);
    if (bVar14 && bVar15 || !bVar2 && uVar4 != 0) {
      if (puVar7 == (undefined1 *)0x0 && (bVar14 && bVar15)) {
        fn_0017821c(&local_238,piVar13 + 0x2e,0xf0);
        fn_0017821c(auStack_148,iVar3,0xf0);
        fn_0020bbc4(auStack_58,&local_238);
        fn_0020bbc4(auStack_50,auStack_148);
        iVar5 = fn_006bfda8(auStack_54);
        iVar6 = fn_006bfda8(auStack_4c);
        if (iVar5 == iVar6) {
          iVar5 = fn_006bfe90(auStack_54);
          iVar6 = fn_006bfe90(auStack_4c);
          if ((iVar5 == iVar6) && (iVar5 = fn_00101d80(piVar13 + 0x2f,iVar3 + 4), iVar5 == 0)) {
            iVar5 = fn_006bf0f0(auStack_54);
            iVar6 = fn_006bf0f0(auStack_4c);
            if (iVar5 == iVar6) {
              iVar5 = fn_006c0108(auStack_54);
              iVar6 = fn_006c0108(auStack_4c);
              if (iVar5 == iVar6) {
                iVar5 = fn_006bfdec(auStack_54);
                iVar6 = fn_006bfdec(auStack_4c);
                if (iVar5 == iVar6) {
                  puVar7 = auStack_58;
                  goto LAB_0034bc04;
                }
              }
            }
          }
        }
      }
      if (iVar3 == 0) {
        puVar7 = (undefined1 *)fn_00301f50(piVar13 + 0x2e,0xf0);
      }
      else {
        puVar7 = (undefined1 *)fn_0017821c(piVar13 + 0x2e,iVar3,0xf0);
      }
      bVar1 = true;
    }
LAB_0034bc04:
    uVar11 = uVar11 + 1;
    if (3 < uVar11) {
      if (bVar1) {
        uVar11 = 0;
        do {
          *(undefined1 *)(*(int *)(param_1[0x27] + (uVar11 & 0xff) * 4) + 0x27) = 0;
          fn_002b3d78(*(undefined4 *)(param_1[0x27] + (uVar11 & 0xff) * 4),0);
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < 4);
        uVar8 = (**(code **)(*param_1 + 0x128))(param_1);
        uVar8 = fn_00246ec4(param_1 + 0x2e,uVar8);
        fn_0036e8fc(*(undefined4 *)(param_1[0x1d] + 0x10),uVar8);
        iVar3 = (**(code **)(*param_1 + 0x134))(param_1);
        iVar5 = (**(code **)(*param_1 + 0x138))(param_1);
        local_130 = (undefined1 *)(**(code **)(*param_1 + 0x128))(param_1);
        uVar11 = 0;
        iVar6 = 0;
        if (0 < (int)local_130) {
          do {
            uVar8 = (**(code **)(*param_1 + 0x130))(param_1,iVar6);
            fn_0017821c(auStack_228,uVar8,0xf0);
            piVar12 = (int *)(uint)(iVar6 == iVar3);
            if (iVar6 == iVar5) {
              piVar12 = (int *)&DAT_00000001;
              piVar13 = piVar12;
            }
            if (iVar6 != iVar5) {
              piVar13 = (int *)0x0;
            }
            iVar9 = fn_001a46f4((int)local_20c);
            if ((iVar9 == 0) || ((uint)(param_1[0x28] - param_1[0x27] >> 2) <= uVar11)) {
              iVar9 = 1;
            }
            else {
              local_230 = 0;
              local_238 = 1;
              piStack_234 = piVar13;
              fn_002b415c(*(undefined4 *)(param_1[0x27] + uVar11 * 4),auStack_228,piVar12,0);
              local_238 = 0;
              fn_0036e68c(*(undefined4 *)(param_1[0x2a] + uVar11 * 4),auStack_228,1,0);
              iVar9 = fn_0020bbc4(&local_238,auStack_228);
              if (iVar9 != 0) {
                iVar9 = iVar9 + 4;
              }
              uVar8 = fn_006bfe90(iVar9);
              iVar9 = fn_001cab7c(uVar8);
            }
            piVar13 = (int *)(uVar11 + iVar9);
            uVar4 = uVar11;
            while (uVar4 = uVar4 + 1, (int)uVar4 < (int)piVar13) {
              piVar12 = *(int **)(param_1[0x27] + (uVar4 & 0xff) * 4);
              (**(code **)(*piVar12 + 0x20))(piVar12,0);
              piVar12 = *(int **)(param_1[0x2a] + (uVar4 & 0xff) * 4);
              (**(code **)(*piVar12 + 0x20))(piVar12,0);
            }
            puVar7 = (undefined1 *)0x0;
            if (local_20c != 0) {
              uVar10 = *(undefined4 *)(param_1[0x2a] + uVar11 * 4);
              fn_0020bbc4(auStack_120,auStack_228);
              uVar8 = fn_006bf0f0(auStack_11c);
              fn_003066c4(uVar10,uVar8);
              puVar7 = auStack_120;
            }
            uVar11 = (uint)piVar13 & 0xff;
          } while ((uVar11 < 4) && (iVar6 = iVar6 + 1, puVar7 = local_130, iVar6 < (int)local_130));
          if (3 < uVar11) {
            return puVar7;
          }
        }
        do {
          piVar13 = *(int **)(param_1[0x27] + (uVar11 & 0xff) * 4);
          (**(code **)(*piVar13 + 0x20))(piVar13,0);
          piVar13 = *(int **)(param_1[0x2a] + (uVar11 & 0xff) * 4);
          puVar7 = (undefined1 *)(**(code **)(*piVar13 + 0x20))(piVar13,0);
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < 4);
      }
      return puVar7;
    }
  } while( true );
}



void fn_00345ccc(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002e42dc();
  *puVar1 = &PTR_FUN_008251f8;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  *(undefined1 *)(puVar1 + 0xc) = 0xff;
  return;
}



void fn_00345208(undefined4 param_1,int param_2,undefined1 param_3)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined2 *puVar5;
  int iVar6;
  int iVar7;
  undefined2 *local_28;
  undefined2 *local_24;
  undefined2 *local_20;
  
  fn_005daed8();
  local_28 = (undefined2 *)0x0;
  local_24 = (undefined2 *)0x0;
  local_20 = (undefined2 *)0x0;
  local_28 = (undefined2 *)fn_00100fc6(0x1f0,0);
  iVar6 = 0xf8;
  puVar5 = local_28;
  do {
    if (puVar5 != (undefined2 *)0x0) {
      *puVar5 = 0;
    }
    iVar6 = iVar6 + -1;
    puVar5 = puVar5 + 1;
  } while (iVar6 != 0);
  local_24 = local_28 + 0xf8;
  local_20 = local_28 + 0xf8;
  uVar2 = 0;
  if ((int)local_24 - (int)local_28 >> 1 != 0) {
    do {
      local_28[uVar2] = (short)uVar2;
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)((int)local_24 - (int)local_28 >> 1));
  }
  fn_0022da58(&local_28,1);
  iVar7 = 0;
  iVar6 = (int)local_24 - (int)local_28 >> 1;
  if (0 < iVar6) {
    do {
      uVar1 = *(undefined1 *)(local_28 + iVar7);
      iVar3 = fn_006a7b08(uVar1);
      if ((iVar3 != 0) && (iVar3 = fn_00289500(uVar1), iVar3 != 0)) {
        if (param_2 == 0) {
          iVar3 = fn_006e9cc8(param_1,uVar1);
        }
        else {
          iVar3 = fn_006e9cf4(param_1,uVar1,param_3);
        }
        if (iVar3 == 0) {
          uVar4 = fn_001d50cc(uVar1);
          fn_005dae7c(param_1,uVar1,uVar4);
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar6);
  }
  puVar5 = local_28;
  if (local_24 < local_28) {
    do {
      puVar5 = puVar5 + 1;
    } while (puVar5 != local_24);
  }
  fn_001008c4(local_28,(int)local_20 - (int)local_28 >> 1,0);
  return;
}



void fn_00341c04(undefined4 *param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = fn_00178f9c(*(undefined4 *)*param_1,((undefined4 *)*param_1)[2]);
  *(byte *)(*(int *)(iVar1 + 0x10) + 0x44) =
       *(byte *)(*(int *)(iVar1 + 0x10) + 0x44) & 0xfe | param_2;
  return;
}


