#include <stdlib.h>
#include <stdio.h>
#include <string.h>


#include "rss.h"



Rss* createEmptyRss() {

  Rss* rss = (Rss*)malloc(sizeof(Rss));

  rss->title = (char*)malloc(sizeof(char));
  strcpy(rss->title, "");

  rss->link = (char*)malloc(sizeof(char));
  strcpy(rss->link, "");

  rss->date = (char*)malloc(sizeof(char));
  strcpy(rss->date, "");

  rss->description = (char*)malloc(sizeof(char));
  strcpy(rss->description, "");

  return rss;
}

Rss* createRss(const char* title,
               const char* link,
               const char* date,
               const char* description) {
  Rss* rss = (Rss*)malloc(sizeof(Rss));

  rss->title = (char*)malloc(sizeof(char) * (strlen(title) + 1));
  strcpy(rss->title, title);

  rss->link = (char*)malloc(sizeof(char) * (strlen(link) + 1));
  strcpy(rss->link, link);

  rss->date = (char*)malloc(sizeof(char) * (strlen(date) + 1));
  strcpy(rss->date, date);

  rss->description = (char*)malloc(sizeof(char) * (strlen(description) + 1));
  strcpy(rss->description, description);

  return rss;
}

void printRss(Rss* item) {
  int n = strlen(item->title) + strlen(item->link) + strlen(item->date) +
          strlen(item->description) + 10;

  char* str = (char*)malloc(sizeof(char) * n);

  sprintf(str, "%s\n%s\n%s\n%s\n", item->title, item->link, item->date, item->description);
  printf("%s\n", str);
  free(str);
  return;
}
