#include "firstScan.h"

FirstScan * initScan()
{
    FirstScan * firstScan = (FirstScan*)malloc(sizeof(FirstScan));
    firstScan->firstSymbol = createSymbol();
    firstScan->firstLine = createIntNode();
    firstScan->currentLine = firstScan->firstLine;
    firstScan->DC = 0;
    firstScan->IC 100;
}

bool checkEmpty(char * line)
{
    int k = 0;
    for (int i = 0; i < strlen(line); i++)
    {
        if(line[i] == ' ' || line[i] == '\t' || line[i] == NULL)
        {
            return true;
        }
    }

    return false;
    
}

bool isAlphabet(char firstChar)
{
    if(((int)firstChar <= 90 && (int)firstChar >= 65) || ((int)firstChar <= 122 && (int)firstChar >= 97) )
    {
        return true;
    }

    return false;
}

bool isLabel(char * label)
{
    for (int i = 0; i < strlen(lable); i++)
    {
        if(label[i] == ':')
        {
            return true;
        }
    }

    else
    {
        return false;
    }
    
}

FirstScan * doScan(char * asFile)
{
    FirstScan * firstScan = initScan();
    TextNode * firsNode = createNode();
    firsNode = lineParser(asFile);
    TextNode * curNode = createNode();
    curNode = firstNode;
    TextNode * curWord = createNode()
    int symbolFlag = 0;
    SymbolNode * lastSymbol = NULL;
    SymbolNode * firstSymbol = NULL;
    SymbolNode * curSymbol = NULL;
    char * temp;
    int * intTemp;
    TextNode * tempNode = createNode();
    int ** doublePointer;
    while(curNode != NULL)
    {
        while(checkEmpty(curNode))
        {
            if(curNode->nextNode != NULL)
            {
                curNode = curNode->nextNode;
            }

            else
            {
                break;
            }
        }


        curWord = wordParser(curNode);

        if(isLabel(curNode->val))
        {
            symbolFlag = 1;
        }

        
        if(symbolFlag == 1)
        {
            temp = strchr(curNode->val,'.');
            if(temp[0] = '.');
            {
                //add syntax check********************
                if(symbolFlag == 1)
                {
                    if(firstSymbol == NULL)
                    {
                        firstSymbol = createSymbol();
                        addSymbole(curWord->val, firstScan->IC, "data", firstSymbol);
                        lastSymbol = firstSymbol;
                        curSymbol = lastSymbol;
                        if(temp[2] == b)
                        {
                            firstScan->DC = firstScan->DC + (curNode->nodeSize - 2);
                                tempNode = wordParser(temp);
                                intTemp = (int*)malloc((tempNode->nodeSize - 1) * sizeof(int))
                                while(tempNode->nextNode != NULL)
                                {
                                    intTemp[z] = atoi(tempNode->val[0]);
                                    tempNode = tempNode->nextNode;
                                    z++;
                                }

                                doublePointer = freeDInstructions('b', intTemp, tempNode->nodeSize - 1);

                                for (int i = 0; i < tempNode->nodeSize - 1; i++)
                                {
                                    firstScan->currentLine->val = doublePointer[i];
                                    firstScan->currentLine = firstScan->currentLine->nextNode;
                                }
                                
                            free(intTemp);
                            free(doublePointer);
                            free(tempNode);

                        }

                        if(temp[2] == w)
                        {

                            firstScan->DC = firstScan->DC + (4 * (curNode->nodeSize - 2));
                        }

                        if(temp[2] == h)
                        {
                            firstScan->DC = firstScan->DC + (2 * (curNode->nodeSize - 2));
                            if(firstScan->firstLine->val == 0)
                            {
                                firstScan->firstLine->val = 
                            }
                        }

                        if(temp[2] == h)
                        {
                            firstScan->DC = firstScan->DC + (2 * (curNode->nodeSize - 2));
                        }

                        if(temp[2] == s)
                        {
                            temp = wordParser(temp);
                            firstScan->DC = firstScan->DC + (strlen(temp[1] + 1));
                        }

                        free(temp);


                    }

                    else
                    {
                        curSymbol = createSymbol();
                        addSymbole(curWord->val, firstScan->IC, "data", curSymbol);
                        lastSymbol->nextNode = curSymbol;
                        lastSymbol = curSymbol;
                        firstScan->DC = firstScan->DC + (curNode->nodeSize - 2);
                    }
                }
                if(strcmp(curWord->val,".db"))
                {
                    int * instructionParms = (int*)malloc(curWord->nodeSize * sizeof(int))
                    while(curWord->val != NULL)
                    {
                        instructionParms[i] = atoi(curWord->val);
                        curWord = curWord->nextNode;
                    }

                    
                    
                    freeDInstructions('b',instructionParms, curWord->nodeSize);
                }
            }
        ]
        symbolFlag = 0;
    }
}
