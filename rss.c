#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "rss.h"

// implement these functions

Rss * createEmptyRss() {
  return createRss("", "", "", "");
}

Rss * createRss(const char * title, const char * link, const char * date, const char * description) {

  Rss *rss = (Rss *)malloc(sizeof(Rss));

  rss->title = (char *)malloc(sizeof(char) * (strlen(title) + 1));
  strcpy(rss->title, title);

  rss->link = (char *)malloc(sizeof(char) * (strlen(link) + 1));
  strcpy(rss->link, link);

  rss->date = (char *)malloc(sizeof(char) * (strlen(date) + 1));
  strcpy(rss->date, date);

  rss->description = (char *)malloc(sizeof(char) * (strlen(discription) + 1));
  strcpy(rss->discription, discription);

  return rss;

}

void printRss(Rss * item) {

  if (item == NULL) {
    char *result = (char *)malloc(sizeof(char) * 7);
    strcpy(result, "(null)");
    return result;
  }

  int n = strlen(rss->title) + strlen(rss->link) + strlen(rss->date) + strlen(rss->discription);

  char *str = (char *)malloc(sizeof(char) * n);

  sprintf(str, "title: %s\tlink: %s\tdate: %s\tdiscription: %s", rss->title, rss->link, rss->date, rss->discription);

    printf("%s\n", str);
    free(str);
    return;
}
