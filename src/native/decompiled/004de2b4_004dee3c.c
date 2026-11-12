#include "004de2b4_004dee3c.h"



void fn_004dee3c(int param_1)

{
  fn_004dc130();
  if (*(int *)(param_1 + 8) - 0x100000U < 0x3ff00000) {
    if (*(char *)(*(int *)(param_1 + 8) + 5) != '\0') {
      if (*(int *)(param_1 + 0x1c) - 0x100000U < 0x3ff00000) {
        fn_004eac20();
      }
    }
    if (*(char *)(*(int *)(param_1 + 8) + 4) != '\0') {
      if (*(int *)(param_1 + 0x18) - 0x100000U < 0x3ff00000) {
        fn_004e4e24();
      }
    }
  }
  if (*(int *)(param_1 + 0x14) - 0x100000U < 0x3ff00000) {
    fn_004e2270();
  }
  *(undefined1 *)(param_1 + 0x5c) = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined1 *)(param_1 + 0x81) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}



void fn_004dee18(int param_1)

{
  if (*(code **)(param_1 + 0x78) == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004dee34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x78))
            (2,*(undefined1 *)(*(int *)(param_1 + 0x14) + 0xe),*(undefined4 *)(param_1 + 0x7c));
  return;
}



void fn_004dedfc(int param_1,undefined4 param_2)

{
  if (*(code **)(param_1 + 0x78) == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004dee10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x78))(1,param_2,*(undefined4 *)(param_1 + 0x7c));
  return;
}



