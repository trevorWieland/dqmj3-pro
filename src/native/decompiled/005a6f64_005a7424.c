#include "005a6f64_005a7424.h"



undefined4 * fn_005a7424(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar1 = fn_00145b00(0x2c,&DAT_00812c8c);
  if (iVar1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)fn_0028e264(iVar1,param_1);
  *puVar2 = &DAT_0084721c;
  *(undefined1 *)(puVar2 + 2) = 1;
  *(undefined1 *)((int)puVar2 + 9) = 0;
  *(undefined1 *)((int)puVar2 + 10) = 0;
  iVar1 = 0;
  do {
    puVar3 = (undefined4 *)fn_0013d4ec();
    iVar4 = iVar1 + 1;
    puVar2[iVar1 + 3] = *puVar3;
    iVar1 = iVar4;
  } while (iVar4 < 8);
  return puVar2;
}



void fn_005a740c(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_2[4];
  uVar5 = param_2[5];
  uVar6 = param_2[6];
  uVar7 = param_2[7];
  *(undefined4 *)(param_1 + 0xc) = *param_2;
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  *(undefined4 *)(param_1 + 0x1c) = uVar4;
  *(undefined4 *)(param_1 + 0x20) = uVar5;
  *(undefined4 *)(param_1 + 0x24) = uVar6;
  *(undefined4 *)(param_1 + 0x28) = uVar7;
  *(undefined1 *)(param_1 + 10) = 1;
  return;
}



undefined4 * fn_005a72bc(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
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
  
  puVar1 = (undefined4 *)fn_005cdeb8();
  *puVar1 = &DAT_0084720c;
  puVar1[8] = 0;
  puVar1[9] = 0;
  iVar5 = 0;
  uVar6 = *(undefined4 *)(puVar1[4] + 0x10);
  do {
    iVar3 = 0;
    do {
      local_60 = 0;
      local_54 = 0;
      local_5c = 0;
      local_58 = 0;
      local_50 = 0;
      local_4c = 0;
      local_40 = 0;
      local_48 = 0;
      local_44 = 0;
      local_3c = 0;
      local_38 = 0;
      local_2c = 0;
      local_34 = 0;
      local_30 = 0;
      local_28 = 0;
      local_24 = 0;
      fn_00102908(&local_60,0x40,(&PTR_s_appeal_plus_02d__02d_0088ff0c)[iVar5],
                   *(undefined1 *)((int)puVar1 + 5),iVar3);
      uVar2 = fn_00688920(uVar6,&local_60);
      iVar4 = (int)(char)((char)iVar3 + '\x01');
      puVar1[iVar5 * 6 + iVar3 + 10] = uVar2;
      iVar3 = iVar4;
    } while (iVar4 < 6);
    iVar5 = (int)(char)((char)iVar5 + '\x01');
  } while (iVar5 < 4);
  uVar6 = fn_001828f0(puVar1[4],
                       *(undefined4 *)(&DAT_0088fefc + (uint)*(byte *)((int)puVar1 + 5) * 4));
  puVar1[0x22] = uVar6;
  uVar6 = fn_001828f0(puVar1[4],
                       *(undefined4 *)(&DAT_0088ff04 + (uint)*(byte *)((int)puVar1 + 5) * 4));
  puVar1[0x23] = uVar6;
  fn_005a715c(puVar1,puVar1[2],1);
  fn_005a715c(puVar1,puVar1[2],2);
  return puVar1;
}



