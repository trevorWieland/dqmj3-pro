#include "005cef28_005cf670.h"



undefined4 fn_005cf670(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [244];
  
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0xd9);
  puVar4 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00890b20) goto LAB_005cf6bc;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_005cf6bc:
  fn_0017821c(auStack_118,puVar1 + 3,0x104);
  uVar3 = fn_0020cb7c(auStack_108);
  *(undefined4 *)(param_1 + 0xd0) = uVar3;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  fn_005cf764(param_1);
  fn_005d976c(param_1,0,0);
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0x2d);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008951dc) {
        puVar4 = puVar1;
        break;
      }
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  *(undefined4 **)(param_1 + 0xe8) = puVar4;
  return 1;
}



void fn_005cf58c(undefined4 param_1,undefined4 *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  
  pcVar5 = (char *)*param_2;
  while (pcVar4 = (char *)param_2[1], pcVar4 != pcVar5) {
    cVar1 = *pcVar5;
    if (cVar1 != '\0') {
      pcVar2 = (char *)*param_2;
    }
    else {
      pcVar5 = pcVar5 + 8;
      pcVar2 = (char *)0x0;
    }
    if (cVar1 != '\0' && pcVar2 != pcVar4) {
      pcVar2 = pcVar5 + 8;
      if (pcVar2 != pcVar4) {
        pcVar3 = pcVar5;
        if (pcVar2 < pcVar4) {
          iVar6 = (int)pcVar4 - (int)pcVar2;
          if (0 < iVar6) {
            pcVar4 = pcVar5 + -8;
            if (iVar6 * 0x10000000 < 0) {
              fn_00166824(pcVar5,pcVar2);
              pcVar4 = pcVar5;
              pcVar3 = pcVar2;
            }
            for (iVar6 = iVar6 >> 4; iVar6 != 0; iVar6 = iVar6 + -1) {
              fn_00166824(pcVar4 + 8,pcVar3 + 8);
              pcVar4 = pcVar4 + 0x10;
              pcVar3 = pcVar3 + 0x10;
              fn_00166824();
            }
          }
        }
        else {
          do {
            fn_00166824(pcVar3,pcVar2);
            pcVar2 = pcVar2 + 8;
            pcVar3 = pcVar3 + 8;
          } while (pcVar2 != pcVar4);
        }
      }
      param_2[1] = param_2[1] + -8;
    }
  }
  return;
}



void fn_005cf2b8(undefined4 param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0;
  if (param_2[1] - *param_2 >> 3 != 0) {
    do {
      uVar4 = param_2[1] - *param_2 >> 3;
      if (uVar4 <= uVar3) {
        fn_002ff628(9,&DAT_008c7635,&DAT_008c7635,uVar3,uVar4);
      }
      if (*(char *)(*param_2 + uVar3 * 8) == '\0') {
        iVar2 = param_2[1];
        uVar4 = uVar3 + 1;
        if (uVar4 < (uint)(iVar2 - *param_2 >> 3)) {
          do {
            uVar1 = iVar2 - *param_2 >> 3;
            if (uVar1 <= uVar4) {
              fn_002ff628(9,&DAT_008c7635,&DAT_008c7635,uVar4,uVar1);
            }
            if (*(char *)(*param_2 + uVar4 * 8) == '\0') {
              uVar1 = param_2[1] - *param_2 >> 3;
              if (uVar1 <= uVar3) {
                fn_002ff628(9,&DAT_008c7635,&DAT_008c7635,uVar3,uVar1);
              }
              iVar2 = *param_2;
              uVar1 = param_2[1] - iVar2 >> 3;
              if (uVar1 <= uVar4) {
                fn_002ff628(9,&DAT_008c7635,&DAT_008c7635,uVar4,uVar1);
              }
              if (*(short *)(iVar2 + uVar3 * 8 + 4) == *(short *)(*param_2 + uVar4 * 8 + 4)) {
                uVar1 = param_2[1] - *param_2 >> 3;
                if (uVar1 <= uVar3) {
                  fn_002ff628(9,&DAT_008c7635,&DAT_008c7635,uVar3,uVar1);
                }
                iVar2 = *param_2;
                if (*(char *)(iVar2 + uVar3 * 8 + 2) == '\0') {
                  uVar1 = param_2[1] - iVar2 >> 3;
                  if (uVar1 <= uVar3) {
                    fn_002ff628(9,&DAT_008c7635,&DAT_008c7635,uVar3,uVar1);
                  }
                  iVar2 = *param_2;
                  if (*(char *)(iVar2 + uVar3 * 8 + 3) == '\0') {
                    uVar4 = param_2[1] - iVar2 >> 3;
                    if (uVar4 <= uVar3) {
                      fn_002ff628(9,&DAT_008c7635,&DAT_008c7635,uVar3,uVar4);
                    }
                    *(undefined1 *)(*param_2 + uVar3 * 8) = 1;
                    break;
                  }
                }
                uVar1 = param_2[1] - iVar2 >> 3;
                if (uVar1 <= uVar4) {
                  fn_002ff628(9,&DAT_008c7635,&DAT_008c7635,uVar4,uVar1);
                }
                *(undefined1 *)(*param_2 + uVar4 * 8) = 1;
                uVar1 = param_2[1] - *param_2 >> 3;
                if (uVar1 <= uVar3) {
                  fn_002ff628(9,&DAT_008c7635,&DAT_008c7635,uVar3,uVar1);
                }
                iVar2 = *param_2 + uVar3 * 8;
                uVar1 = param_2[1] - *param_2 >> 3;
                if (uVar1 <= uVar4) {
                  fn_002ff628(9,&DAT_008c7635,&DAT_008c7635,uVar4,uVar1);
                }
                *(short *)(iVar2 + 6) = *(short *)(*param_2 + uVar4 * 8 + 6) + *(short *)(iVar2 + 6)
                ;
              }
            }
            iVar2 = param_2[1];
            uVar4 = uVar4 + 1;
          } while (uVar4 < (uint)(iVar2 - *param_2 >> 3));
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)(param_2[1] - *param_2 >> 3));
  }
  return;
}



void fn_005cf15c(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &PTR_LAB_0084bed8;
  uVar1 = param_1[0x33];
  uVar2 = uVar1;
  if ((uint)param_1[0x34] < uVar1) {
    do {
      uVar2 = uVar2 + 8;
    } while (uVar2 != param_1[0x34]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x35] - uVar1) >> 3,0);
  uVar1 = param_1[0x30];
  uVar2 = uVar1;
  if ((uint)param_1[0x31] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[0x31]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x32] - uVar1) >> 2,0);
  if ((int *)param_1[0x2f] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x2f] + 4))();
  }
  fn_002c471c(param_1);
  fn_002feef8();
  return;
}



