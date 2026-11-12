#include "006c410c_006c45f8.h"



undefined * fn_006c45f8(char *param_1)

{
  undefined *puVar1;
  
  if ((*param_1 == '\x06') && (param_1[0x10] != '\0')) {
    puVar1 = &DAT_006c461c;
  }
  else {
    puVar1 = &DAT_006c4620;
  }
  return puVar1;
}



char * fn_006c4568(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  if (cVar1 == '\0') {
LAB_006c45b8:
    return "second30";
  }
  if (cVar1 != '\x01') {
    if (cVar1 == '\x02') {
LAB_006c45c0:
      return "limitless";
    }
    if (cVar1 == '\x03') goto LAB_006c45b8;
    if (cVar1 != '\x04' && cVar1 != '\x05') {
      cVar1 = param_1[7];
      if (cVar1 == '\0') goto LAB_006c45c0;
      if (cVar1 != '\x01') {
        if (cVar1 != '\x02') {
          return "";
        }
        goto LAB_006c45b8;
      }
    }
  }
  return "second15";
}



char * fn_006c44c0(undefined1 *param_1)

{
  switch(*param_1) {
  case 0:
    return "standardrules";
  case 1:
    return "sqexrules";
  case 2:
    return "rankingrules";
  case 3:
    return "misiranuhitorules";
  default:
    return "";
  case 6:
    return "customrules";
  }
}



char * fn_006c4478(char *param_1)

{
  char *pcVar1;
  
  if ((*param_1 != '\x06') || (param_1[0xc] == '\0')) {
    return "free";
  }
  if (param_1[0xc] == '\x01') {
    pcVar1 = "seigennari";
  }
  else {
    pcVar1 = "";
  }
  return pcVar1;
}



char * fn_006c4410(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  if (cVar1 == '\0') {
LAB_006c445c:
    return "free";
  }
  if (cVar1 != '\x01' && cVar1 != '\x02') {
    if (cVar1 == '\x03') goto LAB_006c445c;
    if (cVar1 != '\x04') {
      if (cVar1 != '\x05') {
        param_1 = (char *)(uint)(byte)param_1[2];
      }
      if (cVar1 == '\x05' || param_1 == (char *)0x0) goto LAB_006c445c;
      if (param_1 != &DAT_00000001) {
        return "";
      }
    }
  }
  return "ainomi";
}



char * fn_006c4374(byte *param_1)

{
  byte bVar1;
  char *pcVar2;
  
  bVar1 = *param_1;
  if (((bVar1 < 2) || (bVar1 == 2 || bVar1 == 3)) || (bVar1 == 4 || bVar1 == 5)) {
LAB_006c43d0:
    return "samesystemok";
  }
  bVar1 = param_1[5];
  if (bVar1 == 0) {
    pcVar2 = "allok";
  }
  else {
    if (bVar1 == 1) goto LAB_006c43d0;
    if (bVar1 == 2) {
      pcVar2 = "samesystemkinsi";
    }
    else if (bVar1 == 3) {
      pcVar2 = "keitousitei";
    }
    else {
      pcVar2 = "";
    }
  }
  return pcVar2;
}



char * fn_006c4304(byte *param_1)

{
  byte bVar1;
  
  bVar1 = *param_1;
  if ((bVar1 < 2) || ((bVar1 == 2 || bVar1 == 3) || bVar1 == 4)) {
LAB_006c434c:
    return "speed_twice";
  }
  if (bVar1 != 5) {
    if (param_1[8] == 0) goto LAB_006c434c;
    if (param_1[8] != 1) {
      return "";
    }
  }
  return "speed_default";
}



char * fn_006c4288(byte *param_1)

{
  byte bVar1;
  
  bVar1 = *param_1;
  if ((bVar1 < 2) || (bVar1 == 2 || bVar1 == 3)) {
LAB_006c42d4:
    return "round10";
  }
  if (bVar1 != 4 && bVar1 != 5) {
    bVar1 = param_1[1];
    if (bVar1 == 0) {
      return "limitless";
    }
    if (bVar1 != 1) {
      if (bVar1 != 2) {
        return "";
      }
      goto LAB_006c42d4;
    }
  }
  return "round5";
}



undefined * fn_006c4258(char *param_1)

{
  undefined *puVar1;
  
  if ((*param_1 == '\x06') && (param_1[9] != '\0')) {
    puVar1 = &DAT_006c427c;
  }
  else {
    puVar1 = &DAT_006c4280;
  }
  return puVar1;
}



byte fn_006c4224(byte *param_1)

{
  byte bVar1;
  
  bVar1 = *param_1;
  if (((bVar1 < 2) || (bVar1 == 2 || bVar1 == 3)) || (bVar1 == 4 || bVar1 == 5)) {
    bVar1 = 0;
  }
  else {
    bVar1 = param_1[0x13];
  }
  return bVar1;
}



byte fn_006c41e4(byte *param_1)

{
  byte bVar1;
  
  bVar1 = *param_1;
  if (bVar1 < 3) {
    return 2;
  }
  if (bVar1 != 3) {
    if (bVar1 == 4) {
      return 2;
    }
    if (bVar1 != 5) {
      return param_1[3];
    }
  }
  return 1;
}



byte fn_006c41b0(byte *param_1)

{
  byte bVar1;
  
  bVar1 = *param_1;
  if (((bVar1 < 2) || (bVar1 == 2 || bVar1 == 3)) || (bVar1 == 4 || bVar1 == 5)) {
    bVar1 = 0;
  }
  else {
    bVar1 = param_1[4];
  }
  return bVar1;
}



byte fn_006c417c(byte *param_1)

{
  byte bVar1;
  
  bVar1 = *param_1;
  if (((bVar1 < 2) || (bVar1 == 2 || bVar1 == 3)) || (bVar1 == 4 || bVar1 == 5)) {
    bVar1 = 0;
  }
  else {
    bVar1 = param_1[6];
  }
  return bVar1;
}



char fn_006c4168(char *param_1)

{
  char cVar1;
  
  if (*param_1 == '\x06') {
    cVar1 = param_1[0x10];
  }
  else {
    cVar1 = '\0';
  }
  return cVar1;
}



char fn_006c4120(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  if (cVar1 == '\0') {
    return '\x02';
  }
  if (cVar1 != '\x01') {
    if (cVar1 == '\x02') {
      return '\0';
    }
    if (cVar1 == '\x03') {
      return '\x02';
    }
    if (cVar1 != '\x04' && cVar1 != '\x05') {
      return param_1[7];
    }
  }
  return '\x01';
}



char fn_006c410c(char *param_1)

{
  char cVar1;
  
  if (*param_1 == '\x06') {
    cVar1 = param_1[0xc];
  }
  else {
    cVar1 = '\0';
  }
  return cVar1;
}


