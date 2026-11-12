#include "00269b38_0026a574.h"



int fn_0026a574(int param_1,uint param_2)

{
  return param_1 + (param_2 ^ 1) * 0x20 + 0x204;
}



int fn_0026a558(int param_1,char *param_2)

{
  return param_1 + *param_2 * 0x9c + -0x112c;
}



int fn_0026a548(int param_1,char *param_2)

{
  return param_1 + *param_2 * 0x20 + -0x1fc;
}



void fn_0026a4d8(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_00145b00(0xc,&DAT_00812c8c);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = fn_00120ea0();
  }
  iVar1 = *(int *)(param_1 + 0x398);
  if (iVar1 != iVar2) {
    if (iVar1 != 0) {
      fn_00120ec8(iVar1);
      fn_002feef8();
    }
    *(int *)(param_1 + 0x398) = iVar2;
  }
  if (*param_2 != param_2[1]) {
    fn_0023bfb4(*(undefined4 *)(param_1 + 0x398),param_2);
  }
  *(undefined1 *)(param_1 + 0x39f) = 1;
  return;
}



void fn_0026a494(int *param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined1 *)(*param_1 + 0xb) = 1;
  fn_00269a00(*param_1,param_2,(char *)&DAT_0026a288,(char *)&DAT_0026a270,
               "MenuMessageSaveSuccess",param_3);
  return;
}



void fn_0026a398(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  *(undefined1 *)(*param_1 + 0xb) = 1;
  puVar4 = (undefined4 *)*param_1;
  puVar4[6] = param_2;
  puVar1 = (undefined4 *)fn_001f751c(param_2,0x48,param_3,param_1,param_4);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008942d0) goto LAB_0026a400;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_0026a400:
  *(char *)((int)puVar4 + 10) = (char)param_3;
  puVar4[5] = puVar1;
  if ((int *)puVar4[1] != (int *)0x0) {
    (**(code **)(*(int *)puVar4[1] + 0x10))();
  }
  fn_005f3c48(1);
  iVar3 = fn_00251510(*puVar4);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  *(undefined1 *)(puVar4 + 2) = 1;
  puVar4[3] = 0x1e;
  *(undefined1 *)((int)puVar4 + 9) = 1;
  return;
}



undefined4 fn_0026a324(undefined4 *param_1)

{
  int iVar1;
  
  param_1 = (undefined4 *)*param_1;
  iVar1 = fn_00251510(*param_1);
  if (iVar1 == 0) {
    do {
      iVar1 = fn_002509fc(*param_1);
    } while (iVar1 == 6);
    if ((iVar1 == 0) && (iVar1 = fn_00250c7c(*param_1), iVar1 != 2)) {
      return 2;
    }
  }
  return 5;
}



undefined4 fn_0026a2a0(int *param_1)

{
  switch(*(undefined1 *)(*param_1 + 8)) {
  default:
    return 0;
  case 1:
  case 4:
  case 5:
  case 6:
  case 9:
  case 10:
    return 1;
  }
}



