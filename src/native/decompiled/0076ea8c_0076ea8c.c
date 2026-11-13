#include "0076ea8c_0076ea8c.h"



void fn_0076ea8c(undefined4 *param_1,int param_2,int *param_3,undefined4 *param_4)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  byte *unaff_r9;
  char *pcVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  byte *pbVar11;
  byte *pbVar12;
  bool bVar13;
  
  *param_1 = *(undefined4 *)(param_2 + 0x10);
  pbVar5 = *(byte **)(param_2 + 0x10);
  pbVar9 = (byte *)*param_3;
  pbVar4 = *(byte **)(pbVar5 + 8);
  bVar13 = pbVar9 != pbVar4;
  if (!bVar13) {
    pbVar4 = (byte *)*param_4;
  }
  if ((bVar13 || pbVar4 != pbVar5) || (*(int *)(param_2 + 0x14) == 0)) {
    if (pbVar9 != (byte *)*param_4) {
      do {
        iVar10 = *(int *)(pbVar9 + 0xc);
        if (iVar10 == 0) {
          iVar6 = *(int *)(pbVar9 + 4);
          iVar10 = iVar6;
          if (pbVar9 == *(byte **)(iVar6 + 0xc)) {
            do {
              *param_3 = iVar10;
              iVar6 = *(int *)(iVar10 + 4);
              bVar13 = iVar10 == *(int *)(iVar6 + 0xc);
              iVar10 = iVar6;
            } while (bVar13);
          }
          if (*(int *)(*param_3 + 0xc) != iVar6) {
            *param_3 = iVar6;
          }
        }
        else {
          *param_3 = iVar10;
          while (iVar10 = *(int *)(iVar10 + 8), iVar10 != 0) {
            *param_3 = iVar10;
          }
        }
        pbVar4 = *(byte **)(param_2 + 0x10);
        if (pbVar9 != pbVar4) {
          pbVar5 = *(byte **)(pbVar9 + 0xc);
          if (*(byte **)(pbVar9 + 0xc) == (byte *)0x0) {
            pbVar5 = *(byte **)(pbVar9 + 4);
            pbVar4 = pbVar9;
            if (pbVar9 == *(byte **)(pbVar5 + 0xc)) {
              do {
                pbVar4 = pbVar5;
                pbVar5 = *(byte **)(pbVar4 + 4);
              } while (pbVar4 == *(byte **)(pbVar5 + 0xc));
            }
            if (*(byte **)(pbVar4 + 0xc) != pbVar5) {
              pbVar4 = pbVar5;
            }
          }
          else {
            do {
              pbVar4 = pbVar5;
              pbVar5 = *(byte **)(pbVar4 + 8);
            } while (*(byte **)(pbVar4 + 8) != (byte *)0x0);
          }
          pbVar12 = *(byte **)(pbVar9 + 8);
          pbVar11 = *(byte **)(pbVar9 + 0xc);
          pbVar5 = pbVar9;
          if (pbVar12 == (byte *)0x0) {
            if (pbVar11 != (byte *)0x0) goto LAB_0076ec48;
            pbVar11 = *(byte **)(pbVar9 + 4);
            if (*(byte **)(param_2 + 0x10) == pbVar11) {
              *(byte **)(*(byte **)(param_2 + 0x10) + 0xc) = pbVar11;
              *(byte **)(*(int *)(param_2 + 0x10) + 8) = pbVar11;
              *(undefined4 *)(*(int *)(param_2 + 0x10) + 4) = 0;
            }
            else if (*(byte **)(pbVar11 + 8) == pbVar9) {
              pbVar11[8] = 0;
              pbVar11[9] = 0;
              pbVar11[10] = 0;
              pbVar11[0xb] = 0;
              unaff_r9 = *(byte **)(*(int *)(param_2 + 0x10) + 8);
              if (unaff_r9 == pbVar9) {
                *(byte **)(*(int *)(param_2 + 0x10) + 8) = pbVar11;
              }
            }
            else {
              pbVar11[0xc] = 0;
              pbVar11[0xd] = 0;
              pbVar11[0xe] = 0;
              pbVar11[0xf] = 0;
              unaff_r9 = *(byte **)(*(int *)(param_2 + 0x10) + 0xc);
              if (unaff_r9 == pbVar9) {
                *(byte **)(*(int *)(param_2 + 0x10) + 0xc) = pbVar11;
              }
            }
          }
          else {
            if (pbVar11 == (byte *)0x0) {
              pbVar11 = pbVar12;
            }
            else {
              iVar10 = *(int *)(pbVar11 + 8);
              pbVar5 = pbVar11;
              while (iVar10 != 0) {
                pbVar5 = *(byte **)(pbVar5 + 8);
                iVar10 = *(int *)(pbVar5 + 8);
              }
              pbVar11 = *(byte **)(pbVar5 + 0xc);
            }
LAB_0076ec48:
            if (pbVar5 == pbVar9) {
              *(undefined4 *)(pbVar11 + 4) = *(undefined4 *)(pbVar5 + 4);
              if (*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar9) {
                *(byte **)(*(int *)(param_2 + 0x10) + 4) = pbVar11;
              }
              else {
                iVar10 = *(int *)(pbVar9 + 4);
                if (*(byte **)(iVar10 + 8) == pbVar9) {
                  *(byte **)(iVar10 + 8) = pbVar11;
                }
                else {
                  *(byte **)(iVar10 + 0xc) = pbVar11;
                }
              }
              iVar10 = *(int *)(param_2 + 0x10);
              if (*(byte **)(iVar10 + 8) == pbVar9) {
                if (*(int *)(pbVar9 + 0xc) == 0) {
                  *(undefined4 *)(iVar10 + 8) = *(undefined4 *)(pbVar9 + 4);
                }
                else {
                  pbVar8 = *(byte **)(pbVar11 + 8);
                  pbVar12 = pbVar11;
                  while (pbVar3 = pbVar8, pbVar3 != (byte *)0x0) {
                    pbVar12 = pbVar3;
                    pbVar8 = *(byte **)(pbVar3 + 8);
                  }
                  *(byte **)(iVar10 + 8) = pbVar12;
                }
              }
              unaff_r9 = *(byte **)(param_2 + 0x10);
              if (*(byte **)(unaff_r9 + 0xc) == pbVar9) {
                if (*(int *)(pbVar9 + 8) == 0) {
                  *(undefined4 *)(unaff_r9 + 0xc) = *(undefined4 *)(pbVar9 + 4);
                }
                else {
                  pbVar12 = *(byte **)(pbVar11 + 0xc);
                  pbVar9 = pbVar11;
                  while (pbVar8 = pbVar12, pbVar8 != (byte *)0x0) {
                    pbVar9 = pbVar8;
                    pbVar12 = *(byte **)(pbVar8 + 0xc);
                  }
                  *(byte **)(unaff_r9 + 0xc) = pbVar9;
                }
              }
            }
            else {
              *(byte **)(pbVar12 + 4) = pbVar5;
              *(undefined4 *)(pbVar5 + 8) = *(undefined4 *)(pbVar9 + 8);
              if (*(byte **)(pbVar9 + 0xc) == pbVar5) {
                if (pbVar11 != (byte *)0x0) {
                  *(byte **)(pbVar11 + 4) = pbVar5;
                }
              }
              else {
                if (pbVar11 != (byte *)0x0) {
                  *(undefined4 *)(pbVar11 + 4) = *(undefined4 *)(pbVar5 + 4);
                }
                *(byte **)(*(int *)(pbVar5 + 4) + 8) = pbVar11;
                *(undefined4 *)(pbVar5 + 0xc) = *(undefined4 *)(pbVar9 + 0xc);
                *(byte **)(*(int *)(pbVar9 + 0xc) + 4) = pbVar5;
              }
              if (*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar9) {
                *(byte **)(*(int *)(param_2 + 0x10) + 4) = pbVar5;
              }
              else {
                iVar10 = *(int *)(pbVar9 + 4);
                if (*(byte **)(iVar10 + 8) == pbVar9) {
                  *(byte **)(iVar10 + 8) = pbVar5;
                }
                else {
                  *(byte **)(iVar10 + 0xc) = pbVar5;
                }
              }
              if (pbVar11 == (byte *)0x0) {
                pbVar11 = pbVar5;
              }
              *(undefined4 *)(pbVar5 + 4) = *(undefined4 *)(pbVar9 + 4);
              unaff_r9 = (byte *)(uint)*pbVar9;
              bVar1 = *pbVar5;
              *pbVar5 = *pbVar9;
              *pbVar9 = bVar1;
              pbVar5 = pbVar9;
            }
          }
          pbVar9 = *(byte **)(param_2 + 0x10);
          bVar13 = pbVar9 != pbVar11;
          if (bVar13) {
            pbVar9 = (byte *)(uint)*pbVar5;
          }
          if (bVar13 && pbVar9 != (byte *)0x0) {
            while( true ) {
              if ((*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar11) || (*pbVar11 != 1))
              goto LAB_0076efa4;
              pbVar9 = *(byte **)(pbVar11 + 4);
              pbVar12 = *(byte **)(pbVar9 + 8);
              if (pbVar12 != pbVar11) break;
              pbVar12 = *(byte **)(pbVar9 + 0xc);
              if (pbVar12 == (byte *)0x0) {
LAB_0076ef60:
                *pbVar11 = 0;
                pbVar11 = pbVar9;
              }
              else {
                if (*pbVar12 == 0) {
                  *pbVar12 = 1;
                  **(undefined1 **)(pbVar11 + 4) = 0;
                  iVar6 = *(int *)(pbVar11 + 4);
                  iVar10 = *(int *)(iVar6 + 0xc);
                  *(undefined4 *)(iVar6 + 0xc) = *(undefined4 *)(iVar10 + 8);
                  if (*(int *)(iVar10 + 8) != 0) {
                    *(int *)(*(int *)(iVar10 + 8) + 4) = iVar6;
                  }
                  *(undefined4 *)(iVar10 + 4) = *(undefined4 *)(iVar6 + 4);
                  unaff_r9 = *(byte **)(param_2 + 0x10);
                  if (*(int *)(unaff_r9 + 4) == iVar6) {
                    *(int *)(unaff_r9 + 4) = iVar10;
                  }
                  else {
                    unaff_r9 = *(byte **)(iVar6 + 4);
                    if (*(int *)(unaff_r9 + 8) == iVar6) {
                      *(int *)(unaff_r9 + 8) = iVar10;
                    }
                    else {
                      *(int *)(unaff_r9 + 0xc) = iVar10;
                    }
                  }
                  *(int *)(iVar10 + 8) = iVar6;
                  *(int *)(iVar6 + 4) = iVar10;
                  pbVar9 = *(byte **)(pbVar11 + 4);
                  pbVar12 = *(byte **)(pbVar9 + 0xc);
                  if (pbVar12 == (byte *)0x0) goto LAB_0076ef60;
                }
                pbVar9 = *(byte **)(pbVar12 + 8);
                if (pbVar9 != (byte *)0x0) {
                  unaff_r9 = (byte *)(uint)*pbVar9;
                }
                if (pbVar9 != (byte *)0x0 && unaff_r9 != &DAT_00000001) {
LAB_0076ee68:
                  pcVar7 = *(char **)(pbVar12 + 0xc);
                  cVar2 = '\0';
                  if (pcVar7 != (char *)0x0) {
                    cVar2 = *pcVar7;
                  }
                  if (pcVar7 == (char *)0x0 || cVar2 == '\x01') {
                    if (pbVar9 != (byte *)0x0) {
                      *pbVar9 = 1;
                    }
                    *pbVar12 = 0;
                    iVar10 = *(int *)(pbVar12 + 8);
                    *(undefined4 *)(pbVar12 + 8) = *(undefined4 *)(iVar10 + 0xc);
                    if (*(int *)(iVar10 + 0xc) != 0) {
                      *(byte **)(*(int *)(iVar10 + 0xc) + 4) = pbVar12;
                    }
                    *(undefined4 *)(iVar10 + 4) = *(undefined4 *)(pbVar12 + 4);
                    unaff_r9 = *(byte **)(param_2 + 0x10);
                    if (*(byte **)(unaff_r9 + 4) == pbVar12) {
                      *(int *)(unaff_r9 + 4) = iVar10;
                    }
                    else {
                      unaff_r9 = *(byte **)(pbVar12 + 4);
                      if (*(byte **)(unaff_r9 + 0xc) == pbVar12) {
                        *(int *)(unaff_r9 + 0xc) = iVar10;
                      }
                      else {
                        *(int *)(unaff_r9 + 8) = iVar10;
                      }
                    }
                    *(byte **)(iVar10 + 0xc) = pbVar12;
                    *(int *)(pbVar12 + 4) = iVar10;
                    pbVar12 = *(byte **)(*(int *)(pbVar11 + 4) + 0xc);
                    if (pbVar12 == (byte *)0x0) goto LAB_0076efa4;
                  }
                  *pbVar12 = **(byte **)(pbVar11 + 4);
                  **(undefined1 **)(pbVar11 + 4) = 1;
                  if (*(undefined1 **)(pbVar12 + 0xc) != (undefined1 *)0x0) {
                    **(undefined1 **)(pbVar12 + 0xc) = 1;
                  }
                  iVar6 = *(int *)(pbVar11 + 4);
                  iVar10 = *(int *)(iVar6 + 0xc);
                  *(undefined4 *)(iVar6 + 0xc) = *(undefined4 *)(iVar10 + 8);
                  if (*(int *)(iVar10 + 8) != 0) {
                    *(int *)(*(int *)(iVar10 + 8) + 4) = iVar6;
                  }
                  *(undefined4 *)(iVar10 + 4) = *(undefined4 *)(iVar6 + 4);
                  unaff_r9 = *(byte **)(param_2 + 0x10);
                  if (*(int *)(unaff_r9 + 4) == iVar6) {
                    *(int *)(unaff_r9 + 4) = iVar10;
                  }
                  else {
                    unaff_r9 = *(byte **)(iVar6 + 4);
                    if (*(int *)(unaff_r9 + 8) == iVar6) {
                      *(int *)(unaff_r9 + 8) = iVar10;
                    }
                    else {
                      *(int *)(unaff_r9 + 0xc) = iVar10;
                    }
                  }
                  *(int *)(iVar10 + 8) = iVar6;
                  goto LAB_0076f0f4;
                }
                pbVar8 = *(byte **)(pbVar12 + 0xc);
                unaff_r9 = (byte *)0x0;
                if (pbVar8 != (byte *)0x0) {
                  unaff_r9 = (byte *)(uint)*pbVar8;
                }
                if (pbVar8 != (byte *)0x0 && unaff_r9 != &DAT_00000001) goto LAB_0076ee68;
LAB_0076ef80:
                *pbVar12 = 0;
                pbVar11 = *(byte **)(pbVar11 + 4);
              }
            }
            if (pbVar12 == (byte *)0x0) goto LAB_0076ef60;
            pbVar9 = (byte *)(uint)*pbVar12;
            if (pbVar9 == (byte *)0x0) {
              *pbVar12 = 1;
              **(undefined1 **)(pbVar11 + 4) = 0;
              iVar6 = *(int *)(pbVar11 + 4);
              iVar10 = *(int *)(iVar6 + 8);
              *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(iVar10 + 0xc);
              if (*(int *)(iVar10 + 0xc) != 0) {
                *(int *)(*(int *)(iVar10 + 0xc) + 4) = iVar6;
              }
              *(undefined4 *)(iVar10 + 4) = *(undefined4 *)(iVar6 + 4);
              unaff_r9 = *(byte **)(param_2 + 0x10);
              if (*(int *)(unaff_r9 + 4) == iVar6) {
                *(int *)(unaff_r9 + 4) = iVar10;
              }
              else {
                unaff_r9 = *(byte **)(iVar6 + 4);
                if (*(int *)(unaff_r9 + 0xc) == iVar6) {
                  *(int *)(unaff_r9 + 0xc) = iVar10;
                }
                else {
                  *(int *)(unaff_r9 + 8) = iVar10;
                }
              }
              *(int *)(iVar10 + 0xc) = iVar6;
              *(int *)(iVar6 + 4) = iVar10;
              pbVar9 = *(byte **)(pbVar11 + 4);
              pbVar12 = *(byte **)(pbVar9 + 8);
              if (pbVar12 == (byte *)0x0) goto LAB_0076ef60;
            }
            unaff_r9 = *(byte **)(pbVar12 + 0xc);
            if (unaff_r9 != (byte *)0x0) {
              pbVar9 = (byte *)(uint)*unaff_r9;
            }
            if (unaff_r9 == (byte *)0x0 || pbVar9 == &DAT_00000001) {
              pcVar7 = *(char **)(pbVar12 + 8);
              cVar2 = '\0';
              if (pcVar7 != (char *)0x0) {
                cVar2 = *pcVar7;
              }
              if (pcVar7 == (char *)0x0 || cVar2 == '\x01') goto LAB_0076ef80;
            }
            pcVar7 = *(char **)(pbVar12 + 8);
            cVar2 = '\0';
            if (pcVar7 != (char *)0x0) {
              cVar2 = *pcVar7;
            }
            if (pcVar7 == (char *)0x0 || cVar2 == '\x01') {
              if (unaff_r9 != (byte *)0x0) {
                *unaff_r9 = 1;
              }
              *pbVar12 = 0;
              unaff_r9 = *(byte **)(pbVar12 + 0xc);
              *(undefined4 *)(pbVar12 + 0xc) = *(undefined4 *)(unaff_r9 + 8);
              if (*(int *)(unaff_r9 + 8) != 0) {
                *(byte **)(*(int *)(unaff_r9 + 8) + 4) = pbVar12;
              }
              *(undefined4 *)(unaff_r9 + 4) = *(undefined4 *)(pbVar12 + 4);
              if (*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar12) {
                *(byte **)(*(int *)(param_2 + 0x10) + 4) = unaff_r9;
              }
              else {
                iVar10 = *(int *)(pbVar12 + 4);
                if (*(byte **)(iVar10 + 8) == pbVar12) {
                  *(byte **)(iVar10 + 8) = unaff_r9;
                }
                else {
                  *(byte **)(iVar10 + 0xc) = unaff_r9;
                }
              }
              *(byte **)(unaff_r9 + 8) = pbVar12;
              *(byte **)(pbVar12 + 4) = unaff_r9;
              pbVar12 = *(byte **)(*(int *)(pbVar11 + 4) + 8);
              if (pbVar12 != (byte *)0x0) goto LAB_0076f084;
            }
            else {
LAB_0076f084:
              *pbVar12 = **(byte **)(pbVar11 + 4);
              **(undefined1 **)(pbVar11 + 4) = 1;
              if (*(undefined1 **)(pbVar12 + 8) != (undefined1 *)0x0) {
                **(undefined1 **)(pbVar12 + 8) = 1;
              }
              iVar6 = *(int *)(pbVar11 + 4);
              iVar10 = *(int *)(iVar6 + 8);
              *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(iVar10 + 0xc);
              if (*(int *)(iVar10 + 0xc) != 0) {
                *(int *)(*(int *)(iVar10 + 0xc) + 4) = iVar6;
              }
              *(undefined4 *)(iVar10 + 4) = *(undefined4 *)(iVar6 + 4);
              unaff_r9 = *(byte **)(param_2 + 0x10);
              if (*(int *)(unaff_r9 + 4) == iVar6) {
                *(int *)(unaff_r9 + 4) = iVar10;
              }
              else {
                unaff_r9 = *(byte **)(iVar6 + 4);
                if (*(int *)(unaff_r9 + 0xc) == iVar6) {
                  *(int *)(unaff_r9 + 0xc) = iVar10;
                }
                else {
                  *(int *)(unaff_r9 + 8) = iVar10;
                }
              }
              *(int *)(iVar10 + 0xc) = iVar6;
LAB_0076f0f4:
              *(int *)(iVar6 + 4) = iVar10;
            }
LAB_0076efa4:
            *pbVar11 = 1;
          }
          *(undefined4 *)(pbVar5 + 0xc) = *(undefined4 *)(param_2 + 4);
          *(byte **)(param_2 + 4) = pbVar5;
          *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + -1;
        }
        *param_1 = pbVar4;
        pbVar9 = (byte *)*param_3;
        if (pbVar9 == (byte *)*param_4) {
          return;
        }
      } while( true );
    }
  }
  else {
    iVar10 = *(int *)(pbVar5 + 4);
    while (iVar10 != 0) {
      fn_0076f1f8(param_2,*(undefined4 *)(iVar10 + 0xc));
      iVar6 = *(int *)(iVar10 + 8);
      *(undefined4 *)(iVar10 + 0xc) = *(undefined4 *)(param_2 + 4);
      *(int *)(param_2 + 4) = iVar10;
      iVar10 = iVar6;
    }
    *(int *)(*(int *)(param_2 + 0x10) + 8) = *(int *)(param_2 + 0x10);
    *(undefined4 *)(*(int *)(param_2 + 0x10) + 4) = 0;
    *(int *)(*(int *)(param_2 + 0x10) + 0xc) = *(int *)(param_2 + 0x10);
    *(undefined4 *)(param_2 + 0x14) = 0;
    *param_1 = *(undefined4 *)(param_2 + 0x10);
  }
  return;
}


