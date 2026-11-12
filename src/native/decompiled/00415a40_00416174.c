#include "00415a40_00416174.h"



undefined4 fn_00416174(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  wchar16 *pwVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  puVar7 = *(undefined4 **)(param_1 + 0x18);
  if (puVar7 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar7)(puVar7);
    do {
      if (puVar2 == &DAT_00894a9c) goto LAB_004161c4;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar7 = (undefined4 *)0x0;
LAB_004161c4:
  *(undefined4 **)(param_1 + 0x70) = puVar7;
  *(undefined1 *)(param_1 + 0x65) = *(undefined1 *)(puVar7 + 2);
  *(undefined1 *)(param_1 + 100) = 0;
  if (*(int *)(param_1 + 0x84) != -1) {
    fn_002b1810(*(undefined4 *)(param_1 + 0x6c));
    *(undefined4 *)(param_1 + 0x84) = 0xffffffff;
  }
  uVar6 = *(undefined4 *)(DAT_00897804 + 8);
  iVar3 = fn_006b64bc(uVar6);
  if (iVar3 == 0) {
    fn_00301a9c(&local_40,&DAT_007ba154,0x1e);
    fn_0029432c(*(undefined4 *)(*(int *)(DAT_00897804 + 8) + 4),&local_40);
    uVar6 = fn_002b15d4(*(undefined4 *)(*(int *)(param_1 + 4) + 0x20),1,&local_40,0);
  }
  else {
    uVar6 = fn_006b621c(uVar6);
    local_40 = 1;
    uVar6 = fn_002b1a60(*(undefined4 *)(*(int *)(param_1 + 4) + 0x20),0x1b,uVar6,0);
  }
  *(undefined4 *)(param_1 + 0x84) = uVar6;
  if (*(char *)(param_1 + 0x65) == '\x01') {
    uVar6 = fn_002b1588(*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x84));
    fn_0069e328(uVar6,(char *)&DAT_004164f0);
  }
  cVar1 = *(char *)(param_1 + 0x65);
  if (cVar1 == '\0') {
    pwVar4 = L"rom:/data/Layout/common/competition_result/win.arc";
  }
  else if (cVar1 == '\x01') {
    pwVar4 = L"rom:/data/Layout/common/competition_result/draw.arc";
  }
  else if (cVar1 == '\x02') {
    pwVar4 = L"rom:/data/Layout/common/competition_result/lose.arc";
  }
  else {
    pwVar4 = L"";
  }
  local_40 = 1;
  uVar6 = fn_001481c8(*(undefined4 *)(param_1 + 0x68),pwVar4,&DAT_00416518,1);
  *(undefined4 *)(param_1 + 0x78) = uVar6;
  local_40 = 0;
  local_3c = 1;
  local_38 = 0;
  uVar6 = fn_001480d0(*(undefined4 *)(param_1 + 0x68),uVar6);
  *(undefined4 *)(param_1 + 0x7c) = uVar6;
  uVar6 = fn_0010887c(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x78));
  *(undefined4 *)(param_1 + 0x80) = uVar6;
  iVar3 = fn_00178f9c(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x7c));
  *(byte *)(*(int *)(iVar3 + 0x10) + 0x44) = *(byte *)(*(int *)(iVar3 + 0x10) + 0x44) & 0xfe | 1;
  iVar3 = fn_00178f9c(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x7c));
  cVar1 = *(char *)(param_1 + 0x65);
  if (cVar1 == '\0') {
    pcVar5 = (char *)&DAT_00416698;
  }
  else if (cVar1 == '\x01' || cVar1 == '\x02') {
    pcVar5 = "chara_draw";
  }
  else {
    pcVar5 = (char *)0x0;
  }
  iVar3 = (**(code **)(**(int **)(iVar3 + 0x10) + 0x2c))(*(int **)(iVar3 + 0x10),pcVar5,1);
  *(int *)(param_1 + 0x74) = iVar3;
  uVar8 = 0;
  *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0x40000000;
  *(undefined4 *)(param_1 + 0x94) = 0;
  uVar6 = fn_00176d68(*(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x24) + 8));
  local_40 = 0;
  fn_006dcca4(uVar6,&local_3c,0);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x90);
  *(float *)(param_1 + 0xa0) = *(float *)(param_1 + 0x94) - 30.0;
  uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x40);
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x3c);
  *(undefined4 *)(param_1 + 0xa8) = uVar6;
  uVar6 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x24) + 8);
  iVar3 = fn_00176d68(uVar6);
  *(undefined4 *)(iVar3 + 0x58) = uVar8;
  *(undefined4 *)(iVar3 + 0x68) = uVar8;
  *(undefined4 *)(iVar3 + 0x78) = uVar8;
  *(uint *)(iVar3 + 0x88) = *(uint *)(iVar3 + 0x88) | 0x800;
  uVar6 = fn_00176d68(uVar6);
  local_38 = 0xc1c80000;
  local_40 = uVar8;
  local_3c = uVar8;
  fn_005456f4(uVar6,&local_40);
  return 1;
}



