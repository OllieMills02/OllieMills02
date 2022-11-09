#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
  char *me = getenv("USER");
  puts(me);
  char buffer[4096] ;
  buffer[0]= '\0';
  strcat(buffer, "/bigtemp/cso1-f22/");
  strcat(buffer, me);
  strcat(buffer, ".chat");
  
 FILE *inbox = fopen(buffer, "r");
 size_t got = fread(buffer, sizeof(char), 4096, inbox);
 char *line = fgets(buffer, 4096, inbox);
 char id[8];
 if(got == 0 || inbox== NULL){
   puts("You have no new messages");}
 else{
   puts("Your new Messages");
   char messages[4096];
   char *line = fgets(messages, 4096, inbox);
   
   printf("%s", buffer);
   }

 puts("Who would you like to send a message to");
 scanf("%s", id);
char message[4096];
scanf("%s", message);
int sizeO = sizeof(message);

  char filepath[4096];
  filepath[0]= '\0';
  strcat(filepath, "/bigtemp/cso1-f22/");
  strcat(filepath, id);
  strcat(filepath, ".chat");
  FILE *otherOut = fopen(filepath, "a");
  fwrite(message, sizeof(char), sizeO, otherOut);

  puts("workd");

  return 0;
  
}
