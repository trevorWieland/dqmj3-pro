#include "002d1e58_002d30f0.h"



bool fn_002d30f0(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  
  iVar1 = *(int *)(param_2 + 0x10);
  bVar2 = *(int *)(param_1 + 8) != iVar1;
  if (bVar2) {
    *(int *)(param_1 + 8) = iVar1;
  }
  iVar1 = *(int *)(param_2 + 0x14);
  bVar3 = *(int *)(param_1 + 0xc) != iVar1;
  if (bVar3) {
    *(int *)(param_1 + 0xc) = iVar1;
  }
  return bVar3 || bVar2;
}



void fn_002d30dc(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x14);
  return;
}



void fn_002d2f5c(int param_1,undefined1 param_2)

{
  undefined4 local_18;
  
  local_18 = 0xff000000;
  fn_00163988(DAT_00897808,&local_18,10);
  local_18 = 0xff000000;
  fn_00163988(DAT_0089780c,&local_18,10);
  *(undefined1 *)(param_1 + 0xc4) = 5;
  *(undefined1 *)(param_1 + 0xc5) = param_2;
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



void fn_002d2518(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  undefined4 local_5c;
  undefined4 local_1c;
  
  if (*(char *)(*(int *)(param_1 + 0xb8) + 8) == -1) {
    iVar2 = fn_00250e58(0);
    if ((iVar2 == 0) || (3 < *(uint *)(*(int *)(DAT_00897804 + 4) + 0x37aec))) {
      *(undefined1 *)(*(int *)(param_1 + 0xb8) + 8) = 1;
    }
    else {
      *(undefined1 *)(*(int *)(param_1 + 0xb8) + 8) = 0;
    }
  }
  fn_002c330c(&local_70);
  local_70 = DAT_00898c3c;
  local_6c = DAT_00898c40;
  local_68 = 7;
  local_5c = 7;
  local_64 = (int)*(char *)(*(int *)(param_1 + 0xb8) + 8);
  fn_002c29a0(param_1,&local_70);
  fn_002d28bc(param_1);
  uVar3 = fn_0010887c(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68),DAT_00898c44,
                       *(undefined4 *)(param_1 + 0x6c));
  *(undefined4 *)(param_1 + 0xbc) = uVar3;
  uVar3 = fn_001088e0(*(undefined4 *)(param_1 + 100),uVar3);
  *(undefined4 *)(param_1 + 0xc0) = uVar3;
  fn_006f9528(param_1 + 0xc6,1);
  iVar2 = fn_00250e58(0);
  if ((iVar2 == 0) || (3 < *(uint *)(*(int *)(DAT_00897804 + 4) + 0x37aec))) {
    *(undefined1 *)(param_1 + 0xc6) = 0;
  }
  iVar2 = fn_00154ac8(0x25);
  if ((iVar2 == 0) || (3 < *(uint *)(*(int *)(DAT_00897804 + 4) + 0x37aec))) {
    *(undefined1 *)(param_1 + 200) = 0;
    *(undefined1 *)(param_1 + 0xc9) = 0;
    *(undefined1 *)(param_1 + 0xca) = 0;
    *(undefined1 *)(param_1 + 0xcb) = 0;
    *(undefined1 *)(param_1 + 0xcc) = 0;
  }
  iVar2 = 0;
  do {
    if (*(char *)(param_1 + iVar2 + 0xc6) == '\0') {
      local_1c = 0xff808080;
      fn_002c37e0(param_1,iVar2,&local_1c);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 7);
  cVar1 = *(char *)(*(int *)(param_1 + 0xb8) + 0xc);
  *(char *)(param_1 + 0xc4) = cVar1;
  if (cVar1 == '\x04') {
    fn_0025e31c(*(undefined4 *)(param_1 + 0x98),0);
    fn_001caa40(*(undefined4 *)(param_1 + 0x9c),0);
    fn_0031b364(param_1,(int)*(char *)(*(int *)(param_1 + 0xb8) + 8),0);
  }
  else {
    *(undefined1 *)(*(int *)(param_1 + 0xb8) + 8) = 0xff;
  }
  fn_003a1f5c(*(undefined4 *)(param_1 + 0xb8));
  *(undefined1 *)(*(int *)(param_1 + 0xb8) + 9) = 0xff;
                    /* WARNING: Subroutine does not return */
  fn_0011dda8();
}



/* WARNING: Removing unreachable block (ram,0x002d29a0) */

void fn_002d28bc(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
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
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x6c));
  piVar2 = (int *)(**(code **)(**(int **)(iVar1 + 0x10) + 0x2c))
                            (*(int **)(iVar1 + 0x10),(char *)&DAT_002d29c0);
  if (piVar2 != (int *)0x0) {
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 8))(piVar2);
    do {
      if (puVar3 == &DAT_0089a930) goto LAB_002d2930;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  piVar2 = (int *)0x0;
LAB_002d2930:
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  fn_0018a618(&local_50,0x20,0x1f,L"Ver.1.%d",3);
  fn_00190d50(piVar2,&local_50);
  return;
}