void fn_0041609c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if (*(int *)(param_1 + 0x80) != -1) {
    fn_00159f34(*(undefined4 *)(param_1 + 0x68));
  }
  if (*(int *)(param_1 + 0x7c) != -1) {
    fn_0016a43c(*(undefined4 *)(param_1 + 0x68));
  }
  if (*(int *)(param_1 + 0x78) != -1) {
                    /* WARNING: Subroutine does not return */
    fn_001482f4(*(undefined4 *)(param_1 + 0x68));
  }
  if (*(int *)(param_1 + 0x84) != -1) {
    fn_002b1810(*(undefined4 *)(param_1 + 0x6c));
    *(undefined4 *)(param_1 + 0x84) = 0xffffffff;
  }
  uVar2 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x24) + 8);
  iVar1 = fn_00176d68(uVar2);
  uVar3 = 0;
  *(undefined4 *)(iVar1 + 0x58) = 0;
  *(undefined4 *)(iVar1 + 0x68) = 0;
  *(undefined4 *)(iVar1 + 0x78) = 0;
  *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x800;
  uVar2 = fn_00176d68(uVar2);
  local_18 = 0xc1c80000;
  local_20 = uVar3;
  local_1c = uVar3;
  fn_005456f4(uVar2,&local_20);
  *(undefined1 *)(*(int *)(param_1 + 0x70) + 9) = 0;
  return;
}



void fn_00415f88(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00839010;
  if ((int *)param_1[0x45] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x45] + 0x18))();
    if ((int *)param_1[0x45] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x45] + 4))();
      param_1[0x45] = 0;
    }
  }
  if ((int *)param_1[0x46] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x46] + 0x18))();
    if ((int *)param_1[0x46] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x46] + 4))();
      param_1[0x46] = 0;
    }
  }
  if (param_1[0x47] != 0) {
    fn_002454a4(param_1);
    if ((int *)param_1[0x47] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x47] + 4))();
      param_1[0x47] = 0;
    }
  }
  fn_00380e04(param_1);
  if ((int *)param_1[0x47] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x47] + 4))();
  }
  if ((int *)param_1[0x46] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x46] + 4))();
  }
  if ((int *)param_1[0x45] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x45] + 4))();
  }
  fn_00380f78(param_1);
  return;
}



undefined4 * fn_00415e9c(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)fn_00380ef8();
  puVar4 = (undefined4 *)0x0;
  *puVar1 = &PTR_FUN_00839010;
  puVar1[0x43] = 0;
  puVar1[0x44] = 0;
  puVar1[0x45] = 0;
  puVar1[0x46] = 0;
  puVar1[0x47] = 0;
  puVar1[0x49] = 1;
  puVar1[0x4a] = 0;
  puVar1[0x4b] = 0;
  puVar1[0x4c] = 0;
  puVar2 = (undefined4 *)fn_001f74d8(puVar1,0x2d);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_008951dc) goto LAB_00415f18;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_00415f18:
  puVar1[0x43] = puVar2;
  puVar2 = (undefined4 *)fn_001f74ec(puVar1,0x50);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_008944b4) {
        puVar4 = puVar2;
        break;
      }
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar1[0x44] = puVar4;
  return puVar1;
}