void fn_005a71dc(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  cVar1 = *(char *)(param_1 + 4);
  if (cVar1 == '\0') {
    return;
  }
  uVar2 = 0;
  if (cVar1 == '\x01') {
    if (*(uint *)(param_1 + 0xc) < 0x1e) {
      iVar3 = *(int *)(param_1 + 8);
      iVar4 = *(int *)(param_1 + 0x20);
      iVar5 = *(uint *)(param_1 + 0xc) + 1;
      if (iVar4 + iVar3 < 1) {
        iVar4 = -iVar3;
      }
      *(int *)(param_1 + 0xc) = iVar5;
      iVar4 = (int)((longlong)(iVar4 * 100) * -0x77777777 + ((ulonglong)(uint)(iVar4 * 100) << 0x20)
                   >> 0x20);
      fn_005a715c(param_1,(iVar5 * ((iVar4 >> 4) - (iVar4 >> 0x1f)) + iVar3 * 100) / 100,1);
      return;
    }
    fn_005a715c(param_1,*(undefined4 *)(param_1 + 0x24),1);
    fn_005a715c(param_1,*(undefined4 *)(param_1 + 0x24),2);
    uVar2 = 2;
  }
  else {
    if (cVar1 != '\x02') {
      return;
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  *(undefined1 *)(param_1 + 4) = uVar2;
  return;
}



void fn_005a715c(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 < 0) {
    param_2 = -param_2;
  }
  uVar1 = fn_001911c4(param_1,param_2);
  iVar4 = 0;
  do {
    iVar3 = param_1 + param_3 * 0x18 + iVar4 * 4;
    iVar2 = *(int *)(iVar3 + 0x28);
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe | 1;
    fn_0018cbc4(param_1,*(undefined4 *)(iVar3 + 0x28),1,uVar1 % 10);
    iVar4 = iVar4 + 1;
    uVar1 = uVar1 / 10;
  } while (iVar4 < 6);
  return;
}



void fn_005a70b4(int param_1,int param_2)

{
  int iVar1;
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
  
  local_50 = 0;
  local_44 = 0;
  local_4c = 0;
  local_48 = 0;
  local_40 = 0;
  local_3c = 0;
  local_30 = 0;
  local_38 = 0;
  local_34 = 0;
  local_2c = 0;
  local_28 = 0;
  local_1c = 0;
  local_24 = 0;
  local_20 = 0;
  local_18 = 0;
  local_14 = 0;
  fn_00192f64(&local_50,0x40,1,(int)*(char *)(param_1 + 0x1c),0);
  iVar1 = param_1 + param_2 * 4;
  fn_0019ba04(*(undefined4 *)(iVar1 + 0x58),*(undefined4 *)(param_1 + 0x18),&local_50,0,0);
  fn_0019ba04(*(undefined4 *)(iVar1 + 0x40),*(undefined4 *)(param_1 + 0x18),&local_50,0,0);
  return;
}



void fn_005a7090(int param_1)

{
  *(byte *)(*(int *)(param_1 + 0x88) + 0x44) = *(byte *)(*(int *)(param_1 + 0x88) + 0x44) & 0xfe;
  *(byte *)(*(int *)(param_1 + 0x8c) + 0x44) = *(byte *)(*(int *)(param_1 + 0x8c) + 0x44) & 0xfe;
  return;
}



void fn_005a6f64(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
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
  undefined4 local_20;
  undefined4 local_1c;
  
  *(undefined1 *)(param_1 + 0x1c) = 1;
  local_98 = 0;
  local_8c = 0;
  local_94 = 0;
  local_90 = 0;
  local_88 = 0;
  local_84 = 0;
  local_78 = 0;
  local_80 = 0;
  local_7c = 0;
  local_74 = 0;
  local_70 = 0;
  local_64 = 0;
  local_6c = 0;
  local_68 = 0;
  local_60 = 0;
  local_5c = 0;
  fn_00192f64(&local_98,0x40,1,(int)*(char *)(param_1 + 0x1c),0);
  local_58 = 0;
  local_50 = 0;
  local_54 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_3c = 0;
  local_40 = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_28 = 0;
  local_2c = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  fn_00192f64(&local_58,0x40,0,(int)*(char *)(param_1 + 0x1c),0);
  cVar3 = '\0';
  do {
    iVar1 = 0;
    do {
      iVar2 = param_1 + iVar1 * 4;
      fn_0019ba04(*(undefined4 *)(iVar2 + 0x28),*(undefined4 *)(param_1 + 0x18),&local_58,0,0);
      fn_0019ba04(*(undefined4 *)(iVar2 + 0x40),*(undefined4 *)(param_1 + 0x18),&local_98,0,0);
      iVar1 = (int)(char)((char)iVar1 + '\x01');
    } while (iVar1 < 6);
    cVar3 = cVar3 + '\x01';
  } while (cVar3 < '\x02');
  return;
}


