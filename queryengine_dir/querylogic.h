#ifndef _QUERYLOGIC_H_
#define _QUERYLOGIC_H_

// *****************Impementation Spec********************************
// File: querylogic.c
// Author: Delos Chang

// function PROTOTYPES used by querylogic.c 
char** curateWords(char** queryList, char* query);

void sanitizeKeywords(char** queryList);

void cleanUpList(DocumentNode** usedList);

int rankSplit(DocumentNode** saved, int l, int r);

int rankAndPrint(DocumentNode** saved, char* urlDir);

void rankByFrequency(DocumentNode** saved, int l, int r);

DocumentNode* copyDocNode(DocumentNode* docNode, DocumentNode* orig);

DocumentNode** intersection(DocumentNode** final, DocumentNode** list,
    DocumentNode** result, int* resultSlot);

DocumentNode** searchForKeyword(DocumentNode** list, char* keyword, INVERTED_INDEX* indexReload);

void printOutput(DocumentNode* matchedDocNode, char* urlDir);

void copyList(DocumentNode** result, DocumentNode** orig);

DocumentNode** lookUp(DocumentNode** saved, char** queryList, INVERTED_INDEX* indexReload);
//int lookUp(char** queryList, char* urlDir, INVERTED_INDEX* indexReload);

void cleanUpQueryList(char** queryList);
#endif
