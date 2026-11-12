#include "004497e0_0044a5d8a.h"



void fn_00449ed0(int param_1)

{
  fn_003979d0();
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  return;
}



void fn_00449b24(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  char *local_50 [4];
  char *pcStack_40;
  char *pcStack_3c;
  char *pcStack_38;
  char *pcStack_34;
  char *pcStack_30;
  char *pcStack_2c;
  char *pcStack_28;
  char *pcStack_24;
  char *pcStack_20;
  char *pcStack_1c;
  
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0xad);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00895be4) goto LAB_00449b70;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_00449b70:
  local_50[0] = "ranking_race_explain_item_about";
  local_50[1] = "ranking_race_explain_about";
  local_50[2] = "ranking_race_explain_item_rule";
  local_50[3] = "ranking_race_explain_rule";
  pcStack_40 = "ranking_race_explain_item_ranking";
  pcStack_3c = "ranking_race_explain_ranking";
  pcStack_38 = "ranking_race_explain_item_replay";
  pcStack_34 = "ranking_race_explain_replay";
  pcStack_30 = "ranking_race_explain_item_flash_ranking";
  pcStack_2c = (char *)&DAT_00867420;
  pcStack_28 = (char *)&DAT_008675c0;
  pcStack_24 = (char *)&DAT_008675e4;
  pcStack_20 = "ranking_race_explain_item_regist";
  pcStack_1c = "ranking_race_explain_regist";
  fn_0059e54c(puVar1);
  uVar3 = 0;
  do {
    fn_0059e538(puVar1,uVar3,local_50 + uVar3 * 2);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 7);
                    /* WARNING: Subroutine does not return */
  fn_006ba250(param_1);
}



void fn_00449834(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0x3c);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00894d28) goto LAB_00449878;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_00449878:
  *(undefined1 *)(puVar1 + 6) = 2;
  return;
}



void fn_004497e0(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0x3c);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00894d28) goto LAB_00449828;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_00449828:
  *(undefined1 *)(puVar1 + 6) = 1;
  return;
}


