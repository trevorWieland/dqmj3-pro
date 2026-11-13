#include "0076a024_0076a024.h"



void fn_0076a024(undefined4 *param_1,int param_2,int *param_3,int *param_4)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  char *pcVar12;
  byte *pbVar13;
  bool bVar14;
  
  *param_1 = *(undefined4 *)(param_2 + 0x10);
  iVar3 = *(int *)(param_2 + 0x10);
  iVar7 = *(int *)(iVar3 + 8);
  bVar14 = *param_3 == iVar7;
  if (bVar14) {
    iVar7 = *param_4;
  }
  if ((bVar14 && iVar7 == iVar3) && (*(int *)(param_2 + 0x14) != 0)) {
    iVar7 = *(int *)(iVar3 + 4);
    while (iVar7 != 0) {
      fn_0076a8c0(param_2,*(undefined4 *)(iVar7 + 0xc));
      iVar11 = *(int *)(iVar7 + 8);
      *(undefined4 *)(iVar7 + 0xc) = *(undefined4 *)(param_2 + 4);
      iVar3 = fn_004b87dc(iVar7 + 0x18);
      fn_00170f54(iVar3 + -8);
      *(int *)(param_2 + 4) = iVar7;
      iVar7 = iVar11;
    }
    *(int *)(*(int *)(param_2 + 0x10) + 8) = *(int *)(param_2 + 0x10);
    *(undefined4 *)(*(int *)(param_2 + 0x10) + 4) = 0;
    *(int *)(*(int *)(param_2 + 0x10) + 0xc) = *(int *)(param_2 + 0x10);
    *(undefined4 *)(param_2 + 0x14) = 0;
    *param_1 = *(undefined4 *)(param_2 + 0x10);
    return;
  }
  do {
    pbVar8 = (byte *)*param_3;
    if (pbVar8 == (byte *)*param_4) {
      return;
    }
    iVar7 = *(int *)(pbVar8 + 0xc);
    if (iVar7 == 0) {
      for (iVar7 = *(int *)(pbVar8 + 4); *param_3 == *(int *)(iVar7 + 0xc);
          iVar7 = *(int *)(iVar7 + 4)) {
        *param_3 = iVar7;
      }
      if (*(int *)(*param_3 + 0xc) != iVar7) {
        *param_3 = iVar7;
      }
    }
    else {
      *param_3 = iVar7;
      while (iVar7 = *(int *)(iVar7 + 8), iVar7 != 0) {
        *param_3 = iVar7;
      }
    }
    pbVar4 = *(byte **)(param_2 + 0x10);
    if (pbVar8 != pbVar4) {
      pbVar9 = *(byte **)(pbVar8 + 0xc);
      if (*(byte **)(pbVar8 + 0xc) == (byte *)0x0) {
        pbVar9 = *(byte **)(pbVar8 + 4);
        pbVar4 = pbVar8;
        while (pbVar5 = pbVar9, pbVar4 == *(byte **)(pbVar5 + 0xc)) {
          pbVar4 = pbVar5;
          pbVar9 = *(byte **)(pbVar5 + 4);
        }
        if (*(byte **)(pbVar4 + 0xc) != pbVar5) {
          pbVar4 = pbVar5;
        }
      }
      else {
        do {
          pbVar4 = pbVar9;
          pbVar9 = *(byte **)(pbVar4 + 8);
        } while (*(byte **)(pbVar4 + 8) != (byte *)0x0);
      }
      pbVar5 = *(byte **)(pbVar8 + 8);
      pbVar9 = pbVar8;
      if (pbVar5 == (byte *)0x0) {
        pbVar6 = *(byte **)(pbVar8 + 0xc);
        if (pbVar6 != (byte *)0x0) goto LAB_0076a1d4;
        pbVar6 = *(byte **)(pbVar8 + 4);
        if (*(byte **)(param_2 + 0x10) == pbVar6) {
          *(byte **)(*(byte **)(param_2 + 0x10) + 0xc) = pbVar6;
          *(byte **)(*(int *)(param_2 + 0x10) + 8) = pbVar6;
          *(undefined4 *)(*(int *)(param_2 + 0x10) + 4) = 0;
        }
        else if (*(byte **)(pbVar6 + 8) == pbVar8) {
          pbVar6[8] = 0;
          pbVar6[9] = 0;
          pbVar6[10] = 0;
          pbVar6[0xb] = 0;
          if (*(byte **)(*(int *)(param_2 + 0x10) + 8) == pbVar8) {
            *(byte **)(*(int *)(param_2 + 0x10) + 8) = pbVar6;
          }
        }
        else {
          pbVar6[0xc] = 0;
          pbVar6[0xd] = 0;
          pbVar6[0xe] = 0;
          pbVar6[0xf] = 0;
          if (*(byte **)(*(int *)(param_2 + 0x10) + 0xc) == pbVar8) {
            *(byte **)(*(int *)(param_2 + 0x10) + 0xc) = pbVar6;
          }
        }
      }
      else {
        pbVar6 = pbVar5;
        pbVar10 = *(byte **)(pbVar8 + 0xc);
        if (*(byte **)(pbVar8 + 0xc) != (byte *)0x0) {
          do {
            pbVar9 = pbVar10;
            pbVar10 = *(byte **)(pbVar9 + 8);
          } while (*(byte **)(pbVar9 + 8) != (byte *)0x0);
          pbVar6 = *(byte **)(pbVar9 + 0xc);
        }
LAB_0076a1d4:
        if (pbVar9 == pbVar8) {
          *(undefined4 *)(pbVar6 + 4) = *(undefined4 *)(pbVar9 + 4);
          if (*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar8) {
            *(byte **)(*(int *)(param_2 + 0x10) + 4) = pbVar6;
          }
          else {
            iVar7 = *(int *)(pbVar8 + 4);
            if (*(byte **)(iVar7 + 8) == pbVar8) {
              *(byte **)(iVar7 + 8) = pbVar6;
            }
            else {
              *(byte **)(iVar7 + 0xc) = pbVar6;
            }
          }
          iVar7 = *(int *)(param_2 + 0x10);
          if (*(byte **)(iVar7 + 8) == pbVar8) {
            pbVar5 = pbVar6;
            if (*(int *)(pbVar8 + 0xc) == 0) {
              *(undefined4 *)(iVar7 + 8) = *(undefined4 *)(pbVar8 + 4);
            }
            else {
              do {
                pbVar10 = pbVar5;
                pbVar5 = *(byte **)(pbVar10 + 8);
              } while (pbVar5 != (byte *)0x0);
              *(byte **)(iVar7 + 8) = pbVar10;
            }
          }
          iVar7 = *(int *)(param_2 + 0x10);
          if (*(byte **)(iVar7 + 0xc) == pbVar8) {
            pbVar5 = pbVar6;
            if (*(int *)(pbVar8 + 8) == 0) {
              *(undefined4 *)(iVar7 + 0xc) = *(undefined4 *)(pbVar8 + 4);
            }
            else {
              do {
                pbVar8 = pbVar5;
                pbVar5 = *(byte **)(pbVar8 + 0xc);
              } while (*(byte **)(pbVar8 + 0xc) != (byte *)0x0);
              *(byte **)(iVar7 + 0xc) = pbVar8;
            }
          }
        }
        else {
          *(byte **)(pbVar5 + 4) = pbVar9;
          *(undefined4 *)(pbVar9 + 8) = *(undefined4 *)(pbVar8 + 8);
          if (*(byte **)(pbVar8 + 0xc) == pbVar9) {
            if (pbVar6 != (byte *)0x0) {
              *(byte **)(pbVar6 + 4) = pbVar9;
            }
          }
          else {
            if (pbVar6 != (byte *)0x0) {
              *(undefined4 *)(pbVar6 + 4) = *(undefined4 *)(pbVar9 + 4);
            }
            *(byte **)(*(int *)(pbVar9 + 4) + 8) = pbVar6;
            *(undefined4 *)(pbVar9 + 0xc) = *(undefined4 *)(pbVar8 + 0xc);
            *(byte **)(*(int *)(pbVar8 + 0xc) + 4) = pbVar9;
          }
          if (*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar8) {
            *(byte **)(*(int *)(param_2 + 0x10) + 4) = pbVar9;
          }
          else {
            iVar7 = *(int *)(pbVar8 + 4);
            if (*(byte **)(iVar7 + 8) == pbVar8) {
              *(byte **)(iVar7 + 8) = pbVar9;
            }
            else {
              *(byte **)(iVar7 + 0xc) = pbVar9;
            }
          }
          if (pbVar6 == (byte *)0x0) {
            pbVar6 = pbVar9;
          }
          *(undefined4 *)(pbVar9 + 4) = *(undefined4 *)(pbVar8 + 4);
          bVar1 = *pbVar9;
          *pbVar9 = *pbVar8;
          *pbVar8 = bVar1;
          pbVar9 = pbVar8;
        }
      }
      pbVar5 = *(byte **)(param_2 + 0x10);
      bVar14 = pbVar5 != pbVar6;
      if (bVar14) {
        pbVar5 = (byte *)(uint)*pbVar9;
      }
      if (bVar14 && pbVar5 != (byte *)0x0) {
LAB_0076a3a8:
        while( true ) {
          if ((*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar6) || (*pbVar6 != 1))
          goto LAB_0076a3c4;
          pbVar10 = *(byte **)(pbVar6 + 4);
          pbVar5 = *(byte **)(pbVar10 + 8);
          if (pbVar5 == pbVar6) break;
          if (pbVar5 != (byte *)0x0) {
            if (*pbVar5 == 0) {
              *pbVar5 = 1;
              **(undefined1 **)(pbVar6 + 4) = 0;
              iVar7 = *(int *)(pbVar6 + 4);
              iVar3 = *(int *)(iVar7 + 8);
              *(undefined4 *)(iVar7 + 8) = *(undefined4 *)(iVar3 + 0xc);
              if (*(int *)(iVar3 + 0xc) != 0) {
                *(int *)(*(int *)(iVar3 + 0xc) + 4) = iVar7;
              }
              *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar7 + 4);
              pbVar8 = *(byte **)(param_2 + 0x10);
              if (*(int *)(pbVar8 + 4) == iVar7) {
                *(int *)(pbVar8 + 4) = iVar3;
              }
              else {
                pbVar8 = *(byte **)(iVar7 + 4);
                if (*(int *)(pbVar8 + 0xc) == iVar7) {
                  *(int *)(pbVar8 + 0xc) = iVar3;
                }
                else {
                  *(int *)(pbVar8 + 8) = iVar3;
                }
              }
              *(int *)(iVar3 + 0xc) = iVar7;
              *(int *)(iVar7 + 4) = iVar3;
              pbVar5 = *(byte **)(*(int *)(pbVar6 + 4) + 8);
              if (pbVar5 != (byte *)0x0) goto LAB_0076a664;
LAB_0076a690:
              *pbVar6 = 0;
              goto LAB_0076a4e4;
            }
LAB_0076a664:
            pbVar10 = *(byte **)(pbVar5 + 0xc);
            if (pbVar10 != (byte *)0x0) {
              pbVar8 = (byte *)(uint)*pbVar10;
            }
            if (pbVar10 == (byte *)0x0 || pbVar8 == &DAT_00000001) {
              pbVar13 = *(byte **)(pbVar5 + 8);
              pbVar8 = (byte *)0x0;
              if (pbVar13 != (byte *)0x0) {
                pbVar8 = (byte *)(uint)*pbVar13;
              }
              if (pbVar13 == (byte *)0x0 || pbVar8 == &DAT_00000001) goto LAB_0076a6ac;
            }
            pcVar12 = *(char **)(pbVar5 + 8);
            cVar2 = '\0';
            if (pcVar12 != (char *)0x0) {
              cVar2 = *pcVar12;
            }
            if (pcVar12 == (char *)0x0 || cVar2 == '\x01') {
              if (pbVar10 != (byte *)0x0) {
                *pbVar10 = 1;
              }
              *pbVar5 = 0;
              iVar7 = *(int *)(pbVar5 + 0xc);
              *(undefined4 *)(pbVar5 + 0xc) = *(undefined4 *)(iVar7 + 8);
              if (*(int *)(iVar7 + 8) != 0) {
                *(byte **)(*(int *)(iVar7 + 8) + 4) = pbVar5;
              }
              *(undefined4 *)(iVar7 + 4) = *(undefined4 *)(pbVar5 + 4);
              if (*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar5) {
                *(int *)(*(int *)(param_2 + 0x10) + 4) = iVar7;
              }
              else {
                iVar3 = *(int *)(pbVar5 + 4);
                if (*(byte **)(iVar3 + 8) == pbVar5) {
                  *(int *)(iVar3 + 8) = iVar7;
                }
                else {
                  *(int *)(iVar3 + 0xc) = iVar7;
                }
              }
              *(byte **)(iVar7 + 8) = pbVar5;
              *(int *)(pbVar5 + 4) = iVar7;
              pbVar5 = *(byte **)(*(int *)(pbVar6 + 4) + 8);
              if (pbVar5 == (byte *)0x0) goto LAB_0076a3c4;
            }
            *pbVar5 = **(byte **)(pbVar6 + 4);
            **(undefined1 **)(pbVar6 + 4) = 1;
            if (*(undefined1 **)(pbVar5 + 8) != (undefined1 *)0x0) {
              **(undefined1 **)(pbVar5 + 8) = 1;
            }
            iVar7 = *(int *)(pbVar6 + 4);
            iVar3 = *(int *)(iVar7 + 8);
            *(undefined4 *)(iVar7 + 8) = *(undefined4 *)(iVar3 + 0xc);
            if (*(int *)(iVar3 + 0xc) != 0) {
              *(int *)(*(int *)(iVar3 + 0xc) + 4) = iVar7;
            }
            *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar7 + 4);
            if (*(int *)(*(int *)(param_2 + 0x10) + 4) == iVar7) {
              *(int *)(*(int *)(param_2 + 0x10) + 4) = iVar3;
            }
            else {
              iVar11 = *(int *)(iVar7 + 4);
              if (*(int *)(iVar11 + 0xc) == iVar7) {
                *(int *)(iVar11 + 0xc) = iVar3;
              }
              else {
                *(int *)(iVar11 + 8) = iVar3;
              }
            }
            *(int *)(iVar3 + 0xc) = iVar7;
            *(int *)(iVar7 + 4) = iVar3;
            goto LAB_0076a3c4;
          }
LAB_0076a5e8:
          *pbVar6 = 0;
          pbVar6 = pbVar10;
        }
        pbVar5 = *(byte **)(pbVar10 + 0xc);
        if (pbVar5 == (byte *)0x0) goto LAB_0076a5e8;
        if (*pbVar5 == 0) {
          *pbVar5 = 1;
          **(undefined1 **)(pbVar6 + 4) = 0;
          iVar7 = *(int *)(pbVar6 + 4);
          iVar3 = *(int *)(iVar7 + 0xc);
          *(undefined4 *)(iVar7 + 0xc) = *(undefined4 *)(iVar3 + 8);
          if (*(int *)(iVar3 + 8) != 0) {
            *(int *)(*(int *)(iVar3 + 8) + 4) = iVar7;
          }
          *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar7 + 4);
          pbVar8 = *(byte **)(param_2 + 0x10);
          if (*(int *)(pbVar8 + 4) == iVar7) {
            *(int *)(pbVar8 + 4) = iVar3;
          }
          else {
            pbVar8 = *(byte **)(iVar7 + 4);
            if (*(int *)(pbVar8 + 8) == iVar7) {
              *(int *)(pbVar8 + 8) = iVar3;
            }
            else {
              *(int *)(pbVar8 + 0xc) = iVar3;
            }
          }
          *(int *)(iVar3 + 8) = iVar7;
          *(int *)(iVar7 + 4) = iVar3;
          pbVar5 = *(byte **)(*(int *)(pbVar6 + 4) + 0xc);
          if (pbVar5 == (byte *)0x0) goto LAB_0076a690;
        }
        pbVar10 = *(byte **)(pbVar5 + 8);
        if (pbVar10 != (byte *)0x0) {
          pbVar8 = (byte *)(uint)*pbVar10;
        }
        if (pbVar10 == (byte *)0x0 || pbVar8 == &DAT_00000001) {
          pbVar13 = *(byte **)(pbVar5 + 0xc);
          pbVar8 = (byte *)0x0;
          if (pbVar13 != (byte *)0x0) {
            pbVar8 = (byte *)(uint)*pbVar13;
          }
          if (pbVar13 != (byte *)0x0 && pbVar8 != &DAT_00000001) goto LAB_0076a4b4;
LAB_0076a6ac:
          *pbVar5 = 0;
LAB_0076a4e4:
          pbVar6 = *(byte **)(pbVar6 + 4);
          goto LAB_0076a3a8;
        }
