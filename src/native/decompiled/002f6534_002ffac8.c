#include "002f6534_002ffac8.h"



void fn_002ffac8(uint *param_1,uint *param_2)

{
  if ((*param_1 & 0x40000000) == 0 && (*param_2 & 0x40000000) == 0) {
    fn_001848e4(*param_1,param_1[1],param_1[2]);
    fn_00184808();
  }
  return;
}



void fn_002ffa98(int *param_1,int *param_2)

{
  if ((param_1[1] & ~(*param_1 << 1)) < 0 && (param_2[1] & ~(*param_2 << 1)) < 0) {
    fn_00184464(*param_1,param_1[1],param_1[2]);
    fn_00184808();
  }
  return;
}



void fn_002fece8(undefined4 param_1)

{
  fn_001287dc(param_1,4);
  return;
}



void fn_002fecb6(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_40 [4];
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_2c = 0;
  local_34 = &LAB_002fecac_1;
  local_3c = param_4;
  local_38 = param_2;
  local_30 = param_1;
  fn_00301bd8(auStack_40,param_3);
  return;
}



void fn_002fec40(uint *param_1,uint *param_2)

{
  char cVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  char *pcVar5;
  uint *puVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar10;
  
  if ((((uint)param_1 | (uint)param_2) & 3) == 0) {
    do {
      uVar8 = *param_2;
      cVar1 = UnsignedSaturate('\x01' - (char)uVar8,0x10);
      sVar2 = UnsignedSaturate('\x01' - (char)(uVar8 >> 8),0x10);
      sVar3 = UnsignedSaturate('\x01' - (char)(uVar8 >> 0x10),0x10);
      uVar4 = UnsignedSaturate('\x01' - (char)(uVar8 >> 0x18),0x10);
      bVar10 = (uVar4 & 0xff) == 0;
      puVar6 = param_1;
      if (((bVar10 && sVar3 == 0) && sVar2 == 0) && cVar1 == '\0') {
        puVar6 = param_1 + 1;
        *param_1 = uVar8;
      }
      param_2 = param_2 + 1;
      param_1 = puVar6;
    } while (((bVar10 && sVar3 == 0) && sVar2 == 0) && cVar1 == '\0');
    do {
      bVar10 = (uVar8 & 0xff) != 0;
      uVar9 = uVar8;
      if (bVar10) {
        uVar9 = uVar8 >> 8;
      }
      *(char *)puVar6 = (char)uVar8;
      puVar6 = (uint *)((int)puVar6 + 1);
      uVar8 = uVar9;
    } while (bVar10);
    return;
  }
  do {
    pcVar5 = (char *)((int)param_2 + 1);
    uVar8 = *param_2;
    pcVar7 = (char *)((int)param_1 + 1);
    *(char *)param_1 = (char)uVar8;
    if ((char)uVar8 == '\0') {
      return;
    }
    param_2 = (uint *)((int)param_2 + 2);
    cVar1 = *pcVar5;
    param_1 = (uint *)((int)param_1 + 2);
    *pcVar7 = cVar1;
  } while (cVar1 != '\0');
                    /* WARNING: Could not recover jumptable at 0x002feca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void fn_002fec38(void)

{
  fn_002ff600();
  return;
}



void fn_002ff600(int param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  
  if (param_1 == 0) {
    param_1 = 1;
  }
  while (iVar3 = fn_002fecec(param_1), iVar3 == 0) {
    piVar1 = (int *)fn_00169f10();
    pcVar2 = (code *)*piVar1;
    if (pcVar2 == (code *)0x0) {
      pcVar2 = fn_00101674 + 1;
    }
    (*pcVar2)();
  }
  return;
}



void fn_002faa60(undefined4 *param_1,undefined4 param_2)

{
  param_1[1] = param_2;
  *param_1 = &DAT_00821624;
  return;
}



undefined4 fn_002f96c4(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  if (param_3 == 0) {
    return 0;
  }
  *(int *)(param_1 + 0xf4) = param_3;
  puVar1 = (undefined4 *)fn_001f74e4(param_3,0x2d);
  uVar4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008951dc) goto LAB_002f9730;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
    puVar1 = (undefined4 *)0x0;
LAB_002f9730:
    *(undefined4 **)(param_1 + 0xfc) = puVar1;
    piVar3 = (int *)fn_001f74f8(*(undefined4 *)(param_1 + 0xf4),0x58);
    uVar4 = 0;
    if (piVar3 != (int *)0x0) {
      puVar1 = (undefined4 *)(**(code **)*piVar3)(piVar3);
      do {
        if (puVar1 == &DAT_00894494) goto LAB_002f977c;
        puVar1 = (undefined4 *)*puVar1;
      } while (puVar1 != (undefined4 *)0x0);
      piVar3 = (int *)0x0;
LAB_002f977c:
      *(int **)(param_1 + 0x100) = piVar3;
      (**(code **)(*piVar3 + 0xc))(piVar3);
      puVar1 = (undefined4 *)fn_001f751c(*(undefined4 *)(param_1 + 0xf4),0x4c);
      uVar4 = 0;
      if (puVar1 != (undefined4 *)0x0) {
        puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
        do {
          if (puVar2 == &DAT_008946d4) goto LAB_002f97e0;
          puVar2 = (undefined4 *)*puVar2;
        } while (puVar2 != (undefined4 *)0x0);
        puVar1 = (undefined4 *)0x0;
LAB_002f97e0:
        *(undefined4 **)(param_1 + 0x104) = puVar1;
        *(undefined1 *)(puVar1 + 2) = 3;
        uVar4 = fn_0015b064((int)*(short *)(param_2 + 0x1c));
        fn_003212bc(*(undefined4 *)(param_1 + 0x104),uVar4);
        local_40 = 0;
        local_3c = 0;
        local_38 = 0;
        local_34 = 0;
        local_30 = 0;
        local_2c = 0;
        local_28 = 0;
        local_24 = 0;
        fn_00231700(&local_40,0x10,(int)*(short *)(param_2 + 0x1c),0);
        uVar4 = fn_0022f750((char *)&DAT_002f9954);
        local_5c = 0;
        local_48 = 0;
        local_68 = 0;
        local_64 = 0;
        local_60 = 0;
        local_58 = 0;
        local_54 = 0;
        local_50 = 0;
        local_4c = 0;
        local_44 = 0;
        fn_00101a50(&local_68,0x28,L"%ls%ls",&local_40,uVar4);
        fn_003212cc(*(undefined4 *)(param_1 + 0x104),&local_68);
        puVar1 = (undefined4 *)fn_001f751c(*(undefined4 *)(param_1 + 0xf4),0x48);
        uVar4 = 0;
        if (puVar1 != (undefined4 *)0x0) {
          puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
          do {
            if (puVar2 == &DAT_008942d0) goto LAB_002f98d8;
            puVar2 = (undefined4 *)*puVar2;
          } while (puVar2 != (undefined4 *)0x0);
          puVar1 = (undefined4 *)0x0;
LAB_002f98d8:
          *(undefined4 **)(param_1 + 0xf8) = puVar1;
          puVar1 = (undefined4 *)fn_001f74f8(*(undefined4 *)(param_1 + 0xf4),0x4d);
          uVar4 = 0;
          if (puVar1 != (undefined4 *)0x0) {
            puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
            do {
              if (puVar2 == &DAT_00894688) goto LAB_002f9924;
              puVar2 = (undefined4 *)*puVar2;
            } while (puVar2 != (undefined4 *)0x0);
            puVar1 = (undefined4 *)0x0;
LAB_002f9924:
            *(undefined4 **)(param_1 + 0x108) = puVar1;
            fn_0017821c(param_1,param_2,0xf0);
            uVar4 = 1;
            *(undefined4 *)(param_1 + 0x10c) = param_4;
          }
        }
      }
    }
  }
  return uVar4;
}



void fn_002f8f8c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0016a8e4(param_1,param_3,1,0,param_4);
  *puVar1 = &DAT_008213a4;
  puVar1[0x10] = param_2;
  return;
}



void fn_002f6c88(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = fn_002f8364();
  puVar2 = (undefined4 *)fn_001f751c(uVar1,0x4c);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_008946d4) goto LAB_002f6ce0;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_002f6ce0:
  *(undefined1 *)(puVar2 + 2) = 4;
  *(undefined1 *)(puVar2 + 7) = 0;
  uVar4 = fn_0022f750((char *)&DAT_002f6d5c);
  fn_003212cc(puVar2,uVar4);
  fn_003212bc(puVar2,param_2);
  uVar4 = fn_0022f584((char *)&DAT_002f6d6c,0);
  uVar5 = fn_0022f584((char *)&DAT_002f6d94,0);
  fn_003212dc(puVar2,uVar5,uVar4,0);
  fn_001f749c(uVar1,0x4c,param_3,param_4);
  return;
}



void fn_002f6534(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char *local_18 [2];
  
  local_18[0] = "mezasesaikyomastersgp";
  local_18[1] = "rulegenteichallengersgp";
  puVar1 = (undefined4 *)fn_001f74f8(*(undefined4 *)(DAT_008977ec + 0x24),0xd6);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00897044) goto LAB_002f6594;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_002f6594:
  fn_0022f750(local_18[*(byte *)(puVar1 + 4)]);
  return;
}


