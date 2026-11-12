#include "0032fc44_00334770.h"



void fn_00334770(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &DAT_00824638;
  fn_00129004();
  fn_00120f74();
  iVar1 = param_1[5];
  if (iVar1 != 0) {
    if (*(int **)(iVar1 + 0x24) != (int *)0x0) {
      (**(code **)(**(int **)(iVar1 + 0x24) + 4))();
    }
    if (*(int **)(iVar1 + 0x20) != (int *)0x0) {
      (**(code **)(**(int **)(iVar1 + 0x20) + 8))();
    }
    if (*(int **)(iVar1 + 0x1c) != (int *)0x0) {
      (**(code **)(**(int **)(iVar1 + 0x1c) + 4))();
    }
    if (*(int **)(iVar1 + 0x18) != (int *)0x0) {
      (**(code **)(**(int **)(iVar1 + 0x18) + 4))();
    }
    if (*(int **)(iVar1 + 0x14) != (int *)0x0) {
      (**(code **)(**(int **)(iVar1 + 0x14) + 4))();
    }
    if (*(int **)(iVar1 + 0x10) != (int *)0x0) {
      (**(code **)(**(int **)(iVar1 + 0x10) + 4))();
    }
    if (*(int **)(iVar1 + 0xc) != (int *)0x0) {
      (**(code **)(**(int **)(iVar1 + 0xc) + 4))();
    }
    if (*(int **)(iVar1 + 8) != (int *)0x0) {
      (**(code **)(**(int **)(iVar1 + 8) + 4))();
    }
    fn_002feef8(iVar1);
  }
  if ((int *)param_1[4] != (int *)0x0) {
    (**(code **)(*(int *)param_1[4] + 4))();
  }
  if ((int *)param_1[3] != (int *)0x0) {
    (**(code **)(*(int *)param_1[3] + 4))();
  }
  if ((int *)param_1[2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[2] + 4))();
  }
  fn_005f6f1c(param_1);
  return;
}



bool fn_00333e48(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = fn_00118290();
  DAT_00896ca4 = fn_0011c184(L"rom:/data/Parameter/RaceAIBase.tp",uVar1,4,5);
  uVar1 = fn_00145ac0();
  iVar2 = fn_00147e6c(uVar1,&DAT_00333e94,4);
  return iVar2 == 0;
}



undefined1 fn_00333df8(uint param_1,int param_2)

{
  int iVar1;
  
  if (((param_1 < 0x1b) && (-1 < param_2)) && (param_2 < 0x12)) {
    iVar1 = fn_00145ac0(DAT_00896ca4);
    return *(undefined1 *)(iVar1 + param_2 * 0x1c + param_1 + 4);
  }
  return 0;
}



undefined4 * fn_00333d94(undefined4 *param_1)

{
  undefined1 *puVar1;
  
  *param_1 = &DAT_00824624;
  puVar1 = (undefined1 *)fn_00145b00(1,&DAT_00812c8c);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  param_1[1] = puVar1;
  return param_1;
}



undefined4 * fn_00333860(undefined4 *param_1)

{
  undefined1 *puVar1;
  
  *param_1 = &DAT_00824610;
  puVar1 = (undefined1 *)fn_00145b00(0x30,&DAT_00812c8c);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
    *(undefined4 *)(puVar1 + 0x20) = 0;
    *(undefined4 *)(puVar1 + 0x24) = 0;
    *(undefined4 *)(puVar1 + 0x28) = 0;
    *(undefined4 *)(puVar1 + 0x2c) = 0;
  }
  param_1[1] = puVar1;
  return param_1;
}



undefined4 * fn_003330b0(undefined4 *param_1)

{
  undefined1 *puVar1;
  
  *param_1 = &DAT_008245fc;
  puVar1 = (undefined1 *)fn_00145b00(1,&DAT_00812c8c);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  param_1[1] = puVar1;
  return param_1;
}



