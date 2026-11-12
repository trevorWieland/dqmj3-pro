#include "0060856c_00608f1c.h"



void fn_00608f1c(void)

{
  return;
}



void fn_00608ecc(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = param_1 + uVar2 * 0x10;
    if (*(int *)(iVar1 + 0xc) != 0) {
      iVar1 = *(int *)(iVar1 + 4);
      *(float *)(iVar1 + 0x34) = *(float *)(iVar1 + 0x34) + 80.0;
      *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xef | 0x10;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 2);
  return;
}



bool fn_00608ea8(int param_1,int param_2,int param_3)

{
  return *(float *)(*(int *)(param_1 + param_2 * 0x10 + 0xc) + 4) == *(float *)(param_3 + 4);
}



undefined4 fn_00608d34(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 local_20;
  
  uVar4 = 0x10;
  if (param_1 == 0) {
    uVar4 = 0x14;
  }
  iVar5 = 0;
  local_20 = 0;
  iVar1 = fn_0061be08(uVar4);
  if (iVar1 == 0) {
    uVar2 = 0x18;
  }
  else {
    uVar2 = 0x14;
  }
  uVar3 = uVar4;
  if (uVar4 < uVar2) {
    do {
      iVar1 = fn_00174828(DAT_008977e4);
      iVar1 = iVar1 + uVar3 * 0x418;
      if (0 < *(short *)(iVar1 + -0x4080)) {
        *(undefined1 *)((int)&local_20 + iVar5) = *(undefined1 *)(iVar1 + -0x4027);
        iVar5 = (int)(char)((char)iVar5 + '\x01');
      }
      uVar3 = (uint)(char)((char)uVar3 + '\x01');
      iVar1 = fn_0061be08(uVar4);
      if (iVar1 == 0) {
        iVar1 = 0x18;
      }
      else {
        iVar1 = 0x14;
      }
    } while ((int)uVar3 < iVar1);
    if (iVar5 == 1) {
      switch((undefined1)local_20) {
      case 0:
      case 1:
      case 2:
        return 3;
      case 3:
        return 6;
      case 4:
        return 7;
      }
    }
    else if (iVar5 != 2) {
      if (iVar5 == 3) {
        return 1;
      }
      return 0;
    }
    switch((undefined1)local_20) {
    case 0:
    case 1:
      if (((unsigned int)(local_20) >> 8) & 0xff == 3) {
        return 4;
      }
    case 2:
      return 2;
    case 3:
      if (((unsigned int)(local_20) >> 8) & 0xff < 2) {
        return 5;
      }
    }
  }
  return 0;
}



/* WARNING: Type propagation algorithm not settling */

