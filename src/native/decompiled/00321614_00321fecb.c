#include "00321614_00321fecb.h"



undefined4 fn_00321f24(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 8))(param_1);
  uVar2 = *(undefined4 *)(iVar1 + 8);
  iVar1 = fn_001481c8(uVar2,L"rom:/data/Layout/menu/information.arc",&DAT_00321f9c,1,1);
  param_1[0x19] = iVar1;
  iVar1 = fn_001480d0(uVar2,iVar1,(char *)&DAT_00321fa8,&DAT_00321fa4,0,1,0);
  param_1[0x1a] = iVar1;
  fn_00321fec(param_1);
  return 1;
}



void fn_00321fec(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar1 = (**(code **)(*param_1 + 8))(param_1);
  uVar2 = fn_00178f9c(*(undefined4 *)(iVar1 + 8),param_1[0x1a]);
  puVar4 = (undefined4 *)param_1[6];
  if (puVar4 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar4)(puVar4);
    do {
      if (puVar3 == &DAT_00894444) goto LAB_00322054;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar4 = (undefined4 *)0x0;
LAB_00322054:
  iVar1 = fn_00172c98(uVar2,(char *)&DAT_003220d0);
  fn_00688cc4(*(undefined4 *)(iVar1 + 0xac),(char *)&DAT_003220dc,puVar4[2]);
  fn_00688cc4(*(undefined4 *)(iVar1 + 0xac),(char *)&DAT_003220e8,puVar4[3]);
  puVar4 = (undefined4 *)param_1[6];
  if (puVar4 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar4)(puVar4);
    do {
      if (puVar3 == &DAT_00894444) goto LAB_003220b8;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar4 = (undefined4 *)0x0;
LAB_003220b8:
  fn_00688cc4(uVar2,(char *)&DAT_003220f4,puVar4[4]);
  return;
}



void fn_00321ed0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 8))(param_1);
  uVar2 = *(undefined4 *)(iVar1 + 8);
  if (param_1[0x1a] != -1) {
    fn_0016a43c(uVar2);
    param_1[0x1a] = -1;
  }
  if (param_1[0x19] != -1) {
                    /* WARNING: Subroutine does not return */
    fn_001482f4(uVar2);
  }
  return;
}



void fn_00321e94(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  puVar1[0x19] = 0;
  *puVar1 = &PTR_LAB_008233ac;
  *(undefined1 *)(puVar1 + 0x1a) = 0;
  puVar1[0x1b] = 0;
  return;
}



void fn_00321b30(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)0x0;
  if (param_2 == 2) {
    pcVar2 = (char *)&DAT_00321c54;
    (**(code **)(**(int **)(param_1 + 100) + 0xc))();
    fn_0015b0dc();
  }
  else if (param_2 == 3) {
    pcVar2 = (char *)&DAT_00321c84;
    (**(code **)(**(int **)(param_1 + 100) + 0xc))();
    fn_0015b0dc();
    (**(code **)(**(int **)(param_1 + 100) + 0x10))();
    fn_0015b0dc();
    (**(code **)(**(int **)(param_1 + 100) + 0x10))();
    fn_0015b0dc();
    *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x44) = 0;
  }
  else if (param_2 == 4) {
    pcVar2 = (char *)&DAT_00321c6c;
    (**(code **)(**(int **)(param_1 + 100) + 0xc))();
    fn_0015b0dc();
  }
  uVar1 = fn_0022f584(pcVar2,0);
  fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar1,1,param_3,1,1,0,0,1);
  fn_00689bd0(param_1,0x48,0);
  *(undefined1 *)(param_1 + 0x68) = 1;
  return;
}



void fn_00321adc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_10;
  
  local_10 = param_4;
  fn_006899f4(param_1,*(undefined4 *)(*(int *)(param_1 + 100) + 0xc),0);
  if (*(char *)(*(int *)(param_1 + 100) + 0x11) != '\0') {
    local_10 = 0x8c000000;
    fn_00163988(DAT_00897810,&local_10,1);
  }
  return;
}



undefined4 fn_00321a48(int *param_1)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)param_1[6];
  if (puVar4 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar4)(puVar4);
    do {
      if (puVar2 == &DAT_00894380) goto LAB_00321a8c;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar4 = (undefined4 *)0x0;
LAB_00321a8c:
  param_1[0x19] = (int)puVar4;
  *(undefined1 *)((int)puVar4 + 0x15) = 0;
  *(undefined1 *)((int)puVar4 + 0x16) = 0;
  if (*(char *)(param_1[0x19] + 0x10) == '\0') {
    iVar3 = (**(code **)(*param_1 + 0x110))(param_1);
    if (iVar3 == 0) {
      uVar1 = 2;
    }
    else {
      uVar1 = 3;
    }
    *(undefined1 *)(param_1 + 0x1a) = uVar1;
  }
  else {
    *(undefined1 *)(param_1 + 0x1a) = 5;
  }
  return 1;
}