undefined4 * fn_00332ddc(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = &DAT_008245e8;
  puVar1 = (undefined4 *)fn_00145b00(0xc,&DAT_00812c8c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &DAT_0085212c;
    *(undefined1 *)(puVar1 + 1) = 0;
    *(undefined1 *)((int)puVar1 + 5) = 0;
    puVar1[2] = 0;
  }
  param_1[1] = puVar1;
  return param_1;
}



undefined4 * fn_003325e8(undefined4 *param_1)

{
  undefined1 *puVar1;
  
  *param_1 = &DAT_008245d4;
  puVar1 = (undefined1 *)fn_00145b00(8,&DAT_00812c8c);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
  }
  param_1[1] = puVar1;
  return param_1;
}



undefined4 * fn_00332118(undefined4 *param_1)

{
  undefined1 *puVar1;
  
  *param_1 = &DAT_008245c0;
  puVar1 = (undefined1 *)fn_00145b00(1,&DAT_00812c8c);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  param_1[1] = puVar1;
  return param_1;
}



undefined4 * fn_00331e6c(undefined4 *param_1)

{
  undefined1 *puVar1;
  
  *param_1 = &DAT_008245ac;
  puVar1 = (undefined1 *)fn_00145b00(8,&DAT_00812c8c);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
  }
  param_1[1] = puVar1;
  return param_1;
}



undefined4 * fn_00331b3c(undefined4 *param_1)

{
  undefined1 *puVar1;
  
  *param_1 = &DAT_00824598;
  puVar1 = (undefined1 *)fn_00145b00(0xc,&DAT_00812c8c);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
    puVar1[8] = 0;
  }
  param_1[1] = puVar1;
  return param_1;
}



undefined4 * fn_00331530(undefined4 *param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  
  *param_1 = &DAT_00824584;
  puVar1 = (undefined1 *)fn_00145b00(8,&DAT_00812c8c);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    *puVar1 = 0;
    uVar2 = fn_00144810(DAT_008977e8);
    uVar2 = fn_006a8a34(uVar2,0);
    *(undefined4 *)(puVar1 + 4) = uVar2;
  }
  param_1[1] = puVar1;
  return param_1;
}



undefined4 * fn_003311e4(undefined4 *param_1)

{
  undefined1 *puVar1;
  
  *param_1 = &DAT_00824570;
  puVar1 = (undefined1 *)fn_00145b00(2,&DAT_00812c8c);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  param_1[1] = puVar1;
  return param_1;
}



undefined4 * fn_00330dd0(undefined4 *param_1)

{
  undefined1 *puVar1;
  
  *param_1 = &DAT_0082455c;
  puVar1 = (undefined1 *)fn_00145b00(2,&DAT_00812c8c);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  param_1[1] = puVar1;
  return param_1;
}



undefined4 * fn_003309a0(undefined4 *param_1)

{
  undefined1 *puVar1;
  
  *param_1 = &DAT_00824548;
  puVar1 = (undefined1 *)fn_00145b00(0xc,&DAT_00812c8c);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
    puVar1[8] = 0;
  }
  param_1[1] = puVar1;
  return param_1;
}



undefined4 * fn_00330274(undefined4 *param_1)

{
  undefined1 *puVar1;
  
  *param_1 = &DAT_00824534;
  puVar1 = (undefined1 *)fn_00145b00(1,&DAT_00812c8c);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  param_1[1] = puVar1;
  return param_1;
}



undefined4 * fn_0032ffb4(undefined4 *param_1)

{
  undefined1 *puVar1;
  
  *param_1 = &DAT_00824520;
  puVar1 = (undefined1 *)fn_00145b00(0xc,&DAT_00812c8c);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
    puVar1[8] = 0;
  }
  param_1[1] = puVar1;
  return param_1;
}



undefined4 * fn_0032fc44(undefined4 *param_1)

{
  undefined1 *puVar1;
  
  *param_1 = &DAT_0082450c;
  puVar1 = (undefined1 *)fn_00145b00(0xc,&DAT_00812c8c);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
    puVar1[8] = 0;
  }
  param_1[1] = puVar1;
  return param_1;
}