char * fn_0060856c(undefined4 param_1,int param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  
  iVar4 = fn_0061be08(param_2);
  iVar5 = fn_0061be08(param_2);
  if (iVar5 == 0) {
    cVar3 = '\x14';
  }
  else {
    cVar3 = '\x10';
  }
  cVar2 = (char)param_2;
  cVar1 = cVar2 - cVar3;
  iVar5 = fn_00174828(DAT_008977e4);
  iVar5 = iVar5 + param_2 * 0x418;
  switch(param_1) {
  case 0:
    if (cVar2 == cVar3) {
      cVar3 = *(char *)(iVar5 + -0x4027);
      if (cVar3 == '\0') {
        if (iVar4 == 0) {
          pcVar6 = "115_ENEMYS4_00";
        }
        else {
          pcVar6 = "101_ALLYS4_00";
        }
        return pcVar6;
      }
      if (cVar3 == '\x01') {
        if (iVar4 == 0) {
          pcVar6 = "115_ENEMYN4_00";
        }
        else {
          pcVar6 = "101_ALLYN4_00";
        }
        return pcVar6;
      }
      if (cVar3 == '\x02') {
        if (iVar4 == 0) {
          pcVar6 = "115_ENEMYM4_00";
        }
        else {
          pcVar6 = "101_ALLYM4_00";
        }
        return pcVar6;
      }
    }
    else if (cVar1 == '\x01') {
      cVar3 = *(char *)(iVar5 + -0x4027);
      if (cVar3 == '\0') {
        if (iVar4 == 0) {
          pcVar6 = "116_ENEMYS4_01";
        }
        else {
          pcVar6 = "102_ALLYS4_01";
        }
        return pcVar6;
      }
      if (cVar3 == '\x01') {
        if (iVar4 == 0) {
          pcVar6 = "116_ENEMYN4_01";
        }
        else {
          pcVar6 = "102_ALLYN4_01";
        }
        return pcVar6;
      }
      if (cVar3 == '\x02') {
        if (iVar4 == 0) {
          pcVar6 = "116_ENEMYM4_01";
        }
        else {
          pcVar6 = "102_ALLYM4_01";
        }
        return pcVar6;
      }
    }
    else if (cVar1 == '\x02') {
      cVar3 = *(char *)(iVar5 + -0x4027);
      if (cVar3 == '\0') {
        if (iVar4 == 0) {
          pcVar6 = "117_ENEMYS4_02";
        }
        else {
          pcVar6 = "103_ALLYS4_02";
        }
        return pcVar6;
      }
      if (cVar3 == '\x01') {
        if (iVar4 == 0) {
          pcVar6 = "117_ENEMYN4_02";
        }
        else {
          pcVar6 = "103_ALLYN4_02";
        }
        return pcVar6;
      }
      if (cVar3 == '\x02') {
        if (iVar4 == 0) {
          pcVar6 = "117_ENEMYM4_02";
        }
        else {
          pcVar6 = "103_ALLYM4_02";
        }
        return pcVar6;
      }
    }
    else if (cVar1 == '\x03') {
      cVar3 = *(char *)(iVar5 + -0x4027);
      if (cVar3 == '\0') {
        if (iVar4 == 0) {
          pcVar6 = "118_ENEMYS4_03";
        }
        else {
          pcVar6 = "104_ALLYS4_03";
        }
        return pcVar6;
      }
      if (cVar3 == '\x01') {
        if (iVar4 == 0) {
          pcVar6 = "118_ENEMYN4_03";
        }
        else {
          pcVar6 = "104_ALLYN4_03";
        }
        return pcVar6;
      }
      if (cVar3 == '\x02') {
        if (iVar4 == 0) {
          pcVar6 = "118_ENEMYM4_03";
        }
        else {
          pcVar6 = "104_ALLYM4_03";
        }
        return pcVar6;
      }
    }
    break;
  case 1:
    if (cVar2 == cVar3) {
      cVar3 = *(char *)(iVar5 + -0x4027);
      goto joined_r0x00608958;
    }
    if (cVar1 != '\x01') {
      if (cVar1 != '\x02') {
        return (char *)0x0;
      }
      cVar3 = *(char *)(iVar5 + -0x4027);
      goto joined_r0x006089c0;
    }
    cVar3 = *(char *)(iVar5 + -0x4027);
    goto joined_r0x00608b28;
  case 2:
    if (cVar2 != cVar3) {
      if (cVar1 != '\x01') {
        return (char *)0x0;
      }
      cVar3 = *(char *)(iVar5 + -0x4027);
joined_r0x006089c0:
      if (cVar3 == '\0') {
        if (iVar4 == 0) {
          return "122_ENEMYS3_02";
        }
        return "107_ALLYS3_02";
      }
      if (cVar3 == '\x01') {
        if (iVar4 == 0) {
          return "122_ENEMYN3_02";
        }
        return "107_ALLYN3_02";
      }
      if (cVar3 != '\x02') {
        return (char *)0x0;
      }
      if (iVar4 == 0) {
        return "122_ENEMYM3_02";
      }
      return "107_ALLYM3_02";
    }
    cVar3 = *(char *)(iVar5 + -0x4027);
joined_r0x00608958:
    if (cVar3 == '\0') {
      if (iVar4 == 0) {
        return "120_ENEMYS3_00";
      }
      return "105_ALLYS3_00";
    }
    if (cVar3 == '\x01') {
      if (iVar4 == 0) {
        return "120_ENEMYN3_00";
      }
      return "105_ALLYN3_00";
    }
    if (cVar3 == '\x02') {
      if (iVar4 == 0) {
        return "120_ENEMYM3_00";
      }
      return "105_ALLYM3_00";
    }
    break;
  case 3:
    cVar3 = *(char *)(iVar5 + -0x4027);
joined_r0x00608b28:
    if (cVar3 == '\0') {
      if (iVar4 == 0) {
        return "121_ENEMYS3_01";
      }
      return "106_ALLYS3_01";
    }
    if (cVar3 == '\x01') {
      if (iVar4 == 0) {
        return "121_ENEMYN3_01";
      }
      return "106_ALLYN3_01";
    }
    if (cVar3 == '\x02') {
      if (iVar4 == 0) {
        return "121_ENEMYM3_01";
      }
      return "106_ALLYM3_01";
    }
    break;
  case 4:
    if (cVar2 == cVar3) {
      if (iVar4 == 0) {
        pcVar6 = "124_ENEMYSG_00";
      }
      else {
        pcVar6 = "110_ALLYSG_00";
      }
      return pcVar6;
    }
    if (cVar1 == '\x01') goto joined_r0x00608bf0;
    break;
  case 5:
    if (cVar2 == cVar3) goto joined_r0x00608bf0;
    if (cVar1 == '\x01') {
      if (iVar4 == 0) {
        pcVar6 = "126_ENEMYSG_02";
      }
      else {
        pcVar6 = "112_ALLYSG_02";
      }
      return pcVar6;
    }
    break;
  case 6:
joined_r0x00608bf0:
    if (iVar4 == 0) {
      return "125_ENEMYSG_01";
    }
    return "111_ALLYSG_01";
  case 7:
    if (iVar4 == 0) {
      pcVar6 = "127_ENEMYT1_00";
    }
    else {
      pcVar6 = "113_ALLYT1_00";
    }
    return pcVar6;
  }
  return (char *)0x0;
}