LAB_0076a4b4:
        pcVar12 = *(char **)(pbVar5 + 0xc);
        cVar2 = '\0';
        if (pcVar12 != (char *)0x0) {
          cVar2 = *pcVar12;
        }
        if (pcVar12 == (char *)0x0 || cVar2 == '\x01') {
          if (pbVar10 != (byte *)0x0) {
            *pbVar10 = 1;
          }
          *pbVar5 = 0;
          iVar7 = *(int *)(pbVar5 + 8);
          *(undefined4 *)(pbVar5 + 8) = *(undefined4 *)(iVar7 + 0xc);
          if (*(int *)(iVar7 + 0xc) != 0) {
            *(byte **)(*(int *)(iVar7 + 0xc) + 4) = pbVar5;
          }
          *(undefined4 *)(iVar7 + 4) = *(undefined4 *)(pbVar5 + 4);
          if (*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar5) {
            *(int *)(*(int *)(param_2 + 0x10) + 4) = iVar7;
          }
          else {
            iVar3 = *(int *)(pbVar5 + 4);
            if (*(byte **)(iVar3 + 0xc) == pbVar5) {
              *(int *)(iVar3 + 0xc) = iVar7;
            }
            else {
              *(int *)(iVar3 + 8) = iVar7;
            }
          }
          *(byte **)(iVar7 + 0xc) = pbVar5;
          *(int *)(pbVar5 + 4) = iVar7;
          pbVar5 = *(byte **)(*(int *)(pbVar6 + 4) + 0xc);
          if (pbVar5 == (byte *)0x0) goto LAB_0076a3c4;
        }
        *pbVar5 = **(byte **)(pbVar6 + 4);
        **(undefined1 **)(pbVar6 + 4) = 1;
        if (*(undefined1 **)(pbVar5 + 0xc) != (undefined1 *)0x0) {
          **(undefined1 **)(pbVar5 + 0xc) = 1;
        }
        iVar3 = *(int *)(pbVar6 + 4);
        iVar7 = *(int *)(iVar3 + 0xc);
        *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar7 + 8);
        if (*(int *)(iVar7 + 8) != 0) {
          *(int *)(*(int *)(iVar7 + 8) + 4) = iVar3;
        }
        *(undefined4 *)(iVar7 + 4) = *(undefined4 *)(iVar3 + 4);
        if (*(int *)(*(int *)(param_2 + 0x10) + 4) == iVar3) {
          *(int *)(*(int *)(param_2 + 0x10) + 4) = iVar7;
        }
        else {
          iVar11 = *(int *)(iVar3 + 4);
          if (*(int *)(iVar11 + 8) == iVar3) {
            *(int *)(iVar11 + 8) = iVar7;
          }
          else {
            *(int *)(iVar11 + 0xc) = iVar7;
          }
        }
        *(int *)(iVar7 + 8) = iVar3;
        *(int *)(iVar3 + 4) = iVar7;
LAB_0076a3c4:
        *pbVar6 = 1;
      }
      *(undefined4 *)(pbVar9 + 0xc) = *(undefined4 *)(param_2 + 4);
      iVar7 = fn_004b87dc(pbVar9 + 0x18);
      fn_00170f54(iVar7 + -8);
      *(byte **)(param_2 + 4) = pbVar9;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + -1;
    }
    *param_1 = pbVar4;
  } while( true );
}