void fn_00415dc4(int *param_1,int param_2,undefined4 param_3)

{
  fn_002c265c();
  if (param_2 == 1) {
    (**(code **)(*param_1 + 0x110))(param_1,2,param_3,0,1);
    return;
  }
  if (param_2 == 2) {
    (**(code **)(*param_1 + 0x110))(param_1,4,param_3,0,1);
    return;
  }
  if (param_2 == 4) {
    if ((char)param_1[0x1f] == '\0') {
      (**(code **)(*param_1 + 0x110))(param_1,6,param_3,0,1);
      return;
    }
  }
  else if (param_2 != 6) {
    return;
  }
  (**(code **)(*param_1 + 0x110))(param_1,1,param_3,0,1);
  return;
}



void fn_00415c30(int *param_1,int param_2,undefined4 param_3)

{
  fn_002c2648();
  if (param_2 == 1) {
    if ((char)param_1[0x1f] == '\0') {
      (**(code **)(*param_1 + 0x110))(param_1,6,param_3,0,1);
      return;
    }
  }
  else {
    if (param_2 == 2) {
      (**(code **)(*param_1 + 0x110))(param_1,1,param_3,0,1);
      return;
    }
    if (param_2 == 4) {
      (**(code **)(*param_1 + 0x110))(param_1,2,param_3,0,1);
      return;
    }
    if (param_2 != 6) {
      return;
    }
  }
  (**(code **)(*param_1 + 0x110))(param_1,4,param_3,0,1);
  return;
}



void fn_00415a40(int *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  fn_002c263c();
  if (param_2 == 1 || param_2 == 2) {
    cVar1 = (char)param_1[0x1f];
    bVar3 = cVar1 == '\0';
    if (bVar3) {
      cVar1 = *(char *)((int)param_1 + 0xe5);
    }
    if (bVar3 && cVar1 == '\0') {
LAB_00415ae4:
      param_1[0x4a] = param_3;
      param_1[0x49] = param_2;
      (**(code **)(*param_1 + 0x110))(param_1,7,0,0,1);
      return;
    }
    (**(code **)(*param_1 + 0x110))(param_1,param_2,0,0,1);
  }
  else if (param_2 == 4) {
    iVar2 = fn_00430f14(param_1,param_3,1);
    if (iVar2 == 0) {
      if ((char)param_1[0x1f] != '\0') {
        fn_0042fea4(param_1,param_3);
        fn_0068ab44(param_1,0x100094f);
        return;
      }
      cVar1 = (char)param_1[0x48];
      if (cVar1 != '\0') {
        if (cVar1 == '\x01') goto LAB_00415ae4;
        if (cVar1 != '\x02' && cVar1 != '\x03') {
          return;
        }
      }
      param_1[0x4b] = param_3;
      (**(code **)(*param_1 + 0x110))(param_1,7,1,0,1);
      return;
    }
  }
  else if (param_2 == 7) {
    if (param_3 != 0) {
      (**(code **)(*param_1 + 0x110))(param_1,4,param_1[0x4b],0);
      fn_0042fea4(param_1,param_1[0x4b]);
      return;
    }
    cVar1 = (char)param_1[0x48];
    if (cVar1 != '\0') {
      if (cVar1 == '\x01') {
        if (param_1[0x49] == 4) {
          (**(code **)(*param_1 + 0x110))(param_1,4,param_1[0x4a],0);
          fn_0042fea4(param_1,param_1[0x4a]);
          return;
        }
        (**(code **)(*param_1 + 0x110))(param_1,param_1[0x49],0,0,1);
        return;
      }
      if (cVar1 != '\x02' && cVar1 != '\x03') {
        return;
      }
    }
    (**(code **)(*param_1 + 0x110))(param_1,param_1[0x49],0,0,1);
    return;
  }
  return;
}