undefined8 fn_004dec0c(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = param_2;
  if ((DAT_008bf500 == '\0') ||
     (uVar3 = fn_006d685c(*(undefined4 *)(param_1 + 0x14)), iVar2 = (int)((ulonglong)uVar3 >> 0x20)
     , (int)uVar3 == 0)) {
    if (DAT_008c0630 != 0) {
      iVar2 = 8;
    }
    return CONCAT44(iVar2,&DAT_e0a14827);
  }
  uVar1 = 0x3ff00000;
  if (param_2 - 0x100000U < 0x3ff00000) {
                    /* WARNING: Could not recover jumptable at 0x004ded40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(**(int **)(param_1 + 0x14) + 0x48))
                      (*(int **)(param_1 + 0x14),param_2,param_3);
    return uVar3;
  }
  if (DAT_008c0630 != 0) {
    uVar1 = 8;
  }
  return CONCAT44(uVar1,0xe0e14826);
}



undefined1 fn_004debdc(int param_1)

{
  char cVar1;
  
  if ((*(char *)(param_1 + 0x74) == '\x04') &&
     (cVar1 = *(char *)(param_1 + 0x60), (cVar1 == '\x02' || cVar1 == '\x03') || cVar1 == '\x04')) {
    return 1;
  }
  return 0;
}



undefined1 * fn_004de8b8(int param_1,int param_2,uint *param_3,uint param_4)

{
  undefined1 *puVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  
  pcVar3 = &DAT_008bf500;
  if (DAT_008bf500 == '\0') {
    puVar1 = &DAT_e0a1482b;
  }
  else {
    puVar1 = (undefined1 *)0xe0e14826;
    if (((((param_2 - 0x100000U < 0x3ff00000) && (param_3 + -0x40000 < (uint *)0x3ff00000)) &&
         (puVar1 = &DAT_e0a14827, *(char *)(param_1 + 0x81) != '\0')) &&
        (iVar2 = fn_006d589c(param_1), iVar2 == 0)) &&
       ((*pcVar3 == '\0' ||
        ((iVar2 = fn_006d685c(*(undefined4 *)(param_1 + 0x14)), iVar2 == 0 &&
         ((*pcVar3 == '\0' || (iVar2 = fn_006d6880(*(undefined4 *)(param_1 + 0x14)), iVar2 == 0))))
        )))) {
      uVar4 = 0;
      while( true ) {
        bVar6 = uVar4 <= *(uint *)(param_1 + 0x10);
        bVar5 = *(uint *)(param_1 + 0x10) == uVar4;
        if (bVar6 && !bVar5) {
          bVar6 = uVar4 <= param_4;
          bVar5 = param_4 == uVar4;
        }
        if (!bVar6 || bVar5) {
          *param_3 = uVar4;
          return (undefined1 *)0x0;
        }
        if (*(char *)(param_1 + 4) != '\0') break;
        fn_0017821c(param_2 + uVar4 * 0x10c + 4,*(int *)(param_1 + 0xc) + uVar4 * 0x10c + 4,0x108);
        uVar4 = uVar4 + 1;
      }
    }
  }
  return puVar1;
}



undefined1 fn_004de888(int param_1)

{
  char cVar1;
  
  if ((*(char *)(param_1 + 0x74) == '\x01') &&
     (cVar1 = *(char *)(param_1 + 0x60), (cVar1 == '\x02' || cVar1 == '\x03') || cVar1 == '\x04')) {
    return 1;
  }
  return 0;
}



undefined8 fn_004de880(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined1 *puVar3;
  
  uVar2 = (uint)*(byte *)(param_1 + 0x74);
  puVar3 = &DAT_e0a14827;
  if (uVar2 == 4) {
    cVar1 = *(char *)(param_1 + 0x60);
    if ((cVar1 == '\x02' || cVar1 == '\x03') || cVar1 == '\x04') {
      puVar3 = *(undefined1 **)(param_1 + 100);
    }
    else if (DAT_008c0630 != 0) {
      uVar2 = 8;
    }
  }
  else if (DAT_008c0630 != 0) {
    uVar2 = 8;
  }
  return CONCAT44(uVar2,puVar3);
}



undefined1 fn_004de850(int param_1)

{
  char cVar1;
  
  if ((*(char *)(param_1 + 0x74) == '\x03') &&
     (cVar1 = *(char *)(param_1 + 0x60), (cVar1 == '\x02' || cVar1 == '\x03') || cVar1 == '\x04')) {
    return 1;
  }
  return 0;
}



undefined8 fn_004de848(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined1 *puVar3;
  
  uVar2 = (uint)*(byte *)(param_1 + 0x74);
  puVar3 = &DAT_e0a14827;
  if (uVar2 == 1) {
    cVar1 = *(char *)(param_1 + 0x60);
    if ((cVar1 == '\x02' || cVar1 == '\x03') || cVar1 == '\x04') {
      puVar3 = *(undefined1 **)(param_1 + 100);
    }
    else if (DAT_008c0630 != 0) {
      uVar2 = 8;
    }
  }
  else if (DAT_008c0630 != 0) {
    uVar2 = 8;
  }
  return CONCAT44(uVar2,puVar3);
}



int fn_004de804(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (DAT_008bf500 != '\0') {
    uVar1 = *(uint *)(param_1 + 0x10);
  }
  if ((DAT_008bf500 != '\0' && param_2 < uVar1) && (*(char *)(param_1 + 4) == '\0')) {
    return *(int *)(param_1 + 0xc) + param_2 * 0x10c;
  }
  return 0;
}



undefined8 fn_004de680(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined1 *puVar3;
  
  uVar2 = (uint)*(byte *)(param_1 + 0x74);
  puVar3 = &DAT_e0a14827;
  if (uVar2 == 3) {
    cVar1 = *(char *)(param_1 + 0x60);
    if ((cVar1 == '\x02' || cVar1 == '\x03') || cVar1 == '\x04') {
      puVar3 = *(undefined1 **)(param_1 + 100);
    }
    else if (DAT_008c0630 != 0) {
      uVar2 = 8;
    }
  }
  else if (DAT_008c0630 != 0) {
    uVar2 = 8;
  }
  return CONCAT44(uVar2,puVar3);
}



undefined1 * fn_004de544(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  
  if ((DAT_008bf500 == '\0') || (iVar2 = fn_006d685c(*(undefined4 *)(param_1 + 0x14)), iVar2 == 0))
  {
    return &DAT_e0a14827;
  }
  puVar3 = (undefined1 *)
           (**(code **)(**(int **)(param_1 + 0x14) + 0x6c))(*(int **)(param_1 + 0x14),param_2);
  if (-1 < (int)puVar3) {
    if (param_2 == 0) {
      uVar1 = 3;
    }
    else {
      uVar1 = 2;
    }
    *(undefined1 *)(param_1 + 0x80) = uVar1;
    fn_004e17b8(*(undefined4 *)(param_1 + 0x14));
  }
  return puVar3;
}



undefined8 fn_004de3fc(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (*(char *)(param_1 + 0x60) == '\x01') {
    if (DAT_008c0630 != 0) {
      param_2 = 8;
    }
    return CONCAT44(param_2,&DAT_e0a14827);
  }
  if (*(char *)(param_1 + 0x74) != '\0') {
    fn_004ed13c(param_1 + 0x60);
    *(undefined1 *)(param_1 + 0x74) = 0;
  }
  uVar1 = fn_004dcbf8(param_1,param_1 + 0x60,param_2);
  uVar2 = uVar1 & 0x80000000;
  if (-1 < (int)uVar2) {
    uVar2 = 4;
    *(undefined1 *)(param_1 + 0x74) = 4;
  }
  return CONCAT44(uVar2,uVar1);
}



undefined8 fn_004de2b4(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (*(char *)(param_1 + 0x60) == '\x01') {
    if (DAT_008c0630 != 0) {
      param_2 = 8;
    }
    return CONCAT44(param_2,&DAT_e0a14827);
  }
  if (*(char *)(param_1 + 0x74) != '\0') {
    fn_004ed13c(param_1 + 0x60);
    *(undefined1 *)(param_1 + 0x74) = 0;
  }
  uVar1 = fn_004dc794(param_1,param_1 + 0x60,param_2);
  uVar2 = uVar1 & 0x80000000;
  if (-1 < (int)uVar2) {
    uVar2 = 1;
    *(undefined1 *)(param_1 + 0x74) = 1;
  }
  return CONCAT44(uVar2,uVar1);
}