void fn_002d24b4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_10;
  
  local_10 = param_4;
  fn_00159f34(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0xbc));
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  fn_002c4100(param_1);
  local_10 = 0;
  fn_00163988(DAT_00897808,&local_10,10);
  local_10 = 0;
  fn_00163988(DAT_0089780c,&local_10,10);
  return;
}



undefined4 * fn_002d2444(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_001f7e18();
  *puVar1 = &DAT_0081ffa0;
  fn_0028e434(puVar1[4],&DAT_007d2478);
  fn_0028e434(puVar1[5],&DAT_007d25a4);
  fn_0028e434(puVar1[3],&DAT_007d2928);
  fn_0028e434(puVar1[6],&DAT_007d2964);
  return puVar1;
}



undefined4 * fn_002d2398(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)fn_001f7350();
  *puVar1 = &DAT_0081ff8c;
  *(undefined1 *)(puVar1 + 0xc) = 1;
  iVar2 = fn_00145b00(0x10,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_0031157c();
  }
  puVar1[0xb] = uVar3;
  return puVar1;
}



void fn_002d2148(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0xc))(param_1);
  if ((iVar1 == 0) && (iVar1 = fn_0069ef00(param_1[1]), iVar1 != 0)) {
    (**(code **)(*param_1 + 0x10))(param_1);
    *(undefined1 *)(param_1 + 2) = 1;
  }
  return;
}



undefined4 * fn_002d2078(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = fn_00145b00(0x80,&DAT_00812c8c);
  if (iVar1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)fn_0068ab5c();
  *puVar2 = &DAT_0081fe48;
  puVar2[0x19] = param_1[3];
  puVar2[0x1a] = 0;
  puVar2[0x1b] = 0;
  puVar2[0x1c] = 0;
  puVar2[0x1d] = 0;
  puVar2[0x1e] = 0;
  if (param_1 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*param_1)(param_1);
    do {
      if (puVar3 == &DAT_00898c24) goto LAB_002d2120;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  param_1 = (undefined4 *)0x0;
LAB_002d2120:
  puVar2[0x1f] = param_1;
  return puVar2;
}



void fn_002d1e58(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  
  uVar5 = 0;
  do {
    if ((byte)(&DAT_007d0668)[uVar5 * 0xc] != 4) {
      if ((byte)(&DAT_007d0668)[uVar5 * 0xc] == param_2) {
        uVar3 = (&DAT_007d0660)[uVar5 * 3];
        if ((&DAT_007d0664)[uVar5 * 3] == 0) {
          uVar1 = *(undefined4 *)(param_1 + 0x6c);
          uVar4 = 1;
LAB_002d1ee4:
          fn_006889d8(uVar1,uVar3,uVar4);
        }
        else {
          iVar2 = fn_0068897c(*(undefined4 *)(param_1 + 0x70));
          *(undefined4 *)(iVar2 + 0xac) = 0xffffffff;
          *(undefined4 *)(iVar2 + 0xb0) = 0xffffffff;
        }
      }
      else {
        uVar3 = (&DAT_007d0660)[uVar5 * 3];
        if ((&DAT_007d0664)[uVar5 * 3] == 0) {
          uVar1 = *(undefined4 *)(param_1 + 0x6c);
          uVar4 = 0;
          goto LAB_002d1ee4;
        }
        iVar2 = fn_0068897c(*(undefined4 *)(param_1 + 0x70),uVar3,&DAT_007d0660 + uVar5 * 3);
        *(undefined4 *)(iVar2 + 0xac) = 0xff808080;
        *(undefined4 *)(iVar2 + 0xb0) = 0xff808080;
      }
    }
    uVar5 = uVar5 + 1;
    if (9 < uVar5) {
      *(undefined4 *)(*(int *)(param_1 + 0x78) + 0x10) = 0;
      return;
    }
  } while( true );
}


