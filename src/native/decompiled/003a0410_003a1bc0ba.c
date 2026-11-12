#include "003a0410_003a1bc0ba.h"



void fn_003a0c54(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_48 [36];
  
  do {
    iVar7 = *(int *)(param_1 + 0x68);
    puVar2 = (undefined4 *)fn_001f7510(param_1,0x48);
    if (puVar2 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
      do {
        if (puVar3 == &DAT_008942d0) goto LAB_003a0cb4;
        puVar3 = (undefined4 *)*puVar3;
      } while (puVar3 != (undefined4 *)0x0);
    }
    puVar2 = (undefined4 *)0x0;
LAB_003a0cb4:
    if (iVar7 == 0) {
      if (*(int *)(param_1 + 0x78) == 0) {
        fn_001028d4(auStack_48,(char *)&DAT_003a0f24,*(byte *)(DAT_0089783c + 0xce) + 1,
                     *(byte *)(DAT_0089783c + 0xcf) + 1);
        fn_0022f750(auStack_48);
        fn_0015b0dc();
        fn_0029650c(*(undefined1 *)(DAT_0089783c + 0xcc));
        fn_0015b0dc();
        fn_0015b0dc(DAT_0089783c + 0xaa);
        uVar4 = fn_0022f584((char *)&DAT_003a0f34,0);
        fn_0036c5f4(puVar2,uVar4,1,0,1,1,0,0,1);
LAB_003a0e38:
        fn_00689bd0(param_1,0x48,0);
      }
      else if (*(char *)((int)puVar2 + 0x31) == '\x01') {
        if (*(char *)(DAT_0089783c + 0xd0) == '\0') {
          iVar5 = fn_002962d0(DAT_0089783c + 0x3c);
          goto joined_r0x003a0dac;
        }
        uVar4 = 1;
LAB_003a0e74:
        *(undefined4 *)(param_1 + 0x70) = uVar4;
      }
    }
    else if (iVar7 == 1) {
      if (*(int *)(param_1 + 0x78) == 0) {
        cVar1 = *(char *)(DAT_0089783c + 0xd0);
        fn_0036c658(puVar2,0);
        if (cVar1 == '\x01') {
          uVar4 = fn_0022f584((char *)&DAT_003a0f50,0);
          fn_0036c13c(puVar2,uVar4);
        }
        else if (cVar1 == '\x02') {
          uVar4 = fn_0022f584((char *)&DAT_003a0f74,0);
          fn_0036c13c(puVar2,uVar4);
        }
        goto LAB_003a0e38;
      }
      if (*(char *)((int)puVar2 + 0x31) == '\x01') {
        iVar5 = fn_002962d0(DAT_0089783c + 0x3c);
joined_r0x003a0dac:
        if (iVar5 != 0) {
          uVar4 = 2;
          goto LAB_003a0e74;
        }
LAB_003a0ec8:
        fn_006899f4(param_1,0xb4,0);
      }
    }
    else if (iVar7 == 2) {
      if (*(int *)(param_1 + 0x78) == 0) {
        fn_0036c658(puVar2,0);
        uVar4 = fn_0022f584((char *)&DAT_003a0f94,0);
        fn_0036c13c(puVar2,uVar4);
        goto LAB_003a0e38;
      }
      if (*(char *)((int)puVar2 + 0x31) == '\x01') goto LAB_003a0ec8;
    }
    iVar6 = *(int *)(param_1 + 0x68);
    iVar5 = *(int *)(param_1 + 0x70);
    *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
    *(int *)(param_1 + 0x68) = iVar5;
    *(int *)(param_1 + 0x6c) = iVar6;
    if (iVar6 == iVar5) {
      *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x78) = 0;
    }
    if (iVar5 == iVar7) {
      return;
    }
  } while( true );
}



void fn_003a0c24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x80,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003a0fb8(iVar1,param_1);
  return;
}



undefined4 * fn_003a0fb8(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  *puVar1 = &DAT_0082d7ac;
  puVar1[0x1a] = 0;
  puVar1[0x19] = &DAT_00859420;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = *(undefined4 *)(param_2 + 8);
  return puVar1;
}