/* WARNING: Removing unreachable block (ram,0x005cf0d8) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffe4 : 0x005cf0e0 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 * fn_005cf080(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int local_20;
  
  puVar1 = (undefined4 *)fn_002c4694();
  *puVar1 = &PTR_LAB_0084bed8;
  puVar1[0x2c] = 0;
  puVar1[0x2d] = 0;
  puVar1[0x2e] = 0;
  puVar1[0x2f] = 0;
  puVar1[0x30] = 0;
  puVar1[0x31] = 0;
  puVar1[0x32] = 0;
  local_20 = 6;
  puVar2 = (undefined4 *)fn_00100fc6(0x80,0);
  puVar1[0x30] = puVar2;
  for (; local_20 != 0; local_20 = local_20 + -1) {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 1;
  }
  iVar3 = puVar1[0x30];
  puVar1[0x31] = iVar3 + 0x18;
  puVar1[0x32] = iVar3 + 0x80;
  puVar1[0x33] = 0;
  puVar1[0x34] = 0;
  puVar1[0x35] = 0;
  puVar1[0x36] = 0;
  puVar1[0x37] = 0;
  puVar1[0x38] = 0;
  puVar1[0x39] = 0;
  puVar1[0x3a] = 0;
  return puVar1;
}



void fn_005cefc0(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  fn_002c4304();
  if (*(int **)(param_1 + 0xbc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xbc) + 0x14))();
  }
  uVar2 = 0;
  do {
    uVar1 = *(int *)(param_1 + 0xc4) - *(int *)(param_1 + 0xc0) >> 2;
    if (uVar1 <= uVar2) {
      fn_002ff628(9,&DAT_008c7654,&DAT_008c7654,uVar2,uVar1);
    }
    if (*(int *)(*(int *)(param_1 + 0xc0) + uVar2 * 4) != 0) {
      uVar1 = *(int *)(param_1 + 0xc4) - *(int *)(param_1 + 0xc0) >> 2;
      if (uVar1 <= uVar2) {
        fn_002ff628(9,&DAT_008c7654,&DAT_008c7654,uVar2,uVar1);
      }
      (**(code **)(**(int **)(*(int *)(param_1 + 0xc0) + uVar2 * 4) + 0x14))();
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 6);
  return;
}



void fn_005cefa0(int param_1,int param_2)

{
  fn_00689824(param_1,param_2 == 0);
  *(int *)(param_1 + 0xe8) = param_2;
  return;
}



void fn_005cef64(int param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xb4);
  if (iVar1 != 0) {
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | param_2;
  }
  iVar1 = *(int *)(param_1 + 0xb8);
  if (iVar1 != 0) {
    *(byte *)(iVar1 + 0x44) = param_2 | *(byte *)(iVar1 + 0x44) & 0xfe;
  }
  return;
}



void fn_005cef28(int param_1)

{
  uint uVar1;
  
  uVar1 = fn_006f6a5c();
  if ((uVar1 & 0x100000) == 0) {
    if ((uVar1 & 0x200000) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0xb0) + 0x18) = 2;
      return;
    }
  }
  else {
    *(undefined1 *)(*(int *)(param_1 + 0xb0) + 0x18) = 1;
  }
  return;
}