undefined4 fn_00269b38(int *param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  puVar3 = (undefined4 *)*param_1;
  switch(*(undefined1 *)(puVar3 + 2)) {
  default:
    return 4;
  case 1:
    if (0 < (int)puVar3[3]) {
      puVar3[3] = puVar3[3] + -1;
      return 1;
    }
    if (*(char *)((int)puVar3 + 9) == '\0') {
      iVar5 = fn_00250ac4(*puVar3);
      if (iVar5 == 0) {
        if (*(char *)((int)puVar3 + 10) == '\0') {
          uVar2 = 1;
        }
        else {
          if (puVar3[5] != 0) {
            fn_0036c340();
          }
          uVar2 = 0;
        }
        *(undefined1 *)(puVar3 + 4) = uVar2;
        if ((int *)puVar3[1] != (int *)0x0) {
          (**(code **)(*(int *)puVar3[1] + 0xc))();
        }
        *(undefined1 *)(puVar3 + 2) = 2;
        *(undefined1 *)(puVar3 + 10) = 0;
        return 1;
      }
      if (iVar5 == 2) {
        fn_0026992c(puVar3,puVar3[8],1,2,0);
        uVar2 = 4;
        break;
      }
      if (iVar5 != 6) {
        return 1;
      }
      iVar5 = puVar3[5];
    }
    else {
      if (*(char *)((int)puVar3 + 9) != '\x01') {
        return 1;
      }
      iVar5 = fn_002509fc(*puVar3);
      if (iVar5 == 0) {
        iVar5 = fn_00250c7c(*puVar3);
        if (iVar5 != 2) {
          if (*(uint *)(*(int *)(DAT_00897804 + 4) + 0x37aec) < 4) {
            bVar6 = *(char *)((int)puVar3 + 10) == '\0';
            if (!bVar6) {
              fn_0026992c(puVar3,(char *)&DAT_0026a000,1,2,1);
            }
            *(bool *)(puVar3 + 4) = bVar6;
            if ((int *)puVar3[1] != (int *)0x0) {
              (**(code **)(*(int *)puVar3[1] + 0x14))();
            }
            *(undefined1 *)(puVar3 + 2) = 3;
            *(undefined1 *)(puVar3 + 10) = 0;
            return 1;
          }
          fn_0026992c(puVar3,(char *)&DAT_00269fc8,1,3,0);
          if (puVar3[5] != 0) {
            *(undefined1 *)(puVar3[5] + 0x30) = 1;
          }
          uVar2 = 0xb;
          break;
        }
code_r0x00269d18:
                    /* WARNING: Subroutine does not return */
        fn_001638a0(iVar5);
      }
      if (iVar5 == 2) goto code_r0x00269d18;
      if (iVar5 != 6) {
        return 1;
      }
      iVar5 = puVar3[5];
    }
    if (iVar5 == 0) {
      return 1;
    }
    uVar2 = 0;
    goto LAB_00269ca0;
  case 2:
    bVar6 = *(char *)((int)puVar3 + 10) != '\0';
    if (bVar6) {
      param_2 = puVar3[9];
    }
    if (bVar6 && param_2 != 0) {
      iVar5 = puVar3[5];
      cVar1 = '\0';
      if (iVar5 != 0) {
        cVar1 = *(char *)(iVar5 + 0x31);
      }
      if ((iVar5 == 0 || cVar1 == '\x01') || (cVar1 == '\x02' || cVar1 == '\x03')) {
        fn_0026992c(puVar3,param_2,1,2,1);
        *(undefined1 *)(puVar3 + 2) = 3;
      }
    }
    else {
      *(undefined1 *)(puVar3 + 2) = 3;
    }
  case 3:
    fn_005f3c30(1);
    bVar6 = *(char *)((int)puVar3 + 10) != '\0';
    iVar5 = 0;
    if (bVar6) {
      iVar5 = puVar3[5];
    }
    if ((bVar6 && iVar5 != 0) &&
       (cVar1 = *(char *)(iVar5 + 0x31), (cVar1 != '\x01' && cVar1 != '\x02') && cVar1 != '\x03')) {
      return 1;
    }
    *(undefined1 *)(puVar3 + 4) = 1;
    return 2;
  case 5:
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  case 6:
    if (puVar3[5] != 0) {
      *(undefined1 *)(puVar3[5] + 0x30) = 0;
    }
    iVar5 = fn_002509d8(*puVar3);
    if (iVar5 != 0) {
      return 1;
    }
    fn_0026992c(puVar3,(char *)&DAT_0026a038,1,3,1);
    uVar2 = 7;
    break;
  case 7:
    fn_005f3c30(1);
    iVar5 = puVar3[5];
    cVar1 = '\0';
    if (iVar5 != 0) {
      cVar1 = *(char *)(iVar5 + 0x31);
    }
    if ((iVar5 != 0 && cVar1 != '\x01') && (cVar1 != '\x02' && cVar1 != '\x03')) {
      return 1;
    }
    *(undefined1 *)(puVar3 + 2) = 0;
    return 5;
  case 8:
    return 3;
  case 9:
    iVar4 = fn_00250b80(DAT_00897814);
    iVar5 = fn_005e0780(DAT_00897814);
    if (iVar4 != 4) {
      if (iVar4 != 5) {
        return 6;
      }
      goto code_r0x00269d18;
    }
    fn_005e06b8(DAT_00897814);
    uVar2 = 10;
    break;
  case 10:
    iVar5 = fn_002509d8(DAT_00897814);
    if (iVar5 == 0) {
      return 2;
    }
    return 1;
  case 0xb:
    iVar5 = puVar3[5];
    cVar1 = '\0';
    if (iVar5 != 0) {
      cVar1 = *(char *)(iVar5 + 0x31);
    }
    if ((iVar5 != 0 && cVar1 != '\x01') && (cVar1 != '\x02' && cVar1 != '\x03')) {
      return 1;
    }
    fn_0026992c(puVar3,(char *)&DAT_0026a108,1,3,0);
    iVar5 = puVar3[5];
    *(undefined1 *)(puVar3 + 2) = 0xc;
    if (iVar5 == 0) {
      return 1;
    }
    uVar2 = 1;
LAB_00269ca0:
    *(undefined1 *)(iVar5 + 0x30) = uVar2;
    return 1;
  case 0xc:
    iVar5 = puVar3[5];
    cVar1 = '\0';
    if (iVar5 != 0) {
      cVar1 = *(char *)(iVar5 + 0x31);
    }
    if ((iVar5 != 0 && cVar1 != '\x01') && (cVar1 != '\x02' && cVar1 != '\x03')) {
      return 1;
    }
    uVar2 = 3;
  }
  *(undefined1 *)(puVar3 + 2) = uVar2;
  return 1;
}


